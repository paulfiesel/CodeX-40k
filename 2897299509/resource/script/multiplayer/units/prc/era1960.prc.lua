Purchases["era1960.prc"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_lat(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(prc)"},
				{priority = 1.0, type = {"Infantry", "Team","AA","Class1",}, unit = "manpad_operator(prc)"},
				
			
				-- Cannons	
				--HMGs
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "dshk_aa_prc_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "zpu-4_prc"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "m20_prc_ai"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "hj8_stan_ai"},
				--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "82mm_bm37_prc_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "120mm_pm38_prc"},
				--Infantry_Support
				{priority = 1.0, type = {"Cannon", "Support", "Class3",}, unit = "d-44_prc"},
				--Artillery
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "m30_prc"},
				--Rocket Artillery
				--{priority = 0.5, type = {"Cannon", "Artillery", "Class1",}, unit = "type63_mrl_ai"},
				
				--Fight Vehicles

				{priority = 1.0, type = {"Class2", "Tank",}, unit = "ztz59"},
				{priority = 1.0, type = {"Class1", "Tank",}, unit = "type62_lt"},
				{priority = 1.0, type = {"Class2", "Tank",}, unit = "type80"},
				
				-- Doctrine = "Mechanized Infantry Regiment"
			
				
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_guard_mech(prc)"},
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "squad_rifle_mech_yw531_north(prc)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_mech_zbd86(prc)"},
				{priority = 1.5, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_mech_zbd86a(prc)"},

				{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_zbd86(prc)"},
				{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_zbd86a(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_ztz88a(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_ztz853(prc)"},

			-- Doctrine squad&vehicle
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_special_scout2(prc)"},
				{priority = 2.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_ztz96a(prc)"},
				{priority = 0.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_pgz04a(prc)"},
				
				
				
			-- Doctrine = "Motorized Infantry Regiment"

				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_guard_moto(prc)"},
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_at_moto(prc)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_moto_zsl92a(prc)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_sf_southern(prc)"},

				
				{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_zsl92a(prc)"},
				{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_zsl92b(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_ztz79(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_ptl02(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_ztz852(prc)"},
			-- Doctrine squad&vehicle
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_special_scout(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_aft9(prc)"},
							
				
			-- Doctrine = "Artillery"
				{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_sf_scout(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_su100prc(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_isu152(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_wy531mrl(prc)"},
				{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_plz83(prc)"},
				{priority = 1.0, type = {"Class3", "Cannon",}, unit = "doctrine_vehicle_d20(prc)"},
				{priority = 1.0, type = {"Class3", "Cannon",}, unit = "doctrine_vehicle_ml20(prc)"},
		}
	}
}
