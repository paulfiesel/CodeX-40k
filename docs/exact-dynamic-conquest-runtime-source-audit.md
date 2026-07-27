# Exact Dynamic Conquest and entity-runtime source audit

## Source artifact

Private artifact: `dynamic-conquest-source-slice.zip`

- SHA-256: `c7cbacaea8399b8465efb9264117de95fc893d03bbd5e47671823250c5401acc`
- schema: 2
- profiles: `dynamic-conquest`, `entity-runtime`, `human-rig`
- included text files: 15,824
- scanned text files: 24,143
- omitted matching binary or oversized files: 14,971
- load order: West-81, Code-X, SC Platform, Last Victim 40K

The private archive is not committed. This document records only commit-safe hashes, counts, path-level findings, and compatibility decisions.

## Source coverage

| Source | Included text | Omitted matching files |
|---|---:|---:|
| West-81 | 6,508 | 11,816 |
| Code-X | 3,284 | 1,597 |
| SC Platform | 0 | 1 |
| Last Victim 40K | 6,032 | 1,557 |

The export contains the complete text-side entry points required to reason about campaign registration, research, unit rosters, tactical AI, global entity interactions, human rigs, crews, vehicles, weapons, inventories, attachments, and save-facing identifiers.

## Packed entity archives

The exporter intentionally recorded, but did not copy, these matching binary archives:

| Source | Path | Size | SHA-256 |
|---|---|---:|---|
| Code-X | `resource/entity.pak` | 11,741,124,260 | `f31ec83d113523bc5c2a228904745bd32c7d2394fdcae23056e153b4c9bf3edf` |
| SC Platform | `resource/entity.pak` | 8,016,757 | `d22a4fb30129a23510574e2da15563954a308954d2ee77c2fb244389e638031d` |
| Last Victim 40K | `resource/entity.pak` | 1,523,005,204 | `4ce92b55369dd0cb55aab25a6827fd48b0699530b588fb07e175997a427921a4` |

Same-name package precedence remains a runtime risk. The compatibility mod must not copy these archives. Validation will instead use loose late overrides, aliases, and representative spawn tests to detect missing or shadowed prototypes.

## Global loose-file winners

### `resource/set/interaction_entity/entity.set`

Only West-81 and Code-X provide this loose path. Code-X wins before SC and LV load and remains the effective loose definition because neither later dependency supplies it.

- West-81 SHA-256: `4fc7fa1eb45396771cb7c3d692a935d4171afd355715f1f2b9ae008c3dffe617`
- Code-X SHA-256: `6b6b5e1791cb5e66deffa1cf6f5ecc81c4197112a8a53b85cffd94b89574007c`

Code-X's file retains the modern vehicle, tank, weapon, construction, FPV, robot, airborne, helicopter, point-defense, and related include chains. No compatibility-owned replacement is justified unless runtime evidence proves a missing LV include.

### `resource/properties/human.ext`

Only West-81 and Code-X provide this loose path. Code-X wins and Last Victim does not replace it loosely.

- West-81 SHA-256: `96bc6fd1db9ce9f0075f533c82814907c124f0b4e3c9eec9f3186590268c6eb1`
- Code-X SHA-256: `b4d5b9a19e6fc6b99a73f1764aa3a8ab524e9dcf88d4d4b4059386b6891fbe92`

The remaining rig risk is therefore internal packed content and LV-specific inheritance, not a loose `human.ext` overwrite.

### `resource/set/entitymanager.set`

Only West-81 and Code-X provide this loose root. Code-X wins.

- West-81 SHA-256: `1e2672697a5b91f898de50fbe59d24093bf72951ed2916c4ff40c00e1db3e17a`
- Code-X SHA-256: `eb448d8e3b64ba118ba263f0bd9ea7530e6f1ee5fc4b5a867c81a60e19493abe`

Last Victim adds `resource/set/SC_entitymanager/SC_DLC_LV40k_em.inc`, including Space Marine, Ork, and Tyranid entity groups, without replacing the root. The first runtime slice must prove those groups remain registered under the effective load order.

