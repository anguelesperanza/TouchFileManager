package fs

import "core:mem"
import "core:slice"

Sort_Key :: enum u8 {
	NAME,
	SIZE,
	MODIFIED,
	TYPE,
}

Sort_Options :: struct {
	key:           Sort_Key,
	descending:    bool,
	folders_first: bool,
}

// Fills `order` with indices into listing.entries, sorted. 100,000 entries
// take ~80 ms with compare_natural alone; the precomputed keys bring that
// down (see the commit that introduced them for measurements). Sorting indices
// rather than the entries keeps the listing untouched, so re-sorting by a
// different column never has to copy entries around.
sort_entries :: proc(listing: ^Listing, order: ^[dynamic]u32, options: Sort_Options, show_hidden: bool) {
	clear(order)
	for entry, i in listing.entries {
		if .HIDDEN in entry.flags && !show_hidden do continue
		append(order, u32(i))
	}

	Sort_Context :: struct {
		listing: ^Listing,
		options: Sort_Options,
	}
	sort_context := Sort_Context{listing = listing, options = options}

	// No stable sort needed: compare_entries breaks every tie by name, and
	// names are unique within a directory, so the order is total.
	slice.sort_by_cmp_with_data(order[:], proc(a: u32, b: u32, data: rawptr) -> slice.Ordering {
		c := (^Sort_Context)(data)
		return compare_entries_at(c.listing, a, b, c.options)
	}, &sort_context)
}

compare_entries_at :: proc(listing: ^Listing, a_index: u32, b_index: u32, options: Sort_Options) -> slice.Ordering {
	a := listing.entries[a_index]
	b := listing.entries[b_index]
	// Folders stay on top whichever direction the sort runs.
	if options.folders_first {
		a_is_folder := a.kind == .DIRECTORY
		b_is_folder := b.kind == .DIRECTORY
		if a_is_folder && !b_is_folder do return .Less
		if b_is_folder && !a_is_folder do return .Greater
	}

	result := 0
	switch options.key {
	case .NAME:
		result = 0
	case .SIZE:
		result = compare_ordered(a.size, b.size)
	case .MODIFIED:
		result = compare_ordered(a.modified, b.modified)
	case .TYPE:
		result = compare_natural(extension_of(entry_name(listing, a)), extension_of(entry_name(listing, b)))
	}
	if result == 0 do result = compare_sort_keys(listing, a_index, b_index)
	if options.descending do result = -result

	if result < 0 do return .Less
	if result > 0 do return .Greater
	return .Equal
}

@(private)
compare_ordered :: proc(a: $T, b: T) -> int {
	if a < b do return -1
	if a > b do return 1
	return 0
}

// The extension used for sorting by type: the text after the last dot,
// ignoring a leading dot (".bashrc" has no extension).
extension_of :: proc(name: string) -> string {
	for i := len(name) - 1; i > 0; i -= 1 {
		if name[i] == '.' do return name[i + 1:]
	}
	return ""
}

// Case-insensitive natural order: runs of digits compare by numeric value,
// so "file2" sorts before "file10". Case folding is ASCII-only; other bytes
// compare as-is, which keeps invalid UTF-8 names in a stable order instead of
// breaking the comparison.
compare_natural :: proc(a: string, b: string) -> int {
	i := 0
	j := 0
	for i < len(a) && j < len(b) {
		ca := a[i]
		cb := b[j]
		if is_digit(ca) && is_digit(cb) {
			// Skip leading zeros, then the longer run is the bigger number;
			// equal lengths compare digit by digit.
			start_a := i
			start_b := j
			for i < len(a) && a[i] == '0' do i += 1
			for j < len(b) && b[j] == '0' do j += 1
			digits_a := i
			digits_b := j
			for i < len(a) && is_digit(a[i]) do i += 1
			for j < len(b) && is_digit(b[j]) do j += 1
			length_a := i - digits_a
			length_b := j - digits_b
			if length_a != length_b do return compare_ordered(length_a, length_b)
			for k in 0 ..< length_a {
				if a[digits_a + k] != b[digits_b + k] do return compare_ordered(a[digits_a + k], b[digits_b + k])
			}
			// Same value: fewer leading zeros first ("1" before "01").
			zeros := compare_ordered(digits_a - start_a, digits_b - start_b)
			if zeros != 0 do return zeros
			continue
		}

		la := to_lower_ascii(ca)
		lb := to_lower_ascii(cb)
		if la != lb do return compare_ordered(la, lb)
		i += 1
		j += 1
	}
	length := compare_ordered(len(a) - i, len(b) - j)
	if length != 0 do return length
	// Equal ignoring case: fall back to exact bytes so the order is total.
	return compare_bytes(a, b)
}

@(private)
compare_bytes :: proc(a: string, b: string) -> int {
	for k in 0 ..< min(len(a), len(b)) {
		if a[k] != b[k] do return compare_ordered(a[k], b[k])
	}
	return compare_ordered(len(a), len(b))
}

@(private)
is_digit :: proc(c: u8) -> bool {
	return c >= '0' && c <= '9'
}

@(private)
to_lower_ascii :: proc(c: u8) -> u8 {
	if c >= 'A' && c <= 'Z' do return c + ('a' - 'A')
	return c
}

// A byte string that sorts the same way compare_natural does, so sorting can
// compare keys with memcmp instead of re-parsing names on every comparison.
//
//   letters  -> ASCII lowercase
//   a run of digits -> '0', the length of the number without leading zeros,
//                      then those digits
//
// '0' keeps a number sorting where a digit would among other characters;
// the length byte makes longer numbers (bigger values) sort later; equal
// lengths then compare digit by digit. Every '0' in a key starts a number, so
// two keys are always aligned when they reach one.
append_sort_key :: proc(key: ^[dynamic]u8, name: string) {
	i := 0
	for i < len(name) {
		c := name[i]
		if !is_digit(c) {
			append(key, to_lower_ascii(c))
			i += 1
			continue
		}
		for i < len(name) && name[i] == '0' do i += 1
		start := i
		for i < len(name) && is_digit(name[i]) do i += 1
		append(key, '0', u8(min(i - start, 255)))
		append(key, name[start:i])
	}
}

@(private)
compare_sort_keys :: proc(listing: ^Listing, a_index: u32, b_index: u32) -> int {
	a_span := listing.key_spans[a_index]
	b_span := listing.key_spans[b_index]
	a_key := listing.sort_keys[a_span[0]:][:a_span[1]]
	b_key := listing.sort_keys[b_span[0]:][:b_span[1]]
	result := mem.compare(a_key, b_key)
	if result != 0 do return result
	// Same key ("file1" vs "File01"): fall back to the full natural
	// comparison, which breaks the tie the same way the tests expect.
	return compare_natural(entry_name(listing, listing.entries[a_index]), entry_name(listing, listing.entries[b_index]))
}
