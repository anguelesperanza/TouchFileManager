package ui

Theme :: struct {
	font:      Font_Id,
	font_size: f32,

	background:    Color,
	panel:         Color,
	panel_border:  Color,
	button:        Color,
	button_hot:    Color,
	button_active: Color,
	text:          Color,
	text_dim:      Color,
	accent:        Color,
	focus_ring:    Color,

	radius:             f32,
	padding:            f32,
	spacing:            f32,
	focus_ring_width:   f32,
	// Smallest hit area any interactive widget gets, in logical pixels.
	// 44 is the common touch-target guideline (Apple HIG; Material uses 48).
	min_hit_size: f32,
}

default_theme :: proc() -> Theme {
	return Theme{
		font = 0,
		font_size = 16,

		background = {24, 25, 30, 255},
		panel = {32, 34, 41, 255},
		panel_border = {48, 51, 61, 255},
		button = {44, 47, 57, 255},
		button_hot = {58, 62, 75, 255},
		button_active = {72, 78, 96, 255},
		text = {225, 228, 235, 255},
		text_dim = {140, 146, 160, 255},
		accent = {94, 156, 255, 255},
		focus_ring = {120, 180, 255, 255},

		radius = 6,
		padding = 8,
		spacing = 6,
		focus_ring_width = 2,
		min_hit_size = 44,
	}
}
