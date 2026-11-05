#!/usr/bin/env python3
"""BackroomsSCP64 launcher – points at local builds/ or downloaded Drive ROMs.

Usage:
  python runtime/frontend/launcher.py --list
  python runtime/frontend/launcher.py --rom rupture_collision_v12

Canonical ROM (download from Google Drive folder BackroomsSCP64):
  backroomsSCP64_rupture_collision_v12.z64
"""
from __future__ import annotations

import argparse
import subprocess
import sys
from pathlib import Path
from shutil import which

ROOT = Path(__file__).resolve().parents[2]

KNOWN = {
    "rupture_collision_v12": {
        "path": ROOT / "rom" / "builds" / "backroomsSCP64_rupture_collision_v12.z64",
        "desc": "Canonical v12: Sanity, SCPs, pads, seals, dim props, rupture collision, 6-level World-Apply",
    },
    "world_apply_v10": {
        "path": ROOT / "rom" / "builds" / "backroomsSCP64_world_apply_v10.z64",
        "desc": "World-Apply v10",
    },
}


def main() -> int:
    ap = argparse.ArgumentParser(description="BackroomsSCP64 launcher")
    ap.add_argument("--list", action="store_true")
    ap.add_argument("--rom", default="rupture_collision_v12")
    ap.add_argument("--emulator", default="mupen64plus")
    args = ap.parse_args()

    if args.list:
        for k, v in KNOWN.items():
            exists = v["path"].is_file()
            print(f"{k:24} {'OK' if exists else 'MISSING':7} {v['desc']}")
            print(f"  -> {v['path']}")
        print("\nDrive folder: https://drive.google.com/drive/folders/1zPAkrxo6lx8p5eUVrkPDnZjqk_17JA9G")
        return 0

    entry = KNOWN.get(args.rom)
    if not entry:
        print("Unknown ROM key. Use --list", file=sys.stderr)
        return 1
    rom = entry["path"]
    if not rom.is_file():
        print(f"ROM not found: {rom}", file=sys.stderr)
        print("Download v12 from Google Drive into rom/builds/", file=sys.stderr)
        return 1

    emu = which(args.emulator)
    if not emu:
        print(f"Emulator '{args.emulator}' not on PATH. ROM is at:\n  {rom}")
        return 0
    return subprocess.call([emu, str(rom)])


if __name__ == "__main__":
    raise SystemExit(main())
