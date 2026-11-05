# SCP-096 – Shy Guy (Entity Spec)

**Object ID (proposed):** 0xE1  
**Behavior:** `bhvScp096` → `src/behaviors/hs64/scp096.inc.c`  
**Model:** `src/actors/scp096/`

## Mechanics
- Docile until face observed
- Trigger → wind-up → chase
- Face detection via angle + distance
- Sanity drain + contact damage
