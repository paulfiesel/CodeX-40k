
; ======================== WEAPON PRICING ========================]

(Define "Tyr_None" 					{cost (+ %cost1 %cost2  0)})

(Define "Tyr_Spinefist" 			{cost (+ %cost1 %cost2  0)})
(Define "Tyr_Fleshborer" 			{cost (+ %cost1 %cost2  1.0)})
(Define "Tyr_Devourer" 				{cost (+ %cost1 %cost2  5.0)})
(Define "Tyr_Deathspitter" 			{cost (+ %cost1 %cost2  12.0)})		; <- Tyranid Plasmagun
(Define "Tyr_Venom_Cannon" 			{cost (+ %cost1 %cost2  35)})		; <- Anti-Tank
(Define "Tyr_Strangler" 			{cost (+ %cost1 %cost2  30)})		; <- Supressive Grenade Launcher

(Define "Tyr_Impaler" 				{cost (+ %cost1 %cost2  45)})		; <- Assault Cannon (Minigun)
(Define "Tyr_Shockcannon" 			{cost (+ %cost1 %cost2  95)})		; <- Anti-Tank Lascannon

(Define "Tyr_Devourer_Big" 			{cost (+ %cost1 %cost2  75)})		; <- Quad Heavy Anti-Infantry Gun
(Define "Tyr_Strangler_Big" 		{cost (+ %cost1 %cost2  125)})		; <- Supressive Grenade Launcher
(Define "Tyr_Venom_Cannon_Big" 		{cost (+ %cost1 %cost2  200)})		; <- Anti-Tank

; // Melee
(Define "Tyr_Bonesword" 			{cost (+ %cost1 %cost2  10)})		
	
; ================================================ SOLDIER PRICING ================================================

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 0] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Tyr_Rippers"				
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(1.25) cwm(0))	; // BUZZ: <- numerous and free, but have long cooldowns between buys and cannot capture points	
	("Tyr_%wpn" cost1(0) cost2(0))
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 1] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Tyr_Gaunts"				
	("sc_inf_tier1"		period(early) side(tyr))					
	("Tyr_%wpn" cost1(2.0) cost2(0))
)

(Define "Tyr_Gaunts_Adapted"				
	("sc_inf_tier1"		period(early) side(tyr))					
	("Tyr_%wpn" cost1(4.0) cost2(0))
)

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 2] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Tyr_Warriors"				
	("sc_inf_tier6"		period(early) side(tyr))					
	("Tyr_%wpn" cost1(15) cost2(0))
)

(Define "Tyr_Warriors_Adapted"				
	("sc_inf_tier7"		period(early) side(tyr))					
	("Tyr_%wpn" cost1(20) cost2(0))
)

(Define "Tyr_Raveners"		
	("sc_inf_tier5"		period(early) side(tyr))
	("Tyr_%wpn" cost1(20.0) cost2(0))
)	

(Define "Tyr_Raveners_Alpha"		
	("sc_inf_tier7"		period(early) side(tyr))
	("Tyr_%wpn" cost1(85.0) cost2(0))
)	

(Define "Tyr_Biovores_1"		
	("sc_inf_tier6"		period(early) side(tyr))
	("Tyr_%wpn" cost1(50.0) cost2(0))
)	

(Define "Tyr_Biovores_2"		
	("sc_inf_tier7"		period(early) side(tyr))
	("Tyr_%wpn" cost1(75.0) cost2(0))
)	


; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 3] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Tyr_Tervigon_1"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(24) cwm(8.0))	
	("Tyr_%wpn" cost1(240)  cost2(0))
)		

(Define "Tyr_Venomthropes"		
	("sc_inf_tier6"		period(early) side(tyr))
	("Tyr_%wpn" cost1(50.0) cost2(0))
)	

(Define "Tyr_Genestealers"		
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(3) cwm(5.0))
	("Tyr_%wpn" cost1(12) cost2(0))
)	

(Define "Tyr_Hiveguard_1"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(9.0) cwm(4.0))	
	("Tyr_%wpn" cost1(75)  cost2(0))
)		

(Define "Tyr_Hiveguard_2"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(12.0) cwm(4.0))	
	("Tyr_%wpn" cost1(80)  cost2(0))
)		


; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 4] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Tyr_Exocrine"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(32.0) cwm(6.0))	
	("Tyr_%wpn" cost1(350)  cost2(0))
)		

