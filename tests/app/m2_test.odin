package app_test

import "core:testing"
import "../../src/app"
import "../../src/fs"
import ui "../../src/ui"

// Tabs, split views, history and the path bar, driven through the same
// harness as app_test.odin.

press_pad :: proc(h: ^Harness, button: ui.Gamepad_Button, held: ui.Gamepad_Buttons = {}) {
	h.input.gamepad_connected = true
	h.input.gamepad_down = held + {button}
	h.input.gamepad_pressed = {button}
	run_frame(h)
	h.input.gamepad_down = held
	run_frames(h, 2)
}

@(test)
back_and_forward_restore_folder_and_cursor :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	view := app.active_view(&h.state)

	press_key(&h, .ENTER)
	wait_for_listing(t, &h)
	testing.expect_value(t, fs.base_name(view.path), "folder")

	press_key(&h, .LEFT, {.ALT})
	wait_for_listing(t, &h)
	testing.expect_value(t, view.path, h.dir)
	testing.expect_value(t, cursor_name(&h), "folder")

	press_key(&h, .RIGHT, {.ALT})
	wait_for_listing(t, &h)
	testing.expect_value(t, fs.base_name(view.path), "folder")

	// The mouse's back button does the same.
	h.input.mouse_pressed = {.BACK}
	run_frame(&h)
	wait_for_listing(t, &h)
	testing.expect_value(t, view.path, h.dir)
}

@(test)
tabs_with_keyboard :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	press_key(&h, .T, {.CONTROL})
	wait_for_listing(t, &h)
	testing.expect_value(t, len(h.state.tabs), 2)
	testing.expect_value(t, h.state.active_tab, 1)
	testing.expect_value(t, app.active_view(&h.state).path, h.dir)

	// The new tab navigates on its own.
	press_key(&h, .ENTER)
	wait_for_listing(t, &h)
	testing.expect_value(t, fs.base_name(app.active_view(&h.state).path), "folder")
	press_key(&h, .TAB, {.CONTROL})
	testing.expect_value(t, h.state.active_tab, 0)
	testing.expect_value(t, app.active_view(&h.state).path, h.dir)

	press_key(&h, .W, {.CONTROL})
	testing.expect_value(t, len(h.state.tabs), 1)
	testing.expect_value(t, fs.base_name(app.active_view(&h.state).path), "folder")

	// The last tab stays.
	press_key(&h, .W, {.CONTROL})
	testing.expect_value(t, len(h.state.tabs), 1)
}

@(test)
tabs_with_controller :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	app.update_gamepad_modifiers(&h.state, &h.ctx)
	h.input.gamepad_connected = true
	run_frame(&h)

	// One tab: LB and RB do nothing at all -- focus stays where it was.
	press_pad(&h, .DPAD_LEFT)
	focus_before := h.ctx.focus
	press_pad(&h, .RIGHT_SHOULDER)
	press_pad(&h, .LEFT_SHOULDER)
	testing.expect_value(t, h.state.active_tab, 0)
	testing.expect_value(t, h.ctx.focus, focus_before)

	// Hold View, pull RT: a new tab.
	h.input.gamepad_down = {.SELECT}
	run_frame(&h)
	press_pad(&h, .RIGHT_TRIGGER, {.SELECT})
	testing.expect_value(t, len(h.state.tabs), 2)
	testing.expect_value(t, h.state.active_tab, 1)
	h.input.gamepad_down = {}
	run_frames(&h, 3)

	// RB and LB on their own switch tabs, wrapping round.
	press_pad(&h, .RIGHT_SHOULDER)
	testing.expect_value(t, h.state.active_tab, 0)
	press_pad(&h, .LEFT_SHOULDER)
	testing.expect_value(t, h.state.active_tab, 1)
	// RB no longer moves focus to another area: it lands on the new
	// tab's file list.
	press_pad(&h, .RIGHT_SHOULDER)
	run_frames(&h, 2)
	testing.expect(t, ui.has_focus(&h.ctx, app.active_view(&h.state).list_id), "focus is on the tab's file list")


	// RT on its own still pages down rather than opening a tab.
	press_pad(&h, .RIGHT_TRIGGER)
	testing.expect_value(t, len(h.state.tabs), 2)
}

