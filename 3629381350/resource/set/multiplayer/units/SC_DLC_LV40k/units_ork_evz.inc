
; TIER CLASSIFICATION:
; 0-180s - ~~TIER 1			3m
; 180s - 600s - ~~TIER 2	3m - 10m
; 600s - 1200s - ~~TIER 3	10m - 20m
; +1200s - ~~TIER 4			20m onwards

; ================================================================================================================================ ;
; Squads - INF1
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_grots(ork)"	
	("sc_inf_squad_with2types_doc" smin(1) smax(1)  
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(0) ci(90) g(squad_0) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(t0_gretchin/ork_evilsunz_t0_01:9) c2(t0_gretchin/ork_evilsunz_t0_02:3) 
	)
}

{"squad_ork_doc_evilsunz_inf_sluggaboys(ork)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(0) ci(10) g(squad_1a) b(inf1) scf(1.0) cost(0) t()		; TEST!
		
		c1(HI_orkboy_slugga_evilsunz_1:12) 
	)
}

{"squad_ork_doc_evilsunz_inf_shootaboys(ork)"	
	("sc_inf_squad_with3types_doc" smin(1) smax(1)  
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(0) ci(10) g(squad_1b) b(inf1) scf(1.0) cost(0) t()	
		package(LV40k)	side_mp(-orks/evilsunz) 
		
		c1(t1_boyz/ork_evilsunz_t1_01:10) c2(t1_boyz/ork_evilsunz_t1_02:1) c3(t1_boyz/ork_evilsunz_t1_03:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_squigbombs(ork)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(480) g(squad_2d) b(inf1) scf(1.0) cost(0) t(limit3)
		
		c1(HI_squigbomb_1:4) 
	)
}

{"squad_ork_doc_evilsunz_inf_warbikers(ork)"	
	("sc_squad_vehicle_x5_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(120) ci(240) g(squad_2e) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v1(evz_ork_warbike)	cv1(ork_evilsunz_tx_tankman_01:1)
		v2(evz_ork_warbike)	cv2(ork_evilsunz_tx_tankman_01:1)
		v3(evz_ork_warbike)	cv3(ork_evilsunz_tx_tankman_01:1)
		v4(evz_ork_warbike)	cv4(ork_evilsunz_tx_tankman_01:1)
		v5(evz_ork_warbike)	cv5(ork_evilsunz_tx_tankman_01:1)
	)
}

{"veh_ork_doc_evilsunz_trukk_transport(ork)"	
	("sc_vehicle_crew5types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(180) ci(60) g(squad_2special) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(Evz_Wartrukk)
		c1(ork_evilsunz_tx_tankman_01:2) c2(t1_boyz/ork_evilsunz_t1_01:2)
		c3(t1_boyz/ork_evilsunz_t1_02:2) c4(t1_boyz/ork_evilsunz_t1_03:2) c5(t1_boyz/ork_evilsunz_t1_04:2) 
	)
}

{"squad_ork_doc_evilsunz_inf_tankbustas(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1)  		
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(120) g(squad_2b) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
	
		c1(t1_boyz/ork_evilsunz_t1_06:6) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_nobsluggas(ork)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(600) ci(300) g(squad_3a) b(inf1) scf(1.0) cost(0) t()
		
		c1(HI_orknob_evilsunz_1:8) 
	)
}

{"squad_ork_doc_evilsunz_inf_kommandos(ork)"	
	("sc_inf_squad_with3types_doc" smin(1) smax(1)  		
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(600) ci(240) g(squad_3b) b(inf1) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(t1_boyz/ork_evilsunz_t2_07:4)  c2(t1_boyz/ork_evilsunz_t2_08:5) c3(t3_nobz/ork_evilsunz_t3_07:1) 
	)
}

{"squad_ork_doc_evilsunz_inf_nobshootas(ork)"
	("sc_vehicle_crew4types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(720) ci(300) g(squad3c) b(inf1) scf(0.75) cost(0) t()	; 25% discount, as for evilsunz mechanized doctrine.
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_gunwagon_transport)
		c1(ork_evilsunz_tx_tankman_01:2)
		c2(t3_nobz/ork_evilsunz_t3_01:4)
		c3(t3_nobz/ork_evilsunz_t3_02:3) 
		c4(t3_nobz/ork_evilsunz_t3_03:1)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_meganobs(ork)"	
	("sc_fauna_squad_with2types_doc" smin(1) smax(1) 	
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(1080) ci(480) g(squad_4a) b(inf1) scf(1.0) cost(0) t()
		
		c1(HI_meganob_evilsunz_1:4) 
		c2(HI_meganob_evilsunz_2:1) 
	)
}