(Define "Tyr_Carnifex_1"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(20) cwm(10.0))	
	("Tyr_%wpn" cost1(200)  cost2(0))
)		

(Define "Tyr_Carnifex_2"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(25) cwm(12.5))	
	("Tyr_%wpn" cost1(200)  cost2(0))
)		

(Define "Tyr_Carnifex_3"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(30) cwm(15.0))	
	("Tyr_%wpn" cost1(200)  cost2(0))
)		

(Define "Tyr_Carnifex_4"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(25) cwm(20.0))	; // <- old one eye
	("Tyr_%wpn" cost1(400)  cost2(0))
)		

(Define "Tyr_Tyrannofex_1"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(40) cwm(20.0))	
	("Tyr_%wpn" cost1(500)  cost2(0))
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER SPECIAL] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Tyr_Sporemine"				
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(0.25) cwm(0))	; // BUZZ: <- Sporemines cannot capture points
	("Tyr_%wpn" cost1(7.5) cost2(0))
)		

(Define "Tyr_Lictor"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(6.0) cwm(0.5))	; // BUZZ: <- Very low CW to prevent sneaky caps.	
	("Tyr_%wpn" cost1(160)  cost2(0))
)		

(Define "Tyr_Warriors_Prime"				
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(-20) cwm(8))	; // BUZZ: <- Increases CP. Minor Tyranid Officer.			
	("Tyr_%wpn" cost1(75.0) cost2(0))
)

(Define "Tyr_Zoanthrope"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(-25) cwm(10))	; // BUZZ: <- Increases CP. Massive capture weight, Officer like.	
	("Tyr_%wpn" cost1(125)  cost2(0))
)		

(Define "Tyr_Tyrant"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(-35) cwm(20))	; // BUZZ: <- Increases CP and Has massive Capture weight.	
	("Tyr_%wpn" cost1(300)  cost2(0))
)		

(Define "Tyr_Swarmlord"	
	("sc_inf_tier_cx"	period(early) side(tyr) cpm(-75) cwm(30))	; // BUZZ: <- Increases CP and Has massive Capture weight.	
	("Tyr_%wpn" cost1(640)  cost2(0))
)		

{"HI_tyr_sporemine_1"	("Tyr_Sporemine" wpn(None))}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
; ######################## // LEVIATHAN
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

; ======================== BREED INFANTRY ========================]

; // [Termagaunts]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_leviathan_t0_01"		{tags "lvl1 lvl2 lvl3"}	("Tyr_Gaunts" wpn(Spinefist))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_leviathan_t0_02"		{tags "lvl1 lvl2 lvl3"}	("Tyr_Gaunts" wpn(Fleshborer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_leviathan_t0_03"		{tags "lvl1 lvl2 lvl3"}	("Tyr_Gaunts" wpn(Devourer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_leviathan_t0_04"		("Tyr_Gaunts_Adapted" wpn(Spinefist))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_leviathan_t0_05"		("Tyr_Gaunts_Adapted" wpn(Fleshborer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_leviathan_t0_06"		("Tyr_Gaunts_Adapted" wpn(Devourer))}

; // [Warriors]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_01"	("Tyr_Warriors" wpn(Devourer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_02"	("Tyr_Warriors" wpn(Venom_Cannon))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_03"	("Tyr_Warriors" wpn(Strangler))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_04"	("Tyr_Warriors" wpn(Deathspitter))}

{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_05"	("Tyr_Warriors_Adapted" wpn(Devourer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_06"	("Tyr_Warriors_Adapted" wpn(Venom_Cannon))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_07"	("Tyr_Warriors_Adapted" wpn(Strangler))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_08"	("Tyr_Warriors_Adapted" wpn(Deathspitter))}

; // Tyranid prime weapons are free.
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_09"	("Tyr_Warriors_Prime" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_10"	("Tyr_Warriors_Prime" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_11"	("Tyr_Warriors_Prime" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_leviathan_t1_12"	("Tyr_Warriors_Prime" wpn(None))}

; // [Zoanthropes]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t2_zoanthrope/tyr_leviathan_t2_01"	("Tyr_Zoanthrope" wpn(None))}

; // [Raveners]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t3_ravener/tyr_leviathan_t3_01"	("Tyr_Raveners" wpn(Deathspitter))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t3_ravener/tyr_leviathan_t3_02"	("Tyr_Raveners_Alpha" wpn(Deathspitter))}

; // [Venomthropes]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t4_venomthrope/tyr_leviathan_t4_01"	("Tyr_Venomthropes" wpn(None))}


