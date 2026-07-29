# DOTD infected spawn and pathing reference

## Purpose

This note records the useful parts of the Dawn of the Dead infected runtime for future Dynamic Conquest allied-support and attacker-AI work.

The current decision is to learn from this architecture, not import the DOTD stack. The next attacker-AI implementation should first prove the attacker-mate player slot and ownership contract. DOTD-style path-start cloning becomes the preferred first force-delivery experiment after that proof.

## Source slices inspected

The source archives are not committed because this repository does not redistribute parent-mod content.

| Archive | SHA-256 | Relevant files |
| --- | --- | --- |
| `dcg_airfield_2.zip` | `9a21df60d59f5289469036f41267c7c1cc6613012ec78b2a312a5d1f5265e897` | `dcg_airfield_2/_infected.inc` |
| `_presets_multi_dotd.zip` | `5149749e18bbfd0fd0268724f1cbd166753007202a865cdacac789fc2241e1c5` | `_presets/setup_infected.inc`, `_presets/setup_infected_dcg.inc`, `_presets/triggers_infected.inc`, `_presets/triggers_infected_dcg.inc` |
| `set_script_properties_dotd.zip` | `12540448ee4e1cb2b91479b1ad4b9288a55929cc3817d34e61805b205e1f7382` | broader DOTD entity, script, set, and properties context |

## Architecture

DOTD does not use BotApi as the primary infected-wave spawner. Its reliable movement loop is owned almost entirely by mission script:

1. Shared setup includes provide pools of real infected entities.
2. Map-specific `_infected.inc` files provide a named waypoint graph with transitions.
3. Shared infected triggers choose inactive template entities, clone them directly onto a graph start node, and decrement wave counters.
4. A dedicated `infected:player$` variable assigns the spawned group to a fixed player slot.
5. The waypoint graph handles initial movement. Additional move, advance, attack, grenadier, and AI-enable logic supplements it.

## Template pool

`setup_infected.inc` and `setup_infected_dcg.inc` contain real entity breeds such as `infected_walker_generic_00`, initially owned by player 0 and marked unselectable:

```text
{Entity "infected_walker_generic_00" ...
    {Player 0}
    {Able "-select"}
}
```

The trigger selectors filter these pools by tags such as `infected_generic`, `infected_runner`, `infected_armored`, or `infected`, plus `{state inactive}`.

The important lesson is that the source object is a valid entity with a real breed and rig. It is not an empty `Human ""` shell that must become a soldier after cloning.

## Spawn sequence

The core DOTD sequence is a waypoint action that clones the selected inactive template while starting it on a real map path:

```text
{"waypoint"
    {who
        {type actor}
        {actors
            {source advanced}
            {group
                {select
                    {tag
                        {tag infected_generic}
                    }
                }
                {include
                    {state
                        {state inactive}
                    }
                }
            }
            {amount 1}
        }
    }
    {action
        {type start}
        {waypoint "0"}
        {clone}
        {approach "teleport & rotate"}
    }
}
```

This is materially different from cloning or teleporting a unit and then hoping a later `advance` or BotApi order can recover it. Clone and path start are one operation.

Wave loops repeat this action under `while` conditions and decrement counters such as `infected:spawn:generic$` after each clone.

## Path graph

Each participating map supplies a named waypoint set, normally `infected`, with multiple entry nodes and transition chains. For example, `dcg_airfield_2/_infected.inc` defines entry nodes such as `0`, `1`, `2`, `3`, `4`, and `5`, each branching into routes toward central nodes.

The graph supplies the initial locomotion contract. A single `allied_support_entry` blob or one isolated waypoint does not provide the same behavior.

## Ownership

DOTD stores its target slot in `infected:player$`. After spawning, it selects entities carrying both the `infected` and `spawned` tags inside the active zone, then applies the same explicit player-assignment cases for slots 1 through 16:

