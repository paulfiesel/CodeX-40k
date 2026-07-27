
; TIER CLASSIFICATION:
; 0-180s - ~~TIER 1			3m
; 180s - 600s - ~~TIER 2	3m - 10m
; 600s - 1200s - ~~TIER 3	10m - 20m
; +1200s - ~~TIER 4			20m onwards

; ================================================================================================================================ ;
; Squads - INF1
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_scouts_bolter(sms)"	
	("sc_inf_squad_with3types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(0) ci(15) g(squad_1a) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums)
		
		c1(T1_scouts_tactical/sm_ultramarines_t1_01:2) 
		c2(T1_scouts_tactical/sm_ultramarines_t1_02:3) 
		c3(T1_scouts_tactical/sm_ultramarines_t1_sq_01:1)
	)
}

{"squad_sms_doc_ultramarines_scouts_recon(sms)"	
	("sc_inf_squad_with4types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(0) ci(60) g(squad_1b) b(inf1) scf(1.0) cost(0) t()	
		package(LV40k)	side_mp(-sm/ums)
		
		c1(T1_scouts_tactical/sm_ultramarines_t1_03:2) 
		c2(T1_scouts_tactical/sm_ultramarines_t1_05:1) 
		c3(T1_scouts_heavy/sm_ultramarines_t1_10:1)
		c4(T1_scouts_tactical/sm_ultramarines_t1_sq_01:1)
	)
}

