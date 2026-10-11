package ui_raylib

import "core:os"
import rl "vendor:raylib"
import stbtt "vendor:stb/truetype"

// Text rendering with a glyph cache that fills on demand.
//
// raylib's own fonts are built once for a fixed character list, and every
// character drawn does a linear search through that list. Filenames can use
// any script, so instead each glyph is rasterised with stb_truetype the first
// time it's needed, packed into one growing atlas texture, and found again
// through a hash map.
//
// Glyphs missing from the main font fall back through FALLBACK_FONTS in
// order; a glyph no font has draws as the main font's "missing" box. Colour
// emoji fonts (bitmap CBDT tables) aren't supported by stb_truetype, so emoji
// currently render as that box.

FALLBACK_FONTS :: [?]string{
	"assets/fonts/NotoSans-Regular.ttf",
	"/usr/share/fonts/noto/NotoSans-Regular.ttf",
	"/usr/share/fonts/truetype/noto/NotoSans-Regular.ttf",
	"/usr/share/fonts/noto-cjk/NotoSansCJK-Regular.ttc",
	"/usr/share/fonts/opentype/noto/NotoSansCJK-Regular.ttc",
	"/usr/share/fonts/TTF/DejaVuSans.ttf",
	"/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf",
	"/usr/share/fonts/noto/NotoSansSymbols2-Regular.ttf",
}

ATLAS_WIDTH :: 1024
ATLAS_START_HEIGHT :: 512
ATLAS_MAX_HEIGHT :: 4096
GLYPH_PADDING :: 1

@(private)
Font_Face :: struct {
	path:   string,
	data:   []u8,
	info:   stbtt.fontinfo,
	loaded: bool,
	// Set once loading has been tried and failed, so a missing font file is
	// only looked for once.
	failed: bool,
}

@(private)
Glyph_Key :: struct {
	codepoint:  rune,
	pixel_size: i32,
}

@(private)
Glyph :: struct {
	source:  rl.Rectangle,
	// From the pen position (top of the line) to the bitmap's top-left.
	offset:  [2]f32,
	advance: f32,
	visible: bool,
}

Text_Cache :: struct {
	faces:  [dynamic]Font_Face,
	glyphs: map[Glyph_Key]Glyph,

	// Two bytes per pixel, gray + alpha: gray is always 255 and alpha is the
	// coverage, so the tint colour passes straight through.
	atlas:         []u8,
	atlas_height:  i32,
	texture:       rl.Texture2D,
	texture_valid: bool,
	dirty:         bool,

	// Shelf packing: glyphs fill a row left to right; a new row starts
	// below the tallest glyph in the current one.
	shelf_x:      i32,
	shelf_y:      i32,
	shelf_height: i32,
}

text_cache_init :: proc(cache: ^Text_Cache) {
	for path in FALLBACK_FONTS {
		append(&cache.faces, Font_Face{path = path})
	}
	cache.atlas_height = ATLAS_START_HEIGHT
	cache.atlas = make([]u8, ATLAS_WIDTH * ATLAS_START_HEIGHT * 2)
}

text_cache_destroy :: proc(cache: ^Text_Cache) {
	for face in cache.faces do delete(face.data)
	delete(cache.faces)
	delete(cache.glyphs)
	delete(cache.atlas)
	if cache.texture_valid do rl.UnloadTexture(cache.texture)
}

// Width of `text` in pixels at `pixel_size`. Adds any missing glyphs to the
// atlas as a side effect, which is what lets render() upload them all once,
// before anything is drawn.
text_width :: proc(cache: ^Text_Cache, text: string, pixel_size: i32) -> f32 {
	width: f32
	for codepoint in text {
		glyph := get_glyph(cache, codepoint, pixel_size)
		width += glyph.advance
	}
	return width
}

// Uploads the atlas if glyphs were added since the last upload. Must run
// before drawing, never during: growing the atlas replaces the texture, and
// raylib's batched draws still refer to the old one until they're flushed.
text_cache_flush :: proc(cache: ^Text_Cache) {
	if !cache.dirty do return
	cache.dirty = false

	if cache.texture_valid && cache.texture.height != cache.atlas_height {
		rl.UnloadTexture(cache.texture)
		cache.texture_valid = false
	}
	if !cache.texture_valid {
		image := rl.Image{
			data = raw_data(cache.atlas),
			width = ATLAS_WIDTH,
			height = cache.atlas_height,
			mipmaps = 1,
			format = .UNCOMPRESSED_GRAY_ALPHA,
		}
		cache.texture = rl.LoadTextureFromImage(image)
		rl.SetTextureFilter(cache.texture, .POINT)
		cache.texture_valid = true
	} else {
		rl.UpdateTexture(cache.texture, raw_data(cache.atlas))
	}
}

draw_text_cached :: proc(cache: ^Text_Cache, text: string, position: rl.Vector2, pixel_size: i32, color: rl.Color) {
	pen := position
	for codepoint in text {
		glyph := get_glyph(cache, codepoint, pixel_size)
		if glyph.visible {
			destination := rl.Rectangle{
				pen.x + glyph.offset.x,
				pen.y + glyph.offset.y,
				glyph.source.width,
				glyph.source.height,
			}
			rl.DrawTexturePro(cache.texture, glyph.source, destination, {0, 0}, 0, color)
		}
		pen.x += glyph.advance
	}
}

@(private)
get_glyph :: proc(cache: ^Text_Cache, codepoint: rune, pixel_size: i32) -> Glyph {
	key := Glyph_Key{codepoint = codepoint, pixel_size = pixel_size}
	cached, ok := cache.glyphs[key]
	if ok do return cached

	glyph := rasterise_glyph(cache, codepoint, pixel_size)
	cache.glyphs[key] = glyph
	return glyph
}

