# Reference donor audit: Workshop 3700832981

## Status

`3700832981.zip` is Paul's custom `Imperium vs Xenos Conquest` submod. It is not a separate runtime dependency for this project. Its relevant compatibility-owned files will be integrated selectively into mod #5, while destructive deletes and incompatible global replacements remain excluded.

- ZIP SHA-256: `90a32ee2c54db6e089d280e7a064de43361cda556f06fc8af1ee89d8de8b6f69`
- archive entries: 620
- files: 570
- directories: 50
- donor `mod.info` SHA-256: `3f6052df0c32b25fe7436c59b93a818a4c34cac40e8291ec17bcdd196da35dcd`
- donor name: `Imperium vs Xenos Conquest`

The donor contains 45 `.set` files, 15 `.inc` files, 6 `.lua` files, 7 localization templates, and 490 campaign-interface image files.

## What may and may not be integrated

The donor is user-authored project source, so its custom Imperium research, roster, AI purchase, localization, and campaign-interface work may be integrated into this repository.

The donor `mod.info` must not be reused because it deletes modern and vanilla entity and breed trees, including USA, Germany, Finland, England, Russia, and single-player breeds.

The following global replacements also require explicit reconciliation rather than direct copying:

- `resource/script/multiplayer/modes/conquest.lua`
- `resource/script/multiplayer/modes/utility.lua`
- `resource/set/multiplayer/units/roster_conquest.set`
- `resource/set/multiplayer/units/campaign_capture_the_flag.set`
- `resource/set/multiplayer/units/common.set`
- `resource/set/multiplayer/games/presets/alliances_generic.inc`
- `resource/set/dynamic_campaign/values.set`

The exact runtime slice found no byte-identical donor replacement among these global files. The donor overlaps 12 West-81 paths, 9 Code-X paths, and 7 Last Victim paths. All but Last Victim's `resource/script/multiplayer/units/ork/conquest.ork.lua` differ from the corresponding installed parent version.

## Army-ID ruling

The donor's original army IDs collide with the active stack:

| Donor army | Donor ID | Active-stack conflict |
|---|---:|---|
| `imp` | 1 | Code-X `ukr` uses ID 1 |
| `ork` | 2 | Code-X `nato` uses ID 2; Last Victim `ork` already uses ID 95 |
| `tyr` | 3 | Code-X `prc` uses ID 3; Last Victim `tyr` already uses ID 97 |
| `rus` | 4 | Code-X `csa` uses ID 4 |
| `ger` | 5 | Code-X `sov` uses ID 5 |
| `fin` | 6 | Code-X `frg` uses ID 6 |
| `usa` | 7 | duplicates Code-X `usa` ID 7 |
| `eng` | 8 | Code-X `rus` uses ID 8 |

The compatibility layer will:

- preserve Last Victim `ork` ID 95;
- preserve Last Victim `tyr` ID 97;
- assign the custom `imp` army ID 98, the next unused ID after Last Victim's 90 through 97 range;
- remove the donor's replacement army files for modern and vanilla factions.

The textual side key remains `imp`, so the custom roster's `(imp)` card and unit identifiers remain stable while the numeric collision is eliminated.

## Supported 40K opponents

The only 40K factions exposed to Code-X Dynamic Conquest are:

1. custom Imperium, `imp`, integrated from Paul's submod;
2. Last Victim Tyranids, `tyr`;
3. Last Victim Orks, `ork`.

Other Last Victim armies, including `sms`, `igc`, `igt`, `csm`, `eld`, and `dch`, remain installed parent content but are not offered as Code-X campaign opponents.

The supported Code-X campaign factions are `nato`, `ukr`, `rusa`, and `prc`. The compatibility matchup matrix is bidirectional between each of those modern factions and each supported 40K opponent. No modern-versus-modern or 40K-versus-40K matchup is added by the compatibility layer.

## First runtime slice

The first implementation and test pair is:

- modern side: Code-X `nato`, army ID 2;
- 40K side: custom Imperium `imp`, compatibility army ID 98.

This replaces the earlier NATO-versus-`sms` decision.

Reasons:

1. `imp` is the intended combined Imperium faction from the user's existing Conquest submod.
2. Its research tree and roster combine Imperial Guard and Ultramarine content behind one campaign side.
3. The donor already provides direct-content Conquest cards, a five-stage research tree, AI purchases, stage weights, localization, and campaign UI assets.
4. NATO versus Imperium tests infantry, vehicles, heavy units, SC rigs, crews, and mixed LV entity families in one vertical slice.
5. Tyranids and Orks can be stacked immediately after the Imperium checkpoint using the same reconciled campaign and tactical-script foundation.

## Integration design

The compatibility layer will:

- preserve Code-X Dynamic Conquest economy, resources, map points, modern research, and current `BotApi.Conquest` behavior;
- integrate the custom Imperium research tree, direct-content cards, AI purchase table, stage table, localization, and required UI assets;
- adapt `imp.set` to army ID 98;
- preserve LV Ork and Tyranid IDs and content paths;
- replace LV's broad matchup list with the explicit modern-to-`imp`/`tyr`/`ork` matrix;
- merge Code-X and donor roster includes instead of replacing either stack wholesale;
- preserve the SC crew and rig family without replacing Code-X `human.ext` or Code-X's interaction root;
- use the `cx40k_` prefix for any new compatibility-only helper, macro, or alias.

## Donor paths approved for selective integration

- `resource/set/multiplayer/armies/imp.set`, with ID changed to 98;
- `resource/set/multiplayer/units/conquest/settings_lv_compat.set`;
- `resource/set/multiplayer/units/conquest/settings_inf_lv_compat.set`;
- `resource/set/multiplayer/units/conquest/units_imp.set`;
- `resource/set/multiplayer/units/conquest/inf_imp.set`;
- `resource/set/dynamic_campaign/unit_research_imp.set`;
- `resource/script/multiplayer/units/imp/conquest.imp.lua`;
- `resource/script/multiplayer/units/conquest_stage.lua`, reconciled with Code-X/LV dispatch;
- Imperium localization templates;
- Imperium Dynamic Conquest interface assets that are actually referenced by the integrated campaign side.

## Files explicitly excluded from direct import

- donor `mod.info` and every `{delete ...}` directive;
- donor replacement army files other than adapted `imp.set`;
- donor `alliances_generic.inc`;
- donor `common.set`;
- unmerged complete copies of `conquest.lua`, `utility.lua`, `values.set`, and `roster_conquest.set`;
- donor modern/vanilla faction replacements;
- unused campaign UI assets;
- unsupported LV faction research and matchup exposure.

## Test order

1. Campaign setup: NATO and custom Imperium appear and can start in both directions.
2. Imperium research: basic Guard/Marine cards, upgraded infantry, and one heavy unit unlock and purchase.
3. Tactical deployment: representative NATO and Imperium infantry/vehicles spawn with correct rigs, crews, weapons, and AI orders.
4. Campaign return: casualties, captured units, resources, progression, save, and reload survive one full battle.
5. Add Tyranid matchups and verify one complete cycle.
6. Add Ork matchups and verify one complete cycle.
7. Expand from NATO to Code-X `ukr`, `rusa`, and `prc`.
