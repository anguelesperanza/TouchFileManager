package fs

import "core:fmt"
import "core:strings"
import "core:sync"
import "core:sys/linux"

// File operations: create, rename, copy, move, delete. All of them can
// block for a long time (a big copy, a slow drive), so the app runs them on
// the job worker (jobs.odin), never on the UI thread.
//
// Nothing here ever overwrites: creating uses O_EXCL, renames use
// RENAME_NOREPLACE, and copies pick "name (2)" when the name is taken. A
// file that appears between the check and the write makes the operation
// fail rather than clobber it.

Op_Error :: enum u8 {
	NONE,
	EXISTS,
	NOT_FOUND,
	PERMISSION_DENIED,
	NO_SPACE,
	READ_ONLY,
	// Moving or copying a folder into itself.
	INTO_ITSELF,
	// Devices, sockets and FIFOs aren't copied.
	NOT_SUPPORTED,
	// No usable trash on that drive.
	NO_TRASH,
	CANCELLED,
	OTHER,
}

op_error_message :: proc(error: Op_Error) -> string {
	switch error {
	case .NONE:
		return ""
	case .EXISTS:
		return "something with that name already exists"
	case .NOT_FOUND:
		return "it no longer exists"
	case .PERMISSION_DENIED:
		return "permission denied"
	case .NO_SPACE:
		return "the drive is full"
	case .READ_ONLY:
		return "the drive is read-only"
	case .INTO_ITSELF:
		return "a folder can't go inside itself"
	case .NOT_SUPPORTED:
		return "special files (devices, sockets) can't be copied"
	case .NO_TRASH:
		return "this drive has no trash; delete it permanently instead"
	case .CANCELLED:
		return "cancelled"
	case .OTHER:
		return "an unexpected error"
	}
	return ""
}

@(private)
errno_to_op_error :: proc(errno: linux.Errno) -> Op_Error {
	#partial switch errno {
	case .NONE:
		return .NONE
	case .EEXIST, .ENOTEMPTY:
		return .EXISTS
	case .ENOENT:
		return .NOT_FOUND
	case .EACCES, .EPERM:
		return .PERMISSION_DENIED
	case .ENOSPC, .EDQUOT:
		return .NO_SPACE
	case .EROFS:
		return .READ_ONLY
	}
	return .OTHER
}

// Shared between the job worker (writing) and the UI (reading).
Progress :: struct {
	files_done:  i64,
	files_total: i64,
	bytes_done:  i64,
	bytes_total: i64,
	cancel:      bool,
}

@(private)
cancelled :: proc(progress: ^Progress) -> bool {
	if progress == nil do return false
	return sync.atomic_load(&progress.cancel)
}

@(private)
add_progress :: proc(progress: ^Progress, files: i64, bytes: i64) {
	if progress == nil do return
	if files != 0 do sync.atomic_add(&progress.files_done, files)
	if bytes != 0 do sync.atomic_add(&progress.bytes_done, bytes)
}

@(private)
cstr :: proc(path: string) -> cstring {
	return strings.clone_to_cstring(path, context.temp_allocator)
}

exists :: proc(path: string) -> bool {
	info: linux.Statx
	return linux.statx(linux.AT_FDCWD, cstr(path), {.SYMLINK_NOFOLLOW}, {.TYPE}, &info) == .NONE
}

is_directory :: proc(path: string) -> bool {
	info: linux.Statx
	if linux.statx(linux.AT_FDCWD, cstr(path), {}, {.TYPE}, &info) != .NONE do return false
	return linux.S_ISDIR(info.mode)
}

// Whether `path` is `ancestor` or somewhere inside it.
is_inside :: proc(path: string, ancestor: string) -> bool {
	if path == ancestor do return true
	if ancestor == "/" do return true
	return strings.has_prefix(path, ancestor) && len(path) > len(ancestor) && path[len(ancestor)] == '/'
}

make_directory :: proc(path: string) -> Op_Error {
	return errno_to_op_error(linux.mkdirat(linux.AT_FDCWD, cstr(path), linux.Mode{.IRUSR, .IWUSR, .IXUSR, .IRGRP, .IXGRP, .IROTH, .IXOTH}))
}

create_empty_file :: proc(path: string) -> Op_Error {
	fd, errno := linux.openat(linux.AT_FDCWD, cstr(path), {.WRONLY, .CREAT, .EXCL, .CLOEXEC}, linux.Mode{.IRUSR, .IWUSR, .IRGRP, .IROTH})
	if errno != .NONE do return errno_to_op_error(errno)
	linux.close(fd)
	return .NONE
}

