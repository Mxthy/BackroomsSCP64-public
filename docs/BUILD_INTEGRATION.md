# Build integration notes (HackerSM64)

## Model IDs (suggested)

| Symbol | ID | Geo | Model |
|--------|-----|-----|-------|
| MODEL_SCP173 | 0xE0 | scp173_geo | scp173_dl |
| MODEL_SCP096 | 0xE1 | scp096_geo | scp096_dl |
| MODEL_SCP106 | 0xE2 | scp106_geo | scp106_dl |
| MODEL_DATA_PAD | 0xE3 | data_pad_geo | data_pad_dl |
| MODEL_SEAL_NODE | 0xE4 | seal_node_geo | seal_node_dl |
| MODEL_DIM_STATION | 0xE5 | dim_station_geo | dim_station_dl |
| MODEL_DIM_CRYSTAL | 0xE6 | dim_crystal_geo | dim_crystal_dl |
| MODEL_DIM_CORRIDOR | 0xE7 | dim_corridor_geo | dim_corridor_dl |
| MODEL_DIM_GRASS | 0xE8 | dim_grass_geo | dim_grass_dl |
| MODEL_RUPTURE_ROOM | 0xE9 | rupture_room_geo | rupture_room_dl |

Register in `include/model_ids.h` and actor groups as needed.

## Behaviors

| bhv symbol | init / loop |
|-----------|-------------|
| bhvScp173 | bhv_scp173_init / bhv_scp173_loop |
| bhvScp096 | bhv_scp096_init / bhv_scp096_loop |
| bhvScp106 | bhv_scp106_init / bhv_scp106_loop |
| bhvDataPad | bhv_data_pad_init / bhv_data_pad_loop |
| bhvSealNode | bhv_seal_node_init / bhv_seal_node_loop |
| bhvDimProp | bhv_dim_prop_init / bhv_dim_prop_loop |
| bhvRuptureRoom | static geo + collision (or bhvStaticObject) |

Include `src/behaviors/hs64/*.inc.c`. Call `sanity_init` / `sanity_update` / `sanity_draw_hud` from game loop / HUD.

## Spawns

`src/level_scripts/world_apply/CANONICAL_SPAWN_BLOCK.c`

## Collision

`src/actors/rupture_room/collision.inc.c`
