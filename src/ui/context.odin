package ui

import "core:mem"
import vmem "core:mem/virtual"

// The one thing `ui` needs to ask the backend during a frame. Everything
// else flows one way: Input in, Draw_Commands out.
Backend :: struct {
	measure_text:  proc(font: Font_Id, size: f32, text: string, user_data: rawptr) -> Vec2,
	// Optional. Text fields use them for Ctrl+C / Ctrl+V.
	get_clipboard: proc(user_data: rawptr, allocator := context.temp_allocator) -> string,
	set_clipboard: proc(user_data: rawptr, text: string),
	user_data:     rawptr,
}

// How long a press must be held, without the pointer wandering, to count as
// a long-press. Long-press is the touch equivalent of right-click.
LONG_PRESS_SECONDS :: 0.5
LONG_PRESS_SLOP :: 10

// Gamepads have no OS key repeat, so we provide our own for the D-pad.
GAMEPAD_REPEAT_DELAY :: 0.4
GAMEPAD_REPEAT_INTERVAL :: 0.08
GAMEPAD_REPEATING_BUTTONS :: Gamepad_Buttons{.DPAD_UP, .DPAD_DOWN, .DPAD_LEFT, .DPAD_RIGHT}
STICK_THRESHOLD :: 0.5

Context :: struct {
	backend: Backend,
	theme:   Theme,
	// Logical-to-physical pixel ratio. Owned by the app (DPI times zoom);
	// the backend reads it when drawing and when reporting the pointer.
	scale: f32,

	input:          Input,
	previous_input: Input,
	input_mode:     Input_Mode,

	nav_bindings:      [Nav_Action]Trigger_List,
	nav_pressed:       Nav_Actions,
	gamepad_repeated:  Gamepad_Buttons,
	gamepad_virtual:   Gamepad_Buttons,
	gamepad_next_repeat: [Gamepad_Button]f64,

	hot:    Id,
	active: Id,
	focus:  Id,

	press_time:       f64,
	press_position:   Vec2,
	long_press_ended: bool,

	last_click_id:       Id,
	last_click_time:     f64,
	last_click_position: Vec2,

	// Seconds since the previous frame, clamped so a stall (a debugger
	// pause, a suspended laptop) doesn't fling a scroll across the list.
	delta_time: f32,

	scroll_states: map[Id]Scroll_State,

	// Pointer press/release events that arrived at a position the current
	// `hot` wasn't computed for (a touch tap lands without a hover first).
	// They are replayed next frame, once `hot` has caught up.
	deferred_pressed:  Mouse_Buttons,
	deferred_released: Mouse_Buttons,
	hot_position:      Vec2,

	id_stack:      [dynamic]Id,
	region_stack:  [dynamic]Id,
	regions:       [dynamic]Region,
	focusables:    [dynamic]Focusable,
	hit_targets:   [dynamic]Hit_Target,
	region_memory: map[Id]Id,
	focus_seen:    bool,
	active_seen:   bool,

	commands:        [dynamic]Draw_Command,
	frame_arena:     vmem.Arena,
	frame_allocator: mem.Allocator,

	// Jumping straight to an area (see region_jump.odin).
	region_jump_activate:   Trigger_List,
	region_jump_mode:       Area_Jump_Mode,
	region_jump_toggled:    bool,
	region_jump_opened_at:  f64,
	region_jump_directions: [Jump_Direction]Trigger_List,
	area_bindings:          [MAX_NUMBERED_REGIONS]Trigger_List,
	region_jump_held:    bool,
	// Gamepad buttons that take part in chords ("View+RT", "LT+RT"), set by
	// the app from its bindings. The area-jump chord's buttons always do.
	gamepad_modifiers:     Gamepad_Buttons,
	gamepad_layer_held:    bool,
	gamepad_layer_pressed: Gamepad_Buttons,
	jump_hold_start:     f64,
	jump_used_this_hold: bool,
	jump_direction:      Vec2,
	jump_index:          int,
	control_hold_start:  f64,
	show_region_overlay: bool,

	// While a text field is being edited, key presses belong to it: keyboard
	// bindings (Backspace = go up, arrows = move focus) are switched off. A
	// field asks for this each frame it's active; it applies the next frame.
	keyboard_captured:     bool,
	capture_keyboard_next: bool,

	cursor: Cursor,
	// Set by widgets that need time to pass with no input (a long-press
	// timer, an animation). The main loop must keep polling while it's set.
	wants_timer: bool,

	previous_hash:   u64,
	previous_hot:    Id,
	previous_active: Id,
	previous_focus:  Id,
}

