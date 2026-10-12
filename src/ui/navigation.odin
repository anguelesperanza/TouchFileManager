package ui

import "core:math"

// Keyboard and controller navigation.
//
// Every focusable widget registers its rect each frame. At end_frame the
// arrow keys / D-pad pick the nearest widget in that direction (spatial
// navigation), and Tab / shoulder buttons jump between regions -- sidebar,
// toolbar, file list. Each region remembers what was last focused in it, so
// jumping away and back lands where you left off.

// `label` identifies the region and scopes the ids of the widgets inside
// it; `title` is what the jump overlay calls it (the label, if empty). They
// are separate so a title can change -- a view titled by its folder --
// without the region's identity, and with it everything focused inside,
// changing. `rect` is the area it covers, used to work out which region lies
// in which direction.
begin_region :: proc(ctx: ^Context, label: string, rect: Rect, title := "") {
	id := get_id(ctx, label)
	append(&ctx.region_stack, id)
	append(&ctx.id_stack, id)
	for region in ctx.regions {
		if region.id == id do return
	}
	shown := title
	if len(shown) == 0 do shown = label
	append(&ctx.regions, Region{id = id, rect = rect, title = clone_to_frame(ctx, shown)})
}

// The region being built right now, or 0.
current_region :: proc(ctx: ^Context) -> Id {
	if len(ctx.region_stack) == 0 do return 0
	return ctx.region_stack[len(ctx.region_stack) - 1]
}

// The region holding the focused widget this frame, or 0. Only meaningful
// once the frame's widgets have been built.
focused_region :: proc(ctx: ^Context) -> Id {
	index := find_focusable(ctx, ctx.focus)
	if index < 0 do return 0
	return ctx.focusables[index].region
}

// Gives focus to a region's remembered (or first) widget, as a jump would.
// Uses the widgets registered so far this frame.
focus_region_by_id :: proc(ctx: ^Context, region: Id) -> bool {
	return focus_region(ctx, region)
}

end_region :: proc(ctx: ^Context) {
	pop(&ctx.region_stack)
	pop(&ctx.id_stack)
}

register_focusable :: proc(ctx: ^Context, id: Id, rect: Rect) {
	region: Id
	if len(ctx.region_stack) > 0 do region = ctx.region_stack[len(ctx.region_stack) - 1]
	append(&ctx.focusables, Focusable{id = id, rect = rect, region = region})
	if ctx.focus == id do ctx.focus_seen = true
}

set_focus :: proc(ctx: ^Context, id: Id) {
	ctx.focus = id
}

has_focus :: proc(ctx: ^Context, id: Id) -> bool {
	return ctx.focus == id
}

// A focused widget that handles a navigation action itself -- a list moving
// its cursor down -- consumes it, so end_frame doesn't also move focus away.
consume_nav :: proc(ctx: ^Context, action: Nav_Action) {
	ctx.nav_pressed -= {action}
}

@(private)
update_focus_navigation :: proc(ctx: ^Context) {
	if len(ctx.focusables) == 0 do return

	if .NEXT_REGION in ctx.nav_pressed {
		move_focus_to_region(ctx, 1)
	} else if .PREVIOUS_REGION in ctx.nav_pressed {
		move_focus_to_region(ctx, -1)
	} else if .UP in ctx.nav_pressed {
		move_focus_spatial(ctx, {0, -1})
	} else if .DOWN in ctx.nav_pressed {
		move_focus_spatial(ctx, {0, 1})
	} else if .LEFT in ctx.nav_pressed {
		move_focus_spatial(ctx, {-1, 0})
	} else if .RIGHT in ctx.nav_pressed {
		move_focus_spatial(ctx, {1, 0})
	}

	index := find_focusable(ctx, ctx.focus)
	if index >= 0 do ctx.region_memory[ctx.focusables[index].region] = ctx.focus
}

@(private)
find_focusable :: proc(ctx: ^Context, id: Id) -> int {
	if id == 0 do return -1
	for focusable, i in ctx.focusables {
		if focusable.id == id do return i
	}
	return -1
}

// Focus the remembered widget in a region, or its first one.
@(private)
focus_region :: proc(ctx: ^Context, region: Id) -> bool {
	remembered, ok := ctx.region_memory[region]
	if ok && find_focusable(ctx, remembered) >= 0 {
		ctx.focus = remembered
		return true
	}
	for focusable in ctx.focusables {
		if focusable.region == region {
			ctx.focus = focusable.id
			return true
		}
	}
	return false
}

@(private)
move_focus_to_region :: proc(ctx: ^Context, step: int) {
	count := len(ctx.regions)
	if count == 0 do return

	current := -1
	index := find_focusable(ctx, ctx.focus)
	if index >= 0 {
		for region, i in ctx.regions {
			if region.id == ctx.focusables[index].region do current = i
		}
	}

	// Walk round the regions, skipping any with nothing focusable in them.
	start := current
	if start < 0 && step < 0 do start = 0
	for offset in 1 ..= count {
		candidate := ((start + step * offset) % count + count) % count
		if focus_region(ctx, ctx.regions[candidate].id) do return
	}
}

@(private)
move_focus_spatial :: proc(ctx: ^Context, direction: Vec2) {
	index := find_focusable(ctx, ctx.focus)
	if index < 0 {
		// Nothing focused yet: the first press just shows where focus is.
		if len(ctx.regions) > 0 && focus_region(ctx, ctx.regions[0].id) do return
		ctx.focus = ctx.focusables[0].id
		return
	}

	current := ctx.focusables[index]

	// Only widgets "in the beam" count -- overlapping the current one
	// across the direction of travel, the way the eye scans -- preferring
	// the same region. If nothing is, focus stays put. Without the beam,
	// Right from a file list climbed diagonally up to a column header
	// instead of reaching the splitter or the view beside it, or doing
	// nothing when there's nothing to the right.
	best := best_in_direction(ctx, current, direction, true, true)
	if best < 0 do best = best_in_direction(ctx, current, direction, false, true)
	if best >= 0 do ctx.focus = ctx.focusables[best].id
}

@(private)
best_in_direction :: proc(ctx: ^Context, current: Focusable, direction: Vec2, same_region: bool, in_beam: bool) -> int {
	from := rect_center(current.rect)
	best := -1
	best_score := max(f32)
	for candidate, i in ctx.focusables {
		if candidate.id == current.id do continue
		if same_region && candidate.region != current.region do continue
		if in_beam && !overlaps_across(current.rect, candidate.rect, direction) do continue

		to := rect_center(candidate.rect)
		delta := to - from
		along := delta.x * direction.x + delta.y * direction.y
		if along <= 0.5 do continue
		across := math.abs(delta.x * direction.y) + math.abs(delta.y * direction.x)

		// Sideways distance is weighted up so "down" picks the item below
		// rather than a nearer one diagonally off to the side.
		score := along + across * 2
		if score < best_score {
			best = i
			best_score = score
		}
	}
	return best
}

// Whether two rects share any span across the direction of travel: for
// left/right, any vertical overlap; for up/down, any horizontal overlap.
@(private)
overlaps_across :: proc(a: Rect, b: Rect, direction: Vec2) -> bool {
	if direction.x != 0 do return a.y < b.y + b.h && b.y < a.y + a.h
	return a.x < b.x + b.w && b.x < a.x + a.w
}
