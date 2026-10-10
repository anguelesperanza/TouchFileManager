# Style Guide

House style for this repository. Follow it for new code, and bring old code
into line when you're already touching it.

The goal is readability for a human, not brevity for its own sake. When in
doubt, write the version a person reads once and understands, not the
version that saves a line.

## Naming

- **Procedures are `snake_case`** -- `list_directory`, `tab_open`,
  `ui_button`.
- **Types -- structs, enums and unions -- are `Pascal_Snake_Case`** for
  multi-word names -- `Draw_Command`, `Dir_Entry`, `Sort_Column`. Odin's own
  convention (`core:`, `vendor:`) is what to match. Single-word types are
  plain `Pascal` -- `Tab`, `Pane`, `Rect`.
- **Enum values are `SCREAMING_CASE`**, one value per line, never several to a
  line:

```odin
View_Mode :: enum {
    DETAILS,
    GRID,
}
```

- **Package-qualify instead of prefixing** when a name crosses a package
  boundary. Inside `package ui` a procedure is `button`, and callers write
  `ui.button`. Don't name it `ui_button` and make callers write
  `ui.ui_button`.

### Procedure prefixes

- **`load_x`** reads something that already exists whole from outside the
  program -- `load_config`, `load_font`, `load_bookmarks`.
- **`write_x` / `read_x`** move a value across a boundary that already exists
  (a file, the clipboard, a thread queue) -- `write_config`,
  `read_trash_info`.
- **`is_x` / `has_x`** ask a question and answer `bool` -- `is_hidden`,
  `is_directory`, `has_selection`.
- **`get_x`** reads state that is already stored somewhere --
  `get_active_tab`, `get_widget_state`.
- A procedure that **does** something and reports what happened keeps its
  verb rather than borrowing `is_`/`get_` -- `button` draws a button and
  returns whether it was activated; `move_files` starts a move and returns
  the job it created.

## Package boundaries

The project is split so the UI data layer can be carried to another
framework by rewriting only the renderer. These rules are what keep that
true:

| Package     | May import                          | Must never import             |
|-------------|-------------------------------------|-------------------------------|
| `ui`        | `core:*`                            | `vendor:raylib`, `app`, `fs`  |
| `fs`        | `core:*`                            | `vendor:raylib`, `ui`, `app`  |
| `app`       | `core:*`, `ui`, `fs`                | `vendor:raylib`               |
| `ui_raylib` | `core:*`, `vendor:raylib`, `ui`     | `app`, `fs`                   |
| `main`      | everything                          |                               |

- `ui` talks to a backend only through `ui.Input` going in,
  `[]ui.Draw_Command` coming out, and the `ui.Backend` callbacks (text
  measurement). Textures and fonts are opaque handles (`Image_Id`,
  `Font_Id`); the backend owns the real objects.
- `ui` has its own `Key`, `Mouse_Button` and `Gamepad_Button` enums. Raylib's
  enums are translated in `ui_raylib`, never passed through.
- If a feature seems to need raylib inside `ui` or `app`, it's a missing
  field on `ui.Input`, a missing `Draw_Command` variant, or a missing
  `Backend` callback. Add that instead.

## Input: four first-class devices

Keyboard, mouse, controller and touch are all first-class. **Every feature
must be fully usable with only a mouse, only a keyboard, only a controller,
or only touch.** A feature that works with three of the four isn't finished.

- **Actions, not keys.** App code reacts to actions (`Action.OPEN`,
  `Action.GO_BACK`, `Action.CONTEXT_MENU`), never to a raw key or button.
  One binding table maps keys, gamepad buttons and gestures to actions, and
  it's the only place that knows which physical input does what. This is
  also what makes keybindings configurable.
- **Focus is always visible and always movable.** Every interactive widget
  is focusable and reachable with arrow keys / D-pad (spatial navigation)
  and Tab / shoulder buttons (moving between regions: sidebar, tab bar,
  file list, path bar). The focus ring is drawn whenever the last input
  came from a keyboard or controller.
- **No hover-only features.** Touch and controller have no hover. Anything
  revealed by hovering (tooltips, close buttons on tabs, row actions) must
  also be reachable another way -- shown on focus, or always visible.
- **No right-click-only or double-click-only features.** Right-click has a
  touch equivalent (long-press) and a controller equivalent (a button bound
  to `CONTEXT_MENU`). Double-click has a single-tap or single-button
  equivalent.
- **No modifier-only features.** Ctrl-click and Shift-click multi-select
  need a modifier-free path (a selection mode toggle) for touch and
  controller.
- **Text entry on a controller or touch** goes through an on-screen
  keyboard. Any widget that takes text must work with it.
- **Touch targets are at least 44x44 logical pixels**, even if the visible
  part of the widget is smaller -- pad the hit rect, not the drawing. Size
  everything in logical pixels and scale by the UI scale factor; never
  hard-code physical pixel sizes.
- **Scrolling** supports wheel, drag-to-scroll with kinetic fling (touch),
  analog stick (controller) and PgUp/PgDn/Home/End (keyboard). Moving focus
  off-screen scrolls it into view.

When adding a widget, write down in the code next to it how each of the four
devices activates it, if it isn't obvious.

## Performance

This file manager exists because the alternatives feel slow. Treat these as
rules, not suggestions:

