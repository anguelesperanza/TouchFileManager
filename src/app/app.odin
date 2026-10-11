package app

import "core:fmt"
import "core:time/datetime"
import "core:time/timezone"
import "../fs"
import ui "../ui"

// App-level commands. Every one is reachable from all four devices: a key
// chord, a gamepad button or an on-screen control (toolbar, header, list).

Action :: enum u8 {
	ZOOM_IN,
	ZOOM_OUT,
	ZOOM_RESET,
	GO_UP,
	GO_HOME,
	REFRESH,
	TOGGLE_HIDDEN,
	SELECT_ALL,
	// Applies only while the file list has focus.
	TOGGLE_SELECTED,
	EXTEND_UP,
	EXTEND_DOWN,
	PAGE_UP,
	PAGE_DOWN,
	FIRST,
	LAST,
}

App :: struct {
	bindings: [Action]ui.Trigger_List,
	// Actions triggered this frame; filled once at the top of build.
	pressed:  bit_set[Action; u32],
	// User zoom on top of the display's DPI scale.
	zoom:     f32,

	loader:       fs.Loader,
	results:      [dynamic]fs.List_Result,
	places:       [dynamic]fs.Place,
	tabs:         [dynamic]^Tab,
	active_tab:   int,
	next_view_id: u64,
	time_zone:    ^datetime.TZ_Region,

	// Status text is kept across frames, so it can't live in the temp
	// allocator (freed every frame). It's formatted into this buffer.
	message_buffer: [256]u8,
	message:        string,
	message_time:   f64,
	now:            f64,
}

ZOOM_STEP :: 0.1
ZOOM_MIN :: 0.5
ZOOM_MAX :: 3.0
// How long a status message replaces the item counts.
MESSAGE_SECONDS :: 4

init :: proc(a: ^App, start_path: string) {
	a.zoom = 1
	set_default_bindings(a)
	fs.loader_init(&a.loader)
	a.places = fs.load_places()

	region, ok := timezone.region_load("local")
	if ok do a.time_zone = region

	view := create_view(a, start_path)
	tab := new(Tab)
	tab.root = new(Split_Node)
	tab.root.view = view
	tab.active_view = view
	append(&a.tabs, tab)
	navigate_to(a, view, start_path, 0)
}

destroy :: proc(a: ^App) {
	fs.loader_destroy(&a.loader)
	for result in a.results do fs.listing_free(result.listing)
	delete(a.results)
	for tab in a.tabs {
		split_node_destroy(tab.root)
		free(tab)
	}
	delete(a.tabs)
	for place in a.places {
		delete(place.name)
		delete(place.path)
	}
	delete(a.places)
	if a.time_zone != nil do timezone.region_destroy(a.time_zone)
}

// The built-in defaults. The user's bindings.ini is applied on top of these
// (see bindings_config.odin), and the first run writes them out as that file.
@(private)
set_default_bindings :: proc(a: ^App) {
	key :: ui.key
	pad :: ui.pad
	a.bindings[.ZOOM_IN] = ui.triggers(key(.EQUAL, {.CONTROL}), key(.EQUAL, {.CONTROL, .SHIFT}))
	a.bindings[.ZOOM_OUT] = ui.triggers(key(.MINUS, {.CONTROL}))
	a.bindings[.ZOOM_RESET] = ui.triggers(key(.NUM_0, {.CONTROL}))
	// B goes up a folder, the usual "back" on a controller.
	a.bindings[.GO_UP] = ui.triggers(key(.BACKSPACE), key(.UP, {.ALT}), pad(.FACE_RIGHT))
	a.bindings[.GO_HOME] = ui.triggers(key(.HOME, {.ALT}))
	a.bindings[.REFRESH] = ui.triggers(key(.R, {.CONTROL}))
	a.bindings[.TOGGLE_HIDDEN] = ui.triggers(key(.H, {.CONTROL}))
	a.bindings[.SELECT_ALL] = ui.triggers(key(.A, {.CONTROL}))
	a.bindings[.TOGGLE_SELECTED] = ui.triggers(key(.SPACE, {.CONTROL}), key(.INSERT), pad(.FACE_LEFT))
	a.bindings[.EXTEND_UP] = ui.triggers(key(.UP, {.SHIFT}))
	a.bindings[.EXTEND_DOWN] = ui.triggers(key(.DOWN, {.SHIFT}))
	a.bindings[.PAGE_UP] = ui.triggers(key(.PAGE_UP), pad(.LEFT_TRIGGER))
	a.bindings[.PAGE_DOWN] = ui.triggers(key(.PAGE_DOWN), pad(.RIGHT_TRIGGER))
	a.bindings[.FIRST] = ui.triggers(key(.HOME))
	a.bindings[.LAST] = ui.triggers(key(.END))
}

