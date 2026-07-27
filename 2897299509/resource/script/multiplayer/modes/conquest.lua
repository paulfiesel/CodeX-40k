require([[/script/multiplayer/modes/utility]])

-- Time from start of match AI will wait before attempting to buy a unit.
local StartSpawnTime = {
    -- Bot is defender
    DefenseMin = 1 * 60 * 1000, 
    DefenseMax = 1 * 60 * 1000,
    -- Bot is attacker
    AttackMin = 8 * 60 * 1000, 
    AttackMax = 8 * 60 * 1000,
}

-- Time from last purchase AI will wait before attempting to buy a new unit.
local SpawnCooldownTime = {
    -- Time between each wave
    DCGWaveOffMin = 2.25 * 60 * 1000, 
    DCGWaveOffMax = 2.75 * 60 * 1000,
    -- Time between each wave (Defender)
    DCGWaveOffMin_Defender = 4.5 * 60 * 1000, 
    DCGWaveOffMax_Defender = 4.5 * 60 * 1000,
   -- Time between each wave (Attacker)
    DCGWaveOffMin_Attacker = 3.5 * 60 * 1000, 
    DCGWaveOffMax_Attacker = 3.5 * 60 * 1000,
   -- Time between each spawn
    DCGMin = 2 * 1000, 
    DCGMax = 2 * 1000,
}

-- Number of possible units than can be in a wave attack
local WaveUnit = {
    Min = 7,
    Max = 12,
    -- Defender-specific range
    Min_Defender = 3,
    Max_Defender = 7,
    -- Attacker-specific range
    Min_Attacker = 6,
    Max_Attacker = 12,
}

-- Sets time limit AI will wait for a unit it has chosen to buy if the unit is not yet available
local UnitSpawnWaitTime = 0.2 * 60000 -- 1:30min (ms) 

-- Time delay for units to get a new move order after spawn move order. Loops.
local OrderRotationPeriod = 1.0 * 60000 -- 2:30 min (ms)

local botDefender
enableWaveCounter = true
local function isAttackerOrDefender()
	botDefender = teamSize > 1
end

local function setVarsInMissionScript()
	if teamSize > 1 then
		BotApi.Scene:SetVar("user_is_defender", 0)
	else
		BotApi.Scene:SetVar("user_is_defender", 1)
	end

	local botNation = BotApi.Instance.army
	local botDifficulty = BotApi.Instance.difficulty
	local nationMap = { sov = 1, csa = 2, prc = 3, frg = 4, pol = 5 }
	local difficultyMap = { easy = 1, normal = 2, hard = 3, heroic = 4 }
	BotApi.Scene:SetVar("bot_army", nationMap[botNation] or 0)
	BotApi.Scene:SetVar("bot_difficulty", difficultyMap[botDifficulty] or 0)

	local spawnMap = { a = 1, b = 2}
	BotApi.Scene:SetVar("bots_spawnside", spawnMap[spawnSide] or 0)

	BotApi.Scene:SetVar("enemyid", BotApi.Instance.playerId)
	BotApi.Scene:SetVar("id_1st_enemy", BotApi.Instance.CampaignFirstEnemyId)
	BotApi.Scene:SetVar("id_defenderbot", BotApi.Instance.CampaignDefenderBotId)
	BotApi.Scene:SetVar("id_1st_player", BotApi.Instance.CampaignFirstPlayerId)
end

local function setDocVarsInMissionScript(currentDivision)
	
	local divisionsMap = { ACAV_div = 1, Tank_div = 2, USMC_div = 3, Airborne_div = 4, Moto_div = 5, Art_div = 6, vdv_div = 7, vmf_div = 8, Mech_div = 9, Panzergren_div = 10, Panzer_div = 11, Nva_div = 12, wPanzer_div = 13}
	BotApi.Scene:SetVar("bots_divisions", divisionsMap[currentDivision] or 0)
	local divisionNumber = divisionsMap[currentDivision]

	print("ordos_debug++,divisionNumber=",divisionNumber) 
	--BotApi.Scene:SetVar("bots_divisions", 1)
end

local waveSpawnPossible
local waveSpawnActive = true
local waveUnitCount = 0
local waveNumber = 0
local waveUnitTotal
-- local waveUnitTotal = math.random(WaveUnit.Min, WaveUnit.Max)
-- local waveUnitTotal = math.random(adjustedMin, adjustedMax)
if printDebug then print("Print: waveUnitTotal", waveUnitTotal) end

