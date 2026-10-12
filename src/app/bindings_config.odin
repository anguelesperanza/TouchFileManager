package app

import "core:fmt"
import "core:os"
import "core:strings"
import "../fs"
import ui "../ui"

// Every key and button binding is read from a config file, so changing one
// never means editing source:
//
//     $XDG_CONFIG_HOME/touch-file-manager/bindings.ini   (or ~/.config/…)
//
// The first run writes the file with every default and comments listing the
// names, so there's always a complete, editable example. Actions missing
// from the file keep their defaults -- an older file still works when new
// actions are added. A [keyboard] line replaces only that action's keyboard
// bindings and a [gamepad] line only its gamepad ones.

CONFIG_DIRECTORY_NAME :: "touch-file-manager"
BINDINGS_FILE_NAME :: "bindings.ini"

Binding_Device :: enum u8 {
	KEYBOARD,
	GAMEPAD,
	MOUSE,
}

Binding_Devices :: bit_set[Binding_Device; u8]

// One bindable thing: its name in the file, a description for the file's
// comments, where its triggers live, and which sections may set it.
@(private)
Binding_Slot :: struct {
	name:        string,
	description: string,
	list:        ^ui.Trigger_List,
	devices:     Binding_Devices,
}

@(private)
binding_slots :: proc(a: ^App, ctx: ^ui.Context) -> [dynamic]Binding_Slot {
	slots := make([dynamic]Binding_Slot, context.temp_allocator)
	// Actions any device can trigger. Mouse bindings are for the extra
	// buttons (Back, Forward, Middle); left and right clicks belong to the
	// widgets under the pointer.
	both := Binding_Devices{.KEYBOARD, .GAMEPAD, .MOUSE}

	add :: proc(slots: ^[dynamic]Binding_Slot, name: string, description: string, list: ^ui.Trigger_List, devices: Binding_Devices) {
		append(slots, Binding_Slot{name = name, description = description, list = list, devices = devices})
	}

	add(&slots, "up", "Move focus or the cursor up", &ctx.nav_bindings[.UP], both)
	add(&slots, "down", "Move focus or the cursor down", &ctx.nav_bindings[.DOWN], both)
	add(&slots, "left", "Move focus left", &ctx.nav_bindings[.LEFT], both)
	add(&slots, "right", "Move focus right", &ctx.nav_bindings[.RIGHT], both)
	add(&slots, "activate", "Press the focused button, open the current file", &ctx.nav_bindings[.ACTIVATE], both)
	add(&slots, "cancel", "Clear the selection, close a menu", &ctx.nav_bindings[.CANCEL], both)
	add(&slots, "next_area", "Move focus to the next area", &ctx.nav_bindings[.NEXT_REGION], both)
	add(&slots, "previous_area", "Move focus to the previous area", &ctx.nav_bindings[.PREVIOUS_REGION], both)
	add(&slots, "context_menu", "Open the context menu", &ctx.nav_bindings[.CONTEXT_MENU], both)

	add(&slots, "area_jump_overlay", "Show the areas, to jump between them with the buttons below (toggle or hold: see area_jump_mode in [options])", &ctx.region_jump_activate, {.GAMEPAD})
	add(&slots, "area_jump_up", "While the area overlay is showing: jump to the area above", &ctx.region_jump_directions[.UP], {.GAMEPAD})
	add(&slots, "area_jump_down", "While the area overlay is showing: jump to the area below", &ctx.region_jump_directions[.DOWN], {.GAMEPAD})
	add(&slots, "area_jump_left", "While the area overlay is showing: jump to the area on the left", &ctx.region_jump_directions[.LEFT], {.GAMEPAD})
	add(&slots, "area_jump_right", "While the area overlay is showing: jump to the area on the right", &ctx.region_jump_directions[.RIGHT], {.GAMEPAD})
	area_names := [ui.MAX_NUMBERED_REGIONS]string{"area_1", "area_2", "area_3", "area_4", "area_5", "area_6", "area_7", "area_8", "area_9"}
	for i in 0 ..< ui.MAX_NUMBERED_REGIONS {
		description := "Jump to an area by number (hold its modifier alone to see the numbers)"
		if i > 0 do description = ""
		add(&slots, area_names[i], description, &ctx.area_bindings[i], {.KEYBOARD})
	}

	add(&slots, "go_up", "Go to the parent folder", &a.bindings[.GO_UP], both)
	add(&slots, "go_home", "Go to the home folder", &a.bindings[.GO_HOME], both)
	add(&slots, "go_back", "Go back to the previous folder", &a.bindings[.GO_BACK], both)
	add(&slots, "go_forward", "Go forward again after going back", &a.bindings[.GO_FORWARD], both)
	add(&slots, "refresh", "Reload the current folder", &a.bindings[.REFRESH], both)
	add(&slots, "edit_path", "Type a path into the path bar", &a.bindings[.EDIT_PATH], both)
	add(&slots, "new_tab", "Open a new tab in the current folder", &a.bindings[.NEW_TAB], both)
	add(&slots, "close_tab", "Close the current tab", &a.bindings[.CLOSE_TAB], both)
	add(&slots, "next_tab", "Switch to the next tab", &a.bindings[.NEXT_TAB], both)
	add(&slots, "previous_tab", "Switch to the previous tab", &a.bindings[.PREVIOUS_TAB], both)
	add(&slots, "move_tab_left", "Move the current tab left", &a.bindings[.MOVE_TAB_LEFT], both)
	add(&slots, "move_tab_right", "Move the current tab right", &a.bindings[.MOVE_TAB_RIGHT], both)
	add(&slots, "split_right", "Split the current view side by side", &a.bindings[.SPLIT_RIGHT], both)
	add(&slots, "split_down", "Split the current view top and bottom", &a.bindings[.SPLIT_DOWN], both)
	add(&slots, "close_view", "Close the current view of a split", &a.bindings[.CLOSE_VIEW], both)
	add(&slots, "next_view", "Move to the next view of a split", &a.bindings[.NEXT_VIEW], both)
	add(&slots, "copy", "Copy the selected items (or the one under the cursor)", &a.bindings[.COPY], both)
	add(&slots, "cut", "Cut the selected items, to move them with paste", &a.bindings[.CUT], both)
	add(&slots, "paste", "Paste copied or cut items into the current folder", &a.bindings[.PASTE], both)
	add(&slots, "rename", "Rename the item", &a.bindings[.RENAME], both)
	add(&slots, "new_folder", "Create a new folder here", &a.bindings[.NEW_FOLDER], both)
	add(&slots, "new_file", "Create a new empty file here", &a.bindings[.NEW_FILE], both)
	add(&slots, "trash", "Move the selected items to the trash", &a.bindings[.TRASH], both)
	add(&slots, "delete_permanently", "Delete the selected items permanently (asks first)", &a.bindings[.DELETE_PERMANENTLY], both)
	add(&slots, "focus_actions", "Move focus to the action bar (copy, paste, rename, trash…)", &a.bindings[.FOCUS_ACTIONS], both)
	add(&slots, "toggle_hidden", "Show or hide hidden files", &a.bindings[.TOGGLE_HIDDEN], both)
	add(&slots, "select_all", "Select every item", &a.bindings[.SELECT_ALL], both)
	add(&slots, "toggle_selected", "Select or deselect the current item", &a.bindings[.TOGGLE_SELECTED], both)
	add(&slots, "extend_selection_up", "Extend the selection up", &a.bindings[.EXTEND_UP], both)
	add(&slots, "extend_selection_down", "Extend the selection down", &a.bindings[.EXTEND_DOWN], both)
	add(&slots, "page_up", "Move the cursor up a page", &a.bindings[.PAGE_UP], both)
	add(&slots, "page_down", "Move the cursor down a page", &a.bindings[.PAGE_DOWN], both)
	add(&slots, "first_item", "Move the cursor to the first item", &a.bindings[.FIRST], both)
	add(&slots, "last_item", "Move the cursor to the last item", &a.bindings[.LAST], both)
	add(&slots, "zoom_in", "Make everything bigger", &a.bindings[.ZOOM_IN], both)
	add(&slots, "zoom_out", "Make everything smaller", &a.bindings[.ZOOM_OUT], both)
	add(&slots, "zoom_reset", "Reset the zoom", &a.bindings[.ZOOM_RESET], both)
	return slots
}

