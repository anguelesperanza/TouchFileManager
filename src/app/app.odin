package app

import "core:fmt"
import ui "../ui"

// M0 placeholder screen: the real toolbar, sidebar and file list arrive in
// M1/M2. It exists to exercise the UI layer with all four input devices --
// pointer and touch (tap, long-press), keyboard (arrows, Tab, Enter, Menu),
// and controller (D-pad/stick, shoulders, A, Start).

Action :: enum u8 {
	ZOOM_IN,
	ZOOM_OUT,
	ZOOM_RESET,
}

App :: struct {
	bindings: [Action]ui.Trigger_List,
	// User zoom on top of the display's DPI scale.
	zoom:          f32,
	selected_place: int,
	// The status text is kept across frames, so it can't live in the temp
	// allocator (freed every frame). It's formatted into this buffer.
	message_buffer: [256]u8,
	message:        string,
	message_count:  int,
}

ZOOM_STEP :: 0.1
ZOOM_MIN :: 0.5
ZOOM_MAX :: 3.0

PLACES := [?]string{"Home", "Desktop", "Documents", "Downloads", "Pictures", "Root", "Trash"}

init :: proc(a: ^App) {
	a.zoom = 1
	a.message = "Ready"
	a.bindings[.ZOOM_IN] = {
		ui.Key_Chord{key = .EQUAL, modifiers = {.CONTROL}},
		ui.Key_Chord{key = .EQUAL, modifiers = {.CONTROL, .SHIFT}},
		nil,
		nil,
	}
	a.bindings[.ZOOM_OUT] = {ui.Key_Chord{key = .MINUS, modifiers = {.CONTROL}}, nil, nil, nil}
	a.bindings[.ZOOM_RESET] = {ui.Key_Chord{key = .NUM_0, modifiers = {.CONTROL}}, nil, nil, nil}
}

run_action :: proc(a: ^App, action: Action) {
	switch action {
	case .ZOOM_IN:
		a.zoom = min(a.zoom + ZOOM_STEP, ZOOM_MAX)
	case .ZOOM_OUT:
		a.zoom = max(a.zoom - ZOOM_STEP, ZOOM_MIN)
	case .ZOOM_RESET:
		a.zoom = 1
	}
}

// The counter makes a repeated message visibly change, so it's clear the
// second press registered.
@(private)
set_message :: proc(a: ^App, format: string, args: ..any) {
	a.message = fmt.bprintf(a.message_buffer[:], format, ..args)
	a.message_count += 1
}

build :: proc(a: ^App, ctx: ^ui.Context) {
	for action in Action {
		if ui.any_trigger_pressed(ctx, a.bindings[action]) do run_action(a, action)
	}

	theme := &ctx.theme
	screen := ui.screen_rect(ctx)
	ui.draw_rect(ctx, screen, theme.background)

	toolbar := ui.cut_top(&screen, 60)
	status_bar := ui.cut_bottom(&screen, 32)
	sidebar := ui.cut_left(&screen, 200)
	content := screen

	build_toolbar(a, ctx, toolbar)
	build_sidebar(a, ctx, sidebar)
	build_content(a, ctx, content)
	build_status_bar(a, ctx, status_bar)
}

@(private)
build_toolbar :: proc(a: ^App, ctx: ^ui.Context, area: ui.Rect) {
	ui.panel(ctx, area)
	row := ui.inset(area, 8)

	ui.begin_region(ctx, "toolbar")
	defer ui.end_region(ctx)

	navigation := [?]string{"Back", "Forward", "Up", "Home"}
	for name in navigation {
		if ui.button(ctx, ui.cut_left(&row, 88), name) {
			set_message(a, "%s (not wired up until M1)", name)
		}
		ui.cut_left(&row, ctx.theme.spacing)
	}

	// Zoom lives on screen as well as on Ctrl+=/Ctrl+-, because a controller
	// or touch user has no Ctrl key.
	if ui.button(ctx, ui.cut_right(&row, 52), "A+") do run_action(a, .ZOOM_IN)
	ui.cut_right(&row, ctx.theme.spacing)
	if ui.button(ctx, ui.cut_right(&row, 52), "A-") do run_action(a, .ZOOM_OUT)
}

@(private)
build_sidebar :: proc(a: ^App, ctx: ^ui.Context, area: ui.Rect) {
	ui.panel(ctx, area)
	border := area
	ui.draw_rect(ctx, ui.cut_right(&border, 1), ctx.theme.panel_border)
	column := ui.inset(area, 8)

	ui.begin_region(ctx, "places")
	defer ui.end_region(ctx)

	for name, i in PLACES {
		result := ui.button_ex(ctx, ui.cut_top(&column, 44), name, a.selected_place == i)
		if .CLICKED in result {
			a.selected_place = i
			set_message(a, "Opened %s", name)
		}
		if .SECONDARY in result {
			set_message(a, "Context menu for %s (menus arrive in M4)", name)
		}
		ui.cut_top(&column, ctx.theme.spacing)
	}
}

@(private)
build_content :: proc(a: ^App, ctx: ^ui.Context, area: ui.Rect) {
	inner := ui.inset(area, 16)
	heading := ui.cut_top(&inner, 32)
	ui.label(ctx, heading, PLACES[a.selected_place], ctx.theme.text, .LEFT, 22)
	ui.cut_top(&inner, 12)

	ui.begin_region(ctx, "files")
	defer ui.end_region(ctx)

	// A grid of stand-in items, enough to try spatial navigation across
	// rows and columns.
	ITEM_WIDTH :: 150
	ITEM_HEIGHT :: 64
	GAP :: 10
	columns := max(int((inner.w + GAP) / (ITEM_WIDTH + GAP)), 1)
	for i in 0 ..< 24 {
		column := i % columns
		row := i / columns
		rect := ui.Rect{
			inner.x + f32(column) * (ITEM_WIDTH + GAP),
			inner.y + f32(row) * (ITEM_HEIGHT + GAP),
			ITEM_WIDTH,
			ITEM_HEIGHT,
		}
		if rect.y + rect.h > inner.y + inner.h do break

		name := fmt.tprintf("Item %d", i + 1)
		result := ui.button_ex(ctx, rect, name)
		if .CLICKED in result do set_message(a, "Opened %s", name)
		if .SECONDARY in result do set_message(a, "Context menu for %s", name)
	}
}

@(private)
build_status_bar :: proc(a: ^App, ctx: ^ui.Context, area: ui.Rect) {
	ui.panel(ctx, area)
	row := ui.inset_xy(area, 12, 0)

	mode: string
	switch ctx.input_mode {
	case .POINTER:
		mode = "pointer"
	case .KEYBOARD:
		mode = "keyboard"
	case .GAMEPAD:
		mode = "controller"
	}
	right := fmt.tprintf("input: %s   zoom: %d%%", mode, int(a.zoom * 100 + 0.5))
	ui.label(ctx, ui.cut_right(&row, 260), right, ctx.theme.text_dim, .RIGHT, 14)

	left := fmt.tprintf("%s  (#%d)", a.message, a.message_count)
	ui.label(ctx, row, left, ctx.theme.text_dim, .LEFT, 14)
}
