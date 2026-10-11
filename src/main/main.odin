package main

import "core:fmt"
import "core:os"
import rl "vendor:raylib"
import "../app"
import "../fs"
import ui "../ui"
import ui_raylib "../ui_raylib"

// Build with -define:DEBUG_INPUT=true to log every frame that receives
// pointer, keyboard or gamepad events, and how the loop handled it.
DEBUG_INPUT :: #config(DEBUG_INPUT, false)

main :: proc() {
	rl.SetTraceLogLevel(.WARNING)
	rl.SetConfigFlags({.WINDOW_RESIZABLE, .VSYNC_HINT})
	rl.InitWindow(1280, 800, "File Manager")
	defer rl.CloseWindow()
	rl.SetWindowMinSize(640, 400)
	// Escape is CANCEL in the UI; it must not close the window.
	rl.SetExitKey(.KEY_NULL)

	renderer: ui_raylib.Renderer
	ui_raylib.init(&renderer)
	defer ui_raylib.destroy(&renderer)

	ctx: ui.Context
	if !ui.init(&ctx, ui_raylib.backend(&renderer)) {
		fmt.eprintln("failed to initialise the UI context")
		return
	}
	defer ui.destroy(&ctx)

	// An optional folder to start in: `file_manager ~/Downloads`.
	start_path := fs.home_directory(context.temp_allocator)
	if len(os.args) > 1 {
		absolute, err := os.get_absolute_path(os.args[1], context.temp_allocator)
		if err == nil do start_path = absolute
	}

	state: app.App
	app.init(&state, start_path)
	defer app.destroy(&state)

	bindings_path := app.bindings_path(context.temp_allocator)
	problems := app.load_bindings(&state, &ctx, bindings_path)
	if len(problems) > 0 {
		fmt.eprintfln("%s:", bindings_path)
		for problem in problems do fmt.eprintfln("  %s", problem)
		app.set_message(&state, "%d problem(s) in %s; details printed in the terminal", len(problems), bindings_path)
	}
	for problem in problems do delete(problem)
	delete(problems)

	dpi_scale := max(rl.GetWindowScaleDPI().x, 1)
	when DEBUG_INPUT {
		debug_gamepad_was_connected := false
	}

	for !rl.WindowShouldClose() {
		ctx.scale = dpi_scale * state.zoom
		input := ui_raylib.read_input(&renderer, ctx.scale)
		ui.begin_frame(&ctx, input)
		app.build(&state, &ctx)
		frame := ui.end_frame(&ctx)
		ui_raylib.apply_cursor(&renderer, frame.cursor)

		when DEBUG_INPUT {
			if input.gamepad_connected != debug_gamepad_was_connected {
				fmt.printfln("t=%.2f gamepad connected: %v", input.time, input.gamepad_connected)
				debug_gamepad_was_connected = input.gamepad_connected
			}
			has_events := input.gamepad_pressed != {} || input.keys_pressed != {} || input.mouse_pressed != {} || input.text_count > 0
			if has_events || ctx.nav_pressed != {} {
				fmt.printfln(
					"t=%.2f pad=%v pad_pressed=%v keys=%v text=%v mouse=%v nav=%v focus=%v message=%q",
					input.time,
					input.gamepad_connected,
					input.gamepad_pressed,
					input.keys_pressed,
					input.text[:input.text_count],
					input.mouse_pressed,
					ctx.nav_pressed,
					ctx.focus,
					state.message,
				)
			}
		}
		// Every frame is drawn, paced by vsync. Sleeping until the next event
		// (EnableEventWaiting) and skipping unchanged frames were tried first;
		// they saved CPU when idle but caused visible stutter whenever the
		// loop switched between sleeping and drawing.
		rl.BeginDrawing()
		ui_raylib.render(&renderer, frame.commands, ctx.theme.background)
		rl.EndDrawing()

		free_all(context.temp_allocator)
	}
}