// Renames without ever replacing an existing file. Some filesystems (older
// FUSE ones) don't support RENAME_NOREPLACE; there it checks first and then
// renames, which leaves a tiny race but is the best those allow.
rename_no_replace :: proc(old_path: string, new_path: string) -> Op_Error {
	errno := linux.renameat2(linux.AT_FDCWD, cstr(old_path), linux.AT_FDCWD, cstr(new_path), {.NOREPLACE})
	if errno == .EINVAL || errno == .ENOSYS {
		if exists(new_path) do return .EXISTS
		errno = linux.renameat(linux.AT_FDCWD, cstr(old_path), linux.AT_FDCWD, cstr(new_path))
	}
	if errno == .EXDEV do return .OTHER
	return errno_to_op_error(errno)
}

// `name` in `directory` if that's free, otherwise "name (2)", "name (3)"...
// keeping the extension at the end: "photo (2).jpg".
unique_destination :: proc(directory: string, name: string, allocator := context.allocator) -> string {
	candidate := join_path(directory, name, context.temp_allocator)
	if !exists(candidate) do return strings.clone(candidate, allocator)

	stem := name
	extension := ""
	dot := strings.last_index_byte(name, '.')
	if dot > 0 {
		stem = name[:dot]
		extension = name[dot:]
	}
	for n := 2; ; n += 1 {
		numbered := fmt.tprintf("%s (%d)%s", stem, n, extension)
		candidate = join_path(directory, numbered, context.temp_allocator)
		if !exists(candidate) do return strings.clone(candidate, allocator)
	}
}

// Counts the files and bytes under `path`, for progress. Symlinks count as
// one file of no size; they're copied as links, not followed.
measure :: proc(path: string, files: ^i64, bytes: ^i64) {
	info: linux.Statx
	if linux.statx(linux.AT_FDCWD, cstr(path), {.SYMLINK_NOFOLLOW}, {.TYPE, .SIZE}, &info) != .NONE do return
	if linux.S_ISDIR(info.mode) {
		listing := list_directory(path, context.temp_allocator)
		for entry in listing.entries {
			measure(join_path(path, entry_name(&listing, entry), context.temp_allocator), files, bytes)
		}
		files^ += 1
		return
	}
	files^ += 1
	if linux.S_ISREG(info.mode) do bytes^ += i64(info.size)
}

// Copies a file, folder (recursively) or symlink to `destination`, which
// must not exist yet.
copy_entry :: proc(source: string, destination: string, progress: ^Progress) -> Op_Error {
	if cancelled(progress) do return .CANCELLED
	if is_inside(destination, source) do return .INTO_ITSELF

	info: linux.Statx
	errno := linux.statx(linux.AT_FDCWD, cstr(source), {.SYMLINK_NOFOLLOW}, {.TYPE, .MODE, .SIZE, .MTIME, .ATIME}, &info)
	if errno != .NONE do return errno_to_op_error(errno)

	switch {
	case linux.S_ISDIR(info.mode):
		mkdir_errno := linux.mkdirat(linux.AT_FDCWD, cstr(destination), permission_bits(info.mode) + {.IWUSR, .IXUSR, .IRUSR})
		if mkdir_errno != .NONE do return errno_to_op_error(mkdir_errno)
		listing := list_directory(source)
		defer listing_destroy(&listing)
		if listing.error != .NONE do return .PERMISSION_DENIED
		first_error := Op_Error.NONE
		for entry in listing.entries {
			name := entry_name(&listing, entry)
			child_error := copy_entry(join_path(source, name, context.temp_allocator), join_path(destination, name, context.temp_allocator), progress)
			if child_error == .CANCELLED do return .CANCELLED
			if child_error != .NONE && first_error == .NONE do first_error = child_error
		}
		// The folder's own permissions last: a read-only folder copied
		// first would refuse its own contents.
		linux.fchmodat(linux.AT_FDCWD, cstr(destination), permission_bits(info.mode), {})
		add_progress(progress, 1, 0)
		return first_error
	case linux.S_ISLNK(info.mode):
		target: [4096]u8
		length, read_errno := linux.readlinkat(linux.AT_FDCWD, cstr(source), target[:len(target) - 1])
		if read_errno != .NONE do return errno_to_op_error(read_errno)
		target[length] = 0
		link_errno := linux.symlinkat(cstring(raw_data(target[:])), linux.AT_FDCWD, cstr(destination))
		add_progress(progress, 1, 0)
		return errno_to_op_error(link_errno)
	case linux.S_ISREG(info.mode):
		result := copy_file(source, destination, permission_bits(info.mode), info, progress)
		add_progress(progress, 1, 0)
		return result
	}
	add_progress(progress, 1, 0)
	return .NOT_SUPPORTED
}

