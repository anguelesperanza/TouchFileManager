package app_test

import "core:testing"
import "../../src/app"
import ui "../../src/ui"

// Drives the real app screen with a fake backend, freeing the temp
// allocator between frames exactly as main does, so anything the app keeps
// across frames in temp memory shows up as a wrong or garbled message.

fake_measure :: proc(font: ui.Font_Id, size: f32, text: string, user_data: rawptr) -> ui.Vec2 {
	return {f32(len(text)) * size * 0.5, size}
}

Harness :: struct {
	ctx:   ui.Context,
	state: app.App,
	input: ui.Input,
}

harness_init :: proc(h: ^Harness) {
	ui.init(&h.ctx, ui.Backend{measure_text = fake_measure})
	app.init(&h.state)
	h.input.screen_size = {800, 600}
	h.input.pointer_position = {790, 590}
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
	h.input.time += 1.0 / 60.0
}

run_frames :: proc(h: ^Harness, count: int) {
	for _ in 0 ..< count do run_frame(h)
}

click :: proc(h: ^Harness, position: ui.Vec2, button: ui.Mouse_Button) {
	h.input.pointer_position = position
	run_frames(h, 2)
	h.input.mouse_pressed = {button}
	h.input.mouse_down = {button}
	run_frame(h)
	h.input.mouse_down = {}
	h.input.mouse_released = {button}
	run_frames(h, 3)
}

// Layout at 800x600: content starts at (216, 120) after the toolbar,
// sidebar, padding and heading; the sidebar's second button is Desktop.
ITEM_1 :: ui.Vec2{291, 152}
ITEM_2 :: ui.Vec2{451, 152}
SIDEBAR_DESKTOP :: ui.Vec2{100, 140}

@(test)
click_reports_the_clicked_item :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)

	click(&h, ITEM_1, .LEFT)
	testing.expect_value(t, h.state.message, "Opened Item 1")
	click(&h, ITEM_2, .LEFT)
	testing.expect_value(t, h.state.message, "Opened Item 2")
}

@(test)
right_click_reports_context_menu :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)

	click(&h, ITEM_1, .RIGHT)
	testing.expect_value(t, h.state.message, "Context menu for Item 1")
}

@(test)
long_press_reports_context_menu :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)

	h.input.pointer_position = SIDEBAR_DESKTOP
	run_frames(&h, 2)
	h.input.mouse_pressed = {.LEFT}
	h.input.mouse_down = {.LEFT}
	run_frames(&h, 45)
	h.input.mouse_down = {}
	h.input.mouse_released = {.LEFT}
	run_frames(&h, 3)
	testing.expect_value(t, h.state.message, "Context menu for Desktop (menus arrive in M4)")
	testing.expect_value(t, h.state.selected_place, 0)
}

@(test)
gamepad_activates_focused_button :: proc(t: ^testing.T) {
	h: Harness
	harness_init(&h)
	defer ui.destroy(&h.ctx)
	h.input.gamepad_connected = true
	run_frame(&h)

	// First D-pad press shows focus on the toolbar's first button (Back).
	h.input.gamepad_pressed = {.DPAD_DOWN}
	h.input.gamepad_down = {.DPAD_DOWN}
	run_frame(&h)
	h.input.gamepad_down = {}
	run_frames(&h, 2)
	h.input.gamepad_pressed = {.FACE_DOWN}
	run_frames(&h, 2)
	testing.expect_value(t, h.state.message, "Back (not wired up until M1)")
}
