# Arbeitsauftrag – BackroomsSCP64 ab Stand v12

**Datum:** 2026-11-05  
**Kanonische ROM:** `backroomsSCP64_rupture_collision_v12.z64`  
**Repo:** https://github.com/Mxthy/BackroomsSCP64-public  
**Drive (ROMs):** https://drive.google.com/drive/folders/1zPAkrxo6lx8p5eUVrkPDnZjqk_17JA9G  

Lies zuerst: `docs/WHERE_IS_WHAT.md`, `docs/WHAT_CAN_I_PLAY_RIGHT_NOW.md`, `agents/TURN_RULES.md`.

---

## Ist-Zustand (kurz)

**Im Binary spielbar**
- Sanity 0–100 + HUD-Text
- SCP-173 / 096 / 106 (eigene Geos + Behaviors)
- Data Pads, Seal Nodes
- Dimension-Props (Station, Crystal, Corridor, Grass)
- Rupture Room Actor mit **Collision** (Boden + Wände)
- Spawns in: bob, castle_grounds, bbh, wf, ssl, castle_inside

**Noch nicht**
- Eigene Level in der SM64-Level-Tabelle (nur Objects in Vanilla-Kursen)
- Unique Textures an *allen* Props (nur Pad/Seal/Crystal)
- bitfs / rr World-Apply
- Feines Y-Tuning pro Kurs
- Ruptured-Dimension-Levels als echte Level-Geo (nur Design-Markdown)
- Dauerhafte CI / Grok-Automation (optional)

**Regeln**
- Behaviors unter `src/behaviors/hs64/` und Sanity **nicht** umbauen, solange World/Assets laufen
- Keine Baseroms / Nintendo-ROMs ins öffentliche Repo

---

## Umgebung vorbereiten (einmalig)

1. **Repo klonen**
   ```bash
   git clone https://github.com/Mxthy/BackroomsSCP64-public.git
   cd BackroomsSCP64-public
   ```
2. **HackerSM64 + Toolchain**
   - HackerSM64-Source (zip oder Clone) bereitstellen
   - `gcc-mips-linux-gnu` / `binutils-mips-linux-gnu`
   - US baserom als `baserom.us.z64` (privat, lokal)
3. **Custom source einbinden**
   - Actors aus `src/actors/` → `HackerSM64/actors/`
   - Behaviors aus `src/behaviors/hs64/` → `src/game/behaviors/`
   - Model-IDs `0xE0`–`0xE9`
   - Spawn-Block: `src/level_scripts/world_apply/CANONICAL_SPAWN_BLOCK.c`
4. **ROM testen**
   - v12 von Drive laden oder selbst bauen
   - Emulator: Mupen64Plus / parallel o.Ä.
5. **Optional:** Fast64 + Blender für neue Level-Geo

---

## Priorisierte Aufgaben (P0 → P2)

### P0 – Stabilität & Auffindbarkeit
| # | Aufgabe | Erfolg |
|---|---------|--------|
| P0.1 | Restliche Docs/Actors von Workspace → GitHub pushen | Repo enthält vollen `src/` + `docs/` Stand |
| P0.2 | README mit Build-Schritten + Links Drive/GitHub | Fremde können starten ohne Chat-History |
| P0.3 | v12 ROM auf Drive verifizieren | Download funktioniert |

### P1 – World & Feel
| # | Aufgabe | Erfolg |
|---|---------|--------|
| P1.1 | Y-Koordinaten pro Level anpassen | Testlauf bob + bbh ok |
| P1.2 | Textures an scp173/096/106 + dim props | Models texturiert |
| P1.3 | Optional: bitfs + rr World-Apply | Checklist ☑ |

### P2 – Echte Dimensionen
| # | Aufgabe | Erfolg |
|---|---------|--------|
| P2.1 | Ein Rupture-Level als eigenes Level (Fast64) | Level wählbar |
| P2.2 | Design `levels/ruptured-dimensions/01_…` in Geo | Spielbare Zone |
| P2.3 | Objectives Document → Secure → Survive → Seal | Spielziel klar |

### P3 – Optional
| # | Aufgabe |
|---|--------|
| P3.1 | Grok Automation: Docs/Checklist-Sync |
| P3.2 | Wix-Landing: Lore + Download + GitHub |

## Arbeitsweise
1. Ein Task aus P0/P1 wählen  
2. Behaviors nicht anfassen ohne klaren Bug  
3. Nach Binary-Änderung: WHAT_CAN_I_PLAY + Checklist updaten  
4. Source → GitHub; ROMs → Drive  
