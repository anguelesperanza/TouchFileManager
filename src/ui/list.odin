package ui

import "core:math"

// A scrolling list that only builds the rows on screen, so a folder of
// 100,000 files costs the same per frame as one of 50.
//
// The list as a whole is one focus stop. Its cursor (which row is "current")
// is the caller's state, since what moving it means -- extending a selection,
// say -- is app logic; the list just reports the rows' interactions and keeps
// the cursor row on screen when asked.
//
// Scrolling, by device:
//   mouse    -- wheel
//   touch    -- drag, with a fling that coasts to a stop
//   keyboard -- follows the cursor (PgUp/PgDn/Home/End move it)
//   gamepad  -- right stick, or follows the cursor like the keyboard

SCROLL_WHEEL_ROWS :: 3
SCROLL_STICK_SPEED :: 1600
STICK_DEADZONE :: 0.2
// Per-second fraction of fling speed that remains: 0.02 means a fling loses
// 98% of its speed each second, coasting for roughly half a second.
FLING_RETENTION :: 0.02
FLING_MIN_SPEED :: 20
SCROLLBAR_WIDTH :: 4

Scroll_State :: struct {
	offset:      f32,
	velocity:    f32,
	// The pointer went down inside the list and hasn't been released yet.
	// It becomes a drag once it moves further than LONG_PRESS_SLOP.
	tracking:    bool,
	dragging:    bool,
	press_y:     f32,
	last_drag_y: f32,
}

Virtual_List :: struct {
	id:          Id,
	rect:        Rect,
	item_height: f32,
	item_count:  int,
	offset:      f32,
	// Rows first ..< last are on screen.
	first:       int,
	last:        int,
	focused:     bool,
}

// `scroll_to` is a row to bring on screen this frame, or -1. Pass the cursor
// row only on frames where the cursor moved; passing it every frame would pin
// the view and fight the user's own scrolling.
begin_virtual_list :: proc(ctx: ^Context, label: string, rect: Rect, item_count: int, item_height: f32, scroll_to: int = -1) -> Virtual_List {
	id := get_id(ctx, label)
	register_focusable(ctx, id, rect)
	if ctx.active == id do ctx.active_seen = true

	state, _ := get_scroll_state(ctx, id)
	input := &ctx.input
	content_height := f32(item_count) * item_height
	max_offset := max(content_height - rect.h, 0)
	inside := rect_contains(rect, input.pointer_position)

	if inside && input.wheel.y != 0 {
		state.offset -= input.wheel.y * item_height * SCROLL_WHEEL_ROWS
		state.velocity = 0
	}

	update_drag_scroll(ctx, id, state, inside)

	if !state.dragging && state.velocity != 0 {
		state.offset += state.velocity * ctx.delta_time
		state.velocity *= math.pow(FLING_RETENTION, ctx.delta_time)
		if abs(state.velocity) < FLING_MIN_SPEED do state.velocity = 0
	}

	focused := ctx.focus == id
	stick := input.right_stick.y
	if (focused || inside) && abs(stick) > STICK_DEADZONE {
		state.offset += stick * SCROLL_STICK_SPEED * ctx.delta_time
		state.velocity = 0
	}

	if scroll_to >= 0 && scroll_to < item_count {
		top := f32(scroll_to) * item_height
		if top < state.offset do state.offset = top
		if top + item_height > state.offset + rect.h do state.offset = top + item_height - rect.h
	}

	state.offset = clamp(state.offset, 0, max_offset)
	if state.offset == 0 || state.offset == max_offset do state.velocity = 0

	list := Virtual_List{
		id = id,
		rect = rect,
		item_height = item_height,
		item_count = item_count,
		offset = state.offset,
		focused = focused,
	}
	if item_height > 0 {
		list.first = clamp(int(state.offset / item_height), 0, item_count)
		list.last = clamp(int(math.ceil((state.offset + rect.h) / item_height)), 0, item_count)
	}

	push_clip(ctx, rect)
	push_id_int(ctx, int(id))
	return list
}

end_virtual_list :: proc(ctx: ^Context, list: Virtual_List) {
	pop_id(ctx)

	// A thin indicator, not a draggable bar: dragging the list itself
	// already scrolls, and a 4px target would fail the touch-size rule.
	content_height := f32(list.item_count) * list.item_height
	if content_height > list.rect.h {
		visible := list.rect.h / content_height
		bar_height := max(list.rect.h * visible, 24)
		travel := list.rect.h - bar_height
		progress := list.offset / (content_height - list.rect.h)
		bar := Rect{
			list.rect.x + list.rect.w - SCROLLBAR_WIDTH - 2,
			list.rect.y + travel * progress,
			SCROLLBAR_WIDTH,
			bar_height,
		}
		draw_rect(ctx, bar, ctx.theme.text_dim, SCROLLBAR_WIDTH / 2)
	}
	pop_clip(ctx)

	if list.focused && show_focus_ring(ctx) {
		ring := inset(list.rect, ctx.theme.focus_ring_width / 2)
		draw_rect_outline(ctx, ring, ctx.theme.focus_ring, 0, ctx.theme.focus_ring_width)
	}
}

virtual_list_row_rect :: proc(list: Virtual_List, index: int) -> Rect {
	return Rect{list.rect.x, list.rect.y + f32(index) * list.item_height - list.offset, list.rect.w, list.item_height}
}

// A row's pointer interactions. Rows aren't focus stops themselves: pressing
// one focuses the list, and the caller moves its cursor to the row.
virtual_list_row :: proc(ctx: ^Context, list: Virtual_List, index: int) -> Interactions {
	return interact_ex(ctx, get_id_int(ctx, index), virtual_list_row_rect(list, index), list.id)
}

// Rows per page, for PgUp/PgDn.
virtual_list_page_rows :: proc(list: Virtual_List) -> int {
	if list.item_height <= 0 do return 1
	return max(int(list.rect.h / list.item_height) - 1, 1)
}

@(private)
get_scroll_state :: proc(ctx: ^Context, id: Id) -> (^Scroll_State, bool) {
	state, found := &ctx.scroll_states[id]
	if found do return state, true
	ctx.scroll_states[id] = Scroll_State{}
	return &ctx.scroll_states[id], false
}

@(private)
update_drag_scroll :: proc(ctx: ^Context, id: Id, state: ^Scroll_State, inside: bool) {
	input := &ctx.input
	if .LEFT in input.mouse_pressed && inside {
		state.tracking = true
		state.dragging = false
		state.press_y = input.pointer_position.y
		state.last_drag_y = input.pointer_position.y
		state.velocity = 0
	}

	if state.tracking && .LEFT in input.mouse_down {
		if !state.dragging && abs(input.pointer_position.y - state.press_y) > LONG_PRESS_SLOP {
			// Take the press away from the row under the finger, so lifting
			// it after a scroll doesn't also open that row.
			state.dragging = true
			ctx.active = id
			ctx.active_seen = true
		}
		if state.dragging {
			delta := input.pointer_position.y - state.last_drag_y
			state.offset -= delta
			if ctx.delta_time > 0 {
				// Smoothed, so one jittery frame doesn't decide the fling.
				instant := -delta / ctx.delta_time
				state.velocity = state.velocity * 0.5 + instant * 0.5
			}
			state.last_drag_y = input.pointer_position.y
		}
	}

	if state.tracking && (.LEFT in input.mouse_released || .LEFT not_in input.mouse_down) {
		state.tracking = false
		if state.dragging {
			state.dragging = false
			if ctx.active == id do ctx.active = 0
		}
	}
}
