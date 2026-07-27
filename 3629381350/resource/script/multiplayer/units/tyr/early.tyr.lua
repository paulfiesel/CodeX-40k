Purchases["early.tyr"] = {
	{Repeat = 0,  --infinite
		Units = { 
		
			-- Consider stranglers as MG, so AI buy more of them when against infantry.
			
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_rippers(tyr)"},
			{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_hormagaunts(tyr)"},		
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_spinegaunts(tyr)"},			
			{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_termagaunts(tyr)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_warriors_talons(tyr)"},		
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_warriors_devourer(tyr)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_warriors_bonesword(tyr)"},
			{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_wrr_adapted_deathspitter(tyr)"},		
			{priority = 1.0, type = {"Class1", "Infantry", "Squad", "AT",}, unit = "squad_tyr_doc_leviathan_inf_sporemines(tyr)"},		
		--	{priority = 1.0, type = {"Class2", "Infantry", "Squad", "AT",}, unit = "squad_tyr_doc_leviathan_inf_genestealers(tyr)"},		-- AI makes poor usage, allow only the deepstrike version of it
			
			
			{priority = 1.0, type = {"Class2", "Infantry", "Team", "Aux",}, unit = "squad_tyr_doc_leviathan_inf_ravener_alpha(tyr)"},
			{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT", "Aux",}, unit = "squad_tyr_doc_leviathan_inf_tyranidprime(tyr)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Team", "Aux",}, unit = "squad_tyr_doc_leviathan_inf_zoanthrope(tyr)"},
			{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "squad_tyr_doc_leviathan_inf_warriors_venom(tyr)"},				
			{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "squad_tyr_doc_leviathan_inf_warriors_strangler(tyr)"},	
			{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "squad_tyr_doc_leviathan_inf_lictor(tyr)"},				
			{priority = 1.0, type = {"Class2", "Infantry", "Team", "AT",}, unit = "squad_tyr_doc_leviathan_inf_venomthropes(tyr)"},	
				
				
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_dp_termagaunts(tyr)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_dp_warriors(tyr)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_tyr_doc_leviathan_inf_dp_raveners(tyr)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad", "AT",}, unit = "squad_tyr_doc_leviathan_inf_dp_genestealers(tyr)"},
				
				
			{priority = 1.0, type = {"Class2", "Armored", "Artillery",}, unit = "squad_tyr_doc_leviathan_inf_Biovore(tyr)"},
			{priority = 1.0, type = {"Class2", "Armored",}, unit = "squad_tyr_doc_leviathan_inf_Pyrovore(tyr)"},
			{priority = 1.0, type = {"Class2", "Armored",}, unit = "squad_tyr_doc_leviathan_inf_Tervigon(tyr)"},
		--	{priority = 1.0, type = {"Class3", "Armored",}, unit = "squad_tyr_doc_leviathan_inf_hiveguard(tyr)"},				- AI makes very poor usage of it	
			{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "squad_tyr_doc_leviathan_inf_hiveguard_imp(tyr)"},		
			{priority = 1.0, type = {"Class1", "Armored", "AT",}, unit = "squad_tyr_doc_leviathan_inf_hiveguard_shk(tyr)"},			
			{priority = 1.0, type = {"Class1", "Armored", "Artillery",}, unit = "squad_tyr_doc_leviathan_inf_exocrine(tyr)"},
			{priority = 1.0, type = {"Class3", "Armored", "MG",}, unit = "squad_tyr_doc_leviathan_inf_hellfex(tyr)"},			
			{priority = 1.0, type = {"Class3", "Armored",}, unit = "squad_tyr_doc_leviathan_inf_carnifex_melee(tyr)"},				
			{priority = 1.0, type = {"Class1", "Armored", "AT",}, unit = "squad_tyr_doc_leviathan_inf_carnifex_venom(tyr)"},
			{priority = 1.0, type = {"Class1", "Armored", "MG",}, unit = "squad_tyr_doc_leviathan_inf_carnifex_strangler(tyr)"},
			{priority = 1.0, type = {"Class2", "Armored", "AT",}, unit = "squad_tyr_doc_leviathan_inf_Tyrannofex(tyr)"},		-- AI makes very poor usage of it.
			
			
			--{priority = 1.0, type = {"Class3", "Tank",}, unit = "squad_tyr_doc_leviathan_inf_tyrant_melee(tyr)"},				-- AI makes very bad usage of melee tyrant.	
			{priority = 1.0, type = {"Class1", "Tank", "AT",}, unit = "squad_tyr_doc_leviathan_inf_tyrant_venom(tyr)"},			
			--{priority = 1.0, type = {"Class3", "Tank",}, unit = "squad_tyr_doc_leviathan_inf_swarmlord(tyr)"},				-- AI makes very bad usage of swarmlord.	
			
			
			{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_tyr_doc_leviathan_adapted_hormagaunt_t1(tyr)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_tyr_doc_leviathan_adapted_termagaunt_t1(tyr)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_tyr_doc_leviathan_synaptic_squad_t1(tyr)"},

		--	{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Infantry", "Squad",}, unit = "doctrine_tyr_doc_leviathan_mycetic_drop_t2(tyr)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Armored", "Squad",}, unit = "doctrine_tyr_doc_leviathan_tyranid_guard_t2(tyr)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Armored", "Squad",}, unit = "doctrine_tyr_doc_leviathan_tyranid_tervigons_t2(tyr)"},
			
			{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Infantry", "Squad",}, unit = "doctrine_tyr_doc_leviathan_tyranid_swarm_t3(tyr)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Armored", "Squad",}, unit = "doctrine_tyr_doc_leviathan_carnifex_pack_t3(tyr)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Armored",}, unit = "doctrine_tyr_doc_leviathan_oldoneeye_t3(tyr)"},
		}
	}
}
