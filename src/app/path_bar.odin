package app

import "core:strings"
import "../fs"
import ui "../ui"

// The path bar: a breadcrumb of the active view's folder, which turns into a
// text field for typing a path.
//
// Breadcrumb, by device: click/tap a segment; or focus it (arrows, D-pad)
// and activate. Editing starts with Ctrl+L / Alt+D, the ✎ button, or a
// click on the empty part of the bar. While editing:
//   keyboard -- type; Enter goes, Esc cancels, Tab completes
//   gamepad  -- the on-screen keyboard opens by itself; Menu goes, B cancels
//   touch    -- the ⌨ button shows the on-screen keyboard

// Owner id for Tab completion's background listings; views count up from 1.
COMPLETION_OWNER :: max(u64)

SEGMENT_MAX_WIDTH :: 220
SEGMENT_MIN_WIDTH :: 44
SEGMENT_SEPARATOR_WIDTH :: 14

Path_Editor :: struct {
	editing:          bool,
	field:            ui.Text_Field,
	field_id:         ui.Id,
	focus_field_next: bool,

	show_keyboard:       bool,
	keyboard:            ui.On_Screen_Keyboard,
	focus_keyboard_next: bool,

	// Tab completion for a folder other than the view's own is listed in
	// the background; these say what to do with the result.
	completion_generation: u64,
	completion_pending:    bool,
	completion_text:       string,
	completion_directory:  string,
	completion_prefix:     string,
}

path_editor_destroy :: proc(editor: ^Path_Editor) {
	ui.text_field_destroy(&editor.field)
	clear_completion(editor)
}

@(private)
clear_completion :: proc(editor: ^Path_Editor) {
	delete(editor.completion_text)
	delete(editor.completion_directory)
	delete(editor.completion_prefix)
	editor.completion_text = ""
	editor.completion_directory = ""
	editor.completion_prefix = ""
	editor.completion_pending = false
}

start_path_edit :: proc(a: ^App, ctx: ^ui.Context) {
	editor := &a.path_editor
	editor.editing = true
	ui.text_field_set(&editor.field, active_view(a).path)
	// Typing replaces the whole path, like a browser's address bar.
	editor.field.all_selected = true
	// A controller has no other way to type, so its keyboard comes up by
	// itself, with focus on its keys; touch users ask for it with the ⌨
	// button. Only one of the two may take focus, or the later one wins.
	editor.show_keyboard = ctx.input_mode == .GAMEPAD
	editor.focus_keyboard_next = editor.show_keyboard
	editor.focus_field_next = !editor.show_keyboard
}

stop_path_edit :: proc(a: ^App) {
	editor := &a.path_editor
	editor.editing = false
	editor.show_keyboard = false
	clear_completion(editor)
	a.focus_view_next = active_view(a)
}

@(private)
submit_path_edit :: proc(a: ^App) {
	text := strings.trim_space(ui.text_field_string(&a.path_editor.field))
	if len(text) == 0 {
		stop_path_edit(a)
		return
	}
	view := active_view(a)
	path := fs.resolve_path(text, view.path, a.places[0].path, context.temp_allocator)
	navigate_to(a, view, path, a.now)
	stop_path_edit(a)
}

build_path_bar :: proc(a: ^App, ctx: ^ui.Context, rect: ui.Rect) {
	if a.path_editor.editing {
		build_path_field(a, ctx, rect)
	} else {
		build_breadcrumb(a, ctx, rect)
	}
}

@(private)
build_path_field :: proc(a: ^App, ctx: ^ui.Context, rect: ui.Rect) {
	editor := &a.path_editor
	row := rect
	keyboard_button := ui.cut_right(&row, 44)
	ui.cut_right(&row, ctx.theme.spacing)

	events := ui.text_field(ctx, "path", row, &editor.field, true)
	editor.field_id = editor.field.id
	if .SUBMITTED in events {
		submit_path_edit(a)
		return
	}
	if .CANCELLED in events {
		stop_path_edit(a)
		return
	}
	if .COMPLETE in events do complete_path(a)
	if .CHANGED in events do editor.completion_pending = false

	if ui.button(ctx, keyboard_button, "⌨", editor.show_keyboard) {
		editor.show_keyboard = !editor.show_keyboard
		editor.focus_keyboard_next = editor.show_keyboard
		if !editor.show_keyboard do editor.focus_field_next = true
	}

	// B on a controller. (Escape on a keyboard is handled by the field,
	// which owns the keyboard while editing.)
	if ui.nav_pressed(ctx, .CANCEL) {
		ui.consume_nav(ctx, .CANCEL)
		stop_path_edit(a)
	}
}

