package ui

import "core:strings"

// Jumping straight to an area of the screen, and showing where each jump
// will land.
//
// Moving focus one widget at a time is fine inside an area but slow and
// unpredictable across them, especially on a controller. So, by default:
//
//   controller -- hold View and press a face button: Y up, A down, X left,
//                 B right. Focus jumps to the area in that direction. While
//                 View is held, every area is outlined and labelled with the
//                 button that reaches it. (View + D-pad was tried first, but
//                 it puts both on the left thumb.)
//   keyboard   -- Ctrl+1 … Ctrl+9 jump to areas by number. Holding the
//                 modifier on its own for a moment shows the same overlay,
//                 numbered.
//
// All of these are bindings the user's config can change. Areas are the
// regions registered with begin_region, so new ones (another split view)
// join in without any extra code.

// A hold button released sooner than this, without picking a direction, was
// a tap: it's passed on as an ordinary press, so a button can be both the
// jump modifier (held) and something else (tapped) -- Menu, say, which also
// opens the context menu.
JUMP_HOLD_TAP_SECONDS :: 0.3

// The overlay waits this long into a hold, so a tap doesn't flash it.
JUMP_OVERLAY_HOLD_DELAY :: 0.15

// How long the area modifier must be held alone before the overlay appears.
// Long enough that Ctrl+A or Ctrl+H never flashes it.
REGION_OVERLAY_DELAY :: 0.45

MAX_NUMBERED_REGIONS :: 9

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
	ctx.region_jump_hold = triggers(pad(.SELECT))
	// The face buttons as a diamond: their positions match the directions.
	ctx.region_jump_directions[.UP] = triggers(pad(.FACE_UP))
	ctx.region_jump_directions[.DOWN] = triggers(pad(.FACE_DOWN))
	ctx.region_jump_directions[.LEFT] = triggers(pad(.FACE_LEFT))
	ctx.region_jump_directions[.RIGHT] = triggers(pad(.FACE_RIGHT))
	for i in 0 ..< MAX_NUMBERED_REGIONS {
		ctx.area_bindings[i] = triggers(key(Key(int(Key.NUM_1) + i), {.CONTROL}))
	}
}

@(private)
update_region_jump :: proc(ctx: ^Context) {
	ctx.jump_direction = {}
	ctx.jump_index = -1
	input := &ctx.input

	hold_buttons: Gamepad_Buttons
	for trigger in ctx.region_jump_hold {
		button, is_button := trigger.(Gamepad_Button)
		if is_button do hold_buttons += {button}
	}
	was_held := ctx.region_jump_held
	ctx.region_jump_held = input.gamepad_connected && input.gamepad_down & hold_buttons != {}

	if ctx.region_jump_held && !was_held {
		ctx.jump_hold_start = input.time
		ctx.jump_used_this_hold = false
	}
	// The hold button's own press never fires its other bindings straight
	// away; a quick release with no jump replays it as a tap instead.
	ctx.gamepad_repeated -= hold_buttons
	if was_held && !ctx.region_jump_held {
		was_tap := !ctx.jump_used_this_hold && input.time - ctx.jump_hold_start < JUMP_HOLD_TAP_SECONDS
		if was_tap do ctx.gamepad_repeated += ctx.previous_input.gamepad_down & hold_buttons
	}

	if ctx.region_jump_held {
		for direction in Jump_Direction {
			if any_trigger_pressed(ctx, ctx.region_jump_directions[direction]) {
				ctx.jump_direction = JUMP_VECTORS[direction]
				ctx.jump_used_this_hold = true
			}
			// Swallow these buttons whether or not they were pressed this
			// frame, so A doesn't open a file and B doesn't go up a folder
			// while they're picking an area.
			for trigger in ctx.region_jump_directions[direction] {
				button, is_button := trigger.(Gamepad_Button)
				if is_button do ctx.gamepad_repeated -= {button}
			}
		}
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
	hold_shown := ctx.region_jump_held && (ctx.jump_used_this_hold || input.time - ctx.jump_hold_start >= JUMP_OVERLAY_HOLD_DELAY)
	ctx.show_region_overlay = hold_shown || held_long_enough
}

// The modifiers the first area binding uses (Ctrl, by default), or none.
@(private)
area_key_modifiers :: proc(ctx: ^Context) -> Modifiers {
	chord, ok := first_key_chord(ctx.area_bindings[0])
	if !ok do return {}
	return chord.modifiers
}

// A one-line explanation of the area jump for the current device, built
// from the live bindings so it's right after the user changes them:
// "Hold View + Y/A/X/B to jump between areas".
region_jump_hint :: proc(ctx: ^Context, allocator := context.temp_allocator) -> string {
	#partial switch ctx.input_mode {
	case .GAMEPAD:
		hold, has_hold := first_gamepad_button(ctx.region_jump_hold)
		if !has_hold do return ""
		builder := strings.builder_make(allocator)
		strings.write_string(&builder, "Hold ")
		strings.write_string(&builder, GAMEPAD_NAMES[hold])
		strings.write_string(&builder, " + ")
		for direction, i in Jump_Direction {
			button, ok := first_gamepad_button(ctx.region_jump_directions[direction])
			if !ok do continue
			if i > 0 do strings.write_byte(&builder, '/')
			strings.write_string(&builder, GAMEPAD_NAMES[button])
		}
		strings.write_string(&builder, " to jump between areas")
		return strings.to_string(builder)
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
