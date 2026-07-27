# Reference donor audit: Workshop 3700832981

## Status

`3700832981.zip` is a private, reference-only Dynamic Conquest implementation for Last Victim 40K. It is not a dependency and must not enter the required load order.

- ZIP SHA-256: `90a32ee2c54db6e089d280e7a064de43361cda556f06fc8af1ee89d8de8b6f69`
- archive entries: 620
- files: 570
- directories: 50
- donor `mod.info` SHA-256: `3f6052df0c32b25fe7436c59b93a818a4c34cac40e8291ec17bcdd196da35dcd`
- donor name: `Imperium vs Xenos Conquest`

The donor contains 45 `.set` files, 15 `.inc` files, 6 `.lua` files, 7 localization templates, and 490 campaign-interface image files.

## Why it cannot be copied wholesale

The donor is an overlay built for a different load-order problem. Its root `mod.info` deletes modern and vanilla entity and breed trees, including USA, Germany, Finland, England, Russia, and single-player breeds. Those deletions are incompatible with this project.

It also replaces global files such as:

- `resource/script/multiplayer/modes/conquest.lua`
- `resource/script/multiplayer/modes/utility.lua`
- `resource/set/multiplayer/units/roster_conquest.set`
- `resource/set/multiplayer/units/campaign_capture_the_flag.set`
- `resource/set/multiplayer/units/common.set`
- `resource/set/multiplayer/games/presets/alliances_generic.inc`

The exact runtime slice found no byte-identical donor replacement among these global files. The donor overlaps 12 West-81 paths, 9 Code-X paths, and 7 Last Victim paths. All but Last Victim's `resource/script/multiplayer/units/ork/conquest.ork.lua` differ from the corresponding installed parent version.

## Army-ID conflicts

The donor's synthetic armies cannot be retained:

| Donor army | Donor ID | Conflict in active stack |
|---|---:|---|
| `imp` | 1 | Code-X `ukr` uses ID 1 |
| `ork` | 2 | Code-X `nato` uses ID 2; Last Victim `ork` already exists as ID 95 |
| `tyr` | 3 | Code-X `prc` uses ID 3; Last Victim `tyr` already exists as ID 97 |
| `rus` | 4 | Code-X `csa` uses ID 4 |
| `ger` | 5 | Code-X `sov` uses ID 5 |
| `fin` | 6 | Code-X `frg` uses ID 6 |
| `usa` | 7 | duplicates Code-X `usa` ID 7 |
| `eng` | 8 | Code-X `rus` uses ID 8 |

The exact Last Victim armies already occupy IDs 90 through 97. Compatibility should preserve those parent IDs rather than introducing donor IDs.

## Safe donor value

The donor proves several missing Last Victim Conquest techniques:

- direct-content Conquest cards avoid invalid or null preview entities from nested LV wrappers;
- LV breed CP, CW, and cost macros need a Conquest compatibility layer;
- a dedicated Conquest roster must include LV infantry overlays after the parent LV unit include chain;
- Last Victim needs faction-specific AI purchase tables;
- campaign research files can expose LV cards through the standard five-stage reinforcement progression;
- the SC crew interaction include contains important skin, spawn, bailout, and vehicle-seat behavior that must be preserved without replacing Code-X's global human family.

These techniques may be adapted. The donor's global replacements, identifiers, deletions, and complete content tree may not be copied.

## First faction pair

The first compatibility slice is:

- modern side: Code-X `nato`, army ID 2;
- 40K side: Last Victim `sms`, army ID 96.

Reasons:

1. Code-X already supplies a complete NATO research tree and `Purchases["conquest.nato"]` table.
2. Last Victim already owns the stable `sms` army, localization, icon, breed tree, and multiplayer unit definitions.
3. The donor supplies working direct-content examples for Ultramarine scouts, tactical marines, anti-tank marines, Rhino transports, Dreadnoughts, and heavier vehicles.
4. The pair supplies basic infantry and a heavier unit without mixing Imperial Guard and Space Marines behind a synthetic `imp` army.
5. Space Marines exercise the SC/Last Victim human and vehicle family required by the rig and entity-runtime checkpoints.

## First-slice compatibility design

The compatibility layer will:

- preserve Code-X's Dynamic Conquest values, resources, map-point structure, NATO research, and current `BotApi.Conquest` contract;
- preserve Last Victim's `sms` army ID 96 and parent content paths;
- create only the minimum direct-content Space Marine Conquest cards required for the first slice;
- prefix new card, macro, research-helper, and compatibility identifiers with `cx40k_`;
- create a minimal `unit_research_sms.set` using the standard reinforcement and defense stages;
- create `Purchases["conquest.sms"]` for the exact compatibility card IDs;
- merge, rather than replace, the Conquest roster and tactical script entry points;
- add only NATO-to-SMS and SMS-to-NATO campaign matchups for the first checkpoint;
- preserve the SC crew include behind the Last Victim family without replacing Code-X `human.ext` or the Code-X interaction root;
- leave Orks, Tyranids, Imperial Guard, additional Space Marine units, and all non-Conquest modes out of the first runtime checkpoint.

## Donor paths used as design references

The following donor files are reference inputs, not files to copy verbatim:

- `resource/set/multiplayer/units/conquest/settings_lv_compat.set`
- `resource/set/multiplayer/units/conquest/settings_inf_lv_compat.set`
- `resource/set/multiplayer/units/conquest/units_imp.set`
- `resource/set/multiplayer/units/conquest/inf_imp.set`
- `resource/set/dynamic_campaign/unit_research_imp.set`
- `resource/script/multiplayer/units/imp/conquest.imp.lua`
- `resource/set/interaction_entity/SC_Plataform/SC_human/SC_h_crew.inc`
- `resource/script/multiplayer/modes/conquest.lua`
- `resource/script/multiplayer/modes/utility.lua`

## Files explicitly excluded from import

- donor `mod.info` and every `{delete ...}` directive;
- donor `resource/set/multiplayer/armies/*.set` files;
- donor vanilla faction army replacements;
- donor `alliances_generic.inc`;
- donor `common.set`;
- complete donor copies of `conquest.lua` and `utility.lua`;
- complete campaign UI image tree unless a specific new compatibility key requires an asset;
- Ork, Tyranid, and mixed synthetic-Imperium content during the first slice.

## Remaining proof required

Before the first runtime PR can merge:

1. Generate the exact `dynamic-conquest-source-slice.zip` using the current exporter.
2. Confirm the four parent mods launch in the recorded load order without mod #5.
3. Promote all four reviewed source snapshots to `ready`.
4. Validate every compatibility-owned include and identifier against the exact source slice.
5. Test campaign creation in both NATO-player and SMS-player directions.
6. Test research, purchase, deployment, tactical AI, rig behavior, battle completion, campaign return, save, and reload.
7. Attach a passing runtime test record and relevant log excerpt to the runtime PR.
