package app

import "base:runtime"
import "core:fmt"
import "core:strings"
import "core:sync"
import "core:time"
import "core:time/timezone"
import "../fs"
import ui "../ui"

// Copy, cut, paste, rename, new folder/file, trash and delete.
//
// Everything that touches the disk runs as a job on the worker (fs/jobs.odin)
// so the window never stalls; the status bar shows progress and the action
// bar a Cancel button. Nothing ever overwrites: pasting onto an existing
// name makes "name (2)". (An ask-what-to-do dialog arrives in M4.)
//
// What an operation acts on: the selected items, or the item under the
// cursor when nothing is selected.
//
// By device:
//   keyboard -- Ctrl+C / Ctrl+X / Ctrl+V, F2, Ctrl+Shift+N (new folder),
//               Delete (trash), Shift+Delete (delete permanently)
//   mouse / touch / gamepad -- the action bar under the file list. Y on a
//               controller jumps straight to it.

ACTION_BAR_HEIGHT :: 56

Clipboard_Mode :: enum u8 {
	COPY,
	CUT,
}

Clipboard :: struct {
	mode:  Clipboard_Mode,
	paths: [dynamic]string,
}

clipboard_clear :: proc(clipboard: ^Clipboard) {
	for path in clipboard.paths do delete(path)
	clear(&clipboard.paths)
}

// Full paths of what an operation should act on, in display order.
operation_targets :: proc(view: ^View, allocator := context.temp_allocator) -> []string {
	targets := make([dynamic]string, allocator)
	if view.listing == nil || view.loading do return targets[:]
	if view.selected_count > 0 {
		for entry_index in view.order {
			if !view.selected[entry_index] do continue
			name := fs.entry_name(view.listing, view.listing.entries[entry_index])
			append(&targets, fs.join_path(view.listing.path, name, allocator))
		}
		return targets[:]
	}
	entry, ok := cursor_entry(view)
	if ok do append(&targets, fs.join_path(view.listing.path, fs.entry_name(view.listing, entry), allocator))
	return targets[:]
}

copy_to_clipboard :: proc(a: ^App, ctx: ^ui.Context, mode: Clipboard_Mode) {
	targets := operation_targets(active_view(a))
	if len(targets) == 0 do return
	clipboard_clear(&a.clipboard)
	a.clipboard.mode = mode
	for target in targets do append(&a.clipboard.paths, strings.clone(target))

	// The paths go on the system clipboard too, as text, so they can be
	// pasted into a terminal or an editor.
	if ctx.backend.set_clipboard != nil {
		ctx.backend.set_clipboard(ctx.backend.user_data, strings.join(targets, "\n", context.temp_allocator))
	}
	verb := "Copied"
	if mode == .CUT do verb = "Cut"
	set_message(a, "%s %s — paste to put %s here or in another folder", verb, describe_count(targets), them_or_it(len(targets)))
}

paste :: proc(a: ^App) {
	if len(a.clipboard.paths) == 0 do return
	view := active_view(a)
	if view.listing == nil || view.listing.error != .NONE do return
	kind := fs.Job_Kind.COPY
	if a.clipboard.mode == .CUT do kind = .MOVE
	start_file_job(a, fs.job_create(kind, a.clipboard.paths[:], view.listing.path))
	// Cut items are moved once; pasting them again would find nothing.
	if a.clipboard.mode == .CUT do clipboard_clear(&a.clipboard)
}

trash_targets :: proc(a: ^App) {
	targets := operation_targets(active_view(a))
	if len(targets) == 0 do return
	job := fs.job_create(.TRASH, targets)
	// Job strings are freed by job_destroy with the heap allocator.
	job.home_trash = fs.home_trash_directory(runtime.heap_allocator())
	job.deletion_date = strings.clone(trash_timestamp(a), runtime.heap_allocator())
	start_file_job(a, job)
}

// Permanent delete always asks first; see build_delete_dialog.
request_delete :: proc(a: ^App) {
	targets := operation_targets(active_view(a))
	if len(targets) == 0 do return
	clear_pending_delete(a)
	for target in targets do append(&a.pending_delete, strings.clone(target))
}

@(private)
clear_pending_delete :: proc(a: ^App) {
	for path in a.pending_delete do delete(path)
	clear(&a.pending_delete)
}

create_new :: proc(a: ^App, kind: fs.Job_Kind) {
	view := active_view(a)
	if view.listing == nil || view.listing.error != .NONE do return
	start_file_job(a, fs.job_create(kind, nil, view.listing.path))
}

start_file_job :: proc(a: ^App, job: ^fs.Job) {
	fs.start_job(&a.jobs, job)
}

