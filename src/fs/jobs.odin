package fs

import "base:runtime"
import "core:strings"
import "core:sync"
import "core:thread"

// Runs file operations (copy, move, trash, delete) on a worker thread, one
// job at a time, in the order they were started. Running them one at a
// time keeps two pastes into the same folder from racing for "name (2)",
// and keeps the disk from thrashing between two big copies.
//
// The UI reads a running job's Progress (atomics) every frame and collects
// finished jobs with take_finished_jobs. Everything a job owns is allocated
// with the heap allocator: it's created on one thread and freed on another.

Job_Kind :: enum u8 {
	COPY,
	MOVE,
	TRASH,
	DELETE,
	// sources[0] -> destination (a full path).
	RENAME,
	// A new, uniquely named folder or empty file inside destination.
	CREATE_FOLDER,
	CREATE_FILE,
}

// The names new items start with (then "New Folder (2)" and so on).
NEW_FOLDER_NAME :: "New Folder"
NEW_FILE_NAME :: "New File"

Job_Failure :: struct {
	path:  string,
	error: Op_Error,
}

Job :: struct {
	kind:        Job_Kind,
	sources:     []string,
	// The folder to copy, move or create into; the new full path for a
	// rename; unused for trash and delete.
	destination: string,
	// For trash: the home trash folder, and the deletion time to record.
	home_trash:    string,
	deletion_date: string,

	progress: Progress,
	started:  bool,
	finished: bool,

	// Filled in by the worker; read by the UI only once the job is finished.
	created:  [dynamic]string,
	failures: [dynamic]Job_Failure,
}

Job_Runner :: struct {
	mutex:    sync.Mutex,
	wake:     sync.Cond,
	queue:    [dynamic]^Job,
	finished: [dynamic]^Job,
	// The job the worker is on, for showing its progress.
	current:  ^Job,
	worker:   ^thread.Thread,
	quitting: bool,
}

job_create :: proc(kind: Job_Kind, sources: []string, destination: string = "") -> ^Job {
	heap := runtime.heap_allocator()
	job := new(Job, heap)
	job.kind = kind
	job.sources = make([]string, len(sources), heap)
	for source, i in sources do job.sources[i] = strings.clone(source, heap)
	job.destination = strings.clone(destination, heap)
	job.created = make([dynamic]string, heap)
	job.failures = make([dynamic]Job_Failure, heap)
	return job
}

job_destroy :: proc(job: ^Job) {
	heap := runtime.heap_allocator()
	for source in job.sources do delete(source, heap)
	delete(job.sources, heap)
	delete(job.destination, heap)
	delete(job.home_trash, heap)
	delete(job.deletion_date, heap)
	for path in job.created do delete(path, heap)
	delete(job.created)
	for failure in job.failures do delete(failure.path, heap)
	delete(job.failures)
	free(job, heap)
}

job_runner_init :: proc(runner: ^Job_Runner) {
	runner.queue = make([dynamic]^Job, runtime.heap_allocator())
	runner.finished = make([dynamic]^Job, runtime.heap_allocator())
	runner.worker = thread.create_and_start_with_poly_data(runner, job_worker)
}

// Cancels what's running, drops what's queued, and waits for the worker.
job_runner_destroy :: proc(runner: ^Job_Runner) {
	sync.mutex_lock(&runner.mutex)
	runner.quitting = true
	if runner.current != nil do sync.atomic_store(&runner.current.progress.cancel, true)
	sync.cond_broadcast(&runner.wake)
	sync.mutex_unlock(&runner.mutex)

	thread.join(runner.worker)
	thread.destroy(runner.worker)
	for job in runner.queue do job_destroy(job)
	for job in runner.finished do job_destroy(job)
	delete(runner.queue)
	delete(runner.finished)
}

start_job :: proc(runner: ^Job_Runner, job: ^Job) {
	sync.mutex_lock(&runner.mutex)
	defer sync.mutex_unlock(&runner.mutex)
	append(&runner.queue, job)
	sync.cond_signal(&runner.wake)
}

// The running job, or nil. Only its `kind` and `progress` may be read
// while it runs.
current_job :: proc(runner: ^Job_Runner) -> ^Job {
	sync.mutex_lock(&runner.mutex)
	defer sync.mutex_unlock(&runner.mutex)
	return runner.current
}