; ================================================================================================================================ ;
; Teams - INF2
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ NO TIER - SUPPORT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_gretchin(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(0) ci(5) g(single_0a) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(t0_gretchin/ork_evilsunz_t0_01:2) 
	)
}

{"squad_ork_doc_evilsunz_inf_painboy(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(0) ci(150) g(single_0b) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(ork_evilsunz_tx_medic_01:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_sing_big_shoota(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(0) ci(5) g(single_1a) b(inf2) scf(1.25) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(t1_boyz/ork_evilsunz_t1_03:1) 
	)
}

{"squad_ork_doc_evilsunz_inf_sing_stikkbomber(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(0) ci(10) g(single_1b) b(inf2) scf(1.25) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(t1_boyz/ork_evilsunz_t1_05:1) 
	)
}

{"squad_ork_doc_evilsunz_inf_sing_rokkit(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(60) ci(30) g(single_2a) b(inf2) scf(1.25) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(t1_boyz/ork_evilsunz_t1_06:1) 
	)
}

{"squad_ork_doc_evilsunz_inf_loota_dakka(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(75) ci(60) g(single_1c) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(t1_boyz/ork_evilsunz_t1_07:2) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_burnas(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(180) ci(120) g(single_2b) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(ork_evilsunz_tx_flamer_01:3) 
	)
}

{"squad_ork_doc_evilsunz_inf_loota_beamy(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(270) ci(120) g(single_2c) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(ork_evilsunz_tx_at_01:2) 
	)
}

{"squad_ork_doc_evilsunz_inf_mekboy(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(180) ci(480) g(single_2d) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(ork_evilsunz_tx_mekboy_01:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_weirdboy(ork)"	
	("sc_inf_squad_with1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(480) ci(540) g(single_3a) b(inf2) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		c1(ork_evilsunz_tx_psyker_01:1) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_warboss(ork)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(900) ci(1200) g(single_4a) b(inf2) scf(1.0) cost(0) t(officer)
		
		c1(HI_warboss_evilsunz_1:1) 
	)
}

; ================================================================================================================================ ;
; Air/Deepstrikes Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_dp_stormboyz(ork)"
	("sc_vehicle_crew4types_doc" smin(1) smax(1) 		
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(480) ci(480) g(deepstrike_1a) b(deepstrike) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(lv40k_mp_call_ork_stormboyz_squad_1)
		c1(t1_boyz/ork_evilsunz_t2_04:10)	
		c2(t1_boyz/ork_evilsunz_t2_06:1)
		c3(t3_nobz/ork_evilsunz_t3_04:1)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_dp_digga_mob(ork)"
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(720) ci(720) g(deepstrike_2a) b(deepstrike) scf(1.0) cost(175) t()

		v(evz_ork_digger_sluggamob)
	)
}
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"squad_ork_doc_evilsunz_inf_dp_digga_meganobz(ork)"
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 		
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(1200) ci(900) g(deepstrike_3a) b(deepstrike) scf(1.0) cost(600) t(limit1)
		
		v(evz_ork_digger_meganobz)
	)
}

; ================================================================================================================================ ;
; Support/Emplacements Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ NO TIER - SUPPORT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_ork_doc_evilsunz_inf_ammo_grots(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(0) ci(30) g(cannon0a) b(empl) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(temp_ork_ammo_box)	c1(t0_gretchin/ork_evilsunz_t0_01:2) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_ork_doc_evilsunz_grotkannon(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(180) ci(60) g(cannon2a) b(empl) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(temp_ork_76mm_m1927)	c1(t0_gretchin/ork_evilsunz_t0_01:4)
	)
}

{"veh_ork_doc_evilsunz_flakkgun(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(120) g(cannon2b) b(empl) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(temp_ork_flak_20mm_flakvierling38)	c1(t0_gretchin/ork_evilsunz_t0_01:3)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_ork_doc_evilsunz_mekgun(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(600) ci(300) g(cannon3a) b(empl) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_ork_mekgun)	c1(t0_gretchin/ork_evilsunz_t0_01:3)
	)
}

; ================================================================================================================================ ;
; Vehicles Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_ork_doc_evilsunz_trukk_supply(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(60) ci(60) g(veh1a) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(Evz_Wartrukk_ammo)	c1(ork_evilsunz_tx_tankman_01:2)
	)
}

{"veh_ork_doc_evilsunz_warbuggy_shootas(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(60) ci(45) g(veh1b) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(Evz_Warbuggy_shootas)	c1(ork_evilsunz_tx_tankman_01:2)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_ork_doc_evilsunz_warbuggy_rokkits(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(150) ci(60) g(veh2a) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(Evz_Warbuggy_rokkits)	c1(ork_evilsunz_tx_tankman_01:2)
	)
}