{"squad_sms_doc_ultramarines_scouts_heavy(sms)"	
	("sc_inf_squad_with4types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(120) ci(90) g(squad_1c) b(inf1) scf(1.0) cost(0) t()	
		package(LV40k)	side_mp(-sm/ums)
		
		c1(T1_scouts_tactical/sm_ultramarines_t1_03:1) 
		c2(T1_scouts_heavy/sm_ultramarines_t1_06:2) 
		c3(T1_scouts_heavy/sm_ultramarines_t1_09:1) 
		c4(T1_scouts_tactical/sm_ultramarines_t1_sq_01:1)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_tactical_bolter(sms)"	
	("sc_inf_squad_with4types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(180) ci(180) g(squad_2a) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums)
		
		c1(T2_marine_tactical/sm_ultramarines_t2_01:2) 
		c2(T2_marine_tactical/sm_ultramarines_t2_02:1) 
		c3(T2_marine_tactical/sm_ultramarines_t2_03:1) 
		c4(T2_marine_tactical/sm_ultramarines_t2_sq_01:1) 
	)
}

{"squad_sms_doc_ultramarines_tactical_plasma(sms)"	
	("sc_inf_squad_with2types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(240) ci(180) g(squad_2b) b(inf1) scf(1.0) cost(0) t()	
		package(LV40k)	side_mp(-sm/ums)
		
		c1(T2_marine_tactical/sm_ultramarines_t2_05:4) 
		c2(T2_marine_tactical/sm_ultramarines_t2_sq_02:1) 
	)
}

{"squad_sms_doc_ultramarines_tactical_antitank(sms)"	
	("sc_inf_squad_with4types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(360) ci(180) g(squad_2c) b(inf1) scf(1.0) cost(0) t()	
		package(LV40k)	side_mp(-sm/ums)
		
		c1(T2_marine_tactical/sm_ultramarines_t2_04:2) 
		c2(T2_marine_tactical/sm_ultramarines_t2_07:1) 
		c3(T2_marine_tactical/sm_ultramarines_t2_08:1) 
		c4(T2_marine_tactical/sm_ultramarines_t2_sq_01:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_primaris_bolter(sms)"	
	("sc_inf_squad_with3types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(480) ci(210) g(squad_3a) b(inf1) scf(1.1) cost(0) t()	
		package(LV40k)	side_mp(-sm/ums)
		
		c1(T4_intercessors/sm_ultramarines_t4_01:3) 
		c2(T4_intercessors/sm_ultramarines_t4_02:1) 
		c3(T4_intercessors/sm_ultramarines_t4_sq_01:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_veteran_tac_bolter(sms)"	
	("sc_inf_squad_with4types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(720) ci(300) g(squad_4a) b(inf1) scf(1.0) cost(0) t()	
		package(LV40k)	side_mp(-sm/ums)
		
		c1(T3_veteran_tactical/sm_ultramarines_t3_02:2) 
		c2(T3_veteran_tactical/sm_ultramarines_t3_03:1) 
		c3(T3_veteran_tactical/sm_ultramarines_t3_04:1) 
		c4(T3_veteran_tactical/sm_ultramarines_t3_sq_02:1)
	)
}

{"squad_sms_doc_ultramarines_veteran_tac_heavy(sms)"	
	("sc_inf_squad_with3types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(900) ci(300) g(squad_4b) b(inf1) scf(1.0) cost(0) t()	
		package(LV40k)	side_mp(-sm/ums)
		
		c1(T3_veteran_tactical/sm_ultramarines_t3_01:2) 
		c2(T3_veteran_tactical/sm_ultramarines_t3_06:2) 
		c3(T3_veteran_tactical/sm_ultramarines_t3_sq_01:1)
	)
}

; ================================================================================================================================ ;
; Teams - INF2
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ NO TIER - SUPPORT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_inf_servitors(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(0) ci(240) g(single_0a) b(inf2) scf(1.0) cost(0) t()			
		package(LV40k) side_mp(-sm/ums) 
		
		c1(sm_ultramarines_tx_servitor_01:4) 
	)
}

{"squad_sms_doc_ultramarines_inf_scout_flamers(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(0) ci(180) g(single_0b) b(inf2) scf(1.0) cost(0) t()		
		package(LV40k) side_mp(-sm/ums) 
		
		c1(T1_scouts_heavy/sm_ultramarines_t1_07:2) 
	)
}

{"squad_sms_doc_ultramarines_inf_gun_servitors(sms)"	
	("sc_inf_squad_with2types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(0) ci(90) g(single_0c) b(inf2) scf(0.52) cost(0) t()			; 50% discount
		package(LV40k) side_mp(-sm/ums) 
		
		c1(sm_ultramarines_tx_servitor_02:2)
		c2(sm_ultramarines_tx_servitor_04:1) 
	)
}

{"squad_sms_doc_ultramarines_inf_Apothecary(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(240) ci(720) g(single_0d) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		c1(sm_ultramarines_tx_medic_01:1) 
	)
}

{"squad_sms_doc_ultramarines_inf_Techmarine(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(240) ci(720) g(single_0e) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		c1(sm_ultramarines_tx_techmarine_01:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_inf_devastator_hb(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(300) ci(300) g(single_2a) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		c1(T2_marine_devastator/sm_ultramarines_t2_15:3) 
	)
}

{"squad_sms_doc_ultramarines_inf_devastator_las(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(300) ci(300) g(single_2b) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		c1(T2_marine_devastator/sm_ultramarines_t2_16:3) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_inf_devastator_plasma(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(480) ci(480) g(single_3a) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		c1(T2_marine_devastator/sm_ultramarines_t2_17:3) 
	)
}

{"squad_sms_doc_ultramarines_inf_devastator_multi(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(600) ci(600) g(single_3b) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		c1(T2_marine_devastator/sm_ultramarines_t2_18:3) 
	)
}

{"squad_sms_doc_ultramarines_inf_Chaplain(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(600) ci(600) g(single_3d) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		c1(sm_ultramarines_tx_chaplain_01:1) 
	)
}

{"squad_sms_doc_ultramarines_inf_Librarian(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(720) ci(720) g(single_3e) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		c1(sm_ultramarines_tx_psyker_01:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_inf_Commander(sms)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(900) ci(900) g(single_4a) b(inf2) scf(1.0) cost(0) t(officer)
		package(LV40k) side_mp(-sm/ums) 
		
		c1(sm_ultramarines_tx_commander_01:1) 
		
		; {} // ADD HONOR GUARD TO COMMAND SQUAD LATER!
	)
}

