# Living TODO – Reality Anchored

**Last sync: 2026-11-06**  
**Kanonische ROM:** `backroomsSCP64_rupture_collision_v12.z64` (Google Drive)
**Public repo:** https://github.com/Mxthy/BackroomsSCP64-public

## Rules
- Do not rewrite stable behaviors (scp173/096/106, data_pad, seal_node, dim_prop, sanity) without a bug.
- Source → GitHub; ROMs → Drive; no Nintendo baseroms in repo.

## P0 – Public consistency (this wave)
- [x] Actors geo/model on GitHub
- [x] Behaviors + **bhvDimProp**
- [x] Sanity + spawn block
- [x] WORLD_APPLY_CHECKLIST + BUILD_INTEGRATION
- [ ] Full `*_script_v10.c` level scripts (large; workspace)
- [ ] runtime/launcher.py
- [ ] entities + levels design markdown

## Done in binary v12
- Sanity + HUD, SCP-173/096/106, DataPads, Seals, Dim-Props, Rupture Room collision
- World-Apply: bob, castle_grounds, bbh, wf, ssl, castle_inside

## P1 next
- Y-tune spawns per course
- Richer textures (placeholders are solid RGBA16)
- Optional bitfs/rr World-Apply

## P2
- Real rupture level geo (Fast64)
- Objectives Document → Secure → Survive → Seal
