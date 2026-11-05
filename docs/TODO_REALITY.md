# Living TODO – Reality Anchored

**Last sync: 2026-11-06**  
**Kanonische ROM:** `backroomsSCP64_rupture_collision_v12.z64` (Google Drive)  
**Public:** https://github.com/Mxthy/BackroomsSCP64-public

## Rules
- Do not rewrite stable behaviors (scp173/096/106, data_pad, seal_node, dim_prop, sanity) without a proven bug.
- Source → GitHub; ROMs → Drive; no Nintendo baseroms in repo.
- Collision changes only after geometry review (see Rupture note).

## P0 – DONE
- [x] Actors geo/model on GitHub
- [x] Behaviors + **bhvDimProp**
- [x] Sanity + spawn block
- [x] WORLD_APPLY_CHECKLIST + BUILD_INTEGRATION
- [x] entities/*/SPEC.md
- [x] levels/ design stubs
- [x] runtime/frontend/launcher.py
- [x] Drive ROM v12 verified

## P1 – Now
- [x] Docs sync (TODO / WORK_ORDER / PUBLIC_STATUS)
- [x] Public CANONICAL_SPAWN_BLOCK includes MODEL_RUPTURE_ROOM
- [ ] Y-tune spawns (bob, bbh) – in-game
- [ ] Richer textures SCP 173/096/106
- [ ] Replace solid dim/pad/seal placeholders
- [ ] Optional bitfs / rr World-Apply

## Binary v12 already has
Sanity+HUD, SCPs, Pads, Seals, Dim-Props, Rupture Room collision, World-Apply on 6 levels.

## Rupture geometry note (intentional)
- **Visual model:** floor + 4 walls, **no** ceiling (open-top liminal box).
- **Collision:** floor + 4 walls + **top plane** so Mario cannot fly out of the volume.
Do not “fix” by deleting the collision ceiling without a design decision.

## Still workspace-only
- Full `*_script_v10.c` (large); public uses CANONICAL_SPAWN_BLOCK + README.
