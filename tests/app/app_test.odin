package app_test

import "core:os"
import "core:testing"
import "core:time"
import "../../src/app"
import "../../src/fs"
import ui "../../src/ui"

// Drives the real app against a scratch directory with a fake backend,
// freeing the temp allocator between frames exactly as main does.

fake_measure :: proc(font: ui.Font_Id, size: f32, text: string, user_data: rawptr) -> ui.Vec2 {
	return {f32(len(text)) * size * 0.5, size}
}

Harness :: struct {
	ctx:   ui.Context,
	state: app.App,
	input: ui.Input,
	dir:   string,
}

FILES :: [?]string{"alpha.txt", "beta.txt", "gamma.txt", "three.iso", "zeta.md"}

harness_init :: proc(t: ^testing.T, h: ^Harness, file_count: int = 0) {
	base, _ := os.temp_directory(context.temp_allocator)
	dir, err := os.make_directory_temp(base, "fm-app-test-*", context.allocator)
	testing.expect(t, err == nil)
	h.dir = dir
	os.make_directory(fs.join_path(dir, "folder", context.temp_allocator))
	_ = os.write_entire_file(fs.join_path(dir, "folder/inside.txt", context.temp_allocator), []u8{})
	for name in FILES do _ = os.write_entire_file(fs.join_path(dir, name, context.temp_allocator), []u8{1})
	for i in 0 ..< file_count {
		name := fs.join_path(dir, fmt_name(i), context.temp_allocator)
		_ = os.write_entire_file(name, []u8{})
	}

	ui.init(&h.ctx, ui.Backend{measure_text = fake_measure})
	app.init(&h.state, dir)
	h.input.screen_size = {1000, 600}
	h.input.pointer_position = {990, 590}
	wait_for_listing(t, h)
}

fmt_name :: proc(i: int) -> string {
	buffer := make([]u8, 16, context.temp_allocator)
	digits := "0123456789"
	buffer[0] = 'n'
	n := i
	for k := 6; k >= 1; k -= 1 {
		buffer[k] = digits[n % 10]
		n /= 10
	}
	return string(buffer[:7])
}

harness_destroy :: proc(h: ^Harness) {
	app.destroy(&h.state)
	ui.destroy(&h.ctx)
	os.remove_all(h.dir)
	delete(h.dir)
}

run_frame :: proc(h: ^Harness) {
	ui.begin_frame(&h.ctx, h.input)
	app.build(&h.state, &h.ctx)
	ui.end_frame(&h.ctx)
	free_all(context.temp_allocator)

	h.input.mouse_pressed = {}
	h.input.mouse_released = {}
	h.input.keys_pressed = {}
	h.input.gamepad_pressed = {}
	h.input.text_count = 0
	h.input.time += 1.0 / 60.0
}

run_frames :: proc(h: ^Harness, count: int) {
	for _ in 0 ..< count do run_frame(h)
}

wait_for_listing :: proc(t: ^testing.T, h: ^Harness) {
	view := app.active_view(&h.state)
	start := time.tick_now()
	for (view.loading || view.listing == nil) && time.tick_since(start) < 3 * time.Second {
		run_frame(h)
		time.sleep(time.Millisecond)
	}
	testing.expect(t, !view.loading && view.listing != nil, "listing arrived")
	run_frames(h, 2)
}

press_key :: proc(h: ^Harness, key: ui.Key, modifiers: ui.Modifiers = {}) {
	h.input.keys_pressed = {key}
	h.input.modifiers = modifiers
	run_frame(h)
	h.input.modifiers = {}
	run_frames(h, 2)
}

type_text :: proc(h: ^Harness, text: string) {
	for character in text {
		h.input.text[0] = character
		h.input.text_count = 1
		run_frame(h)
	}
	run_frames(h, 2)
}

cursor_name :: proc(h: ^Harness) -> string {
	view := app.active_view(&h.state)
	entry, ok := app.cursor_entry(view)
	if !ok do return ""
	return fs.entry_name(view.listing, entry)
}

@(test)
starts_with_list_focused :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	view := app.active_view(&h.state)
	testing.expect(t, ui.has_focus(&h.ctx, view.list_id), "file list has focus at startup")
	testing.expect_value(t, cursor_name(&h), "folder")
	press_key(&h, .DOWN)
	testing.expect_value(t, cursor_name(&h), "alpha.txt")
	press_key(&h, .END)
	testing.expect_value(t, cursor_name(&h), "zeta.md")
}

@(test)
enter_and_go_up_returns_to_folder :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	press_key(&h, .ENTER)
	wait_for_listing(t, &h)
	testing.expect_value(t, cursor_name(&h), "inside.txt")

	press_key(&h, .BACKSPACE)
	wait_for_listing(t, &h)
	testing.expect_value(t, cursor_name(&h), "folder")
}

@(test)
type_ahead_jumps_and_scrolls :: proc(t: ^testing.T) {
	// Enough files that "three.iso" is far below the first screen.
	h: Harness
	harness_init(t, &h, 200)
	defer harness_destroy(&h)

	type_text(&h, "th")
	testing.expect_value(t, cursor_name(&h), "three.iso")

	view := app.active_view(&h.state)
	state := h.ctx.scroll_states[view.list_id]
	testing.expect(t, state.offset > 0, "the list scrolled to show the cursor")
}