build_on_screen_keyboard :: proc(a: ^App, ctx: ^ui.Context, rect: ui.Rect) {
	editor := &a.path_editor
	events := ui.on_screen_keyboard(ctx, rect, &editor.field, &editor.keyboard)
	if editor.focus_keyboard_next {
		ui.focus_region_by_id(ctx, editor.keyboard.region_id)
		editor.focus_keyboard_next = false
	}
	if .SUBMITTED in events {
		submit_path_edit(a)
		return
	}
	if .CLOSED in events {
		editor.show_keyboard = false
		editor.focus_field_next = true
	}
}

@(private)
Segment :: struct {
	label: string,
	path:  string,
}

@(private)
build_breadcrumb :: proc(a: ^App, ctx: ^ui.Context, rect: ui.Rect) {
	theme := &ctx.theme
	view := active_view(a)
	now := ctx.input.time
	row := rect

	if ui.button(ctx, ui.cut_right(&row, 44), "✎") do start_path_edit(a, ctx)
	ui.cut_right(&row, theme.spacing)

	// The bar's background doubles as a big "edit" target for the pointer.
	// It isn't a focus stop: the ✎ button is that.
	background := ui.interact_ex(ctx, ui.get_id(ctx, "path background"), row, 0)
	ui.draw_rect(ctx, row, theme.background, theme.radius)
	if .HOVERED in background do ctx.cursor = .TEXT
	if .CLICKED in background do start_path_edit(a, ctx)

	segments := path_segments(a, view.path)
	widths := make([]f32, len(segments), context.temp_allocator)
	for segment, i in segments {
		// +4 past the label's padding: an exact fit can round into the
		// ellipsis and show "Downloa…" with room to spare.
		width := ui.measure_text(ctx, segment.label, 15).x + 24
		widths[i] = clamp(width, SEGMENT_MIN_WIDTH, SEGMENT_MAX_WIDTH)
	}

	// Fit from the end: the current folder and its nearest parents matter
	// most. Anything that doesn't fit folds into a "…" that goes to the
	// nearest hidden ancestor.
	available := row.w - 8
	first_shown := len(segments)
	used: f32 = 0
	for i := len(segments) - 1; i >= 0; i -= 1 {
		needed := widths[i] + SEGMENT_SEPARATOR_WIDTH
		if i < len(segments) - 1 && used + needed > available - SEGMENT_MIN_WIDTH - SEGMENT_SEPARATOR_WIDTH {
			break
		}
		used += needed
		first_shown = i
	}

	inner := ui.inset_xy(row, 4, 4)
	ui.push_clip(ctx, row)
	defer ui.pop_clip(ctx)

	if first_shown > 0 {
		hidden := segments[first_shown - 1]
		if breadcrumb_segment(ctx, ui.cut_left(&inner, SEGMENT_MIN_WIDTH), "…", -1, false) {
			navigate_to(a, view, hidden.path, now)
		}
		breadcrumb_separator(ctx, ui.cut_left(&inner, SEGMENT_SEPARATOR_WIDTH))
	}
	for i in first_shown ..< len(segments) {
		segment := segments[i]
		current := i == len(segments) - 1
		if breadcrumb_segment(ctx, ui.cut_left(&inner, widths[i]), segment.label, i, current) && !current {
			navigate_to(a, view, segment.path, now)
		}
		if !current do breadcrumb_separator(ctx, ui.cut_left(&inner, SEGMENT_SEPARATOR_WIDTH))
	}
}

// One clickable crumb. Its own widget rather than a ui.button so a long
// folder name is cut short with an ellipsis instead of overflowing.
@(private)
breadcrumb_segment :: proc(ctx: ^ui.Context, rect: ui.Rect, label: string, index: int, current: bool) -> bool {
	theme := &ctx.theme
	ui.push_id_int(ctx, index)
	defer ui.pop_id(ctx)
	result := ui.interact(ctx, ui.get_id(ctx, "segment"), rect)

	if .HOVERED in result || .PRESSED in result do ui.draw_rect(ctx, rect, theme.button_hot, theme.radius)
	color := theme.text_dim
	if current do color = theme.text
	ui.label_clipped(ctx, ui.inset_xy(rect, 10, 0), label, color, .CENTER, 15)
	if .FOCUSED in result && ui.show_focus_ring(ctx) {
		ui.draw_rect_outline(ctx, rect, theme.focus_ring, theme.radius, theme.focus_ring_width)
	}
	return .CLICKED in result
}

