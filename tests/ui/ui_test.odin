package ui_test

import "core:testing"
import ui "../../src/ui"

// These run the real `ui` package with a fake backend and synthetic input,
// which doubles as proof that `ui` works with no renderer at all.

fake_measure :: proc(font: ui.Font_Id, size: f32, text: string, user_data: rawptr) -> ui.Vec2 {
	return {f32(len(text)) * size * 0.5, size}
}

Harness :: struct {
	ctx:     ui.Context,
	input:   ui.Input,
	results: [6]ui.Interactions,
}

// Two regions: a sidebar column of 2 buttons, and a 2x2 grid.
//   sidebar          grid
//   [S0] (0,0)      [G0] (200,0)   [G1] (300,0)
//   [S1] (0,60)     [G2] (200,60)  [G3] (300,60)
BUTTON_RECTS := [6]ui.Rect{
	{0, 0, 80, 44},
	{0, 60, 80, 44},
	{200, 0, 80, 44},
	{300, 0, 80, 44},
	{200, 60, 80, 44},
	{300, 60, 80, 44},
}
BUTTON_NAMES := [6]string{"S0", "S1", "G0", "G1", "G2", "G3"}

harness_init :: proc(h: ^Harness) {
	ui.init(&h.ctx, ui.Backend{measure_text = fake_measure})
	h.input.screen_size = {800, 600}
	h.input.pointer_position = {700, 500}
}

// Runs one frame with the current input, then clears the one-shot fields
// the way a backend would for the next frame.
run_frame :: proc(h: ^Harness) -> ui.Frame {
	ui.begin_frame(&h.ctx, h.input)
	ui.begin_region(&h.ctx, "sidebar", {0, 0, 80, 104})
	for i in 0 ..< 2 do h.results[i] = ui.button_ex(&h.ctx, BUTTON_RECTS[i], BUTTON_NAMES[i])
	ui.end_region(&h.ctx)
	ui.begin_region(&h.ctx, "grid", {200, 0, 180, 104})
	for i in 2 ..< 6 do h.results[i] = ui.button_ex(&h.ctx, BUTTON_RECTS[i], BUTTON_NAMES[i])
	ui.end_region(&h.ctx)
	frame := ui.end_frame(&h.ctx)

	h.input.mouse_pressed = {}
	h.input.mouse_released = {}
	h.input.keys_pressed = {}
	h.input.gamepad_pressed = {}
	h.input.time += 1.0 / 60.0
	return frame
}

press_key :: proc(h: ^Harness, key: ui.Key, modifiers: ui.Modifiers = {}) -> ui.Frame {
	h.input.keys_pressed = {key}
	h.input.modifiers = modifiers
	frame := run_frame(h)
	h.input.modifiers = {}
	return frame
}

focused_name :: proc(h: ^Harness) -> string {
	for i in 0 ..< 6 {
		if .FOCUSED in h.results[i] do return BUTTON_NAMES[i]
	}
	return ""
}

@(test)
touch_tap_without_hover_clicks :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)
	run_frame(&h)

	// A finger lands on G1 and lifts within the same frame, with no hover
	// beforehand -- the case `hot` can't have been computed for.
	h.input.pointer_position = {340, 20}
	h.input.mouse_pressed = {.LEFT}
	h.input.mouse_released = {.LEFT}
	frame := run_frame(&h)
	testing.expect(t, frame.needs_another_frame, "a deferred tap must ask for another frame")
	testing.expect(t, .CLICKED not_in h.results[3], "the tap is held back while hot catches up")

	run_frame(&h)
	testing.expect(t, .CLICKED in h.results[3], "the replayed tap clicks G1")
	for i in 0 ..< 6 {
		if i != 3 do testing.expect(t, .CLICKED not_in h.results[i])
	}
}

@(test)
small_widget_gets_touch_sized_hit_area :: proc(t: ^testing.T) {
	ctx: ui.Context
	ui.init(&ctx, ui.Backend{measure_text = fake_measure})
	defer ui.destroy(&ctx)

	// A 24x24 button; the point is 8px right of its visible edge, inside
	// the 44x44 padded hit area (which extends 10px each side).
	small := ui.Rect{100, 100, 24, 24}
	input := ui.Input{screen_size = {800, 600}, pointer_position = {132, 112}}
	result: ui.Interactions
	for _ in 0 ..< 2 {
		ui.begin_frame(&ctx, input)
		result = ui.button_ex(&ctx, small, "x")
		ui.end_frame(&ctx)
	}
	testing.expect(t, .HOVERED in result, "the padded hit area catches a near-miss")

	input.pointer_position = {140, 112}
	for _ in 0 ..< 2 {
		ui.begin_frame(&ctx, input)
		result = ui.button_ex(&ctx, small, "x")
		ui.end_frame(&ctx)
	}
	testing.expect(t, .HOVERED not_in result, "outside the padded area misses")
}

