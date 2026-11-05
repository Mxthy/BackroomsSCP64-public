# BackroomsSCP64

Public SM64 ROM-hack project: **Backrooms** liminal horror + **SCP Foundation** containment + **ruptured dimensions** (broken Final Fantasy / Kingdom Hearts / Disney / Star Wars / Pokémon aesthetics).

> **Legal:** You must supply your own legally obtained Super Mario 64 US baserom to build. This repository does **not** include Nintendo ROMs or baseroms.

## Current playable build (v12)

- **Sanity** system + on-screen HUD  
- **SCP-173 / 096 / 106** (custom low-poly models + behaviors)  
- **Data Pads** & **Seal Nodes**  
- **Dimension props** + **Rupture Room** (walkable floor + solid walls)  
- Injected into: Bob-omb Battlefield, Castle Grounds, BBH, Whomp's Fortress, Shifting Sand Land, Castle Inside  

**ROM binary (large file):** Google Drive folder  
https://drive.google.com/drive/folders/1zPAkrxo6lx8p5eUVrkPDnZjqk_17JA9G  
→ `backroomsSCP64_rupture_collision_v12.z64`

## Docs to read first

| Doc | Purpose |
|-----|---------|
| [`docs/WORK_ORDER.md`](docs/WORK_ORDER.md) | **Arbeitsauftrag** – what to do next |
| [`docs/WHERE_IS_WHAT.md`](docs/WHERE_IS_WHAT.md) | Where assets, textures, behaviors live |
| [`docs/WHAT_CAN_I_PLAY_RIGHT_NOW.md`](docs/WHAT_CAN_I_PLAY_RIGHT_NOW.md) | Honest playable status |
| [`docs/TODO_REALITY.md`](docs/TODO_REALITY.md) | Living checklist |
| [`agents/TURN_RULES.md`](agents/TURN_RULES.md) | Do not break stable systems |

## Layout

```
src/actors/          Custom geos (SCP, pads, dims, rupture room)
src/textures/        32×32 RGBA16 includes
src/behaviors/hs64/  Object behaviors (treat as stable)
src/level_scripts/   Spawn injection blocks
docs/                Status, design, work order
levels/              Level *design* markdown (not all compiled)
entities/            SCP specs
runtime/             Launcher helpers
```

## Build sketch

1. HackerSM64 + MIPS toolchain + `baserom.us.z64`  
2. Copy `src/actors/*` into HackerSM64 `actors/`, register model IDs `0xE0`–`0xE9`  
3. Include `src/behaviors/hs64/*.inc.c` and behavior scripts  
4. Apply `src/level_scripts/world_apply/CANONICAL_SPAWN_BLOCK.c` to target levels  
5. `make VERSION=us`  

## Storage policy

| What | Where |
|------|--------|
| Code & docs | This GitHub repo |
| Built `.z64` | Google Drive (link above) |
| Baserom | Your machine only |

## License / assets

Custom code and docs in this repo are for the BackroomsSCP64 project.  
SCP concepts are community fiction; Mario assets remain Nintendo's.  
Do not redistribute commercial ROMs.
