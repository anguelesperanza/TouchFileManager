# Touch File Manager

The name is going to change; but this a file manager meant to primarily run on linux.
Keyboard, mouse, controller and touch are all first-class inputs.

## Building

Requires the Odin compiler (raylib ships with Odin's `vendor:` collection).

```sh
./build.sh            # release-ish build -> build/file_manager
./build.sh -debug     # debug build
odin test tests/ui -out:build/ui_test   # headless UI tests
odin test tests/app -out:build/app_test # headless app tests
./build.sh -define:DEBUG_INPUT=true     # log input events and gamepad mappings
```

## Layout

| Path             | What it is                                                        |
|------------------|-------------------------------------------------------------------|
| `src/ui`         | Portable UI data layer: input in, draw commands out. No raylib.   |
| `src/ui_raylib`  | Raylib backend: input translation, rendering, text measurement.   |
| `src/app`        | The file manager itself. No raylib.                               |
| `src/main`       | Window setup and the frame loop.                                  |
| `tests/ui`       | Headless tests driving `ui` with synthetic input.                 |

See `STYLE_GUIDE.md` for conventions and package-boundary rules.