- **Nothing that can block goes on the main thread.** Directory listing,
  `stat`, file operations, thumbnail decoding, MIME sniffing and anything
  touching a possibly-network mount run on workers. The main thread only
  builds UI and draws.
- **Results from workers carry a generation number.** If the user has
  navigated away, stale results are dropped, not applied.
- **Virtualize every list.** Only build widgets for visible rows. A folder
  with 100,000 entries should cost the same per frame as one with 50.
- **No per-frame heap allocations in the UI path.** Use
  `context.temp_allocator` (freed at frame end) or a per-directory arena.
  Don't allocate one string per entry -- names live in one buffer per
  listing.
- **Smoothness beats idle savings.** The app draws every frame, paced by
  vsync. Sleeping until the next input event was tried in M0 and caused
  visible stutter, so keep per-frame work small instead of skipping frames.
- **Measure before optimizing, and say what you measured.** "Listing
  `/usr/lib` (6,000 entries) took 4 ms" is useful in a commit or comment;
  "should be faster" isn't.

## Group like data into structs

State that has to agree with itself belongs in one struct, not in loose
variables a caller keeps in step. A `Tab` owns its path, history, selection,
scroll position and view mode; a `Pane` owns its listing and sort order. A
new piece of per-tab state goes on `Tab`, not in a parallel array indexed by
tab number, and not in a global.

Globals are limited to the things there's genuinely one of: the app state
and the UI context, both created in `main`.

## Write the reasoning, not the mechanics

Comments explain **why**, not what. The code already says what it does; a
comment repeating `x += 1 // increment x` earns its removal. What the code
can't say on its own is a hidden constraint, a workaround for a specific
quirk, or why the obvious approach was rejected -- for example, why event
waiting is turned off while a worker job is in flight, or why a filename is
compared byte-wise rather than as UTF-8.

When a decision was made against a plausible alternative, say which
alternative and what it would have broken.

## Verify by running, not by looking

For anything involving the filesystem, check against real cases rather
than reading the code and assuming:

- names with spaces, newlines, leading dashes, invalid UTF-8, CJK and emoji
- symlinks (including broken and looping ones), unreadable directories,
  and directories that vanish while being listed
- very large directories, and slow or network mounts
- copy/move across filesystems, and onto a full disk

File operations that destroy or overwrite data get tested in a scratch
directory before they're pointed at anything real. "I haven't run this
against X" is a useful thing to say out loud when it's true.

## Formatting: no shorthand

This project prefers the plain, explicit form of a statement over any
compact alternative, even where Odin allows the shorter spelling. Code is
read far more often than it's written, and a shorthand form is one more
thing to mentally expand before the logic underneath it is visible.

- **No conditional-expression shorthand.** Odin allows
  `x := a if cond else b`. Don't use it -- write the full `if`/`else`:

  ```odin
  // Not this:
  row_height := theme.touch_row_height if input_mode == .TOUCH else theme.row_height

  // This:
  row_height: f32
  if input_mode == .TOUCH {
      row_height = theme.touch_row_height
  } else {
      row_height = theme.row_height
  }
  ```

- **No `?`-style shorthand.** This covers Odin's `or_else`, `or_return`, and
  postfix `.?` type-assertion forms. Write the explicit multi-statement form
  (a plain type assertion with `, ok`, or an explicit `if err != nil` check)
  instead of chaining a fallback or early-return onto the expression that
  produced it.

- **One-line `if` uses `do`, and only when there's no `else`.** If an `if`
  body is a single statement and there is no `else` branch, put it on one
  line with `do` rather than three lines of braces:

  ```odin
  if !tab.is_loaded do return
  if entry.is_hidden && !show_hidden do continue
  ```

  An `if` with an `else`, or a body of more than one statement, always uses
  braces on their own lines -- never `do` on both arms of an `if`/`else`.

- **No semicolons to join statements.** Each statement gets its own line.
  This includes Odin's `if init_stmt; cond { ... }` form -- split the
  init statement onto its own line above the `if` instead:

  ```odin
  // Not this:
  if err := os.write_entire_file(path, buf); err == nil {

  // This:
  err := os.write_entire_file(path, buf)
  if err == nil {
  ```

  **Exception:** the semicolons in a C-style counting loop
  (`for i := 0; i < n; i += 1`) are required Odin syntax, not a shorthand
  substituting for something longer -- there is no other way to write that
  loop header. Those stay.

- **The `->` procedure return-type arrow is unaffected.** Every `proc`
  declaration in Odin uses `-> Type` to name its return type; that's
  ordinary syntax, not a shorthand this guide is narrowing.

## Practical notes

- **Build and test often.** `./build.sh` (or `odin build src/main -out:build/file_manager`)
  and the tests in `tests/` (see README)
  after each meaningful change, so work never sits on top of a broken build
  for long.
- **Platform target.** Linux desktop first, including handheld PCs (Steam
  Deck, ROG Ally) where controller and touch are the main inputs. Linux-only
  code (inotify, the freedesktop Trash spec, `xdg-open`, `/proc/self/mounts`)
  lives in `fs` behind its own procedures, so the rest of the code doesn't
  care.
- **Check the boundaries.** `vendor:raylib` must only appear under
  `src/ui_raylib/` and `src/main/`. A quick
  `grep -rn "vendor:raylib" src/ui src/app src/fs` should return nothing.
