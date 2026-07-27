Purchases["era1960.frg"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_lat(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(frg)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist_mg(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT", "Class3",}, unit = "squad_reservist_at(frg)"},

			-- Cannons	
				--HMGs
				{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "mg3_lafette_ai"},
				--{priority = 1.0, type = {"Cannon", "MG",}, unit = "mg_stand_m2g_ai"},
				--Anti Aircraft
				--{priority = 1.0, type = {"Cannon", "AA",}, unit = "m45g"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "fk20-2"},
				{priority = 0.5, type = {"Cannon", "AA", "Class1",}, unit = "40mm_bofors_l70_frg"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "m20g_rcl_ai"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "m40g"},
				--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "81mm_krh36_frg_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar", "Class1",}, unit = "120mm_krh40_frg"},
				--Infantry_Support
				--{priority = 1.0, type = {"Cannon", "Support", "Class3",}, unit = "75mm_m116g"},
				--Artillery
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "105mm_m101g"},
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "155mm_m114g"},
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class1",}, unit = "203mm_m115g"},	
				--Rocket Artillery
	
			--APCs/BTRs
				
				
			--Tanks
				
				{priority = 1.0, type = {"Tank", "Class2",}, unit = "m41g"},
				{priority = 1.0, type = {"Tank", "Class2",}, unit = "m42g"},
				{priority = 1.0, type = {"Tank", "Class2",}, unit = "aaleo"},
				{priority = 1.0, type = {"Tank", "Class2",}, unit = "kanjpz"},
				{priority = 0.3, type = {"Tank", "Class2",}, unit = "spz_513"},
				
			-- Doctrine = "Panzertruppe"
				-- Doctrine = "Panzer Infantry"
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_panzergen(frg)"},
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_panzer_mech(frg)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_panzer_mech2(frg)"},
				{priority = 1.5, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_panzergren_marder1a1(frg)"},
				
				-- Doctrine = "Panzer vehicle&tanks"
				{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_hsl1a1(frg)"},
				{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m48a2(frg)"},
				{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_leopard1(frg)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_leopard1a1(frg)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_leopard2a4_panzer(frg)"},
				
				{priority = 1.0, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_spz_morser(frg)"},
				{priority = 2.0, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_leopard2a5(frg)"},
				
			-- Doctrine	= Panzergrenadiere
				-- Doctrine = "Panzer Infantry"
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_jager(frg)"},
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_jager_marksman(frg)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_jager_moto(frg)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_Fernspah_moto(frg)"},
				
				-- Doctrine = "Panzer vehicle&tanks"
				{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_rakjpz1(frg)"},
				{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_wiesel1(frg)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_wiesel1_tow(frg)"},
				{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m48a2_pzgen(frg)"},
				{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_leopard1_pzgen(frg)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_leopard1a1_pzgren(frg)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_leopard1a5(frg)"},
				
				
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_rakjpz2(frg)"},
				{priority = 2.0, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_leopard2a1(frg)"},
				{priority = 2.0, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_leopard2a4(frg)"},
				
			--SPG
			--Air Assets
				{priority = 0.2, type = {"Helicopter", "Sortie", "Support", "Class3",}, unit = "alouette_ii_frg_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "AT", "Class1",}, unit = "alouette_ii_ss10_frg_airborne"},
			--Offmap Supports
									
			-- Doctrine Support = "Artilleriekompanie"	
				
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Tier1",}, unit = "doctrine_squad_bgs(frg)"},
		}
	}
}
