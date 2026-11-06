# Y-Tuning Notes (P1.2)

**Status:** Defaults only – no coordinate changes without in-game evidence.

## Canonical defaults (`CANONICAL_SPAWN_BLOCK.c`)

| Object | Y |
|--------|---|
| SCP-173 / 096 | 400 |
| SCP-106 | 300 |
| Data Pads | 350 |
| Seal | 300 |
| Dim Station / Crystal / Corridor / Grass | 200 / 150 / 100 / 50 |
| Rupture Room | 0 |

## Protocol (bob + bbh)

1. Load `backroomsSCP64_rupture_collision_v12.z64`
2. Enter Bob-omb Battlefield and Big Boo's Haunt
3. Log per object: floating / ok / sunk / clipping
4. Apply **Y-only** fixes after evidence → rebuild v13
5. Update WORLD_APPLY_CHECKLIST + TODO_REALITY

## Known risks
- bob: open terrain; hills may need +50–100 Y
- bbh: indoor floors; 400 may float in low rooms
- Rupture Y=0 needs flat floor match

## Rule
No Y edits in repo until a test log exists for that level.