@(private)
permission_bits :: proc(mode: linux.Mode) -> linux.Mode {
	all := linux.Mode{.IRUSR, .IWUSR, .IXUSR, .IRGRP, .IWGRP, .IXGRP, .IROTH, .IWOTH, .IXOTH}
	return mode & all
}

COPY_CHUNK :: 8 * 1024 * 1024

@(private)
copy_file :: proc(source: string, destination: string, mode: linux.Mode, info: linux.Statx, progress: ^Progress) -> Op_Error {
	input, in_errno := linux.openat(linux.AT_FDCWD, cstr(source), {.CLOEXEC})
	if in_errno != .NONE do return errno_to_op_error(in_errno)
	defer linux.close(input)

	output, out_errno := linux.openat(linux.AT_FDCWD, cstr(destination), {.WRONLY, .CREAT, .EXCL, .CLOEXEC}, mode + {.IWUSR})
	if out_errno != .NONE do return errno_to_op_error(out_errno)

	// sendfile in chunks rather than one call, so progress moves and a
	// cancel takes effect within one chunk even for a huge file.
	result := Op_Error.NONE
	for {
		if cancelled(progress) {
			result = .CANCELLED
			break
		}
		sent, errno := linux.sendfile(output, input, nil, COPY_CHUNK)
		if errno != .NONE {
			result = errno_to_op_error(errno)
			break
		}
		if sent == 0 do break
		add_progress(progress, 0, i64(sent))
	}
	linux.fchmod(output, mode)
	linux.close(output)

	if result != .NONE {
		// Never leave a half-written copy behind.
		linux.unlinkat(linux.AT_FDCWD, cstr(destination), {})
		return result
	}
	// Keep the original's modification time, like cp -p and every file
	// manager: a copy isn't a new version of the file.
	times := [2]linux.Time_Spec{
		{time_sec = uint(info.atime.sec), time_nsec = uint(info.atime.nsec)},
		{time_sec = uint(info.mtime.sec), time_nsec = uint(info.mtime.nsec)},
	}
	linux.utimensat(linux.AT_FDCWD, cstr(destination), &times[0], {})
	return .NONE
}

// Deletes a file, symlink or folder (recursively). Permanent.
delete_entry :: proc(path: string, progress: ^Progress) -> Op_Error {
	if cancelled(progress) do return .CANCELLED
	info: linux.Statx
	errno := linux.statx(linux.AT_FDCWD, cstr(path), {.SYMLINK_NOFOLLOW}, {.TYPE}, &info)
	if errno != .NONE do return errno_to_op_error(errno)

	if linux.S_ISDIR(info.mode) {
		listing := list_directory(path)
		defer listing_destroy(&listing)
		for entry in listing.entries {
			child_error := delete_entry(join_path(path, entry_name(&listing, entry), context.temp_allocator), progress)
			if child_error != .NONE do return child_error
		}
		add_progress(progress, 1, 0)
		return errno_to_op_error(linux.unlinkat(linux.AT_FDCWD, cstr(path), {.REMOVEDIR}))
	}
	add_progress(progress, 1, 0)
	return errno_to_op_error(linux.unlinkat(linux.AT_FDCWD, cstr(path), {}))
}

// Moves within a filesystem by renaming (instant); across filesystems by
// copying and then deleting the original, only once the copy succeeded.
move_entry :: proc(source: string, destination: string, progress: ^Progress) -> Op_Error {
	if is_inside(destination, source) do return .INTO_ITSELF
	errno := linux.renameat2(linux.AT_FDCWD, cstr(source), linux.AT_FDCWD, cstr(destination), {.NOREPLACE})
	if errno == .EINVAL || errno == .ENOSYS {
		// No RENAME_NOREPLACE on this filesystem; see rename_no_replace.
		if exists(destination) do return .EXISTS
		errno = linux.renameat(linux.AT_FDCWD, cstr(source), linux.AT_FDCWD, cstr(destination))
	}
	if errno == .NONE {
		files, bytes: i64
		measure(destination, &files, &bytes)
		add_progress(progress, files, bytes)
		return .NONE
	}
	if errno != .EXDEV do return errno_to_op_error(errno)

	copy_error := copy_entry(source, destination, progress)
	if copy_error != .NONE {
		if exists(destination) do delete_entry(destination, nil)
		return copy_error
	}
	return delete_entry(source, nil)
}