// An area of the screen focus can jump between: the toolbar, the sidebar,
// a file view. `title` is what the jump overlay calls it.
Region :: struct {
	id:    Id,
	rect:  Rect,
	title: string,
}

Focusable :: struct {
	id:     Id,
	rect:   Rect,
	region: Id,
}

Hit_Target :: struct {
	id:      Id,
	visible: Rect,
	hit:     Rect,
}

Frame :: struct {
	commands: []Draw_Command,
	cursor:   Cursor,
	// The commands differ from last frame, so the screen needs redrawing.
	changed: bool,
	// Interaction state moved this frame (hot, focus, a deferred tap), so
	// one more frame must run before it's safe to sleep until the next event.
	needs_another_frame: bool,
}

init :: proc(ctx: ^Context, backend: Backend) -> bool {
	ctx.backend = backend
	ctx.theme = default_theme()
	ctx.scale = 1
	ctx.nav_bindings = default_nav_bindings()
	set_default_region_jump_bindings(ctx)
	err := vmem.arena_init_growing(&ctx.frame_arena)
	if err != nil do return false
	ctx.frame_allocator = vmem.arena_allocator(&ctx.frame_arena)
	return true
}

destroy :: proc(ctx: ^Context) {
	delete(ctx.id_stack)
	delete(ctx.region_stack)
	delete(ctx.regions)
	delete(ctx.focusables)
	delete(ctx.hit_targets)
	delete(ctx.region_memory)
	delete(ctx.scroll_states)
	delete(ctx.commands)
	vmem.arena_destroy(&ctx.frame_arena)
}

begin_frame :: proc(ctx: ^Context, input: Input) {
	vmem.arena_free_all(&ctx.frame_arena)
	clear(&ctx.commands)
	clear(&ctx.id_stack)
	clear(&ctx.region_stack)
	clear(&ctx.regions)
	clear(&ctx.focusables)
	clear(&ctx.hit_targets)

	ctx.previous_input = ctx.input
	ctx.input = input
	ctx.delta_time = clamp(f32(input.time - ctx.previous_input.time), 0, 0.1)
	ctx.cursor = .DEFAULT
	ctx.wants_timer = false
	ctx.focus_seen = false
	ctx.active_seen = false
	ctx.previous_hot = ctx.hot
	ctx.previous_active = ctx.active
	ctx.previous_focus = ctx.focus

	ctx.keyboard_captured = ctx.capture_keyboard_next
	ctx.capture_keyboard_next = false

	replay_deferred_pointer_events(ctx)
	update_gamepad_repeat(ctx)
	update_input_mode(ctx)
	// Before navigation: while the jump button is held, the buttons that
	// pick a direction are taken out of this frame's input, so they don't
	// also activate or go back.
	update_region_jump(ctx)

	ctx.nav_pressed = {}
	for action in Nav_Action {
		if any_trigger_pressed(ctx, ctx.nav_bindings[action]) do ctx.nav_pressed += {action}
	}
}

end_frame :: proc(ctx: ^Context) -> Frame {
	if ctx.active != 0 && !ctx.active_seen do ctx.active = 0
	if ctx.focus != 0 && !ctx.focus_seen do ctx.focus = 0

	update_hot(ctx)
	update_focus_navigation(ctx)
	apply_region_jump(ctx)
	draw_region_overlay(ctx)

	hash := hash_commands(ctx.commands[:])
	changed := hash != ctx.previous_hash
	ctx.previous_hash = hash

	needs_another_frame := changed
	if ctx.hot != ctx.previous_hot do needs_another_frame = true
	if ctx.active != ctx.previous_active do needs_another_frame = true
	if ctx.focus != ctx.previous_focus do needs_another_frame = true
	if ctx.deferred_pressed != {} || ctx.deferred_released != {} do needs_another_frame = true
	if ctx.nav_pressed != {} do needs_another_frame = true
	if ctx.jump_direction != {} || ctx.jump_index >= 0 do needs_another_frame = true

	return Frame{
		commands = ctx.commands[:],
		cursor = ctx.cursor,
		changed = changed,
		needs_another_frame = needs_another_frame,
	}
}

