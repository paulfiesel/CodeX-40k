# Test protocol

## Parent baselines

Before testing the compatibility mod, verify both dependency stacks independently:

1. West-81 plus Code-X.
2. SC Modding Platform plus SC Last Victim 40K.

## Full-stack activation

Activate in this order and restart the game:

1. West-81
2. Code-X
3. SC Modding Platform
4. SC Last Victim 40K
5. Modern (Code:X) vs. 40K (LV)

## Merge gates

A runtime PR is not ready until:

- Static validation passes.
- The collision matrix is updated.
- Required manual tests are recorded in the PR.
- No unresolved crash, missing entity, missing include, T-pose, deformed rig, or AI purchase stall remains.

## Battle Zones vertical slice

Validate the complete chain:

- Lobby opens.
- Modern and 40K sides appear.
- One faction per side can be selected.
- The match loads.
- Player purchases work.
- AI purchases work.
- Infantry captures objectives.
- One heavy unit per side works.
- The match can complete.

## Human animation matrix

Test one representative human from each rig family for idle, walk, sprint, crouch, prone, aim, fire, reload, grenade, melee, heal, engineer, death, ragdoll, vehicle entry, vehicle exit, passenger, and gunner animations.

## Endurance and multiplayer

Run AI versus AI for at least 20 minutes. Then test two clients with identical source versions and load order for lobby join, match start, purchasing, abilities, animation playback, and synchronization.
