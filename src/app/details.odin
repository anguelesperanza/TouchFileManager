package app

import "core:fmt"
import "core:strings"
import "core:time"
import "core:time/timezone"
import "../fs"
import ui "../ui"

// The details view: a sortable column header over a virtualized list.
//
// Opening, by device (the M1 decision):
//   mouse    -- double-click; or click a row that's already the only one
//               selected
//   touch    -- tap to select, tap again to open (no double-tap needed)
//   keyboard -- Enter
//   gamepad  -- A
// In selection mode a click/tap toggles the row instead of opening.

ROW_HEIGHT :: 34
HEADER_HEIGHT :: 32
SIZE_COLUMN :: 96
MODIFIED_COLUMN :: 150
TYPE_COLUMN :: 110
COLUMN_GAP :: 12
// Below this width the Type, then Modified, columns are dropped so the name
// keeps enough room to be readable (a Steam Deck in a split view).
HIDE_TYPE_BELOW :: 620
HIDE_MODIFIED_BELOW :: 460

// While a new folder loads, the old one stays on screen this long (inert)
// before "Loading…" replaces it. Local folders finish well within it, so
// navigating never flashes an empty screen.
LOADING_GRACE_SECONDS :: 0.15

@(private)
Columns :: struct {
	icon:          ui.Rect,
	name:          ui.Rect,
	size:          ui.Rect,
	modified:      ui.Rect,
	type:          ui.Rect,
	show_modified: bool,
	show_type:     bool,
}

@(private)
layout_columns :: proc(row: ui.Rect) -> Columns {
	columns: Columns
	columns.show_type = row.w >= HIDE_TYPE_BELOW
	columns.show_modified = row.w >= HIDE_MODIFIED_BELOW

	rest := ui.inset_xy(row, 10, 0)
	if columns.show_type {
		columns.type = ui.cut_right(&rest, TYPE_COLUMN)
		ui.cut_right(&rest, COLUMN_GAP)
	}
	if columns.show_modified {
		columns.modified = ui.cut_right(&rest, MODIFIED_COLUMN)
		ui.cut_right(&rest, COLUMN_GAP)
	}
	columns.size = ui.cut_right(&rest, SIZE_COLUMN)
	ui.cut_right(&rest, COLUMN_GAP)
	columns.icon = ui.cut_left(&rest, 22)
	ui.cut_left(&rest, 6)
	columns.name = rest
	return columns
}

build_details_view :: proc(a: ^App, ctx: ^ui.Context, view: ^View, area: ui.Rect, title: string) {
	ui.push_id_int(ctx, int(view.id))
	defer ui.pop_id(ctx)
	ui.begin_region(ctx, "Files", area, title)
	defer ui.end_region(ctx)
	view.region_id = ui.current_region(ctx)

	rect := area
	header := ui.cut_top(&rect, HEADER_HEIGHT)
	build_header(ctx, view, header)

	now := ctx.input.time
	// The list always exists -- empty while loading or on an error -- so
	// it can hold focus the moment a view is created or switched to.
	message := ""
	showing_old := view.listing != nil && !(view.loading && now - view.loading_since > LOADING_GRACE_SECONDS)
	if !showing_old && view.loading do message = "Loading…"
	if showing_old && view.listing.error != .NONE {
		message = fs.listing_error_message(view.listing.error)
		showing_old = false
	}
	if showing_old && len(view.order) == 0 {
		message = "This folder is empty."
		if len(view.listing.entries) > 0 do message = "Only hidden files here."
	}

	row_count := 0
	if showing_old do row_count = len(view.order)
	scroll_to := -1
	if view.scroll_to_cursor && showing_old do scroll_to = view.cursor
	if showing_old do view.scroll_to_cursor = false

	list := ui.begin_virtual_list(ctx, "rows", rect, row_count, ROW_HEIGHT, scroll_to)
	view.list_id = list.id
	// The old listing stays visible during the grace period, but rows
	// mustn't act on it: its paths belong to the folder being left.
	interactive := !view.loading && showing_old
	if interactive && list.focused do handle_list_keys(a, ctx, view, list)

	if showing_old {
		for position in list.first ..< list.last {
			build_row(a, ctx, view, list, position, interactive)
		}
	}
	if len(message) > 0 do ui.label(ctx, ui.inset(rect, 24), message, ctx.theme.text_dim, .CENTER)
	ui.end_virtual_list(ctx, list)
}

