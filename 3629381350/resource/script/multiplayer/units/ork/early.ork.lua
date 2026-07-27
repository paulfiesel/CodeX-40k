Purchases["early.ork"] = {
	{Repeat = 0,  --infinite
		Units = { 
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_grots(ork)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_sluggaboys(ork)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_shootaboys(ork)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad", "AT",}, unit = "squad_ork_doc_evilsunz_inf_tankbustas(ork)"},
			{priority = 1.0, type = {"Class3", "Armored", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_warbikers(ork)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_kommandos(ork)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_nobshootas(ork)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_nobsluggas(ork)"},
			{priority = 1.0, type = {"Class1", "Armored", "Squad", "AT",}, unit = "squad_ork_doc_evilsunz_inf_meganobs(ork)"},
			{priority = 1.0, type = {"Class3", "Armored", "MG", "Transport",}, unit = "veh_ork_doc_evilsunz_trukk_transport(ork)"},		-- Class3 for trukks, AI doesnt make good use of motorized squads
			{priority = 1.0, type = {"Class1", "Infantry", "Squad", "AT",}, unit = "squad_ork_doc_evilsunz_inf_squigbombs(ork)"},		-- Class1, Squigs are cheap but limited, AI should always but it when possible.
			
			{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "squad_ork_doc_evilsunz_inf_gretchin(ork)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "squad_ork_doc_evilsunz_inf_sing_big_shoota(ork)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "squad_ork_doc_evilsunz_inf_sing_stikkbomber(ork)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "squad_ork_doc_evilsunz_inf_sing_rokkit(ork)"},
			
			{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "squad_ork_doc_evilsunz_inf_burnas(ork)"},				-- Class3 for burnas, Those are really trigger happy in hands of AI.
			{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "squad_ork_doc_evilsunz_inf_loota_dakka(ork)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Team", "AT",}, unit = "squad_ork_doc_evilsunz_inf_loota_beamy(ork)"},	
			{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "squad_ork_doc_evilsunz_inf_weirdboy(ork)"},		-- AI should buy more Weirdboys, It's good in their hands .vs Blobs and light vehicles.
			{priority = 1.0, type = {"Class1", "Infantry", "Team",}, unit = "squad_ork_doc_evilsunz_inf_mekboy(ork)"},				-- AI should buy more Mekboys, they are good for map control...
			{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "squad_ork_doc_evilsunz_inf_warboss(ork)"},		-- AI Should always go for Warboss ASAP, it's the best ork unit in the game.
				
			{priority = 1.0, type = {"Class3", "Cannon", "Support", "AA",}, unit = "veh_ork_doc_evilsunz_flakkgun(ork)"},
			{priority = 1.0, type = {"Class2", "Cannon", "Support",}, unit = "veh_ork_doc_evilsunz_grotkannon(ork)"},
			{priority = 1.0, type = {"Class2", "Cannon", "Support", "AT",}, unit = "veh_ork_doc_evilsunz_mekgun(ork)"},

			{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_dp_stormboyz(ork)"},				-- Class1, stormboyz are just way too cool for the AI not have a plenty of 'em xD
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_dp_digga_mob(ork)"},			
			{priority = 1.0, type = {"Class2", "Armored", "Squad",}, unit = "squad_ork_doc_evilsunz_inf_dp_digga_meganobz(ork)"},			
						
			{priority = 1.0, type = {"Class3", "Armored", "MG",}, unit = "veh_ork_doc_evilsunz_warbuggy_shootas(ork)"},		
			{priority = 1.0, type = {"Class2", "Armored", "AT",}, unit = "veh_ork_doc_evilsunz_warbuggy_rokkits(ork)"},		
			{priority = 1.0, type = {"Class2", "Armored", "Mortar",}, unit = "veh_ork_doc_evilsunz_wartrakk(ork)"},		
			{priority = 1.0, type = {"Class3", "Armored", "Transport",}, unit = "veh_ork_doc_evilsunz_trukk_flamer(ork)"}, 	
			
			{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "veh_ork_doc_evilsunz_grot_tank_shoota(ork)"},		
			{priority = 1.0, type = {"Class2", "Armored",}, unit = "veh_ork_doc_evilsunz_grot_tank_kannon(ork)"},
			{priority = 1.0, type = {"Class1", "Armored", "AT",}, unit = "veh_ork_doc_evilsunz_grot_tank_rokkit(ork)"},		
			
			{priority = 1.0, type = {"Class3", "Tank", "Medium", "MG",}, unit = "veh_ork_doc_evilsunz_deff_dread_dakka(ork)"}, 			
			{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "veh_ork_doc_evilsunz_deff_dread_burna(ork)"}, 			
			{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "veh_ork_doc_evilsunz_deff_dread_rokkit(ork)"}, 	
			{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "veh_ork_doc_evilsunz_deff_dread_autocannon(ork)"}, 	
			{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "veh_ork_doc_evilsunz_deff_dread_kannon(ork)"}, 	
			{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "veh_ork_doc_evilsunz_deff_dread_zzap(ork)"}, 	
			{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "veh_ork_doc_evilsunz_deff_dread_megablasta(ork)"}, 	

			{priority = 1.0, type = {"Class3", "Tank", "Medium", "AA",}, unit = "veh_ork_doc_evilsunz_gunwagon_flakk(ork)"},
			{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "veh_ork_doc_evilsunz_gunwagon_kannon(ork)"},
			{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "veh_ork_doc_evilsunz_gunwagon_zzap(ork)"},
			
			{priority = 1.0, type = {"Class3", "Tank", "Heavy", "MG",}, unit = "veh_ork_doc_evilsunz_battlewagon_transport(ork)"}, 	
			{priority = 1.0, type = {"Class2", "Tank", "Heavy",}, unit = "veh_ork_doc_evilsunz_looted_lemanruss(ork)"}, 	
			{priority = 1.0, type = {"Class2", "Tank", "Heavy",}, unit = "veh_ork_doc_evilsunz_looted_predator(ork)"}, 	
			{priority = 1.0, type = {"Class1", "Tank", "Heavy",}, unit = "veh_ork_doc_evilsunz_battlewagon_kannon(ork)"}, 			
			{priority = 1.0, type = {"Class2", "Tank", "Heavy",}, unit = "veh_ork_doc_evilsunz_kill_bursta(ork)"}, 		
			{priority = 1.0, type = {"Class2", "Tank", "Heavy", "MG",}, unit = "veh_ork_doc_evilsunz_gorkanaut(ork)"}, 	
			
			{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored",}, unit = "doctrine_ork_doc_evilsunz_kult_of_speed_t1(ork)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored", "Squad", "Transport",}, unit = "doctrine_ork_doc_evilsunz_bring_in_da_Trukks_t1(ork)"},	
			{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_ork_doc_evilsunz_stormboy_horde_t1(ork)"},
			
			{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Infantry", "Squad",}, unit = "doctrine_ork_doc_evilsunz_flashgitz_t2(ork)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium", "AT",}, unit = "doctrine_ork_doc_evilsunz_bring_da_wagons_t2(ork)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_ork_doc_evilsunz_mob_o_dreads_t2(ork)"},
			
			{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_ork_doc_evilsunz_spechul_tank_t3(ork)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_ork_doc_evilsunz_lifta_drop_t3(ork)"},
			
			{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_ork_doc_evilsunz_Morkanaut_t3(ork)"},
		}
	}
}
