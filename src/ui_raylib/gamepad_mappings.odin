package ui_raylib

import "core:fmt"
import "core:os"
import "core:path/filepath"
import "core:strconv"
import "core:strings"
import rl "vendor:raylib"

// GLFW (raylib's desktop backend) only reports buttons for controllers listed
// in its built-in mapping database. Anything else -- like the PDP "Generic
// X-Box pad" this was found with -- shows up as connected, but every button
// reads as up, forever. SDL avoids this by guessing a mapping from the
// device's capabilities; GLFW doesn't, so we do it here.
//
// Most Linux gamepad drivers follow the kernel's standard gamepad layout
// (Documentation/input/gamepad.rst): BTN_SOUTH for the bottom face button,
// ABS_X/ABS_Y for the left stick, and so on. For each joystick we read its
// ids and capabilities from sysfs and generate an SDL-format mapping for
// that layout. SDL_GAMECONTROLLERCONFIG (which Steam sets) is applied after,
// so a known-good mapping always wins over our guess.

@(private = "file")
BTN_MISC :: 0x100
@(private = "file")
KEY_COUNT :: 0x300
@(private = "file")
ABS_COUNT :: 0x40
@(private = "file")
BTN_SOUTH :: 0x130
@(private = "file")
BTN_EAST :: 0x131
@(private = "file")
BTN_NORTH :: 0x133
@(private = "file")
BTN_WEST :: 0x134
@(private = "file")
BTN_TL :: 0x136
@(private = "file")
BTN_TR :: 0x137
@(private = "file")
BTN_TL2 :: 0x138
@(private = "file")
BTN_TR2 :: 0x139
@(private = "file")
BTN_SELECT :: 0x13a
@(private = "file")
BTN_START :: 0x13b
@(private = "file")
BTN_MODE :: 0x13c
@(private = "file")
BTN_THUMBL :: 0x13d
@(private = "file")
BTN_THUMBR :: 0x13e
@(private = "file")
BTN_DPAD_UP :: 0x220
@(private = "file")
BTN_DPAD_DOWN :: 0x221
@(private = "file")
BTN_DPAD_LEFT :: 0x222
@(private = "file")
BTN_DPAD_RIGHT :: 0x223
@(private = "file")
ABS_X :: 0x00
@(private = "file")
ABS_Y :: 0x01
@(private = "file")
ABS_Z :: 0x02
@(private = "file")
ABS_RX :: 0x03
@(private = "file")
ABS_RY :: 0x04
@(private = "file")
ABS_RZ :: 0x05
@(private = "file")
ABS_HAT0X :: 0x10
@(private = "file")
ABS_HAT3Y :: 0x17

@(private = "file")
Capabilities :: struct {
	keys: [KEY_COUNT / 64]u64,
	axes: [ABS_COUNT / 64]u64,
}

// Generates mappings for every joystick present and hands them to raylib.
// Called again whenever a new gamepad appears, since GLFW only consults
// mappings for devices it already knows about.
load_gamepad_mappings :: proc() {
	builder := strings.builder_make(context.temp_allocator)

	entries, err := os.read_directory_by_path("/sys/class/input", -1, context.temp_allocator)
	if err == nil {
		for entry in entries {
			if !strings.has_prefix(entry.name, "js") do continue
			device_dir := fmt.tprintf("/sys/class/input/%s/device", entry.name)
			mapping, ok := generate_mapping(device_dir)
			if ok {
				strings.write_string(&builder, mapping)
				strings.write_byte(&builder, '\n')
			}
		}
	}

	steam_mappings := os.get_env("SDL_GAMECONTROLLERCONFIG", context.temp_allocator)
	if len(steam_mappings) > 0 {
		strings.write_string(&builder, steam_mappings)
		strings.write_byte(&builder, '\n')
	}

	if strings.builder_len(builder) == 0 do return
	when #config(DEBUG_INPUT, false) {
		fmt.printf("gamepad mappings:\n%s", strings.to_string(builder))
	}
	mappings := strings.clone_to_cstring(strings.to_string(builder), context.temp_allocator)
	rl.SetGamepadMappings(mappings)
}