// The full-screen rect, in logical pixels.
screen_rect :: proc(ctx: ^Context) -> Rect {
	return Rect{0, 0, ctx.input.screen_size.x, ctx.input.screen_size.y}
}

show_focus_ring :: proc(ctx: ^Context) -> bool {
	return ctx.input_mode != .POINTER
}

// ---------------------------------------------------------------------------
// Ids
//
// An id is a hash of a label and every id pushed above it, so "Open" in the
// sidebar and "Open" in a context menu don't collide as long as each sits
// under its own push_id.

get_id :: proc(ctx: ^Context, label: string) -> Id {
	seed := u64(FNV_OFFSET)
	if len(ctx.id_stack) > 0 do seed = u64(ctx.id_stack[len(ctx.id_stack) - 1])
	return Id(fnv_bytes(seed, transmute([]u8)label))
}

get_id_int :: proc(ctx: ^Context, value: int) -> Id {
	seed := u64(FNV_OFFSET)
	if len(ctx.id_stack) > 0 do seed = u64(ctx.id_stack[len(ctx.id_stack) - 1])
	v := value
	return Id(fnv_bytes(seed, mem.ptr_to_bytes(&v)))
}

push_id :: proc(ctx: ^Context, label: string) {
	append(&ctx.id_stack, get_id(ctx, label))
}

push_id_int :: proc(ctx: ^Context, value: int) {
	append(&ctx.id_stack, get_id_int(ctx, value))
}

pop_id :: proc(ctx: ^Context) {
	pop(&ctx.id_stack)
}

// ---------------------------------------------------------------------------
// Input bookkeeping

@(private)
replay_deferred_pointer_events :: proc(ctx: ^Context) {
	// Events are only ever held back once, so a finger that keeps moving
	// can't postpone its own tap forever.
	replaying := ctx.deferred_pressed != {} || ctx.deferred_released != {}
	ctx.input.mouse_pressed += ctx.deferred_pressed
	ctx.input.mouse_released += ctx.deferred_released
	ctx.deferred_pressed = {}
	ctx.deferred_released = {}

	// `hot` was computed at the end of last frame for `hot_position`. If a
	// press arrives somewhere else -- always the case for a touch tap, which
	// has no hover beforehand -- `hot` points at the wrong widget. Hold the
	// press back one frame so end_frame can recompute `hot` for where the
	// pointer actually is. Releases ride along so a quick tap keeps its order.
	pointer_events := ctx.input.mouse_pressed != {} || ctx.input.mouse_released != {}
	if !replaying && pointer_events && ctx.input.pointer_position != ctx.hot_position && ctx.active == 0 {
		ctx.deferred_pressed = ctx.input.mouse_pressed
		ctx.deferred_released = ctx.input.mouse_released
		ctx.input.mouse_pressed = {}
		ctx.input.mouse_released = {}
	}
}

@(private)
update_gamepad_repeat :: proc(ctx: ^Context) {
	ctx.gamepad_repeated = {}
	if !ctx.input.gamepad_connected {
		ctx.gamepad_virtual = {}
		return
	}

	// The left stick acts as a second D-pad, so it gets the same repeat.
	stick: Gamepad_Buttons
	if ctx.input.left_stick.y < -STICK_THRESHOLD do stick += {.DPAD_UP}
	if ctx.input.left_stick.y > STICK_THRESHOLD do stick += {.DPAD_DOWN}
	if ctx.input.left_stick.x < -STICK_THRESHOLD do stick += {.DPAD_LEFT}
	if ctx.input.left_stick.x > STICK_THRESHOLD do stick += {.DPAD_RIGHT}

	previous_virtual := ctx.gamepad_virtual
	ctx.gamepad_virtual = ctx.input.gamepad_down + stick
	pressed := ctx.input.gamepad_pressed + (stick - previous_virtual)

	now := ctx.input.time
	for button in Gamepad_Button {
		if button in pressed {
			ctx.gamepad_repeated += {button}
			ctx.gamepad_next_repeat[button] = now + GAMEPAD_REPEAT_DELAY
		} else if button in ctx.gamepad_virtual && button in GAMEPAD_REPEATING_BUTTONS {
			if now >= ctx.gamepad_next_repeat[button] {
				ctx.gamepad_repeated += {button}
				ctx.gamepad_next_repeat[button] = now + GAMEPAD_REPEAT_INTERVAL
			}
		}
	}
}

