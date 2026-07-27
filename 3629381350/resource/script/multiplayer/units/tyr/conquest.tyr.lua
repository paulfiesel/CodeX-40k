Purchases["conquest.tyr"] = {
	{Repeat = 0,
		Units = {
			-- ~~~ STAGE 1: Swarm Core ~~~
			{priority = 2.4, type = {"Class1","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_hormagaunts(tyr)"},
			{priority = 2.2, type = {"Class1","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_termagaunts(tyr)"},
			{priority = 2.0, type = {"Class2","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_spinegaunts(tyr)"},
			{priority = 1.8, type = {"Class2","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_rippers(tyr)"},

			-- ~~~ STAGE 2: Warriors + Synapse ~~~
			{priority = 1.6, type = {"Class3","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_warriors_talons(tyr)"},
			{priority = 1.6, type = {"Class1","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_warriors_devourer(tyr)"},
			{priority = 1.4, type = {"Class2","Infantry","Squad","AT"},      unit = "squad_tyr_doc_leviathan_inf_genestealers(tyr)"},
			{priority = 1.4, type = {"Class1","Infantry","Squad","AT"},      unit = "squad_tyr_doc_leviathan_inf_sporemines(tyr)"},
			{priority = 1.4, type = {"Class3","Infantry","Team"},            unit = "squad_tyr_doc_leviathan_inf_ravener_alpha(tyr)"},
			{priority = 1.4, type = {"Class2","Infantry","Team","AT"},       unit = "squad_tyr_doc_leviathan_inf_tyranidprime(tyr)"},
			{priority = 1.4, type = {"Class2","Infantry","Team"},            unit = "squad_tyr_doc_leviathan_inf_zoanthrope(tyr)"},

			-- ~~~ STAGE 3: Infiltrators + Bio-support ~~~
			{priority = 1.4, type = {"Class3","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_warriors_bonesword(tyr)"},
			{priority = 1.4, type = {"Class2","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_wrr_adapted_deathspitter(tyr)"},
			{priority = 1.2, type = {"Class2","Infantry","Team"},            unit = "squad_tyr_doc_leviathan_inf_lictor(tyr)"},
			{priority = 1.2, type = {"Class2","Infantry","Team","AT"},       unit = "squad_tyr_doc_leviathan_inf_venomthropes(tyr)"},
			{priority = 1.2, type = {"Class2","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_dp_termagaunts(tyr)"},
			{priority = 1.2, type = {"Class2","Infantry","Squad"},           unit = "squad_tyr_doc_leviathan_inf_dp_warriors(tyr)"},
			{priority = 1.2, type = {"Class2","Armored"},                    unit = "squad_tyr_doc_leviathan_inf_hiveguard(tyr)"},
			{priority = 1.2, type = {"Class2","Armored","Artillery"},        unit = "squad_tyr_doc_leviathan_inf_exocrine(tyr)"},

			-- ~~~ STAGE 4: Large Bio-forms ~~~
			{priority = 1.2, type = {"Class2","Armored","MG"},               unit = "squad_tyr_doc_leviathan_inf_hiveguard_imp(tyr)"},
			{priority = 1.2, type = {"Class1","Armored","AT"},               unit = "squad_tyr_doc_leviathan_inf_hiveguard_shk(tyr)"},
			{priority = 1.2, type = {"Class3","Armored"},                    unit = "squad_tyr_doc_leviathan_inf_carnifex_melee(tyr)"},
			{priority = 1.2, type = {"Class2","Armored","AT"},               unit = "squad_tyr_doc_leviathan_inf_carnifex_venom(tyr)"},

			-- ~~~ STAGE 5: Apex Organisms ~~~
			{priority = 1.0, type = {"Class2","Infantry","Squad","AT"},      unit = "squad_tyr_doc_leviathan_inf_dp_genestealers(tyr)"},
			{priority = 1.0, type = {"Class1","Armored"},                    unit = "squad_tyr_doc_leviathan_inf_tervigon(tyr)"},
			{priority = 1.0, type = {"Class1","Armored","AT"},               unit = "squad_tyr_doc_leviathan_inf_tyrannofex(tyr)"},
			{priority = 1.0, type = {"Class1","Tank","AT"},                  unit = "squad_tyr_doc_leviathan_inf_tyrant_venom(tyr)"},
		}
	}
}