local divisions = {

	csa = {
    ACAV_div = { attackerMultiplier = 3, defenderMultiplier = 3, mechMultiplier = 1.0, motoMultiplier = 0.5,
					infantryMultiplier = 0.5, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 0.75, 
					airMultiplier = 0.75, AcavMultiplier = 1.5, Tank_divMultiplier = 0.01, UsmcMultiplier = 0.01, Airborne_Multiplier = 0.01, wPanzerMultiplier = 0.01},
    Tank_div = { attackerMultiplier = 4, defenderMultiplier = 4, mechMultiplier = 0.75, motoMultiplier = 0.5,
					infantryMultiplier = 0.5, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 1.0, 
					airMultiplier = 0.75, AcavMultiplier = 0.01, Tank_divMultiplier = 1.5, UsmcMultiplier = 0.01, Airborne_Multiplier = 0.01, wPanzerMultiplier = 0.01},
    USMC_div = { attackerMultiplier = 5, defenderMultiplier = 2, mechMultiplier = 1.0, motoMultiplier = 0.5,
					infantryMultiplier = 0.75, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 1.0, 
					airMultiplier = 0.75, AcavMultiplier = 0.01, Tank_divMultiplier = 0.01, UsmcMultiplier = 1.5, Airborne_Multiplier = 0.01, wPanzerMultiplier = 0.01},
	Airborne_div = { attackerMultiplier = 10, defenderMultiplier = 5, mechMultiplier = 0.5,motoMultiplier = 1.0,
					infantryMultiplier = 1.0, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 0.5, 
					airMultiplier = 0.75, AcavMultiplier = 0.01, Tank_divMultiplier = 0.01, UsmcMultiplier = 0.01, Airborne_Multiplier = 1.5, wPanzerMultiplier = 0.01},
	Art_div = { attackerMultiplier = 5, defenderMultiplier = 3, mechMultiplier = 0.25, motoMultiplier = 0.75,
					infantryMultiplier = 0.75, cannonMultiplier = 1.5, artMultiplier = 1.5, tankMultiplier = 0.75, 
					airMultiplier = 0.75,AcavMultiplier = 0.01, Tank_divMultiplier = 0.01, UsmcMultiplier = 0.01, Airborne_Multiplier = 0.01, wPanzerMultiplier = 0.01},
	wPanzer_div = { attackerMultiplier = 4, defenderMultiplier = 4, mechMultiplier = 0.75, motoMultiplier = 0.5,
					infantryMultiplier = 0.5, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 1.0, 
					airMultiplier = 0.75, AcavMultiplier = 0.01, Tank_divMultiplier = 0.01, UsmcMultiplier = 0.01, Airborne_Multiplier = 0.01, wPanzerMultiplier = 1.5}
},

	sov = {
    Moto_div = { attackerMultiplier = 3, defenderMultiplier = 3, mechMultiplier = 0.25, motoMultiplier = 1.0,
					infantryMultiplier = 1.0, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 0.75, 
					airMultiplier = 0.75, Moto_divMultiplier = 1.5, Tank_divMultiplier = 0.01, VdVMultiplier = 0.01, vmfMultiplier = 0.01, NvaMultiplier = 0.01},
    Tank_div = { attackerMultiplier = 4, defenderMultiplier = 4, mechMultiplier = 0.75, motoMultiplier = 0.5,
					infantryMultiplier = 0.5, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 1.0, 
					airMultiplier = 0.75, Moto_divMultiplier = 0.01, Tank_divMultiplier = 1.5, VdVMultiplier = 0.01, vmfMultiplier = 0.01, NvaMultiplier = 0.01},
	vdv_div = { attackerMultiplier = 10, defenderMultiplier = 5, mechMultiplier = 0.75, motoMultiplier = 0.5,
					infantryMultiplier = 0.75, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 0.5, 
					airMultiplier = 1.0, Moto_divMultiplier = 0.01, Tank_divMultiplier = 0.01, VdVMultiplier = 1.5, vmfMultiplier = 0.01, NvaMultiplier = 0.01},
	vmf_div = { attackerMultiplier = 3, defenderMultiplier = 3, mechMultiplier = 0.75, motoMultiplier = 1.0,
					infantryMultiplier = 1.0, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 0.75, 
					airMultiplier = 0.75, Moto_divMultiplier = 0.01, Tank_divMultiplier = 0.01, VdVMultiplier = 0.01, vmfMultiplier = 1.5, NvaMultiplier = 0.01},
	Nva_div = { attackerMultiplier = 4, defenderMultiplier = 4, mechMultiplier = 0.75, motoMultiplier = 0.5,
					infantryMultiplier = 0.5, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 1.0, 
					airMultiplier = 0.75, Moto_divMultiplier = 0.01, Tank_divMultiplier = 0.5, VdVMultiplier = 0.01, vmfMultiplier = 0.01, NvaMultiplier = 1.5},
	Art_div = { attackerMultiplier = 5, defenderMultiplier = 3, mechMultiplier = 0.25, motoMultiplier = 0.75,
					infantryMultiplier = 0.75, cannonMultiplier = 1.5, artMultiplier = 1.5, tankMultiplier = 0.75, 
					airMultiplier = 0.75, Moto_divMultiplier = 0.01, Tank_divMultiplier = 0.01, VdVMultiplier = 0.01, vmfMultiplier = 0.01, NvaMultiplier = 0.01}
},

	prc = {
    Mech_div = { attackerMultiplier = 6, defenderMultiplier = 5, mechMultiplier = 0.25, motoMultiplier = 1.0,
					infantryMultiplier = 0.5, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 0.75, 
					airMultiplier = 0.75, Mech_divMultiplier = 1.5, Moto_divMultiplier = 0.01},
    Moto_div = { attackerMultiplier = 4, defenderMultiplier = 4, mechMultiplier = 1.0, motoMultiplier = 0.5,
					infantryMultiplier = 0.75, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 1.0, 
					airMultiplier = 0.75, Mech_divMultiplier = 0.01, Moto_divMultiplier = 1.5},
	Art_div = { attackerMultiplier = 5, defenderMultiplier = 3, mechMultiplier = 0.25, motoMultiplier = 0.75,
					infantryMultiplier = 0.75, cannonMultiplier = 1.5, artMultiplier = 1.5, tankMultiplier = 0.75, 
					airMultiplier = 0.75, Mech_divMultiplier = 0.01, Moto_divMultiplier = 0.01}
},

	frg = {
    Panzergren_div = { attackerMultiplier = 3, defenderMultiplier = 3, mechMultiplier = 0.25, motoMultiplier = 1.0,
					infantryMultiplier = 1.0, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 0.75, 
					airMultiplier = 0.75, PanzergrenMultiplier = 1.5, PanzerMultiplier = 0.01},
    Panzer_div = { attackerMultiplier = 4, defenderMultiplier = 4, mechMultiplier = 0.75, motoMultiplier = 0.5,
					infantryMultiplier = 0.5, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 1.0, 
					airMultiplier = 0.75, PanzergrenMultiplier = 0.01, PanzerMultiplier = 1.5},
	Art_div = { attackerMultiplier = 5, defenderMultiplier = 3, mechMultiplier = 0.25, motoMultiplier = 0.75,
					infantryMultiplier = 0.75, cannonMultiplier = 1.5, artMultiplier = 1.5, tankMultiplier = 0.75, 
					airMultiplier = 0.75, PanzergrenMultiplier = 0.01, PanzerMultiplier = 0.01}
},
	default = {
    default_div = { attackerMultiplier = 6, defenderMultiplier = 5, mechMultiplier = 0.25, motoMultiplier = 1.0,
					infantryMultiplier = 1.0, cannonMultiplier = 0.5, artMultiplier = 0.5, tankMultiplier = 0.75, 
					airMultiplier = 0.5}
	}
    
}