; ======================== FAUNA INFANTRY ========================]

; // [Hivenode]
{"HI_tyr_hivenode_leviathan_1"				("Tyr_Gaunts" wpn(None))}

; // [Rippers]
{"HI_tyr_ripperswarm_leviathan_1"			("Tyr_Rippers" wpn(None))}

; // [Hormagaunts]
{"HI_tyr_hormagaunt_leviathan_1"			("Tyr_Gaunts" wpn(None))}
{"HI_tyr_hormagaunt_leviathan_2"			("Tyr_Gaunts_Adapted" wpn(None))}

; // [Warriors]
{"HI_tyr_warrior_tl_leviathan_1"			("Tyr_Warriors" wpn(None))}
{"HI_tyr_warrior_bs_leviathan_1"			("Tyr_Warriors" wpn(Bonesword))}

; // [Genestealers]
{"HI_tyr_genestealer_leviathan_1"			("Tyr_Genestealers" wpn(None))}

; // [Lictors]
{"HI_tyr_lictor_leviathan_1"				("Tyr_Lictor" wpn(None))}

; // [Hive Guards]
{"HI_tyr_hiveguard_leviathan_1"				("Tyr_Hiveguard_1" wpn(None))}
{"HI_tyr_hiveguard_leviathan_imp_1"			("Tyr_Hiveguard_2" wpn(Impaler))}
{"HI_tyr_hiveguard_leviathan_shk_1"			("Tyr_Hiveguard_2" wpn(Shockcannon))}

; // [Carnifex]	- 1 has crushing claws / 2 has dual big devourers
{"HI_tyr_carnifex_melee_leviathan_1"		("Tyr_Carnifex_1" wpn(None))}	
{"HI_tyr_carnifex_melee_leviathan_2"		("Tyr_Carnifex_1" wpn(None))}

{"HI_tyr_hellfex_dev_leviathan_1"			("Tyr_Carnifex_2" wpn(Devourer_Big))}
{"HI_tyr_carnifex_vmcn_leviathan_1"			("Tyr_Carnifex_3" wpn(Venom_Cannon_Big))}
{"HI_tyr_carnifex_brbstr_leviathan_1"		("Tyr_Carnifex_3" wpn(Strangler_Big))}
{"HI_tyr_oldoneeye_leviathan_1"				("Tyr_Carnifex_4" wpn(None))}

; // [Exocrine]
{"HI_tyr_exocrine_leviathan_1"				("Tyr_Exocrine" wpn(None))}
                 
; // [Tyrant/Swarmlord] 
{"HI_tyr_hivetyrant_melee_leviathan_1"		("Tyr_Tyrant" wpn(None))}
{"HI_tyr_hivetyrant_vc_leviathan_1"			("Tyr_Tyrant" wpn(Venom_Cannon_Big))}

{"HI_tyr_swarmlord_leviathan_1"				("Tyr_Swarmlord" wpn(None))}

; // [Tyrannofex/Tervigon] 
{"hi_tyr_tervigon_leviathan_1"				("Tyr_Tervigon_1" wpn(None))}
{"hi_tyr_tyrannofex_leviathan_1"			("Tyr_Tyrannofex_1" wpn(None))}
	
; // [Tyrannofex/Tervigon] 
{"HI_tyr_pyrovore_leviathan_1"				("Tyr_Biovores_1" wpn(None))}
{"HI_tyr_biovore_leviathan_1"				("Tyr_Biovores_2" wpn(None))}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
; ######################## // KRAKEN
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

; ======================== BREED INFANTRY ========================]

; // [Termagaunts]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_kraken_t0_01"		("Tyr_Gaunts" wpn(Spinefist))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_kraken_t0_02"		("Tyr_Gaunts" wpn(Fleshborer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_kraken_t0_03"		("Tyr_Gaunts" wpn(Devourer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_kraken_t0_04"		("Tyr_Gaunts_Adapted" wpn(Spinefist))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_kraken_t0_05"		("Tyr_Gaunts_Adapted" wpn(Fleshborer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t0_gaunt/tyr_kraken_t0_06"		("Tyr_Gaunts_Adapted" wpn(Devourer))}

; // [Warriors]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_01"	("Tyr_Warriors" wpn(Devourer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_02"	("Tyr_Warriors" wpn(Venom_Cannon))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_03"	("Tyr_Warriors" wpn(Strangler))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_04"	("Tyr_Warriors" wpn(Deathspitter))}

