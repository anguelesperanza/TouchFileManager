package fs

import "core:fmt"
import "core:os"
import "core:strings"
import "core:sys/linux"

// Moving to the trash, following the freedesktop.org Trash specification,
// so items trashed here show up in (and can be restored from) Dolphin,
// Nautilus and every other desktop's trash.
//
//   - Files on the same drive as the home trash go to
//     $XDG_DATA_HOME/Trash (normally ~/.local/share/Trash).
//   - Files on another drive go to that drive's own $topdir/.Trash-$uid,
//     because moving them home would mean copying every byte.
//   - Each item gets info/<name>.trashinfo recording where it came from and
//     when, written *before* the item moves, so a crash never leaves an
//     item in the trash that can't be restored.

home_trash_directory :: proc(allocator := context.allocator) -> string {
	data := os.get_env("XDG_DATA_HOME", context.temp_allocator)
	if len(data) == 0 do data = join_path(home_directory(context.temp_allocator), ".local/share", context.temp_allocator)
	return join_path(data, "Trash", allocator)
}

// The files/ folder of the home trash, for showing the trash in a view.
home_trash_files :: proc(allocator := context.allocator) -> string {
	return join_path(home_trash_directory(context.temp_allocator), "files", allocator)
}

// Moves `path` to the right trash. `deletion_date` is local time in the
// spec's format, "2026-10-12T14:03:00" -- passed in so a whole batch shares
// one time zone lookup.
trash_entry :: proc(path: string, home_trash: string, deletion_date: string) -> Op_Error {
	if !exists(path) do return .NOT_FOUND

	trash, top_directory, ok := choose_trash(path, home_trash)
	if !ok do return .NO_TRASH
	files := join_path(trash, "files", context.temp_allocator)
	info := join_path(trash, "info", context.temp_allocator)
	if !ensure_trash_folders(trash, files, info) do return .NO_TRASH

	// The home trash records absolute paths; a drive's own trash records
	// paths relative to the drive, so they stay right if it's mounted
	// elsewhere next time.
	recorded := path
	if len(top_directory) > 0 && top_directory != "/" do recorded = path[len(top_directory) + 1:]

	name := base_name(path)
	for n := 1; n < 10000; n += 1 {
		candidate := name
		if n > 1 do candidate = fmt.tprintf("%s.%d", name, n)
		info_path := fmt.tprintf("%s/%s.trashinfo", info, candidate)

		// O_EXCL on the info file claims the name atomically: two trashings
		// at once can't both pick "notes.txt".
		fd, errno := linux.openat(linux.AT_FDCWD, cstr(info_path), {.WRONLY, .CREAT, .EXCL, .CLOEXEC}, linux.Mode{.IRUSR, .IWUSR})
		if errno == .EEXIST do continue
		if errno != .NONE do return errno_to_op_error(errno)

		contents := fmt.tprintf("[Trash Info]\nPath=%s\nDeletionDate=%s\n", url_encode_path(recorded), deletion_date)
		_, write_errno := linux.write(fd, transmute([]u8)contents)
		linux.close(fd)
		if write_errno != .NONE {
			linux.unlinkat(linux.AT_FDCWD, cstr(info_path), {})
			return errno_to_op_error(write_errno)
		}

		move_error := rename_no_replace(path, join_path(files, candidate, context.temp_allocator))
		if move_error == .EXISTS do continue
		if move_error != .NONE {
			linux.unlinkat(linux.AT_FDCWD, cstr(info_path), {})
			return move_error
		}
		return .NONE
	}
	return .OTHER
}

// Which trash an item belongs in, and the top of its drive when that's
// not the home one.
@(private)
choose_trash :: proc(path: string, home_trash: string) -> (trash: string, top_directory: string, ok: bool) {
	item_device, item_ok := device_of(parent_path(path))
	if !item_ok do return "", "", false

	// The home trash may not exist yet; its nearest existing ancestor is on
	// the same drive it will be.
	home_device: u64
	home_ok := false
	for probe := home_trash; ; probe = parent_path(probe) {
		home_device, home_ok = device_of(probe)
		if home_ok || probe == "/" do break
	}
	if home_ok && home_device == item_device do return home_trash, "", true

	// Walk up to the top of the item's drive.
	top := parent_path(path)
	for top != "/" {
		parent_device, parent_ok := device_of(parent_path(top))
		if !parent_ok || parent_device != item_device do break
		top = parent_path(top)
	}
	uid := linux.getuid()
	return join_path(top, fmt.tprintf(".Trash-%d", uid), context.temp_allocator), top, true
}

@(private)
device_of :: proc(path: string) -> (u64, bool) {
	info: linux.Statx
	if linux.statx(linux.AT_FDCWD, cstr(path), {}, {.TYPE}, &info) != .NONE do return 0, false
	return u64(info.dev_major) << 32 | u64(info.dev_minor), true
}

@(private)
ensure_trash_folders :: proc(trash: string, files: string, info: string) -> bool {
	private_mode := linux.Mode{.IRUSR, .IWUSR, .IXUSR}
	for folder in ([]string{trash, files, info}) {
		if is_directory(folder) do continue
		// The trash may sit under folders that don't exist yet
		// (~/.local/share on a fresh account).
		if folder == trash {
			if os.make_directory_all(parent_path(trash)) != nil && !is_directory(parent_path(trash)) do return false
		}
		errno := linux.mkdirat(linux.AT_FDCWD, cstr(folder), private_mode)
		if errno != .NONE && errno != .EEXIST do return false
	}
	return true
}

// Percent-encodes a path for a .trashinfo file: everything except
// unreserved characters and "/".
url_encode_path :: proc(path: string, allocator := context.temp_allocator) -> string {
	hex := "0123456789ABCDEF"
	builder := strings.builder_make(allocator)
	for i in 0 ..< len(path) {
		c := path[i]
		unreserved := (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')
		unreserved = unreserved || c == '-' || c == '_' || c == '.' || c == '~' || c == '/'
		if unreserved {
			strings.write_byte(&builder, c)
		} else {
			strings.write_byte(&builder, '%')
			strings.write_byte(&builder, hex[c >> 4])
			strings.write_byte(&builder, hex[c & 0xf])
		}
	}
	return strings.to_string(builder)
}
