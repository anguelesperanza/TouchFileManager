package ui

// Rect-cut layout: a region is carved up by cutting strips off its sides.
// It covers toolbars, sidebars, status bars and rows with almost no code,
// and costs nothing per frame. A flexbox-style solver can come later if a
// layout genuinely needs one.

cut_top :: proc(rect: ^Rect, amount: f32) -> Rect {
	taken := min(amount, rect.h)
	result := Rect{rect.x, rect.y, rect.w, taken}
	rect.y += taken
	rect.h -= taken
	return result
}

cut_bottom :: proc(rect: ^Rect, amount: f32) -> Rect {
	taken := min(amount, rect.h)
	rect.h -= taken
	return Rect{rect.x, rect.y + rect.h, rect.w, taken}
}

cut_left :: proc(rect: ^Rect, amount: f32) -> Rect {
	taken := min(amount, rect.w)
	result := Rect{rect.x, rect.y, taken, rect.h}
	rect.x += taken
	rect.w -= taken
	return result
}

cut_right :: proc(rect: ^Rect, amount: f32) -> Rect {
	taken := min(amount, rect.w)
	rect.w -= taken
	return Rect{rect.x + rect.w, rect.y, taken, rect.h}
}

inset :: proc(rect: Rect, amount: f32) -> Rect {
	return inset_xy(rect, amount, amount)
}

inset_xy :: proc(rect: Rect, x: f32, y: f32) -> Rect {
	return Rect{rect.x + x, rect.y + y, max(rect.w - 2 * x, 0), max(rect.h - 2 * y, 0)}
}

// Grows a rect around its centre until it is at least `size` on each side.
// Used for touch targets: the hit area grows, the drawing doesn't.
expand_to_min_size :: proc(rect: Rect, size: f32) -> Rect {
	result := rect
	if result.w < size {
		result.x -= (size - result.w) / 2
		result.w = size
	}
	if result.h < size {
		result.y -= (size - result.h) / 2
		result.h = size
	}
	return result
}

rect_contains :: proc(rect: Rect, point: Vec2) -> bool {
	return point.x >= rect.x && point.x < rect.x + rect.w && point.y >= rect.y && point.y < rect.y + rect.h
}

rect_center :: proc(rect: Rect) -> Vec2 {
	return Vec2{rect.x + rect.w / 2, rect.y + rect.h / 2}
}

rect_intersect :: proc(a: Rect, b: Rect) -> Rect {
	x0 := max(a.x, b.x)
	y0 := max(a.y, b.y)
	x1 := min(a.x + a.w, b.x + b.w)
	y1 := min(a.y + a.h, b.y + b.h)
	return Rect{x0, y0, max(x1 - x0, 0), max(y1 - y0, 0)}
}

// Squared distance from a point to the nearest edge of a rect; 0 when
// inside. Squared because callers only compare distances.
distance_squared_to_rect :: proc(rect: Rect, point: Vec2) -> f32 {
	dx := max(rect.x - point.x, 0, point.x - (rect.x + rect.w))
	dy := max(rect.y - point.y, 0, point.y - (rect.y + rect.h))
	return dx * dx + dy * dy
}
