package ui

import "core:strings"

// Jumping straight to an area of the screen, and showing where each jump
// will land.
//
// Moving focus one widget at a time is fine inside an area but slow and
// unpredictable across them, especially on a controller. So, by default:
//
//   controller -- press LT+RT together: every area is outlined and labelled
//                 with the face button that reaches it (Y up, A down, X
//                 left, B right). Press one to jump there. LT+RT again
//                 closes the overlay. With area_jump_mode = hold, the
//                 overlay shows only while LT+RT are held instead.
//   keyboard   -- Ctrl+1 … Ctrl+9 jump to areas by number. Holding the
//                 modifier on its own for a moment shows the same overlay,
//                 numbered.
//
// (Hold View + D-pad, then hold View + face buttons, came first; both were
// awkward to hold while choosing.)
//
// All of these are bindings and options the user's config can change. Areas
// are the regions registered with begin_region, so new ones (another split
// view) join in without any extra code.

// A chord button released sooner than this, without being used in a chord,
// was a tap: it's passed on as an ordinary press, so a button can be part of
// a chord (LT+RT) and still do its own job when tapped (LT pages up).
JUMP_HOLD_TAP_SECONDS :: 0.3

// In hold mode the overlay waits this long, so a quick tap doesn't flash it.
JUMP_OVERLAY_HOLD_DELAY :: 0.15

// How long the area modifier must be held alone before the overlay appears.
// Long enough that Ctrl+A or Ctrl+H never flashes it.
REGION_OVERLAY_DELAY :: 0.45

MAX_NUMBERED_REGIONS :: 9

Area_Jump_Mode :: enum u8 {
	// The activation chord opens the overlay; pressing it again closes it.
	TOGGLE,
	// The overlay is open only while the activation chord is held.
	HOLD,
}

Jump_Direction :: enum u8 {
	UP,
	DOWN,
	LEFT,
	RIGHT,
}

JUMP_VECTORS := [Jump_Direction]Vec2{
	.UP = {0, -1},
	.DOWN = {0, 1},
	.LEFT = {-1, 0},
	.RIGHT = {1, 0},
}

JUMP_ARROWS := [Jump_Direction]string{
	.UP = "▲",
	.DOWN = "▼",
	.LEFT = "◀",
	.RIGHT = "▶",
}

set_default_region_jump_bindings :: proc(ctx: ^Context) {
	ctx.region_jump_activate = triggers(pad_chord(.LEFT_TRIGGER, .RIGHT_TRIGGER))
	ctx.region_jump_mode = .TOGGLE
	// The face buttons as a diamond: their positions match the directions.
	ctx.region_jump_directions[.UP] = triggers(pad(.FACE_UP))
	ctx.region_jump_directions[.DOWN] = triggers(pad(.FACE_DOWN))
	ctx.region_jump_directions[.LEFT] = triggers(pad(.FACE_LEFT))
	ctx.region_jump_directions[.RIGHT] = triggers(pad(.FACE_RIGHT))
	for i in 0 ..< MAX_NUMBERED_REGIONS {
		ctx.area_bindings[i] = triggers(key(Key(int(Key.NUM_1) + i), {.CONTROL}))
	}
}

// Chord buttons -- every button in any chord, both halves -- form a layer:
// while one is held, every button press goes to ctx.gamepad_layer_pressed,
// where chords look for it, instead of doing its usual job. A chord button
// tapped on its own is passed on as an ordinary press when it's released.
//
// Both halves count, so a chord works pressed in either order: LT then RT,
// RT then LT, or both at once. The cost is that a chord button's own job
// happens on release rather than press, which is why tab switching (LB/RB)
// deliberately isn't in any default chord.
@(private)
update_gamepad_layer :: proc(ctx: ^Context) {
	input := &ctx.input
	modifiers := ctx.gamepad_modifiers + chord_buttons(ctx.region_jump_activate)

	was_held := ctx.gamepad_layer_held
	ctx.gamepad_layer_held = input.gamepad_connected && input.gamepad_down & modifiers != {}
	ctx.gamepad_layer_pressed = {}
	pressed := ctx.gamepad_repeated

	if ctx.gamepad_layer_held && !was_held {
		ctx.jump_hold_start = input.time
		ctx.jump_used_this_hold = false
	}
	if ctx.gamepad_layer_held {
		ctx.gamepad_layer_pressed = pressed
		ctx.gamepad_repeated = {}
		// A press joining a layer that was already held, or several buttons
		// at once, is a chord. One chord button going down alone isn't, yet.
		if was_held && pressed != {} do ctx.jump_used_this_hold = true
		if card(pressed) > 1 do ctx.jump_used_this_hold = true
	}
	if was_held && !ctx.gamepad_layer_held {
		was_tap := !ctx.jump_used_this_hold && input.time - ctx.jump_hold_start < JUMP_HOLD_TAP_SECONDS
		if was_tap do ctx.gamepad_repeated += ctx.previous_input.gamepad_down & modifiers
	}
}