action_pressed :: proc(a: ^App, ctx: ^ui.Context, action: Action) -> bool {
	return action in a.pressed
}

@(private)
create_view :: proc(a: ^App, path: string) -> ^View {
	a.next_view_id += 1
	return view_create(a.next_view_id, path)
}

active_view :: proc(a: ^App) -> ^View {
	return a.tabs[a.active_tab].active_view
}

set_message :: proc(a: ^App, format: string, args: ..any) {
	a.message = fmt.bprintf(a.message_buffer[:], format, ..args)
	a.message_time = a.now
}

// Hands finished listings to the views that asked for them.
@(private)
receive_listings :: proc(a: ^App) {
	clear(&a.results)
	fs.take_results(&a.loader, &a.results)
	for result in a.results {
		view := find_view(a, result.owner)
		applied := false
		if view != nil do applied = apply_listing(view, result.listing, result.generation)
		if !applied do fs.listing_free(result.listing)
	}
	clear(&a.results)
}

@(private)
find_view :: proc(a: ^App, id: u64) -> ^View {
	for tab in a.tabs {
		found := find_view_in_node(tab.root, id)
		if found != nil do return found
	}
	return nil
}

@(private)
find_view_in_node :: proc(node: ^Split_Node, id: u64) -> ^View {
	if node == nil do return nil
	if node.view != nil && node.view.id == id do return node.view
	found := find_view_in_node(node.first, id)
	if found != nil do return found
	return find_view_in_node(node.second, id)
}

@(private)
run_global_actions :: proc(a: ^App, ctx: ^ui.Context) {
	view := active_view(a)
	now := ctx.input.time

	if .ZOOM_IN in a.pressed do a.zoom = min(a.zoom + ZOOM_STEP, ZOOM_MAX)
	if .ZOOM_OUT in a.pressed do a.zoom = max(a.zoom - ZOOM_STEP, ZOOM_MIN)
	if .ZOOM_RESET in a.pressed do a.zoom = 1
	if .REFRESH in a.pressed do refresh(a, view, now)
	if .GO_HOME in a.pressed do navigate_to(a, view, a.places[0].path, now)
	if .TOGGLE_HIDDEN in a.pressed do toggle_hidden(view)
	if .SELECT_ALL in a.pressed do select_all(view)

	// Escape (or B) first clears a selection. B is also GO_UP, so with
	// nothing selected the same press goes up a folder.
	cancel_used := false
	if ui.nav_pressed(ctx, .CANCEL) && view.selected_count > 0 {
		clear_selection(view)
		ui.consume_nav(ctx, .CANCEL)
		cancel_used = true
	}
	if .GO_UP in a.pressed && !cancel_used do go_up(a, view, now)
}

@(private)
toggle_hidden :: proc(view: ^View) {
	view.show_hidden = !view.show_hidden
	resort(view)
}

build :: proc(a: ^App, ctx: ^ui.Context) {
	a.now = ctx.input.time
	a.pressed = {}
	for action in Action {
		if ui.any_trigger_pressed(ctx, a.bindings[action]) do a.pressed += {action}
	}

	receive_listings(a)

	// With nothing focused (at startup, or when the focused widget went
	// away), the file list takes focus: arrows, End and typing should act
	// on files, not on the toolbar. Set before the list is built, using the
	// id it recorded last frame -- focus on a widget that has already
	// registered this frame would be dropped by end_frame as stale.
	view := active_view(a)
	if ctx.focus == 0 && view.list_id != 0 do ui.set_focus(ctx, view.list_id)

	run_global_actions(a, ctx)

	theme := &ctx.theme
	screen := ui.screen_rect(ctx)
	ui.draw_rect(ctx, screen, theme.background)

	toolbar := ui.cut_top(&screen, 60)
	status_bar := ui.cut_bottom(&screen, 32)
	sidebar := ui.cut_left(&screen, 200)

	build_toolbar(a, ctx, toolbar)
	build_sidebar(a, ctx, sidebar)
	build_split_node(a, ctx, a.tabs[a.active_tab].root, screen)
	build_status_bar(a, ctx, status_bar)

}

@(private)
build_split_node :: proc(a: ^App, ctx: ^ui.Context, node: ^Split_Node, rect: ui.Rect) {
	if node.view != nil {
		build_details_view(a, ctx, node.view, rect)
		return
	}
	area := rect
	first: ui.Rect
	switch node.direction {
	case .HORIZONTAL:
		first = ui.cut_left(&area, rect.w * node.ratio)
	case .VERTICAL:
		first = ui.cut_top(&area, rect.h * node.ratio)
	}
	build_split_node(a, ctx, node.first, first)
	build_split_node(a, ctx, node.second, area)
}

