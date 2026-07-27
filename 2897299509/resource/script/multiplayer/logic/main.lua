-- 战斗群，当在场单位充足，AI会试图用多余的单位组成战斗群
BattleGroup = {}
-- 一般小队
NormalSquads={}
-- 战斗群单位阈值，超过之后派出当前战斗群执行攻击
BGMaxNum = 6

-- 计时器
Timer=0


function CreateBattleGroup(squad)
    -- 保证有和据点数量相同多的小队在执行常规攻击
    local availableNum = #BotApi.Scene.Squads - #BotApi.Scene.Flags - #BattleGroup

    -- 将当前小队加入战斗群
    if availableNum > 0 then
        table.insert(BattleGroup,squad)
        -- BotApi.Commands:CaptureFlag(squad, "stop") --stop没有特殊含义，只是指向一个不存在的flag，这样会让ai停在原地等待。

        if Timer==0 then
            Timer=1
        end
        return false
    else
        table.insert(NormalSquads,squad)
        return true
    end
end

-- 当战斗群里的单位足够，派遣其打击玩家的一个flag
function SendBG2Attack()

    if #BattleGroup>BGMaxNum then
        
        -- 选定一个属于玩家或中立的旗帜，如果AI占领了所有旗帜，就全员开始SeekAndDestroy
        local targetFlag
        for i, flag in pairs(BotApi.Scene.Flags) do
            if(flag.occupant~=team) then
                targetFlag=flag.name
            end
        end

        if targetFlag then
            for i, squad in pairs(BattleGroup) do
                BotApi.Commands:CaptureFlag(squad, targetFlag)
            end
            print("AIDebug: Send BattleGroup to ",targetFlag)
        else
            for i, squad in pairs(BattleGroup) do
                BotApi.Commands:SeekAndDestroy(squad)
            end
            print("AIDebug: Send BattleGroup to SeekAndDestroy")
        end

        BattleGroup={}
    end
end

-- Debug
-- code from: https://www.cnblogs.com/leoin2012/p/3915295.html
function PrintTable(tbl, level, filteDefault)
    local msg = ""
    filteDefault = filteDefault or true --默认过滤关键字（DeleteMe, _class_type）
    level = level or 1
    local indent_str = ""
    for i = 1, level do
        indent_str = indent_str .. "  "
    end

    print(indent_str .. "{")
    for k, v in pairs(tbl) do
        if filteDefault then
            if k ~= "_class_type" and k ~= "DeleteMe" then
                local item_str = string.format("%s%s = %s", indent_str .. " ", tostring(k), tostring(v))
                print(item_str)
                if type(v) == "table" then
                    PrintTable(v, level + 1)
                end
            end
        else
            local item_str = string.format("%s%s = %s", indent_str .. " ", tostring(k), tostring(v))
            print(item_str)
            if type(v) == "table" then
                PrintTable(v, level + 1)
            end
        end
    end
    print(indent_str .. "}")
end
