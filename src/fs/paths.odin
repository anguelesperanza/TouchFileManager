package fs

import "core:os"
import "core:strings"

// Path helpers and the standard places. Paths are always absolute and never
// end in a slash, except "/" itself.

join_path :: proc(directory: string, name: string, allocator := context.allocator) -> string {
	if directory == "/" do return strings.concatenate({"/", name}, allocator)
	return strings.concatenate({directory, "/", name}, allocator)
}

// The parent of "/" is "/".
parent_path :: proc(path: string) -> string {
	slash := strings.last_index_byte(path, '/')
	if slash <= 0 do return "/"
	return path[:slash]
}

// The last component, or "/" for the root.
base_name :: proc(path: string) -> string {
	if path == "/" do return "/"
	slash := strings.last_index_byte(path, '/')
	return path[slash + 1:]
}

home_directory :: proc(allocator := context.allocator) -> string {
	home := os.get_env("HOME", allocator)
	if len(home) == 0 do return strings.clone("/", allocator)
	return home
}

Place :: struct {
	name: string,
	path: string,
}

// Home, the XDG user folders that exist, and the filesystem root. Folder
// names come from ~/.config/user-dirs.dirs, so they follow the user's
// language and any folders they've moved.
load_places :: proc(allocator := context.allocator) -> [dynamic]Place {
	places := make([dynamic]Place, allocator)
	home := home_directory(allocator)
	append(&places, Place{name = strings.clone("Home", allocator), path = home})

	user_dirs := [?]struct {
		key:     string,
		name:    string,
		default: string,
	}{
		{"XDG_DESKTOP_DIR", "Desktop", "Desktop"},
		{"XDG_DOCUMENTS_DIR", "Documents", "Documents"},
		{"XDG_DOWNLOAD_DIR", "Downloads", "Downloads"},
		{"XDG_MUSIC_DIR", "Music", "Music"},
		{"XDG_PICTURES_DIR", "Pictures", "Pictures"},
		{"XDG_VIDEOS_DIR", "Videos", "Videos"},
	}

	config_path := join_path(home, ".config/user-dirs.dirs", context.temp_allocator)
	config, read_err := os.read_entire_file_from_path(config_path, context.temp_allocator)
	config_text := ""
	if read_err == nil do config_text = string(config)

	for dir in user_dirs {
		path := lookup_user_dir(config_text, dir.key, home)
		if len(path) == 0 do path = join_path(home, dir.default, context.temp_allocator)
		// XDG sets unused folders to $HOME itself; don't list Home twice.
		if path == home do continue
		if !os.is_dir(path) do continue
		append(&places, Place{name = strings.clone(dir.name, allocator), path = strings.clone(path, allocator)})
	}

	append(&places, Place{name = strings.clone("Root", allocator), path = strings.clone("/", allocator)})
	return places
}

// Reads one line like XDG_DOWNLOAD_DIR="$HOME/Downloads" from the
// user-dirs.dirs text. Returns "" when the key isn't there.
@(private)
lookup_user_dir :: proc(config: string, key: string, home: string) -> string {
	text := config
	for line in strings.split_lines_iterator(&text) {
		trimmed := strings.trim_space(line)
		if !strings.has_prefix(trimmed, key) do continue
		rest := strings.trim_space(trimmed[len(key):])
		if !strings.has_prefix(rest, "=") do continue
		value := strings.trim_space(rest[1:])
		value = strings.trim(value, "\"")
		if strings.has_prefix(value, "$HOME") {
			value = strings.concatenate({home, value[len("$HOME"):]}, context.temp_allocator)
		}
		return strings.trim_right(value, "/")
	}
	return ""
}

// "~" or "~/x" -> the home folder; anything else unchanged.
expand_home :: proc(path: string, home: string, allocator := context.allocator) -> string {
	if path == "~" do return strings.clone(home, allocator)
	if strings.has_prefix(path, "~/") do return join_path(home, path[2:], allocator)
	return strings.clone(path, allocator)
}

// Turns what someone typed into a clean absolute path: expands "~", makes a
// relative path relative to `base`, and resolves "." and "..", duplicate
// slashes and a trailing slash. Purely textual -- symlinks are left as
// they are, which is what you want for "../": back where you came from.
resolve_path :: proc(typed: string, base: string, home: string, allocator := context.allocator) -> string {
	expanded := expand_home(typed, home, context.temp_allocator)
	if !strings.has_prefix(expanded, "/") do expanded = join_path(base, expanded, context.temp_allocator)

	parts := make([dynamic]string, context.temp_allocator)
	rest := expanded
	for part in strings.split_iterator(&rest, "/") {
		switch part {
		case "", ".":
			continue
		case "..":
			if len(parts) > 0 do pop(&parts)
		case:
			append(&parts, part)
		}
	}
	if len(parts) == 0 do return strings.clone("/", allocator)

	builder := strings.builder_make(allocator)
	for part in parts {
		strings.write_byte(&builder, '/')
		strings.write_string(&builder, part)
	}
	return strings.to_string(builder)
}
