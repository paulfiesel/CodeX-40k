require([[/script/multiplayer/modes/utility]])

-- Dynamic Conquest AI timing. Defender bots deploy an initial force immediately,
-- then receive small, irregular reinforcement waves during the battle.
local StartSpawnTime = {
	DefenseMin = 1 * 1000,
	DefenseMax = 1 * 1000,
	AttackMin = 1 * 1000,
	AttackMax = 1 * 1000,
}

local SpawnCooldownTime = {
	AttackerWaveOffMin = 3 * 60000,
	AttackerWaveOffMax = 4 * 60000,
	DefenderWaveOffMin = 4 * 60000,
	DefenderWaveOffMax = 7 * 60000,
	DefenderQuietMin = 7 * 60000,
	DefenderQuietMax = 10 * 60000,
	WithinWaveMin = 2 * 1000,
	WithinWaveMax = 5 * 1000,
}

local WaveUnit = {
	AttackerMin = 5,
	AttackerMax = 7,
	DefenderInitialMin = 4,
	DefenderInitialMax = 6,
	DefenderSupportMin = 1,
	DefenderSupportMax = 3,
}

local DefenderQuietCycleChance = 0.35
local UnitSpawnWaitTime = 1.5 * 60000
local OrderRotationPeriod = 2.5 * 60000

local botDefender = false
enableWaveCounter = true

local waveSpawnPossible = true
local waveSpawnActive = true
local waveUnitCount = 0
local waveNumber = 0
local waveUnitTotal = nil
local firstPurchase = true
local conquestSpawnPointIndex = 0

function GameModeSpawnUnit(unit, maxSquadSize)
	if BotApi.Commands:SpawnAt(unit, maxSquadSize, conquestSpawnPointIndex) then
		conquestSpawnPointIndex = conquestSpawnPointIndex + 1
		return true
	end
	return false
end

local function isAttackerOrDefender()
	-- In Dynamic Conquest, the defending side contains the campaign player plus
	-- the autonomous defender bot. This keeps those reinforcements AI-owned.
	botDefender = teamSize > 1
	if printDebug then
		print("Print: botDefender", botDefender, "teamSize", teamSize)
	end
end

local function setVarsInMissionScript()
	BotApi.Scene:SetVar("user_is_defender", botDefender and 0 or 1)

	local nationMap = {
		rusa = 1, rus = 1, imp = 1,
		prc = 2, ger = 2, ork = 2,
		ukr = 3, fin = 3, tyr = 3,
		nato = 4, usa = 4,
		eng = 5,
	}
	local difficultyMap = {easy = 1, normal = 2, hard = 3, heroic = 4}
	local spawnMap = {a = 1, b = 2}
	local playerSpawnNameMap = {
		a1 = 1, a2 = 2, a3 = 3, a4 = 4,
		b1 = 5, b2 = 6, b3 = 7, b4 = 8,
	}
	local conquest = BotApi.Conquest or {}

	BotApi.Scene:SetVar("bot_army", nationMap[BotApi.Instance.army] or 0)
	BotApi.Scene:SetVar("bot_difficulty", difficultyMap[BotApi.Instance.difficulty] or 0)
	BotApi.Scene:SetVar("bots_spawnside", spawnMap[spawnSide] or 0)
	BotApi.Scene:SetVar(
		"player_spawn_name",
		playerSpawnNameMap[conquest.PlayerSpawnPoint or BotApi.Instance.CampaignPlayerSpawnPoint] or 0
	)

	BotApi.Scene:SetVar("enemyid", BotApi.Instance.playerId)
	BotApi.Scene:SetVar("id_1st_enemy", BotApi.Instance.CampaignFirstEnemyId or conquest.FirstEnemyId or 0)
	BotApi.Scene:SetVar("id_defenderbot", BotApi.Instance.CampaignDefenderBotId or conquest.DefenderBotId or 0)
	BotApi.Scene:SetVar("id_1st_player", BotApi.Instance.CampaignFirstPlayerId or conquest.FirstPlayerId or 0)
end

local function resetWaveUnitTotal()
	if botDefender then
		if waveNumber == 0 then
			waveUnitTotal = math.random(WaveUnit.DefenderInitialMin, WaveUnit.DefenderInitialMax)
		else
			waveUnitTotal = math.random(WaveUnit.DefenderSupportMin, WaveUnit.DefenderSupportMax)
		end
	else
		waveUnitTotal = math.random(WaveUnit.AttackerMin, WaveUnit.AttackerMax)
	end
	if printDebug then
		print("Print: waveUnitTotal", waveUnitTotal, "waveNumber", waveNumber, "botDefender", botDefender)
	end
