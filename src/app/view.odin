package app

import "core:strings"
import "../fs"
import ui "../ui"

// A View is one pane: everything about where it is and what's selected in
// it. Nothing about navigation lives on the tab or the app, so a tab split
// into several views (M2) needs no rework -- every view navigates on its own.

View :: struct {
	// Identifies the view to the loader and scopes its widget ids, so two
	// views showing the same folder never share state.
	id:   u64,
	path: string,

	listing:       ^fs.Listing,
	loading:       bool,
	loading_since: f64,
	generation:    u64,

	// Visible entries (hidden ones filtered out when they're not shown),
	// as indices into listing.entries, in display order.
	order:       [dynamic]u32,
	sort:        fs.Sort_Options,
	show_hidden: bool,

	// Indexed by entry index, not display position, so re-sorting keeps the
	// selection.
	selected:       [dynamic]bool,
	selected_count: int,
	// Touch and controller have no Ctrl/Shift, so multi-select is a mode:
	// while it's on, a tap toggles a row instead of opening it.
	selection_mode: bool,

	// The current row, as a display position. The anchor is where a
	// Shift-range selection starts.
	cursor:           int,
	anchor:           int,
	scroll_to_cursor: bool,

	// After going up, the folder just left is put under the cursor, so
	// going back down is one press.
	select_after_load: string,

	// The list's widget id, recorded each frame it's built, so the app can
	// give it focus.
	list_id: ui.Id,

	// Back/forward history. Each entry remembers the item the cursor was
	// on, so going back lands where you were.
	back:    [dynamic]History_Entry,
	forward: [dynamic]History_Entry,

	// Where the view was drawn last frame, for split size checks.
	rect:      ui.Rect,
	// The view's focus region, so the app can tell which view is active.
	region_id: ui.Id,

	type_ahead:      [64]u8,
	type_ahead_len:  int,
	type_ahead_time: f64,
}

History_Entry :: struct {
	path:        string,
	cursor_name: string,
}

MAX_HISTORY :: 100

Split_Direction :: enum u8 {
	HORIZONTAL,
	VERTICAL,
}

// A leaf holds a view; an inner node splits its rect between two children.
// M1 only ever creates a single leaf; splitting arrives in M2.
Split_Node :: struct {
	view:      ^View,
	direction: Split_Direction,
	ratio:     f32,
	first:     ^Split_Node,
	second:    ^Split_Node,
}

Tab :: struct {
	root:        ^Split_Node,
	active_view: ^View,
}

view_create :: proc(id: u64, path: string) -> ^View {
	view := new(View)
	view.id = id
	view.path = strings.clone(path)
	view.sort = fs.Sort_Options{key = .NAME, folders_first = true}
	return view
}

view_destroy :: proc(view: ^View) {
	clear_history(&view.back)
	clear_history(&view.forward)
	delete(view.back)
	delete(view.forward)
	delete(view.path)
	if view.listing != nil do fs.listing_free(view.listing)
	delete(view.order)
	delete(view.selected)
	delete(view.select_after_load)
	free(view)
}

split_node_destroy :: proc(node: ^Split_Node) {
	if node == nil do return
	if node.view != nil do view_destroy(node.view)
	split_node_destroy(node.first)
	split_node_destroy(node.second)
	free(node)
}

@(private)
clear_history :: proc(entries: ^[dynamic]History_Entry) {
	for entry in entries {
		delete(entry.path)
		delete(entry.cursor_name)
	}
	clear(entries)
}

@(private)
current_history_entry :: proc(view: ^View) -> History_Entry {
	name := ""
	entry, ok := cursor_entry(view)
	if ok do name = fs.entry_name(view.listing, entry)
	return History_Entry{path = strings.clone(view.path), cursor_name = strings.clone(name)}
}