@(test)
split_views_navigate_independently :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	tab := app.active_tab(&h.state)
	first := app.active_view(&h.state)

	press_key(&h, .F3)
	wait_for_listing(t, &h)
	testing.expect_value(t, app.view_count(tab.root), 2)
	second := app.active_view(&h.state)
	testing.expect(t, second != first, "the new view is active")
	testing.expect(t, ui.has_focus(&h.ctx, second.list_id), "and focused")

	press_key(&h, .ENTER)
	wait_for_listing(t, &h)
	testing.expect_value(t, fs.base_name(second.path), "folder")
	testing.expect_value(t, first.path, h.dir)

	// F6 moves to the other view; it's where the toolbar now acts.
	press_key(&h, .F6)
	testing.expect(t, app.active_view(&h.state) == first)

	// The views are now too narrow (the harness screen is 1000px wide)
	// for another side-by-side split.
	press_key(&h, .F3)
	testing.expect_value(t, app.view_count(tab.root), 2)

	press_key(&h, .W, {.CONTROL, .SHIFT})
	testing.expect_value(t, app.view_count(tab.root), 1)
	testing.expect(t, app.active_view(&h.state) == second, "the remaining view takes over")
}

@(test)
path_edit_with_keyboard :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	view := app.active_view(&h.state)

	press_key(&h, .L, {.CONTROL})
	run_frames(&h, 2)
	testing.expect(t, h.state.path_editor.editing)
	testing.expect(t, ui.has_focus(&h.ctx, h.state.path_editor.field_id), "the field has focus")

	// Typing replaces the selected path; a relative path is relative to
	// the current folder. Backspace edits the text instead of going up.
	type_text(&h, "folderx")
	press_key(&h, .BACKSPACE)
	testing.expect_value(t, view.path, h.dir)
	testing.expect_value(t, ui.text_field_string(&h.state.path_editor.field), "folder")
	press_key(&h, .ENTER)
	wait_for_listing(t, &h)
	testing.expect(t, !h.state.path_editor.editing)
	testing.expect_value(t, fs.base_name(view.path), "folder")

	// Escape cancels without going anywhere.
	press_key(&h, .L, {.CONTROL})
	type_text(&h, "/nowhere")
	press_key(&h, .ESCAPE)
	testing.expect(t, !h.state.path_editor.editing)
	testing.expect_value(t, fs.base_name(view.path), "folder")
}

@(test)
path_tab_completion :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	// In the current folder: completes from the listing straight away.
	press_key(&h, .L, {.CONTROL})
	type_text(&h, h.dir)
	type_text(&h, "/fol")
	press_key(&h, .TAB)
	testing.expect_value(t, ui.text_field_string(&h.state.path_editor.field), fs.join_path(h.dir, "folder/", context.temp_allocator))

	// In another folder: listed in the background, then completed.
	type_text(&h, "ins")
	press_key(&h, .TAB)
	for _ in 0 ..< 200 {
		if !h.state.path_editor.completion_pending do break
		run_frame(&h)
	}
	testing.expect_value(t, ui.text_field_string(&h.state.path_editor.field), fs.join_path(h.dir, "folder/inside.txt", context.temp_allocator))
}

@(test)
path_edit_with_controller :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	view := app.active_view(&h.state)
	h.input.gamepad_connected = true
	press_pad(&h, .DPAD_DOWN)

	// From a controller, editing brings up the on-screen keyboard.
	app.start_path_edit(&h.state, &h.ctx)
	run_frames(&h, 3)
	testing.expect(t, h.state.path_editor.show_keyboard)

	// X is backspace; with the whole path selected it clears it.
	press_pad(&h, .FACE_LEFT)
	testing.expect_value(t, ui.text_field_string(&h.state.path_editor.field), "")

	// B cancels.
	press_pad(&h, .FACE_RIGHT)
	testing.expect(t, !h.state.path_editor.editing)
	testing.expect_value(t, view.path, h.dir)
}

