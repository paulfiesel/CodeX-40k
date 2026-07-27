
; TIER CLASSIFICATION:
; 0-180s - ~~TIER 1			3m
; 180s - 600s - ~~TIER 2	3m - 10m
; 600s - 1200s - ~~TIER 3	10m - 20m
; +1200s - ~~TIER 4			20m onwards

; ================================================================================================================================ ;
; Squads - INF1
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_rippers(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(0) ci(10) g(squad_1a) b(inf1) scf(1.0) cost(0) t()
		
		c1(HI_tyr_ripperswarm_leviathan_1:12) 
	)
}

{"squad_tyr_doc_leviathan_inf_hormagaunts(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(0) ci(0) g(squad_1b) b(inf1) scf(1.0) cost(0) t()
		
		c1(HI_tyr_hormagaunt_leviathan_1:10) 
	)
}

{"squad_tyr_doc_leviathan_inf_spinegaunts(tyr)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(0) ci(0) g(squad_1c) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t0_gaunt/tyr_leviathan_t0_01:12) 
	)
}

{"squad_tyr_doc_leviathan_inf_termagaunts(tyr)"	
	("sc_inf_squad_with2types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(30) ci(0) g(squad_1d) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t0_gaunt/tyr_leviathan_t0_02:9) 
		c2(t0_gaunt/tyr_leviathan_t0_03:3) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_sporemines(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(180) ci(300) g(squad_2a) b(inf1) scf(1.0) cost(0) t(limit3)
		
		c1(HI_tyr_sporemine_1:10) 
	)
}

{"squad_tyr_doc_leviathan_inf_warriors_talons(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(60) ci(0) g(squad_2b) b(inf1) scf(1.0) cost(0) t()
		
		c1(HI_tyr_warrior_tl_leviathan_1:5) 
	)
}

{"squad_tyr_doc_leviathan_inf_warriors_devourer(tyr)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(90) ci(30) g(squad_2c) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t1_warrior/tyr_leviathan_t1_01:5) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_warriors_bonesword(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(300) ci(45) g(squad_3a) b(inf1) scf(1.0) cost(0) t()		; 150mp
		
		c1(HI_tyr_warrior_bs_leviathan_1:5) 
	)
}

{"squad_tyr_doc_leviathan_inf_genestealers(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(480) ci(45) g(squad_3b) b(inf1) scf(1.0) cost(0) t()		; 175mp
		
		c1(HI_tyr_genestealer_leviathan_1:12) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_wrr_adapted_deathspitter(tyr)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(600) ci(60) g(squad_4a) b(inf1) scf(1.0) cost(0) t()		; 200mp
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t1_warrior/tyr_leviathan_t1_08:5) 
	)
}

; ================================================================================================================================ ;
; Teams - INF2
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_tyranidprime(tyr)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(60) ci(480) g(single_1a) b(inf2) scf(1.0) cost(0) t(limit2)
		package(LV40k) side_mp(-tyr/leviathan) 
		
		c1(t1_warrior/tyr_leviathan_t1_10:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_ravener_alpha(tyr)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(120) ci(300) g(single_1b) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-tyr/leviathan) 
		
		c1(t3_ravener/tyr_leviathan_t3_02:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_zoanthrope(tyr)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(180) ci(300) g(single_2a) b(inf2) scf(1.0) cost(0) t(officer)
		package(LV40k) side_mp(-tyr/leviathan) 
		
		c1(t2_zoanthrope/tyr_leviathan_t2_01:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_warriors_strangler(tyr)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(180) ci(60) g(single_2b) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t1_warrior/tyr_leviathan_t1_03:3) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_warriors_venom(tyr)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(240) ci(120) g(single_3a) b(inf2) scf(1.00) cost(0) t()		
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t1_warrior/tyr_leviathan_t1_02:3) 
	)
}

{"squad_tyr_doc_leviathan_inf_lictor(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(480) ci(480) g(single_3b) b(inf2) scf(1.0) cost(0) t()		
		
		c1(HI_tyr_lictor_leviathan_1:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_venomthropes(tyr)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(600) ci(120) g(single_3c) b(inf2) scf(1.00) cost(0) t()		
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t4_venomthrope/tyr_leviathan_t4_01:4) 
	)
}