// Going somewhere new records where the view was, and forgets the forward
// history, like a web browser.
navigate_to :: proc(a: ^App, view: ^View, path: string, now: f64, record_history := true) {
	if record_history && path != view.path && view.listing != nil {
		if len(view.back) >= MAX_HISTORY {
			delete(view.back[0].path)
			delete(view.back[0].cursor_name)
			ordered_remove(&view.back, 0)
		}
		append(&view.back, current_history_entry(view))
		clear_history(&view.forward)
	}
	new_path := strings.clone(path)
	delete(view.path)
	view.path = new_path
	view.generation += 1
	view.loading = true
	view.loading_since = now
	view.type_ahead_len = 0
	fs.request_listing(&a.loader, view.id, view.generation, view.path, view.sort, view.show_hidden)
}

go_back :: proc(a: ^App, view: ^View, now: f64) {
	travel_history(a, view, &view.back, &view.forward, now)
}

go_forward :: proc(a: ^App, view: ^View, now: f64) {
	travel_history(a, view, &view.forward, &view.back, now)
}

@(private)
travel_history :: proc(a: ^App, view: ^View, from: ^[dynamic]History_Entry, to: ^[dynamic]History_Entry, now: f64) {
	if len(from) == 0 do return
	append(to, current_history_entry(view))
	entry := pop(from)
	delete(view.select_after_load)
	view.select_after_load = entry.cursor_name
	navigate_to(a, view, entry.path, now, false)
	delete(entry.path)
}

go_up :: proc(a: ^App, view: ^View, now: f64) {
	if view.path == "/" do return
	delete(view.select_after_load)
	view.select_after_load = strings.clone(fs.base_name(view.path))
	navigate_to(a, view, fs.parent_path(view.path), now)
}

refresh :: proc(a: ^App, view: ^View, now: f64) {
	// Keep the cursor on the same file across the reload.
	entry, ok := cursor_entry(view)
	if ok {
		delete(view.select_after_load)
		view.select_after_load = strings.clone(fs.entry_name(view.listing, entry))
	}
	navigate_to(a, view, view.path, now, false)
}

// Installs a finished listing. Results for an older request (the user has
// navigated on since) are dropped.
apply_listing :: proc(view: ^View, listing: ^fs.Listing, generation: u64) -> bool {
	if generation != view.generation do return false

	if view.listing != nil do fs.listing_free(view.listing)
	view.listing = listing
	view.loading = false

	clear(&view.selected)
	resize(&view.selected, len(listing.entries))
	view.selected_count = 0
	view.cursor = 0
	view.anchor = 0
	if listing.has_order && listing.order_options == view.sort && listing.order_show_hidden == view.show_hidden {
		// Sorted on the worker; take its order instead of sorting again.
		view.order, listing.order = listing.order, view.order
	} else {
		resort(view)
	}

	if len(view.select_after_load) > 0 {
		position := find_position_by_name(view, view.select_after_load)
		if position >= 0 do view.cursor = position
		delete(view.select_after_load)
		view.select_after_load = ""
	}
	view.anchor = view.cursor
	view.scroll_to_cursor = true
	return true
}

// Re-sorts in place, keeping the cursor on the same entry.
resort :: proc(view: ^View) {
	if view.listing == nil do return
	cursor_entry_index := -1
	if view.cursor >= 0 && view.cursor < len(view.order) do cursor_entry_index = int(view.order[view.cursor])

	fs.sort_entries(view.listing, &view.order, view.sort, view.show_hidden)

	// Hiding entries may hide selected ones; they stop counting as selected.
	if !view.show_hidden {
		for entry, i in view.listing.entries {
			if .HIDDEN in entry.flags && view.selected[i] {
				view.selected[i] = false
				view.selected_count -= 1
			}
		}
	}

	view.cursor = 0
	if cursor_entry_index >= 0 {
		for entry_index, position in view.order {
			if int(entry_index) == cursor_entry_index do view.cursor = position
		}
	}
	view.cursor = clamp(view.cursor, 0, max(len(view.order) - 1, 0))
	view.anchor = view.cursor
	view.scroll_to_cursor = true
}

cursor_entry :: proc(view: ^View) -> (fs.Entry, bool) {
	if view.listing == nil do return {}, false
	if view.cursor < 0 || view.cursor >= len(view.order) do return {}, false
	return view.listing.entries[view.order[view.cursor]], true
}