@(test)
tap_selects_then_opens :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	// Row 0 is "folder"; rows start under the tab bar (44), toolbar (60) and column
	// header (32), and right of the sidebar (200).
	row_0 := ui.Vec2{500, 44 + 60 + 32 + 17}
	tap :: proc(h: ^Harness, position: ui.Vec2) {
		h.input.pointer_position = position
		run_frames(h, 2)
		h.input.mouse_pressed = {.LEFT}
		h.input.mouse_down = {.LEFT}
		run_frame(h)
		h.input.mouse_down = {}
		h.input.mouse_released = {.LEFT}
		run_frame(h)
		// Wait out the double-click window so taps stay single taps.
		h.input.time += 1
		run_frames(h, 2)
	}

	tap(&h, row_0)
	view := app.active_view(&h.state)
	testing.expect_value(t, view.selected_count, 1)
	testing.expect_value(t, view.path, h.dir)

	tap(&h, row_0)
	wait_for_listing(t, &h)
	testing.expect_value(t, fs.base_name(view.path), "folder")
}

@(test)
selection_keys :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	view := app.active_view(&h.state)

	press_key(&h, .DOWN, {.SHIFT})
	press_key(&h, .DOWN, {.SHIFT})
	testing.expect_value(t, view.selected_count, 3)

	// Escape clears the selection but doesn't leave the folder.
	press_key(&h, .ESCAPE)
	testing.expect_value(t, view.selected_count, 0)
	testing.expect_value(t, view.path, h.dir)

	press_key(&h, .A, {.CONTROL})
	testing.expect_value(t, view.selected_count, 6)
}

@(test)
gamepad_b_clears_then_goes_up :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	view := app.active_view(&h.state)
	h.input.gamepad_connected = true

	press :: proc(h: ^Harness, button: ui.Gamepad_Button) {
		h.input.gamepad_pressed = {button}
		run_frames(h, 3)
	}

	press(&h, .FACE_DOWN)
	wait_for_listing(t, &h)
	testing.expect_value(t, fs.base_name(view.path), "folder")

	press(&h, .FACE_LEFT)
	testing.expect_value(t, view.selected_count, 1)
	press(&h, .FACE_RIGHT)
	testing.expect_value(t, view.selected_count, 0)
	testing.expect_value(t, fs.base_name(view.path), "folder")
	press(&h, .FACE_RIGHT)
	wait_for_listing(t, &h)
	testing.expect_value(t, view.path, h.dir)
	testing.expect_value(t, cursor_name(&h), "folder")
}

@(test)
default_bindings_file_round_trips :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	nav_before := h.ctx.nav_bindings
	app_before := h.state.bindings
	hold_before := h.ctx.region_jump_activate

	text := app.bindings_text(&h.state, &h.ctx, context.temp_allocator)
	problems: [dynamic]string
	defer delete(problems)
	app.apply_bindings_text(&h.state, &h.ctx, text, &problems)
	testing.expectf(t, len(problems) == 0, "the default file parses cleanly: %v", problems[:])
	testing.expect(t, h.ctx.nav_bindings == nav_before, "nav bindings unchanged")
	testing.expect(t, h.state.bindings == app_before, "app bindings unchanged")
	testing.expect(t, h.ctx.region_jump_activate == hold_before, "overlay binding unchanged")
}

@(test)
bindings_file_overrides_one_device :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	text := `
# A user's edits.
[keyboard]
go_up = F2, Alt+Up   # replaces Backspace
refresh =            # unbinds Ctrl+R

[gamepad]
area_jump_overlay = Menu
area_jump_up = DpadUp
`
	problems: [dynamic]string
	defer delete(problems)
	app.apply_bindings_text(&h.state, &h.ctx, text, &problems)
	testing.expectf(t, len(problems) == 0, "no problems: %v", problems[:])

	go_up := h.state.bindings[.GO_UP]
	expected_go_up := ui.triggers(ui.pad(.FACE_RIGHT), ui.key(.F2), ui.key(.UP, {.ALT}))
	testing.expectf(t, go_up == expected_go_up, "keyboard replaced, gamepad B kept: %v", go_up)
	testing.expect(t, h.state.bindings[.REFRESH] == ui.Trigger_List{}, "refresh unbound")
	testing.expect(t, h.ctx.region_jump_activate == ui.triggers(ui.pad(.START)), "overlay rebound to Menu")
	testing.expect(t, h.ctx.region_jump_directions[.UP] == ui.triggers(ui.pad(.DPAD_UP)))
	// Not mentioned: keeps its default.
	testing.expect(t, h.ctx.region_jump_directions[.DOWN] == ui.triggers(ui.pad(.FACE_DOWN)))

	// The new bindings take effect: F2 now goes up a folder.
	press_key(&h, .ENTER)
	wait_for_listing(t, &h)
	press_key(&h, .F2)
	wait_for_listing(t, &h)
	testing.expect_value(t, app.active_view(&h.state).path, h.dir)
}

@(test)
bindings_file_reports_problems :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	text := `go_up = F2
[keyboard]
no_such_action = F3
go_home = Ctrl+Banana, Alt+Home
[gamepad]
area_1 = A
select_all = Turbo
[trackpad]
`
	problems: [dynamic]string
	defer {
		for problem in problems do delete(problem)
		delete(problems)
	}
	app.apply_bindings_text(&h.state, &h.ctx, text, &problems)
	testing.expectf(t, len(problems) == 6, "six problems, got %d: %v", len(problems), problems[:])
	// The good half of a line with a bad binding still applies.
	testing.expect(t, h.state.bindings[.GO_HOME] == ui.triggers(ui.key(.HOME, {.ALT})))
}

@(test)
missing_bindings_file_is_written :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	path := fs.join_path(h.dir, "config/touch-file-manager/bindings.ini", context.temp_allocator)
	problems := app.load_bindings(&h.state, &h.ctx, path)
	defer delete(problems)
	testing.expectf(t, len(problems) == 0, "%v", problems[:])
	testing.expect(t, os.exists(path), "the defaults were written")

	// And reading it back is clean.
	again := app.load_bindings(&h.state, &h.ctx, path)
	defer delete(again)
	testing.expectf(t, len(again) == 0, "%v", again[:])
}