// Local time in the trash spec's format: 2026-10-12T14:03:00.
@(private)
trash_timestamp :: proc(a: ^App) -> string {
	date_time, ok := time.time_to_datetime(time.now())
	if !ok do return ""
	if a.time_zone != nil {
		local, converted := timezone.datetime_to_tz(date_time, a.time_zone)
		if converted do date_time = local
	}
	return fmt.tprintf("%04d-%02d-%02dT%02d:%02d:%02d", date_time.year, date_time.month, date_time.day, date_time.hour, date_time.minute, date_time.second)
}

// Collects finished jobs: reports how they went, refreshes every view that
// shows an affected folder, and selects what was created.
receive_finished_jobs :: proc(a: ^App, ctx: ^ui.Context) {
	finished := make([dynamic]^fs.Job, context.temp_allocator)
	fs.take_finished_jobs(&a.jobs, &finished)
	for job in finished {
		report_job(a, job)

		folders := make([dynamic]string, context.temp_allocator)
		if len(job.destination) > 0 {
			if job.kind == .RENAME {
				append(&folders, fs.parent_path(job.destination))
			} else {
				append(&folders, job.destination)
			}
		}
		for source in job.sources do append(&folders, fs.parent_path(source))

		// Put the cursor on what was made: a pasted item, a new folder, a
		// renamed file -- in the folder it was made in.
		select_name := ""
		select_in := ""
		if len(job.created) > 0 {
			select_name = fs.base_name(job.created[0])
			select_in = fs.parent_path(job.created[0])
		}
		refresh_folders(a, folders[:], select_name, select_in)

		// A new folder or file goes straight into rename, like everywhere
		// else: you nearly always want to name it.
		if (job.kind == .CREATE_FOLDER || job.kind == .CREATE_FILE) && len(job.created) > 0 {
			view := active_view(a)
			if view.path == job.destination {
				delete(a.rename_after_load)
				a.rename_after_load = strings.clone(fs.base_name(job.created[0]))
			}
		}
		fs.job_destroy(job)
	}
}

@(private)
refresh_folders :: proc(a: ^App, folders: []string, select_name: string, select_in: string) {
	for tab in a.tabs {
		views := make([dynamic]^View, context.temp_allocator)
		collect_views(tab.root, &views)
		for view in views {
			affected := false
			for folder in folders {
				if view.path == folder do affected = true
			}
			if !affected do continue
			refresh(a, view, a.now)
			if len(select_name) > 0 && view.path == select_in {
				delete(view.select_after_load)
				view.select_after_load = strings.clone(select_name)
			}
		}
	}
}

@(private)
report_job :: proc(a: ^App, job: ^fs.Job) {
	if len(job.failures) > 0 {
		failure := job.failures[0]
		if failure.error == .CANCELLED {
			set_message(a, "%s cancelled", job_noun(job.kind))
			return
		}
		more := ""
		if len(job.failures) > 1 do more = fmt.tprintf(" (and %d more)", len(job.failures) - 1)
		set_message(a, "Couldn't %s “%s”: %s%s", job_verb(job.kind), fs.base_name(failure.path), fs.op_error_message(failure.error), more)
		return
	}
	switch job.kind {
	case .COPY:
		set_message(a, "Copied %s", describe_count(job.sources))
	case .MOVE:
		set_message(a, "Moved %s", describe_count(job.sources))
	case .TRASH:
		set_message(a, "Moved %s to the trash", describe_count(job.sources))
	case .DELETE:
		set_message(a, "Deleted %s permanently", describe_count(job.sources))
	case .RENAME:
		set_message(a, "Renamed to “%s”", fs.base_name(job.destination))
	case .CREATE_FOLDER, .CREATE_FILE:
	}
}

@(private)
job_verb :: proc(kind: fs.Job_Kind) -> string {
	switch kind {
	case .COPY:
		return "copy"
	case .MOVE:
		return "move"
	case .TRASH:
		return "move to the trash"
	case .DELETE:
		return "delete"
	case .RENAME:
		return "rename"
	case .CREATE_FOLDER:
		return "create a folder in"
	case .CREATE_FILE:
		return "create a file in"
	}
	return ""
}

@(private)
job_noun :: proc(kind: fs.Job_Kind) -> string {
	switch kind {
	case .COPY:
		return "Copying"
	case .MOVE:
		return "Moving"
	case .TRASH:
		return "Moving to the trash"
	case .DELETE:
		return "Deleting"
	case .RENAME:
		return "Renaming"
	case .CREATE_FOLDER, .CREATE_FILE:
		return "Creating"
	}
	return ""
}

