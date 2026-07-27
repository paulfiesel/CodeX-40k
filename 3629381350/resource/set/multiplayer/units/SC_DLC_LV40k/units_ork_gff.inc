
; TIER CLASSIFICATION:
; 0-180s - ~~TIER 1			3m
; 180s - 600s - ~~TIER 2	3m - 10m
; 600s - 1200s - ~~TIER 3	10m - 20m
; +1200s - ~~TIER 4			20m onwards

; ================================================================================================================================ ;
; Doctrine Tab
; ================================================================================================================================ ;

; T1 cd300-480		ci180 
; T2 cd720-900		ci300
; T3 cd1200-1500	ci480

; Groups are shared

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_ork_doc_goffs_slugga_mob_t1(ork)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(10) t()	
		
		c1(HI_tyr_hormagaunt_kraken_2:32) 
	)
}

{"doctrine_ork_doc_goffs_Shoota_mob_t1(ork)"	
	("sc_squad_vehicle_x2_with5types_doc" smin(1) smax(1) 			
		d(LV40k_ork_goffs) side(ork) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(40) t(limit2)
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v1(gff_Wartrukk) cv1a(ork_goffs_tx_tankman_01:2)	cv1b(t1_boyz/ork_goffs_t1_01:2) cv1c(t1_boyz/ork_goffs_t1_02:2) cv1d(t1_boyz/ork_goffs_t1_03:2) cv1e(t1_boyz/ork_goffs_t1_04:2) 
		v2(gff_Wartrukk) cv2a(ork_goffs_tx_tankman_01:2)	cv2b(t1_boyz/ork_goffs_t1_01:2) cv2c(t1_boyz/ork_goffs_t1_02:2) cv2d(t1_boyz/ork_goffs_t1_03:2) cv2e(t1_boyz/ork_goffs_t1_04:2) 
	)
}

{"doctrine_ork_doc_goffs_Rokkit_Gitz_t1(ork)"	
	("sc_vehicle_crew4types_doc" smin(1) smax(1) 		
		d(LV40k_ork_goffs) side(ork) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(45) t(limit1a)
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(lv40k_mp_call_ork_stormboyz_squad_2)
		c1(t1_boyz/ork_goffs_t2_04:15)	
		c2(t1_boyz/ork_goffs_t2_05:3)
		c3(t1_boyz/ork_goffs_t2_06:3)
		c4(t3_nobz/ork_goffs_t3_04:3)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_ork_doc_goffs_Need_Dakka_t2(ork)"	
	("sc_vehicle_crew4types_doc" smin(1) smax(1) 			
		d(LV40k_ork_goffs) side(ork) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(45) t(limit2a)
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(gff_Wartrukk_burna) c1(ork_goffs_tx_tankman_01:2) c2(t3_nobz/ork_goffs_t3_09:4) c3(t3_nobz/ork_goffs_t3_10:3) c4(t3_nobz/ork_goffs_t3_11:1) 
	)
}

{"doctrine_ork_doc_goffs_Gather_da_Boyz_t2(ork)"	
	("sc_squad_vehicle_x2_doc" smin(1) smax(1) 			
		d(LV40k_ork_goffs) side(ork) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(55) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v1(gff_gunwagon_kannon)	cv1(ork_goffs_tx_tankman_01:3)
		v2(gff_gunwagon_kannon)	cv2(ork_goffs_tx_tankman_01:3)
	)
}

{"doctrine_ork_doc_goffs_da_big_nobz_t2(ork)"	
	("sc_vehicle_x3_no_crew_doc" smin(1) smax(1) 			
		d(LV40k_ork_goffs) side(ork) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(60) t(limit1)
		
		v1(gff_deff_dread_burna)
		v2(gff_deff_dread_rokkit)
		v3(gff_deff_dread_shoota)
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_ork_doc_goffs_Battlewagon_t3(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_goffs) side(ork) period(early) cd(1200) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(70) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(gff_looted_predator_zzap_zp_zp)	c1(ork_goffs_tx_tankman_01:6)
	)
}

{"doctrine_ork_doc_goffs_kill_tank_t3(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_goffs) side(ork) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(110) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(gff_battlewagon_liftadrop)			c1(ork_goffs_tx_tankman_01:7)
	)	
}

{"doctrine_ork_doc_goffs_Waaagh_t3(ork)"	
	("sc_vehicle_crew1types_doc" smin(1) smax(1) 			
		d(LV40k_ork_goffs) side(ork) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(135) t()
		package(LV40k) side_mp(-orks/evilsunz) 
		
		v(gff_Morkanaut)	c1()
	)
}