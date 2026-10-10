package ui_raylib

import rl "vendor:raylib"
import ui "../ui"

KEY_MAP := [ui.Key]rl.KeyboardKey{
	.A = .A,
	.B = .B,
	.C = .C,
	.D = .D,
	.E = .E,
	.F = .F,
	.G = .G,
	.H = .H,
	.I = .I,
	.J = .J,
	.K = .K,
	.L = .L,
	.M = .M,
	.N = .N,
	.O = .O,
	.P = .P,
	.Q = .Q,
	.R = .R,
	.S = .S,
	.T = .T,
	.U = .U,
	.V = .V,
	.W = .W,
	.X = .X,
	.Y = .Y,
	.Z = .Z,
	.NUM_0 = .ZERO,
	.NUM_1 = .ONE,
	.NUM_2 = .TWO,
	.NUM_3 = .THREE,
	.NUM_4 = .FOUR,
	.NUM_5 = .FIVE,
	.NUM_6 = .SIX,
	.NUM_7 = .SEVEN,
	.NUM_8 = .EIGHT,
	.NUM_9 = .NINE,
	.F1 = .F1,
	.F2 = .F2,
	.F3 = .F3,
	.F4 = .F4,
	.F5 = .F5,
	.F6 = .F6,
	.F7 = .F7,
	.F8 = .F8,
	.F9 = .F9,
	.F10 = .F10,
	.F11 = .F11,
	.F12 = .F12,
	.UP = .UP,
	.DOWN = .DOWN,
	.LEFT = .LEFT,
	.RIGHT = .RIGHT,
	.ENTER = .ENTER,
	.ESCAPE = .ESCAPE,
	.TAB = .TAB,
	.BACKSPACE = .BACKSPACE,
	.DELETE = .DELETE,
	.INSERT = .INSERT,
	.HOME = .HOME,
	.END = .END,
	.PAGE_UP = .PAGE_UP,
	.PAGE_DOWN = .PAGE_DOWN,
	.SPACE = .SPACE,
	.MINUS = .MINUS,
	.EQUAL = .EQUAL,
	.MENU = .KB_MENU,
}

// Mouse "back" and "forward" are buttons 4 and 5 on almost every mouse,
// which GLFW (and so raylib) calls SIDE and EXTRA. raylib's own BACK and
// FORWARD are buttons 7 and 6, which few mice have.
MOUSE_MAP := [ui.Mouse_Button]rl.MouseButton{
	.LEFT = .LEFT,
	.RIGHT = .RIGHT,
	.MIDDLE = .MIDDLE,
	.BACK = .SIDE,
	.FORWARD = .EXTRA,
}

GAMEPAD_MAP := [ui.Gamepad_Button]rl.GamepadButton{
	.DPAD_UP = .LEFT_FACE_UP,
	.DPAD_DOWN = .LEFT_FACE_DOWN,
	.DPAD_LEFT = .LEFT_FACE_LEFT,
	.DPAD_RIGHT = .LEFT_FACE_RIGHT,
	.FACE_DOWN = .RIGHT_FACE_DOWN,
	.FACE_RIGHT = .RIGHT_FACE_RIGHT,
	.FACE_LEFT = .RIGHT_FACE_LEFT,
	.FACE_UP = .RIGHT_FACE_UP,
	.LEFT_SHOULDER = .LEFT_TRIGGER_1,
	.RIGHT_SHOULDER = .RIGHT_TRIGGER_1,
	.LEFT_TRIGGER = .LEFT_TRIGGER_2,
	.RIGHT_TRIGGER = .RIGHT_TRIGGER_2,
	.SELECT = .MIDDLE_LEFT,
	.START = .MIDDLE_RIGHT,
	.GUIDE = .MIDDLE,
	.LEFT_STICK = .LEFT_THUMB,
	.RIGHT_STICK = .RIGHT_THUMB,
}

MAX_GAMEPADS :: 4

