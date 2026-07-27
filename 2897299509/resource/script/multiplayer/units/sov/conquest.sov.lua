Purchases["conquest.sov"] = {
	{Repeat = 0, --infinite
		Units = {
			---[====[
			-- basic Infantry
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_ak_moto3_con(sov)"},				
				
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_marksman(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_scout(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sniper(sov)"},
				{priority = 0.5, type = {"Infantry", "Team",}, unit = "single_flamer(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sapperap(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sapperat(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "AA",}, unit = "manpad_operator(sov)"},
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
		-- Doctrine = "Guards Motostrelki"
				{priority = 1.0, type = {"Infantry", "Squad", "Moto_div",}, unit = "squad_guards_con(sov)"},
				{priority = 0.5, type = {"Infantry", "Squad", "Moto_div",}, unit = "squad_spz_recon_con(sov)"},
				{priority = 1.0, type = {"moto", "Moto_div",}, unit = "squad_rifle_moto3_con(sov)"},
				{priority = 1.0, type = {"moto", "Moto_div",}, unit = "squad_rifle_moto2_con(sov)"},
				{priority = 1.0, type = {"moto", "Moto_div",}, unit = "squad_guards_moto2_con(sov)"},
				{priority = 1.0, type = {"moto", "Moto_div",}, unit = "squad_guards_shock_moto2_con(sov)"},
				{priority = 1.0, type = {"moto", "Moto_div",}, unit = "squad_guards_moto3_con(sov)"},
				{priority = 1.0, type = {"Cannon", "Moto_div",}, unit = "ags17_stan_ai"},
				{priority = 1.0, type = {"Tank", "Moto_div",}, unit = "t55a"},
				{priority = 1.0, type = {"Tank", "Moto_div",}, unit = "t62"},
				{priority = 1.0, type = {"Tank", "Moto_div",}, unit = "t62m1"},
				{priority = 1.0, type = {"Tank", "Moto_div",}, unit = "t72a"},
				{priority = 1.0, type = {"Tank", "Moto_div",}, unit = "t72b"},
				{priority = 1.0, type = {"Tank", "Moto_div",}, unit = "t72b_1989year"},
				
			-- Doctrine = "morskaya pekhota"
				{priority = 1.0, type = {"Infantry", "Squad", "vmf_div",}, unit = "squad_morskaya_pekhota_con(sov)"},
				{priority = 0.5, type = {"Infantry", "Squad", "vmf_div",}, unit = "squad_chernye_berety_com(sov)"},
				{priority = 1.0, type = {"Mech", "vmf_div",}, unit = "squad_morskaya_pekhota_moto(sov)"},
				{priority = 1.0, type = {"Mech", "vmf_div",}, unit = "squad_morskaya_pekhota_mech(sov)"},
				{priority = 1.0, type = {"Mech", "vmf_div",}, unit = "squad_morskaya_pekhota_mech2(sov)"},
				{priority = 1.0, type = {"Tank", "vmf_div",}, unit = "t55am"},
				{priority = 1.0, type = {"Tank", "vmf_div",}, unit = "t55amd1"},
				{priority = 1.0, type = {"Tank", "vmf_div",}, unit = "t55amv"},
				{priority = 1.0, type = {"Tank", "vmf_div",}, unit = "t80bv"},
				{priority = 1.0, type = {"Tank", "vmf_div",}, unit = "mtlb_rbu6000"},
				{priority = 1.0, type = {"Tank", "vmf_div",}, unit = "9p149_shturm-s"},
				
		-- Doctrine = "Heavy Independent Tank Brigade"
				{priority = 1.0, type = {"Infantry", "Squad", "Tank_div",}, unit = "squad_rifle_con(sov)"},
				{priority = 0.5, type = {"Infantry", "Squad", "Tank_div",}, unit = "squad_spz_sabo_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Tank_div",}, unit = "squad_guards_mg_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Tank_div",}, unit = "squad_guards_shock_con(sov)"},
				{priority = 1.0, type = {"Mech", "Tank_div",}, unit = "squad_rifle_mech_con_mtlb(sov)"},
				{priority = 1.0, type = {"Mech", "Tank_div",}, unit = "squad_rifle_mech2_con(sov)"},
				{priority = 1.0, type = {"Mech", "Tank_div",}, unit = "squad_rifle_mech3_con(sov)"},
				{priority = 1.0, type = {"Mech", "Tank_div",}, unit = "squad_guards_mech_bmp2_con(sov)"},
				{priority = 1.0, type = {"Mech", "Tank_div",}, unit = "squad_guards_mech_bmp3_con(sov)"},
				{priority = 1.0, type = {"Tank", "Tank_div",}, unit = "t-10m"},
				{priority = 1.0, type = {"Tank", "Tank_div",}, unit = "t64a"},
				{priority = 1.0, type = {"Tank", "Tank_div",}, unit = "t-64bv"},
				{priority = 1.0, type = {"Tank", "Tank_div",}, unit = "t80b"},
				{priority = 1.0, type = {"Tank", "Tank_div",}, unit = "t80u"},
				{priority = 1.0, type = {"Tank", "Tank_div",}, unit = "t80yk"},
				{priority = 0.5, type = {"Tank", "Tank_div",}, unit = "tos1"},
		
		
		
		-- Doctrine = "VDV Air Assault Brigade"
		
				{priority = 1.0, type = {"Infantry", "Squad", "vdv_div",}, unit = "squad_vdv_recon_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "vdv_div",}, unit = "squad_vdv_hunter_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "vdv_div",}, unit = "squad_vdv_con(sov)"},
				{priority = 1.0, type = {"Mech", "vdv_div",}, unit = "squad_vdv_bmd1_con(sov)"},
				{priority = 1.0, type = {"Mech", "vdv_div",}, unit = "squad_vdv_bmd2_con(sov)"},
				{priority = 1.0, type = {"Mech", "vdv_div",}, unit = "squad_vdv_btrdzu_con(sov)"},
				{priority = 0.5, type = {"Infantry", "Squad", "vdv_div",}, unit = "squad_spz_con(sov)"},
				{priority = 0.5, type = {"Mech", "vdv_div",}, unit = "squad_spz_bmd1_con(sov)"},
				{priority = 0.5, type = {"moto", "vdv_div",}, unit = "squad_spz_scout_moto_con(sov)"},
				{priority = 1.0, type = {"Tank", "vdv_div",}, unit = "asu-85"},
				{priority = 1.0, type = {"Tank", "vdv_div",}, unit = "sprutsd"},
				{priority = 0.5, type = {"Air", "vdv_div",}, unit = "mi-24v_airborne_squad"},
				{priority = 0.5, type = {"Air", "vdv_div",}, unit = "mi28n_airborne"},
				{priority = 0.3, type = {"Air", "vdv_div",}, unit = "il-76td_para_ai"},
				{priority = 0.5, type = {"Cannon", "vdv_div",}, unit = "vasilek"},
		-- Doctrine = "9.Panzerdivision"
				{priority = 1.0, type = {"Infantry", "Squad", "Nva_div",}, unit = "squad_kda(gdr)"},
				{priority = 0.5, type = {"Infantry", "Squad", "Nva_div",}, unit = "squad_nva(gdr)"},
				{priority = 0.5, type = {"Infantry", "Squad", "Nva_div",}, unit = "squad_nva_elite(gdr)"},
				{priority = 1.0, type = {"Mech", "Nva_div",}, unit = "squad_kda_mech(gdr)"},
				{priority = 1.0, type = {"Mech", "Nva_div",}, unit = "squad_nva_moto(gdr)"},
				{priority = 1.0, type = {"Mech", "Nva_div",}, unit = "squad_nva_mech(gdr)"},
				{priority = 1.0, type = {"Mech", "Nva_div",}, unit = "squad_bmp2_gdr(gdr)"},
				{priority = 1.0, type = {"Tank", "Nva_div",}, unit = "t-34-85_gdr"},
				{priority = 1.0, type = {"Tank", "Nva_div",}, unit = "t55am2b"},
				{priority = 1.0, type = {"Tank", "Nva_div",}, unit = "kpz_t72m"},
				{priority = 0.5, type = {"Tank", "Nva_div",}, unit = "bm-21_gdr"},
		
		-- Doctrine = "Rocket & Artillery Troops"
		
				{priority = 1.0, type = {"MobileArtillery", "Class3",}, unit = "2s3"},
				{priority = 1.0, type = {"MobileArtillery", "Class2",}, unit = "2c1"},
				{priority = 1.0, type = {"MobileArtillery", "Class2",}, unit = "2c9"},
			
			--Cannons
			--HMGs
				--{priority = 1.0, type = {"Cannon", "MG",}, unit = "sg43_stand_sov_ai"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "dshk_aa_sov_ai"},
				
			--Anti_Aircraft
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zu-2"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zpu-4"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zu-23-2"},
				--{priority = 1.0, type = {"Cannon", "AA",}, unit = "57mm_s-60"},
			--Anti_Tank
				--{priority = 1.0, type = {"Cannon", "AT",}, unit = "b-10_82mm_ai"},
				--{priority = 1.0, type = {"Cannon", "AT",}, unit = "spg9_ai"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "t-12"},
				--{priority = 0.5, type = {"Cannon", "AT",}, unit = "9m14"},
			--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "82mm_bm37_sov_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "120mm_pm38_sov"},
			--Infantry_Support
				--{priority = 1.0, type = {"Cannon", "AT",}, unit = "76mm_zis3_sov"},
				--{priority = 1.0, type = {"Cannon", "Support",}, unit = "gp1958"},
				--{priority = 1.0, type = {"Cannon", "Support",}, unit = "d-44"},
			--Artillery
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "d-74"},
				--{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d1"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d-20"},
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "d-44"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "122mm_d-30"},
			--Rocket_Artillery
			--Wheel_vehicles
				{priority = 0.5, type = {"Armored", "Heavy",}, unit = "brdm-1"},
				--{priority = 0.5, type = {"Armored", "AA",}, unit = "btr-40a"},
				{priority = 0.5, type = {"Armored", "Heavy",}, unit = "brdm-2"},
				{priority = 0.5, type = {"Armored", "Heavy",}, unit = "btr80a"},
				{priority = 0.5, type = {"Armored", "Heavy",}, unit = "9p110"},
				{priority = 0.5, type = {"Armored", "Heavy",}, unit = "9p122"},
				--{priority = 1.0, type = {"Armored", "Medium", "AA",}, unit = "zsu572"},
				--{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-14-16"},
				--{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-24m"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "bm-21_grad"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "pt-76"},
				{priority = 1.0, type = {"Tank", "Class2",}, unit = "obj906"},
				--{priority = 1.0, type = {"Tank", "Light", "Support",}, unit = "asu57"},
				
				
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "t-54-1951"},
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "t-55"},
				{priority = 0.25, type = {"Tank", "Class1",}, unit = "ot-55"},
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "zsu572"},
				{priority = 1.0, type = {"Tank", "Class1",}, unit = "it-1"},
				{priority = 0.5, type = {"Tank", "Class2",}, unit = "zsu-23-4m"},
				
			--Tanks_heavy
				--{priority = 1.0, type = {"Tank", "Class2",}, unit = "t-10m_1957"},
				
			--SPG
				
			--Air Assets
				{priority = 0.5, type = {"Air", "Class1",}, unit = "mil_mi4_airborne"},
				{priority = 0.5, type = {"Air", "Class2",}, unit = "mil_mi4_heavy_airborne"},
				{priority = 0.5, type = {"Air", "Class2",}, unit = "mi-24v2_airborne_squad"},
				{priority = 0.2, type = {"Air", "Class1",}, unit = "su-25sm_support_light_ai"},
				{priority = 0.2, type = {"Air", "Class2",}, unit = "su-25sm_support_ai"},
				{priority = 0.2, type = {"Air", "Class2",}, unit = "su-25sm_accurate_ai"},
				{priority = 0.2, type = {"Air", "Class3",}, unit = "su-25sm_at_ai"},
				
		}
	}
}