@(private)
breadcrumb_separator :: proc(ctx: ^ui.Context, rect: ui.Rect) {
	ui.label(ctx, rect, "›", ctx.theme.text_dim, .CENTER, 15)
}

// "/home/me/Documents/notes" becomes Home › Documents › notes when it's
// under the home folder, otherwise / › usr › share.
@(private)
path_segments :: proc(a: ^App, path: string) -> []Segment {
	segments := make([dynamic]Segment, context.temp_allocator)
	home := a.places[0].path
	rest := path
	if path == home || strings.has_prefix(path, strings.concatenate({home, "/"}, context.temp_allocator)) {
		append(&segments, Segment{label = "Home", path = home})
		rest = path[len(home):]
		if home == "/" do rest = path[1:]
	} else {
		append(&segments, Segment{label = "/", path = "/"})
	}
	offset := len(path) - len(rest)
	for part in strings.split_iterator(&rest, "/") {
		offset += len(part) + 1
		if len(part) == 0 do continue
		end := min(offset, len(path))
		if end > 0 && path[end - 1] == '/' do end -= 1
		append(&segments, Segment{label = part, path = path[:end]})
	}
	return segments[:]
}

// Tab: complete the last part of the typed path against what's in its
// folder. Completes as far as all matches agree, adding "/" when only one
// folder matches.
@(private)
complete_path :: proc(a: ^App) {
	editor := &a.path_editor
	view := active_view(a)
	text := fs.expand_home(ui.text_field_string(&editor.field), a.places[0].path, context.temp_allocator)
	slash := strings.last_index_byte(text, '/')
	if slash < 0 do return
	directory := "/"
	if slash > 0 do directory = text[:slash]
	prefix := text[slash + 1:]

	if view.listing != nil && view.listing.path == directory {
		apply_completion(a, view.listing, directory, prefix)
		return
	}
	// Some other folder: list it in the background, like everything else
	// that touches the disk, and finish when it arrives.
	clear_completion(editor)
	editor.completion_generation += 1
	editor.completion_pending = true
	editor.completion_text = strings.clone(ui.text_field_string(&editor.field))
	editor.completion_directory = strings.clone(directory)
	editor.completion_prefix = strings.clone(prefix)
	fs.request_listing(&a.loader, COMPLETION_OWNER, editor.completion_generation, directory, {key = .NAME, folders_first = true}, true)
}

receive_completion :: proc(a: ^App, listing: ^fs.Listing, generation: u64) {
	editor := &a.path_editor
	if !editor.editing || !editor.completion_pending do return
	if generation != editor.completion_generation do return
	// Typing since Tab was pressed makes the result stale.
	if ui.text_field_string(&editor.field) != editor.completion_text do return
	if listing.error == .NONE do apply_completion(a, listing, editor.completion_directory, editor.completion_prefix)
	clear_completion(editor)
}

@(private)
apply_completion :: proc(a: ^App, listing: ^fs.Listing, directory: string, prefix: string) {
	matches := make([dynamic]fs.Entry, context.temp_allocator)
	for entry in listing.entries {
		name := fs.entry_name(listing, entry)
		// Hidden names only when the user has started typing one.
		if .HIDDEN in entry.flags && !strings.has_prefix(prefix, ".") do continue
		if has_prefix_fold(name, prefix) do append(&matches, entry)
	}
	if len(matches) == 0 {
		set_message(a, "No matches")
		return
	}

	common := fs.entry_name(listing, matches[0])
	for entry in matches[1:] {
		name := fs.entry_name(listing, entry)
		length := 0
		for length < len(common) && length < len(name) && common[length] == name[length] do length += 1
		common = common[:length]
	}
	// Matches that differ only in case ("Doc", "doc") share no common
	// prefix; keep what was typed rather than deleting it.
	if len(common) < len(prefix) do common = prefix

	completed := fs.join_path(directory, common, context.temp_allocator)
	if len(matches) == 1 && matches[0].kind == .DIRECTORY {
		completed = strings.concatenate({completed, "/"}, context.temp_allocator)
	}
	ui.text_field_set(&a.path_editor.field, completed)
	a.path_editor.field.all_selected = false
	if len(matches) > 1 do set_message(a, "%d matches", len(matches))
}
