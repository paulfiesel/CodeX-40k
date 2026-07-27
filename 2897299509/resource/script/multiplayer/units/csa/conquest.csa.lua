Purchases["conquest.csa"] = {
	{Repeat = 0, --infinite
		Units = {
			-- basic Infantry
				
				{priority = 1.0, type = {"Infantry", "Team", "AT"}, unit = "single_at_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT"}, unit = "single_lat_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Team"}, unit = "single_mg_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Team"}, unit = "single_grenadier_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Team"}, unit = "single_scout_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Team"}, unit = "single_flamer_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Team"}, unit = "single_marksman_con(csa)"},
				{priority = 0.2, type = {"Infantry", "Team"}, unit = "single_sniper(csa)"},
				{priority = 0.2, type = {"Infantry", "Team"}, unit = "single_sapperap_con(csa)"},
				{priority = 0.2, type = {"Infantry", "Team"}, unit = "single_sapperat_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AA"}, unit = "manpad_operator(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT"}, unit = "fgm148_fire_team(csa)"},
				
				
				{priority = 1.0, type = {"Infantry", "Squad"}, unit = "squad_reservist_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad"}, unit = "squad_reservist_weapon_con(csa)"},
				
				
				{priority = 1.0, type = {"Infantry", "Squad"}, unit = "squad_natguard_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad"}, unit = "squad_natguard_mg_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad"}, unit = "squad_natguard_at_con(csa)"},
				
				{priority = 1.0, type = {"Infantry", "Squad"}, unit = "squad_rifle_con(csa)"},
				{priority = 0.5, type = {"Infantry", "Squad"}, unit = "squad_weapon_con(csa)"},
				
				
				
		-- Doctrine ACAV_div = "Armored Cavalry Squadron"
				
				{priority = 1.0, type = {"Mech", "Acav"}, unit = "squad_acav_moto_con(csa)"},
				{priority = 1.0, type = {"Mech", "Acav"}, unit = "squad_acav_weapon_moto_con(csa)"},
				{priority = 1.5, type = {"moto", "Acav"}, unit = "squad_acav_assault_moto_adv_con(csa)"},
				{priority = 1.0, type = {"Tank", "Class2", "Acav"}, unit = "m60a1"},
				{priority = 1.0, type = {"Tank", "Class1", "Acav"}, unit = "centurion3"},
				{priority = 1.0, type = {"Tank", "Class2", "Acav"}, unit = "chieftain5"},
				{priority = 1.0, type = {"Tank", "Class3", "Acav"}, unit = "challenger1"},
				{priority = 1.0, type = {"Tank", "Class2", "Acav"}, unit = "m3a2"},
				{priority = 1.0, type = {"Tank", "Class2", "Acav"}, unit = "m1_abrams"},
				{priority = 1.0, type = {"Tank", "Class2", "Acav"}, unit = "m1a1_new"},
				{priority = 0.5, type = {"Tank", "Class2", "Acav"}, unit = "m728"},
				{priority = 1.0, type = {"Armored", "Mortar", "Acav"}, unit = "m106"},
				{priority = 1.0, type = {"Armored", "AT", "Acav"}, unit = "m150"},
				{priority = 0.5, type = {"Acav"}, unit = "ah1_airborne"},
				
		-- Doctrine Tank_div = "Armor Battalion Task Force"
		
				{priority = 1.0, type = {"Mech", "Tank_div"}, unit = "squad_rifle_moto_con(csa)"},
				{priority = 0.5, type = {"Mech", "Tank_div"}, unit = "squad_weapon_moto_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Tank_div"}, unit = "squad_ranger_lrrp_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Tank_div"}, unit = "squad_ranger_demo_con(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Tank_div"}, unit = "squad_ranger_con(csa)"},
				{priority = 1.0, type = {"Mech", "Tank_div"}, unit = "squad_ranger_moto_con(csa)"},
				{priority = 1.0, type = {"Tank", "Class2", "Tank_div"}, unit = "m1ip_1"},
				{priority = 1.0, type = {"Tank", "Class3", "Tank_div"}, unit = "m1a1_fep"},
				{priority = 1.0, type = {"Tank", "Class3", "Tank_div"}, unit = "m1a2_sep"},
				{priority = 1.0, type = {"Tank", "Class3", "Tank_div"}, unit = "m901_itv"},
				{priority = 0.3, type = {"Tank", "Class2", "Tank_div"}, unit = "paladin"},
				{priority = 0.3, type = {"Tank", "Class2", "Tank_div"}, unit = "mrls"},
				
		-- Doctrine USMC_div = "USMC Marine Expeditionary Unit"
				
				{priority = 1.0, type = {"Infantry", "Squad", "Usmc"}, unit = "squad_usmc_con(csa)"},
				{priority = 0.5, type = {"Infantry", "Squad", "Usmc"}, unit = "squad_usmc_mg_con(csa)"},
				{priority = 0.5, type = {"Infantry", "Squad", "Usmc"}, unit = "squad_usmc_scout_con(csa)"},
				{priority = 0.5, type = {"Infantry", "Squad", "AT", "Usmc"}, unit = "squad_fr_at_con(csa)"},
				{priority = 1.0, type = {"Mech", "Usmc"}, unit = "squad_usmc_moto_con(csa)"},
				{priority = 1.0, type = {"moto", "Usmc"}, unit = "squad_usmc_lav25_con(csa)"},
				{priority = 1.0, type = {"Mech", "Usmc"}, unit = "squad_usmc_aavp7_con(csa)"},
				{priority = 1.0, type = {"Tank", "Class3", "Usmc"}, unit = "m50"},
				{priority = 1.0, type = {"Tank", "Class2", "Usmc"}, unit = "m67_zippo"},
				{priority = 1.0, type = {"Tank", "Class3", "Usmc"}, unit = "m103a2_usmc"},
				{priority = 1.0, type = {"Tank", "Class2", "Usmc"}, unit = "m60a1_rise"},
				{priority = 1.0, type = {"Tank", "Class2", "Usmc"}, unit = "m60a3"},
				{priority = 0.5, type = {"Tank", "Class2", "Usmc"}, unit = "m728"},
				{priority = 0.5, type = {"Tank", "Class3", "Usmc"}, unit = "m60a1e2"},
				
		-- Doctrine 82nd_div = "Airborne Battle Group"
				{priority = 1.0, type = {"Infantry", "Squad", "Airborne"}, unit = "squad_airborne_fireteam_con(csa)"},
				{priority = 0.5, type = {"Infantry", "Squad", "Airborne"}, unit = "squad_airborne_con(csa)"},
				{priority = 1.0, type = {"moto", "Airborne"}, unit = "squad_82airborne_lav25_con(csa)"},
				{priority = 1.5, type = {"Tank", "Class2", "Airborne"}, unit = "m551_acav"},
				{priority = 0.5, type = {"moto", "MG", "Airborne"}, unit = "humvee_mk19"},
				{priority = 1.0, type = {"moto", "AT", "Airborne"}, unit = "humvee_tow"},
				{priority = 0.5, type = {"Air", "Class3", "Airborne"}, unit = "ah-64_apache_heavy_airborne"},
				{priority = 0.3, type = {"Air", "Class2", "Airborne"}, unit = "c130_para_ai"},
				
		-- Doctrine Art_div = "Artillery Brigade"
				{priority = 0.5, type = {"MobileArtillery"}, unit = "m108"},
				{priority = 0.5, type = {"MobileArtillery"}, unit = "m109_acav"},
				{priority = 0.5, type = {"MobileArtillery"}, unit = "m109"},
				{priority = 0.5, type = {"MobileArtillery"}, unit = "m110"},

		-- Doctrine wPanzer_div = "5.PANZERDIVISION"
				
				{priority = 1.0, type = {"Infantry", "Squad", "wPanzer_div"}, unit = "squad_rifle_con_nato(frg)"},
				{priority = 1.0, type = {"Mech", "wPanzer_div"}, unit = "squad_pzgren_moto2_con_nato(frg)"},
				{priority = 1.0, type = {"Mech", "wPanzer_div"}, unit = "squad_pzgren_mech_con3_nato(frg)"},
				{priority = 1.0, type = {"Mech", "wPanzer_div"}, unit = "squad_jager_moto_con(frg)"},
				{priority = 1.0, type = {"Tank", "Class3", "wPanzer_div"}, unit = "leopard_1a1"},
				{priority = 1.0, type = {"Tank", "Class2", "wPanzer_div"}, unit = "leopard_1a5"},
				{priority = 1.0, type = {"Tank", "Class3", "wPanzer_div"}, unit = "spz_523"},
				{priority = 1.0, type = {"Tank", "Class2", "wPanzer_div"}, unit = "leopard_2a4"},
				{priority = 1.0, type = {"Tank", "Class2", "wPanzer_div"}, unit = "leopard_2a5"},
				{priority = 1.0, type = {"Tank", "Class3", "wPanzer_div"}, unit = "hsl"},
				{priority = 0.5, type = {"Tank", "Class2", "wPanzer_div"}, unit = "m109g"},
				{priority = 0.5, type = {"Tank", "Class3", "wPanzer_div"}, unit = "aaleo"},

			-- Cannons	
				--HMGs
				--{priority = 1.0, type = {"Cannon", "MG",}, unit = "mg_stand_m2_ai"},
				{priority = 0.5, type = {"Cannon", "MG"}, unit = "mk19_stan_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA"}, unit = "m45_maxson"},
				--Anti Tank
				{priority = 0.5, type = {"Cannon", "AT"}, unit = "m20_rcl_ai"},
				{priority = 0.5, type = {"Cannon", "AT"}, unit = "m40"},
				--Mortars
				{priority = 0.2, type = {"Cannon", "Mortar"}, unit = "m29_mortar_ai"},
				{priority = 0.2, type = {"Cannon", "Mortar"}, unit = "m30_mortar"},
				--Infantry_Support
				--{priority = 1.0, type = {"Cannon", "Support",}, unit = "75mm_m116"},
				--Artillery
				{priority = 0.5, type = {"Cannon", "Artillery"}, unit = "105mm_m101a1"},
				--{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "m114"},
				--{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "m59_longtom"},
				--{priority = 0.1, type = {"Cannon", "Artillery",}, unit = "m115"},
				{priority = 0.5, type = {"Cannon", "Artillery"}, unit = "m119"},	
				--Rocket Artillery
				--{priority = 0.1, type = {"Cannon", "AA",}, unit = "m192"},	
	
			--APCs/BTRs
				
				{priority = 1.0, type = {"Vehicle", "MG"}, unit = "humvee_m240"},
				{priority = 1.0, type = {"Vehicle", "MG"}, unit = "humvee_m2hb"},
				
				
				
				{priority = 1.0, type = {"Armored", "MG"}, unit = "m114a1"},
				{priority = 1.0, type = {"Armored", "MG"}, unit = "m114a2"},
				{priority = 1.0, type = {"Armored", "Mortar"}, unit = "m125"},
				{priority = 1.0, type = {"Armored", "AA"}, unit = "m163"},
				{priority = 1.0, type = {"Armored", "Support"}, unit = "m132_zippo"},
				
			--Tanks
				{priority = 1.0, type = {"Tank", "Class1"}, unit = "m41_early"},
				{priority = 1.0, type = {"Tank", "Class1"}, unit = "m41"},
				{priority = 1.0, type = {"Tank", "Light", "AA"}, unit = "m42"},
				{priority = 1.0, type = {"Tank", "Class1"}, unit = "m47_patton"},
				{priority = 0.5, type = {"Tank", "Class1"}, unit = "m48"},
				{priority = 1.0, type = {"Tank", "Class1"}, unit = "m48a1"},
				{priority = 1.0, type = {"Tank", "Class1"}, unit = "m48a3"},
				{priority = 0.5, type = {"Tank", "Class1"}, unit = "m60_patton"},
				
				
	
			--Air Assets
				{priority = 0.5, type = {"Air", "Class1"}, unit = "uh-1b_airborne"},
				{priority = 0.5, type = {"Air", "Class1"}, unit = "uh-1b_ara_airborne"},
				{priority = 0.5, type = {"Air", "Class1"}, unit = "uh-1b_maxwell_airborne"},
				{priority = 0.2, type = {"Air", "Class1"}, unit = "a-10c_bomber_ai"},
				{priority = 0.2, type = {"Air", "Class3"}, unit = "a-10c_at_ai"},
				{priority = 0.2, type = {"Air", "Class2"}, unit = "a-10c_support_ai"},
				
		}
	}
}