find_position_by_name :: proc(view: ^View, name: string) -> int {
	for entry_index, position in view.order {
		if fs.entry_name(view.listing, view.listing.entries[entry_index]) == name do return position
	}
	return -1
}

move_cursor :: proc(view: ^View, position: int, extend: bool) {
	if len(view.order) == 0 do return
	view.cursor = clamp(position, 0, len(view.order) - 1)
	view.scroll_to_cursor = true
	if extend {
		select_range(view, view.anchor, view.cursor)
	} else {
		view.anchor = view.cursor
	}
}

is_selected :: proc(view: ^View, position: int) -> bool {
	return view.selected[view.order[position]]
}

set_selected :: proc(view: ^View, position: int, value: bool) {
	entry_index := view.order[position]
	if view.selected[entry_index] == value do return
	view.selected[entry_index] = value
	if value {
		view.selected_count += 1
	} else {
		view.selected_count -= 1
	}
}

clear_selection :: proc(view: ^View) {
	for &value in view.selected do value = false
	view.selected_count = 0
}

select_only :: proc(view: ^View, position: int) {
	clear_selection(view)
	set_selected(view, position, true)
}

select_all :: proc(view: ^View) {
	for position in 0 ..< len(view.order) do set_selected(view, position, true)
}

// Replaces the selection with the rows between `from` and `to`, inclusive.
select_range :: proc(view: ^View, from: int, to: int) {
	clear_selection(view)
	low := min(from, to)
	high := max(from, to)
	for position in low ..= high do set_selected(view, position, true)
}

selected_size :: proc(view: ^View) -> u64 {
	total: u64
	for selected, entry_index in view.selected {
		if selected do total += view.listing.entries[entry_index].size
	}
	return total
}

// Type-to-jump: typed characters build up a prefix (forgotten after a
// second without typing) and the cursor moves to the first name starting
// with it, searching from the cursor so repeating a letter cycles through
// matches.
TYPE_AHEAD_TIMEOUT :: 1.0

type_ahead :: proc(view: ^View, text: string, now: f64) {
	if view.listing == nil || len(view.order) == 0 do return
	if now - view.type_ahead_time > TYPE_AHEAD_TIMEOUT do view.type_ahead_len = 0
	view.type_ahead_time = now

	room := len(view.type_ahead) - view.type_ahead_len
	if len(text) > room do return
	copy(view.type_ahead[view.type_ahead_len:], text)
	view.type_ahead_len += len(text)
	prefix := string(view.type_ahead[:view.type_ahead_len])

	// A single letter, or the same letter repeated ("ccc"), steps to the
	// next name starting with that letter, cycling through them. Anything
	// longer narrows the search and may stay on the current row.
	search := prefix
	start := view.cursor
	if is_repeated_character(prefix) {
		search = prefix[:1]
		start = view.cursor + 1
	}

	count := len(view.order)
	for offset in 0 ..< count {
		position := (start + offset) % count
		name := fs.entry_name(view.listing, view.listing.entries[view.order[position]])
		if has_prefix_fold(name, search) {
			move_cursor(view, position, false)
			return
		}
	}
}

type_ahead_active :: proc(view: ^View, now: f64) -> bool {
	return view.type_ahead_len > 0 && now - view.type_ahead_time <= TYPE_AHEAD_TIMEOUT
}

@(private)
is_repeated_character :: proc(text: string) -> bool {
	if len(text) < 1 do return false
	for i in 1 ..< len(text) {
		if text[i] != text[0] do return false
	}
	return true
}

// ASCII-case-insensitive prefix test, matching the sort order's folding.
@(private)
has_prefix_fold :: proc(name: string, prefix: string) -> bool {
	if len(prefix) > len(name) do return false
	for i in 0 ..< len(prefix) {
		a := name[i]
		b := prefix[i]
		if a >= 'A' && a <= 'Z' do a += 'a' - 'A'
		if b >= 'A' && b <= 'Z' do b += 'a' - 'A'
		if a != b do return false
	}
	return true
}