; ================================================================================================================================ ;
; Air/Deepstrikes Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_dp_termagaunts(tyr)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(120) ci(120) g(deepstrike_1a) b(deepstrike) scf(2.0) cost(0) t()	; <- more expensive as it is deepstriked
		package(LV40k) side_mp(-tyr/leviathan) 
		
		v(lv40k_mp_call_tyr_mycetic_gaunts_1)	c1(t0_gaunt/tyr_leviathan_t0_02:8) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_dp_warriors(tyr)"	
	("sc_vehicle_crew3types_doc" smin(1) smax(1) 			
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(300) ci(300) g(deepstrike_2a) b(deepstrike) scf(0.65) cost(0) t()	; <- 35% discount
		package(LV40k) side_mp(-tyr/leviathan) 
		
		v(lv40k_mp_call_tyr_mycetic_warriors_1)	
		
		c1(t1_warrior/tyr_leviathan_t1_01:6) 
		c2(t1_warrior/tyr_leviathan_t1_02:1) 
		c3(t1_warrior/tyr_leviathan_t1_03:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_dp_genestealers(tyr)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(300) ci(300) g(deepstrike_2b) b(deepstrike) scf(1.0) cost(175) t()	
		
		v(lv40k_mp_call_tyr_mycetic_genestealers_1)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_dp_raveners(tyr)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(480) ci(480) g(deepstrike_3a) b(deepstrike) scf(0.75) cost(0) t()		; <- 25% discount
		package(LV40k) side_mp(-tyr/leviathan) 
		
		v(lv40k_mp_call_tyr_ravener_emerge_1)	c1(t3_ravener/tyr_leviathan_t3_01:8) 
	)
}

