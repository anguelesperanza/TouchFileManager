package app

import "core:strings"
import "../fs"
import ui "../ui"

// Typing text: a path into the path bar, or a new name for a file. One
// entry is active at a time, and both share the on-screen keyboard and the
// rules for who owns the keyboard while typing.
//
// While an entry is active the app's own shortcuts are paused: keys and
// buttons belong to the text field and the on-screen keyboard.
//   keyboard -- type; Enter accepts, Esc cancels
//   gamepad  -- the on-screen keyboard opens by itself; Menu accepts, B cancels
//   touch    -- the ⌨ button shows the on-screen keyboard

Entry_Purpose :: enum u8 {
	NONE,
	PATH,
	RENAME,
}

Text_Entry :: struct {
	purpose:          Entry_Purpose,
	editing:          bool,
	field:            ui.Text_Field,
	field_id:         ui.Id,
	focus_field_next: bool,

	show_keyboard:       bool,
	keyboard:            ui.On_Screen_Keyboard,
	focus_keyboard_next: bool,

	// The item being renamed: its folder and current name, in which view.
	rename_view_id:   u64,
	rename_directory: string,
	rename_name:      string,

	// Tab completion for a folder other than the view's own is listed in
	// the background; these say what to do with the result.
	completion_generation: u64,
	completion_pending:    bool,
	completion_text:       string,
	completion_directory:  string,
	completion_prefix:     string,
}

text_entry_destroy :: proc(entry: ^Text_Entry) {
	ui.text_field_destroy(&entry.field)
	clear_completion(entry)
	clear_rename_target(entry)
}

@(private)
clear_completion :: proc(entry: ^Text_Entry) {
	delete(entry.completion_text)
	delete(entry.completion_directory)
	delete(entry.completion_prefix)
	entry.completion_text = ""
	entry.completion_directory = ""
	entry.completion_prefix = ""
	entry.completion_pending = false
}

@(private)
clear_rename_target :: proc(entry: ^Text_Entry) {
	delete(entry.rename_directory)
	delete(entry.rename_name)
	entry.rename_directory = ""
	entry.rename_name = ""
	entry.rename_view_id = 0
}

@(private)
begin_text_entry :: proc(a: ^App, ctx: ^ui.Context, purpose: Entry_Purpose, text: string) {
	entry := &a.entry
	if entry.editing do stop_text_entry(a)
	entry.purpose = purpose
	entry.editing = true
	ui.text_field_set(&entry.field, text)
	entry.field.all_selected = false
	// A controller has no other way to type, so its keyboard comes up by
	// itself, with focus on its keys; touch users ask for it with the ⌨
	// button. Only one of the two may take focus, or the later one wins.
	entry.show_keyboard = ctx.input_mode == .GAMEPAD
	entry.focus_keyboard_next = entry.show_keyboard
	entry.focus_field_next = !entry.show_keyboard
}

start_path_edit :: proc(a: ^App, ctx: ^ui.Context) {
	begin_text_entry(a, ctx, .PATH, active_view(a).path)
	// Typing replaces the whole path, like a browser's address bar.
	a.entry.field.all_selected = true
}

// Renames the item at `position` in `view`, editing its name in place.
start_rename :: proc(a: ^App, ctx: ^ui.Context, view: ^View, position: int) {
	if view.listing == nil || position < 0 || position >= len(view.order) do return
	name := fs.entry_name(view.listing, view.listing.entries[view.order[position]])
	begin_text_entry(a, ctx, .RENAME, name)
	entry := &a.entry
	entry.rename_view_id = view.id
	entry.rename_directory = strings.clone(view.listing.path)
	entry.rename_name = strings.clone(name)

	// The caret goes before the extension, so typing changes the name and
	// keeps ".jpg" -- the usual thing to want.
	extension := fs.extension_of(name)
	if len(extension) > 0 do entry.field.caret = len(name) - len(extension) - 1

	view.cursor = position
	view.scroll_to_cursor = true
}

stop_text_entry :: proc(a: ^App) {
	entry := &a.entry
	entry.editing = false
	entry.purpose = .NONE
	entry.show_keyboard = false
	clear_completion(entry)
	clear_rename_target(entry)
	a.focus_view_next = active_view(a)
}

submit_text_entry :: proc(a: ^App) {
	entry := &a.entry
	text := strings.trim_space(ui.text_field_string(&entry.field))
	switch entry.purpose {
	case .NONE:
	case .PATH:
		if len(text) > 0 {
			view := active_view(a)
			path := fs.resolve_path(text, view.path, a.places[0].path, context.temp_allocator)
			navigate_to(a, view, path, a.now)
		}
	case .RENAME:
		submit_rename(a, text)
		return
	}
	stop_text_entry(a)
}

@(private)
submit_rename :: proc(a: ^App, name: string) {
	entry := &a.entry
	switch {
	case name == entry.rename_name || len(name) == 0:
		// Unchanged or cleared: nothing to do.
	case strings.contains_rune(name, '/') || name == "." || name == "..":
		// Keep the field open so the name can be fixed.
		set_message(a, "A name can't contain “/” or be “.” or “..”")
		return
	case:
		old_path := fs.join_path(entry.rename_directory, entry.rename_name, context.temp_allocator)
		new_path := fs.join_path(entry.rename_directory, name, context.temp_allocator)
		start_file_job(a, fs.job_create(.RENAME, []string{old_path}, new_path))
	}
	stop_text_entry(a)
}

// Handles a text field's events for whichever entry is active. Returns
// true when the entry ended (accepted or cancelled).
handle_text_entry_events :: proc(a: ^App, events: ui.Text_Field_Events) -> bool {
	if .SUBMITTED in events {
		submit_text_entry(a)
		return true
	}
	if .CANCELLED in events {
		stop_text_entry(a)
		return true
	}
	if .COMPLETE in events && a.entry.purpose == .PATH do complete_path(a)
	if .CHANGED in events do a.entry.completion_pending = false
	return false
}

// The ⌨ button beside a field: shows or hides the on-screen keyboard.
build_keyboard_toggle :: proc(a: ^App, ctx: ^ui.Context, rect: ui.Rect) {
	entry := &a.entry
	if ui.button(ctx, rect, "⌨", entry.show_keyboard) {
		entry.show_keyboard = !entry.show_keyboard
		entry.focus_keyboard_next = entry.show_keyboard
		if !entry.show_keyboard do entry.focus_field_next = true
	}
}

build_on_screen_keyboard :: proc(a: ^App, ctx: ^ui.Context, rect: ui.Rect) {
	entry := &a.entry
	events := ui.on_screen_keyboard(ctx, rect, &entry.field, &entry.keyboard)
	// Whenever the keyboard opens -- by itself for a controller, or from
	// the ⌨ button -- focus moves onto its keys, and the ring shows even if
	// it was opened with a tap, so it's clear where typing will go.
	if entry.focus_keyboard_next {
		ui.focus_region_by_id(ctx, entry.keyboard.region_id)
		ui.reveal_focus(ctx)
		entry.focus_keyboard_next = false
	}
	if .SUBMITTED in events {
		submit_text_entry(a)
		return
	}
	if .CLOSED in events {
		entry.show_keyboard = false
		entry.focus_field_next = true
	}
}
