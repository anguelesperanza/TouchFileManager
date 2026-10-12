package fs_test

import "core:os"
import "core:strings"
import "core:sys/linux"
import "core:testing"
import "core:time"
import "../../src/fs"

// File operations, run only inside scratch directories (style guide:
// destructive operations are tested in a scratch directory first). The
// trash tests use a scratch trash, never the real one.

path_in :: proc(dir: string, name: string) -> string {
	return fs.join_path(dir, name, context.temp_allocator)
}

read_text :: proc(path: string) -> string {
	data, err := os.read_entire_file_from_path(path, context.temp_allocator)
	if err != nil do return "<unreadable>"
	return string(data)
}

write_text :: proc(t: ^testing.T, path: string, text: string) {
	err := os.write_entire_file(path, transmute([]u8)text)
	testing.expectf(t, err == nil, "write %s", path)
}

mtime_of :: proc(path: string) -> i64 {
	info: linux.Statx
	linux.statx(linux.AT_FDCWD, strings.clone_to_cstring(path, context.temp_allocator), {.SYMLINK_NOFOLLOW}, {.MTIME}, &info)
	return info.mtime.sec
}

@(test)
copy_tree_keeps_contents_links_and_times :: proc(t: ^testing.T) {
	dir := make_scratch(t)
	defer delete(dir)
	defer os.remove_all(dir)

	source := path_in(dir, "source")
	os.make_directory(source)
	os.make_directory(path_in(source, "nested"))
	write_text(t, path_in(source, "a.txt"), "alpha")
	write_text(t, path_in(source, "nested/b.txt"), "beta")
	os.symlink("a.txt", path_in(source, "link"))
	old_time := [2]linux.Time_Spec{{time_sec = 1_000_000_000}, {time_sec = 1_000_000_000}}
	linux.utimensat(linux.AT_FDCWD, strings.clone_to_cstring(path_in(source, "a.txt"), context.temp_allocator), &old_time[0], {})

	progress: fs.Progress
	destination := path_in(dir, "copy")
	testing.expect_value(t, fs.copy_entry(source, destination, &progress), fs.Op_Error.NONE)
	testing.expect_value(t, read_text(path_in(destination, "a.txt")), "alpha")
	testing.expect_value(t, read_text(path_in(destination, "nested/b.txt")), "beta")
	testing.expect_value(t, mtime_of(path_in(destination, "a.txt")), 1_000_000_000)

	link_target, link_err := os.read_link(path_in(destination, "link"), context.temp_allocator)
	testing.expect(t, link_err == nil, "the link is copied as a link")
	testing.expect_value(t, link_target, "a.txt")
	testing.expect_value(t, progress.bytes_done, 9)

	// The original is untouched.
	testing.expect_value(t, read_text(path_in(source, "a.txt")), "alpha")

	// Never into itself.
	testing.expect_value(t, fs.copy_entry(source, path_in(source, "nested/inside"), nil), fs.Op_Error.INTO_ITSELF)
	testing.expect(t, !fs.exists(path_in(source, "nested/inside")))

	// Never over something that exists.
	testing.expect_value(t, fs.copy_entry(path_in(source, "a.txt"), path_in(destination, "a.txt"), nil), fs.Op_Error.EXISTS)
	testing.expect_value(t, read_text(path_in(destination, "a.txt")), "alpha")
}

@(test)
unique_names :: proc(t: ^testing.T) {
	dir := make_scratch(t)
	defer delete(dir)
	defer os.remove_all(dir)

	write_text(t, path_in(dir, "photo.jpg"), "x")
	write_text(t, path_in(dir, "photo (2).jpg"), "x")
	os.make_directory(path_in(dir, "folder"))
	write_text(t, path_in(dir, ".bashrc"), "x")

	got := fs.unique_destination(dir, "photo.jpg", context.temp_allocator)
	testing.expect_value(t, fs.base_name(got), "photo (3).jpg")
	got = fs.unique_destination(dir, "folder", context.temp_allocator)
	testing.expect_value(t, fs.base_name(got), "folder (2)")
	got = fs.unique_destination(dir, ".bashrc", context.temp_allocator)
	testing.expect_value(t, fs.base_name(got), ".bashrc (2)")
	got = fs.unique_destination(dir, "new.txt", context.temp_allocator)
	testing.expect_value(t, fs.base_name(got), "new.txt")
}

