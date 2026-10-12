package ui

// An on-screen keyboard, for typing with a controller or a touchscreen.
//
// It's made of ordinary focusable buttons in a region of its own, so the
// D-pad moves between keys, A presses one, and a tap or click works too.
// While it's on screen the controller also gets shortcuts, so the common
// edits don't need the D-pad at all:
//   X backspace · Y space · LT/RT move the caret · Menu submit
// (LB/RB are left alone: they switch tabs everywhere else.)
// (B closes it; that's the caller's CANCEL handling.)
//
// The layout leans towards typing paths: / . - _ ~ are on the main layer.

On_Screen_Keyboard :: struct {
	shifted:   bool,
	// The keyboard's focus region, recorded each frame it's drawn.
	region_id: Id,
}

Osk_Event :: enum u8 {
	SUBMITTED,
	CLOSED,
}

Osk_Events :: bit_set[Osk_Event; u8]

@(private)
Osk_Key_Kind :: enum u8 {
	CHARACTER,
	SHIFT,
	BACKSPACE,
	SPACE,
	LEFT,
	RIGHT,
	ENTER,
	CLOSE,
}

@(private)
Osk_Key :: struct {
	kind:    Osk_Key_Kind,
	normal:  string,
	shifted: string,
	// Width in key units; most keys are 1.
	width:   f32,
}

// The layout lives at file scope: slice literals inside a procedure point
// at its stack frame, which would be gone by the time the keys are drawn.
@(private)
OSK_ROW_0 := [?]Osk_Key{
	{kind = .CHARACTER, normal = "1", shifted = "!", width = 1},
	{kind = .CHARACTER, normal = "2", shifted = "@", width = 1},
	{kind = .CHARACTER, normal = "3", shifted = "#", width = 1},
	{kind = .CHARACTER, normal = "4", shifted = "$", width = 1},
	{kind = .CHARACTER, normal = "5", shifted = "%", width = 1},
	{kind = .CHARACTER, normal = "6", shifted = "^", width = 1},
	{kind = .CHARACTER, normal = "7", shifted = "&", width = 1},
	{kind = .CHARACTER, normal = "8", shifted = "*", width = 1},
	{kind = .CHARACTER, normal = "9", shifted = "(", width = 1},
	{kind = .CHARACTER, normal = "0", shifted = ")", width = 1},
	{kind = .CHARACTER, normal = "-", shifted = "+", width = 1},
	{kind = .BACKSPACE, normal = "⌫", shifted = "⌫", width = 1},
}

@(private)
OSK_ROW_1 := [?]Osk_Key{
	{kind = .CHARACTER, normal = "q", shifted = "Q", width = 1},
	{kind = .CHARACTER, normal = "w", shifted = "W", width = 1},
	{kind = .CHARACTER, normal = "e", shifted = "E", width = 1},
	{kind = .CHARACTER, normal = "r", shifted = "R", width = 1},
	{kind = .CHARACTER, normal = "t", shifted = "T", width = 1},
	{kind = .CHARACTER, normal = "y", shifted = "Y", width = 1},
	{kind = .CHARACTER, normal = "u", shifted = "U", width = 1},
	{kind = .CHARACTER, normal = "i", shifted = "I", width = 1},
	{kind = .CHARACTER, normal = "o", shifted = "O", width = 1},
	{kind = .CHARACTER, normal = "p", shifted = "P", width = 1},
	{kind = .CHARACTER, normal = "/", shifted = "\\", width = 1},
	{kind = .CHARACTER, normal = "=", shifted = "|", width = 1},
}

@(private)
OSK_ROW_2 := [?]Osk_Key{
	{kind = .CHARACTER, normal = "a", shifted = "A", width = 1},
	{kind = .CHARACTER, normal = "s", shifted = "S", width = 1},
	{kind = .CHARACTER, normal = "d", shifted = "D", width = 1},
	{kind = .CHARACTER, normal = "f", shifted = "F", width = 1},
	{kind = .CHARACTER, normal = "g", shifted = "G", width = 1},
	{kind = .CHARACTER, normal = "h", shifted = "H", width = 1},
	{kind = .CHARACTER, normal = "j", shifted = "J", width = 1},
	{kind = .CHARACTER, normal = "k", shifted = "K", width = 1},
	{kind = .CHARACTER, normal = "l", shifted = "L", width = 1},
	{kind = .CHARACTER, normal = ".", shifted = ":", width = 1},
	{kind = .CHARACTER, normal = "_", shifted = "\"", width = 1},
	{kind = .CHARACTER, normal = "'", shifted = ",", width = 1},
}