@(test)
long_press_is_secondary_not_click :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)

	h.input.pointer_position = {40, 20}
	run_frame(&h)
	h.input.mouse_pressed = {.LEFT}
	h.input.mouse_down = {.LEFT}
	run_frame(&h)

	secondary := false
	for _ in 0 ..< 45 {
		frame := run_frame(&h)
		if .SECONDARY in h.results[0] do secondary = true
		if !secondary do testing.expect(t, h.ctx.wants_timer, "a pending long-press keeps the loop polling")
		_ = frame
	}
	testing.expect(t, secondary, "holding 0.75s fires SECONDARY")

	h.input.mouse_down = {}
	h.input.mouse_released = {.LEFT}
	run_frame(&h)
	testing.expect(t, .CLICKED not_in h.results[0], "lifting after a long-press is not a tap")
}

@(test)
keyboard_navigation :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "")

	press_key(&h, .DOWN)
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "S0")
	testing.expect(t, ui.show_focus_ring(&h.ctx))

	press_key(&h, .DOWN)
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "S1")

	// Right from the sidebar crosses into the grid, to the nearest item.
	press_key(&h, .RIGHT)
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "G2")

	press_key(&h, .RIGHT)
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "G3")

	// Tab leaves the grid; Shift+Tab comes back to where we were.
	press_key(&h, .TAB)
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "S1")
	press_key(&h, .TAB, {.SHIFT})
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "G3")

	press_key(&h, .ENTER)
	testing.expect(t, .CLICKED in h.results[5], "Enter activates the focused button")
	press_key(&h, .MENU)
	testing.expect(t, .SECONDARY in h.results[5], "Menu key opens the context action")
}

@(test)
gamepad_navigation_and_repeat :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)
	h.input.gamepad_connected = true
	run_frame(&h)

	// Focus S0 via the stick, then move right with the D-pad.
	h.input.left_stick = {0, 1}
	run_frame(&h)
	h.input.left_stick = {}
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "S0")
	testing.expect(t, h.ctx.input_mode == .GAMEPAD)

	// Holding D-pad right: one move on press, then repeats after the delay.
	// From S0: G0, then G1, then nothing further right.
	h.input.gamepad_down = {.DPAD_RIGHT}
	h.input.gamepad_pressed = {.DPAD_RIGHT}
	run_frame(&h)
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "G0")
	for _ in 0 ..< 30 do run_frame(&h)
	testing.expect_value(t, focused_name(&h), "G1")
	h.input.gamepad_down = {}

	h.input.gamepad_pressed = {.FACE_DOWN}
	run_frame(&h)
	testing.expect(t, .CLICKED in h.results[3], "A activates")
}

@(test)
settled_frame_is_unchanged :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)
	run_frame(&h)
	run_frame(&h)
	frame := run_frame(&h)
	testing.expect(t, !frame.changed, "an identical frame reports no change")
	testing.expect(t, !frame.needs_another_frame, "and is safe to sleep after")
}

// A 100-row list, 40px rows, in a 400px-tall viewport: 10 rows visible.
List_Harness :: struct {
	ctx:     ui.Context,
	input:   ui.Input,
	clicked: [100]bool,
	list:    ui.Virtual_List,
}

list_frame :: proc(h: ^List_Harness) {
	ui.begin_frame(&h.ctx, h.input)
	h.list = ui.begin_virtual_list(&h.ctx, "list", {0, 0, 300, 400}, 100, 40)
	for i in h.list.first ..< h.list.last {
		if .CLICKED in ui.virtual_list_row(&h.ctx, h.list, i) do h.clicked[i] = true
	}
	ui.end_virtual_list(&h.ctx, h.list)
	ui.end_frame(&h.ctx)
	h.input.mouse_pressed = {}
	h.input.mouse_released = {}
	h.input.time += 1.0 / 60.0
}

