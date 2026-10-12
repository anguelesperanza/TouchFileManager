package app_test

import "core:os"
import "core:strings"
import "core:testing"
import "core:time"
import "../../src/app"
import "../../src/fs"
import ui "../../src/ui"

// File operations through the real app: keys, the action bar and the
// confirmation dialog, run against the harness's scratch folder.
//
// Harness folder: folder/ (with inside.txt), alpha.txt, beta.txt,
// gamma.txt, three.iso, zeta.md -- folders first, then by name.

wait_for_jobs :: proc(t: ^testing.T, h: ^Harness) {
	start := time.tick_now()
	for time.tick_since(start) < 3 * time.Second {
		run_frame(h)
		if fs.current_job(&h.state.jobs) == nil && fs.queued_job_count(&h.state.jobs) == 0 {
			// One more frame collects the finished job and starts refreshes.
			run_frames(h, 2)
			break
		}
		time.sleep(time.Millisecond)
	}
	wait_for_listing(t, h)
}

move_cursor_to :: proc(t: ^testing.T, h: ^Harness, name: string) {
	view := app.active_view(&h.state)
	position := app.find_position_by_name(view, name)
	testing.expectf(t, position >= 0, "%q is listed", name)
	app.move_cursor(view, position, false)
	run_frames(h, 2)
}

in_dir :: proc(h: ^Harness, name: string) -> string {
	return fs.join_path(h.dir, name, context.temp_allocator)
}

@(test)
copy_and_paste_with_keyboard :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	move_cursor_to(t, &h, "alpha.txt")
	press_key(&h, .C, {.CONTROL})
	testing.expect_value(t, len(h.state.clipboard.paths), 1)

	move_cursor_to(t, &h, "folder")
	press_key(&h, .ENTER)
	wait_for_listing(t, &h)
	press_key(&h, .V, {.CONTROL})
	wait_for_jobs(t, &h)

	testing.expect(t, fs.exists(in_dir(&h, "folder/alpha.txt")), "pasted")
	testing.expect(t, fs.exists(in_dir(&h, "alpha.txt")), "the original stays")
	testing.expect_value(t, cursor_name(&h), "alpha.txt")

	// Pasting again into the same place keeps both: "alpha (2).txt".
	press_key(&h, .V, {.CONTROL})
	wait_for_jobs(t, &h)
	testing.expect(t, fs.exists(in_dir(&h, "folder/alpha (2).txt")), "a numbered copy, never an overwrite")
}

@(test)
cut_and_paste_moves :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	move_cursor_to(t, &h, "beta.txt")
	press_key(&h, .DOWN, {.SHIFT})
	press_key(&h, .X, {.CONTROL})
	testing.expect_value(t, len(h.state.clipboard.paths), 2)

	move_cursor_to(t, &h, "folder")
	press_key(&h, .ENTER)
	wait_for_listing(t, &h)
	press_key(&h, .V, {.CONTROL})
	wait_for_jobs(t, &h)

	testing.expect(t, fs.exists(in_dir(&h, "folder/beta.txt")), "beta moved")
	testing.expect(t, fs.exists(in_dir(&h, "folder/gamma.txt")), "gamma moved")
	testing.expect(t, !fs.exists(in_dir(&h, "beta.txt")), "beta gone from the original folder")
	testing.expect_value(t, len(h.state.clipboard.paths), 0)
}

@(test)
rename_with_f2 :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	move_cursor_to(t, &h, "beta.txt")
	press_key(&h, .F2)
	testing.expect_value(t, h.state.entry.purpose, app.Entry_Purpose.RENAME)
	// The caret starts before the extension.
	testing.expect_value(t, h.state.entry.field.caret, len("beta"))
	type_text(&h, "-two")
	press_key(&h, .ENTER)
	wait_for_jobs(t, &h)
	testing.expect(t, fs.exists(in_dir(&h, "beta-two.txt")), "renamed")
	testing.expect(t, !fs.exists(in_dir(&h, "beta.txt")))
	testing.expect_value(t, cursor_name(&h), "beta-two.txt")

	// Renaming onto an existing name is refused; both files survive.
	move_cursor_to(t, &h, "alpha.txt")
	press_key(&h, .F2)
	press_key(&h, .A, {.CONTROL})
	type_text(&h, "gamma.txt")
	press_key(&h, .ENTER)
	wait_for_jobs(t, &h)
	testing.expect(t, fs.exists(in_dir(&h, "alpha.txt")))
	testing.expect(t, fs.exists(in_dir(&h, "gamma.txt")))
	testing.expect(t, strings.contains(h.state.message, "already exists"), "says why")

	// Escape cancels without renaming.
	press_key(&h, .F2)
	type_text(&h, "zzz")
	press_key(&h, .ESCAPE)
	testing.expect_value(t, h.state.entry.purpose, app.Entry_Purpose.NONE)
	testing.expect(t, fs.exists(in_dir(&h, "alpha.txt")))
}

