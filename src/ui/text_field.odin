package ui

import "core:strings"
import "core:unicode/utf8"

// A single-line text field.
//
// The text lives in the caller's Text_Field, which persists across frames.
// While `editing` is true the field owns the keyboard: it reads raw keys
// itself and switches keyboard bindings off (see keyboard_captured), so
// Backspace deletes a character instead of going up a folder. Controller and
// touch users type through the on-screen keyboard, which edits the same
// Text_Field with the text_field_* procedures below.

Text_Field :: struct {
	// The widget id, refreshed each frame the field is drawn, so the caller
	// can give it focus.
	id:    Id,
	text:  [dynamic]u8,
	// Byte offset into text, always on a character boundary.
	caret: int,
	// Everything is selected: the next typed text replaces it all. Set when
	// editing starts, so typing a fresh path doesn't need clearing first.
	all_selected: bool,
}

Text_Field_Event :: enum u8 {
	CHANGED,
	SUBMITTED,
	CANCELLED,
	// Tab: the caller may complete the text (a path, say).
	COMPLETE,
}

Text_Field_Events :: bit_set[Text_Field_Event; u8]

text_field_set :: proc(field: ^Text_Field, text: string) {
	clear(&field.text)
	append(&field.text, text)
	field.caret = len(field.text)
}

text_field_string :: proc(field: ^Text_Field) -> string {
	return string(field.text[:])
}

text_field_destroy :: proc(field: ^Text_Field) {
	delete(field.text)
}

text_field_insert :: proc(field: ^Text_Field, text: string) {
	if field.all_selected {
		clear(&field.text)
		field.caret = 0
		field.all_selected = false
	}
	inject_at(&field.text, field.caret, ..transmute([]u8)text)
	field.caret += len(text)
}

text_field_backspace :: proc(field: ^Text_Field) {
	if field.all_selected {
		text_field_set(field, "")
		field.all_selected = false
		return
	}
	if field.caret == 0 do return
	_, size := utf8.decode_last_rune(field.text[:field.caret])
	remove_range(&field.text, field.caret - size, field.caret)
	field.caret -= size
}

text_field_delete :: proc(field: ^Text_Field) {
	if field.all_selected {
		text_field_set(field, "")
		field.all_selected = false
		return
	}
	if field.caret >= len(field.text) do return
	_, size := utf8.decode_rune(field.text[field.caret:])
	remove_range(&field.text, field.caret, field.caret + size)
}

text_field_move :: proc(field: ^Text_Field, characters: int) {
	field.all_selected = false
	for _ in 0 ..< abs(characters) {
		if characters < 0 && field.caret > 0 {
			_, size := utf8.decode_last_rune(field.text[:field.caret])
			field.caret -= size
		}
		if characters > 0 && field.caret < len(field.text) {
			_, size := utf8.decode_rune(field.text[field.caret:])
			field.caret += size
		}
	}
}

text_field :: proc(ctx: ^Context, label: string, rect: Rect, field: ^Text_Field, editing: bool) -> Text_Field_Events {
	events: Text_Field_Events
	theme := &ctx.theme
	id := get_id(ctx, label)
	field.id = id
	result := interact(ctx, id, rect)
	if .HOVERED in result do ctx.cursor = .TEXT

	if editing {
		ctx.capture_keyboard_next = true
		events += handle_text_keys(ctx, field)
	}

	draw_rect(ctx, rect, theme.background, theme.radius)
	border := theme.panel_border
	if editing do border = theme.accent
	draw_rect_outline(ctx, rect, border, theme.radius, 1.5)

	inner := inset_xy(rect, 10, 0)
	size := theme.font_size
	text := text_field_string(field)
	caret_x := measure_text(ctx, text[:field.caret], size).x
	// Scroll so the caret is always visible; the start of a long path
	// slides out to the left as you type at its end.
	scroll: f32 = 0
	if caret_x > inner.w - 4 do scroll = caret_x - (inner.w - 4)

	push_clip(ctx, inner)
	if field.all_selected && len(text) > 0 {
		width := measure_text(ctx, text, size).x
		draw_rect(ctx, Rect{inner.x - scroll, inner.y + 6, width, inner.h - 12}, {theme.accent.r, theme.accent.g, theme.accent.b, 90})
	}
	text_y := inner.y + (inner.h - size) / 2
	draw_text(ctx, {inner.x - scroll, text_y}, text, size, theme.text)
	if editing && !field.all_selected {
		draw_rect(ctx, Rect{inner.x + caret_x - scroll, text_y - 2, 2, size + 4}, theme.accent)
	}
	pop_clip(ctx)

	// A click or tap puts the caret at the nearest character boundary.
	// (CLICKED also comes from Enter/A on a focused field; that's not a
	// position, so only a pointer release counts.)
	if .CLICKED in result && editing && .LEFT in ctx.input.mouse_released {
		field.all_selected = false
		target := ctx.input.pointer_position.x - inner.x + scroll
		best := 0
		best_distance := max(f32)
		for _, offset in text {
			distance := abs(measure_text(ctx, text[:offset], size).x - target)
			if distance < best_distance {
				best = offset
				best_distance = distance
			}
		}
		if abs(measure_text(ctx, text, size).x - target) < best_distance do best = len(text)
		field.caret = best
	}
	return events
}

@(private)
handle_text_keys :: proc(ctx: ^Context, field: ^Text_Field) -> Text_Field_Events {
	events: Text_Field_Events
	input := &ctx.input
	keys := input.keys_pressed
	control := .CONTROL in input.modifiers

	if .ENTER in keys do events += {.SUBMITTED}
	if .ESCAPE in keys do events += {.CANCELLED}
	if .TAB in keys do events += {.COMPLETE}
	if .LEFT in keys do text_field_move(field, -1)
	if .RIGHT in keys do text_field_move(field, 1)
	if .HOME in keys {
		field.all_selected = false
		field.caret = 0
	}
	if .END in keys {
		field.all_selected = false
		field.caret = len(field.text)
	}
	if .BACKSPACE in keys {
		text_field_backspace(field)
		events += {.CHANGED}
	}
	if .DELETE in keys {
		text_field_delete(field)
		events += {.CHANGED}
	}

	if control && .A in keys do field.all_selected = true
	if control && .C in keys && ctx.backend.set_clipboard != nil {
		ctx.backend.set_clipboard(ctx.backend.user_data, text_field_string(field))
	}
	if control && .V in keys && ctx.backend.get_clipboard != nil {
		pasted := ctx.backend.get_clipboard(ctx.backend.user_data)
		// A single-line field: line breaks from a multi-line paste become
		// nothing rather than breaking the text.
		cleaned, _ := strings.remove_all(pasted, "\n", context.temp_allocator)
		cleaned, _ = strings.remove_all(cleaned, "\r", context.temp_allocator)
		if len(cleaned) > 0 {
			text_field_insert(field, cleaned)
			events += {.CHANGED}
		}
	}

	// Typed characters. With Ctrl or Alt held they were shortcuts, not text.
	if !control && .ALT not_in input.modifiers {
		buffer: [4]u8
		for i in 0 ..< input.text_count {
			character := input.text[i]
			if character < 0x20 || character == 0x7f do continue
			bytes, length := utf8.encode_rune(character)
			copy(buffer[:], bytes[:length])
			text_field_insert(field, string(buffer[:length]))
			events += {.CHANGED}
		}
	}
	return events
}
