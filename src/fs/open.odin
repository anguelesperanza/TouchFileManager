package fs

import "core:os"
import "core:thread"

// Opens a file in the user's default application. Returns false only if
// xdg-open itself couldn't be started; whether the application then launches
// is up to xdg-open.
open_with_default_app :: proc(path: string) -> bool {
	// os.process_start copies what it needs before returning, so the
	// command can live in temp memory.
	command := []string{"xdg-open", path}
	process, err := os.process_start(os.Process_Desc{command = command})
	if err != nil do return false

	// The child has to be waited on or it lingers as a zombie, and
	// xdg-open can take a moment to return. A throwaway thread does the
	// waiting so the UI never does.
	thread.create_and_start_with_poly_data(process, proc(process: os.Process) {
		_, _ = os.process_wait(process)
	}, self_cleanup = true)
	return true
}
