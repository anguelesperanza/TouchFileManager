package ui_raylib

import "core:math"
import rl "vendor:raylib"
import ui "../ui"

// The raylib backend for `ui`: translates raylib input into ui.Input, draws
// ui.Draw_Commands, and answers text-measurement questions. This is the only
// UI code that would be rewritten to move to another framework.

Renderer :: struct {
	text:           Text_Cache,
	textures:       map[ui.Image_Id]rl.Texture2D,
	clip_stack:     [dynamic]rl.Rectangle,
	scale:          f32,
	cursor:         ui.Cursor,
	cursor_set:     bool,
	known_gamepads: bit_set[0 ..< MAX_GAMEPADS],
}

init :: proc(r: ^Renderer) {
	r.scale = 1
	text_cache_init(&r.text)
}

destroy :: proc(r: ^Renderer) {
	text_cache_destroy(&r.text)
	for _, texture in r.textures do rl.UnloadTexture(texture)
	delete(r.textures)
	delete(r.clip_stack)
}

backend :: proc(r: ^Renderer) -> ui.Backend {
	return ui.Backend{measure_text = measure_text, user_data = r}
}

@(private)
pixel_size_for :: proc(r: ^Renderer, size: f32) -> i32 {
	return max(i32(math.round(size * r.scale)), 1)
}

// There's one font family for now, so `font` is unused; it's in the
// interface so a bold or monospace face can be added without touching `ui`.
@(private)
measure_text :: proc(font: ui.Font_Id, size: f32, text: string, user_data: rawptr) -> ui.Vec2 {
	r := (^Renderer)(user_data)
	pixel_size := pixel_size_for(r, size)
	width := text_width(&r.text, text, pixel_size)
	return ui.Vec2{width / r.scale, f32(pixel_size) / r.scale}
}

// Images are registered by the app (thumbnails, icons) and referred to by id.
register_texture :: proc(r: ^Renderer, id: ui.Image_Id, texture: rl.Texture2D) {
	r.textures[id] = texture
}

render :: proc(r: ^Renderer, commands: []ui.Draw_Command, clear_color: ui.Color) {
	// Rasterise every glyph this frame needs and upload the atlas once,
	// before any draw call refers to it.
	for command in commands {
		text, is_text := command.(ui.Draw_Text)
		if is_text do text_width(&r.text, text.text, pixel_size_for(r, text.size))
	}
	text_cache_flush(&r.text)

	rl.ClearBackground(rl.Color(clear_color))
	clear(&r.clip_stack)

	for command in commands {
		switch c in command {
		case ui.Draw_Rect:
			rect := to_physical(r, c.rect)
			if c.radius > 0 {
				rl.DrawRectangleRounded(rect, roundness(r, rect, c.radius), 8, rl.Color(c.color))
			} else {
				rl.DrawRectangleRec(rect, rl.Color(c.color))
			}
		case ui.Draw_Rect_Outline:
			rect := to_physical(r, c.rect)
			thickness := c.thickness * r.scale
			if c.radius > 0 {
				rl.DrawRectangleRoundedLinesEx(rect, roundness(r, rect, c.radius), 8, thickness, rl.Color(c.color))
			} else {
				rl.DrawRectangleLinesEx(rect, thickness, rl.Color(c.color))
			}
		case ui.Draw_Text:
			pixel_size := pixel_size_for(r, c.size)
			// Whole-pixel positions keep glyphs crisp; fractional ones blur.
			position := rl.Vector2{math.round(c.position.x * r.scale), math.round(c.position.y * r.scale)}
			draw_text_cached(&r.text, c.text, position, pixel_size, rl.Color(c.color))
		case ui.Draw_Image:
			texture, ok := r.textures[c.image]
			if !ok do continue
			source := rl.Rectangle{c.source.x, c.source.y, c.source.w, c.source.h}
			rl.DrawTexturePro(texture, source, to_physical(r, c.destination), {0, 0}, 0, rl.Color(c.tint))
		case ui.Draw_Clip_Push:
			rect := to_physical(r, c.rect)
			if len(r.clip_stack) > 0 do rect = intersect(rect, r.clip_stack[len(r.clip_stack) - 1])
			append(&r.clip_stack, rect)
			begin_scissor(rect)
		case ui.Draw_Clip_Pop:
			if len(r.clip_stack) == 0 do continue
			pop(&r.clip_stack)
			if len(r.clip_stack) > 0 {
				begin_scissor(r.clip_stack[len(r.clip_stack) - 1])
			} else {
				rl.EndScissorMode()
			}
		}
	}
	if len(r.clip_stack) > 0 do rl.EndScissorMode()
}

apply_cursor :: proc(r: ^Renderer, cursor: ui.Cursor) {
	if r.cursor_set && r.cursor == cursor do return
	r.cursor = cursor
	r.cursor_set = true
	switch cursor {
	case .DEFAULT:
		rl.SetMouseCursor(.DEFAULT)
	case .POINTING_HAND:
		rl.SetMouseCursor(.POINTING_HAND)
	case .TEXT:
		rl.SetMouseCursor(.IBEAM)
	case .RESIZE_HORIZONTAL:
		rl.SetMouseCursor(.RESIZE_EW)
	case .RESIZE_VERTICAL:
		rl.SetMouseCursor(.RESIZE_NS)
	}
}

@(private)
to_physical :: proc(r: ^Renderer, rect: ui.Rect) -> rl.Rectangle {
	return rl.Rectangle{rect.x * r.scale, rect.y * r.scale, rect.w * r.scale, rect.h * r.scale}
}

// raylib takes corner rounding as a 0..1 fraction of the shorter side,
// not as a radius.
@(private)
roundness :: proc(r: ^Renderer, rect: rl.Rectangle, radius: f32) -> f32 {
	shorter := min(rect.width, rect.height)
	if shorter <= 0 do return 0
	return clamp(2 * radius * r.scale / shorter, 0, 1)
}

@(private)
intersect :: proc(a: rl.Rectangle, b: rl.Rectangle) -> rl.Rectangle {
	x0 := max(a.x, b.x)
	y0 := max(a.y, b.y)
	x1 := min(a.x + a.width, b.x + b.width)
	y1 := min(a.y + a.height, b.y + b.height)
	return rl.Rectangle{x0, y0, max(x1 - x0, 0), max(y1 - y0, 0)}
}

@(private)
begin_scissor :: proc(rect: rl.Rectangle) {
	rl.BeginScissorMode(i32(rect.x), i32(rect.y), i32(math.ceil(rect.width)), i32(math.ceil(rect.height)))
}