@(private)
OSK_ROW_3 := [?]Osk_Key{
	{kind = .SHIFT, normal = "⇧ Shift", shifted = "⇧ Shift", width = 1.5},
	{kind = .CHARACTER, normal = "z", shifted = "Z", width = 1},
	{kind = .CHARACTER, normal = "x", shifted = "X", width = 1},
	{kind = .CHARACTER, normal = "c", shifted = "C", width = 1},
	{kind = .CHARACTER, normal = "v", shifted = "V", width = 1},
	{kind = .CHARACTER, normal = "b", shifted = "B", width = 1},
	{kind = .CHARACTER, normal = "n", shifted = "N", width = 1},
	{kind = .CHARACTER, normal = "m", shifted = "M", width = 1},
	{kind = .CHARACTER, normal = "~", shifted = "`", width = 1},
	{kind = .LEFT, normal = "◀", shifted = "◀", width = 1.25},
	{kind = .RIGHT, normal = "▶", shifted = "▶", width = 1.25},
}

@(private)
OSK_ROW_4 := [?]Osk_Key{
	{kind = .CLOSE, normal = "Close", shifted = "Close", width = 2},
	{kind = .SPACE, normal = "Space", shifted = "Space", width = 6},
	{kind = .ENTER, normal = "Enter ↵", shifted = "Enter ↵", width = 4},
}

OSK_ROWS :: 5
OSK_COLUMNS :: 12
OSK_ROW_HEIGHT :: 52

@(private)
osk_rows :: proc() -> [OSK_ROWS][]Osk_Key {
	return {OSK_ROW_0[:], OSK_ROW_1[:], OSK_ROW_2[:], OSK_ROW_3[:], OSK_ROW_4[:]}
}

on_screen_keyboard :: proc(ctx: ^Context, rect: Rect, field: ^Text_Field, keyboard: ^On_Screen_Keyboard) -> Osk_Events {
	events: Osk_Events
	theme := &ctx.theme
	draw_rect(ctx, rect, theme.panel)
	draw_rect(ctx, Rect{rect.x, rect.y, rect.w, 1}, theme.panel_border)

	begin_region(ctx, "On-screen keyboard", rect, "Keyboard")
	defer end_region(ctx)
	keyboard.region_id = current_region(ctx)

	// Controller shortcuts. These buttons are free while typing: the app
	// stops running its own actions during text entry.
	if trigger_pressed(ctx, pad(.FACE_LEFT)) do text_field_backspace(field)
	if trigger_pressed(ctx, pad(.FACE_UP)) do text_field_insert(field, " ")
	if trigger_pressed(ctx, pad(.LEFT_TRIGGER)) do text_field_move(field, -1)
	if trigger_pressed(ctx, pad(.RIGHT_TRIGGER)) do text_field_move(field, 1)
	if nav_pressed(ctx, .CONTEXT_MENU) {
		consume_nav(ctx, .CONTEXT_MENU)
		events += {.SUBMITTED}
	}

	area := inset(rect, 8)
	unit := (area.w - f32(OSK_COLUMNS - 1) * 6) / OSK_COLUMNS
	rows := osk_rows()
	for row, row_index in rows {
		y := area.y + f32(row_index) * (OSK_ROW_HEIGHT + 6)
		// A key `width` units wide also spans the gaps it covers, so rows
		// of wide keys line up with rows of narrow ones.
		row_width: f32 = 0
		for key in row do row_width += key.width * unit + (key.width - 1) * 6 + 6
		x := area.x + (area.w - (row_width - 6)) / 2
		for key, column in row {
			width := key.width * unit + (key.width - 1) * 6
			key_rect := Rect{x, y, width, OSK_ROW_HEIGHT}
			x += width + 6

			text := key.normal
			if keyboard.shifted do text = key.shifted
			push_id_int(ctx, row_index * 32 + column)
			lit := key.kind == .SHIFT && keyboard.shifted
			pressed := button(ctx, key_rect, text, lit)
			pop_id(ctx)
			if !pressed do continue

			switch key.kind {
			case .CHARACTER:
				text_field_insert(field, text)
				// One shifted character, like a phone keyboard.
				keyboard.shifted = false
			case .SHIFT:
				keyboard.shifted = !keyboard.shifted
			case .BACKSPACE:
				text_field_backspace(field)
			case .SPACE:
				text_field_insert(field, " ")
			case .LEFT:
				text_field_move(field, -1)
			case .RIGHT:
				text_field_move(field, 1)
			case .ENTER:
				events += {.SUBMITTED}
			case .CLOSE:
				events += {.CLOSED}
			}
		}
	}
	return events
}

// The height the keyboard needs, for laying out the screen around it.
on_screen_keyboard_height :: proc() -> f32 {
	return OSK_ROWS * (OSK_ROW_HEIGHT + 6) + 16
}