@(private = "file")
generate_mapping :: proc(device_dir: string) -> (mapping: string, ok: bool) {
	bus_type := read_sysfs_hex(device_dir, "id/bustype")
	vendor := read_sysfs_hex(device_dir, "id/vendor")
	product := read_sysfs_hex(device_dir, "id/product")
	version := read_sysfs_hex(device_dir, "id/version")
	// GLFW builds a different, name-based GUID when any of these is zero.
	// Those devices are rare and not worth matching.
	if vendor == 0 || product == 0 || version == 0 do return "", false

	capabilities: Capabilities
	parse_bitmap(read_sysfs_text(device_dir, "capabilities/key"), capabilities.keys[:])
	parse_bitmap(read_sysfs_text(device_dir, "capabilities/abs"), capabilities.axes[:])
	// Without BTN_SOUTH this isn't a standard-layout gamepad (it may be a
	// flight stick or wheel), and guessing would produce nonsense.
	if !has_bit(capabilities.keys[:], BTN_SOUTH) do return "", false

	// Must match GLFW's GUID format exactly, or the mapping is never used.
	guid := fmt.tprintf(
		"%02x%02x0000%02x%02x0000%02x%02x0000%02x%02x0000",
		bus_type & 0xff,
		bus_type >> 8,
		vendor & 0xff,
		vendor >> 8,
		product & 0xff,
		product >> 8,
		version & 0xff,
		version >> 8,
	)

	name, _ := strings.replace_all(read_sysfs_text(device_dir, "name"), ",", " ", context.temp_allocator)

	driver_path, link_err := os.read_link(fmt.tprintf("%s/device/driver", device_dir), context.temp_allocator)
	driver := ""
	if link_err == nil do driver = filepath.base(driver_path)

	// The kernel spec puts the left face button on BTN_WEST and the top one
	// on BTN_NORTH, but xpad (Xbox pads and their clones) predates that and
	// reports Xbox X as BTN_X, which is the same code as BTN_NORTH. SDL's
	// own database carries the same swap for xpad devices.
	x_code := BTN_WEST
	y_code := BTN_NORTH
	if driver == "xpad" {
		x_code = BTN_NORTH
		y_code = BTN_WEST
	}

	b := strings.builder_make(context.temp_allocator)
	fmt.sbprintf(&b, "%s,%s,platform:Linux,", guid, name)
	write_button(&b, &capabilities, "a", BTN_SOUTH)
	write_button(&b, &capabilities, "b", BTN_EAST)
	write_button(&b, &capabilities, "x", x_code)
	write_button(&b, &capabilities, "y", y_code)
	write_button(&b, &capabilities, "leftshoulder", BTN_TL)
	write_button(&b, &capabilities, "rightshoulder", BTN_TR)
	write_button(&b, &capabilities, "back", BTN_SELECT)
	write_button(&b, &capabilities, "start", BTN_START)
	write_button(&b, &capabilities, "guide", BTN_MODE)
	write_button(&b, &capabilities, "leftstick", BTN_THUMBL)
	write_button(&b, &capabilities, "rightstick", BTN_THUMBR)
	write_axis(&b, &capabilities, "leftx", ABS_X)
	write_axis(&b, &capabilities, "lefty", ABS_Y)
	write_axis(&b, &capabilities, "rightx", ABS_RX)
	write_axis(&b, &capabilities, "righty", ABS_RY)

	// Analog triggers where the pad has them, otherwise digital buttons.
	if has_bit(capabilities.axes[:], ABS_Z) {
		write_axis(&b, &capabilities, "lefttrigger", ABS_Z)
	} else {
		write_button(&b, &capabilities, "lefttrigger", BTN_TL2)
	}
	if has_bit(capabilities.axes[:], ABS_RZ) {
		write_axis(&b, &capabilities, "righttrigger", ABS_RZ)
	} else {
		write_button(&b, &capabilities, "righttrigger", BTN_TR2)
	}

	// The D-pad is either the first hat (xpad, most USB pads) or four
	// buttons (hid-nintendo, hid-steam).
	if has_bit(capabilities.axes[:], ABS_HAT0X) {
		strings.write_string(&b, "dpup:h0.1,dpright:h0.2,dpdown:h0.4,dpleft:h0.8,")
	} else {
		write_button(&b, &capabilities, "dpup", BTN_DPAD_UP)
		write_button(&b, &capabilities, "dpdown", BTN_DPAD_DOWN)
		write_button(&b, &capabilities, "dpleft", BTN_DPAD_LEFT)
		write_button(&b, &capabilities, "dpright", BTN_DPAD_RIGHT)
	}

	return strings.to_string(b), true
}

// GLFW numbers buttons by walking key codes upward from BTN_MISC and
// counting the ones the device has; button N is the Nth present code.
@(private = "file")
button_index :: proc(capabilities: ^Capabilities, code: int) -> int {
	if !has_bit(capabilities.keys[:], code) do return -1
	index := 0
	for c in BTN_MISC ..< code {
		if has_bit(capabilities.keys[:], c) do index += 1
	}
	return index
}

// Axes are numbered the same way, except that hat codes are reported as
// hats rather than axes and don't take an axis number.
@(private = "file")
axis_index :: proc(capabilities: ^Capabilities, code: int) -> int {
	if !has_bit(capabilities.axes[:], code) do return -1
	index := 0
	for c in 0 ..< code {
		if c >= ABS_HAT0X && c <= ABS_HAT3Y do continue
		if has_bit(capabilities.axes[:], c) do index += 1
	}
	return index
}

@(private = "file")
write_button :: proc(b: ^strings.Builder, capabilities: ^Capabilities, field: string, code: int) {
	index := button_index(capabilities, code)
	if index >= 0 do fmt.sbprintf(b, "%s:b%d,", field, index)
}

@(private = "file")
write_axis :: proc(b: ^strings.Builder, capabilities: ^Capabilities, field: string, code: int) {
	index := axis_index(capabilities, code)
	if index >= 0 do fmt.sbprintf(b, "%s:a%d,", field, index)
}

@(private = "file")
read_sysfs_text :: proc(device_dir: string, file: string) -> string {
	data, err := os.read_entire_file_from_path(fmt.tprintf("%s/%s", device_dir, file), context.temp_allocator)
	if err != nil do return ""
	return strings.trim_space(string(data))
}

@(private = "file")
read_sysfs_hex :: proc(device_dir: string, file: string) -> u64 {
	value, ok := strconv.parse_u64_of_base(read_sysfs_text(device_dir, file), 16)
	if !ok do return 0
	return value
}

// sysfs prints capability bitmaps as space-separated 64-bit hex words,
// most significant word first: "7cdb000000000000 0 0 0 0".
@(private = "file")
parse_bitmap :: proc(text: string, words: []u64) {
	fields := strings.fields(text, context.temp_allocator)
	count := len(fields)
	for field, i in fields {
		word_index := count - 1 - i
		if word_index >= len(words) do continue
		value, ok := strconv.parse_u64_of_base(field, 16)
		if ok do words[word_index] = value
	}
}

@(private = "file")
has_bit :: proc(words: []u64, code: int) -> bool {
	word := code / 64
	if word >= len(words) do return false
	return words[word] & (u64(1) << uint(code % 64)) != 0
}