@(test)
new_folder_goes_straight_into_rename :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	press_key(&h, .N, {.CONTROL, .SHIFT})
	wait_for_jobs(t, &h)
	run_frames(&h, 2)
	testing.expect(t, fs.is_directory(in_dir(&h, "New Folder")), "created")
	testing.expect_value(t, h.state.entry.purpose, app.Entry_Purpose.RENAME)
	testing.expect_value(t, h.state.entry.rename_name, "New Folder")

	press_key(&h, .A, {.CONTROL})
	type_text(&h, "Projects")
	press_key(&h, .ENTER)
	wait_for_jobs(t, &h)
	testing.expect(t, fs.is_directory(in_dir(&h, "Projects")))
}

@(test)
delete_key_moves_to_trash :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	// A scratch trash, never the real one.
	// Cloned: in_dir's temp string would be freed by the next frame.
	data := strings.clone(in_dir(&h, "data"))
	defer delete(data)
	os.make_directory(data)
	os.set_env("XDG_DATA_HOME", data)
	defer os.unset_env("XDG_DATA_HOME")

	move_cursor_to(t, &h, "zeta.md")
	press_key(&h, .DELETE)
	wait_for_jobs(t, &h)
	testing.expect(t, !fs.exists(in_dir(&h, "zeta.md")), "gone from the folder")
	testing.expect(t, fs.exists(fs.join_path(data, "Trash/files/zeta.md", context.temp_allocator)), "in the trash")
	testing.expect(t, fs.exists(fs.join_path(data, "Trash/info/zeta.md.trashinfo", context.temp_allocator)), "with its info")
}

@(test)
permanent_delete_asks_first :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	move_cursor_to(t, &h, "three.iso")
	press_key(&h, .DELETE, {.SHIFT})
	testing.expect_value(t, len(h.state.pending_delete), 1)
	testing.expect(t, ui.modal_open(&h.ctx), "the dialog is up")

	// Enter on the default button (Cancel) does nothing destructive.
	press_key(&h, .ENTER)
	testing.expect_value(t, len(h.state.pending_delete), 0)
	testing.expect(t, fs.exists(in_dir(&h, "three.iso")))

	// Arrow keys can't leave the dialog; Right reaches Delete.
	press_key(&h, .DELETE, {.SHIFT})
	press_key(&h, .UP)
	press_key(&h, .LEFT)
	press_key(&h, .RIGHT)
	press_key(&h, .ENTER)
	wait_for_jobs(t, &h)
	testing.expect(t, !fs.exists(in_dir(&h, "three.iso")), "deleted after confirming")
}

@(test)
controller_reaches_file_actions :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	h.input.gamepad_connected = true
	press_pad(&h, .DPAD_DOWN)

	// Y jumps to the action bar; its first button is "New folder".
	press_pad(&h, .FACE_UP)
	press_pad(&h, .FACE_DOWN)
	wait_for_jobs(t, &h)
	run_frames(&h, 3)
	testing.expect(t, fs.is_directory(in_dir(&h, "New Folder")), "A on New folder created one")
	testing.expect_value(t, h.state.entry.purpose, app.Entry_Purpose.RENAME)
	testing.expect(t, h.state.entry.show_keyboard, "the on-screen keyboard is up for the new name")

	// B keeps the default name.
	press_pad(&h, .FACE_RIGHT)
	testing.expect_value(t, h.state.entry.purpose, app.Entry_Purpose.NONE)
}

keyboard_has_focus :: proc(h: ^Harness) -> bool {
	region := ui.focused_region(&h.ctx)
	return region != 0 && region == h.state.entry.keyboard.region_id
}

