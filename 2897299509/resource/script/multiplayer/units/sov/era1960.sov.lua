Purchases["era1960.sov"] = {
	{Repeat = 0,  --infinite
		Units = {

			-- Infantry Teams
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_mg(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_sniper(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(sov)"},
				{priority = 1.0, type = {"Infantry", "Team","AA","Class2",}, unit = "manpad_operator(sov)"},
			-- Common Squads	
				--{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_conscript(sov)"},
				--{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_conscript_mg(sov)"},
				{priority = 0.3, type = {"Infantry", "Squad", "AT", "Class1",}, unit = "squad_conscript_at(sov)"},
				{priority = 0.3, type = {"Infantry", "Squad", "AT", "Class1",}, unit = "squad_conscript_tank(sov)"},
				{priority = 0.3, type = {"Infantry", "Squad", "AT", "Class1",}, unit = "squad_kda(gdr)"},
				{priority = 0.3, type = {"Infantry", "Squad", "AT", "Class1",}, unit = "doctrine_squad_conscript_moto(sov)"},
				{priority = 0.3, type = {"Infantry", "Squad", "AT", "Class1",}, unit = "doctrine_squad_conscript_mech(sov)"},
				{priority = 0.3, type = {"Infantry", "Squad", "AT", "Class1",}, unit = "doctrine_squad_kda_mech(gdr)"},
				
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class1",}, unit = "dshk_aa_sov_ai"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "zpu-4"},
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "ags17_stan_ai"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class3",},  unit = "b-10_82mm_ai"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",},  unit = "9k111_ai"},
				{priority = 1.0, type = {"Class2", "Cannon",},  unit = "doctrine_vehicle_t12_motostrelki(sov)"},
				{priority = 1.0, type = {"Class2", "Cannon",},  unit = "doctrine_vehicle_t12_artillery(sov)"},
				{priority = 1.0, type = {"Class2", "Cannon",},  unit = "doctrine_vehicle_t12_gdr(gdr)"},
			--Mortaras
				{priority = 0.3, type = {"Cannon", "Mortar", "Class3",}, unit = "82mm_bm37_sov_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "120mm_pm38_sov"},
			--Howitzers
				--{priority = 1.0, type = {"Cannon", "Support", "Class3",}, unit = "d-44"},
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "doctrine_vehicle_d30(sov)"},
			--Wheel_vehicles
				--{priority = 1.0, type = {"Tank", "MG", "Class3",}, unit = "brdm-2"},
				--{priority = 0.5, type = {"Armored", "AA", "Class2",}, unit = "btr-40a"},
				--{priority = 1.0, type = {"Tank", "AA", "Class2",}, unit = "btr-152a"},
				--{priority = 1.0, type = {"Armored", "AT", "Class2",}, unit = "2p27"},
			--Tanks
				--{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "pt-76"},
				{priority = 0.3, type = {"Tank", "Class2",}, unit = "brdm2_strela"},
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "pt-76b"},	
				{priority = 0.5, type = {"Class2", "Tank",}, unit = "zsu572"},
				{priority = 0.5, type = {"Class2", "Tank",}, unit = "zsu-23-4m"},
			--Tanks_heavy
			--SPG
			--Air Assets
				--{priority = 0.2, type = {"Helicopter", "Sortie", "Class2",}, unit = "mil_mi4_airborne"},
				--{priority = 0.2, type = {"Helicopter", "Sortie", "Class1",}, unit = "mil_mi4_heavy_airborne"},
			--Offmap Supports
				
				
				
		-- Doctrine = "Motostrelki"
			-- Doctrine = "Motostrelki Infantry"
			{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_guards_motostrelki(sov)"},
			{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_rifle_moto(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_guards_btr80(sov)"},
			{priority = 1.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_guards_mech3(sov)"},
			
			{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_spz_pioneer(sov)"},
		-- Doctrine = "Motostrelki vehicle&tanks"
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_brdm2(sov)"},
			
			{priority = 1.0, type = {"Class2", "Cannon",}, unit = "doctrine_vehicle_zu23(sov)"},
			
			{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t55(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t62(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t62m1(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t72a(sov)"},
			
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_9p149(sov)"},
			{priority = 2.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t72b(sov)"},
			{priority = 2.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t72b1989(sov)"},
		-- Doctrine = "Heavy Independent Tank Brigade"
			-- Doctrine = "Tank Infantry"
			{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_guards_tank(sov)"},
			{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_redbanner_mtlb(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_red_mech(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_guards_mech2(sov)"},
			
			-- Doctrine = "Heavy Independent Tank vehicle&tanks"
			
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_obj906(sov)"},
			{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t64a(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t64bv(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t80b(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", }, unit = "doctrine_vehicle_t80bv_banner(sov)"},
			
			
			
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", }, unit = "doctrine_vehicle_it1(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", }, unit = "doctrine_vehicle_t80u(sov)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Tank", }, unit = "doctrine_vehicle_t80uk(sov)"},
			
			
		
			
		-- Doctrine = "VDV Air Assault Brigade"
			-- Doctrine = "vdv Infantry"
			
			{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_vdv_light(sov)"},
			{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_vdv(sov)"},
			{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_vdv_antitank(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_rifle_vdv_mech(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_rifle_vdv_mech_bmd2(sov)"},
			{priority = 1.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_il76para(sov)"},
			
			-- Doctrine = "vdv vehicle&tanks"
			
			{priority = 1.0, type = {"Class2", "Cannon",}, unit = "doctrine_vehicle_zu2(sov)"},
			{priority = 1.0, type = {"Class2", "Squad", "Tank", "Doctrine",}, unit = "doctrine_squad_btrd_vdv(sov)"},
			
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine", }, unit = "doctrine_vehicle_2s25_vdv(sov)"},
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine", }, unit = "doctrine_vehicle_bmd2(sov)"},
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine", }, unit = "doctrine_vehicle_asu85(sov)"},
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine", }, unit = "doctrine_vehicle_brdm2_vdv(sov)"},
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine", }, unit = "doctrine_vehicle_2s9(sov)"},
			
			{priority = 1.0, type = {"Class2", "Cannon", }, unit = "doctrine_vehicle_vasilek(sov)"},
			{priority = 1.0, type = {"Class2", "Cannon", }, unit = "doctrine_vehicle_rpu14(sov)"},
					
			{priority = 1.0, type = {"Class2", "Doctrine", "Infantry",}, unit = "doctrine_squad_spzteam(sov)"},
		
			
			{priority = 1.0, type = {"Class1", "Sortie",}, unit = "doctrine_squad_mi24v_support(sov)"},
			
			
			-- Doctrine = "VMF Naval Infantry Brigade"
			
			-- Doctrine = "morskaya pekhota Infantry"
			{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_morskaya_pekhota_mech(sov)"},
			{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_morskaya_pekhota_moto(sov)"},
			{priority = 1.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_Chernye_Berety_mech2(sov)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_Chernye_Berety_com(sov)"},
			-- Doctrine = "VMF vehicle&tanks"
		
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t55a(sov)"},
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t55am(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t55amv(sov)"},
			{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t55amd1(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", }, unit = "doctrine_vehicle_t80bv_vmf(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_9p149_vmf(sov)"},
			{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_mtlb_rbu6000_vmf(sov)"},
		-- Doctrine = "Rocket & Artillery Troops"
			
			-- Doctrine = "Artillery Infantry"
			{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_art_miners(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_spz_observe(sov)"},
			
			-- Doctrine = "Artillery"
			
			{priority = 1.0, type = {"Class2", "Cannon",}, unit = "doctrine_vehicle_d30(sov)"},
			--{priority = 1.0, type = {"Class3", "Cannon",}, unit = "doctrine_vehicle_2a36(sov)"},
			{priority = 1.0, type = {"Class3", "Cannon",}, unit = "doctrine_vehicle_2a65(sov)"},
			
			
			-- Doctrine = "Artillery vehicle&tanks"
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine", }, unit = "doctrine_vehicle_brdm2_art(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine", }, unit = "doctrine_vehicle_2c1(sov)"},
			
			
			{priority = 0.2, type = {"Class1", "Doctrine", "Tank", }, unit = "doctrine_vehicle_grad(sov)"},
			{priority = 0.2, type = {"Class1", "Doctrine", "Tank", }, unit = "doctrine_vehicle_bm24(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", }, unit = "doctrine_vehicle_2s3(sov)"},


		-- Doctrine = "Air Force"
			
			-- Doctrine = "AA defence"
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", }, unit = "doctrine_vehicle_strela-10(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_buk_m1(sov)"},
			{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_9s18(sov)"},
			-- Doctrine = "Aircraft"
		
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m24v(sov)"},
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_m24v2(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_su-25sm_support_l(sov)"},
			{priority = 0.5, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_su-25sm_support(sov)"},
			{priority = 0.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_mi28(sov)"},
			{priority = 0.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_su25acc(sov)"},
			{priority = 0.5, type = {"Class3", "Tank", "Doctrine",}, unit = "doctrine_vehicle_su25at(sov)"},

			-- Doctrine = "9.Panzerdivision"
			
			-- Doctrine = "Infantry"
			{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "squad_nva(gdr)"},
			{priority = 0.5, type = {"Class1", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_nva_moto(gdr)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_nva_mech(gdr)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad",}, unit = "doctrine_squad_bmp2_gdr(gdr)"},
			
			-- Doctrine = "Aircraft"
		
			{priority = 0.5, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_bmp1_gdr(gdr)"},
			{priority = 1.0, type = {"Class1", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t3485_gdr(gdr)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t55am2b_gdr(gdr)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_kpzt72_gdr(gdr)"},
			{priority = 1.0, type = {"Class2", "Tank", "Doctrine",}, unit = "doctrine_vehicle_t72b_gdr(gdr)"},
			{priority = 0.2, type = {"Class1", "Doctrine", "Tank", }, unit = "doctrine_vehicle_bm21(gdr)"},
			
		}
	}
}
