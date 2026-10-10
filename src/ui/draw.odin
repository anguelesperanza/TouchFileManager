package ui

// The whole output of a frame is a list of these. A backend only has to know
// how to draw each variant to render the entire UI.

Draw_Rect :: struct {
	rect:   Rect,
	color:  Color,
	radius: f32,
}

Draw_Rect_Outline :: struct {
	rect:      Rect,
	color:     Color,
	radius:    f32,
	thickness: f32,
}

// `text` lives in the frame arena and is always followed by a NUL byte, so a
// C-based backend can pass it straight through without copying.
Draw_Text :: struct {
	position: Vec2,
	text:     string,
	font:     Font_Id,
	size:     f32,
	color:    Color,
}

Draw_Image :: struct {
	image:       Image_Id,
	source:      Rect,
	destination: Rect,
	tint:        Color,
}

// Clips nest: a pushed clip is intersected with the one already active.
Draw_Clip_Push :: struct {
	rect: Rect,
}

Draw_Clip_Pop :: struct {}

Draw_Command :: union {
	Draw_Rect,
	Draw_Rect_Outline,
	Draw_Text,
	Draw_Image,
	Draw_Clip_Push,
	Draw_Clip_Pop,
}

draw_rect :: proc(ctx: ^Context, rect: Rect, color: Color, radius: f32 = 0) {
	append(&ctx.commands, Draw_Rect{rect = rect, color = color, radius = radius})
}

draw_rect_outline :: proc(ctx: ^Context, rect: Rect, color: Color, radius: f32 = 0, thickness: f32 = 1) {
	append(&ctx.commands, Draw_Rect_Outline{rect = rect, color = color, radius = radius, thickness = thickness})
}

draw_text :: proc(ctx: ^Context, position: Vec2, text: string, size: f32, color: Color) {
	if len(text) == 0 do return
	append(&ctx.commands, Draw_Text{
		position = position,
		text = clone_to_frame(ctx, text),
		font = ctx.theme.font,
		size = size,
		color = color,
	})
}

draw_image :: proc(ctx: ^Context, image: Image_Id, source: Rect, destination: Rect, tint: Color = {255, 255, 255, 255}) {
	append(&ctx.commands, Draw_Image{image = image, source = source, destination = destination, tint = tint})
}

push_clip :: proc(ctx: ^Context, rect: Rect) {
	append(&ctx.commands, Draw_Clip_Push{rect = rect})
}

pop_clip :: proc(ctx: ^Context) {
	append(&ctx.commands, Draw_Clip_Pop{})
}

measure_text :: proc(ctx: ^Context, text: string, size: f32) -> Vec2 {
	if len(text) == 0 do return {0, size}
	return ctx.backend.measure_text(ctx.theme.font, size, text, ctx.backend.user_data)
}

// Copies into the frame arena with a trailing NUL. The arena never moves an
// allocation, so the string stays valid until the next begin_frame.
@(private)
clone_to_frame :: proc(ctx: ^Context, text: string) -> string {
	buffer, err := make([]u8, len(text) + 1, ctx.frame_allocator)
	if err != nil do return ""
	copy(buffer, text)
	buffer[len(text)] = 0
	return string(buffer[:len(text)])
}