@(test)
create_rename_move_delete :: proc(t: ^testing.T) {
	dir := make_scratch(t)
	defer delete(dir)
	defer os.remove_all(dir)

	testing.expect_value(t, fs.make_directory(path_in(dir, "new")), fs.Op_Error.NONE)
	testing.expect_value(t, fs.make_directory(path_in(dir, "new")), fs.Op_Error.EXISTS)
	testing.expect_value(t, fs.create_empty_file(path_in(dir, "empty.txt")), fs.Op_Error.NONE)
	testing.expect_value(t, fs.create_empty_file(path_in(dir, "empty.txt")), fs.Op_Error.EXISTS)

	write_text(t, path_in(dir, "keep.txt"), "keep me")
	testing.expect_value(t, fs.rename_no_replace(path_in(dir, "empty.txt"), path_in(dir, "keep.txt")), fs.Op_Error.EXISTS)
	testing.expect_value(t, read_text(path_in(dir, "keep.txt")), "keep me")
	testing.expect_value(t, fs.rename_no_replace(path_in(dir, "empty.txt"), path_in(dir, "renamed.txt")), fs.Op_Error.NONE)

	testing.expect_value(t, fs.move_entry(path_in(dir, "keep.txt"), path_in(dir, "new/keep.txt"), nil), fs.Op_Error.NONE)
	testing.expect_value(t, read_text(path_in(dir, "new/keep.txt")), "keep me")
	testing.expect(t, !fs.exists(path_in(dir, "keep.txt")))
	testing.expect_value(t, fs.move_entry(path_in(dir, "new"), path_in(dir, "new/inner"), nil), fs.Op_Error.INTO_ITSELF)

	testing.expect_value(t, fs.delete_entry(path_in(dir, "new"), nil), fs.Op_Error.NONE)
	testing.expect(t, !fs.exists(path_in(dir, "new")))
}

@(test)
trash_writes_info_and_numbers_clashes :: proc(t: ^testing.T) {
	dir := make_scratch(t)
	defer delete(dir)
	defer os.remove_all(dir)

	trash := path_in(dir, "share/Trash")
	write_text(t, path_in(dir, "my notes.txt"), "first")
	date := "2026-10-12T14:03:00"
	testing.expect_value(t, fs.trash_entry(path_in(dir, "my notes.txt"), trash, date), fs.Op_Error.NONE)
	testing.expect(t, !fs.exists(path_in(dir, "my notes.txt")))
	testing.expect_value(t, read_text(path_in(trash, "files/my notes.txt")), "first")

	info := read_text(path_in(trash, "info/my notes.txt.trashinfo"))
	expected_path := fs.url_encode_path(path_in(dir, "my notes.txt"))
	testing.expect(t, strings.has_prefix(info, "[Trash Info]\n"), "trashinfo header")
	testing.expect(t, strings.contains(info, strings.concatenate({"Path=", expected_path, "\n"}, context.temp_allocator)), "trashinfo path")
	testing.expect(t, strings.contains(info, "%20"), "spaces are percent-encoded")
	testing.expect(t, strings.contains(info, "DeletionDate=2026-10-12T14:03:00\n"), "trashinfo date")

	// A second item with the same name gets its own slot.
	write_text(t, path_in(dir, "my notes.txt"), "second")
	testing.expect_value(t, fs.trash_entry(path_in(dir, "my notes.txt"), trash, date), fs.Op_Error.NONE)
	testing.expect_value(t, read_text(path_in(trash, "files/my notes.txt.2")), "second")
	testing.expect(t, fs.exists(path_in(trash, "info/my notes.txt.2.trashinfo")))

	testing.expect_value(t, fs.trash_entry(path_in(dir, "gone"), trash, date), fs.Op_Error.NOT_FOUND)
}

@(test)
jobs_run_in_order_and_report :: proc(t: ^testing.T) {
	dir := make_scratch(t)
	defer delete(dir)
	defer os.remove_all(dir)

	write_text(t, path_in(dir, "a.txt"), "a")
	os.make_directory(path_in(dir, "into"))

	runner: fs.Job_Runner
	fs.job_runner_init(&runner)
	defer fs.job_runner_destroy(&runner)

	sources := []string{path_in(dir, "a.txt"), path_in(dir, "missing.txt")}
	fs.start_job(&runner, fs.job_create(.COPY, sources, path_in(dir, "into")))
	// Pasting into the same folder makes a numbered copy.
	fs.start_job(&runner, fs.job_create(.COPY, []string{path_in(dir, "a.txt")}, dir))

	finished: [dynamic]^fs.Job
	defer delete(finished)
	start := time.tick_now()
	for len(finished) < 2 && time.tick_since(start) < 3 * time.Second {
		fs.take_finished_jobs(&runner, &finished)
		time.sleep(time.Millisecond)
	}
	testing.expect_value(t, len(finished), 2)
	if len(finished) == 2 {
		first := finished[0]
		testing.expect_value(t, len(first.created), 1)
		testing.expect_value(t, len(first.failures), 1)
		if len(first.failures) == 1 do testing.expect_value(t, first.failures[0].error, fs.Op_Error.NOT_FOUND)
		testing.expect_value(t, read_text(path_in(dir, "into/a.txt")), "a")
		testing.expect_value(t, fs.base_name(finished[1].created[0]), "a (2).txt")
	}
	for job in finished do fs.job_destroy(job)
}