@(test)
resolve_typed_paths :: proc(t: ^testing.T) {
	home := "/home/me"
	cases := [?]struct {
		typed, base, expected: string,
	}{
		{"~", "/tmp", "/home/me"},
		{"~/Documents/", "/tmp", "/home/me/Documents"},
		{"..", "/usr/share", "/usr"},
		{"../lib//x/./", "/usr/share", "/usr/lib/x"},
		{"/../..", "/tmp", "/"},
		{"notes", "/home/me", "/home/me/notes"},
		{"/etc", "/home/me", "/etc"},
	}
	for c in cases {
		got := fs.resolve_path(c.typed, c.base, home, context.temp_allocator)
		testing.expectf(t, got == c.expected, "%q from %q: got %q, want %q", c.typed, c.base, got, c.expected)
	}
}

@(test)
every_action_is_configurable :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	text := app.bindings_text(&h.state, &h.ctx, context.temp_allocator)
	// Clearing all bindings, then reading the default file back, must
	// restore every action: none may be missing from the file.
	before := h.state.bindings
	h.state.bindings = {}
	problems: [dynamic]string
	defer delete(problems)
	app.apply_bindings_text(&h.state, &h.ctx, text, &problems)
	for action in app.Action {
		testing.expectf(t, h.state.bindings[action] == before[action], "%v round-trips through the file", action)
	}
}

@(test)
splitter_resizes_by_drag_and_keys :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	press_key(&h, .F3)
	wait_for_listing(t, &h)
	root := app.active_tab(&h.state).root

	// The views share x 200..1000; at 0.5 the splitter sits at 597..603.
	h.input.pointer_position = {600, 300}
	run_frames(&h, 2)
	h.input.mouse_pressed = {.LEFT}
	h.input.mouse_down = {.LEFT}
	run_frame(&h)
	for _ in 0 ..< 5 {
		h.input.pointer_position.x += 20
		run_frame(&h)
	}
	h.input.mouse_down = {}
	h.input.mouse_released = {.LEFT}
	run_frames(&h, 2)
	testing.expectf(t, root.ratio > 0.6, "dragging right grows the left view: %v", root.ratio)

	// Focus the splitter from the left view with the arrow keys, then
	// nudge it back.
	press_key(&h, .F6)
	before := root.ratio
	press_key(&h, .RIGHT)
	press_key(&h, .LEFT)
	testing.expectf(t, root.ratio < before, "Left on a focused splitter shrinks the left view: %v -> %v", before, root.ratio)

	// It never goes below the minimum view width.
	for _ in 0 ..< 30 do press_key(&h, .LEFT)
	left_width := (800 - 6) * root.ratio
	testing.expectf(t, left_width >= 299, "the left view keeps its minimum width: %v", left_width)
}

@(test)
right_from_the_list_with_nothing_beside_it_stays :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	view := app.active_view(&h.state)
	press_key(&h, .RIGHT)
	testing.expect(t, ui.has_focus(&h.ctx, view.list_id), "focus stays on the list, not a column header")
	press_key(&h, .LEFT)
	testing.expect(t, !ui.has_focus(&h.ctx, view.list_id), "Left still reaches the sidebar")
}

@(test)
area_jump_mode_option :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	testing.expect_value(t, h.ctx.region_jump_mode, ui.Area_Jump_Mode.TOGGLE)
	testing.expect(t, h.ctx.region_jump_activate == ui.triggers(ui.pad_chord(.LEFT_TRIGGER, .RIGHT_TRIGGER)), "LT+RT by default")

	problems: [dynamic]string
	defer {
		for problem in problems do delete(problem)
		delete(problems)
	}
	app.apply_bindings_text(&h.state, &h.ctx, "[options]\narea_jump_mode = hold\n", &problems)
	testing.expect_value(t, h.ctx.region_jump_mode, ui.Area_Jump_Mode.HOLD)
	testing.expect_value(t, len(problems), 0)

	app.apply_bindings_text(&h.state, &h.ctx, "[options]\narea_jump_mode = sometimes\nfrobnicate = 1\n", &problems)
	testing.expect_value(t, len(problems), 2)
	testing.expect_value(t, h.ctx.region_jump_mode, ui.Area_Jump_Mode.HOLD)

	// The written file carries the option, and reading it back keeps it.
	text := app.bindings_text(&h.state, &h.ctx, context.temp_allocator)
	h.ctx.region_jump_mode = .TOGGLE
	for problem in problems do delete(problem)
	clear(&problems)
	app.apply_bindings_text(&h.state, &h.ctx, text, &problems)
	testing.expect_value(t, h.ctx.region_jump_mode, ui.Area_Jump_Mode.HOLD)
}