local bot_country = BotApi.Instance.army


-- 根据bot国籍选择师
 local function selectDivisionWithNationality()
		local divisionNames = {} -- 统一声明
		
		if bot_country and divisions[bot_country] then
			-- 遍历并收集师名称
			for divisionName in pairs(divisions[bot_country]) do
				table.insert(divisionNames, divisionName)
			end
		else
			print(string.format("错误：国家[%s]无有效师配置", tostring(bot_country)))
			divisionNames = {"default_div"} -- 正确设置默认值
		end

		-- 使用示例：打印加载的单位列表
		print("divisionNames:")
		for _, unit in ipairs(divisionNames) do
			print("- " .. unit)
		end
		return divisionNames -- 返回结果
end










-- 选择一个师（根据实际需求选择）
--local divisionNames = {"inf_div", "art_div", "tank_div", "heavytank_div", "air_div", "Mech_div"}

-- local divisionsWithProbability = {
    -- {name = "inf_div", probability = 15},  -- 15% 概率
    -- {name = "art_div", probability = 15},  -- 15% 概率
    -- {name = "tank_div", probability = 40}, -- 40% 概率
    -- {name = "Mech_div", probability = 30},  -- 30% 概率
-- }

-- 加权随机选择函数
-- local function selectDivisionWithProbability(divisions)
    -- local totalProbability = 0
    -- for _, div in ipairs(divisions) do
        -- totalProbability = totalProbability + div.probability
    -- end

    -- local randomValue = math.random(1, totalProbability)
    -- local cumulativeProbability = 0
    -- for _, div in ipairs(divisions) do
        -- cumulativeProbability = cumulativeProbability + div.probability
        -- if randomValue <= cumulativeProbability then
            -- return div.name
        -- end
    -- end
-- end