@(private)
build_toolbar :: proc(a: ^App, ctx: ^ui.Context, area: ui.Rect) {
	ui.panel(ctx, area)
	row := ui.inset(area, 8)
	view := active_view(a)
	now := ctx.input.time
	spacing := ctx.theme.spacing

	ui.begin_region(ctx, "Toolbar", area)
	defer ui.end_region(ctx)

	if ui.button(ctx, ui.cut_left(&row, 64), "Up") do go_up(a, view, now)
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 76), "Home") do navigate_to(a, view, a.places[0].path, now)
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 88), "Refresh") do refresh(a, view, now)
	ui.cut_left(&row, spacing * 2)

	// On-screen equivalents of Ctrl+=/Ctrl+-, Ctrl+H and the selection
	// keys: a controller or touch user has no Ctrl key.
	if ui.button(ctx, ui.cut_right(&row, 52), "A+") do run_zoom(a, .ZOOM_IN)
	ui.cut_right(&row, spacing)
	if ui.button(ctx, ui.cut_right(&row, 52), "A-") do run_zoom(a, .ZOOM_OUT)
	ui.cut_right(&row, spacing * 2)
	if ui.button(ctx, ui.cut_right(&row, 96), "Hidden", view.show_hidden) do toggle_hidden(view)
	ui.cut_right(&row, spacing)
	if ui.button(ctx, ui.cut_right(&row, 90), "Select", view.selection_mode) {
		view.selection_mode = !view.selection_mode
		if !view.selection_mode do clear_selection(view)
	}
	if view.selection_mode {
		ui.cut_right(&row, spacing)
		if ui.button(ctx, ui.cut_right(&row, 64), "All") do select_all(view)
		ui.cut_right(&row, spacing)
		if ui.button(ctx, ui.cut_right(&row, 72), "None") do clear_selection(view)
	}
	ui.cut_right(&row, spacing * 2)

	// The path, until the breadcrumb bar arrives in M2.
	ui.label_clipped(ctx, row, view.path, ctx.theme.text, .LEFT, 15)
}

@(private)
run_zoom :: proc(a: ^App, action: Action) {
	#partial switch action {
	case .ZOOM_IN:
		a.zoom = min(a.zoom + ZOOM_STEP, ZOOM_MAX)
	case .ZOOM_OUT:
		a.zoom = max(a.zoom - ZOOM_STEP, ZOOM_MIN)
	}
}

@(private)
build_sidebar :: proc(a: ^App, ctx: ^ui.Context, area: ui.Rect) {
	ui.panel(ctx, area)
	border := area
	ui.draw_rect(ctx, ui.cut_right(&border, 1), ctx.theme.panel_border)
	column := ui.inset(area, 8)
	view := active_view(a)

	ui.begin_region(ctx, "Places", area)
	defer ui.end_region(ctx)

	for place in a.places {
		current := place.path == view.path
		result := ui.button_ex(ctx, ui.cut_top(&column, 44), place.name, current)
		if .CLICKED in result do navigate_to(a, view, place.path, ctx.input.time)
		if .SECONDARY in result do set_message(a, "Context menus arrive in M4")
		ui.cut_top(&column, ctx.theme.spacing)
	}
}

@(private)
build_status_bar :: proc(a: ^App, ctx: ^ui.Context, area: ui.Rect) {
	ui.panel(ctx, area)
	row := ui.inset_xy(area, 12, 0)
	view := active_view(a)
	dim := ctx.theme.text_dim

	zoom := fmt.tprintf("zoom %d%%", int(a.zoom * 100 + 0.5))
	ui.label(ctx, ui.cut_right(&row, 90), zoom, dim, .RIGHT, 14)

	// How to jump between areas, for whichever device is in use, built from
	// the live bindings. The pointer needs no hint: it can just go there.
	hint := ui.region_jump_hint(ctx)
	if len(hint) > 0 do ui.label(ctx, ui.cut_right(&row, 380), hint, dim, .RIGHT, 14)

	if len(a.message) > 0 && a.now - a.message_time < MESSAGE_SECONDS {
		ui.label_clipped(ctx, row, a.message, ctx.theme.text, .LEFT, 14)
		return
	}
	if view.listing == nil || view.listing.error != .NONE do return

	hidden := len(view.listing.entries) - len(view.order)
	summary := fmt.tprintf("%d items", len(view.order))
	if hidden > 0 && !view.show_hidden do summary = fmt.tprintf("%d items (%d hidden)", len(view.order), hidden)
	if view.selected_count > 0 {
		summary = fmt.tprintf("%s  ·  %d selected, %s", summary, view.selected_count, format_size(selected_size(view)))
	}
	if view.selection_mode do summary = fmt.tprintf("%s  ·  selection mode", summary)
	ui.label_clipped(ctx, row, summary, dim, .LEFT, 14)
}
