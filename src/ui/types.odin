package ui

// Everything in this package is in logical pixels. The backend multiplies by
// Context.scale when drawing and divides by it when reporting pointer input,
// so widget code never has to think about DPI or zoom.

Vec2 :: [2]f32

Rect :: struct {
	x: f32,
	y: f32,
	w: f32,
	h: f32,
}

// r, g, b, a
Color :: [4]u8

Id :: distinct u64

// Fonts and images are opaque handles. The backend owns the real objects and
// maps these to them; this package never sees a texture.
Font_Id :: distinct u32
Image_Id :: distinct u64

Align :: enum u8 {
	LEFT,
	CENTER,
	RIGHT,
}

Cursor :: enum u8 {
	DEFAULT,
	POINTING_HAND,
	TEXT,
	RESIZE_HORIZONTAL,
	RESIZE_VERTICAL,
}