bindings_path :: proc(allocator := context.allocator) -> string {
	base := os.get_env("XDG_CONFIG_HOME", context.temp_allocator)
	if len(base) == 0 do base = fs.join_path(fs.home_directory(context.temp_allocator), ".config", context.temp_allocator)
	directory := fs.join_path(base, CONFIG_DIRECTORY_NAME, context.temp_allocator)
	return fs.join_path(directory, BINDINGS_FILE_NAME, allocator)
}

// Loads the bindings file, or writes one with the defaults if there isn't
// one yet. Returns one message per problem found (bad names, unknown keys);
// the rest of the file still applies.
load_bindings :: proc(a: ^App, ctx: ^ui.Context, path: string) -> [dynamic]string {
	problems := make([dynamic]string)
	// Whatever happens below -- even writing a fresh file on the first run,
	// when nothing is applied -- the chord buttons (View, LT, RT…) must be
	// registered, or every View+… chord arrives as two plain presses.
	defer update_gamepad_modifiers(a, ctx)
	data, err := os.read_entire_file_from_path(path, context.temp_allocator)
	if err != nil {
		write_err := write_default_bindings(a, ctx, path)
		if write_err != nil {
			append(&problems, fmt.aprintf("couldn't write the default bindings to %s: %v", path, write_err))
		}
		return problems
	}
	apply_bindings_text(a, ctx, string(data), &problems)
	return problems
}

