# Where is what? – BackroomsSCP64

Stand: 2026-11-05 (v12)

## Three locations

| Location | Role | URL / Path |
|----------|------|------------|
| **GitHub** `Mxthy/BackroomsSCP64-public` | Source of truth for docs + code | https://github.com/Mxthy/BackroomsSCP64-public |
| **Google Drive** folder `BackroomsSCP64` | Large binaries (ROMs) | https://drive.google.com/drive/folders/1zPAkrxo6lx8p5eUVrkPDnZjqk_17JA9G |
| **Grok project** `artifacts/BackroomsSCP64` | Active workspace | this project |

**Do not commit `.z64` or baseroms to Git** (see `.gitignore`).

## Canonical playable ROM

- **File:** `backroomsSCP64_rupture_collision_v12.z64`
- **Drive:** same name in folder above
- **Workspace:** `rom/builds/backroomsSCP64_rupture_collision_v12.z64`

## Source map

### Actors
| Path | What |
|------|------|
| `src/actors/scp173/` | SCP-173 geo + model |
| `src/actors/scp096/` | SCP-096 |
| `src/actors/scp106/` | SCP-106 |
| `src/actors/data_pad/` | Collectible + texture |
| `src/actors/seal_node/` | Seal + texture |
| `src/actors/dim_*` | Dimension props |
| `src/actors/rupture_room/` | Floor+walls model **+ collision** |

### Textures
| Path | Used by |
|------|--------|
| `src/textures/tex_data_pad.inc.c` | Data Pad |
| `src/textures/tex_seal_node.inc.c` | Seal |
| `src/textures/tex_dim_crystal.inc.c` | Crystal |
| Format | 32×32 RGBA16 as `u16`, `gsDPLoadTextureBlock` |

### Behaviors (stable – do not casually rewrite)
| Path | Role |
|------|------|
| `src/behaviors/hs64/scp173.inc.c` | Don’t-blink + sanity |
| `src/behaviors/hs64/scp096.inc.c` | Face trigger + chase |
| `src/behaviors/hs64/scp106.inc.c` | Stalk |
| `src/behaviors/hs64/data_pad.inc.c` | Collect |
| `src/behaviors/hs64/seal_node.inc.c` | Seal |
| `src/sanity.c` / `src/sanity.h` | Global sanity + HUD |

### Level scripts
| Path | Role |
|------|------|
| `src/level_scripts/world_apply/CANONICAL_SPAWN_BLOCK.c` | Spawn list |
| `src/level_scripts/world_apply/*_script_v10.c` | 6 levels patched |

### Design-only (not compiled level geo yet)
| Path | Role |
|------|------|
| `levels/ruptured-dimensions/*.md` | Broken FF/KH/Disney/SW/Pokémon designs |
| `levels/foundation_hub/DESIGN.md` | Hub concept |
| `entities/*/SPEC.md` | Entity specs |

## Legal
Nintendo baseroms and commercial ROMs must **not** be published. Only custom source, docs, and optional self-built ROMs on Drive.