; ================================================================================================================================ ;
; Vehicles Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_hiveguard(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(120) ci(60) g(veh2a) b(vehicles) scf(1.0) cost(0) t()		; 100mp
		
		c1(HI_tyr_hiveguard_leviathan_1:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_Pyrovore(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(180) ci(300) g(veh2b) b(vehicles) scf(1.0) cost(0) t()		; 150mp
		
		c1(HI_tyr_pyrovore_leviathan_1:2) 
	)
}

{"squad_tyr_doc_leviathan_inf_hiveguard_imp(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(180) ci(120) g(veh2c) b(vehicles) scf(1.0) cost(0) t()		; 175mp
		
		c1(HI_tyr_hiveguard_leviathan_imp_1:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_Biovore(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(300) ci(300) g(veh2d) b(vehicles) scf(1.0) cost(0) t()		; 200mp
		
		c1(HI_tyr_biovore_leviathan_1:2) 
	)
}

{"squad_tyr_doc_leviathan_inf_hiveguard_shk(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(300) ci(120) g(veh2e) b(vehicles) scf(1.0) cost(0) t()		; 200mp
		
		c1(HI_tyr_hiveguard_leviathan_shk_1:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_carnifex_melee(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(300) ci(120) g(veh2f) b(vehicles) scf(1.0) cost(0) t()		; 225mp	
		
		c1(HI_tyr_carnifex_melee_leviathan_2:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_Tervigon(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(360) ci(360) g(veh2g) b(vehicles) scf(1.0) cost(0) t()		; 275mp
		
		c1(hi_tyr_tervigon_leviathan_1:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_hellfex(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(420) ci(120) g(veh3a) b(vehicles) scf(1.0) cost(0) t()		; 300mp	
		
		c1(HI_tyr_hellfex_dev_leviathan_1:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_carnifex_strangler(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(600) ci(180) g(veh3b) b(vehicles) scf(1.0) cost(0) t()		; 375mp
		
		c1(HI_tyr_carnifex_brbstr_leviathan_1:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_carnifex_venom(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(600) ci(180) g(veh3d) b(vehicles) scf(1.0) cost(0) t()		; 400mp
		
		c1(HI_tyr_carnifex_vmcn_leviathan_1:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_exocrine(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(720) ci(480) g(veh3c) b(vehicles) scf(1.0) cost(0) t()		; 400mp	
		
		c1(HI_tyr_exocrine_leviathan_1:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_Tyrannofex(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(900) ci(300) g(veh4a) b(vehicles) scf(1.0) cost(0) t()		; 500mp
		
		c1(hi_tyr_tyrannofex_leviathan_1:1) 
	)
}

; ================================================================================================================================ ;
; Tanks Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_tyrant_melee(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(600) ci(600) g(tank3a) b(tanks) scf(1.0) cost(0) t(limit1a)		; 400mp	
		
		c1(HI_tyr_hivetyrant_melee_leviathan_1:1) 
	)
}
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_tyr_doc_leviathan_inf_tyrant_venom(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(720) ci(720) g(tank4a) b(tanks) scf(1.0) cost(0) t(limit1a)		; 600mp	
		
		c1(HI_tyr_hivetyrant_vc_leviathan_1:1) 
	)
}

{"squad_tyr_doc_leviathan_inf_swarmlord(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(900) ci(900) g(tank4b) b(tanks) scf(1.0) cost(0) t(limit1)		; 700mp
		
		c1(HI_tyr_swarmlord_leviathan_1:1) 
	)
}

; ================================================================================================================================ ;
; Doctrine Tab
; ================================================================================================================================ ;

; T1 cd300-480		ci180 
; T2 cd720-900		ci300
; T3 cd1200-1500	ci480

; Groups are shared

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_tyr_doc_leviathan_adapted_hormagaunt_t1(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(5) t(limit5)	
		
		c1(HI_tyr_hormagaunt_leviathan_2:32) 
	)
}

{"doctrine_tyr_doc_leviathan_adapted_termagaunt_t1(tyr)"	
	("sc_inf_squad_with2types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(15) t(limit5)	
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t0_gaunt/tyr_leviathan_t0_05:12) 
		c2(t0_gaunt/tyr_leviathan_t0_06:12)
	)
}

{"doctrine_tyr_doc_leviathan_synaptic_squad_t1(tyr)"	
	("sc_inf_squad_with3types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(35) t()	
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t1_warrior/tyr_leviathan_t1_01:3) 
		c2(t1_warrior/tyr_leviathan_t1_02:3) 
		c3(t1_warrior/tyr_leviathan_t1_03:3) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_tyr_doc_leviathan_mycetic_drop_t2(tyr)"	
	("sc_vehicle_crew4types_doc" smin(1) smax(1) 			
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(50) t()
		package(LV40k) side_mp(-tyr/leviathan) 
		
		v(lv40k_mp_call_tyr_mycetic_squad_1)
		c1(t0_gaunt/tyr_leviathan_t0_02:15) 
		c2(t1_warrior/tyr_leviathan_t1_01:2) 
		c3(t1_warrior/tyr_leviathan_t1_02:2) 
		c4(t1_warrior/tyr_leviathan_t1_03:2) 
	)
}

{"doctrine_tyr_doc_leviathan_tyranid_guard_t2(tyr)"	
	("sc_fauna_squad_with2types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(60) t()	
		
		c1(HI_tyr_hiveguard_leviathan_shk_1:2) 
		c2(HI_tyr_hiveguard_leviathan_imp_1:2) 
	)
}

{"doctrine_tyr_doc_leviathan_tyranid_tervigons_t2(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(60) t(limit1b)	
		
		c1(hi_tyr_tervigon_leviathan_1:2) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_tyr_doc_leviathan_oldoneeye_t3(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(65) t()
		
		c1(HI_tyr_oldoneeye_leviathan_1:1) 
	)
}

{"doctrine_tyr_doc_leviathan_tyranid_swarm_t3(tyr)"	
	("sc_inf_squad_with6types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(70) t()		
		package(LV40k) side_mp(-tyr/leviathan) 
	
		c1(t0_gaunt/tyr_leviathan_t0_03:16) 
		c2(t0_gaunt/tyr_leviathan_t0_04:12) 
		c3(t1_warrior/tyr_leviathan_t1_04:3) 
		c4(t1_warrior/tyr_leviathan_t1_03:3) 
		c5(t1_warrior/tyr_leviathan_t1_03:3) 
		c6(t2_zoanthrope/tyr_leviathan_t2_01:1) 
	)
}

{"doctrine_tyr_doc_leviathan_carnifex_pack_t3(tyr)"	
	("sc_fauna_squad_with3types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_leviathan) side(tyr) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(95) t()
		
		c1(HI_tyr_carnifex_melee_leviathan_2:1) 
		c2(HI_tyr_carnifex_vmcn_leviathan_1:1) 
		c3(HI_tyr_carnifex_brbstr_leviathan_1:1) 
	)
}