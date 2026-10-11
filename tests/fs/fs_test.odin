package fs_test

import "core:os"
import "core:slice"
import "core:testing"
import "core:time"
import "../../src/fs"

// Builds a scratch directory full of the names and link shapes that break
// file managers, then checks the listing sees each one correctly.

AWKWARD_FILES :: [?]string{
	"plain.txt",
	"with space.txt",
	"new\nline",
	"-leading-dash",
	".hidden",
	"日本語のファイル.txt",
	"emoji 🎉.png",
	"CAPS.TXT",
}

make_scratch :: proc(t: ^testing.T) -> string {
	base, temp_err := os.temp_directory(context.temp_allocator)
	testing.expect(t, temp_err == nil)
	dir, err := os.make_directory_temp(base, "fm-test-*", context.allocator)
	testing.expect(t, err == nil, "scratch directory")
	return dir
}

write_file :: proc(t: ^testing.T, dir: string, name: string, size: int) {
	data := make([]u8, size, context.temp_allocator)
	err := os.write_entire_file(fs.join_path(dir, name, context.temp_allocator), data)
	testing.expectf(t, err == nil, "write %q: %v", name, err)
}

find_entry :: proc(listing: ^fs.Listing, name: string) -> (fs.Entry, bool) {
	for entry in listing.entries {
		if fs.entry_name(listing, entry) == name do return entry, true
	}
	return {}, false
}

@(test)
lists_awkward_names_and_links :: proc(t: ^testing.T) {
	dir := make_scratch(t)
	defer delete(dir)
	defer os.remove_all(dir)

	for name in AWKWARD_FILES do write_file(t, dir, name, 10)
	// Invalid UTF-8 is a legal Linux filename.
	invalid_utf8 := [5]u8{'b', 'a', 'd', 0xff, 0xfe}
	write_file(t, dir, string(invalid_utf8[:]), 3)
	write_file(t, dir, "big.bin", 4096)
	os.make_directory(fs.join_path(dir, "folder", context.temp_allocator))
	os.symlink("folder", fs.join_path(dir, "link-to-folder", context.temp_allocator))
	os.symlink("does-not-exist", fs.join_path(dir, "broken-link", context.temp_allocator))
	os.symlink("loop-b", fs.join_path(dir, "loop-a", context.temp_allocator))
	os.symlink("loop-a", fs.join_path(dir, "loop-b", context.temp_allocator))

	listing := fs.list_directory(dir)
	defer fs.listing_destroy(&listing)
	testing.expect_value(t, listing.error, fs.Listing_Error.NONE)
	testing.expect_value(t, len(listing.entries), len(AWKWARD_FILES) + 7)

	for name in AWKWARD_FILES {
		_, found := find_entry(&listing, name)
		testing.expectf(t, found, "missing %q", name)
	}

	hidden, _ := find_entry(&listing, ".hidden")
	testing.expect(t, .HIDDEN in hidden.flags)

	big, _ := find_entry(&listing, "big.bin")
	testing.expect_value(t, big.size, 4096)
	testing.expect_value(t, big.kind, fs.Entry_Kind.FILE)
	now := time.time_to_unix(time.now())
	testing.expect(t, big.modified > now - 60 && big.modified <= now + 1, "modified time is recent")

	folder, _ := find_entry(&listing, "folder")
	testing.expect_value(t, folder.kind, fs.Entry_Kind.DIRECTORY)

	link, _ := find_entry(&listing, "link-to-folder")
	testing.expect_value(t, link.kind, fs.Entry_Kind.DIRECTORY)
	testing.expect(t, .SYMLINK in link.flags)
	testing.expect(t, .BROKEN_LINK not_in link.flags)

	for name in ([]string{"broken-link", "loop-a", "loop-b"}) {
		entry, found := find_entry(&listing, name)
		testing.expectf(t, found, "missing %q", name)
		testing.expectf(t, .BROKEN_LINK in entry.flags, "%q should be a broken link", name)
	}
}

