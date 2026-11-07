#!/usr/bin/env bash
# Apply the BackroomsSCP64 source integration to a local HackerSM64 checkout.
# Default: source integration + verification only. Use --build <tag> only when
# a complete MIPS toolchain and local baserom.us.z64 are available.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
HACKERSM64_DIR="${HACKERSM64_DIR:-$ROOT/toolchain/HackerSM64}"
TAG="${1:-}"
BUILD=0
if [[ "${1:-}" == "--build" ]]; then BUILD=1; TAG="${2:-pipeline_v13}"; fi

echo "[inject] ROOT=$ROOT"
echo "[inject] HACKERSM64_DIR=$HACKERSM64_DIR"

if [[ ! -d "$HACKERSM64_DIR" ]]; then
  echo "[inject] HackerSM64 tree missing. Set HACKERSM64_DIR or extract toolchain." >&2
  exit 1
fi

# Copy Backrooms sources into decomp tree (paths may need project-specific adjust)
mkdir -p "$HACKERSM64_DIR/src/game" "$HACKERSM64_DIR/src/game/behaviors"

if [[ -d "$ROOT/src/behaviors/hs64" ]]; then
  cp -a "$ROOT/src/behaviors/hs64/." "$HACKERSM64_DIR/src/game/behaviors/hs64/" 2>/dev/null || \
    mkdir -p "$HACKERSM64_DIR/src/game/behaviors/hs64" && cp -a "$ROOT/src/behaviors/hs64/." "$HACKERSM64_DIR/src/game/behaviors/hs64/"
fi
if [[ -d "$ROOT/src/objectives" ]]; then
  mkdir -p "$HACKERSM64_DIR/src/game/objectives"
  cp -a "$ROOT/src/objectives/." "$HACKERSM64_DIR/src/game/objectives/"
fi
if [[ -f "$ROOT/src/sanity.c" ]]; then
  cp -a "$ROOT/src/sanity.c" "$ROOT/src/sanity.h" "$HACKERSM64_DIR/src/game/" 2>/dev/null || true
fi

echo "[inject] source copy done"
if [[ "$BUILD" -eq 1 ]]; then
  echo "[inject] build requested tag=$TAG"
  (cd "$HACKERSM64_DIR" && make -j"$(nproc)" VERSION=us) || {
    echo "[inject] build failed – no ROM tagged" >&2
    exit 2
  }
  mkdir -p "$ROOT/rom/builds"
  cp -f "$HACKERSM64_DIR/build/us_n64/sm64.us.z64" "$ROOT/rom/builds/backroomsSCP64_${TAG}.z64" 2>/dev/null \
    || cp -f "$HACKERSM64_DIR/build/us_n64/sm64.z64" "$ROOT/rom/builds/backroomsSCP64_${TAG}.z64"
  echo "[inject] wrote rom/builds/backroomsSCP64_${TAG}.z64"
fi
echo "[inject] OK"
