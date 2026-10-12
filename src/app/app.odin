package app

import "core:fmt"
import "core:time/datetime"
import "core:time/timezone"
import "../fs"
import ui "../ui"

// App-level commands. Every one is reachable from all four devices: a
// binding (key, gamepad button or chord, mouse button) or an on-screen
// control (tab bar, toolbar, header, list).

Action :: enum u8 {
	ZOOM_IN,
	ZOOM_OUT,
	ZOOM_RESET,
	GO_UP,
	GO_HOME,
	GO_BACK,
	GO_FORWARD,
	REFRESH,
	EDIT_PATH,
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
	NEW_TAB,
	CLOSE_TAB,
	NEXT_TAB,
	PREVIOUS_TAB,
	MOVE_TAB_LEFT,
	MOVE_TAB_RIGHT,
	SPLIT_RIGHT,
	SPLIT_DOWN,
	CLOSE_VIEW,
	NEXT_VIEW,
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

	// A view whose file list should take focus as soon as it exists -- a
	// view just split off, or the one a tab switch landed on.
	focus_view_next: ^View,

	path_editor: Path_Editor,

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

TAB_BAR_HEIGHT :: 44
TOOLBAR_HEIGHT :: 60
STATUS_BAR_HEIGHT :: 32
SIDEBAR_WIDTH :: 200

init :: proc(a: ^App, start_path: string) {
	a.zoom = 1
	set_default_bindings(a)
	fs.loader_init(&a.loader)
	a.places = fs.load_places()

	region, ok := timezone.region_load("local")
	if ok do a.time_zone = region

	open_tab(a, start_path, 0)
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
	path_editor_destroy(&a.path_editor)
	if a.time_zone != nil do timezone.region_destroy(a.time_zone)
}

// The built-in defaults. The user's bindings.ini is applied on top of these
// (see bindings_config.odin), and the first run writes them out as that file.
@(private)
set_default_bindings :: proc(a: ^App) {
	key :: ui.key
	pad :: ui.pad
	chord :: ui.pad_chord
	mouse :: ui.mouse
	a.bindings[.ZOOM_IN] = ui.triggers(key(.EQUAL, {.CONTROL}), key(.EQUAL, {.CONTROL, .SHIFT}))
	a.bindings[.ZOOM_OUT] = ui.triggers(key(.MINUS, {.CONTROL}))
	a.bindings[.ZOOM_RESET] = ui.triggers(key(.NUM_0, {.CONTROL}))
	// B goes up a folder, the usual "back" on a controller.
	a.bindings[.GO_UP] = ui.triggers(key(.BACKSPACE), key(.UP, {.ALT}), pad(.FACE_RIGHT))
	a.bindings[.GO_HOME] = ui.triggers(key(.HOME, {.ALT}))
	a.bindings[.GO_BACK] = ui.triggers(key(.LEFT, {.ALT}), mouse(.BACK))
	a.bindings[.GO_FORWARD] = ui.triggers(key(.RIGHT, {.ALT}), mouse(.FORWARD))
	a.bindings[.REFRESH] = ui.triggers(key(.R, {.CONTROL}))
	a.bindings[.EDIT_PATH] = ui.triggers(key(.L, {.CONTROL}), key(.D, {.ALT}), chord(.SELECT, .START))
	a.bindings[.TOGGLE_HIDDEN] = ui.triggers(key(.H, {.CONTROL}))
	a.bindings[.SELECT_ALL] = ui.triggers(key(.A, {.CONTROL}))
	a.bindings[.TOGGLE_SELECTED] = ui.triggers(key(.SPACE, {.CONTROL}), key(.INSERT), pad(.FACE_LEFT))
	a.bindings[.EXTEND_UP] = ui.triggers(key(.UP, {.SHIFT}))
	a.bindings[.EXTEND_DOWN] = ui.triggers(key(.DOWN, {.SHIFT}))
	a.bindings[.PAGE_UP] = ui.triggers(key(.PAGE_UP), pad(.LEFT_TRIGGER))
	a.bindings[.PAGE_DOWN] = ui.triggers(key(.PAGE_DOWN), pad(.RIGHT_TRIGGER))
	a.bindings[.FIRST] = ui.triggers(key(.HOME))
	a.bindings[.LAST] = ui.triggers(key(.END))
	// On a controller the shoulders always switch tabs, and View + the
	// triggers open and close them. LB/RB are deliberately in no chord:
	// chord buttons act on release, and switching tabs should be instant.
	a.bindings[.NEW_TAB] = ui.triggers(key(.T, {.CONTROL}), chord(.SELECT, .RIGHT_TRIGGER))
	a.bindings[.CLOSE_TAB] = ui.triggers(key(.W, {.CONTROL}), chord(.SELECT, .LEFT_TRIGGER))
	a.bindings[.NEXT_TAB] = ui.triggers(key(.TAB, {.CONTROL}), key(.PAGE_DOWN, {.CONTROL}), pad(.RIGHT_SHOULDER))
	a.bindings[.PREVIOUS_TAB] = ui.triggers(key(.TAB, {.CONTROL, .SHIFT}), key(.PAGE_UP, {.CONTROL}), pad(.LEFT_SHOULDER))
	a.bindings[.MOVE_TAB_LEFT] = ui.triggers(key(.PAGE_UP, {.CONTROL, .SHIFT}))
	a.bindings[.MOVE_TAB_RIGHT] = ui.triggers(key(.PAGE_DOWN, {.CONTROL, .SHIFT}))
	// F3 is Dolphin's split key.
	a.bindings[.SPLIT_RIGHT] = ui.triggers(key(.F3))
	a.bindings[.SPLIT_DOWN] = ui.triggers(key(.F3, {.SHIFT}))
	a.bindings[.CLOSE_VIEW] = ui.triggers(key(.W, {.CONTROL, .SHIFT}))
	a.bindings[.NEXT_VIEW] = ui.triggers(key(.F6))
}

action_pressed :: proc(a: ^App, ctx: ^ui.Context, action: Action) -> bool {
	return action in a.pressed
}

@(private)
create_view :: proc(a: ^App, path: string) -> ^View {
	a.next_view_id += 1
	return view_create(a.next_view_id, path)
}

active_tab :: proc(a: ^App) -> ^Tab {
	return a.tabs[a.active_tab]
}

active_view :: proc(a: ^App) -> ^View {
	return a.tabs[a.active_tab].active_view
}

set_message :: proc(a: ^App, format: string, args: ..any) {
	a.message = fmt.bprintf(a.message_buffer[:], format, ..args)
	a.message_time = a.now
}

// Hands finished listings to whoever asked for them: a view, or the path
// editor's Tab completion.
@(private)
receive_listings :: proc(a: ^App) {
	clear(&a.results)
	fs.take_results(&a.loader, &a.results)
	for result in a.results {
		if result.owner == COMPLETION_OWNER {
			receive_completion(a, result.listing, result.generation)
			fs.listing_free(result.listing)
			continue
		}
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
run_global_actions :: proc(a: ^App, ctx: ^ui.Context) {
	view := active_view(a)
	now := ctx.input.time

	if .ZOOM_IN in a.pressed do a.zoom = min(a.zoom + ZOOM_STEP, ZOOM_MAX)
	if .ZOOM_OUT in a.pressed do a.zoom = max(a.zoom - ZOOM_STEP, ZOOM_MIN)
	if .ZOOM_RESET in a.pressed do a.zoom = 1
	if .REFRESH in a.pressed do refresh(a, view, now)
	if .GO_HOME in a.pressed do navigate_to(a, view, a.places[0].path, now)
	if .GO_BACK in a.pressed do go_back(a, view, now)
	if .GO_FORWARD in a.pressed do go_forward(a, view, now)
	if .TOGGLE_HIDDEN in a.pressed do toggle_hidden(view)
	if .SELECT_ALL in a.pressed do select_all(view)
	if .EDIT_PATH in a.pressed do start_path_edit(a, ctx)

	if .NEW_TAB in a.pressed do open_tab(a, view.path, now)
	if .CLOSE_TAB in a.pressed do close_tab(a, a.active_tab)
	if .NEXT_TAB in a.pressed do switch_tab(a, a.active_tab + 1)
	if .PREVIOUS_TAB in a.pressed do switch_tab(a, a.active_tab - 1)
	if .MOVE_TAB_LEFT in a.pressed do move_tab(a, -1)
	if .MOVE_TAB_RIGHT in a.pressed do move_tab(a, 1)
	if .SPLIT_RIGHT in a.pressed do split_active_view(a, .HORIZONTAL, now)
	if .SPLIT_DOWN in a.pressed do split_active_view(a, .VERTICAL, now)
	if .CLOSE_VIEW in a.pressed do close_active_view(a)
	if .NEXT_VIEW in a.pressed do focus_next_view(a)

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
	// While a path is being typed, keys and buttons belong to the text
	// field and the on-screen keyboard; none of them are app commands.
	if !a.path_editor.editing {
		for action in Action {
			if ui.any_trigger_pressed(ctx, a.bindings[action]) do a.pressed += {action}
		}
	}

	receive_listings(a)
	apply_pending_focus(a, ctx)
	if !a.path_editor.editing do run_global_actions(a, ctx)

	theme := &ctx.theme
	screen := ui.screen_rect(ctx)
	ui.draw_rect(ctx, screen, theme.background)

	tab_bar := ui.cut_top(&screen, TAB_BAR_HEIGHT)
	toolbar := ui.cut_top(&screen, TOOLBAR_HEIGHT)
	status_bar := ui.cut_bottom(&screen, STATUS_BAR_HEIGHT)
	keyboard_area: ui.Rect
	if a.path_editor.editing && a.path_editor.show_keyboard {
		keyboard_area = ui.cut_bottom(&screen, ui.on_screen_keyboard_height())
	}
	sidebar := ui.cut_left(&screen, SIDEBAR_WIDTH)

	build_tab_bar(a, ctx, tab_bar)
	build_toolbar(a, ctx, toolbar)
	build_sidebar(a, ctx, sidebar)
	build_split_node(a, ctx, active_tab(a), active_tab(a).root, screen)
	if keyboard_area.h > 0 do build_on_screen_keyboard(a, ctx, keyboard_area)
	build_status_bar(a, ctx, status_bar)

	track_active_view(a, ctx)
}

// Focus that has to wait for its widget to exist: the file list at startup
// (nothing focused yet), a newly split view, or the path field.
@(private)
apply_pending_focus :: proc(a: ^App, ctx: ^ui.Context) {
	// Set before the widgets are built, using ids they recorded last frame;
	// focus on a widget that already registered this frame would be dropped
	// by end_frame as stale.
	if a.focus_view_next != nil && a.focus_view_next.list_id != 0 {
		ui.set_focus(ctx, a.focus_view_next.list_id)
		a.focus_view_next = nil
	}
	if a.path_editor.focus_field_next && a.path_editor.field_id != 0 {
		ui.set_focus(ctx, a.path_editor.field_id)
		a.path_editor.focus_field_next = false
	}
	view := active_view(a)
	if ctx.focus == 0 && view.list_id != 0 && !a.path_editor.editing do ui.set_focus(ctx, view.list_id)
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

	if ui.button(ctx, ui.cut_left(&row, 44), "◀") do go_back(a, view, now)
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 44), "▶") do go_forward(a, view, now)
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 52), "Up") do go_up(a, view, now)
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 64), "Home") do navigate_to(a, view, a.places[0].path, now)
	ui.cut_left(&row, spacing)
	if ui.button(ctx, ui.cut_left(&row, 80), "Refresh") do refresh(a, view, now)
	ui.cut_left(&row, spacing * 2)

	// On-screen equivalents of the keyboard shortcuts: a controller or
	// touch user has no Ctrl key or F3.
	if ui.button(ctx, ui.cut_right(&row, 44), "A+") do run_zoom(a, .ZOOM_IN)
	ui.cut_right(&row, spacing)
	if ui.button(ctx, ui.cut_right(&row, 44), "A-") do run_zoom(a, .ZOOM_OUT)
	ui.cut_right(&row, spacing * 2)
	if ui.button(ctx, ui.cut_right(&row, 80), "Hidden", view.show_hidden) do toggle_hidden(view)
	ui.cut_right(&row, spacing)
	if ui.button(ctx, ui.cut_right(&row, 76), "Select", view.selection_mode) {
		view.selection_mode = !view.selection_mode
		if !view.selection_mode do clear_selection(view)
	}
	if view.selection_mode {
		ui.cut_right(&row, spacing)
		if ui.button(ctx, ui.cut_right(&row, 52), "All") do select_all(view)
		ui.cut_right(&row, spacing)
		if ui.button(ctx, ui.cut_right(&row, 64), "None") do clear_selection(view)
	}
	ui.cut_right(&row, spacing * 2)
	if view_count(active_tab(a).root) > 1 {
		if ui.button(ctx, ui.cut_right(&row, 84), "Unsplit") do close_active_view(a)
		ui.cut_right(&row, spacing)
	}
	if ui.button(ctx, ui.cut_right(&row, 76), "Split ▾") do split_active_view(a, .VERTICAL, now)
	ui.cut_right(&row, spacing)
	if ui.button(ctx, ui.cut_right(&row, 76), "Split ▸") do split_active_view(a, .HORIZONTAL, now)
	ui.cut_right(&row, spacing * 2)

	build_path_bar(a, ctx, row)
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
		// When the window is short (the on-screen keyboard is up), the
		// places that don't fit are left out rather than squashed.
		if column.h < 44 do break
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

	if a.path_editor.editing {
		hint := "Enter: go · Esc: cancel · Tab: complete"
		if ctx.input_mode == .GAMEPAD do hint = "Menu: go · B: cancel · X: backspace · Y: space · LT/RT: move"
		ui.label_clipped(ctx, row, hint, dim, .LEFT, 14)
		return
	}

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

// A short name for a folder: the place name if it's one of the places
// ("Downloads"), otherwise its last component.
display_name :: proc(a: ^App, path: string) -> string {
	for place in a.places {
		if place.path == path do return place.name
	}
	return fs.base_name(path)
}
