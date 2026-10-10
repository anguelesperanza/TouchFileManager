#!/usr/bin/env bash
# Usage: ./build.sh [extra odin flags]     e.g. ./build.sh -debug
set -euo pipefail
cd "$(dirname "$0")"

# The portable packages must never depend on raylib (see STYLE_GUIDE.md,
# "Package boundaries").
portable=()
for dir in src/ui src/app src/fs; do
	if [ -d "$dir" ]; then
		portable+=("$dir")
	fi
done
if grep -rn "vendor:raylib" "${portable[@]}"; then
	echo "error: vendor:raylib imported outside src/ui_raylib and src/main" >&2
	exit 1
fi

mkdir -p build
odin build src/main -out:build/file_manager -vet -strict-style "$@"