```text
{"player"
    {selector
        {source advanced}
        {group
            {select {tag {tag infected}}}
            {include
                {tag {tag spawned}}
                {zone {zone "global"}}
            }
        }
    }
    {operation set}
    {player "16"}
}
```

The structural lesson is not that player 16 is special. The lesson is that DOTD resolves and owns a fixed runtime player slot instead of assuming another bot will discover and control the clones.

## AI activation and combat

DOTD can temporarily disable or enable actor AI movement. Its enable loop selects `disabled_ai`, applies `{ai_move {mode enable}}`, removes the tag, and repeats.

The path graph performs most initial walking. Separate mission-script behavior can then issue move, advance, or attack actions against tagged enemies, including specialist behavior such as grenadier logic.

## What this proves

Reliable autonomous mission forces in this engine can be built with this sequence:

1. Select a valid inactive template entity.
2. Clone it while starting it on a real waypoint graph.
3. Assign it to a proven player slot.
4. Enable actor AI when appropriate.
5. Add later objective or target orders only as a secondary layer.

This avoids depending on `Scene.Squads` discovery or a successful BotApi purchase path merely to make the force enter the battle and move.

## Dynamic faction rosters

DOTD uses fixed infected breeds because its enemy faction is always infected. The spawn mechanism does not require our support forces to use one fixed faction.

For CodeX-40k, roster identity and spawn delivery should remain separate concerns:

- Dynamic Conquest tables decide which side, era, faction, and unit family should appear.
- Mission script decides how valid bodies enter the map and begin moving.

The practical mission-script implementation is a template pool per supported faction or faction family, for example:

```text
support_tpl_nato
support_tpl_ukr
support_tpl_rusa
support_tpl_prc
support_tpl_imp
support_tpl_ork
support_tpl_tyr
```

At runtime, side and army IDs select the appropriate template tag. The chosen template is then cloned through the same path-start operation.

This is dynamic at the faction or curated-roster level. It is not an infinite runtime unit factory. Fully arbitrary roster spawning remains a separate Lua or BotApi experiment.

## Recommended hybrid for attacker AI

Use each layer only for the part it can reliably own:

- BotApi or conquest Lua: identify the attacker-mate bot, expose army and player IDs, select doctrine or roster intent, and log decisions.
- Mission script: clone valid faction-matched templates onto attacker entry paths and assign the proven mate player slot.
- BotApi objective logic: issue `CaptureFlag` or other squad orders only when the spawned entities are actually visible through `Scene.Squads`.
- Mission script fallback: retain path-driven movement and direct move, advance, or attack actions when squad discovery fails.

## Implementation decision

Do not import the full DOTD infected stack into the current defense reinforcement work.

Do not import:

- infected stages, presets, gore, specials, or wave balancing;
- DOTD maps or waypoint graphs wholesale;
- another speculative ownership rewrite;
- BotApi attacker-mate commands before the player-slot proof exists.

Retain for the future attacker-AI branch:

- clone plus `{type start}` on a real waypoint graph;
- real inactive template pools with `{Able "-select"}`;
- map-specific entry routes with transitions;
- a fixed and proven support player slot;
- mission-script lifecycle ownership, with BotApi orders treated as an optional higher layer.

## First experiment when attacker-slot proof is complete

The first force should be deliberately small and diagnostic:

1. Human is attacking.
2. The attacker-mate player ID is logged and proven.
3. One faction-matched infantry template is selected.
4. The template is cloned with `{type start}` onto a short attacker path graph.
5. Ownership is set to the attacker-mate slot.
6. Logs confirm spawn tag, breed, player, path node, and AI state.
7. No `CaptureFlag` order is required for the unit to enter the battlefield.
8. Only after movement is proven should squad discovery and objective orders be tested.

## Summary

DOTD teaches force delivery, not roster composition.

The reusable pattern is: valid template, clone plus path start, explicit ownership, mission-script movement. CodeX Dynamic Conquest remains responsible for deciding which faction and unit family the template represents.