; ================================================================================================================================ ;
; Deepstrike Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_inf_dp_assaultmarines(sms)"	
	("sc_vehicle_crew4types_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(180) ci(300) g(deepstrike_2a) b(deepstrike) scf(1.0) cost(0) t()		; costs 0% more
		package(LV40k) side_mp(-sm/ums) 
		
		v(lv40k_mp_call_sms_assaultmarines_1)
		c1(t2_marine_assault/sm_ultramarines_t2_10:1)	
		c2(t2_marine_assault/sm_ultramarines_t2_11:2)
		c3(t2_marine_assault/sm_ultramarines_t2_14:1)
		c4(t2_marine_assault/sm_ultramarines_t2_sq_03:1)
	)
}

{"squad_sms_doc_ultramarines_inf_dp_tacticalmarines(sms)"	
	("sc_vehicle_crew5types_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(240) ci(600) g(deepstrike_2b) b(deepstrike) scf(1.4) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		v(lv40k_mp_call_sms_droppods_marines_tactical)
		c1(T2_marine_tactical/sm_ultramarines_t2_01:2) 
		c2(T2_marine_tactical/sm_ultramarines_t2_03:1) 
		c3(T2_marine_tactical/sm_ultramarines_t2_04:1) 
		c4(T2_marine_tactical/sm_ultramarines_t2_sq_01:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

;{##"squad_sms_doc_ultramarines_inf_dp_orbital_scan(sms)"	
;	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
;		d(LV40k_sms_ultramarines) side(sms) period(early) cd(720) ci(720) g(deepstrike_3a) b(deepstrike) scf(1.0) cost(0) t()
;
;		v(ums_supply_pod)		; <- not yet added
;	)
;}

{"squad_sms_doc_ultramarines_inf_dp_deathwatch(sms)"	
	("sc_vehicle_crew5types_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(480) ci(720) g(deepstrike_3b) b(deepstrike) scf(1.65) cost(0) t(limit2)
		package(LV40k) side_mp(-sm/dw) 
		
		v(lv40k_mp_call_sms_droppods_marines_deathwatch)
		c1(T1_tactical/sm_deathwatch_t1_01:1)	
		c2(T1_tactical/sm_deathwatch_t1_03:1)
		c3(T1_tactical/sm_deathwatch_t1_04:1)
		c4(T1_tactical/sm_deathwatch_t1_10:1)
		c5(T1_tactical/sm_deathwatch_t1_11:1)
	)
}

{"squad_sms_doc_ultramarines_inf_dp_devastators(sms)"	
	("sc_vehicle_crew5types_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(720) ci(900) g(deepstrike_3c) b(deepstrike) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-sm/ums) 
		
		v(lv40k_mp_call_sms_droppods_marines_devastator)
		c1(t2_marine_devastator/sm_ultramarines_t2_15:1)	
		c2(t2_marine_devastator/sm_ultramarines_t2_16:1)
		c3(t2_marine_devastator/sm_ultramarines_t2_17:1)
		c4(t2_marine_devastator/sm_ultramarines_t2_18:1)
		c5(t2_marine_devastator/sm_ultramarines_t2_sq_05:1)
	)
}

{"squad_sms_doc_ultramarines_dp_dreadnought(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(900) ci(600) g(deepstrike_3d) b(deepstrike) scf(1.0) cost(600) t()

		v(lv40k_mp_call_sms_droppods_dreadnought)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_sms_doc_ultramarines_inf_dp_term_melee(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(1080) ci(900) g(deepstrike_4a) b(deepstrike) scf(1.0) cost(500) t(limit1a)

		v(lv40k_mp_call_sms_terminators_assault)
	)
}

{"squad_sms_doc_ultramarines_inf_dp_term_flamer(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(1200) ci(900) g(deepstrike_4b) b(deepstrike) scf(1.0) cost(500) t(limit1)

		v(lv40k_mp_call_sms_terminators_heavyflamer)
	)
}

{"squad_sms_doc_ultramarines_inf_dp_term_tactical(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(1200) ci(900) g(deepstrike_4c) b(deepstrike) scf(1.0) cost(600) t(limit1)

		v(lv40k_mp_call_sms_terminators_tactical)
	)
}