// Parses bindings text and applies it on top of the current bindings.
apply_bindings_text :: proc(a: ^App, ctx: ^ui.Context, text: string, problems: ^[dynamic]string) {
	defer update_gamepad_modifiers(a, ctx)
	slots := binding_slots(a, ctx)
	section: Maybe(Binding_Device)
	in_options := false
	line_number := 0
	remaining := text
	for raw_line in strings.split_lines_iterator(&remaining) {
		line_number += 1
		line := strings.trim_space(raw_line)
		comment := strings.index_byte(line, '#')
		if comment >= 0 do line = strings.trim_space(line[:comment])
		if len(line) == 0 do continue

		if strings.has_prefix(line, "[") && strings.has_suffix(line, "]") {
			name := strings.trim_space(line[1:len(line) - 1])
			in_options = false
			switch {
			case strings.equal_fold(name, "options"):
				section = nil
				in_options = true
			case strings.equal_fold(name, "keyboard"):
				section = .KEYBOARD
			case strings.equal_fold(name, "gamepad"):
				section = .GAMEPAD
			case strings.equal_fold(name, "mouse"):
				section = .MOUSE
			case:
				section = nil
				append(problems, fmt.aprintf("line %d: unknown section [%s] (expected [options], [keyboard], [gamepad] or [mouse])", line_number, name))
			}
			continue
		}

		if in_options {
			apply_option_line(ctx, line, line_number, problems)
			continue
		}
		device, in_section := section.?
		if !in_section {
			append(problems, fmt.aprintf("line %d: binding outside a [keyboard], [gamepad] or [mouse] section", line_number))
			continue
		}
		equals := strings.index_byte(line, '=')
		if equals < 0 {
			append(problems, fmt.aprintf("line %d: expected `name = binding, binding`", line_number))
			continue
		}
		name := strings.trim_space(line[:equals])
		value := strings.trim_space(line[equals + 1:])

		slot_index := -1
		for slot, i in slots {
			if strings.equal_fold(slot.name, name) do slot_index = i
		}
		if slot_index < 0 {
			append(problems, fmt.aprintf("line %d: unknown action %q", line_number, name))
			continue
		}
		slot := slots[slot_index]
		if device not_in slot.devices {
			append(problems, fmt.aprintf("line %d: %s can't be bound in this section", line_number, name))
			continue
		}
		apply_binding_line(slot, device, value, line_number, problems)
	}
}