// "“notes.txt”" for one item, "3 items" for several.
@(private)
describe_count :: proc(paths: []string) -> string {
	if len(paths) == 1 do return fmt.tprintf("“%s”", fs.base_name(paths[0]))
	return fmt.tprintf("%d items", len(paths))
}

@(private)
them_or_it :: proc(count: int) -> string {
	if count == 1 do return "it"
	return "them"
}

// "Copying 12 of 340 · 1.2 GiB of 3.4 GiB", or "" when nothing is running.
job_progress_text :: proc(a: ^App) -> string {
	job := fs.current_job(&a.jobs)
	if job == nil do return ""
	files_done := sync.atomic_load(&job.progress.files_done)
	files_total := sync.atomic_load(&job.progress.files_total)
	bytes_done := sync.atomic_load(&job.progress.bytes_done)
	bytes_total := sync.atomic_load(&job.progress.bytes_total)
	text := fmt.tprintf("%s %d of %d", job_noun(job.kind), files_done, files_total)
	if bytes_total > 0 {
		text = fmt.tprintf("%s · %s of %s", text, format_size(u64(bytes_done)), format_size(u64(bytes_total)))
	}
	queued := fs.queued_job_count(&a.jobs)
	if queued > 0 do text = fmt.tprintf("%s · %d more waiting", text, queued)
	return text
}

// The bar of file actions under the file list. It's how a controller or a
// touchscreen reaches every operation (context menus arrive in M4); buttons
// that don't apply right now are dimmed and skipped by focus.
build_action_bar :: proc(a: ^App, ctx: ^ui.Context, area: ui.Rect) {
	theme := &ctx.theme
	ui.panel(ctx, area)
	ui.draw_rect(ctx, ui.Rect{area.x, area.y, area.w, 1}, theme.panel_border)
	row := ui.inset(area, 8)
	view := active_view(a)

	ui.begin_region(ctx, "Actions", area)
	defer ui.end_region(ctx)
	defer if a.focus_actions_next {
		// After the buttons exist this frame, so there's something to land on.
		ui.focus_region_by_id(ctx, ui.current_region(ctx))
		a.focus_actions_next = false
	}

	targets := len(operation_targets(view))
	ready := view.listing != nil && view.listing.error == .NONE && !view.loading
	spacing := theme.spacing

	if ui.button(ctx, ui.cut_left(&row, 112), "New folder", false, ready) do create_new(a, .CREATE_FOLDER)
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 96), "New file", false, ready) do create_new(a, .CREATE_FILE)
	ui.cut_left(&row, spacing * 3)
	if ui.button(ctx, ui.cut_left(&row, 72), "Copy", false, targets > 0) do copy_to_clipboard(a, ctx, .COPY)
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 64), "Cut", false, targets > 0) do copy_to_clipboard(a, ctx, .CUT)
	ui.cut_left(&row, spacing)
	paste_label := "Paste"
	if len(a.clipboard.paths) > 0 do paste_label = fmt.tprintf("Paste (%d)", len(a.clipboard.paths))
	if ui.button(ctx, ui.cut_left(&row, 104), paste_label, false, ready && len(a.clipboard.paths) > 0) do paste(a)
	ui.cut_left(&row, spacing * 3)
	if ui.button(ctx, ui.cut_left(&row, 84), "Rename", false, targets == 1) {
		start_rename(a, ctx, view, rename_position(view))
	}
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 72), "Trash", false, targets > 0) do trash_targets(a)
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 84), "Delete…", false, targets > 0) do request_delete(a)

	// While a job runs, its Cancel sits at the far end.
	if fs.current_job(&a.jobs) != nil {
		if ui.button(ctx, ui.cut_right(&row, 96), "Cancel") do fs.cancel_current_job(&a.jobs)
	}
}

// The single target's display position: the one selected item, or the
// cursor.
rename_position :: proc(view: ^View) -> int {
	if view.selected_count == 1 {
		for entry_index, position in view.order {
			if view.selected[entry_index] do return position
		}
	}
	return view.cursor
}

// Asks before deleting permanently. Returns true while the dialog is up.
build_delete_dialog :: proc(a: ^App, ctx: ^ui.Context) -> bool {
	if len(a.pending_delete) == 0 do return false
	what := describe_count(a.pending_delete[:])
	result := ui.confirm_dialog(ctx, "Delete permanently?", fmt.tprintf("%s will be deleted. This can't be undone.", what), "Delete")
	switch result {
	case .NONE:
	case .CONFIRMED:
		start_file_job(a, fs.job_create(.DELETE, a.pending_delete[:]))
		clear_pending_delete(a)
	case .CANCELLED:
		clear_pending_delete(a)
	}
	return true
}