@(private)
build_header :: proc(ctx: ^ui.Context, view: ^View, header: ui.Rect) {
	ui.draw_rect(ctx, header, ctx.theme.panel)
	columns := layout_columns(header)

	header_button(ctx, view, ui.Rect{columns.icon.x, header.y, columns.name.x + columns.name.w - columns.icon.x, header.h}, "Name", .NAME, .LEFT)
	header_button(ctx, view, ui.Rect{columns.size.x, header.y, columns.size.w, header.h}, "Size", .SIZE, .RIGHT)
	if columns.show_modified {
		header_button(ctx, view, ui.Rect{columns.modified.x, header.y, columns.modified.w, header.h}, "Modified", .MODIFIED, .LEFT)
	}
	if columns.show_type {
		header_button(ctx, view, ui.Rect{columns.type.x, header.y, columns.type.w, header.h}, "Type", .TYPE, .LEFT)
	}
}

// Activating a column sorts by it; activating the sorted column again flips
// the direction.
@(private)
header_button :: proc(ctx: ^ui.Context, view: ^View, rect: ui.Rect, text: string, key: fs.Sort_Key, align: ui.Align) {
	result := ui.interact(ctx, ui.get_id(ctx, text), rect)
	if .HOVERED in result do ui.draw_rect(ctx, rect, ctx.theme.button_hot, ctx.theme.radius)

	sorted := view.sort.key == key
	title := text
	color := ctx.theme.text_dim
	if sorted {
		arrow := " ▲"
		if view.sort.descending do arrow = " ▼"
		title = strings.concatenate({text, arrow}, context.temp_allocator)
		color = ctx.theme.text
	}
	ui.label(ctx, ui.inset_xy(rect, 4, 0), title, color, align, 14)

	if .FOCUSED in result && ui.show_focus_ring(ctx) {
		ui.draw_rect_outline(ctx, rect, ctx.theme.focus_ring, ctx.theme.radius, ctx.theme.focus_ring_width)
	}

	if .CLICKED in result {
		if sorted {
			view.sort.descending = !view.sort.descending
		} else {
			view.sort.key = key
			// Newest and largest first is what people want from those
			// columns; names and types read naturally A to Z.
			view.sort.descending = key == .SIZE || key == .MODIFIED
		}
		resort(view)
	}
}

@(private)
build_row :: proc(a: ^App, ctx: ^ui.Context, view: ^View, list: ui.Virtual_List, position: int, interactive: bool) {
	entry_index := view.order[position]
	entry := view.listing.entries[entry_index]
	name := fs.entry_name(view.listing, entry)
	rect := ui.virtual_list_row_rect(list, position)
	theme := &ctx.theme

	result: ui.Interactions
	if interactive do result = ui.virtual_list_row(ctx, list, position)

	selected := view.selected[entry_index]
	if selected {
		ui.draw_rect(ctx, rect, {theme.accent.r, theme.accent.g, theme.accent.b, 70})
	} else if .HOVERED in result {
		ui.draw_rect(ctx, rect, {255, 255, 255, 12})
	}
	if position == view.cursor && list.focused && ui.show_focus_ring(ctx) {
		ui.draw_rect_outline(ctx, ui.inset(rect, 2), theme.focus_ring, theme.radius, theme.focus_ring_width)
	}

	columns := layout_columns(rect)
	draw_entry_icon(ctx, columns.icon, entry)

	name_color := theme.text
	if .BROKEN_LINK in entry.flags || .HIDDEN in entry.flags do name_color = theme.text_dim
	ui.label_clipped(ctx, columns.name, name, name_color)

	if entry.kind == .FILE do ui.label(ctx, columns.size, format_size(entry.size), theme.text_dim, .RIGHT, 14)
	if columns.show_modified do ui.label(ctx, columns.modified, format_modified(a, entry.modified), theme.text_dim, .LEFT, 14)
	if columns.show_type do ui.label_clipped(ctx, columns.type, describe_type(name, entry), theme.text_dim, .LEFT, 14)

	handle_row_pointer(a, ctx, view, position, result)
}