// Replaces one device's triggers on a slot, keeping the other device's.
@(private)
apply_binding_line :: proc(slot: Binding_Slot, device: Binding_Device, value: string, line_number: int, problems: ^[dynamic]string) {
	kept := make([dynamic]ui.Trigger, context.temp_allocator)
	for trigger in slot.list {
		if trigger == nil do continue
		if trigger_device(trigger) != device do append(&kept, trigger)
	}

	// An empty value unbinds the action on this device.
	if len(value) > 0 {
		for part in strings.split(value, ",", context.temp_allocator) {
			text := strings.trim_space(part)
			if len(text) == 0 do continue
			switch device {
			case .KEYBOARD:
				chord, ok := ui.parse_key_chord(text)
				if ok {
					append(&kept, chord)
				} else {
					append(problems, fmt.aprintf("line %d: unknown key %q", line_number, text))
				}
			case .GAMEPAD:
				trigger, ok := ui.parse_gamepad_trigger(text)
				if ok {
					append(&kept, trigger)
				} else {
					append(problems, fmt.aprintf("line %d: unknown gamepad button %q", line_number, text))
				}
			case .MOUSE:
				button, ok := ui.parse_mouse_button(text)
				if ok && button != .LEFT {
					append(&kept, button)
				} else {
					append(problems, fmt.aprintf("line %d: unknown or unbindable mouse button %q", line_number, text))
				}
			}
		}
	}

	if len(kept) > ui.MAX_TRIGGERS_PER_ACTION {
		append(problems, fmt.aprintf("line %d: %s has more than %d bindings; the extras are ignored", line_number, slot.name, ui.MAX_TRIGGERS_PER_ACTION))
	}
	slot.list^ = ui.triggers(..kept[:])
}

// The full file for the current bindings, with comments. Written on first
// run; also handy for resetting.
bindings_text :: proc(a: ^App, ctx: ^ui.Context, allocator := context.allocator) -> string {
	slots := binding_slots(a, ctx)
	b := strings.builder_make(allocator)

	strings.write_string(&b, `# Touch File Manager key and button bindings.
#
# Edit, then restart the app to apply. Delete this file to get the defaults
# back (it's rewritten on the next start). Actions left out keep their
# defaults.
#
# Several bindings for one action are separated by commas. An empty value
# (` + "`refresh =`" + `) unbinds the action on that device.
#
# Keyboard: modifiers Ctrl, Shift, Alt, Super, joined with + (Ctrl+Shift+Tab).
#   Keys: A-Z 0-9 F1-F12 Up Down Left Right Enter Escape Tab Backspace Delete
#         Insert Home End PageUp PageDown Space Minus Equal Menu
#
# Gamepad: Xbox names, by position -- A is the bottom face button on any pad
# (Cross on PlayStation), Y the top one.
#   Buttons: A B X Y LB RB LT RT View Menu Guide LS RS
#            DpadUp DpadDown DpadLeft DpadRight
#   Chords: Modifier+Button, e.g. View+RB. While a modifier is held, buttons
#   do their chord action instead of their usual one; tapped on its own, the
#   modifier does its usual job.
#
# Mouse: Back Forward Middle Right (the side buttons are Back and Forward).
`)

	strings.write_string(&b, "\n[options]\n")
	strings.write_string(&b, "\n# How the controller's area overlay (area_jump_overlay) behaves:\n")
	strings.write_string(&b, "#   toggle -- press it to show the areas, press it again to hide them\n")
	strings.write_string(&b, "#   hold   -- the areas show only while it's held\n")
	mode := "toggle"
	if ctx.region_jump_mode == .HOLD do mode = "hold"
	fmt.sbprintf(&b, "area_jump_mode = %s\n", mode)

	for device in Binding_Device {
		section := "keyboard"
		if device == .GAMEPAD do section = "gamepad"
		if device == .MOUSE do section = "mouse"
		fmt.sbprintf(&b, "\n[%s]\n", section)
		if device == .MOUSE {
			strings.write_string(&b, "# Any action above can be bound here too, e.g. `refresh = Middle`.\n")
		}
		for slot in slots {
			if device not_in slot.devices do continue
			// Most actions have no mouse binding; listing them all empty
			// would bury the few that do.
			if device == .MOUSE && !has_device_trigger(slot.list^, .MOUSE) do continue
			if len(slot.description) > 0 do fmt.sbprintf(&b, "\n# %s\n", slot.description)
			fmt.sbprintf(&b, "%s = ", slot.name)
			first := true
			for trigger in slot.list {
				if trigger == nil || trigger_device(trigger) != device do continue
				if !first do strings.write_string(&b, ", ")
				strings.write_string(&b, ui.trigger_to_string(trigger, context.temp_allocator))
				first = false
			}
			strings.write_byte(&b, '\n')
		}
	}
	return strings.to_string(b)
}

