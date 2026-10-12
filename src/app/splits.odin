package app

import "core:fmt"
import ui "../ui"

// Split views. A tab's views form a binary tree: leaves are views, inner
// nodes split their rect left|right or top/bottom at `ratio`. Any view can
// be split again, so three or four views in any arrangement is just a
// deeper tree. Each view navigates on its own.
//
// The active view -- the one the toolbar, path bar and status bar act on --
// is whichever holds focus, so clicking into a view, Tab, View+face-button
// jumps and F6 all change it the same way.
//
// Resizing, by device:
//   mouse / touch -- drag the splitter
//   keyboard      -- focus the splitter (arrows reach it), then arrows
//   gamepad       -- the same, with the D-pad

// Views narrower or shorter than this aren't useful; a split that would make
// one is refused, and dragging a splitter stops there.
MIN_VIEW_WIDTH :: 300
MIN_VIEW_HEIGHT :: 200
SPLITTER_THICKNESS :: 6
SPLITTER_KEY_STEP :: 0.05

view_count :: proc(node: ^Split_Node) -> int {
	if node == nil do return 0
	if node.view != nil do return 1
	return view_count(node.first) + view_count(node.second)
}

find_view_in_node :: proc(node: ^Split_Node, id: u64) -> ^View {
	if node == nil do return nil
	if node.view != nil && node.view.id == id do return node.view
	found := find_view_in_node(node.first, id)
	if found != nil do return found
	return find_view_in_node(node.second, id)
}

// The views in reading order: left to right, top to bottom.
@(private)
collect_views :: proc(node: ^Split_Node, out: ^[dynamic]^View) {
	if node == nil do return
	if node.view != nil {
		append(out, node.view)
		return
	}
	collect_views(node.first, out)
	collect_views(node.second, out)
}

@(private)
find_leaf :: proc(node: ^Split_Node, view: ^View) -> ^Split_Node {
	if node == nil do return nil
	if node.view == view do return node
	found := find_leaf(node.first, view)
	if found != nil do return found
	return find_leaf(node.second, view)
}

@(private)
find_parent :: proc(node: ^Split_Node, child: ^Split_Node) -> ^Split_Node {
	if node == nil || node.view != nil do return nil
	if node.first == child || node.second == child do return node
	found := find_parent(node.first, child)
	if found != nil do return found
	return find_parent(node.second, child)
}

split_active_view :: proc(a: ^App, direction: Split_Direction, now: f64) {
	tab := active_tab(a)
	view := tab.active_view
	leaf := find_leaf(tab.root, view)
	if leaf == nil do return

	// The view's last drawn size decides whether there's room. Before its
	// first frame (rect still zero) there's no way to know, so allow it.
	if view.rect.w > 0 {
		too_narrow := direction == .HORIZONTAL && (view.rect.w - SPLITTER_THICKNESS) / 2 < MIN_VIEW_WIDTH
		too_short := direction == .VERTICAL && (view.rect.h - SPLITTER_THICKNESS) / 2 < MIN_VIEW_HEIGHT
		if too_narrow || too_short {
			set_message(a, "Not enough room to split this view")
			return
		}
	}

	// The new view starts where the old one is, showing the same things.
	new_view := create_view(a, view.path)
	new_view.sort = view.sort
	new_view.show_hidden = view.show_hidden

	first := new(Split_Node)
	first.view = view
	second := new(Split_Node)
	second.view = new_view
	leaf.view = nil
	leaf.direction = direction
	leaf.ratio = 0.5
	leaf.first = first
	leaf.second = second

	tab.active_view = new_view
	a.focus_view_next = new_view
	navigate_to(a, new_view, view.path, now, false)
}

close_active_view :: proc(a: ^App) {
	tab := active_tab(a)
	view := tab.active_view
	leaf := find_leaf(tab.root, view)
	parent := find_parent(tab.root, leaf)
	if parent == nil {
		set_message(a, "This is the only view in the tab")
		return
	}

	// The sibling takes over the parent's place in the tree.
	sibling := parent.first
	if sibling == leaf do sibling = parent.second
	parent^ = sibling^
	free(sibling)
	if a.focus_view_next == view do a.focus_view_next = nil
	view_destroy(view)
	free(leaf)

	views := make([dynamic]^View, context.temp_allocator)
	collect_views(parent, &views)
	tab.active_view = views[0]
	a.focus_view_next = views[0]
}

focus_next_view :: proc(a: ^App) {
	tab := active_tab(a)
	views := make([dynamic]^View, context.temp_allocator)
	collect_views(tab.root, &views)
	for view, i in views {
		if view == tab.active_view {
			next := views[(i + 1) % len(views)]
			tab.active_view = next
			a.focus_view_next = next
			return
		}
	}
}