@(private)
update_input_mode :: proc(ctx: ^Context) {
	pointer_moved := ctx.input.pointer_position != ctx.previous_input.pointer_position
	if pointer_moved || ctx.input.mouse_pressed != {} || ctx.input.wheel != {} {
		ctx.input_mode = .POINTER
	}
	if ctx.input.keys_pressed != {} do ctx.input_mode = .KEYBOARD
	if ctx.gamepad_repeated != {} do ctx.input_mode = .GAMEPAD
}

@(private)
update_hot :: proc(ctx: ^Context) {
	// Prefer a widget the pointer is visibly over; otherwise the one whose
	// padded touch area it's nearest. Later widgets win ties, since they're
	// drawn on top.
	best: Id
	best_score := max(f32)
	for target in ctx.hit_targets {
		if !rect_contains(target.hit, ctx.input.pointer_position) do continue
		score := distance_squared_to_rect(target.visible, ctx.input.pointer_position)
		if score <= best_score {
			best = target.id
			best_score = score
		}
	}

	if ctx.active != 0 {
		// While something is held, nothing else lights up.
		if best == ctx.active {
			ctx.hot = ctx.active
		} else {
			ctx.hot = 0
		}
	} else {
		ctx.hot = best
	}
	ctx.hot_position = ctx.input.pointer_position
}

// ---------------------------------------------------------------------------
// Frame hashing: lets the main loop skip redrawing an identical frame.

@(private)
FNV_OFFSET :: 0xcbf29ce484222325

@(private)
FNV_PRIME :: 0x100000001b3

@(private)
fnv_bytes :: proc(seed: u64, data: []u8) -> u64 {
	hash := seed
	for b in data {
		hash ~= u64(b)
		hash *= FNV_PRIME
	}
	return hash
}

@(private)
fnv_value :: proc(seed: u64, value: $T) -> u64 {
	v := value
	return fnv_bytes(seed, mem.ptr_to_bytes(&v))
}

// Hashed field by field rather than as raw struct bytes, so padding and the
// text pointer (which changes every frame) don't make identical frames look
// different.
@(private)
hash_commands :: proc(commands: []Draw_Command) -> u64 {
	hash := u64(FNV_OFFSET)
	for command in commands {
		switch c in command {
		case Draw_Rect:
			hash = fnv_value(hash, u8(1))
			hash = fnv_value(hash, c.rect)
			hash = fnv_value(hash, c.color)
			hash = fnv_value(hash, c.radius)
		case Draw_Rect_Outline:
			hash = fnv_value(hash, u8(2))
			hash = fnv_value(hash, c.rect)
			hash = fnv_value(hash, c.color)
			hash = fnv_value(hash, c.radius)
			hash = fnv_value(hash, c.thickness)
		case Draw_Text:
			hash = fnv_value(hash, u8(3))
			hash = fnv_value(hash, c.position)
			hash = fnv_value(hash, c.font)
			hash = fnv_value(hash, c.size)
			hash = fnv_value(hash, c.color)
			hash = fnv_bytes(hash, transmute([]u8)c.text)
		case Draw_Image:
			hash = fnv_value(hash, u8(4))
			hash = fnv_value(hash, c.image)
			hash = fnv_value(hash, c.source)
			hash = fnv_value(hash, c.destination)
			hash = fnv_value(hash, c.tint)
		case Draw_Clip_Push:
			hash = fnv_value(hash, u8(5))
			hash = fnv_value(hash, c.rect)
		case Draw_Clip_Pop:
			hash = fnv_value(hash, u8(6))
		}
	}
	return hash
}
