package ui

Interaction :: enum u8 {
	HOVERED,
	PRESSED,
	FOCUSED,
	// The primary action: mouse click, touch tap, Enter/Space, gamepad A.
	CLICKED,
	// The secondary action: right-click, touch long-press, the Menu key or
	// Shift+F10, gamepad Start.
	SECONDARY,
}

Interactions :: bit_set[Interaction; u8]

// The shared core of every interactive widget. It turns all four input
// devices into the same small set of results, so a widget built on it is
// usable by mouse, keyboard, controller and touch without extra work.
interact :: proc(ctx: ^Context, id: Id, rect: Rect) -> Interactions {
	result: Interactions
	input := &ctx.input

	hit := expand_to_min_size(rect, ctx.theme.min_hit_size)
	append(&ctx.hit_targets, Hit_Target{id = id, visible = rect, hit = hit})
	register_focusable(ctx, id, rect)

	if ctx.focus == id do result += {.FOCUSED}
	if ctx.active == id do ctx.active_seen = true

	if ctx.hot == id {
		result += {.HOVERED}
		ctx.cursor = .POINTING_HAND
		if .LEFT in input.mouse_pressed {
			ctx.active = id
			ctx.active_seen = true
			ctx.focus = id
			ctx.press_time = input.time
			ctx.press_position = input.pointer_position
			ctx.long_press_ended = false
		}
		if .RIGHT in input.mouse_pressed {
			ctx.focus = id
			result += {.SECONDARY}
		}
	}

	if ctx.active == id {
		result += {.PRESSED}
		if .LEFT in input.mouse_released {
			// A long-press already fired SECONDARY; lifting the finger
			// afterwards must not also count as a tap.
			if !ctx.long_press_ended && rect_contains(hit, input.pointer_position) {
				result += {.CLICKED}
			}
			ctx.active = 0
		} else if !ctx.long_press_ended {
			moved := input.pointer_position - ctx.press_position
			if moved.x * moved.x + moved.y * moved.y > LONG_PRESS_SLOP * LONG_PRESS_SLOP {
				// Moving away turns the press into a drag, which is never a
				// long-press. Releasing over the widget still clicks.
				ctx.long_press_ended = true
			} else if input.time - ctx.press_time >= LONG_PRESS_SECONDS {
				result += {.SECONDARY}
				ctx.long_press_ended = true
			} else {
				ctx.wants_timer = true
			}
		}
	}

	if ctx.focus == id {
		if .ACTIVATE in ctx.nav_pressed do result += {.CLICKED}
		if .CONTEXT_MENU in ctx.nav_pressed do result += {.SECONDARY}
	}

	return result
}

// ---------------------------------------------------------------------------

label :: proc(ctx: ^Context, rect: Rect, text: string, color: Color, align: Align = .LEFT, size: f32 = 0) {
	font_size := size
	if font_size <= 0 do font_size = ctx.theme.font_size

	measured := measure_text(ctx, text, font_size)
	position := Vec2{rect.x, rect.y + (rect.h - measured.y) / 2}
	switch align {
	case .LEFT:
	case .CENTER:
		position.x = rect.x + (rect.w - measured.x) / 2
	case .RIGHT:
		position.x = rect.x + rect.w - measured.x
	}
	draw_text(ctx, position, text, font_size, color)
}

panel :: proc(ctx: ^Context, rect: Rect) {
	draw_rect(ctx, rect, ctx.theme.panel)
}

// Returns the full set of interactions so the caller can react to both
// CLICKED and SECONDARY. `button` is the shorthand for the common case.
button_ex :: proc(ctx: ^Context, rect: Rect, text: string, selected: bool = false) -> Interactions {
	id := get_id(ctx, text)
	result := interact(ctx, id, rect)
	theme := &ctx.theme

	color := theme.button
	if .HOVERED in result do color = theme.button_hot
	if .PRESSED in result do color = theme.button_active
	draw_rect(ctx, rect, color, theme.radius)

	if selected {
		accent_bar := Rect{rect.x, rect.y + rect.h * 0.2, 3, rect.h * 0.6}
		draw_rect(ctx, accent_bar, theme.accent, 1.5)
	}

	label(ctx, inset_xy(rect, theme.padding, 0), text, theme.text, .CENTER)

	if .FOCUSED in result && show_focus_ring(ctx) {
		ring := inset(rect, -theme.focus_ring_width)
		draw_rect_outline(ctx, ring, theme.focus_ring, theme.radius + theme.focus_ring_width, theme.focus_ring_width)
	}
	return result
}

button :: proc(ctx: ^Context, rect: Rect, text: string, selected: bool = false) -> bool {
	return .CLICKED in button_ex(ctx, rect, text, selected)
}