// Every button named in a chord in `list`, both halves.
chord_buttons :: proc(list: Trigger_List) -> Gamepad_Buttons {
	buttons: Gamepad_Buttons
	for trigger in list {
		chord, is_chord := trigger.(Gamepad_Chord)
		if is_chord do buttons += {chord.modifier, chord.button}
	}
	return buttons
}

// Whether every button of a trigger is held right now.
@(private)
trigger_held :: proc(ctx: ^Context, trigger: Trigger) -> bool {
	down := ctx.input.gamepad_down
	#partial switch t in trigger {
	case Gamepad_Button:
		return t in down
	case Gamepad_Chord:
		return t.modifier in down && t.button in down
	}
	return false
}

@(private)
update_region_jump :: proc(ctx: ^Context) {
	ctx.jump_direction = {}
	ctx.jump_index = -1
	input := &ctx.input

	update_gamepad_layer(ctx)

	was_active := ctx.region_jump_held
	active := false
	switch ctx.region_jump_mode {
	case .HOLD:
		for trigger in ctx.region_jump_activate {
			if trigger != nil && trigger_held(ctx, trigger) do active = true
		}
	case .TOGGLE:
		if any_trigger_pressed(ctx, ctx.region_jump_activate) do ctx.region_jump_toggled = !ctx.region_jump_toggled
		active = ctx.region_jump_toggled
	}
	if !input.gamepad_connected {
		ctx.region_jump_toggled = false
		active = false
	}
	ctx.region_jump_held = active
	if active && !was_active do ctx.region_jump_opened_at = input.time

	if active {
		// The direction buttons pick an area instead of doing their usual
		// job: A mustn't open a file and B mustn't go up a folder while
		// they're choosing. Taken from both the layer (hold mode, where the
		// chord is down) and plain presses (toggle mode).
		for direction in Jump_Direction {
			for trigger in ctx.region_jump_directions[direction] {
				button, is_button := trigger.(Gamepad_Button)
				if !is_button do continue
				if button in ctx.gamepad_repeated || button in ctx.gamepad_layer_pressed {
					ctx.jump_direction = JUMP_VECTORS[direction]
				}
				ctx.gamepad_repeated -= {button}
				ctx.gamepad_layer_pressed -= {button}
			}
		}
		// While the overlay is up, the controller does nothing else: only
		// its own buttons (the activation chord, already handled above, and
		// the jump buttons) work. The D-pad, both sticks, the shoulders and
		// every other button and chord are switched off, so nothing moves
		// behind the overlay while an area is being picked. Keyboard and
		// mouse are left alone; the overlay belongs to the controller.
		ctx.gamepad_repeated = {}
		ctx.gamepad_layer_pressed = {}
		input.left_stick = {}
		input.right_stick = {}
	}

	for binding, i in ctx.area_bindings {
		if any_trigger_pressed(ctx, binding) do ctx.jump_index = i
	}

	// The overlay also appears when the area keys' modifier is held on its
	// own. Pointer users hold Ctrl to multi-select with clicks; the overlay
	// would only get in their way, so it's keyboard and controller only.
	area_modifiers := area_key_modifiers(ctx)
	modifier_alone := area_modifiers != {} && input.modifiers == area_modifiers && input.keys_down == {}
	modifier_alone = modifier_alone && ctx.input_mode != .POINTER
	if modifier_alone {
		if ctx.control_hold_start == 0 do ctx.control_hold_start = input.time
	} else {
		ctx.control_hold_start = 0
	}
	held_long_enough := modifier_alone && input.time - ctx.control_hold_start >= REGION_OVERLAY_DELAY
	// Toggle mode shows at once -- the chord was a deliberate press. Hold
	// mode waits a moment, so brushing the chord doesn't flash it.
	hold_shown := false
	if ctx.region_jump_held {
		hold_shown = ctx.region_jump_mode == .TOGGLE || input.time - ctx.region_jump_opened_at >= JUMP_OVERLAY_HOLD_DELAY
	}
	ctx.show_region_overlay = hold_shown || held_long_enough
}

