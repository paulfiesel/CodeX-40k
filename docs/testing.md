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
- The collision matrix and decision ledger are updated.
- Required manual Dynamic Conquest tests are recorded in the PR.
- No unresolved crash, missing entity, missing include, T-pose, deformed rig, campaign-ID failure, empty research branch, empty reinforcement list, AI purchase stall, or save/reload failure remains.

## Campaign setup checkpoint

Validate the campaign-layer chain before tactical compatibility expands:

- Dynamic Conquest setup opens.
- One modern and one 40K faction appear.
- Either faction can be selected as player or opponent.
- New-campaign creation succeeds in both directions.
- Starting research roots are valid and non-empty.
- Starting reinforcement lists are valid and non-empty.
- A newly created campaign saves and reloads.

## Dynamic Conquest vertical slice

Validate one complete cycle:

- Research one representative unlock.
- Purchase basic infantry and one heavier reinforcement for each side.
- Deploy into a tactical conquest battle.
- Player-controlled units spawn and receive orders.
- AI purchases units and issues movement/combat orders.
- Representative infantry and heavy units move, fight, die, and use required crew poses.
- The tactical battle completes normally.
- The game returns to the campaign layer.
- Casualties, survivors, rewards, research progress, and campaign resources update coherently.
- Save and reload preserve the completed state and all compatibility identifiers.

Run the first slice in both directions:

1. Modern player versus 40K opponent.
2. 40K player versus modern opponent.

## Human animation matrix

Test one representative conquest reinforcement from each rig family for idle, walk, sprint, crouch, prone, aim, fire, reload, grenade, melee, heal, engineer, death, ragdoll, vehicle entry, vehicle exit, passenger, and gunner animations.

## Endurance

Run at least one extended tactical conquest battle with AI purchasing enabled. Record repeated script errors, purchase stalls, invalid unit selections, broken objective orders, and failures to return to the campaign layer.

Battle Zones, Domination, Frontlines, and multiplayer synchronization testing remain deferred until Dynamic Conquest compatibility is stable.
