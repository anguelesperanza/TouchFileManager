package ui

Interaction :: enum u8 {
	HOVERED,
	PRESSED,
	FOCUSED,
	// The primary action: mouse click, touch tap, Enter/Space, gamepad A.
	CLICKED,
	// A second pointer click on the same widget within DOUBLE_CLICK_SECONDS.
	// Never the only way to do something: touch and controller users get a
	// single-action equivalent (see the style guide).
	DOUBLE_CLICKED,
	// The secondary action: right-click, touch long-press, the Menu key or
	// Shift+F10, gamepad Start.
	SECONDARY,
}

Interactions :: bit_set[Interaction; u8]

DOUBLE_CLICK_SECONDS :: 0.4

// The shared core of every interactive widget. It turns all four input
// devices into the same small set of results, so a widget built on it is
// usable by mouse, keyboard, controller and touch without extra work.
interact :: proc(ctx: ^Context, id: Id, rect: Rect) -> Interactions {
	return interact_ex(ctx, id, rect, id)
}

// `focus_target` is what gets keyboard/controller focus when the pointer
// presses this widget. Usually the widget itself; a list row passes its
// list instead, because the list -- not each row -- is the focus stop, and
// moves its own cursor between rows. Pass 0 to leave focus alone.
interact_ex :: proc(ctx: ^Context, id: Id, rect: Rect, focus_target: Id) -> Interactions {
	result: Interactions
	input := &ctx.input

	hit := expand_to_min_size(rect, ctx.theme.min_hit_size)
	append(&ctx.hit_targets, Hit_Target{id = id, visible = rect, hit = hit})
	if focus_target == id do register_focusable(ctx, id, rect)

	if ctx.focus == id do result += {.FOCUSED}
	if ctx.active == id do ctx.active_seen = true

	if ctx.hot == id {
		result += {.HOVERED}
		ctx.cursor = .POINTING_HAND
		if .LEFT in input.mouse_pressed {
			ctx.active = id
			ctx.active_seen = true
			if focus_target != 0 do ctx.focus = focus_target
			ctx.press_time = input.time
			ctx.press_position = input.pointer_position
			ctx.long_press_ended = false
		}
		if .RIGHT in input.mouse_pressed {
			if focus_target != 0 do ctx.focus = focus_target
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
				if is_double_click(ctx, id) do result += {.DOUBLE_CLICKED}
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

@(private)
is_double_click :: proc(ctx: ^Context, id: Id) -> bool {
	now := ctx.input.time
	moved := ctx.input.pointer_position - ctx.last_click_position
	near := moved.x * moved.x + moved.y * moved.y <= LONG_PRESS_SLOP * LONG_PRESS_SLOP
	if ctx.last_click_id == id && now - ctx.last_click_time <= DOUBLE_CLICK_SECONDS && near {
		// A third click starts a new pair rather than double-clicking again.
		ctx.last_click_id = 0
		return true
	}
	ctx.last_click_id = id
	ctx.last_click_time = now
	ctx.last_click_position = ctx.input.pointer_position
	return false
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
// A disabled button (enabled = false) is drawn dimmed and is neither
// clickable nor a focus stop, so the D-pad skips straight over it.
button_ex :: proc(ctx: ^Context, rect: Rect, text: string, selected: bool = false, enabled: bool = true) -> Interactions {
	theme := &ctx.theme
	if !enabled {
		draw_rect(ctx, rect, {theme.button.r, theme.button.g, theme.button.b, 110}, theme.radius)
		label(ctx, inset_xy(rect, theme.padding, 0), text, {theme.text_dim.r, theme.text_dim.g, theme.text_dim.b, 140}, .CENTER)
		return {}
	}
	id := get_id(ctx, text)
	result := interact(ctx, id, rect)

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

button :: proc(ctx: ^Context, rect: Rect, text: string, selected: bool = false, enabled: bool = true) -> bool {
	return .CLICKED in button_ex(ctx, rect, text, selected, enabled)
}

// Like label, but text wider than the rect is cut short with an ellipsis
// instead of spilling out. Cuts on character boundaries, so multi-byte
// UTF-8 is never split.
label_clipped :: proc(ctx: ^Context, rect: Rect, text: string, color: Color, align: Align = .LEFT, size: f32 = 0) {
	font_size := size
	if font_size <= 0 do font_size = ctx.theme.font_size

	if measure_text(ctx, text, font_size).x <= rect.w {
		label(ctx, rect, text, color, align, font_size)
		return
	}

	ELLIPSIS :: "…"
	available := rect.w - measure_text(ctx, ELLIPSIS, font_size).x
	if available <= 0 do return

	// Binary search over character boundaries for the longest prefix that
	// fits: O(log n) measurements instead of one per character.
	boundaries := make([dynamic]int, 0, len(text) + 1, ctx.frame_allocator)
	for _, byte_index in text do append(&boundaries, byte_index)
	append(&boundaries, len(text))

	low := 0
	high := len(boundaries) - 1
	for low < high {
		middle := (low + high + 1) / 2
		if measure_text(ctx, text[:boundaries[middle]], font_size).x <= available {
			low = middle
		} else {
			high = middle - 1
		}
	}
	shortened := concatenate_frame(ctx, text[:boundaries[low]], ELLIPSIS)
	label(ctx, rect, shortened, color, align, font_size)
}

@(private)
concatenate_frame :: proc(ctx: ^Context, a: string, b: string) -> string {
	buffer := make([]u8, len(a) + len(b), ctx.frame_allocator)
	copy(buffer, a)
	copy(buffer[len(a):], b)
	return string(buffer)
}
