package ui

// The backend fills one Input per frame. These enums are this package's own
// so that no backend's key codes leak into widget or app code; the backend
// translates its codes into these.

Key :: enum u8 {
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z,
	NUM_0,
	NUM_1,
	NUM_2,
	NUM_3,
	NUM_4,
	NUM_5,
	NUM_6,
	NUM_7,
	NUM_8,
	NUM_9,
	F1,
	F2,
	F3,
	F4,
	F5,
	F6,
	F7,
	F8,
	F9,
	F10,
	F11,
	F12,
	UP,
	DOWN,
	LEFT,
	RIGHT,
	ENTER,
	ESCAPE,
	TAB,
	BACKSPACE,
	DELETE,
	INSERT,
	HOME,
	END,
	PAGE_UP,
	PAGE_DOWN,
	SPACE,
	MINUS,
	EQUAL,
	MENU,
}

Keys :: bit_set[Key; u128]

Modifier :: enum u8 {
	SHIFT,
	CONTROL,
	ALT,
	SUPER,
}

Modifiers :: bit_set[Modifier; u8]

Mouse_Button :: enum u8 {
	LEFT,
	RIGHT,
	MIDDLE,
	BACK,
	FORWARD,
}

Mouse_Buttons :: bit_set[Mouse_Button; u8]

// Named by position rather than by label, because the labels disagree
// between pads: FACE_DOWN is A on Xbox and Steam Deck, Cross on PlayStation,
// and B on Nintendo.
Gamepad_Button :: enum u8 {
	DPAD_UP,
	DPAD_DOWN,
	DPAD_LEFT,
	DPAD_RIGHT,
	FACE_DOWN,
	FACE_RIGHT,
	FACE_LEFT,
	FACE_UP,
	LEFT_SHOULDER,
	RIGHT_SHOULDER,
	LEFT_TRIGGER,
	RIGHT_TRIGGER,
	SELECT,
	START,
	GUIDE,
	LEFT_STICK,
	RIGHT_STICK,
}

Gamepad_Buttons :: bit_set[Gamepad_Button; u32]

MAX_TEXT_INPUT :: 32

Input :: struct {
	time:        f64,
	screen_size: Vec2,

	// The pointer is the mouse, or the primary touch point. GLFW (raylib's
	// desktop backend) delivers touchscreen input as an emulated mouse, so
	// the two can't be told apart yet; every pointer gesture here (tap,
	// long-press) is designed to work for both.
	pointer_position: Vec2,
	mouse_down:       Mouse_Buttons,
	mouse_pressed:    Mouse_Buttons,
	mouse_released:   Mouse_Buttons,
	wheel:            Vec2,

	keys_down: Keys,
	// Includes the OS's key repeat, so holding an arrow key keeps moving.
	keys_pressed: Keys,
	modifiers:    Modifiers,

	text:       [MAX_TEXT_INPUT]rune,
	text_count: int,

	gamepad_connected: bool,
	gamepad_down:      Gamepad_Buttons,
	gamepad_pressed:   Gamepad_Buttons,
	left_stick:        Vec2,
	right_stick:       Vec2,
}

// Which device the user touched last. Decides whether the focus ring is
// shown: it is noise while using the pointer, and essential otherwise.
Input_Mode :: enum u8 {
	POINTER,
	KEYBOARD,
	GAMEPAD,
}