## Dynamic Conquest script collision

Three dependencies provide both tactical mode scripts:

| Path | West-81 | Code-X | Last Victim winner |
|---|---|---|---|
| `resource/script/multiplayer/modes/conquest.lua` | `534ec5c230fcd695f105cf3bd00d0f1e5280876bcb69977721622d75a719224f` | `e3a88a1f947f919e84222c14ddf5d462825c9982b797f4fffecba0be0185512e` | `889b5dfd86f52e167a3ffdc6d80e91109500bb61b740638d4cb9abba45407ad6` |
| `resource/script/multiplayer/modes/utility.lua` | `39735005f20b302058a2ad86e5d8eb46fecf97862f42bf69d9bcd01382736cde` | `5d59ec9ae2bfababada198e9c0acc6136606cf57095c58b824b91cea7c7a4821` | `43796409a819b7a44e0df9521bda474ad0083aacc81ada1e6a9d56387d645bcf` |

Last Victim currently wins both paths, but its versions use the older campaign identifier access. Code-X contains the current `BotApi.Conquest` fields, `GameModeSpawnUnit`, conquest spawn-point rotation, purchase-time unit selection, retry handling, and `PrepTimeOver` event integration.

Runtime ruling: compatibility-owned tactical scripts will use Code-X as the authoritative base, then add only proven LV/SC requirements. The donor's older wholesale script replacements will not be used.

## Dynamic Conquest registration findings

### Code-X NATO

Code-X supplies a complete first-side chain:

- army `nato`, ID 2;
- `unit_research_nato.set`;
- `roster_conquest.set` with NATO infantry and unit includes;
- `Purchases["conquest.nato"]`;
- modern Conquest tactical script behavior.

### Last Victim Space Marines

Last Victim supplies:

- army `sms`, ID 96;
- multiplayer Space Marine infantry and unit definitions;
- `SC_DLC_LV40k_conquest.set`;
- `early.sms.lua` purchase content;
- LV/SC entity groups and rig content.

However, `unit_research_sms.set` is not a Space Marine tree. It is byte-identical to the Ork research file. The same incorrect 5,742-byte Ork tree is duplicated under `csm`, `dch`, `eld`, `igc`, `ork`, and `sms`; `igt` is empty. This confirms that LV's campaign layer is incomplete despite its multiplayer content being present.

Runtime ruling: create a minimal compatibility-owned `unit_research_sms.set` for the first slice. Do not modify or copy the broken parent tree wholesale.

## First runtime file plan

After the source gate is promoted to `ready`, the first draft runtime PR will be limited to the files proven necessary by this audit:

1. `resource/script/multiplayer/modes/utility.lua`
   - Code-X modern spawn and retry contract as the base.
2. `resource/script/multiplayer/modes/conquest.lua`
   - Code-X `BotApi.Conquest`, spawn-point, and prep-time behavior as the base.
3. `resource/set/dynamic_campaign/unit_research_sms.set`
   - minimal Space Marine progression with compatibility-owned `cx40k_` helper identifiers.
4. compatibility-owned NATO/SMS matchup include
   - both `nato sms` and `sms nato` directions.
5. compatibility-owned SMS Conquest roster include
   - one basic infantry card, one anti-tank or upgraded infantry card, and one heavy or vehicle card.
6. `resource/script/multiplayer/units/sms/conquest.sms.lua`
   - purchase table for exactly those first-slice cards.
7. only the minimum localization and UI aliases required by actual parser/runtime evidence.

`entity.set`, `human.ext`, and `entitymanager.set` will not be overridden preemptively. They will be added only when the first NATO/SMS campaign test proves an unresolved include, rig, crew, or prototype failure.

## Manual gate still required

Before any `resource/` or `localizations/` directory may be committed, the four-parent stack must be launched once in exact order without mod #5 and the launcher names/versions must be confirmed. Runtime files remain in an unmerged draft PR until the full Dynamic Conquest test record passes.
