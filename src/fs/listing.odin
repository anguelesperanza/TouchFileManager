package fs

import "core:mem"
import "core:strings"
import "core:sys/linux"

// Directory listing, straight on the Linux syscalls. core:os's directory
// iterator costs three syscalls per entry (openat, fstat, close) plus a heap
// allocation for each entry's full path; this costs one getdents64 per batch
// of names and one statx per entry, with no per-entry allocation.

Entry_Kind :: enum u8 {
	FILE,
	DIRECTORY,
	// Devices, sockets, FIFOs.
	OTHER,
}

Entry_Flag :: enum u8 {
	HIDDEN,
	SYMLINK,
	// A symlink whose target doesn't exist (or can't be reached). Shown,
	// but it can't be opened.
	BROKEN_LINK,
	EXECUTABLE,
}

Entry_Flags :: bit_set[Entry_Flag; u8]

// One directory entry. The name lives in the listing's shared name buffer;
// use entry_name to get it.
Entry :: struct {
	name_offset: u32,
	name_length: u32,
	size:        u64,
	// Seconds since the Unix epoch.
	modified:    i64,
	kind:        Entry_Kind,
	flags:       Entry_Flags,
}

Listing_Error :: enum u8 {
	NONE,
	NOT_FOUND,
	NOT_A_DIRECTORY,
	PERMISSION_DENIED,
	OTHER,
}

// Two allocations however many entries there are: one array of entries,
// one buffer of names.
Listing :: struct {
	path:    string,
	entries: [dynamic]Entry,
	names:   [dynamic]u8,
	error:   Listing_Error,
	// Entries skipped because they vanished between being listed and being
	// stat'd -- normal in busy directories like /tmp or /proc.
	skipped: int,
	// Listings are built on one thread and freed on another, so each one
	// remembers the allocator it came from rather than trusting whatever
	// context.allocator happens to be at free time.
	allocator: mem.Allocator,

	// Per-entry natural-sort keys (see append_sort_key), built while
	// listing so sorting compares bytes instead of re-parsing names.
	sort_keys: [dynamic]u8,
	key_spans: [dynamic][2]u32,

	// When requested, the listing arrives already sorted (the Loader does
	// it on the worker), so opening a huge folder costs the UI nothing.
	order:             [dynamic]u32,
	order_options:     Sort_Options,
	order_show_hidden: bool,
	has_order:         bool,
}

entry_name :: proc(listing: ^Listing, entry: Entry) -> string {
	return string(listing.names[entry.name_offset:][:entry.name_length])
}

listing_destroy :: proc(listing: ^Listing) {
	delete(listing.path, listing.allocator)
	delete(listing.entries)
	delete(listing.names)
	delete(listing.sort_keys)
	delete(listing.key_spans)
	delete(listing.order)
}

// For listings made with new_listing (the Loader's results).
listing_free :: proc(listing: ^Listing) {
	allocator := listing.allocator
	listing_destroy(listing)
	free(listing, allocator)
}

// Lists `path` synchronously. Call it from a worker (see Loader); on a slow
// or network mount it can block for a long time.
list_directory :: proc(path: string, allocator := context.allocator) -> Listing {
	listing: Listing
	listing.allocator = allocator
	listing.path = strings.clone(path, allocator)
	listing.entries = make([dynamic]Entry, allocator)
	listing.names = make([dynamic]u8, allocator)
	listing.sort_keys = make([dynamic]u8, allocator)
	listing.key_spans = make([dynamic][2]u32, allocator)
	listing.order = make([dynamic]u32, allocator)

	path_c := strings.clone_to_cstring(path, context.temp_allocator)
	directory, open_errno := linux.open(path_c, {.DIRECTORY, .CLOEXEC})
	if open_errno != .NONE {
		listing.error = errno_to_listing_error(open_errno)
		return listing
	}
	defer linux.close(directory)

	buffer: [32 * 1024]u8
	for {
		length, read_errno := linux.getdents(directory, buffer[:])
		if read_errno != .NONE {
			listing.error = errno_to_listing_error(read_errno)
			return listing
		}
		if length == 0 do break

		offset := 0
		for dirent in linux.dirent_iterate_buf(buffer[:length], &offset) {
			name := linux.dirent_name(dirent)
			if name == "." || name == ".." do continue
			// getdents leaves each name NUL-terminated inside the buffer.
			name_c := cstring(raw_data(name))

			entry, ok := stat_entry(directory, name_c)
			if !ok {
				listing.skipped += 1
				continue
			}
			entry.name_offset = u32(len(listing.names))
			entry.name_length = u32(len(name))
			if len(name) > 0 && name[0] == '.' do entry.flags += {.HIDDEN}
			append(&listing.names, name)
			append(&listing.entries, entry)
			key_start := u32(len(listing.sort_keys))
			append_sort_key(&listing.sort_keys, name)
			append(&listing.key_spans, [2]u32{key_start, u32(len(listing.sort_keys)) - key_start})
		}
	}
	return listing
}

@(private)
STAT_MASK :: linux.Statx_Mask{.TYPE, .MODE, .SIZE, .MTIME}

@(private)
stat_entry :: proc(directory: linux.Fd, name: cstring) -> (entry: Entry, ok: bool) {
	// DONT_SYNC: on network filesystems, use cached attributes rather than
	// a round trip to the server for every file.
	info: linux.Statx
	errno := linux.statx(directory, name, {.SYMLINK_NOFOLLOW, .STATX_DONT_SYNC}, STAT_MASK, &info)
	if errno != .NONE do return {}, false

	if linux.S_ISLNK(info.mode) {
		entry.flags += {.SYMLINK}
		// Show a link as what it points to, like every file manager does;
		// a link to a folder should open like a folder.
		target: linux.Statx
		target_errno := linux.statx(directory, name, {.STATX_DONT_SYNC}, STAT_MASK, &target)
		if target_errno == .NONE {
			info = target
		} else {
			entry.flags += {.BROKEN_LINK}
			entry.kind = .OTHER
			entry.modified = info.mtime.sec
			return entry, true
		}
	}

	switch {
	case linux.S_ISDIR(info.mode):
		entry.kind = .DIRECTORY
	case linux.S_ISREG(info.mode):
		entry.kind = .FILE
		entry.size = info.size
		if info.mode & {.IXUSR, .IXGRP, .IXOTH} != {} do entry.flags += {.EXECUTABLE}
	case:
		entry.kind = .OTHER
	}
	entry.modified = info.mtime.sec
	return entry, true
}

@(private)
errno_to_listing_error :: proc(errno: linux.Errno) -> Listing_Error {
	#partial switch errno {
	case .NONE:
		return .NONE
	case .ENOENT:
		return .NOT_FOUND
	case .ENOTDIR:
		return .NOT_A_DIRECTORY
	case .EACCES, .EPERM:
		return .PERMISSION_DENIED
	}
	return .OTHER
}

listing_error_message :: proc(error: Listing_Error) -> string {
	switch error {
	case .NONE:
		return ""
	case .NOT_FOUND:
		return "This folder doesn't exist."
	case .NOT_A_DIRECTORY:
		return "This isn't a folder."
	case .PERMISSION_DENIED:
		return "You don't have permission to open this folder."
	case .OTHER:
		return "This folder couldn't be read."
	}
	return ""
}