end

function WaveAttack()
	if not waveUnitTotal then
		resetWaveUnitTotal()
	end

	waveSpawnPossible = true
	if waveUnitCount >= waveUnitTotal then
		waveSpawnActive = false
		waveUnitCount = 0
		waveNumber = waveNumber + 1
		resetWaveUnitTotal()
		if printDebug then print("Print: waveNumber", waveNumber) end
	else
		waveSpawnActive = true
	end
end

function WaveUnitCounter()
	if waveSpawnPossible then
		waveUnitCount = waveUnitCount + 1
		if printDebug then print("Print: waveUnitCount", waveUnitCount) end
	end
end

function GameModeSpawnCooldown()
	WaveAttack()
	local spawnTime

	if firstPurchase then
		if botDefender then
			spawnTime = {Min = StartSpawnTime.DefenseMin, Max = StartSpawnTime.DefenseMax}
		else
			spawnTime = {Min = StartSpawnTime.AttackMin, Max = StartSpawnTime.AttackMax}
		end
	elseif not waveSpawnActive then
		if botDefender then
			if math.random() < DefenderQuietCycleChance then
				spawnTime = {Min = SpawnCooldownTime.DefenderQuietMin, Max = SpawnCooldownTime.DefenderQuietMax}
			else
				spawnTime = {Min = SpawnCooldownTime.DefenderWaveOffMin, Max = SpawnCooldownTime.DefenderWaveOffMax}
			end
		else
			spawnTime = {Min = SpawnCooldownTime.AttackerWaveOffMin, Max = SpawnCooldownTime.AttackerWaveOffMax}
		end
	else
		spawnTime = {Min = SpawnCooldownTime.WithinWaveMin, Max = SpawnCooldownTime.WithinWaveMax}
	end

	firstPurchase = false
	return math.random(spawnTime.Min, spawnTime.Max)
end

function table.shuffle(tbl)
	local rand = math.random
	for i = #tbl, 2, -1 do
		local j = rand(i)
		tbl[i], tbl[j] = tbl[j], tbl[i]
	end
	return tbl
end

local function shuffleFlags(flags)
	if waveNumber <= 1 then
		table.sort(flags, function(a, b) return a.name < b.name end)
	else
		table.shuffle(flags)
	end
end

local function calculateAttackerPriority(f, enemyTeamId, teamId, firstEnemyFlagEncountered)
	if f.owner == enemyTeamId and not firstEnemyFlagEncountered then
		firstEnemyFlagEncountered = true
		return f.priority, firstEnemyFlagEncountered
	elseif f.owner == enemyTeamId or f.owner == teamId then
		return f.priority * 0, firstEnemyFlagEncountered
	end
	return f.priority, firstEnemyFlagEncountered
end

local function calculateDefenderPriority(f, enemyTeamId, teamId)
	if f.owner == enemyTeamId then
		return f.priority * 2
	elseif f.owner == teamId then
		return f.priority * 0.5
	end
	return f.priority
end

function GetFlagToCapture(flagPoints, getPriority, flags)
	local alliedFlags, opponentFlags, neutralFlags, totalFlags = CalculateFlagStatistics(BotApi.Scene.Flags)
	local capturableFlags = CalculateCapturableFlags(totalFlags, alliedFlags)
	PrintFlagDebugInfo(alliedFlags, opponentFlags, neutralFlags, totalFlags, capturableFlags, teamIsLosing)
	searchDestroy = CalculateSearchDestroyValue(capturableFlags, alliedFlags, opponentFlags)

	if waveNumber <= 1 then shuffleFlags(flags) end
	local firstEnemyFlagEncountered = false

	return GetRandomItem(flags, function(f)
		if not botDefender then
			local priority
			priority, firstEnemyFlagEncountered = calculateAttackerPriority(
				f, enemyTeam, team, firstEnemyFlagEncountered
			)
			return priority
		end
		return calculateDefenderPriority(f, enemyTeam, team)
	end)
end