// Whichever view holds focus at the end of the frame is the active one.
// Focus outside any view (the toolbar, the sidebar) leaves it unchanged, so
// clicking Up acts on the view you were just in.
track_active_view :: proc(a: ^App, ctx: ^ui.Context) {
	// A focus handoff is on its way (a new split, a tab switch); the old
	// focus mustn't drag the active view back in the meantime.
	if a.focus_view_next != nil do return
	region := ui.focused_region(ctx)
	if region == 0 do return
	tab := active_tab(a)
	views := make([dynamic]^View, context.temp_allocator)
	collect_views(tab.root, &views)
	for view in views {
		if view.region_id == region do tab.active_view = view
	}
}

build_split_node :: proc(a: ^App, ctx: ^ui.Context, tab: ^Tab, node: ^Split_Node, rect: ui.Rect) {
	if node.view != nil {
		build_view(a, ctx, tab, node.view, rect)
		return
	}

	area := rect
	first: ui.Rect
	splitter: ui.Rect
	switch node.direction {
	case .HORIZONTAL:
		first = ui.cut_left(&area, (rect.w - SPLITTER_THICKNESS) * node.ratio)
		splitter = ui.cut_left(&area, SPLITTER_THICKNESS)
	case .VERTICAL:
		first = ui.cut_top(&area, (rect.h - SPLITTER_THICKNESS) * node.ratio)
		splitter = ui.cut_top(&area, SPLITTER_THICKNESS)
	}
	build_split_node(a, ctx, tab, node.first, first)
	build_split_node(a, ctx, tab, node.second, area)
	// Built after both views, so within its own few pixels it wins the
	// pointer over the rows its padded touch area overlaps.
	build_splitter(ctx, node, rect, splitter)
}

@(private)
build_view :: proc(a: ^App, ctx: ^ui.Context, tab: ^Tab, view: ^View, rect: ui.Rect) {
	view.rect = rect
	multiple := view_count(tab.root) > 1
	title := "Files"
	if multiple do title = fmt.tprintf("Files · %s", display_name(a, view.path))
	build_details_view(a, ctx, view, rect, title)

	// With several views, a bar marks the active one: it's what the toolbar
	// and status bar are talking about.
	if multiple && view == tab.active_view {
		ui.draw_rect(ctx, ui.Rect{rect.x, rect.y, rect.w, 3}, ctx.theme.accent)
	}
}

@(private)
build_splitter :: proc(ctx: ^ui.Context, node: ^Split_Node, parent: ui.Rect, rect: ui.Rect) {
	theme := &ctx.theme
	id := ui.get_id_int(ctx, int(uintptr(rawptr(node))))
	result := ui.interact(ctx, id, rect)
	horizontal := node.direction == .HORIZONTAL

	if .HOVERED in result || .PRESSED in result {
		if horizontal {
			ctx.cursor = .RESIZE_HORIZONTAL
		} else {
			ctx.cursor = .RESIZE_VERTICAL
		}
	}

	total := parent.h - SPLITTER_THICKNESS
	minimum: f32 = MIN_VIEW_HEIGHT
	if horizontal {
		total = parent.w - SPLITTER_THICKNESS
		minimum = MIN_VIEW_WIDTH
	}
	min_ratio := clamp(minimum / max(total, 1), 0.05, 0.5)

	if .PRESSED in result {
		pointer := ctx.input.pointer_position
		if horizontal {
			node.ratio = (pointer.x - parent.x) / max(total, 1)
		} else {
			node.ratio = (pointer.y - parent.y) / max(total, 1)
		}
	}
	if .FOCUSED in result {
		shrink: ui.Nav_Action = .UP
		grow: ui.Nav_Action = .DOWN
		if horizontal {
			shrink = .LEFT
			grow = .RIGHT
		}
		if ui.nav_pressed(ctx, shrink) {
			ui.consume_nav(ctx, shrink)
			node.ratio -= SPLITTER_KEY_STEP
		}
		if ui.nav_pressed(ctx, grow) {
			ui.consume_nav(ctx, grow)
			node.ratio += SPLITTER_KEY_STEP
		}
	}
	node.ratio = clamp(node.ratio, min_ratio, 1 - min_ratio)

	color := theme.panel_border
	if .HOVERED in result || .PRESSED in result || .FOCUSED in result do color = theme.accent
	ui.draw_rect(ctx, rect, color)
	if .FOCUSED in result && ui.show_focus_ring(ctx) {
		ui.draw_rect_outline(ctx, ui.inset(rect, -3), theme.focus_ring, 2, theme.focus_ring_width)
	}
}
