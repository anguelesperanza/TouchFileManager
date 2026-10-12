package app

import "core:strings"
import ui "../ui"

// Tabs. Each tab owns a split tree of views; switching tabs swaps the whole
// tree. There's always at least one tab.
//
// By device:
//   mouse    -- click a tab, its ✕, or "+"; middle-click closes
//   touch    -- tap a tab, its ✕, or "+" (✕ is always shown, never hover-only)
//   keyboard -- Ctrl+T / Ctrl+W, Ctrl+Tab / Ctrl+Shift+Tab, Ctrl+Shift+PgUp/PgDn
//   gamepad  -- RB/LB switch (with or without View held); View+RT new,
//               View+LT close

TAB_MIN_WIDTH :: 110
TAB_MAX_WIDTH :: 220
TAB_CLOSE_SIZE :: 26

open_tab :: proc(a: ^App, path: string, now: f64) {
	view := create_view(a, path)
	tab := new(Tab)
	tab.root = new(Split_Node)
	tab.root.view = view
	tab.active_view = view
	// A new tab goes right after the current one, like a browser.
	position := len(a.tabs)
	if len(a.tabs) > 0 do position = a.active_tab + 1
	inject_at(&a.tabs, position, tab)
	a.active_tab = position
	a.focus_view_next = view
	navigate_to(a, view, path, now, false)
}

close_tab :: proc(a: ^App, index: int) {
	if len(a.tabs) <= 1 {
		set_message(a, "This is the last tab")
		return
	}
	tab := a.tabs[index]
	if a.focus_view_next != nil && find_view_in_node(tab.root, a.focus_view_next.id) != nil {
		a.focus_view_next = nil
	}
	split_node_destroy(tab.root)
	free(tab)
	ordered_remove(&a.tabs, index)
	if a.active_tab > index || a.active_tab >= len(a.tabs) do a.active_tab -= 1
	a.active_tab = clamp(a.active_tab, 0, len(a.tabs) - 1)
	a.focus_view_next = active_view(a)
}

// Wraps around at either end. With a single tab it does nothing at all --
// not even pull focus back to the file list.
switch_tab :: proc(a: ^App, index: int) {
	count := len(a.tabs)
	if count <= 1 do return
	a.active_tab = ((index % count) + count) % count
	a.focus_view_next = active_view(a)
}

move_tab :: proc(a: ^App, step: int) {
	target := a.active_tab + step
	if target < 0 || target >= len(a.tabs) do return
	a.tabs[a.active_tab], a.tabs[target] = a.tabs[target], a.tabs[a.active_tab]
	a.active_tab = target
}

build_tab_bar :: proc(a: ^App, ctx: ^ui.Context, area: ui.Rect) {
	theme := &ctx.theme
	ui.draw_rect(ctx, area, theme.background)
	row := ui.inset_xy(area, 8, 4)

	ui.begin_region(ctx, "Tabs", area)
	defer ui.end_region(ctx)

	new_tab := ui.cut_right(&row, 40)
	if ui.button(ctx, new_tab, "+") do open_tab(a, active_view(a).path, ctx.input.time)
	ui.cut_right(&row, theme.spacing)

	count := len(a.tabs)
	width := clamp((row.w - f32(count - 1) * 4) / f32(count), TAB_MIN_WIDTH, TAB_MAX_WIDTH)
	close_index := -1
	activate_index := -1

	ui.push_clip(ctx, row)
	for tab, index in a.tabs {
		rect := ui.cut_left(&row, width)
		ui.cut_left(&row, 4)
		if rect.w <= 0 do break

		ui.push_id_int(ctx, int(uintptr(rawptr(tab))))
		active := index == a.active_tab
		result := ui.interact(ctx, ui.get_id(ctx, "tab"), rect)

		fill := theme.panel
		if active do fill = theme.button_active
		if .HOVERED in result && !active do fill = theme.button_hot
		ui.draw_rect(ctx, rect, fill, theme.radius)
		if active do ui.draw_rect(ctx, ui.Rect{rect.x + 6, rect.y + rect.h - 3, rect.w - 12, 3}, theme.accent, 1.5)

		title := display_name(a, tab.active_view.path)
		views := view_count(tab.root)
		if views > 1 do title = strings.concatenate({title, " ◫"}, context.temp_allocator)
		text_rect := ui.inset_xy(rect, 12, 0)
		text_rect.w -= TAB_CLOSE_SIZE + 4
		color := theme.text_dim
		if active do color = theme.text
		ui.label_clipped(ctx, text_rect, title, color, .LEFT, 14)

		if .FOCUSED in result && ui.show_focus_ring(ctx) {
			ui.draw_rect_outline(ctx, ui.inset(rect, -2), theme.focus_ring, theme.radius + 2, theme.focus_ring_width)
		}

		// The close button is drawn after the tab, so it wins the overlap
		// when the pointer is over it.
		close_rect := ui.Rect{rect.x + rect.w - TAB_CLOSE_SIZE - 6, rect.y + (rect.h - TAB_CLOSE_SIZE) / 2, TAB_CLOSE_SIZE, TAB_CLOSE_SIZE}
		close_result := ui.interact(ctx, ui.get_id(ctx, "close"), close_rect)
		if .HOVERED in close_result do ui.draw_rect(ctx, close_rect, theme.button_hot, TAB_CLOSE_SIZE / 2)
		ui.label(ctx, close_rect, "✕", theme.text_dim, .CENTER, 13)
		if .FOCUSED in close_result && ui.show_focus_ring(ctx) {
			ui.draw_rect_outline(ctx, close_rect, theme.focus_ring, TAB_CLOSE_SIZE / 2, theme.focus_ring_width)
		}
		ui.pop_id(ctx)

		if .CLICKED in close_result do close_index = index
		if .CLICKED in result do activate_index = index
		middle_clicked := .HOVERED in result && .MIDDLE in ctx.input.mouse_pressed
		if middle_clicked do close_index = index
	}
	ui.pop_clip(ctx)

	// Applied after the loop: closing a tab mid-loop would shift the ones
	// still to be drawn.
	if close_index >= 0 {
		close_tab(a, close_index)
	} else if activate_index >= 0 && activate_index != a.active_tab {
		switch_tab(a, activate_index)
	}
}