function GotoNextWaypoint(squad)
	local waypoints = BotApi.Scene.Waypoints
	BotApi.Commands:CaptureFlag(squad, waypoints[math.random(#waypoints)])
	if printDebug then print("Print: capture waypoint order", squad) end
end

function OnWaypoint(args)
	GotoNextWaypoint(args.squadId)
end

function IsSquadInScript(squad)
	if BotApi.Scene:IsSquadTagged(squad, "_lua_mi") or BotApi.Scene:IsSquadTagged(squad, "repairing") then
		return true
	elseif BotApi.Scene:IsSquadTagged(squad, "_lua_alert") then
		BotApi.Commands:SeekAndDestroy(squad)
		return true
	end
	return false
end

function IsSquadToIgnore(squad)
	return BotApi.Scene:IsSquadTagged(squad, "_lua_ignore")
end

function CaptureFlag(squad)
	local flags = {}
	for i, flag in pairs(BotApi.Scene.Flags) do
		table.insert(flags, {
			id = i,
			name = flag.name,
			priority = getDefaultFlagPriority(flag),
			owner = flag.occupant,
		})
	end

	local flag = GetFlagToCapture(BotApi.Scene.Flags, getDefaultFlagPriority, flags)
	if not flag then
		BotApi.Commands:SeekAndDestroy(squad)
		return
	end
	if IsSquadInScript(squad) then return end

	if IsSquadToIgnore(squad) then
		if searchDestroy > math.random() then
			BotApi.Commands:SeekAndDestroy(squad)
		end
		return
	end

	return BotApi.Commands:CaptureFlag(squad, flag.name)
end

function GetCurrentSpawnWaitTime()
	return UnitSpawnWaitTime
end

function GetUnitToSpawn(units)
	if not units then return nil end

	local unitsToSpawn = {}
	local income = BotApi.Commands:Income(BotApi.Instance.playerId)
	for i, unit in pairs(units) do
		local minTeam = unit.min_team or 0
		local minIncome = unit.min_income or -1
		if teamSize >= minTeam and income >= minIncome and BotApi.Commands:IsUnitAvailable(unit.unit) then
			table.insert(unitsToSpawn, unit)
		end
	end
	if #unitsToSpawn == 0 then return nil end

	return GetRandomItem(unitsToSpawn, function(t)
		local function UnitType(value)
			for _, unitType in ipairs(t.type) do
				if unitType == value then return true end
			end
			return false
		end

		-- Follow-up defender waves strongly prefer infantry squads, producing the
		-- intended allied-detachment event instead of repeated heavy armor arrivals.
		if botDefender and waveNumber > 0 then
			if UnitType("Squad") then return t.priority * 2.5 end
			if UnitType("Cannon") then return t.priority * 0.5 end
			return t.priority * 0.7
		end

		if UnitType("Squad") then return t.priority * 1.75 end
		if UnitType("Cannon") then return t.priority * 0.80 end
		return t.priority
	end)
end

function OnGameStart()
	isAttackerOrDefender()
	resetWaveUnitTotal()
	setVarsInMissionScript()
	OnGameStartUtility("conquest")
end

function OnGameQuant()
	TrySpawnUnit()
	local waypoints = BotApi.Scene.Waypoints
	if #waypoints == 0 then
		for _, squad in pairs(BotApi.Scene.Squads) do
			if not Context.SquadTimers[squad] then
				SetSquadOrder(CaptureFlag, squad, OrderRotationPeriod)
			end
		end
	end
end

function OnGameSpawn(args)
	local waypoints = BotApi.Scene.Waypoints
	if #waypoints == 0 then
		SetSquadOrder(CaptureFlag, args.squadId, OrderRotationPeriod)
	else
		GotoNextWaypoint(args.squadId)
	end
end

function OnPrepTimeOver()
	BotApi.Scene:SetVar("prep_inform", 1)
	if printDebug then print("Print: prep_inform set to 1") end
end

BotApi.Events:Subscribe(BotApi.Events.GameStart, OnGameStart)
BotApi.Events:Subscribe(BotApi.Events.GameEnd, OnGameStop)
BotApi.Events:Subscribe(BotApi.Events.Quant, OnGameQuant)
BotApi.Events:Subscribe(BotApi.Events.GameSpawn, OnGameSpawn)
BotApi.Events:Subscribe(BotApi.Events.Waypoint, OnWaypoint)
BotApi.Events:Subscribe(BotApi.Events.PrepTimeOver, OnPrepTimeOver)