;{##"squad_sms_doc_ultramarines_inf_predator(sms)"	
;	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
;		d(LV40k_sms_ultramarines) side(sms) period(early) cd(1200) ci(900) g(deepstrike_4d) b(deepstrike) scf(1.0) cost(800) t()
;
;		v(ums_supply_pod)		; <- not yet added
;	)
;}

; ================================================================================================================================ ;
; Support/Emplacements Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ NO TIER - SUPPORT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_inf_ammo_droppod(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(120) ci(120) g(cannon0a) b(empl) scf(1.0) cost(100) t()

		v(lv40k_mp_call_sms_droppods_ammo)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_tarantula_Beacon(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(120) ci(480) g(cannon1a) b(empl) scf(1.0) cost(50) t()

		v(lv40k_mp_call_sms_tarantula_beacon)
	)
}

{"veh_sms_doc_ultramarines_tarantula_HB(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(120) ci(540) g(cannon2a) b(empl) scf(1.0) cost(100) t()

		v(lv40k_mp_call_sms_tarantula_HB)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_thunderfire(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(480) ci(300) g(cannon3b) b(empl) scf(1.0) cost(0) t()

		v(UMS_thunderfire)
	)
}

{"veh_sms_doc_ultramarines_tarantula_ML(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(480) ci(600) g(cannon3a) b(empl) scf(1.0) cost(175) t()

		v(lv40k_mp_call_sms_tarantula_ML)
	)
}

; ================================================================================================================================ ;
; Vehicles Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_rhino_standard(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(60) ci(60) g(veh1a) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_rhino_u)	c1(sm_ultramarines_tx_tankman_02:1)
	)
}

{"veh_sms_doc_ultramarines_rhino_pintle(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(120) ci(120) g(veh1b) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_rhino_u_sb)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_landspeeder_heavyflamer(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(120) ci(120) g(veh1c) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(UMS_landspeeder_HB_heavyflamer)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_landspeeder_multimelta(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(180) ci(180) g(veh2a) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(UMS_landspeeder_HB_multimelta)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_rhino_heavy(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(180) ci(180) g(veh2b) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_rhino_h_pintle)	c1(sm_ultramarines_tx_tankman_02:3)
	)
}

{"veh_sms_doc_ultramarines_landspeeder_assaultcannon(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(240) ci(240) g(veh2c) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums)
		
		v(UMS_landspeeder_MM_assaultcannon)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_landspeeder_typhon(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(300) ci(300) g(veh2d) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(UMS_landspeeder_HB_rocketpods)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_dreadnought_assaultcannon(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(420) ci(420) g(veh2e) b(vehicles) scf(1.0) cost(0) t() 
		
		v(ums_dread_STD_assaultcannon)
	)
}

{"veh_sms_doc_ultramarines_dreadnought_hellfire(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(480) ci(480) g(veh2f) b(vehicles) scf(1.0) cost(0) t() 
		
		v(ums_dread_HEL_assaultcannon)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_dreadnought_inferno(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(600) ci(600) g(veh3a) b(vehicles) scf(1.0) cost(0) t() 
		
		v(ums_dread_STD_inferno)
	)
}

{"veh_sms_doc_ultramarines_dreadnought_multimelta(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(600) ci(600) g(veh3c) b(vehicles) scf(1.0) cost(0) t() 
		
		v(ums_dread_STD_multimelta)
	)
}

{"veh_sms_doc_ultramarines_dreadnought_autocannon(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(600) ci(600) g(veh3b) b(vehicles) scf(1.0) cost(0) t() 
		
		v(ums_dread_STD_autocannon)
	)
}

{"veh_sms_doc_ultramarines_dreadnought_hellfire_lascannon(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(720) ci(720) g(veh3d) b(vehicles) scf(1.0) cost(0) t() 
		
		v(ums_dread_HEL_lascannon)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_dreadnought_venerable_plasmacannon(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(900) ci(900) g(veh4a) b(vehicles) scf(1.0) cost(0) t() 
		
		v(ums_dread_VEN_plasmacannon)
	)
}