{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_05"	("Tyr_Warriors_Adapted" wpn(Devourer))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_06"	("Tyr_Warriors_Adapted" wpn(Venom_Cannon))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_07"	("Tyr_Warriors_Adapted" wpn(Strangler))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_08"	("Tyr_Warriors_Adapted" wpn(Deathspitter))}

; // Tyranid prime weapons are free.
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_09"	("Tyr_Warriors_Prime" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_10"	("Tyr_Warriors_Prime" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_11"	("Tyr_Warriors_Prime" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t1_warrior/tyr_kraken_t1_12"	("Tyr_Warriors_Prime" wpn(None))}

; // [Zoanthropes]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t2_zoanthrope/tyr_kraken_t2_01"	("Tyr_Zoanthrope" wpn(None))}

; // [Raveners]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t3_ravener/tyr_kraken_t3_01"	("Tyr_Raveners" wpn(Deathspitter))}
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t3_ravener/tyr_kraken_t3_02"	("Tyr_Raveners_Alpha" wpn(Deathspitter))}

; // [Venomthropes]
{"[SC_DLC_LV40k]/[MP]/-tyr/leviathan/t4_venomthrope/tyr_kraken_t4_01"	("Tyr_Venomthropes" wpn(None))}


; ======================== FAUNA INFANTRY ========================]

; // [Hivenode]
{"HI_tyr_hivenode_kraken_1"				("Tyr_Gaunts" wpn(None))}

; // [Rippers]
{"HI_tyr_ripperswarm_kraken_1"			("Tyr_Rippers" wpn(None))}

; // [Hormagaunts]
{"HI_tyr_hormagaunt_kraken_1"			("Tyr_Gaunts" wpn(None))}
{"HI_tyr_hormagaunt_kraken_2"			("Tyr_Gaunts_Adapted" wpn(None))}

; // [Warriors]
{"HI_tyr_warrior_tl_kraken_1"			("Tyr_Warriors" wpn(None))}
{"HI_tyr_warrior_bs_kraken_1"			("Tyr_Warriors" wpn(Bonesword))}

; // [Genestealers]
{"HI_tyr_genestealer_kraken_1"			("Tyr_Genestealers" wpn(None))}

; // [Lictors]
{"HI_tyr_lictor_kraken_1"				("Tyr_Lictor" wpn(None))}

; // [Hive Guards]
{"HI_tyr_hiveguard_kraken_1"			("Tyr_Hiveguard_1" wpn(None))}
{"HI_tyr_hiveguard_kraken_imp_1"		("Tyr_Hiveguard_2" wpn(Impaler))}
{"HI_tyr_hiveguard_kraken_shk_1"		("Tyr_Hiveguard_2" wpn(Shockcannon))}

; // [Carnifex]	- 1 has crushing claws / 2 has dual big devourers
{"HI_tyr_carnifex_melee_kraken_1"		("Tyr_Carnifex_1" wpn(None))}	
{"HI_tyr_carnifex_melee_kraken_2"		("Tyr_Carnifex_1" wpn(None))}

{"HI_tyr_hellfex_dev_kraken_1"			("Tyr_Carnifex_2" wpn(Devourer_Big))}
{"HI_tyr_carnifex_vmcn_kraken_1"		("Tyr_Carnifex_3" wpn(Venom_Cannon_Big))}
{"HI_tyr_carnifex_brbstr_kraken_1"		("Tyr_Carnifex_3" wpn(Strangler_Big))}
{"HI_tyr_oldoneeye_kraken_1"			("Tyr_Carnifex_4" wpn(None))}

; // [Exocrine]
{"HI_tyr_exocrine_kraken_1"				("Tyr_Exocrine" wpn(None))}
                 
; // [Tyrant/Swarmlord] 
{"HI_tyr_hivetyrant_melee_kraken_1"		("Tyr_Tyrant" wpn(None))}
{"HI_tyr_hivetyrant_vc_kraken_1"		("Tyr_Tyrant" wpn(Venom_Cannon_Big))}

{"HI_tyr_swarmlord_kraken_1"			("Tyr_Swarmlord" wpn(None))}

; // [Tyrannofex/Tervigon] 
{"hi_tyr_tervigon_kraken_1"				("Tyr_Tervigon_1" wpn(None))}
{"hi_tyr_tyrannofex_kraken_1"			("Tyr_Tyrannofex_1" wpn(None))}
	
