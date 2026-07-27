Purchases["conquest.frg"] = {
	{Repeat = 0, --infinite
		Units = {
			---[====[
			-- Infantry
				
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(frg)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg(frg)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_scout(frg)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sniper(frg)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperap(frg)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperat(frg)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_reservist_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fireteamap_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fireteamat_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fireteamss_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_con(frg)"},
				
				
				

				--ai platoon and squads
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "tank_platoon_m47frg"},
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "tank_platoon_m47g"},
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "tank_platoon_m48g"},
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "tank_platoon_m48a2c"},
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "tank_platoon_leopard_1"},
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "tank_platoon_leopard1a1"},
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "tank_platoon_leopard1a5"},
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "tank_platoon_leopard_2a4"},
				--{priority = 1.5, type = {"Tank", "Infantry", "Squad",}, unit = "Composite_Mechanized_Unit_m48a2c"},
				--{priority = 1.5, type = {"Tank", "Infantry", "Squad",}, unit = "composite_mechanized_unit_leo1a1"},
				--{priority = 1.5, type = {"Tank", "Infantry", "Squad",}, unit = "composite_mechanized_unit_leo2a4"},
				--{priority = 0.5, type = {"Cannon", "Artillery", "Squad",}, unit = "arty_platoon_155mm_m114g"},
				--{priority = 0.5, type = {"Tank", "Medium", "Artillery",}, unit = "spg_platoon_m109g"},
				--{priority = 1.0, type = {"Tank", "Light", "AA",}, unit = "spaag_platoon_aaleo"},
			-- Doctrine	= Panzergrenadiere
			
				
				{priority = 1.0, type = {"Infantry", "Squad", "Panzergren",}, unit = "squad_jager_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Panzergren",}, unit = "squad_squad_jager_marksman(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Panzergren",}, unit = "squad_fernspah_lrrp_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Panzergren",}, unit = "squad_fernspah_fireteam_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Panzergren",}, unit = "squad_fernspah_con(frg)"},
				{priority = 1.0, type = {"moto", "Panzergren",}, unit = "squad_jager_moto(frg)"},
				{priority = 1.0, type = {"moto", "Panzergren",}, unit = "squad_Fernspah_moto(frg)"},
				{priority = 1.0, type = {"Tank", "Class1", "Panzergren",}, unit = "wiesel1_gun"},
				{priority = 1.0, type = {"Tank", "Class1", "Panzergren",}, unit = "wiesel1_tow"},
				{priority = 1.0, type = {"Tank", "Class2", "Panzergren",}, unit = "leopard_1a5"},
				{priority = 1.0, type = {"Tank", "Class2", "Panzergren",}, unit = "leopard_2a0"},
			
			
			-- Doctrine = "Panzertruppe"
			
				{priority = 1.0, type = {"Mech", "Squad", "Panzer",}, unit = "squad_rifle_moto_con(frg)"},
				{priority = 1.0, type = {"Mech", "Squad", "Panzer",}, unit = "squad_rifle_moto2_con(frg)"},
				{priority = 1.0, type = {"Mech", "Squad", "Panzer",}, unit = "squad_pzgren_moto_con(frg)"},
				{priority = 1.0, type = {"Mech", "Squad", "Panzer",}, unit = "squad_pzgren_moto2_con(frg)"},
				{priority = 1.0, type = {"Mech", "Squad", "Panzer",}, unit = "squad_pzgren_mech_con(frg)"},
				{priority = 1.0, type = {"Mech", "Squad", "Panzer",}, unit = "squad_pzgren_mech_con2(frg)"},
				{priority = 1.0, type = {"Mech", "Squad", "Panzer",}, unit = "squad_pzgren_mech_con3(frg)"},
				{priority = 0.5, type = {"Tank", "Class1", "Panzer",}, unit = "spz_112"},
				{priority = 0.5, type = {"Tank", "Class1", "Panzer",}, unit = "spz_123_m40"},
				{priority = 0.5, type = {"Tank", "Class1", "Panzer",}, unit = "rakjpz_1"},
				{priority = 0.5, type = {"Tank", "Class1", "Panzer",}, unit = "rakjpz_2"},
				{priority = 0.5, type = {"Tank", "Class1", "Panzer",}, unit = "kanjpz"},
				{priority = 0.5, type = {"Tank", "Class2", "Panzer",}, unit = "hsl"},
				{priority = 1.0, type = {"Tank", "Class1", "Panzer",}, unit = "leopard_1a1"},
				{priority = 1.0, type = {"Tank", "Class3", "Panzer",}, unit = "leopard_2a4"},
				{priority = 1.0, type = {"Tank", "Class3", "Panzer",}, unit = "leopard_2a5"},

			-- Cannons	
				--HMGs
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "mg3_lafette_ai"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "mg_stand_m2g_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "m45g"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "fk20-2"},
				{priority = 0.5, type = {"Cannon", "AA",}, unit = "40mm_bofors_l70_frg"},
				--Anti Tank
				--{priority = 1.0, type = {"Cannon", "AT",}, unit = "m20g_rc_ai"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "m40g"},
				--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "81mm_krh36_frg_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "120mm_krh40_frg"},
				--Infantry_Support
				--{priority = 1.0, type = {"Cannon", "Support",}, unit = "75mm_m116g"},
				--Artillery
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "105mm_m101g"},
				--{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "155mm_m114g"},
				--{priority = 0.1, type = {"Cannon", "Artillery",}, unit = "203mm_m115g"},	
				--Rocket Artillery
			--Vehicles
				{priority = 1.0, type = {"Vehicle", "MG",}, unit = "munga4_mg3"},
				{priority = 1.0, type = {"Vehicle", "AT",}, unit = "munga8_m40"},
			--APCs/BTRs
				
				
			--Tanks
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "m41g"},
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "m42g"},
				{priority = 1.0, type = {"Tank", "Class2",}, unit = "aaleo"},

				{priority = 0.5, type = {"Tank", "Class1",}, unit = "m47frg"},
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "m47g"},
				{priority = 0.5, type = {"Tank", "Class1",}, unit = "m48g"},
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "m48a2c"},
				{priority = 0.5, type = {"Tank", "Class1",}, unit = "leopard_1"},
				
				
			--SPG
				{priority = 0.5, type = {"MobileArtillery",}, unit = "m109g"},
				{priority = 0.5, type = {"MobileArtillery",}, unit = "m110g"},
			--Air Assets
				{priority = 0.2, type = {"Air", "Class3",}, unit = "a-10c_bomber_ai_ger"},
				{priority = 0.2, type = {"Air", "Class3",}, unit = "a-10c_at_ai_ger"},
				{priority = 0.2, type = {"Air", "Class3",}, unit = "a-10c_support_ai_ger"},
				{priority = 0.3, type = {"Air", "Class2",}, unit = "c130_para_ai_ger"},
				
		}
	}
}