queued_job_count :: proc(runner: ^Job_Runner) -> int {
	sync.mutex_lock(&runner.mutex)
	defer sync.mutex_unlock(&runner.mutex)
	return len(runner.queue)
}

cancel_current_job :: proc(runner: ^Job_Runner) {
	sync.mutex_lock(&runner.mutex)
	defer sync.mutex_unlock(&runner.mutex)
	if runner.current != nil do sync.atomic_store(&runner.current.progress.cancel, true)
}

// Moves finished jobs into `out`. The caller owns them: job_destroy each.
take_finished_jobs :: proc(runner: ^Job_Runner, out: ^[dynamic]^Job) {
	sync.mutex_lock(&runner.mutex)
	defer sync.mutex_unlock(&runner.mutex)
	for job in runner.finished do append(out, job)
	clear(&runner.finished)
}

// Runs a job to completion on the calling thread. The worker uses it; so
// do tests.
run_job :: proc(job: ^Job) {
	heap := runtime.heap_allocator()
	files, bytes: i64
	switch job.kind {
	case .COPY, .MOVE:
		for source in job.sources do measure(source, &files, &bytes)
	case .TRASH, .DELETE, .RENAME:
		files = i64(len(job.sources))
	case .CREATE_FOLDER, .CREATE_FILE:
		files = 1
	}
	sync.atomic_store(&job.progress.files_total, files)
	sync.atomic_store(&job.progress.bytes_total, bytes)

	if job.kind == .CREATE_FOLDER || job.kind == .CREATE_FILE {
		name := NEW_FOLDER_NAME
		if job.kind == .CREATE_FILE do name = NEW_FILE_NAME
		// Retry on EXISTS: something may take the free name between the
		// check and the create.
		error := Op_Error.EXISTS
		for attempt := 0; attempt < 5 && error == .EXISTS; attempt += 1 {
			target := unique_destination(job.destination, name, heap)
			if job.kind == .CREATE_FOLDER {
				error = make_directory(target)
			} else {
				error = create_empty_file(target)
			}
			if error == .NONE {
				append(&job.created, target)
			} else {
				delete(target, heap)
			}
		}
		if error != .NONE do append(&job.failures, Job_Failure{path = strings.clone(job.destination, heap), error = error})
		add_progress(&job.progress, 1, 0)
		job.finished = true
		return
	}

	for source in job.sources {
		error := Op_Error.NONE
		switch job.kind {
		case .COPY, .MOVE:
			// Pasting into the folder it came from makes "name (2)"; a move
			// there is simply nothing to do.
			if job.kind == .MOVE && parent_path(source) == job.destination do continue
			target := unique_destination(job.destination, base_name(source), heap)
			if job.kind == .COPY {
				error = copy_entry(source, target, &job.progress)
			} else {
				error = move_entry(source, target, &job.progress)
			}
			if error == .NONE {
				append(&job.created, target)
			} else {
				delete(target, heap)
			}
		case .TRASH:
			error = trash_entry(source, job.home_trash, job.deletion_date)
			add_progress(&job.progress, 1, 0)
		case .DELETE:
			error = delete_entry(source, &job.progress)
		case .RENAME:
			error = rename_no_replace(source, job.destination)
			if error == .NONE do append(&job.created, strings.clone(job.destination, heap))
			add_progress(&job.progress, 1, 0)
		case .CREATE_FOLDER, .CREATE_FILE:
		}
		if error != .NONE {
			append(&job.failures, Job_Failure{path = strings.clone(source, heap), error = error})
		}
		if error == .CANCELLED do break
		free_all(context.temp_allocator)
	}
	job.finished = true
}

@(private)
job_worker :: proc(runner: ^Job_Runner) {
	for {
		sync.mutex_lock(&runner.mutex)
		for len(runner.queue) == 0 && !runner.quitting {
			sync.cond_wait(&runner.wake, &runner.mutex)
		}
		if runner.quitting {
			sync.mutex_unlock(&runner.mutex)
			return
		}
		job := runner.queue[0]
		ordered_remove(&runner.queue, 0)
		runner.current = job
		job.started = true
		sync.mutex_unlock(&runner.mutex)

		run_job(job)
		free_all(context.temp_allocator)

		sync.mutex_lock(&runner.mutex)
		runner.current = nil
		append(&runner.finished, job)
		sync.mutex_unlock(&runner.mutex)
	}
}