@(private)
write_default_bindings :: proc(a: ^App, ctx: ^ui.Context, path: string) -> os.Error {
	directory := fs.parent_path(path)
	make_err := os.make_directory_all(directory)
	if make_err != nil && make_err != .Exist do return make_err
	text := bindings_text(a, ctx, context.temp_allocator)
	return os.write_entire_file(path, transmute([]u8)text)
}

@(private)
trigger_device :: proc(trigger: ui.Trigger) -> Binding_Device {
	switch _ in trigger {
	case ui.Key_Chord:
		return .KEYBOARD
	case ui.Gamepad_Button, ui.Gamepad_Chord:
		return .GAMEPAD
	case ui.Mouse_Button:
		return .MOUSE
	}
	return .KEYBOARD
}

// Both buttons of every chord join the gamepad layer, so a chord works in
// either order and its first button doesn't fire its own job on the way.
// Call after any change to bindings.
update_gamepad_modifiers :: proc(a: ^App, ctx: ^ui.Context) {
	modifiers: ui.Gamepad_Buttons
	for slot in binding_slots(a, ctx) {
		for trigger in slot.list {
			chord, is_chord := trigger.(ui.Gamepad_Chord)
			if is_chord do modifiers += {chord.modifier, chord.button}
		}
	}
	ctx.gamepad_modifiers = modifiers
}

@(private)
has_device_trigger :: proc(list: ui.Trigger_List, device: Binding_Device) -> bool {
	for trigger in list {
		if trigger != nil && trigger_device(trigger) == device do return true
	}
	return false
}

// One `name = value` line from [options].
@(private)
apply_option_line :: proc(ctx: ^ui.Context, line: string, line_number: int, problems: ^[dynamic]string) {
	equals := strings.index_byte(line, '=')
	if equals < 0 {
		append(problems, fmt.aprintf("line %d: expected `name = value`", line_number))
		return
	}
	name := strings.trim_space(line[:equals])
	value := strings.trim_space(line[equals + 1:])
	switch {
	case strings.equal_fold(name, "area_jump_mode"):
		switch {
		case strings.equal_fold(value, "toggle"):
			ctx.region_jump_mode = .TOGGLE
		case strings.equal_fold(value, "hold"):
			ctx.region_jump_mode = .HOLD
		case:
			append(problems, fmt.aprintf("line %d: area_jump_mode is `toggle` or `hold`, not %q", line_number, value))
		}
	case:
		append(problems, fmt.aprintf("line %d: unknown option %q", line_number, name))
	}
}
