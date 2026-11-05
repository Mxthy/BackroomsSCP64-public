# SCP-173 – The Sculpture (Entity Spec)

**Object ID (proposed):** 0xE0  
**Behavior:** `bhvScp173` → `src/behaviors/hs64/scp173.inc.c`  
**Model:** `src/actors/scp173/`

## Mechanics
| Condition | Action |
|-----------|--------|
| Player looking (LoS) | Frozen |
| Looks away / blink | High-speed toward Mario |
| Distance < snap range | Damage |

Blink simulation + angle check implemented in behavior.