@(test)
on_screen_keyboard_takes_focus_whenever_it_opens :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	app.update_gamepad_modifiers(&h.state, &h.ctx)
	h.input.gamepad_connected = true
	press_pad(&h, .DPAD_DOWN)

	// 1. Path editing from the controller (View+Menu).
	h.input.gamepad_down = {.SELECT}
	run_frame(&h)
	press_pad(&h, .START, {.SELECT})
	h.input.gamepad_down = {}
	run_frames(&h, 3)
	testing.expect(t, h.state.entry.show_keyboard, "path: keyboard shown")
	testing.expect(t, keyboard_has_focus(&h), "path: keyboard focused")
	press_pad(&h, .FACE_RIGHT)

	// 2. Rename from the action bar.
	move_cursor_to(t, &h, "alpha.txt")
	// New folder › New file › Copy › Cut › Rename (Paste is dimmed and
	// skipped while nothing has been copied).
	press_pad(&h, .FACE_UP)
	for _ in 0 ..< 4 do press_pad(&h, .DPAD_RIGHT)
	press_pad(&h, .FACE_DOWN)
	run_frames(&h, 3)
	testing.expect_value(t, h.state.entry.purpose, app.Entry_Purpose.RENAME)
	testing.expect(t, keyboard_has_focus(&h), "rename: keyboard focused")
	press_pad(&h, .FACE_RIGHT)

	// 3. A new folder going straight into rename.
	press_pad(&h, .FACE_UP)
	press_pad(&h, .FACE_DOWN)
	wait_for_jobs(t, &h)
	run_frames(&h, 3)
	testing.expect_value(t, h.state.entry.purpose, app.Entry_Purpose.RENAME)
	testing.expect(t, keyboard_has_focus(&h), "new folder: keyboard focused")

	// 4. Closing the keyboard and opening it again with the ⌨ button.
	h.state.entry.show_keyboard = false
	h.state.entry.focus_field_next = true
	run_frames(&h, 3)
	testing.expect(t, !keyboard_has_focus(&h))
	h.state.entry.show_keyboard = true
	h.state.entry.focus_keyboard_next = true
	run_frames(&h, 3)
	testing.expect(t, keyboard_has_focus(&h), "reopened: keyboard focused")
}

@(test)
keyboard_button_focuses_the_keyboard :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)

	// Started from the keyboard: no on-screen keyboard at first.
	press_key(&h, .L, {.CONTROL})
	run_frames(&h, 2)
	testing.expect(t, !h.state.entry.show_keyboard)

	// The ⌨ button sits at the right of the path field. Tap it.
	tap_at :: proc(h: ^Harness, position: ui.Vec2) {
		h.input.pointer_position = position
		run_frames(h, 2)
		h.input.mouse_pressed = {.LEFT}
		h.input.mouse_down = {.LEFT}
		run_frame(h)
		h.input.mouse_down = {}
		h.input.mouse_released = {.LEFT}
		run_frames(h, 3)
	}
	keyboard_button := find_button_named(&h, "⌨")
	tap_at(&h, keyboard_button)
	testing.expect(t, h.state.entry.show_keyboard, "the ⌨ button shows the keyboard")
	testing.expect(t, keyboard_has_focus(&h), "and focus moves onto it")
	testing.expect(t, ui.show_focus_ring(&h.ctx), "visibly, even though it was opened with a tap")

	// Moving the pointer again hides the ring, as usual for the pointer.
	h.input.pointer_position += {5, 5}
	run_frames(&h, 2)
	testing.expect(t, !ui.show_focus_ring(&h.ctx))
}

@(test)
first_run_registers_chord_buttons :: proc(t: ^testing.T) {
	h: Harness
	harness_init(t, &h)
	defer harness_destroy(&h)
	h.ctx.gamepad_modifiers = {}

	// No config file yet: load_bindings writes the defaults -- and the View
	// chords must still work.
	path := fs.join_path(h.dir, "fresh/touch-file-manager/bindings.ini", context.temp_allocator)
	problems := app.load_bindings(&h.state, &h.ctx, path)
	defer delete(problems)
	testing.expect(t, .SELECT in h.ctx.gamepad_modifiers, "View is a chord button")
	testing.expect(t, .START in h.ctx.gamepad_modifiers, "Menu is a chord button (View+Menu)")
}

// The centre of the hit target whose id matches a button label, searched
// in the toolbar region. Good enough for a test: the ⌨ label is unique.
find_button_named :: proc(h: ^Harness, label: string) -> ui.Vec2 {
	// The path field's row: toolbar y 44..104, right part of the bar. The
	// ⌨ button is the 44px square just left of the Split buttons.
	for target in h.ctx.hit_targets {
		if target.visible.w == 44 && target.visible.y > 44 && target.visible.y < 104 && target.visible.x > 400 && target.visible.x < 700 {
			return ui.rect_center(target.visible)
		}
	}
	return {}
}