@(private)
handle_row_pointer :: proc(a: ^App, ctx: ^ui.Context, view: ^View, position: int, result: ui.Interactions) {
	if .SECONDARY in result {
		view.cursor = position
		if !is_selected(view, position) do select_only(view, position)
		view.anchor = position
		set_message(a, "Context menus arrive in M4")
		return
	}
	if .CLICKED not_in result do return

	modifiers := ctx.input.modifiers
	was_only_selection := is_selected(view, position) && view.selected_count == 1
	view.cursor = position

	switch {
	case view.selection_mode || .CONTROL in modifiers:
		set_selected(view, position, !is_selected(view, position))
		view.anchor = position
	case .SHIFT in modifiers:
		select_range(view, view.anchor, position)
	case .DOUBLE_CLICKED in result || was_only_selection:
		// The second click of a double-click also lands on an
		// already-selected row; either way this opens exactly once.
		open_entry(a, view, position, ctx.input.time)
	case:
		select_only(view, position)
		view.anchor = position
	}
}

@(private)
handle_list_keys :: proc(a: ^App, ctx: ^ui.Context, view: ^View, list: ui.Virtual_List) {
	now := ctx.input.time
	count := len(view.order)

	if ui.nav_pressed(ctx, .DOWN) {
		ui.consume_nav(ctx, .DOWN)
		move_cursor(view, view.cursor + 1, false)
	}
	// Up from the first row is left alone, so focus moves on to the column
	// header above.
	if ui.nav_pressed(ctx, .UP) && view.cursor > 0 {
		ui.consume_nav(ctx, .UP)
		move_cursor(view, view.cursor - 1, false)
	}
	if action_pressed(a, ctx, .EXTEND_DOWN) do move_cursor(view, view.cursor + 1, true)
	if action_pressed(a, ctx, .EXTEND_UP) do move_cursor(view, view.cursor - 1, true)
	page := ui.virtual_list_page_rows(list)
	if action_pressed(a, ctx, .PAGE_DOWN) do move_cursor(view, view.cursor + page, false)
	if action_pressed(a, ctx, .PAGE_UP) do move_cursor(view, view.cursor - page, false)
	if action_pressed(a, ctx, .FIRST) do move_cursor(view, 0, false)
	if action_pressed(a, ctx, .LAST) do move_cursor(view, count - 1, false)

	if action_pressed(a, ctx, .TOGGLE_SELECTED) && count > 0 {
		set_selected(view, view.cursor, !is_selected(view, view.cursor))
		view.anchor = view.cursor
	}

	// Type-to-jump. Space normally activates, but mid-word it's part of
	// the name being typed ("my file").
	if ctx.input.text_count > 0 && ctx.input.modifiers & {.CONTROL, .ALT, .SUPER} == {} {
		builder := strings.builder_make(context.temp_allocator)
		for i in 0 ..< ctx.input.text_count {
			character := ctx.input.text[i]
			if character == ' ' && !type_ahead_active(view, now) do continue
			strings.write_rune(&builder, character)
		}
		typed := strings.to_string(builder)
		if len(typed) > 0 {
			type_ahead(view, typed, now)
			ui.consume_nav(ctx, .ACTIVATE)
		}
	}

	if ui.nav_pressed(ctx, .ACTIVATE) {
		ui.consume_nav(ctx, .ACTIVATE)
		if count > 0 {
			if view.selection_mode {
				set_selected(view, view.cursor, !is_selected(view, view.cursor))
			} else {
				open_entry(a, view, view.cursor, now)
			}
		}
	}
	if ui.nav_pressed(ctx, .CONTEXT_MENU) {
		ui.consume_nav(ctx, .CONTEXT_MENU)
		set_message(a, "Context menus arrive in M4")
	}
}

