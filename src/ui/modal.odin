package ui

// Modal dialogs. A modal is built last in the frame, between begin_modal
// and end_modal. While one is open:
//   - only widgets inside it can be hovered, clicked or focused; focus moves
//     into it and stays there (arrows, Tab and the D-pad can't leave);
//   - lists behind it ignore the wheel, drags and the right stick.
// The app is expected to pause its own shortcuts too, as it does while a
// text field is being edited.

begin_modal :: proc(ctx: ^Context, label: string, rect: Rect, title := "") {
	ctx.modal_building = true
	ctx.modal_hit_start = len(ctx.hit_targets)
	ctx.modal_focus_start = len(ctx.focusables)
	begin_region(ctx, label, rect, title)
	ctx.modal_region = current_region(ctx)
}

end_modal :: proc(ctx: ^Context) {
	end_region(ctx)
	ctx.modal_building = false
	ctx.modal_open_this_frame = true
}

// Whether a modal was open last frame -- for widgets deciding whether to
// take input before the modal has been built this frame.
modal_open :: proc(ctx: ^Context) -> bool {
	return ctx.modal_open
}

// Drops everything registered before the modal from this frame's hit
// targets, focus stops and regions, and pulls focus inside it.
@(private)
apply_modal :: proc(ctx: ^Context) {
	ctx.modal_open = ctx.modal_open_this_frame
	ctx.modal_open_this_frame = false
	if !ctx.modal_open do return

	remove_range(&ctx.hit_targets, 0, min(ctx.modal_hit_start, len(ctx.hit_targets)))
	remove_range(&ctx.focusables, 0, min(ctx.modal_focus_start, len(ctx.focusables)))
	for i := len(ctx.regions) - 1; i >= 0; i -= 1 {
		if ctx.regions[i].id != ctx.modal_region do ordered_remove(&ctx.regions, i)
	}
	if find_focusable(ctx, ctx.focus) < 0 && len(ctx.focusables) > 0 {
		ctx.focus = ctx.focusables[0].id
	}
}

Dialog_Result :: enum u8 {
	NONE,
	CONFIRMED,
	CANCELLED,
}

// A yes/no question in the middle of the screen. Cancel is first and gets
// focus, so Enter or A without looking is never the destructive choice.
// Escape, B, and clicking outside the dialog all cancel.
confirm_dialog :: proc(ctx: ^Context, title: string, message: string, confirm_label: string, cancel_label := "Cancel") -> Dialog_Result {
	theme := &ctx.theme
	screen := screen_rect(ctx)
	result := Dialog_Result.NONE

	// The backdrop is a hit target of the dialog's own, so a click on it
	// lands here (and cancels) instead of on whatever is behind.
	ctx.modal_hit_start = len(ctx.hit_targets)
	backdrop := interact_ex(ctx, get_id(ctx, "dialog backdrop"), screen, 0)
	draw_rect(ctx, screen, {0, 0, 0, 140})
	if .CLICKED in backdrop do result = .CANCELLED
	hit_start := ctx.modal_hit_start

	width := min(screen.w - 32, 460)
	height: f32 = 190
	rect := Rect{screen.x + (screen.w - width) / 2, screen.y + (screen.h - height) / 2, width, height}
	begin_modal(ctx, "dialog", rect, title)
	ctx.modal_hit_start = hit_start
	defer end_modal(ctx)

	draw_rect(ctx, rect, theme.panel, theme.radius * 2)
	draw_rect_outline(ctx, rect, theme.panel_border, theme.radius * 2, 1)
	inner := inset(rect, 20)
	label(ctx, cut_top(&inner, 28), title, theme.text, .LEFT, 19)
	cut_top(&inner, 6)
	label_clipped(ctx, cut_top(&inner, 40), message, theme.text_dim, .LEFT, 15)

	buttons := cut_bottom(&inner, 48)
	confirm_rect := cut_right(&buttons, 150)
	cut_right(&buttons, theme.spacing)
	cancel_rect := cut_right(&buttons, 120)
	// Built in this order so Cancel is the first focus stop.
	if button(ctx, cancel_rect, cancel_label) do result = .CANCELLED
	if button(ctx, confirm_rect, confirm_label) do result = .CONFIRMED

	if nav_pressed(ctx, .CANCEL) {
		consume_nav(ctx, .CANCEL)
		result = .CANCELLED
	}
	return result
}
