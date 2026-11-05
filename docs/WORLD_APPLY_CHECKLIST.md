# World-Apply Checklist

**Kanonische ROM:** `backroomsSCP64_rupture_collision_v12.z64` (Drive)
**Block:** `src/level_scripts/world_apply/CANONICAL_SPAWN_BLOCK.c`
**Scripts v10:** `src/level_scripts/world_apply/*_script_v10.c` (workspace; large)

| Level | SCPs | Pads | Seals | Dim-Props | In Binary |
|-------|------|------|-------|-----------|----------|
| bob | ☑ | ☑ | ☑ | ☑ | ☑ |
| castle_grounds | ☑ | ☑ | ☑ | ☑ | ☑ |
| bbh | ☑ | ☑ | ☑ | ☑ | ☑ |
| wf | ☑ | ☑ | ☑ | ☑ | ☑ |
| ssl | ☑ | ☑ | ☑ | ☑ | ☑ |
| castle_inside | ☑ | ☑ | ☑ | ☑ | ☑ |
| bitfs / rr | ☐ | ☐ | ☐ | ☐ | optional |

## Notes
- Positions are generic; may need Y-tune per course.
- Behaviors stable: do not rewrite during World-Apply.
- `bhvDimProp` → `src/behaviors/hs64/dim_prop.inc.c`
