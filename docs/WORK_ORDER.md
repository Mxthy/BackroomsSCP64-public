# Arbeitsauftrag – BackroomsSCP64 ab Stand v12

**Datum:** 2026-11-06  
**Kanonische ROM:** `backroomsSCP64_rupture_collision_v12.z64`  
**Repo:** https://github.com/Mxthy/BackroomsSCP64-public  
**Drive (ROMs):** https://drive.google.com/drive/folders/1zPAkrxo6lx8p5eUVrkPDnZjqk_17JA9G  

Lies zuerst: `docs/WHERE_IS_WHAT.md`, `docs/TODO_REALITY.md`, `docs/BUILD_INTEGRATION.md`, `agents/TURN_RULES.md`.

---

## Ist-Zustand

**Im Binary (v12) spielbar**
- Sanity 0–100 + HUD-Text
- SCP-173 / 096 / 106 (eigene Geos + Behaviors)
- Data Pads, Seal Nodes
- Dimension-Props (Station, Crystal, Corridor, Grass)
- Rupture Room Actor mit Collision (Boden + Wände + Decken-Plane)
- Spawns in: bob, castle_grounds, bbh, wf, ssl, castle_inside

**Public Source**
- Actors, behaviors (inkl. bhvDimProp), sanity, textures (solid placeholders)
- CANONICAL_SPAWN_BLOCK inkl. MODEL_RUPTURE_ROOM
- Docs, entities SPECs, level design stubs, slim launcher

**Noch nicht**
- Eigene Levels in SM64-Level-Tabelle (Objects in Vanilla-Kursen)
- Unique Textures an allen Props
- Y-Tuning pro Kurs (In-Game)
- bitfs / rr optional

---

## P1 Reihenfolge

| ID | Paket | Ziel |
|----|-------|------|
| P1.0 | Docs-Sync | Einheitlicher Status |
| P1.1 | Rupture public spawn | CANONICAL_SPAWN_BLOCK enthält Rupture Room |
| P1.2 | Y-Tuning | bob + bbh In-Game prüfen |
| P1.3 | SCP-Texturen | 173, 096, 106 |
| P1.4 | Dimension-Texturen | Platzhalter ersetzen |
| P1.5 | bitfs / rr | Optional World-Apply |

---

## Schutzregeln
- Behaviors SCP/Sanity/DimProp nicht ohne Bug ändern
- Keine Baseroms / .z64 ins Repo
- Collision nur nach Geometrie-Review ändern
- Nach Binary-Änderung: Checklist + TODO aktualisieren

## Wo was liegt
Siehe `docs/WHERE_IS_WHAT.md`.