// The modifiers the first area binding uses (Ctrl, by default), or none.
@(private)
area_key_modifiers :: proc(ctx: ^Context) -> Modifiers {
	chord, ok := first_key_chord(ctx.area_bindings[0])
	if !ok do return {}
	return chord.modifiers
}

// The first gamepad binding in a list, written out ("LT+RT"), or "".
@(private)
first_gamepad_trigger_name :: proc(list: Trigger_List) -> string {
	for trigger in list {
		#partial switch _ in trigger {
		case Gamepad_Button, Gamepad_Chord:
			return trigger_to_string(trigger, context.temp_allocator)
		}
	}
	return ""
}

// "Y/A/X/B": the buttons that pick up, down, left and right.
@(private)
direction_button_names :: proc(ctx: ^Context) -> string {
	builder := strings.builder_make(context.temp_allocator)
	for direction, i in Jump_Direction {
		button, ok := first_gamepad_button(ctx.region_jump_directions[direction])
		if !ok do continue
		if i > 0 do strings.write_byte(&builder, '/')
		strings.write_string(&builder, GAMEPAD_NAMES[button])
	}
	return strings.to_string(builder)
}

// A one-line explanation of the area jump for the current device, built
// from the live bindings so it's right after the user changes them:
// "Hold View + Y/A/X/B to jump between areas".
region_jump_hint :: proc(ctx: ^Context, allocator := context.temp_allocator) -> string {
	#partial switch ctx.input_mode {
	case .GAMEPAD:
		activate := first_gamepad_trigger_name(ctx.region_jump_activate)
		if len(activate) == 0 do return ""
		directions := direction_button_names(ctx)
		if ctx.region_jump_mode == .HOLD {
			return strings.concatenate({"Hold ", activate, ", then ", directions, " to jump between areas"}, allocator)
		}
		return strings.concatenate({activate, " shows the areas · ", directions, " jumps"}, allocator)
	case .KEYBOARD:
		first, has_first := first_key_chord(ctx.area_bindings[0])
		if !has_first do return ""
		last_index := max(numbered_region_count(ctx) - 1, 0)
		last, has_last := first_key_chord(ctx.area_bindings[last_index])
		if !has_last do last = first
		return strings.concatenate({
			trigger_to_string(first, context.temp_allocator),
			"–",
			KEY_NAMES[last.key],
			" jump between areas · hold to see them",
		}, allocator)
	}
	return ""
}

// How many areas Ctrl+number can reach this frame.
numbered_region_count :: proc(ctx: ^Context) -> int {
	return min(len(ctx.regions), MAX_NUMBERED_REGIONS)
}

@(private)
apply_region_jump :: proc(ctx: ^Context) {
	if ctx.jump_index >= 0 && ctx.jump_index < len(ctx.regions) {
		focus_region(ctx, ctx.regions[ctx.jump_index].id)
	}
	if ctx.jump_direction != {} {
		target := region_in_direction(ctx, ctx.jump_direction)
		if target >= 0 do focus_region(ctx, ctx.regions[target].id)
	}
}

// The region containing the focused widget, or -1.
@(private)
current_region_index :: proc(ctx: ^Context) -> int {
	index := find_focusable(ctx, ctx.focus)
	if index < 0 do return -1
	for region, i in ctx.regions {
		if region.id == ctx.focusables[index].region do return i
	}
	return -1
}

// The nearest region in `direction` from the current one, scored the same
// way as moving focus between widgets. Regions with nothing focusable in
// them are skipped -- there'd be nowhere to land.
@(private)
region_in_direction :: proc(ctx: ^Context, direction: Vec2) -> int {
	current := current_region_index(ctx)
	from := rect_center(screen_rect(ctx))
	if current >= 0 do from = rect_center(ctx.regions[current].rect)

	best := -1
	best_score := max(f32)
	for region, i in ctx.regions {
		if i == current do continue
		if !region_has_focusable(ctx, region.id) do continue
		delta := rect_center(region.rect) - from
		along := delta.x * direction.x + delta.y * direction.y
		if along <= 0.5 do continue
		across := abs(delta.x * direction.y) + abs(delta.y * direction.x)
		score := along + across * 2
		if score < best_score {
			best = i
			best_score = score
		}
	}
	return best
}