@(test)
drag_scrolls_flings_and_does_not_click :: proc(t: ^testing.T) {
	h: List_Harness
	ui.init(&h.ctx, ui.Backend{measure_text = fake_measure})
	defer ui.destroy(&h.ctx)
	h.input.screen_size = {800, 600}
	h.input.pointer_position = {150, 300}
	list_frame(&h)
	list_frame(&h)

	// A finger presses at y=300 and drags up 200px over 10 frames.
	h.input.mouse_pressed = {.LEFT}
	h.input.mouse_down = {.LEFT}
	list_frame(&h)
	for _ in 0 ..< 10 {
		h.input.pointer_position.y -= 20
		list_frame(&h)
	}
	dragged := h.list.offset
	testing.expectf(t, dragged >= 180 && dragged <= 220, "list follows the finger: offset %v", dragged)

	h.input.mouse_down = {}
	h.input.mouse_released = {.LEFT}
	list_frame(&h)
	for _ in 0 ..< 30 do list_frame(&h)
	testing.expectf(t, h.list.offset > dragged + 50, "the fling coasts on after release: %v -> %v", dragged, h.list.offset)

	for clicked, i in h.clicked {
		testing.expectf(t, !clicked, "row %d must not click after a drag", i)
	}
}

@(test)
double_click_detected :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)
	h.input.pointer_position = {40, 20}
	run_frame(&h)

	click :: proc(h: ^Harness) {
		h.input.mouse_pressed = {.LEFT}
		h.input.mouse_down = {.LEFT}
		run_frame(h)
		h.input.mouse_down = {}
		h.input.mouse_released = {.LEFT}
		run_frame(h)
	}
	click(&h)
	testing.expect(t, .CLICKED in h.results[0])
	testing.expect(t, .DOUBLE_CLICKED not_in h.results[0], "the first click is a single click")
	click(&h)
	testing.expect(t, .DOUBLE_CLICKED in h.results[0], "a quick second click is a double-click")

	h.input.time += 1
	click(&h)
	testing.expect(t, .DOUBLE_CLICKED not_in h.results[0], "a slow second click isn't")
}

@(test)
gamepad_view_plus_face_buttons_jump_between_regions :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)
	h.input.gamepad_connected = true
	run_frame(&h)

	tap :: proc(h: ^Harness, button: ui.Gamepad_Button, held: ui.Gamepad_Buttons = {}) {
		h.input.gamepad_down = held + {button}
		h.input.gamepad_pressed = {button}
		run_frame(h)
		h.input.gamepad_down = held
		run_frame(h)
	}

	// Focus S1 in the sidebar first.
	tap(&h, .DPAD_DOWN)
	tap(&h, .DPAD_DOWN)
	testing.expect_value(t, focused_name(&h), "S1")

	// Hold View: after a moment the overlay shows, and the face buttons
	// pick a region.
	h.input.gamepad_down = {.SELECT}
	run_frame(&h)
	testing.expect(t, !h.ctx.show_region_overlay, "not on the first frame, so a tap doesn't flash it")
	for _ in 0 ..< 12 do run_frame(&h)
	testing.expect(t, h.ctx.show_region_overlay, "holding View shows the overlay")

	// B (right) jumps into the grid -- and doesn't also act as Cancel.
	tap(&h, .FACE_RIGHT, {.SELECT})
	testing.expectf(t, focused_name(&h) == "G0" || focused_name(&h) == "G2", "jumped into the grid, got %q", focused_name(&h))
	testing.expect(t, .CANCEL not_in h.ctx.nav_pressed)

	// A (down) has no region below; it must not activate the focused
	// button either.
	tap(&h, .FACE_DOWN, {.SELECT})
	for result in h.results do testing.expect(t, .CLICKED not_in result, "A while holding View doesn't click")

	// X (left) goes back to the sidebar, to the button it last had (S1).
	tap(&h, .FACE_LEFT, {.SELECT})
	h.input.gamepad_down = {}
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "S1")
	testing.expect(t, !h.ctx.show_region_overlay, "releasing View hides the overlay")

	// Without View held, A activates as usual.
	h.input.gamepad_pressed = {.FACE_DOWN}
	run_frame(&h)
	testing.expect(t, .CLICKED in h.results[1], "A activates when View isn't held")
}

