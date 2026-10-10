package ui

// Widgets react to navigation actions, never to raw keys or buttons. This
// table is the only place in `ui` that knows which physical input means
// "move focus up" or "activate". The app has its own table of the same shape
// for its commands.

Nav_Action :: enum u8 {
	UP,
	DOWN,
	LEFT,
	RIGHT,
	ACTIVATE,
	CANCEL,
	NEXT_REGION,
	PREVIOUS_REGION,
	CONTEXT_MENU,
}

Nav_Actions :: bit_set[Nav_Action; u16]

Key_Chord :: struct {
	key:       Key,
	modifiers: Modifiers,
}

Trigger :: union {
	Key_Chord,
	Gamepad_Button,
}

MAX_TRIGGERS_PER_ACTION :: 4

Trigger_List :: [MAX_TRIGGERS_PER_ACTION]Trigger

default_nav_bindings :: proc() -> [Nav_Action]Trigger_List {
	bindings: [Nav_Action]Trigger_List
	bindings[.UP] = {Key_Chord{key = .UP}, Gamepad_Button.DPAD_UP, nil, nil}
	bindings[.DOWN] = {Key_Chord{key = .DOWN}, Gamepad_Button.DPAD_DOWN, nil, nil}
	bindings[.LEFT] = {Key_Chord{key = .LEFT}, Gamepad_Button.DPAD_LEFT, nil, nil}
	bindings[.RIGHT] = {Key_Chord{key = .RIGHT}, Gamepad_Button.DPAD_RIGHT, nil, nil}
	bindings[.ACTIVATE] = {Key_Chord{key = .ENTER}, Key_Chord{key = .SPACE}, Gamepad_Button.FACE_DOWN, nil}
	bindings[.CANCEL] = {Key_Chord{key = .ESCAPE}, Gamepad_Button.FACE_RIGHT, nil, nil}
	bindings[.NEXT_REGION] = {Key_Chord{key = .TAB}, Gamepad_Button.RIGHT_SHOULDER, nil, nil}
	bindings[.PREVIOUS_REGION] = {
		Key_Chord{key = .TAB, modifiers = {.SHIFT}},
		Gamepad_Button.LEFT_SHOULDER,
		nil,
		nil,
	}
	bindings[.CONTEXT_MENU] = {
		Key_Chord{key = .MENU},
		Key_Chord{key = .F10, modifiers = {.SHIFT}},
		Gamepad_Button.START,
		nil,
	}
	return bindings
}

// Modifiers must match exactly, so Shift+Tab doesn't also fire plain Tab.
// Gamepad buttons count their auto-repeat (see update_gamepad_repeat).
trigger_pressed :: proc(ctx: ^Context, trigger: Trigger) -> bool {
	switch t in trigger {
	case Key_Chord:
		return t.key in ctx.input.keys_pressed && ctx.input.modifiers == t.modifiers
	case Gamepad_Button:
		return t in ctx.gamepad_repeated
	}
	return false
}

any_trigger_pressed :: proc(ctx: ^Context, triggers: Trigger_List) -> bool {
	for trigger in triggers {
		if trigger == nil do continue
		if trigger_pressed(ctx, trigger) do return true
	}
	return false
}

nav_pressed :: proc(ctx: ^Context, action: Nav_Action) -> bool {
	return action in ctx.nav_pressed
}
