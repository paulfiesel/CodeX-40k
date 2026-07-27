Purchases["era1960.csa"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AA", "Class2",}, unit = "manpad_operator(csa)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist_mg(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT", "Class3",}, unit = "squad_reservist_at(csa)"},
				
		
			-- Cannons	
				--HMGs
				--{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "mg_stand_m60_ai"},
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "mg_stand_m2_ai"},
				{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "mk19_stan_ai"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "bgm71_tow_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "m45_maxson"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "m20_rcl_ai"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "m40"},
				--Mortars
				{priority = 0.2, type = {"Cannon", "Mortar", "Class2",}, unit = "m29_mortar_ai"},
				{priority = 0.2, type = {"Cannon", "Mortar", "Class2",}, unit = "m30_mortar"},
				--Infantry_Support
				{priority = 0.75, type = {"Cannon", "Support", "Class3",}, unit = "75mm_m116"},
				--Artillery
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "105mm_m101a1"},
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "155mm_m114"},
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "203mm_m115"},
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "doctrine_vehicle_m119_artillery(csa)"},	
				--Rocket Artillery
	
			--APCs/BTRs
				
				
			--Tanks
				{priority = 1.0, type = {"Vehicle", "MG", "Class2",}, unit = "humvee_m240"},
				{priority = 1.0, type = {"Vehicle", "MG", "Class2",}, unit = "humvee_m2hb"},
				{priority = 0.5, type = {"Vehicle", "MG", "Class2",}, unit = "humvee_mk19"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "m114a1"},
				{priority = 1.0, type = {"Armored", "AT", "Class3",}, unit = "m113_m40"},
				{priority = 0.5, type = {"Armored", "Mortar", "MG", "Class3",}, unit = "m125"},
				{priority = 0.5, type = {"Class2", "Tank",}, unit = "m163"},
				{priority = 0.5, type = {"Class2", "Tank",}, unit = "m1097_avenger"},
			--Tanks					
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "m41"},			
			--SPG
			--Air Assets
				{priority = 0.2, type = {"Helicopter", "Sortie", "Support", "Class3",}, unit = "uh-1b_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "AT", "Class3",}, unit = "uh-1b_m22_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "AT", "Class3",}, unit = "uh-1b_maxwell_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "Support", "Class3",}, unit = "uh-1b_ara_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "Support", "Class3",}, unit = "ah-64_apache_heavy_airborne"},
			--Offmap Supports
				
			
			-- Doctrine Irregular = "Armored Cavalry Squadron"
				
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_acav(csa)"},
				{priority = 0.5, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_acav_weapon(csa)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_acav_moto(csa)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_acav_weapon_moto(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_fgm148_fireteam_acav(csa)"},
				
				
				{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m60a1_acav(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m3a2_acav(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_abrams_acav(csa)"},	
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m1ip_acav(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_challenger_acav(csa)"},				
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m106_acav(csa)"},
				
				{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_M150_acav(csa)"},
				{priority = 2.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m1a1_acav(csa)"},

				
			-- Doctrine Amphibious = "USMC Marine Expeditionary Unit"
				
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_usmc(csa)"},
				{priority = 0.5, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_usmc_antitank(csa)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_lav25_usmc(csa)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_aavp7_usmc(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_usmc_scout(csa)"},
				
				{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m67_usmc(csa)"},
				{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m60a1_usmc(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_lav25_usmc(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_aavp7_usmc(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m103_usmc(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m60a3_usmc(csa)"},
				
							
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_udt(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m728(csa)"},
				{priority = 2.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m1a1ha(csa)"},
			
			-- Doctrine Tank = "Armor Battalion Task Force"
				
				{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_armor_weapon(csa)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_lrrp(csa)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_armor_weapon_moto(csa)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_armored_cav(csa)"},
				{priority = 0.5, type = {"Class3", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_fgm148_fireteam_armor(csa)"},
				
				{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m106_armor(csa)"},
				
				{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m60a1(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_bredly_armor(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_abrams_armor(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m1a1_armor(csa)"},
				
				
			
				
				{priority = 0.2, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m114a2(csa)"},			
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_Bradley_acav(csa)"},
				{priority = 2.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m1a2(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m901(csa)"},
				
			-- Doctrine Assault = "Airborne Battle Group"
				
				{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_82nd(csa)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_82nd_weapon(csa)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_82nd_lav(csa)"},
				{priority = 1.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_c130para(csa)"},
				
				{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_humveetow_acav(csa)"},
				{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m551(csa)"},
				
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_sadm(csa)"},	
				
				
			-- Doctrine Support = "Artillery Brigade"
				{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_art_miners(csa)"},	
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_spec_observe(csa)"},
				
				{priority = 1.0, type = {"Class2", "Cannon",}, unit = "doctrine_vehicle_m119_artillery(csa)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m109_armor(csa)"},
				{priority = 1.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_paladin(csa)"},
				{priority = 1.0, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m270(csa)"},
				{priority = 1.0, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m110(csa)"},


			-- Doctrine = "U.S.Air Force"
			
			-- Doctrine = "AA defence"
			{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_hawk(csa)"},
			{priority = 0.2, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_hawk_radar(csa)"},
			-- Doctrine = "Aircraft"
		
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_ah1s(csa)"},
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_a_10cbomber(csa)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_a_10c_support(csa)"},
			{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_ah64_usaf(csa)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", }, unit = "doctrine_vehicle_a-10c_at(csa)"},
				
		}
	}
}
