
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

{"doctrine_tyr_doc_kraken_ripperswarm_t1(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(10) t()	
		
		c1(HI_tyr_hormagaunt_kraken_2:32) 
	)
}

{"doctrine_tyr_doc_kraken_warrior_squad_t1(tyr)"	
	("sc_inf_squad_with2types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(20) t()	
		package(LV40k) side_mp(-tyr/kraken) 
	
		c1(t0_gaunt/tyr_kraken_t0_03:16) 
		c2(t0_gaunt/tyr_kraken_t0_04:8)
	)
}

{"doctrine_tyr_doc_kraken_ravener_infiltrator_t1(tyr)"	
	("sc_inf_squad_with3types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(300) ci(180) g(doctrine_t1) b(doctrine) scf(0) cost(35) t()	
		package(LV40k) side_mp(-tyr/kraken) 
	
		c1(t1_warrior/tyr_kraken_t1_01:3) 
		c2(t1_warrior/tyr_kraken_t1_02:3) 
		c3(t1_warrior/tyr_kraken_t1_03:3) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_tyr_doc_kraken_zoanthropes_t2(tyr)"	
	("sc_vehicle_crew4types_doc" smin(1) smax(1) 			
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(45) t()
		package(LV40k) side_mp(-tyr/kraken) 
		
		v(lv40k_mp_call_tyr_mycetic_squad_1)
		c1(t0_gaunt/tyr_kraken_t0_02:15) 
		c2(t1_warrior/tyr_kraken_t1_01:2) 
		c3(t1_warrior/tyr_kraken_t1_02:2) 
		c4(t1_warrior/tyr_kraken_t1_03:2) 
	)
}

{"doctrine_tyr_doc_kraken_vanguard_t2(tyr)"	
	("sc_fauna_squad_with2types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(50) t()	
		
		c1(HI_tyr_hiveguard_kraken_shk_1:2) 
		c2(HI_tyr_hiveguard_kraken_imp_1:2) 
	)
}

{"doctrine_tyr_doc_kraken_siege_Force_t2(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(720) ci(300) g(doctrine_t2) b(doctrine) scf(0) cost(60) t(limit1b)	
		
		c1(hi_tyr_tervigon_kraken_1:2) 
	)
}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ TIER 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{"doctrine_tyr_doc_kraken_assault_force_t3(tyr)"	
	("sc_fauna_squad_with1types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(75) t()
		
		c1(HI_tyr_oldoneeye_kraken_1:1) 
	)
}

{"doctrine_tyr_doc_kraken_Tyrant_Patrol_t3(tyr)"	
	("sc_inf_squad_with6types_doc" smin(1) smax(1)  		
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(60) t()		
		package(LV40k) side_mp(-tyr/kraken) 
	
		c1(t0_gaunt/tyr_kraken_t0_03:16) 
		c2(t0_gaunt/tyr_kraken_t0_04:12) 
		c3(t1_warrior/tyr_kraken_t1_04:3) 
		c4(t1_warrior/tyr_kraken_t1_03:3) 
		c5(t1_warrior/tyr_kraken_t1_03:3) 
		c6(t2_zoanthrope/tyr_kraken_t2_01:1) 
	)
}

{"doctrine_tyr_doc_kraken_tyrannofex_t3(tyr)"	
	("sc_fauna_squad_with3types_doc" smin(1) smax(1) 	
		d(LV40k_tyr_kraken) side(tyr) period(early) cd(1500) ci(480) g(doctrine_t3) b(doctrine) scf(0) cost(100) t()
		
		c1(HI_tyr_carnifex_melee_kraken_2:1) 
		c2(HI_tyr_carnifex_vmcn_kraken_1:1) 
		c3(HI_tyr_carnifex_brbstr_kraken_1:1) 
	)
}