// Reads this frame's raylib input into a ui.Input, in logical pixels.
// `scale` is the Context.scale that the frame will be built with.
read_input :: proc(r: ^Renderer, scale: f32) -> ui.Input {
	r.scale = scale
	input: ui.Input
	input.time = rl.GetTime()
	input.screen_size = {f32(rl.GetScreenWidth()) / scale, f32(rl.GetScreenHeight()) / scale}

	mouse := rl.GetMousePosition()
	input.pointer_position = {mouse.x / scale, mouse.y / scale}
	for raylib_button, button in MOUSE_MAP {
		if rl.IsMouseButtonDown(raylib_button) do input.mouse_down += {button}
		if rl.IsMouseButtonPressed(raylib_button) do input.mouse_pressed += {button}
		if rl.IsMouseButtonReleased(raylib_button) do input.mouse_released += {button}
	}
	input.wheel = rl.GetMouseWheelMoveV()

	for raylib_key, key in KEY_MAP {
		if rl.IsKeyDown(raylib_key) do input.keys_down += {key}
		if rl.IsKeyPressed(raylib_key) || rl.IsKeyPressedRepeat(raylib_key) do input.keys_pressed += {key}
	}
	if rl.IsKeyDown(.LEFT_SHIFT) || rl.IsKeyDown(.RIGHT_SHIFT) do input.modifiers += {.SHIFT}
	if rl.IsKeyDown(.LEFT_CONTROL) || rl.IsKeyDown(.RIGHT_CONTROL) do input.modifiers += {.CONTROL}
	if rl.IsKeyDown(.LEFT_ALT) || rl.IsKeyDown(.RIGHT_ALT) do input.modifiers += {.ALT}
	if rl.IsKeyDown(.LEFT_SUPER) || rl.IsKeyDown(.RIGHT_SUPER) do input.modifiers += {.SUPER}

	// Drain the whole queue even past our buffer, so leftover characters
	// don't leak into the next frame.
	for {
		character := rl.GetCharPressed()
		if character == 0 do break
		if input.text_count < ui.MAX_TEXT_INPUT {
			input.text[input.text_count] = character
			input.text_count += 1
		}
	}

	read_gamepads(r, &input)
	return input
}

// Every connected pad drives the UI, so it doesn't matter which index a pad
// lands on -- Steam's virtual pad, for one, often isn't index 0.
@(private)
read_gamepads :: proc(r: ^Renderer, input: ^ui.Input) {
	available: bit_set[0 ..< MAX_GAMEPADS]
	for index in 0 ..< MAX_GAMEPADS {
		if rl.IsGamepadAvailable(i32(index)) do available += {index}
	}
	// A pad GLFW has no mapping for is "available" but never reports a
	// button, so mappings are (re)generated whenever a new pad appears.
	if available - r.known_gamepads != {} do load_gamepad_mappings()
	r.known_gamepads = available

	for index in 0 ..< MAX_GAMEPADS {
		if index not_in available do continue
		pad := i32(index)
		input.gamepad_connected = true
		for raylib_button, button in GAMEPAD_MAP {
			if rl.IsGamepadButtonDown(pad, raylib_button) do input.gamepad_down += {button}
			if rl.IsGamepadButtonPressed(pad, raylib_button) do input.gamepad_pressed += {button}
		}
		left := ui.Vec2{rl.GetGamepadAxisMovement(pad, .LEFT_X), rl.GetGamepadAxisMovement(pad, .LEFT_Y)}
		right := ui.Vec2{rl.GetGamepadAxisMovement(pad, .RIGHT_X), rl.GetGamepadAxisMovement(pad, .RIGHT_Y)}
		// The stick pushed furthest wins, so an idle pad can't cancel out
		// one that's in use.
		if length_squared(left) > length_squared(input.left_stick) do input.left_stick = left
		if length_squared(right) > length_squared(input.right_stick) do input.right_stick = right
	}
}

@(private)
length_squared :: proc(v: ui.Vec2) -> f32 {
	return v.x * v.x + v.y * v.y
}
