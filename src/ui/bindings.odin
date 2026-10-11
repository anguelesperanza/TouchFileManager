package ui

import "core:strings"

// Widgets react to navigation actions, never to raw keys or buttons. The
// tables of which physical input means which action live on the Context
// (nav_bindings, region jump bindings) and in the app; all of them can be
// replaced at runtime from the user's config file.
//
// This file also names every key and button, so bindings can be written in
// a config file and shown on screen ("Ctrl+1", "Y") with one vocabulary.

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

MAX_TRIGGERS_PER_ACTION :: 8

Trigger_List :: [MAX_TRIGGERS_PER_ACTION]Trigger

// Builds a Trigger_List from any number of triggers, up to the maximum:
//     triggers(key(.ENTER), pad(.FACE_DOWN))
triggers :: proc(list: ..Trigger) -> Trigger_List {
	result: Trigger_List
	for trigger, i in list {
		if i >= MAX_TRIGGERS_PER_ACTION do break
		result[i] = trigger
	}
	return result
}

key :: proc(k: Key, modifiers: Modifiers = {}) -> Trigger {
	return Key_Chord{key = k, modifiers = modifiers}
}

pad :: proc(button: Gamepad_Button) -> Trigger {
	return button
}

default_nav_bindings :: proc() -> [Nav_Action]Trigger_List {
	bindings: [Nav_Action]Trigger_List
	bindings[.UP] = triggers(key(.UP), pad(.DPAD_UP))
	bindings[.DOWN] = triggers(key(.DOWN), pad(.DPAD_DOWN))
	bindings[.LEFT] = triggers(key(.LEFT), pad(.DPAD_LEFT))
	bindings[.RIGHT] = triggers(key(.RIGHT), pad(.DPAD_RIGHT))
	bindings[.ACTIVATE] = triggers(key(.ENTER), key(.SPACE), pad(.FACE_DOWN))
	bindings[.CANCEL] = triggers(key(.ESCAPE), pad(.FACE_RIGHT))
	bindings[.NEXT_REGION] = triggers(key(.TAB), pad(.RIGHT_SHOULDER))
	bindings[.PREVIOUS_REGION] = triggers(key(.TAB, {.SHIFT}), pad(.LEFT_SHOULDER))
	bindings[.CONTEXT_MENU] = triggers(key(.MENU), key(.F10, {.SHIFT}), pad(.START))
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

any_trigger_pressed :: proc(ctx: ^Context, list: Trigger_List) -> bool {
	for trigger in list {
		if trigger == nil do continue
		if trigger_pressed(ctx, trigger) do return true
	}
	return false
}

nav_pressed :: proc(ctx: ^Context, action: Nav_Action) -> bool {
	return action in ctx.nav_pressed
}

first_key_chord :: proc(list: Trigger_List) -> (Key_Chord, bool) {
	for trigger in list {
		chord, ok := trigger.(Key_Chord)
		if ok do return chord, true
	}
	return {}, false
}

first_gamepad_button :: proc(list: Trigger_List) -> (Gamepad_Button, bool) {
	for trigger in list {
		button, ok := trigger.(Gamepad_Button)
		if ok do return button, true
	}
	return {}, false
}

// ---------------------------------------------------------------------------
// Names

KEY_NAMES := [Key]string{
	.A = "A",
	.B = "B",
	.C = "C",
	.D = "D",
	.E = "E",
	.F = "F",
	.G = "G",
	.H = "H",
	.I = "I",
	.J = "J",
	.K = "K",
	.L = "L",
	.M = "M",
	.N = "N",
	.O = "O",
	.P = "P",
	.Q = "Q",
	.R = "R",
	.S = "S",
	.T = "T",
	.U = "U",
	.V = "V",
	.W = "W",
	.X = "X",
	.Y = "Y",
	.Z = "Z",
	.NUM_0 = "0",
	.NUM_1 = "1",
	.NUM_2 = "2",
	.NUM_3 = "3",
	.NUM_4 = "4",
	.NUM_5 = "5",
	.NUM_6 = "6",
	.NUM_7 = "7",
	.NUM_8 = "8",
	.NUM_9 = "9",
	.F1 = "F1",
	.F2 = "F2",
	.F3 = "F3",
	.F4 = "F4",
	.F5 = "F5",
	.F6 = "F6",
	.F7 = "F7",
	.F8 = "F8",
	.F9 = "F9",
	.F10 = "F10",
	.F11 = "F11",
	.F12 = "F12",
	.UP = "Up",
	.DOWN = "Down",
	.LEFT = "Left",
	.RIGHT = "Right",
	.ENTER = "Enter",
	.ESCAPE = "Escape",
	.TAB = "Tab",
	.BACKSPACE = "Backspace",
	.DELETE = "Delete",
	.INSERT = "Insert",
	.HOME = "Home",
	.END = "End",
	.PAGE_UP = "PageUp",
	.PAGE_DOWN = "PageDown",
	.SPACE = "Space",
	.MINUS = "Minus",
	.EQUAL = "Equal",
	.MENU = "Menu",
}

MODIFIER_NAMES := [Modifier]string{
	.CONTROL = "Ctrl",
	.SHIFT = "Shift",
	.ALT = "Alt",
	.SUPER = "Super",
}

// Xbox labels, because they're what most pads (and the Steam Deck) print.
// Positions are what's actually bound: "A" is the bottom face button on any
// pad, which is Cross on PlayStation and B on Nintendo.
GAMEPAD_NAMES := [Gamepad_Button]string{
	.DPAD_UP = "DpadUp",
	.DPAD_DOWN = "DpadDown",
	.DPAD_LEFT = "DpadLeft",
	.DPAD_RIGHT = "DpadRight",
	.FACE_DOWN = "A",
	.FACE_RIGHT = "B",
	.FACE_LEFT = "X",
	.FACE_UP = "Y",
	.LEFT_SHOULDER = "LB",
	.RIGHT_SHOULDER = "RB",
	.LEFT_TRIGGER = "LT",
	.RIGHT_TRIGGER = "RT",
	.SELECT = "View",
	.START = "Menu",
	.GUIDE = "Guide",
	.LEFT_STICK = "LS",
	.RIGHT_STICK = "RS",
}

// Other spellings people reach for, accepted when reading a config.
@(private)
KEY_ALIASES := [?]struct {
	name: string,
	key:  Key,
}{{"Esc", .ESCAPE}, {"Return", .ENTER}, {"Del", .DELETE}, {"Ins", .INSERT}, {"PgUp", .PAGE_UP}, {"PgDn", .PAGE_DOWN}, {"=", .EQUAL}, {"-", .MINUS}}

@(private)
GAMEPAD_ALIASES := [?]struct {
	name:   string,
	button: Gamepad_Button,
}{
	{"South", .FACE_DOWN},
	{"East", .FACE_RIGHT},
	{"West", .FACE_LEFT},
	{"North", .FACE_UP},
	{"Select", .SELECT},
	{"Back", .SELECT},
	{"Start", .START},
	{"Up", .DPAD_UP},
	{"Down", .DPAD_DOWN},
	{"Left", .DPAD_LEFT},
	{"Right", .DPAD_RIGHT},
	{"L1", .LEFT_SHOULDER},
	{"R1", .RIGHT_SHOULDER},
	{"L2", .LEFT_TRIGGER},
	{"R2", .RIGHT_TRIGGER},
	{"L3", .LEFT_STICK},
	{"R3", .RIGHT_STICK},
}

@(private)
MODIFIER_ALIASES := [?]struct {
	name:     string,
	modifier: Modifier,
}{{"Control", .CONTROL}, {"Meta", .SUPER}, {"Win", .SUPER}}

// "Ctrl+Shift+Tab", "Y". Allocated in `allocator`.
trigger_to_string :: proc(trigger: Trigger, allocator := context.temp_allocator) -> string {
	switch t in trigger {
	case Key_Chord:
		builder := strings.builder_make(allocator)
		// The conventional order (Ctrl+Alt+Shift+Tab), not the enum's.
		order := [?]Modifier{.CONTROL, .ALT, .SHIFT, .SUPER}
		for modifier in order {
			if modifier in t.modifiers {
				strings.write_string(&builder, MODIFIER_NAMES[modifier])
				strings.write_byte(&builder, '+')
			}
		}
		strings.write_string(&builder, KEY_NAMES[t.key])
		return strings.to_string(builder)
	case Gamepad_Button:
		return strings.clone(GAMEPAD_NAMES[t], allocator)
	}
	return ""
}

// Parses one keyboard binding, like "Ctrl+Shift+Tab". Names are matched
// without regard to case.
parse_key_chord :: proc(text: string) -> (Key_Chord, bool) {
	chord: Key_Chord
	parts := strings.split(strings.trim_space(text), "+", context.temp_allocator)
	// "Ctrl++" means Ctrl and the plus key... which we don't have; a
	// trailing empty part is simply an error.
	for part, i in parts {
		name := strings.trim_space(part)
		if i < len(parts) - 1 {
			modifier, ok := parse_modifier(name)
			if !ok do return {}, false
			chord.modifiers += {modifier}
			continue
		}
		k, ok := parse_key(name)
		if !ok do return {}, false
		chord.key = k
	}
	return chord, len(parts) > 0
}

parse_gamepad_button :: proc(text: string) -> (Gamepad_Button, bool) {
	name := strings.trim_space(text)
	for button_name, button in GAMEPAD_NAMES {
		if strings.equal_fold(name, button_name) do return button, true
	}
	for alias in GAMEPAD_ALIASES {
		if strings.equal_fold(name, alias.name) do return alias.button, true
	}
	return {}, false
}

@(private)
parse_key :: proc(name: string) -> (Key, bool) {
	for key_name, k in KEY_NAMES {
		if strings.equal_fold(name, key_name) do return k, true
	}
	for alias in KEY_ALIASES {
		if strings.equal_fold(name, alias.name) do return alias.key, true
	}
	return {}, false
}

@(private)
parse_modifier :: proc(name: string) -> (Modifier, bool) {
	for modifier_name, modifier in MODIFIER_NAMES {
		if strings.equal_fold(name, modifier_name) do return modifier, true
	}
	for alias in MODIFIER_ALIASES {
		if strings.equal_fold(name, alias.name) do return alias.modifier, true
	}
	return {}, false
}