{"veh_ork_doc_evilsunz_trukk_flamer(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork)	period(early) cd(180) ci(90) g(veh2b) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(Evz_Wartrukk_burna)	c1(ork_evilsunz_tx_tankman_01:2)
	)
}

{"veh_ork_doc_evilsunz_grot_tank_shoota(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(180) ci(30) g(veh2c) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_grot_tank_shoota)	c1(t0_gretchin/ork_evilsunz_t0_01:3)
	)
}


{"veh_ork_doc_evilsunz_gunwagon_carrier(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(240) ci(60) g(veh2d) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz)
		
		v(evz_gunwagon_transport)	c1(ork_evilsunz_tx_tankman_01:2)
	)
}

{"veh_ork_doc_evilsunz_grot_tank_kannon(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(60) g(veh2e) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_grot_tank_kannon)	c1(t0_gretchin/ork_evilsunz_t0_01:3)
	)
}

{"veh_ork_doc_evilsunz_grot_tank_rokkit(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(90) g(veh2f) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_grot_tank_rokkit)	c1(t0_gretchin/ork_evilsunz_t0_01:3)
	)
}

{"veh_ork_doc_evilsunz_wartrakk(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(300) g(veh2g) b(vehicles) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_ork_wartrakk)	c1(ork_evilsunz_tx_tankman_01:1)
	)
}

{"veh_ork_doc_evilsunz_deff_dread_dakka(ork)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork)	period(early) cd(360) ci(120) g(veh2h) b(vehicles) scf(1.0) cost(0) t() 
		
		v(evz_deff_dread_shoota)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_ork_doc_evilsunz_deff_dread_burna(ork)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork)	period(early) cd(480) ci(300) g(veh3a) b(vehicles) scf(1.0) cost(0) t() 
		
		v(evz_deff_dread_burna)
	)
}

{"veh_ork_doc_evilsunz_deff_dread_rokkit(ork)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork)	period(early) cd(540) ci(180) g(veh3b) b(vehicles) scf(1.0) cost(0) t() 
		
		v(evz_deff_dread_rokkit)
	)
}

{"veh_ork_doc_evilsunz_deff_dread_kannon(ork)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork)	period(early) cd(600) ci(210) g(veh3c) b(vehicles) scf(1.0) cost(0) t() 
		
		v(evz_deff_dread_kannon)
	)
}

{"veh_ork_doc_evilsunz_deff_dread_autocannon(ork)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork)	period(early) cd(600) ci(210) g(veh3d) b(vehicles) scf(1.0) cost(0) t() 
		
		v(evz_deff_dread_autocannon)
	)
}

{"veh_ork_doc_evilsunz_deff_dread_megablasta(ork)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork)	period(early) cd(720) ci(240) g(veh3e) b(vehicles) scf(1.0) cost(0) t() 
		
		v(evz_deff_dread_megablasta)
	)
}

{"veh_ork_doc_evilsunz_deff_dread_zzap(ork)"	
	("sc_vehicle_no_crew_doc" smin(1) smax(1) 
		d(LV40k_ork_evilsunz) side(ork)	period(early) cd(720) ci(300) g(veh3f) b(vehicles) scf(1.0) cost(0) t() 
		
		v(evz_deff_dread_zzapgun)
	)
}

; ================================================================================================================================ ;
; Tanks Tab
; ================================================================================================================================ ;

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_ork_doc_evilsunz_gunwagon_flakk(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(120) g(tank2b) b(Tanks) scf(1.0) cost(0) t() 
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_gunwagon_flakk)	c1(ork_evilsunz_tx_tankman_01:3)
	)
}

{"veh_ork_doc_evilsunz_gunwagon_kannon(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(480) ci(60) g(tank2a) b(Tanks) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_gunwagon_kannon)	c1(ork_evilsunz_tx_tankman_01:3)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_ork_doc_evilsunz_battlewagon_transport(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(720) ci(240) g(tank3a) b(Tanks) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_battlewagon_transport)	c1(ork_evilsunz_tx_tankman_01:8)
	)
}

{"veh_ork_doc_evilsunz_gunwagon_zzap(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(720) ci(300) g(tank3b) b(Tanks) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_gunwagon_zzap)	c1(ork_evilsunz_tx_tankman_01:3)
	)
}

{"veh_ork_doc_evilsunz_looted_lemanruss(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(720) ci(180) g(tank3c) b(Tanks) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_looted_lemanruss_rokkit_shoota)	c1(ork_evilsunz_tx_tankman_01:7)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"veh_ork_doc_evilsunz_looted_predator(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(900) ci(300) g(tank4a) b(Tanks) scf(1.0) cost(0) t(limit2)
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_looted_predator_kannons_hb_hb)	c1(ork_evilsunz_tx_tankman_01:6)
	)
}