; ================================================================================================================================ ;
; Tanks Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_razorback_flamer(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(180) ci(180) g(tank2b) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_razorback_flamer)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_razorback_hb(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(180) ci(180) g(tank2a) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_razorback_hb)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_whirlwind_stalker(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(300) ci(300) g(tank2c) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_whirlwind_stalker)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_razorback_lascannon(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(480) ci(180) g(tank3a) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_razorback_lascannon)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_predator_destructor(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(720) ci(300) g(tank3b) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_predator_autocannon_hb_hb)	c1(sm_ultramarines_tx_tankman_02:3)
	)
}

{"veh_sms_doc_ultramarines_predator_plasmacannon(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(720) ci(300) g(tank3c) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_predator_plasmacannon_hb_hb)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_predator_annihilator(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(720) ci(480) g(tank3e) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_predator_annihilator_lc_lc)	c1(sm_ultramarines_tx_tankman_02:3)
	)
}

{"veh_sms_doc_ultramarines_vindicator(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(900) ci(480) g(tank3d) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_rhino_vindicator)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_sms_doc_ultramarines_whirlwind_artillery(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(900) ci(600) g(tank4a) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_whirlwind_artillery)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_landraider_prometheus(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(1080) ci(1080) g(tank4b) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(UMS_landraider_prometheus)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

{"veh_sms_doc_ultramarines_landraider_redeemer(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(1080) ci(1080) g(tank4c) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(UMS_landraider_redeemer)	c1(sm_ultramarines_tx_tankman_02:3)
	)
}

{"veh_sms_doc_ultramarines_landraider_phobos(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(1200) ci(1200) g(tank4d) b(tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-sm/ums) 
		
		v(UMS_landraider_phobos)	c1(sm_ultramarines_tx_tankman_02:3)
	)
}

{"veh_sms_doc_ultramarines_knight_paladin(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(1500) ci(1500) g(tank4e) b(tanks) scf(1.0) cost(0) t() 
		
		v(freeblade_knight_paladin_1)
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

{"doctrine_sms_doc_ultramarines_ultramar_auxilia(sms)"	
	("sc_inf_squad_with5types_doc" smin(1) smax(1)  
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(20) t(limit3)
		package(LV40k) side_mp(-ig/ultramar)
		
		c1(t1_legionary/ig_ultramar_t1_01:9) 
		c2(t1_legionary/ig_ultramar_t1_02:8) 
		c3(t1_legionary/ig_ultramar_t1_03:3) 
		c4(t1_legionary/ig_ultramar_t1_04:3) 
		c5(t1_legionary/ig_ultramar_t1_sq_01:1)
	)
}

{"doctrine_sms_doc_ultramarines_damocles_tank(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(40) t(limit1b) 
		package(LV40k) side_mp(-sm/ums) 
		
		v(ums_rhino_damocles)	c1(sm_ultramarines_tx_tankman_02:2)
	)
}

; // Land Speeder Tempest - DO [...]

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_sms_doc_ultramarines_sternguard(sms)"	
	("sc_vehicle_crew5types_doc" smin(1) smax(1) 		
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(60) t()
		package(LV40k) side_mp(-sm/ums) 
		
		v(lv40k_mp_call_sms_droppods_marines_sternguard)
		c1(t5_sternguard/sm_ultramarines_t5_01:1)	
		c2(t5_sternguard/sm_ultramarines_t5_02:1)
		c3(t5_sternguard/sm_ultramarines_t5_03:1)
		c4(t5_sternguard/sm_ultramarines_t5_04:1)
		c5(t5_sternguard/sm_ultramarines_t5_sq_01:1)
	)
}

{"doctrine_sms_doc_ultramarines_ironclad_Dread(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(65) t() 
		
		v(ums_dread_irc_hurricane)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

; // Fellblade - DO [...]

{"doctrine_sms_doc_ultramarines_knight_freeblade(sms)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_sms_ultramarines) side(sms)	period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(100) t() 
		
		v(freeblade_knight_warden_1)
	)
}

{"doctrine_sms_doc_ultramarines_terminus_ultra(sms)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_sms_ultramarines) side(sms) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(135) t()
		package(LV40k) side_mp(-sm/ums) 
		
		v(UMS_landraider_terminus)	c1(sm_ultramarines_tx_tankman_02:3)
	)
}
