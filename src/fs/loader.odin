package fs

import "base:runtime"
import "core:strings"
import "core:sync"
import "core:thread"

// Lists directories on worker threads so the UI never waits on the disk.
//
// Every request carries an owner (a view) and a generation. A newer request
// from the same owner replaces any older one still queued, and the owner
// ignores results whose generation isn't its latest -- so navigating quickly
// through several folders only ever shows the last one.
//
// Everything that crosses between threads -- request paths, listings -- is
// allocated with the plain heap allocator, which is thread-safe, instead of
// whatever context.allocator the caller or worker happens to have.
//
// Several workers, not one: a request stuck on a dead network mount ties up
// only its own worker, and other views keep loading.

LOADER_WORKERS :: 4

List_Request :: struct {
	owner:       u64,
	generation:  u64,
	path:        string,
	// The listing is sorted on the worker with these, so a 100,000-entry
	// folder doesn't stall the UI for a sort when it arrives.
	sort:        Sort_Options,
	show_hidden: bool,
}

List_Result :: struct {
	owner:      u64,
	generation: u64,
	// The receiver owns it and must call listing_free.
	listing:    ^Listing,
}

Loader :: struct {
	mutex:    sync.Mutex,
	wake:     sync.Cond,
	requests: [dynamic]List_Request,
	results:  [dynamic]List_Result,
	workers:  [LOADER_WORKERS]^thread.Thread,
	quitting: bool,
}

loader_init :: proc(loader: ^Loader) {
	loader.requests = make([dynamic]List_Request, runtime.heap_allocator())
	loader.results = make([dynamic]List_Result, runtime.heap_allocator())
	for &worker in loader.workers {
		worker = thread.create_and_start_with_poly_data(loader, loader_worker)
	}
}

// Waits for workers to finish their current listing. A worker blocked on a
// hung mount would hold this up, so call it only at exit.
loader_destroy :: proc(loader: ^Loader) {
	sync.mutex_lock(&loader.mutex)
	loader.quitting = true
	sync.cond_broadcast(&loader.wake)
	sync.mutex_unlock(&loader.mutex)

	for worker in loader.workers {
		thread.join(worker)
		thread.destroy(worker)
	}
	for request in loader.requests do delete(request.path, runtime.heap_allocator())
	for result in loader.results do listing_free(result.listing)
	delete(loader.requests)
	delete(loader.results)
}

request_listing :: proc(loader: ^Loader, owner: u64, generation: u64, path: string, sort: Sort_Options, show_hidden: bool) {
	sync.mutex_lock(&loader.mutex)
	defer sync.mutex_unlock(&loader.mutex)

	for i := len(loader.requests) - 1; i >= 0; i -= 1 {
		if loader.requests[i].owner == owner {
			delete(loader.requests[i].path, runtime.heap_allocator())
			ordered_remove(&loader.requests, i)
		}
	}
	append(&loader.requests, List_Request{
		owner = owner,
		generation = generation,
		path = strings.clone(path, runtime.heap_allocator()),
		sort = sort,
		show_hidden = show_hidden,
	})
	sync.cond_signal(&loader.wake)
}

// Moves finished listings into `out`. Called once per frame; never blocks
// for longer than it takes to swap a few pointers.
take_results :: proc(loader: ^Loader, out: ^[dynamic]List_Result) {
	sync.mutex_lock(&loader.mutex)
	defer sync.mutex_unlock(&loader.mutex)
	for result in loader.results do append(out, result)
	clear(&loader.results)
}

@(private)
loader_worker :: proc(loader: ^Loader) {
	for {
		sync.mutex_lock(&loader.mutex)
		for len(loader.requests) == 0 && !loader.quitting {
			sync.cond_wait(&loader.wake, &loader.mutex)
		}
		if loader.quitting {
			sync.mutex_unlock(&loader.mutex)
			return
		}
		request := loader.requests[0]
		ordered_remove(&loader.requests, 0)
		sync.mutex_unlock(&loader.mutex)

		heap := runtime.heap_allocator()
		listing := new(Listing, heap)
		listing^ = list_directory(request.path, heap)
		delete(request.path, heap)
		if listing.error == .NONE {
			sort_entries(listing, &listing.order, request.sort, request.show_hidden)
			listing.order_options = request.sort
			listing.order_show_hidden = request.show_hidden
			listing.has_order = true
		}
		free_all(context.temp_allocator)

		sync.mutex_lock(&loader.mutex)
		append(&loader.results, List_Result{owner = request.owner, generation = request.generation, listing = listing})
		sync.mutex_unlock(&loader.mutex)
	}
}
