Purchases["conquest.ork"] = {
	{Repeat = 0,  -- infinite
		Units = {
			-- ~~~ STAGE 1: Core Infantry ~~~
			{priority = 1.2, type = {"Class2","Infantry","Squad"},           unit = "squad_ork_doc_evilsunz_inf_grots(ork)"},
			{priority = 2.3, type = {"Class2","Infantry","Squad"},           unit = "squad_ork_doc_evilsunz_inf_shootaboys(ork)"},
			{priority = 2.2, type = {"Class2","Infantry","Squad"},           unit = "squad_ork_doc_evilsunz_inf_sluggaboys(ork)"},

			-- ~~~ STAGE 2: Mid Infantry + Specialists ~~~
			{priority = 1.7, type = {"Class2","Infantry","Squad","AT"},      unit = "squad_ork_doc_evilsunz_inf_tankbustas(ork)"},
			{priority = 1.5, type = {"Class2","Armored","Vehicle"},          unit = "squad_ork_doc_evilsunz_inf_warbikers(ork)"},
			{priority = 1.5, type = {"Class1","Infantry","Squad"},           unit = "squad_ork_doc_evilsunz_inf_kommandos(ork)"},
			{priority = 1.4, type = {"Class2","Infantry","Squad"},           unit = "squad_ork_doc_evilsunz_inf_nobsluggas(ork)"},
			{priority = 1.2, type = {"Class2","Armored","Squad"},            unit = "squad_ork_doc_evilsunz_inf_nobshootas(ork)"},
			{priority = 1.4, type = {"Class2","Infantry","Team"},            unit = "squad_ork_doc_evilsunz_inf_loota_dakka(ork)"},
			{priority = 1.4, type = {"Class1","Infantry","Team","AT"},       unit = "squad_ork_doc_evilsunz_inf_weirdboy(ork)"},
			{priority = 0.9, type = {"Class1","Infantry","Team"},            unit = "squad_ork_doc_evilsunz_inf_painboy(ork)"},
			{priority = 0.9, type = {"Class1","Infantry","Team"},            unit = "squad_ork_doc_evilsunz_inf_mekboy(ork)"},
			{priority = 0.4, type = {"Class1","Infantry","Team","AT"},       unit = "squad_ork_doc_evilsunz_inf_warboss(ork)"},
			{priority = 0.5, type = {"Class2","Armored","Vehicle"},          unit = "veh_ork_doc_evilsunz_trukk_supply(ork)"},

			-- ~~~ STAGE 3: Deepstrike Infantry ~~~
			{priority = 1.4, type = {"Class1","Infantry","Squad"},           unit = "squad_ork_doc_evilsunz_inf_dp_stormboyz(ork)"},
			{priority = 0.9, type = {"Class1","Infantry","Squad"},           unit = "squad_ork_doc_evilsunz_inf_dp_digga_mob(ork)"},
			{priority = 1.2, type = {"Class1","Infantry","Squad","AT"},      unit = "squad_ork_doc_evilsunz_inf_squigbombs(ork)"},
			{priority = 1.1, type = {"Class2","Infantry","Squad"},           unit = "squad_ork_doc_evilsunz_inf_burnas(ork)"},
			{priority = 1.0, type = {"Class1","Infantry","Team","AT"},       unit = "squad_ork_doc_evilsunz_inf_loota_beamy(ork)"},
			{priority = 0.7, type = {"Class2","Cannon","AA"},                unit = "veh_ork_doc_evilsunz_flakkgun(ork)"},
			{priority = 0.7, type = {"Class2","Cannon","Artillery"},         unit = "veh_ork_doc_evilsunz_grotkannon(ork)"},
			{priority = 0.8, type = {"Class2","Cannon","AT"},                unit = "veh_ork_doc_evilsunz_mekgun(ork)"},
			{priority = 1.2, type = {"Class2","Armored","Vehicle"},          unit = "veh_ork_doc_evilsunz_warbuggy_shootas(ork)"},
			{priority = 1.0, type = {"Class2","Armored","Vehicle"},          unit = "veh_ork_doc_evilsunz_wartrakk(ork)"},
			{priority = 1.1, type = {"Class2","Armored","AT"},               unit = "veh_ork_doc_evilsunz_warbuggy_rokkits(ork)"},
			{priority = 0.8, type = {"Class2","Armored","Vehicle"},          unit = "veh_ork_doc_evilsunz_trukk_flamer(ork)"},

			-- ~~~ STAGE 4: Heavy Infantry ~~~
			{priority = 1.0, type = {"Class1","Armored","Squad","AT"},       unit = "squad_ork_doc_evilsunz_inf_meganobs(ork)"},
			{priority = 1.0, type = {"Class1","Armored","Vehicle"},          unit = "veh_ork_doc_evilsunz_deff_dread_dakka(ork)"},
			{priority = 1.1, type = {"Class1","Armored","AT"},               unit = "veh_ork_doc_evilsunz_deff_dread_zzap(ork)"},
			{priority = 0.8, type = {"Class1","Armored","Vehicle"},          unit = "veh_ork_doc_evilsunz_deff_dread_burna(ork)"},
			{priority = 0.9, type = {"Class1","Tank","Vehicle"},             unit = "veh_ork_doc_evilsunz_gunwagon_kannon(ork)"},
			{priority = 1.0, type = {"Class1","Tank","AT"},                  unit = "veh_ork_doc_evilsunz_gunwagon_zzap(ork)"},
			{priority = 0.6, type = {"Class1","Tank","AA"},                  unit = "veh_ork_doc_evilsunz_gunwagon_flakk(ork)"},
			{priority = 0.6, type = {"Class1","Tank","Vehicle"},             unit = "veh_ork_doc_evilsunz_battlewagon_transport(ork)"},
			{priority = 0.9, type = {"Class1","Tank","Vehicle"},             unit = "veh_ork_doc_evilsunz_looted_predator(ork)"},

			-- ~~~ STAGE 5: Heavy Wagons + Late Armour ~~~
			{priority = 0.9, type = {"Class1","Armored","AT"},               unit = "veh_ork_doc_evilsunz_deff_dread_rokkit(ork)"},
			{priority = 0.8, type = {"Class1","Tank","Vehicle"},             unit = "veh_ork_doc_evilsunz_battlewagon_kannon(ork)"},
			{priority = 0.6, type = {"Class1","Tank","Artillery"},           unit = "veh_ork_doc_evilsunz_kill_bursta(ork)"},
		}
	}
}