@(private)
rasterise_glyph :: proc(cache: ^Text_Cache, codepoint: rune, pixel_size: i32) -> Glyph {
	// Control characters are legal in Linux filenames (a newline, say).
	// Draw them as a visible replacement rather than letting them move the
	// pen or vanish.
	lookup := codepoint
	if codepoint < 0x20 || codepoint == 0x7f do lookup = 0xFFFD

	face, glyph_index := find_face(cache, lookup)
	if face == nil do return Glyph{}

	main_face := first_loaded_face(cache)
	scale := stbtt.ScaleForPixelHeight(&face.info, f32(pixel_size))

	// Every face shares the main face's baseline, so fallback glyphs sit on
	// the same line as the text around them.
	main_scale := stbtt.ScaleForPixelHeight(&main_face.info, f32(pixel_size))
	ascent, descent, line_gap: i32
	stbtt.GetFontVMetrics(&main_face.info, &ascent, &descent, &line_gap)
	baseline := f32(ascent) * main_scale

	advance, left_bearing: i32
	stbtt.GetGlyphHMetrics(&face.info, glyph_index, &advance, &left_bearing)

	x0, y0, x1, y1: i32
	stbtt.GetGlyphBitmapBox(&face.info, glyph_index, scale, scale, &x0, &y0, &x1, &y1)
	width := x1 - x0
	height := y1 - y0

	glyph := Glyph{advance = f32(advance) * scale}
	if width <= 0 || height <= 0 do return glyph

	x, y, placed := place_in_atlas(cache, width, height)
	if !placed do return glyph

	bitmap := make([]u8, width * height, context.temp_allocator)
	stbtt.MakeGlyphBitmap(&face.info, raw_data(bitmap), width, height, width, scale, scale, glyph_index)
	for row in 0 ..< height {
		for column in 0 ..< width {
			index := ((y + row) * ATLAS_WIDTH + (x + column)) * 2
			cache.atlas[index] = 255
			cache.atlas[index + 1] = bitmap[row * width + column]
		}
	}
	cache.dirty = true

	glyph.source = rl.Rectangle{f32(x), f32(y), f32(width), f32(height)}
	glyph.offset = {f32(x0), baseline + f32(y0)}
	glyph.visible = true
	return glyph
}

// The first face that has the codepoint. If none does, the main face's
// glyph 0, which every font defines as its "missing glyph" box.
@(private)
find_face :: proc(cache: ^Text_Cache, codepoint: rune) -> (^Font_Face, i32) {
	for &face in cache.faces {
		if !ensure_face_loaded(&face) do continue
		index := stbtt.FindGlyphIndex(&face.info, codepoint)
		if index != 0 do return &face, index
	}
	main_face := first_loaded_face(cache)
	return main_face, 0
}

@(private)
first_loaded_face :: proc(cache: ^Text_Cache) -> ^Font_Face {
	for &face in cache.faces {
		if ensure_face_loaded(&face) do return &face
	}
	return nil
}

// Fallback fonts are only read from disk the first time a glyph needs them;
// the CJK font alone is ~20 MB.
@(private)
ensure_face_loaded :: proc(face: ^Font_Face) -> bool {
	if face.loaded do return true
	if face.failed do return false

	data, err := os.read_entire_file_from_path(face.path, context.allocator)
	if err != nil {
		face.failed = true
		return false
	}
	// A .ttc file holds several faces; take the first. For a plain .ttf
	// this returns offset 0.
	offset := stbtt.GetFontOffsetForIndex(raw_data(data), 0)
	if offset < 0 || !stbtt.InitFont(&face.info, raw_data(data), offset) {
		delete(data)
		face.failed = true
		return false
	}
	face.data = data
	face.loaded = true
	return true
}

@(private)
place_in_atlas :: proc(cache: ^Text_Cache, width: i32, height: i32) -> (x: i32, y: i32, ok: bool) {
	padded_width := width + GLYPH_PADDING
	padded_height := height + GLYPH_PADDING
	if padded_width > ATLAS_WIDTH do return 0, 0, false

	if cache.shelf_x + padded_width > ATLAS_WIDTH {
		cache.shelf_x = 0
		cache.shelf_y += cache.shelf_height
		cache.shelf_height = 0
	}
	for cache.shelf_y + padded_height > cache.atlas_height {
		if cache.atlas_height >= ATLAS_MAX_HEIGHT {
			// Thousands of distinct glyphs at several sizes. Start over
			// rather than grow without bound; glyphs re-rasterise as they're
			// drawn again.
			reset_atlas(cache)
			break
		}
		grow_atlas(cache)
	}

	x = cache.shelf_x
	y = cache.shelf_y
	cache.shelf_x += padded_width
	cache.shelf_height = max(cache.shelf_height, padded_height)
	return x, y, true
}

// Doubles the height. The width never changes, so every glyph already
// placed keeps its coordinates.
@(private)
grow_atlas :: proc(cache: ^Text_Cache) {
	new_height := cache.atlas_height * 2
	new_atlas := make([]u8, ATLAS_WIDTH * new_height * 2)
	copy(new_atlas, cache.atlas)
	delete(cache.atlas)
	cache.atlas = new_atlas
	cache.atlas_height = new_height
	cache.dirty = true
}

@(private)
reset_atlas :: proc(cache: ^Text_Cache) {
	clear(&cache.glyphs)
	for &b in cache.atlas do b = 0
	cache.shelf_x = 0
	cache.shelf_y = 0
	cache.shelf_height = 0
	cache.dirty = true
}

// Used by tests and debugging: how many distinct glyphs are cached.
text_cache_glyph_count :: proc(cache: ^Text_Cache) -> int {
	return len(cache.glyphs)
}