@(test)
binding_names_round_trip :: proc(t: ^testing.T) {
	chord, ok := ui.parse_key_chord("ctrl+shift+tab")
	testing.expect(t, ok)
	testing.expect_value(t, chord, ui.Key_Chord{key = .TAB, modifiers = {.CONTROL, .SHIFT}})
	testing.expect_value(t, ui.trigger_to_string(chord), "Ctrl+Shift+Tab")

	_, bad := ui.parse_key_chord("Ctrl+Banana")
	testing.expect(t, !bad)
	_, bad_modifier := ui.parse_key_chord("Hyper+A")
	testing.expect(t, !bad_modifier)

	button, button_ok := ui.parse_gamepad_button("view")
	testing.expect(t, button_ok)
	testing.expect_value(t, button, ui.Gamepad_Button.SELECT)
	south, south_ok := ui.parse_gamepad_button("South")
	testing.expect(t, south_ok)
	testing.expect_value(t, south, ui.Gamepad_Button.FACE_DOWN)

	for name, k in ui.KEY_NAMES {
		parsed, parsed_ok := ui.parse_key_chord(name)
		testing.expectf(t, parsed_ok && parsed.key == k, "key %q round-trips", name)
	}
	for name, b in ui.GAMEPAD_NAMES {
		parsed, parsed_ok := ui.parse_gamepad_button(name)
		testing.expectf(t, parsed_ok && parsed == b, "button %q round-trips", name)
	}
}

@(test)
ctrl_number_jumps_and_ctrl_hold_shows_overlay :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)
	run_frame(&h)

	press_key(&h, .NUM_2, {.CONTROL})
	run_frame(&h)
	testing.expectf(t, focused_name(&h) == "G0", "Ctrl+2 jumps to the grid, got %q", focused_name(&h))
	press_key(&h, .NUM_1, {.CONTROL})
	run_frame(&h)
	testing.expect_value(t, focused_name(&h), "S0")

	// Ctrl held alone: nothing at first, the overlay after the delay.
	h.input.modifiers = {.CONTROL}
	run_frame(&h)
	testing.expect(t, !h.ctx.show_region_overlay, "no overlay on a quick Ctrl tap")
	for _ in 0 ..< 40 do run_frame(&h)
	testing.expect(t, h.ctx.show_region_overlay, "the overlay appears after holding Ctrl")
	h.input.modifiers = {}
	run_frame(&h)
	testing.expect(t, !h.ctx.show_region_overlay)

	// A pointer user holding Ctrl to multi-select never sees it.
	h.input.pointer_position = {10, 500}
	run_frame(&h)
	h.input.modifiers = {.CONTROL}
	for _ in 0 ..< 40 do run_frame(&h)
	testing.expect(t, !h.ctx.show_region_overlay, "no overlay while using the pointer")
}

@(test)
hold_button_still_works_as_a_tap :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)
	h.input.gamepad_connected = true
	// Bind the hold to Menu, which is also the context-menu button.
	h.ctx.region_jump_hold = ui.triggers(ui.pad(.START))
	run_frame(&h)
	h.input.gamepad_pressed = {.DPAD_DOWN}
	run_frame(&h)
	run_frame(&h)

	// A quick tap of Menu: no context menu while it's down, one on release.
	h.input.gamepad_down = {.START}
	h.input.gamepad_pressed = {.START}
	run_frame(&h)
	testing.expect(t, .CONTEXT_MENU not_in h.ctx.nav_pressed, "not on press")
	h.input.gamepad_down = {}
	ui.begin_frame(&h.ctx, h.input)
	testing.expect(t, .CONTEXT_MENU in h.ctx.nav_pressed, "the tap is passed on at release")
	ui.end_frame(&h.ctx)
	h.input.time += 1.0 / 60.0

	// Holding Menu and jumping: no context menu at all.
	h.input.gamepad_down = {.START}
	h.input.gamepad_pressed = {.START}
	run_frame(&h)
	h.input.gamepad_down = {.START, .FACE_RIGHT}
	h.input.gamepad_pressed = {.FACE_RIGHT}
	ui.begin_frame(&h.ctx, h.input)
	testing.expect(t, .CONTEXT_MENU not_in h.ctx.nav_pressed)
	ui.end_frame(&h.ctx)
	h.input.gamepad_pressed = {}
	h.input.gamepad_down = {}
	ui.begin_frame(&h.ctx, h.input)
	testing.expect(t, .CONTEXT_MENU not_in h.ctx.nav_pressed, "a hold that jumped isn't a tap")
	ui.end_frame(&h.ctx)

	// A long hold without jumping isn't a tap either.
	h.input.gamepad_down = {.START}
	h.input.gamepad_pressed = {.START}
	run_frame(&h)
	for _ in 0 ..< 30 do run_frame(&h)
	h.input.gamepad_down = {}
	ui.begin_frame(&h.ctx, h.input)
	testing.expect(t, .CONTEXT_MENU not_in h.ctx.nav_pressed, "a long hold isn't a tap")
	ui.end_frame(&h.ctx)
}
