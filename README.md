# Touch File Manager

The name is going to change; but this a file manager meant to primarily run on linux.
Keyboard, mouse, controller and touch are all first-class inputs.

## Building

Requires the Odin compiler (raylib ships with Odin's `vendor:` collection).

```sh
./build.sh            # release-ish build -> build/file_manager
./build/file_manager [folder]   # starts in your home folder, or in [folder]
./build.sh -debug     # debug build
odin test tests/ui -out:build/ui_test   # headless UI tests
odin test tests/app -out:build/app_test # headless app tests
odin test tests/fs -out:build/fs_test   # listing, sorting and loader tests
./build.sh -define:DEBUG_INPUT=true     # log input events and gamepad mappings
```

## Key and button bindings

Every keyboard and gamepad binding is read from
`~/.config/touch-file-manager/bindings.ini` (or `$XDG_CONFIG_HOME/...`). The
first run writes the file with all the defaults and comments listing the key
and button names; edit it and restart the app. Problems in the file are
printed to the terminal and the rest of it still applies. Delete the file to
get the defaults back.

## Layout

| Path             | What it is                                                        |
|------------------|-------------------------------------------------------------------|
| `src/ui`         | Portable UI data layer: input in, draw commands out. No raylib.   |
| `src/ui_raylib`  | Raylib backend: input translation, rendering, text measurement.   |
| `src/app`        | The file manager itself: tabs, views, details view. No raylib.    |
| `src/fs`         | Directory listing, sorting, background loader, places. No UI.     |
| `src/main`       | Window setup and the frame loop.                                  |
| `tests/`         | Headless tests for `ui`, `app` and `fs` (no window needed).       |

See `STYLE_GUIDE.md` for conventions and package-boundary rules.