open_entry :: proc(a: ^App, view: ^View, position: int, now: f64) {
	entry := view.listing.entries[view.order[position]]
	name := fs.entry_name(view.listing, entry)
	path := fs.join_path(view.listing.path, name, context.temp_allocator)

	if .BROKEN_LINK in entry.flags {
		set_message(a, "Can't open “%s”: the link's target is missing.", name)
		return
	}
	switch entry.kind {
	case .DIRECTORY:
		navigate_to(a, view, path, now)
	case .FILE:
		if fs.open_with_default_app(path) {
			set_message(a, "Opening “%s”", name)
		} else {
			set_message(a, "Couldn't start xdg-open to open “%s”.", name)
		}
	case .OTHER:
		set_message(a, "“%s” is a device or socket; it can't be opened.", name)
	}
}

// A stand-in until real icons: a filled tab-shaped block for folders, an
// outline for files, and a corner mark on links.
@(private)
draw_entry_icon :: proc(ctx: ^ui.Context, rect: ui.Rect, entry: fs.Entry) {
	theme := &ctx.theme
	box := ui.Rect{rect.x + 2, rect.y + (rect.h - 14) / 2, 18, 14}
	switch entry.kind {
	case .DIRECTORY:
		ui.draw_rect(ctx, ui.Rect{box.x, box.y - 2, 8, 4}, theme.accent, 1)
		ui.draw_rect(ctx, box, theme.accent, 2)
	case .FILE:
		file_box := ui.Rect{box.x + 3, box.y - 2, 12, 18}
		ui.draw_rect_outline(ctx, file_box, theme.text_dim, 2, 1.5)
	case .OTHER:
		ui.draw_rect_outline(ctx, box, theme.text_dim, 7, 1.5)
	}
	if .SYMLINK in entry.flags {
		mark := ui.Rect{box.x + box.w - 6, box.y + box.h - 6, 7, 7}
		ui.draw_rect(ctx, mark, theme.background, 1)
		ui.draw_rect_outline(ctx, mark, theme.text, 1, 1)
	}
}

// Binary units, like KDE and GNOME: 1 KiB = 1024 bytes.
format_size :: proc(size: u64) -> string {
	if size < 1024 do return fmt.tprintf("%d B", size)
	units := [?]string{"KiB", "MiB", "GiB", "TiB", "PiB"}
	value := f64(size) / 1024
	unit := 0
	for value >= 1024 && unit < len(units) - 1 {
		value /= 1024
		unit += 1
	}
	if value < 10 do return fmt.tprintf("%.1f %s", value, units[unit])
	return fmt.tprintf("%.0f %s", value, units[unit])
}

@(private)
format_modified :: proc(a: ^App, seconds: i64) -> string {
	date_time, ok := time.time_to_datetime(time.unix(seconds, 0))
	if !ok do return ""
	if a.time_zone != nil {
		local, converted := timezone.datetime_to_tz(date_time, a.time_zone)
		if converted do date_time = local
	}
	return fmt.tprintf(
		"%04d-%02d-%02d %02d:%02d",
		date_time.year,
		date_time.month,
		date_time.day,
		date_time.hour,
		date_time.minute,
	)
}

// "Folder", or the extension in capitals ("PNG file"). Real MIME-based
// descriptions arrive with icons.
@(private)
describe_type :: proc(name: string, entry: fs.Entry) -> string {
	if .BROKEN_LINK in entry.flags do return "Broken link"
	switch entry.kind {
	case .DIRECTORY:
		return "Folder"
	case .OTHER:
		return "Special"
	case .FILE:
		extension := fs.extension_of(name)
		if len(extension) == 0 || len(extension) > 8 {
			if .EXECUTABLE in entry.flags do return "Program"
			return "File"
		}
		return fmt.tprintf("%s file", strings.to_upper(extension, context.temp_allocator))
	}
	return ""
}