@(private)
region_has_focusable :: proc(ctx: ^Context, id: Id) -> bool {
	for focusable in ctx.focusables {
		if focusable.region == id do return true
	}
	return false
}

// Drawn last in the frame so it sits on top of everything.
@(private)
draw_region_overlay :: proc(ctx: ^Context) {
	if !ctx.show_region_overlay do return
	theme := &ctx.theme
	current := current_region_index(ctx)

	// Label each region with the button that reaches it, worked out with
	// the same search the jump itself uses, so the overlay can't promise a
	// jump that goes somewhere else.
	hints: [dynamic]string
	hints.allocator = ctx.frame_allocator
	resize(&hints, len(ctx.regions))
	if ctx.region_jump_held {
		for direction in Jump_Direction {
			target := region_in_direction(ctx, JUMP_VECTORS[direction])
			if target < 0 || len(hints[target]) > 0 do continue
			button, ok := first_gamepad_button(ctx.region_jump_directions[direction])
			if !ok do continue
			hints[target] = concatenate_frame(ctx, concatenate_frame(ctx, GAMEPAD_NAMES[button], " "), JUMP_ARROWS[direction])
		}
	}

	draw_rect(ctx, screen_rect(ctx), {0, 0, 0, 90})
	for region, i in ctx.regions {
		is_current := i == current
		outline := Color{theme.focus_ring.r, theme.focus_ring.g, theme.focus_ring.b, 150}
		thickness: f32 = 2
		if is_current {
			outline = theme.accent
			thickness = 3
		}
		draw_rect_outline(ctx, inset(region.rect, 3), outline, theme.radius, thickness)

		hint := ""
		if ctx.region_jump_held {
			hint = hints[i]
			if is_current do hint = "●"
		} else if i < MAX_NUMBERED_REGIONS {
			chord, ok := first_key_chord(ctx.area_bindings[i])
			if ok do hint = clone_to_frame(ctx, trigger_to_string(chord, context.temp_allocator))
		}
		draw_region_badge(ctx, region, hint, is_current)
	}

	// In toggle mode the overlay stays until closed, so say how.
	if ctx.region_jump_held && ctx.region_jump_mode == .TOGGLE {
		activate := first_gamepad_trigger_name(ctx.region_jump_activate)
		if len(activate) > 0 {
			footer := concatenate_frame(ctx, activate, ": close")
			screen := screen_rect(ctx)
			size := measure_text(ctx, footer, 16)
			box := Rect{screen.x + (screen.w - size.x) / 2 - 14, screen.y + screen.h - size.y - 64, size.x + 28, size.y + 16}
			draw_rect(ctx, box, ctx.theme.panel, ctx.theme.radius)
			draw_rect_outline(ctx, box, ctx.theme.focus_ring, ctx.theme.radius, 1.5)
			label(ctx, box, footer, ctx.theme.text, .CENTER, 16)
		}
	}
}

@(private)
draw_region_badge :: proc(ctx: ^Context, region: Region, hint: string, is_current: bool) {
	theme := &ctx.theme
	BADGE_TEXT :: 18
	text := region.title
	if len(hint) > 0 do text = concatenate_frame(ctx, concatenate_frame(ctx, hint, "  "), region.title)
	if is_current && ctx.region_jump_held do text = concatenate_frame(ctx, text, "  (here)")

	size := measure_text(ctx, text, BADGE_TEXT)
	padding := Vec2{16, 10}
	center := rect_center(region.rect)
	badge := Rect{
		center.x - size.x / 2 - padding.x,
		center.y - size.y / 2 - padding.y,
		size.x + padding.x * 2,
		size.y + padding.y * 2,
	}
	// Keep the badge inside its region even when the region is a thin
	// strip like the toolbar.
	badge.x = clamp(badge.x, region.rect.x, max(region.rect.x + region.rect.w - badge.w, region.rect.x))
	badge.y = clamp(badge.y, region.rect.y, max(region.rect.y + region.rect.h - badge.h, region.rect.y))

	fill := theme.panel
	if is_current do fill = theme.button_active
	draw_rect(ctx, badge, fill, theme.radius)
	draw_rect_outline(ctx, badge, theme.focus_ring, theme.radius, 1.5)
	label(ctx, badge, text, theme.text, .CENTER, BADGE_TEXT)
}