{"veh_ork_doc_evilsunz_battlewagon_kannon(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(900) ci(300) g(tank4b) b(Tanks) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_battlewagon_kannon)	c1(ork_evilsunz_tx_tankman_01:9)
	)
}

{"veh_ork_doc_evilsunz_kill_bursta(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(1200) ci(480) g(tank4c) b(Tanks) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_kill_bursta_tank)	c1(ork_evilsunz_tx_tankman_01:6)
	)
}

{"veh_ork_doc_evilsunz_gorkanaut(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(1200) ci(720) g(tank4d) b(Tanks) scf(1.0) cost(0) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_gorkanaut)	c1()
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

{"doctrine_ork_doc_evilsunz_kult_of_speed_t1(ork)"	
	("sc_squad_vehicle_x4_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(25) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v1(Evz_Warbuggy_shootas)	cv1(ork_evilsunz_tx_tankman_01:2)
		v2(Evz_Warbuggy_shootas)	cv2(ork_evilsunz_tx_tankman_01:2)
		v3(Evz_Warbuggy_rokkits)	cv3(ork_evilsunz_tx_tankman_01:2)
		v4(Evz_Warbuggy_zzap)		cv4(ork_evilsunz_tx_tankman_01:2)
	)
}

{"doctrine_ork_doc_evilsunz_bring_in_da_Trukks_t1(ork)"	
	("sc_squad_vehicle_x2_with5types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(40) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v1(Evz_Wartrukk) cv1a(ork_evilsunz_tx_tankman_01:2)	cv1b(t1_boyz/ork_evilsunz_t1_01:2) cv1c(t1_boyz/ork_evilsunz_t1_02:2) cv1d(t1_boyz/ork_evilsunz_t1_03:2) cv1e(t1_boyz/ork_evilsunz_t1_04:2) 
		v2(Evz_Wartrukk) cv2a(ork_evilsunz_tx_tankman_01:2)	cv2b(t1_boyz/ork_evilsunz_t1_01:2) cv2c(t1_boyz/ork_evilsunz_t1_02:2) cv2d(t1_boyz/ork_evilsunz_t1_03:2) cv2e(t1_boyz/ork_evilsunz_t1_04:2) 
	)
}

{"doctrine_ork_doc_evilsunz_stormboy_horde_t1(ork)"	
	("sc_vehicle_crew4types_doc" smin(1) smax(1) 		
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(45) t(limit1a)
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(lv40k_mp_call_ork_stormboyz_squad_2)
		c1(t1_boyz/ork_evilsunz_t2_04:15)	
		c2(t1_boyz/ork_evilsunz_t2_05:3)
		c3(t1_boyz/ork_evilsunz_t2_06:3)
		c4(t3_nobz/ork_evilsunz_t3_04:3)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_ork_doc_evilsunz_flashgitz_t2(ork)"	
	("sc_vehicle_crew4types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(45) t(limit2a)
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(Evz_Wartrukk_burna) c1(ork_evilsunz_tx_tankman_01:2) c2(t3_nobz/ork_evilsunz_t3_09:4) c3(t3_nobz/ork_evilsunz_t3_10:3) c4(t3_nobz/ork_evilsunz_t3_11:1) 
	)
}

{"doctrine_ork_doc_evilsunz_bring_da_wagons_t2(ork)"	
	("sc_squad_vehicle_x2_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(55) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v1(evz_gunwagon_kannon)	cv1(ork_evilsunz_tx_tankman_01:3)
		v2(evz_gunwagon_kannon)	cv2(ork_evilsunz_tx_tankman_01:3)
	)
}

{"doctrine_ork_doc_evilsunz_mob_o_dreads_t2(ork)"	
	("sc_vehicle_x3_no_crew_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(60) t(limit1)
		
		v1(evz_deff_dread_burna)
		v2(evz_deff_dread_rokkit)
		v3(evz_deff_dread_shoota)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_ork_doc_evilsunz_spechul_tank_t3(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(1200) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(70) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_looted_predator_zzap_hb_hb)	c1(ork_evilsunz_tx_tankman_01:6)
	)
}

{"doctrine_ork_doc_evilsunz_lifta_drop_t3(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(100) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_battlewagon_liftadrop)			c1(ork_evilsunz_tx_tankman_01:7)
	)	
}


{"doctrine_ork_doc_evilsunz_Morkanaut_t3(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_evilsunz) side(ork) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(125) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(evz_Morkanaut)	c1()
	)
}

;{"doctrine_ork_doc_evilsunz_gorkanaut_t3(ork)"	
;	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
;		d(LV40k_ork_evilsunz) side(ork) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(125) t()
;		package(LV40k) side_mp(-orks/evilsunz) 
;		
;		v(evz_gorkanaut)	c1()
;	)
;}
