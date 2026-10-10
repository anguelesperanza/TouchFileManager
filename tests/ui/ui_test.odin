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
	ui.begin_region(&h.ctx, "sidebar")
	for i in 0 ..< 2 do h.results[i] = ui.button_ex(&h.ctx, BUTTON_RECTS[i], BUTTON_NAMES[i])
	ui.end_region(&h.ctx)
	ui.begin_region(&h.ctx, "grid")
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