-- local selectedDivision = divisionNames[math.random(#divisionNames)]
-- 基础随机选择
local function selectRandomDivision(divisionList)
    return divisionList[math.random(#divisionList)]
end

-- 根据波次选择师
-- local function selectDivisionBasedOnWave(waveNumber)
    -- if waveNumber == 3 then
        -- return "art_div"
    -- elseif waveNumber == 5 then
        -- return "tank_div"
    -- elseif waveNumber == 7 then
        -- return "air_div"
    -- else
        -- return selectRandomDivision()-- selectDivisionWithProbability(divisionsWithProbability)
    -- end
-- end

-- 进阶切换功能
local function advancedDivisionSwitch(currentDivision, waveNumber)
    if currentDivision == "Art_div" and waveNumber == 3 then
	  if bot_country == "csa" then
		local possibleDivisions = {"ACAV_div", "Tank_div", "USMC_div", "Airborne_div"}
        return possibleDivisions[math.random(#possibleDivisions)]
	  elseif  bot_country == "sov" then
		local possibleDivisions = {"Moto_div", "Tank_div", "vdv_div","Nva_div", "vmf_div"}
        return possibleDivisions[math.random(#possibleDivisions)]
	  elseif  bot_country == "prc" then
		local possibleDivisions = {"Moto_div", "Mech_div"}
        return possibleDivisions[math.random(#possibleDivisions)]
	  elseif  bot_country == "frg" then
		local possibleDivisions = {"Panzergren_div", "Panzer_div"}
        return possibleDivisions[math.random(#possibleDivisions)]
	  end

    else
        return selectRandomDivision(divisionNames)-- return selectDivisionWithProbability(divisionsWithProbability)
    end
end

-- 示例：初始随机选择师
local divisionNames = selectDivisionWithNationality()
local currentDivision = selectRandomDivision(divisionNames)  -- 初始随机选择师



print("ordos_debug+currentDivision=", currentDivision)

setDocVarsInMissionScript(currentDivision)

-- 获取该师的优先级调整参数
local divisionParams = divisions[bot_country] and divisions[bot_country][currentDivision] or divisions.default.default_div-- [selectedDivision]


for key, value in pairs(divisionParams) do
        print(key, "divisionParams=", value)
    end

local waveNumberExtraUnits = {
    [3] = 3,  -- waveNumber 为 3 时，额外增加 5
    [5] = 5, -- waveNumber 为 5 时，额外增加 7
    [7] = 7, -- waveNumber 为 7 时，额外增加 10
    [10] = 10, -- waveNumber 为 10 时，额外增加 13
    [13] = 13, -- waveNumber 为 13 时，额外增加 15
    [15] = 15, -- waveNumber 为 15 时，额外增加 17
}

-- 自定义四舍五入函数
function math.round(x)
    return math.floor(x + 0.5)
end

-- 计算 waveUnitTotal 的函数
function calculateWaveUnitTotal()-- (currentDivision, waveNumber, botDefender)
	-- 根据是否为防御者或进攻者调整 waveUnitTotal

    local ExtraUnitsValue = waveNumberExtraUnits[waveNumber] or 0
    --local divisionParams = divisions[bot_country][currentDivision] or divisions.default.default_div
	--local divisionParams = divisions[bot_country] and divisions[bot_country][currentDivision] or divisions.default.default_div
	local divisionParams = divisions[bot_country][currentDivision] or divisions.default.default_div
	

	if botDefender then
		waveUnitTotal = math.random(WaveUnit.Min_Defender, WaveUnit.Max_Defender) + divisionParams.defenderMultiplier + ExtraUnitsValue
		print("ordos_debug+divisionParams.defenderMultiplier=", divisionParams.defenderMultiplier)
	else
		waveUnitTotal = math.random(WaveUnit.Min_Attacker, WaveUnit.Max_Attacker) + divisionParams.attackerMultiplier + math.round(ExtraUnitsValue/2)
		print("ordos_debug+divisionParams.attackerMultiplier=", divisionParams.attackerMultiplier)
	end

	if printDebug then print("Print: waveUnitTotal", waveUnitTotal) end
end

function WaveAttack()
	-- 确保waveUnitTotal被计算
	if not waveUnitTotal then
		calculateWaveUnitTotal()
	end

	if not botDefender or botDefender then
		waveSpawnPossible = true
	end

	if waveSpawnPossible then
		-- 如果达到当前波次的单位总数
		if waveUnitCount >= waveUnitTotal then
			-- 重新计算 waveUnitTotal
			calculateWaveUnitTotal()

			waveSpawnActive = false
			waveUnitCount = 0
			waveNumber = waveNumber + 1
			if printDebug then print("Print: waveNumber", waveNumber) end
			if printDebug then print("Print: SelectedDivision", currentDivision) end
		else
			waveSpawnActive = true
		end
	end
end

function WaveUnitCounter()
	if waveSpawnPossible then
		waveUnitCount = waveUnitCount + 1
		if printDebug then print("Print: waveUnitCount =", waveUnitCount) end
	end
end

local firstPurchase = true
function GameModeSpawnCooldown()
	WaveAttack()
	local spawnTime
	if botDefender and firstPurchase then
		spawnTime = {Min = StartSpawnTime.DefenseMin, Max = StartSpawnTime.DefenseMax}
	elseif firstPurchase then
		spawnTime = {Min = StartSpawnTime.AttackMin, Max = StartSpawnTime.AttackMax}
	elseif not waveSpawnActive then
        -- 使用不同的冷却时间值（根据进攻者或防御者）
        if botDefender then
            spawnTime = {Min = SpawnCooldownTime.DCGWaveOffMin_Defender, Max = SpawnCooldownTime.DCGWaveOffMax_Defender}
        else
            spawnTime = {Min = SpawnCooldownTime.DCGWaveOffMin_Attacker, Max = SpawnCooldownTime.DCGWaveOffMax_Attacker}
        end
	else
		spawnTime = {Min = SpawnCooldownTime.DCGMin, Max = SpawnCooldownTime.DCGMax}
	end
	local cooldown = math.random(spawnTime.Min, spawnTime.Max)
	firstPurchase = false
	return cooldown
end

function table.shuffle(tbl)
	local rand = math.random
	for i = #tbl, 2, -1 do
	  local j = rand(i)
	  tbl[i], tbl[j] = tbl[j], tbl[i]
	end
	return tbl
end
  
-- Function to shuffle the flags table
local function shuffleFlags(flags)
	if waveNumber <= 1 then
		table.sort(flags, function(a, b) return a.name < b.name end)
	else
		table.shuffle(flags)
	end
end

-- Function to calculate flag priority for attacker
local function calculateAttackerPriority(f, enemyTeam, team, firstEnemyFlagEncountered)
    if f.owner == enemyTeam and not firstEnemyFlagEncountered then
        firstEnemyFlagEncountered = true
        return f.priority, firstEnemyFlagEncountered
    elseif f.owner == enemyTeam then
        return f.priority, firstEnemyFlagEncountered
    elseif f.owner == team then
        return f.priority * 0.1, firstEnemyFlagEncountered
    end
    return f.priority, firstEnemyFlagEncountered
end

-- Function to calculate flag priority for defender
local function calculateDefenderPriority(f, enemyTeam, team)
    if f.owner == enemyTeam then
        return f.priority * 2
    elseif f.owner == team then
        return f.priority * 0.5
    end
    return f.priority
end

function GetFlagToCapture(flagPoints, getPriority, flags)
	local alliedFlags, opponentFlags, neutralFlags, totalFlags = CalculateFlagStatistics(BotApi.Scene.Flags)
	local capturableFlags = CalculateCapturableFlags(totalFlags, alliedFlags)

	PrintFlagDebugInfo(alliedFlags, opponentFlags, neutralFlags, totalFlags, capturableFlags, teamIsLosing)
    
    searchDestroy = CalculateSearchDestroyValue(capturableFlags, alliedFlags, opponentFlags)
	
	if waveNumber <= 1 then
        shuffleFlags(flags)
    end
	local firstEnemyFlagEncountered = false

	return GetRandomItem(flags, function(f)
		if not botDefender then
			-- bot prioritize one flag (1st in flags table that is enemy)
			local priority
			priority, firstEnemyFlagEncountered = calculateAttackerPriority(f, enemyTeam, team, firstEnemyFlagEncountered)
			return priority
		else
			return calculateDefenderPriority(f, enemyTeam, team)
		end
	end)
end

function GetCurrentSpawnWaitTime()
    return UnitSpawnWaitTime
end


function printSceneUnitsSimple(sceneUnits)
    if not sceneUnits then
        print("sceneUnits is nil")
        return
    end
    
    print("sceneUnits 内容:")
    for k, v in pairs(sceneUnits) do
        print("[" .. tostring(k) .. "] = " .. tostring(v) .. " (" .. type(v) .. ")")
        
        -- 如果值是表，打印其内容
        if type(v) == "table" then
            for innerKey, innerValue in pairs(v) do
                print("  [" .. tostring(innerKey) .. "] = " .. tostring(innerValue) .. " (" .. type(innerValue) .. ")")
            end
        end
    end
    
    -- 特别打印当前Bot玩家的数据
    local botPlayerId = BotApi.Instance.playerId
    print("\n当前Bot玩家ID: " .. botPlayerId)
    
    if sceneUnits[botPlayerId] then
        print("sceneUnits[" .. botPlayerId .. "] 内容:")
        local botData = sceneUnits[botPlayerId]
        for k, v in pairs(botData) do
            print("  [" .. tostring(k) .. "] = " .. tostring(v) .. " (" .. type(v) .. ")")
        end
        
        -- 特别关注第二个元素
        if botData[2] then
            print("\nbotData[2] 内容:")
            print("  " .. tostring(botData[2]) .. " (" .. type(botData[2]) .. ")")
        end
    else
        print("sceneUnits 中没有找到玩家ID " .. botPlayerId)
    end
end



function GetUnitToSpawn(units)
	if not units then
		return nil
	end
	
	local unitsToSpawn = {}
	
	local income = BotApi.Commands:Income(BotApi.Instance.playerId)

	if printDebug then print("Player#".. BotApi.Instance.playerId.. " Units") end
	for i, unit in pairs(units) do
		local min_team = unit.min_team  -- not used
		local min_income = unit.min_income -- not used
		local available = BotApi.Commands:IsUnitAvailable(unit.unit)
		
		if not min_income then min_income = -1 end
		if not min_team then min_team = 0 end
		
		if printDebug then print("------ Unit", unit.unit) end

		if teamSize >= min_team and income >= min_income and available then
			table.insert(unitsToSpawn, unit)
		end
	end
	-- TODO: instead of return nil, find the shortest tts and delay calling function again by that time 
	if #unitsToSpawn == 0 then
		return nil
	end
	searchProps = {
-- Human tags
		"soldier", 
		"crew", 
		"soldier_pzscheck",
		"soldier_at",
		"soldier_atr",
		"soldier_atr_grenade",
		"soldier_bazooka",
	}
	local sceneUnits = BotApi.Scene:QueryScene(searchProps, 5)
	local unitCounts = {
		BotInfantry = 0,
		BotATInfantry = 0,
		BotTanks = 0,
	}
	local propertyToVariable = {
	-- Humans
		["soldier"] = {"BotInfantry"},
		["soldier_pzscheck"] = {"BotInfantry", "BotATInfantry"},
		["soldier_at"] = {"BotInfantry", "BotATInfantry"},
		["soldier_atr"] = {"BotInfantry", "BotATInfantry"},
		["soldier_atr_grenade"] = {"BotInfantry", "BotATInfantry"},
		["soldier_bazooka"] = {"BotInfantry", "BotATInfantry"},
	}
	printSceneUnitsSimple(sceneUnits)
	local botUnits = sceneUnits[BotApi.Instance.playerId][2]
	for i, prop in ipairs(searchProps) do
		local count = botUnits[i]
		local variables = propertyToVariable[prop]
		if variables then
			for _, variable in ipairs(variables) do
				unitCounts[variable] = unitCounts[variable] + count
			end
		end
	end
	return GetRandomItem(unitsToSpawn, function(t)
		-- search "type" array for specific element
		local function UnitType (val)
			for index, value in ipairs(t.type) do
				if value == val then
					return true
				end
			end
			return false
		end
		local basePriority = t.priority
		local priorityMultiplier = 1
		-- Bot division priority change
		if bot_country == "csa" then
			--selected_units = divisions_usa
				if unitCounts.BotInfantry < 45 then -- minimum amount of infantry
					if UnitType("Infantry") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") then
						priorityMultiplier = priorityMultiplier * (divisionParams.infantryMultiplier)
					end
				elseif unitCounts.BotInfantry >= 80 then -- maximum amount of infantry
					if UnitType("Infantry") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") then
						priorityMultiplier = priorityMultiplier * (divisionParams.infantryMultiplier) * 0.25
					end
				end
				if unitCounts.BotInfantry < 45 then -- minimum amount of infantry
					if UnitType("Infantry") and UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") then
						priorityMultiplier = priorityMultiplier * (divisionParams.UsmcMultiplier)
					elseif UnitType("Infantry") and not UnitType("Usmc") and UnitType("Tank_div") and not UnitType("Airborne") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Tank_divMultiplier)
					elseif UnitType("Infantry") and not UnitType("Usmc") and not UnitType("Tank_div") and UnitType("Airborne") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Airborne_Multiplier)
					end
				elseif unitCounts.BotInfantry >= 80 then -- maximum amount of infantry
					if UnitType("Infantry") and UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") then
						priorityMultiplier = priorityMultiplier * (divisionParams.UsmcMultiplier) * 0.25
					elseif UnitType("Infantry") and not UnitType("Usmc") and UnitType("Tank_div") and not UnitType("Airborne") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Tank_divMultiplier) * 0.25
					elseif UnitType("Infantry") and not UnitType("Usmc") and not UnitType("Tank_div") and UnitType("Airborne") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Airborne_Multiplier) * 0.25
					end
				end
				if UnitType("Mech") and not UnitType("Acav") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") and not UnitType("wPanzer_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.mechMultiplier)
				end
				if UnitType("Mech") and UnitType("Acav") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") and not UnitType("wPanzer_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.AcavMultiplier)
				elseif UnitType("Mech") and not UnitType("Acav") and UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") and not UnitType("wPanzer_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.UsmcMultiplier)
				elseif UnitType("Mech") and not UnitType("Acav") and not UnitType("Usmc") and UnitType("Tank_div") and not UnitType("Airborne") and not UnitType("wPanzer_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Tank_divMultiplier)
				elseif UnitType("Mech") and not UnitType("Acav") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("wPanzer_div") and UnitType("Airborne") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Airborne_Multiplier)
				elseif UnitType("Mech") and not UnitType("Acav") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") and UnitType("wPanzer_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.wPanzerMultiplier)
				
				end
				if UnitType("moto") and not UnitType("Acav") and not UnitType("Usmc") and not UnitType("Airborne") then
					priorityMultiplier = priorityMultiplier * (divisionParams.motoMultiplier)
				end
				if UnitType("moto") and UnitType("Acav") and not UnitType("Usmc") and not UnitType("Airborne") then
					priorityMultiplier = priorityMultiplier * (divisionParams.AcavMultiplier)
				elseif UnitType("moto") and not UnitType("Acav") and UnitType("Usmc") and not UnitType("Airborne") then
					priorityMultiplier = priorityMultiplier * (divisionParams.UsmcMultiplier)
				elseif UnitType("moto") and not UnitType("Acav") and not UnitType("Usmc") and UnitType("Airborne") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Airborne_Multiplier)
				end
				if UnitType("Cannon") and not UnitType("Artillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.cannonMultiplier)
				end
				if UnitType("Cannon") and UnitType("Artillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.artMultiplier)
				end
				if UnitType("MobileArtillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.artMultiplier)
				end
				if UnitType("Tank") and not UnitType("Acav") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") then
					priorityMultiplier = priorityMultiplier * (divisionParams.tankMultiplier)
				end
				if UnitType("Tank") and UnitType("Acav") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") and not UnitType("wPanzer_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.AcavMultiplier)
				elseif UnitType("Tank") and not UnitType("Acav") and UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") and not UnitType("wPanzer_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.UsmcMultiplier)
				elseif UnitType("Tank") and not UnitType("Acav") and not UnitType("Usmc") and UnitType("Tank_div") and not UnitType("Airborne") and not UnitType("wPanzer_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Tank_divMultiplier)
				elseif UnitType("Tank") and not UnitType("Acav") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("wPanzer_div") and UnitType("Airborne") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Airborne_Multiplier)
				elseif UnitType("Tank") and not UnitType("Acav") and not UnitType("Usmc") and not UnitType("Tank_div") and not UnitType("Airborne") and UnitType("wPanzer_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.wPanzerMultiplier)
				end
				if UnitType("Air") and not UnitType("Airborne") then
					priorityMultiplier = priorityMultiplier * (divisionParams.airMultiplier)
				end
				if UnitType("Air") and UnitType("Airborne") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Airborne_Multiplier)
				end
		elseif bot_country == "sov" then
			--selected_units = divisions_sov
				if unitCounts.BotInfantry < 45 then -- minimum amount of infantry
					if UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("vdv_div") and not UnitType("vmf_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.infantryMultiplier)
					end
					elseif unitCounts.BotInfantry >= 80 then -- maximum amount of infantry
					if UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("vdv_div") and not UnitType("vmf_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.infantryMultiplier) * 0.25
					end
				end
				
				if unitCounts.BotInfantry < 45 then -- minimum amount of infantry
					if UnitType("Infantry") and UnitType("Moto_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and not UnitType("Nva_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier)
					elseif UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("vmf_div") and not UnitType("Nva_div") and UnitType("vdv_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.VdVMultiplier)
					elseif UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("vdv_div") and not UnitType("Nva_div") and UnitType("vmf_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.vmfMultiplier)
					elseif UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("vdv_div") and UnitType("Nva_div") and not UnitType("vmf_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.NvaMultiplier)
					end
				elseif unitCounts.BotInfantry >= 80 then -- maximum amount of infantry
					if UnitType("Infantry") and UnitType("Moto_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and not UnitType("Nva_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier) * 0.25
					elseif UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("vmf_div") and UnitType("vdv_div") and not UnitType("Nva_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.VdVMultiplier) * 0.25
					elseif UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("vdv_div") and UnitType("vmf_div") and not UnitType("Nva_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.vmfMultiplier) * 0.25
					elseif UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and UnitType("Nva_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.NvaMultiplier) * 0.25
					end
				end

				if UnitType("Mech") and not UnitType("Moto_div") and not UnitType("Tank_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.mechMultiplier)
				end
				
				if UnitType("Mech") and UnitType("Moto_div") and not UnitType("Tank_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier)
				elseif UnitType("Mech") and not UnitType("Moto_div") and UnitType("Tank_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Tank_divMultiplier)
				elseif UnitType("Mech") and not UnitType("Moto_div") and not UnitType("Tank_div") and UnitType("vdv_div") and not UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.VdVMultiplier)
				elseif UnitType("Mech") and not UnitType("Moto_div") and not UnitType("Tank_div") and not UnitType("vdv_div") and UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.vmfMultiplier)
				elseif UnitType("Mech") and not UnitType("Moto_div") and not UnitType("Tank_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.NvaMultiplier)
				end
				
				if UnitType("moto") and not UnitType("Moto_div") and not UnitType("vdv_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.motoMultiplier)
				end
				
				if UnitType("moto") and UnitType("Moto_div") and not UnitType("vdv_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier)
				elseif UnitType("moto") and not UnitType("Moto_div") and UnitType("vdv_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.VdVMultiplier)
				end

				if UnitType("Cannon") and not UnitType("Artillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.cannonMultiplier)
				end

				if UnitType("Cannon") and UnitType("Artillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.artMultiplier)
				end

				if UnitType("MobileArtillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.artMultiplier)
				end

				if UnitType("Tank") and not UnitType("Moto_div") and not UnitType("Tank_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.tankMultiplier)
				end
				
				if UnitType("Tank") and UnitType("Moto_div") and not UnitType("Tank_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier)
				elseif UnitType("Tank") and not UnitType("Moto_div") and UnitType("Tank_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Tank_divMultiplier)
				elseif UnitType("Tank") and not UnitType("Moto_div") and not UnitType("Tank_div") and UnitType("vdv_div")  and not UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.VdVMultiplier)
				elseif UnitType("Tank") and not UnitType("Moto_div") and not UnitType("Tank_div") and not UnitType("vdv_div") and UnitType("vmf_div") and not UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.vmfMultiplier)
				elseif UnitType("Tank") and not UnitType("Moto_div") and not UnitType("Tank_div") and not UnitType("vdv_div") and not UnitType("vmf_div") and UnitType("Nva_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.NvaMultiplier)
				end

				if UnitType("Air") and not UnitType("vdv_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.airMultiplier)
				end
				if UnitType("Air") and UnitType("vdv_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.VdVMultiplier)
				end
		elseif bot_country == "prc" then
			--selected_units = divisions_sov
				if unitCounts.BotInfantry < 45 then -- minimum amount of infantry
					if UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("Mech_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.infantryMultiplier)
					end
				elseif unitCounts.BotInfantry >= 80 then -- maximum amount of infantry
					if UnitType("Infantry") and not UnitType("Moto_div") and not UnitType("Mech_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.infantryMultiplier) * 0.25
					end
				end
				
				
				if unitCounts.BotInfantry < 45 then -- minimum amount of infantry
					if UnitType("Infantry") and UnitType("Moto_div") and not UnitType("Mech_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier)
					elseif UnitType("Infantry") and not UnitType("Moto_div") and UnitType("Mech_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Mech_divMultiplier)			
					end
				elseif unitCounts.BotInfantry >= 80 then -- maximum amount of infantry
					if UnitType("Infantry") and UnitType("Moto_div") and not UnitType("Mech_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier) * 0.25
					elseif UnitType("Infantry") and not UnitType("Moto_div") and UnitType("Mech_div") then
						priorityMultiplier = priorityMultiplier * (divisionParams.Mech_divMultiplier) * 0.25			
					end
				end
				
				if UnitType("Mech") and not UnitType("Moto_div") and not UnitType("Mech_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.mechMultiplier)
				end
				
				if UnitType("Mech") and UnitType("Moto_div") and not UnitType("Mech_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier)
				elseif UnitType("Mech") and not UnitType("Moto_div") and UnitType("Mech_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Mech_divMultiplier)			
				end
				
				if UnitType("moto") and not UnitType("Moto_div") and not UnitType("Mech_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.motoMultiplier)
				end
				
				if UnitType("moto") and UnitType("Moto_div") and not UnitType("Mech_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier)
				elseif UnitType("moto") and not UnitType("Moto_div") and UnitType("Mech_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Mech_divMultiplier)
				end

				if UnitType("Cannon") and not UnitType("Artillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.cannonMultiplier)
				end

				if UnitType("Cannon") and UnitType("Artillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.artMultiplier)
				end

				if UnitType("MobileArtillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.artMultiplier)
				end

				if UnitType("Tank") and not UnitType("Moto_div") and not UnitType("Mech_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.tankMultiplier)
				end
				
				if UnitType("Tank") and UnitType("Moto_div") and not UnitType("Mech_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Moto_divMultiplier)
				elseif UnitType("Tank") and not UnitType("Moto_div") and UnitType("Mech_div") then
					priorityMultiplier = priorityMultiplier * (divisionParams.Mech_divMultiplier)
				end

				if UnitType("Air") then
					priorityMultiplier = priorityMultiplier * (divisionParams.airMultiplier)
				end
		elseif bot_country == "frg" then
			--selected_units = divisions_frg
				if unitCounts.BotInfantry < 45 then -- minimum amount of infantry
					if UnitType("Infantry") then
						priorityMultiplier = priorityMultiplier * (divisionParams.infantryMultiplier)
					end
				elseif unitCounts.BotInfantry >= 80 then -- maximum amount of infantry
					if UnitType("Infantry") then
						priorityMultiplier = priorityMultiplier * (divisionParams.infantryMultiplier) * 0.25
					end
				end
				
				if UnitType("Mech") and not UnitType("Panzergren") and not UnitType("Panzer") then
					priorityMultiplier = priorityMultiplier * (divisionParams.mechMultiplier)
				end
				
				if UnitType("Mech") and UnitType("Panzergren") and not UnitType("Panzer") then
					priorityMultiplier = priorityMultiplier * (divisionParams.PanzergrenMultiplier)
				elseif UnitType("Mech") and not UnitType("Panzergren") and UnitType("Panzer") then
					priorityMultiplier = priorityMultiplier * (divisionParams.PanzerMultiplier)			
				end
				
				if UnitType("moto") and not UnitType("Panzergren") and not UnitType("Panzer") then
					priorityMultiplier = priorityMultiplier * (divisionParams.motoMultiplier)
				end
				
				if UnitType("moto") and UnitType("Panzergren") and not UnitType("Panzer") then
					priorityMultiplier = priorityMultiplier * (divisionParams.PanzergrenMultiplier)
				elseif UnitType("moto") and not UnitType("Panzergren") and UnitType("Panzer") then
					priorityMultiplier = priorityMultiplier * (divisionParams.PanzerMultiplier)
				end

				if UnitType("Cannon") and not UnitType("Artillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.cannonMultiplier)
				end

				if UnitType("Cannon") and UnitType("Artillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.artMultiplier)
				end

				if UnitType("MobileArtillery") then
					priorityMultiplier = priorityMultiplier * (divisionParams.artMultiplier)
				end

				if UnitType("Tank") and not UnitType("Panzergren") and not UnitType("Panzer") then
					priorityMultiplier = priorityMultiplier * (divisionParams.tankMultiplier)
				end
				
				if UnitType("Tank") and UnitType("Panzergren") and not UnitType("Panzer") then
					priorityMultiplier = priorityMultiplier * (divisionParams.PanzergrenMultiplier)
				elseif UnitType("Tank") and not UnitType("Panzergren") and UnitType("Panzer") then
					priorityMultiplier = priorityMultiplier * (divisionParams.PanzerMultiplier)
				end

				if UnitType("Air") then
					priorityMultiplier = priorityMultiplier * (divisionParams.airMultiplier)
				end
		
		end
		return basePriority * priorityMultiplier
	end)
end

function OnGameStart()
    isAttackerOrDefender()
    setVarsInMissionScript()
    OnGameStartUtility("conquest")
end

function OnGameQuant()
	TrySpawnUnit()

	-- if Timer>0 then
	-- 	Timer=Timer+1
	-- 	-- print("AIDebug: timer=",Timer)
	-- end

	SendBG2Attack()

	local waypoints = BotApi.Scene.Waypoints
	if #waypoints == 0 then
		--for i, squad in pairs(NormalSquads) do
			--if not Context.SquadTimers[squad] then
			--	SetSquadOrder(CaptureFlag, squad, OrderRotationPeriod)
			--end
		--end
		for i, squad in pairs(BotApi.Scene.Squads) do
			local isInBG=false
			for j, bg in pairs(BattleGroup) do
				if bg==squad then
					isInBG=true
					break
				end
			end
			if isInBG==false then
				if not Context.SquadTimers[squad] then
					SetSquadOrder(CaptureFlag, squad, OrderRotationPeriod)
				end
			end
		end
	end
end

function GotoNextWaypoint(squad)
	local waypoints = BotApi.Scene.Waypoints
	BotApi.Commands:CaptureFlag(squad, waypoints[math.random(#waypoints)]) --captureflag is basically gothereandattack
	if printDebug then print("Print: #captureFlag call inside GoToNextWaypoint") end
end

function OnWaypoint(args)
	if printDebug then print("Print: #GotoNextWaypoint call inside OnWaypoint") end
	GotoNextWaypoint(args.squadId)
end

-- NOTE: Returns true if squad tagged "_lua_mi" or "_lua_alert".
-- NOTE: "_lua_mi" = reserved for mission script use.
-- NOTE: "_lua_alert" = squad abruptly runs into enemy force seek&destroy.
function IsSquadInScript(squad)
	if BotApi.Scene:IsSquadTagged(squad, "_lua_mi") or BotApi.Scene:IsSquadTagged(squad, "repairing") then
		if printDebug then print("Print: SQUADinSCRIPT thus no action squad", squad, "Player#",BotApi.Instance.playerId, "Team", team) end
		return true
	elseif BotApi.Scene:IsSquadTagged(squad, "_lua_alert") then
		if printDebug then print("Print: SQUADinALERT thus seek by squad", squad, "Player#",BotApi.Instance.playerId, "Team", team) end
		BotApi.Commands:SeekAndDestroy(squad)
		return true
	end
end

	-- NOTE: Returns true if squad tagged "_lua_ignore" for general ignore.
function IsSquadToIgnore(squad)
	if BotApi.Scene:IsSquadTagged(squad, "_lua_ignore") then
		return true
	end
end

function CaptureFlag(squad)
	local flags = {}
    for i, flag in pairs(BotApi.Scene.Flags) do
        table.insert(flags, {id = i, name = flag.name, priority = getDefaultFlagPriority(flag), owner = flag.occupant})
    end
	
	local flag = GetFlagToCapture(BotApi.Scene.Flags, getDefaultFlagPriority, flags)

	if not flag then
		if printDebug then print("Print: No Flags so SeekAndDestroy by squad ", squad, "Player#", BotApi.Instance.playerId) end
		BotApi.Commands:SeekAndDestroy(squad)
		return
	end

	if IsSquadInScript(squad) then
		return
	end

	if IsSquadToIgnore(squad) then
		local rndAI = math.random()
		if searchDestroy > rndAI then
			if printDebug then print("Print: [see_enemy] seek by squad ", squad, "Player#", BotApi.Instance.playerId) end
			BotApi.Commands:SeekAndDestroy(squad)
			return
		else
			if printDebug then print("Print: [see_enemy] donothing by squad ", squad, "Player#", BotApi.Instance.playerId) end
			return
		end
	end

	if printDebug then print("Print: [notags] ctf by squad", squad, "Player#", BotApi.Instance.playerId, "Flag name: ", flag.name) end
	return BotApi.Commands:CaptureFlag(squad, flag.name)
end

function OnGameSpawn(args)

	if CreateBattleGroup(args.squadId)==true then
		local waypoints = BotApi.Scene.Waypoints
		if #waypoints == 0 then
			SetSquadOrder(CaptureFlag, args.squadId, OrderRotationPeriod)
		else
	
			print("FindWaypoints! contents="+PrintTable(BotApi.Scene.Waypoints))
			GotoNextWaypoint(args.squadId)
			if printDebug then print("Print: #waypoints != 0") end
		end
	end


	
end

BotApi.Events:Subscribe(BotApi.Events.GameStart, OnGameStart)
BotApi.Events:Subscribe(BotApi.Events.GameEnd, OnGameStop)
BotApi.Events:Subscribe(BotApi.Events.Quant, OnGameQuant)
BotApi.Events:Subscribe(BotApi.Events.GameSpawn, OnGameSpawn)
BotApi.Events:Subscribe(BotApi.Events.Waypoint, OnWaypoint)