@(test)
reports_listing_errors :: proc(t: ^testing.T) {
	dir := make_scratch(t)
	defer delete(dir)
	defer os.remove_all(dir)

	missing := fs.list_directory(fs.join_path(dir, "nope", context.temp_allocator))
	defer fs.listing_destroy(&missing)
	testing.expect_value(t, missing.error, fs.Listing_Error.NOT_FOUND)

	write_file(t, dir, "file.txt", 1)
	not_dir := fs.list_directory(fs.join_path(dir, "file.txt", context.temp_allocator))
	defer fs.listing_destroy(&not_dir)
	testing.expect_value(t, not_dir.error, fs.Listing_Error.NOT_A_DIRECTORY)

	locked := fs.join_path(dir, "locked", context.temp_allocator)
	os.make_directory(locked)
	os.change_mode(locked, {})
	defer os.change_mode(locked, os.Permissions_Default_Directory)
	denied := fs.list_directory(locked)
	defer fs.listing_destroy(&denied)
	// Running as root ignores permissions, so only check when it applies.
	if os.get_uid() != 0 do testing.expect_value(t, denied.error, fs.Listing_Error.PERMISSION_DENIED)
}

@(test)
natural_sort_order :: proc(t: ^testing.T) {
	names := []string{"file10", "File2", "file1", "file01", "apple", "Banana", "file2b"}
	slice.sort_by(names, proc(a: string, b: string) -> bool {
		return fs.compare_natural(a, b) < 0
	})
	expected := []string{"apple", "Banana", "file1", "file01", "File2", "file2b", "file10"}
	testing.expectf(t, slice.equal(names, expected), "got %v", names)
}

@(test)
sort_folders_first_and_hidden :: proc(t: ^testing.T) {
	dir := make_scratch(t)
	defer delete(dir)
	defer os.remove_all(dir)

	write_file(t, dir, "b.txt", 300)
	write_file(t, dir, "a.txt", 100)
	write_file(t, dir, ".secret", 200)
	os.make_directory(fs.join_path(dir, "zeta", context.temp_allocator))

	listing := fs.list_directory(dir)
	defer fs.listing_destroy(&listing)
	order: [dynamic]u32
	defer delete(order)

	names_in_order :: proc(listing: ^fs.Listing, order: []u32) -> []string {
		names := make([]string, len(order), context.temp_allocator)
		for index, i in order do names[i] = fs.entry_name(listing, listing.entries[index])
		return names
	}

	fs.sort_entries(&listing, &order, {key = .NAME, folders_first = true}, false)
	testing.expectf(t, slice.equal(names_in_order(&listing, order[:]), []string{"zeta", "a.txt", "b.txt"}), "by name: %v", names_in_order(&listing, order[:]))

	fs.sort_entries(&listing, &order, {key = .SIZE, descending = true, folders_first = true}, true)
	got := names_in_order(&listing, order[:])
	testing.expectf(t, slice.equal(got, []string{"zeta", "b.txt", ".secret", "a.txt"}), "by size, descending, hidden shown: %v", got)
}

@(test)
path_helpers :: proc(t: ^testing.T) {
	testing.expect_value(t, fs.parent_path("/home/user/docs"), "/home/user")
	testing.expect_value(t, fs.parent_path("/home"), "/")
	testing.expect_value(t, fs.parent_path("/"), "/")
	testing.expect_value(t, fs.base_name("/home/user"), "user")
	testing.expect_value(t, fs.base_name("/"), "/")
	joined := fs.join_path("/", "etc", context.temp_allocator)
	testing.expect_value(t, joined, "/etc")
	testing.expect_value(t, fs.extension_of("archive.tar.gz"), "gz")
	testing.expect_value(t, fs.extension_of(".bashrc"), "")
}

@(test)
loader_returns_results_for_latest_request :: proc(t: ^testing.T) {
	dir := make_scratch(t)
	defer delete(dir)
	defer os.remove_all(dir)
	write_file(t, dir, "one.txt", 1)

	loader: fs.Loader
	fs.loader_init(&loader)
	defer fs.loader_destroy(&loader)

	fs.request_listing(&loader, 7, 1, dir, {key = .NAME, folders_first = true}, false)
	results: [dynamic]fs.List_Result
	defer delete(results)
	deadline := time.tick_now()
	for len(results) == 0 && time.tick_since(deadline) < 2 * time.Second {
		fs.take_results(&loader, &results)
		time.sleep(time.Millisecond)
	}
	testing.expect_value(t, len(results), 1)
	if len(results) == 1 {
		testing.expect_value(t, results[0].owner, 7)
		testing.expect_value(t, results[0].generation, 1)
		testing.expect_value(t, len(results[0].listing.entries), 1)
		testing.expect(t, results[0].listing.has_order, "sorted on the worker")
		testing.expect_value(t, len(results[0].listing.order), 1)
		fs.listing_free(results[0].listing)
	}
}
