
; ======================== WEAPON PRICING ========================]

(Define "SMS_None" 						{cost (+ %cost1 %cost2  0)})

(Define "SMS_Shotgun" 					{cost (+ %cost1 %cost2  5.25)})

(Define "SMS_Bolter" 					{cost (+ %cost1 %cost2  10)})
(Define "SMS_Bolter_C_Flamer" 			{cost (+ %cost1 %cost2  15)})
(Define "SMS_Bolter_C_Plasma" 			{cost (+ %cost1 %cost2  20)})
(Define "SMS_Bolter_C_Melta" 			{cost (+ %cost1 %cost2  20)})
(Define "SMS_Bolter_Stalker" 			{cost (+ %cost1 %cost2  25)})
(Define "SMS_Bolter_Master" 			{cost (+ %cost1 %cost2  30)})
(Define "SMS_Stormbolter" 				{cost (+ %cost1 %cost2  30)})

(Define "SMS_Grenade_Launcher" 			{cost (+ %cost1 %cost2  17.5)})
(Define "SMS_Sniper_Rifle" 				{cost (+ %cost1 %cost2  35.0)})

(Define "SMS_Plasmagun"					{cost (+ %cost1 %cost2  15)})
(Define "SMS_Meltagun" 					{cost (+ %cost1 %cost2  20)})
(Define "SMS_Flamer" 					{cost (+ %cost1 %cost2  20)})
(Define "SMS_Flamer_Heavy"				{cost (+ %cost1 %cost2  25)})
(Define "SMS_Volkite_Caliver"			{cost (+ %cost1 %cost2  30)})
(Define "SMS_Rocket_Launcher" 			{cost (+ %cost1 %cost2  50)})

(Define "SMS_Bolter_Rifle" 				{cost (+ %cost1 %cost2  15)})	; // <- Primaris - Faster firing bolter
(Define "SMS_Plasma_Incinerator" 		{cost (+ %cost1 %cost2  20)})	; // <- Primaris - More damage

; // Devastators
(Define "SMS_Heavybolter" 				{cost (+ %cost1 %cost2  45)})	; 3x -> 120mp
(Define "SMS_Lascannon" 				{cost (+ %cost1 %cost2  55)})	; 3x -> 150mp
(Define "SMS_Plasmacannon" 				{cost (+ %cost1 %cost2  60)})	; 3x -> 165mp
(Define "SMS_Multimelta" 				{cost (+ %cost1 %cost2  70)})	; 3x -> 180mp
(Define "SMS_Assaultcannon" 			{cost (+ %cost1 %cost2  55)})	; Terminators

; // Melee 	
(Define "SMS_Chainsword"				{cost (+ %cost1 %cost2  7.5)})
(Define "SMS_Powerfist"					{cost (+ %cost1 %cost2  10)})
(Define "SMS_Powersword"				{cost (+ %cost1 %cost2  10)})
(Define "SMS_LightningClaw"				{cost (+ %cost1 %cost2  15)})
(Define "SMS_Thunderhammer"				{cost (+ %cost1 %cost2  20)})

; ================================================ SOLDIER PRICING ================================================

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 0] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "SMS_Serf"				
	("sc_inf_tier0"		period(early) side(SMS))	
	("SMS_%wpn" cost1(2.5) cost2(0))
)		

(Define "SMS_Servitor"				
	("sc_inf_tier4"		period(early) side(SMS))	
	("SMS_%wpn" cost1(10.0) cost2(0))
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 1] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "SMS_Scouts"				
	("sc_inf_tier4"		period(early) side(SMS))					
	("SMS_%wpn" cost1(7.5) cost2(0))
)

(Define "SMS_Scouts_H"				
	("sc_inf_tier6"		period(early) side(SMS))					
	("SMS_%wpn" cost1(10) cost2(0))
)

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 2] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "SMS_Devastator"		
	("sc_inf_tier7"		period(early) side(SMS))
	("SMS_%wpn" cost1(30) cost2(0))
)	

(Define "SMS_Devastator_SGT"		
	("sc_inf_tier9"		period(early) side(SMS))
	("SMS_%wpn" cost1(35) cost2(0))
)	

(Define "SMS_Marine"		
	("sc_inf_tier6"		period(early) side(SMS))
	("SMS_%wpn" cost1(30) cost2(0))
)	

(Define "SMS_Marine_SGT"		
	("sc_inf_tier9"		period(early) side(SMS))
	("SMS_%wpn" cost1(30) cost2(0))
)	
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 3] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "SMS_Intercessor"		
	("sc_inf_tier6"		period(early) side(SMS))
	("SMS_%wpn" cost1(35.0) cost2(0))
)	

(Define "SMS_Intercessor_SGT"		
	("sc_inf_tier9"		period(early) side(SMS))
	("SMS_%wpn" cost1(35.0) cost2(0))
)	

(Define "SMS_Veteran"		
	("sc_inf_tier7"		period(early) side(SMS))
	("SMS_%wpn" cost1(42.5) cost2(0))
)	

(Define "SMS_Veteran_SGT"		
	("sc_inf_tier10"		period(early) side(SMS))
	("SMS_%wpn" cost1(47.5) cost2(0))
)	

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 4] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "SMS_Sternguard"		
	("sc_inf_tier9"		period(early) side(SMS))
	("SMS_%wpn" cost1(50.0) cost2(0))
)	

(Define "SMS_Terminator"				
	("sc_inf_tier10"		period(early) side(SMS))
	("SMS_%wpn" cost1(70.0)  cost2(0))
)	

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER SPECIAL] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "SMS_Commander"				
	("sc_inf_tier_cx"	period(early) side(SMS) cpm(-30) cwm(10))	; // BUZZ: <- Force Commander Increases CP
	("SMS_%wpn" cost1(225)  cost2(0))
)	

(Define "SMS_Librarian"				
	("sc_inf_tier9"		period(early) side(SMS))
	("SMS_%wpn" cost1(175)  cost2(0))
)	

(Define "SMS_Chaplain"				
	("sc_inf_tier_cx"	period(early) side(SMS) cpm(10.0) cwm(20))	; // BUZZ: <- Chaplain has massive CW
	("SMS_%wpn" cost1(150)  cost2(0))
)	

(Define "SMS_Techmarine"				
	("sc_inf_tier9"		period(early) side(SMS))
	("SMS_%wpn" cost1(150)  cost2(0))
)	

(Define "SMS_Apothecary"				
	("sc_inf_tier9"		period(early) side(SMS))
	("SMS_%wpn" cost1(125)  cost2(0))
)	

(Define "Marine_Tankman"	
	("sc_inf_tier_cx"	period(early) side(SMS) cpm(0.0) cwm(1.0))
	("SMS_%wpn" cost1(0)  cost2(0))		
)		

; ======================== BREED INFANTRY ========================]

; // [SPECIAL - Deathwatch]
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_01"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_02"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_03"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_04"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_05"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_06"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_07"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_08"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_09"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_10"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_11"					("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/dw/t1_tactical/sm_deathwatch_t1_12"					("SMS_Marine" wpn(Bolter))}

; // [SPECIAL - Ultramar Auxilia]
{"[SC_DLC_LV40k]/[MP]/-ig/ultramar/t1_legionary/ig_ultramar_t1_01"				("SMS_Serf" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-ig/ultramar/t1_legionary/ig_ultramar_t1_02"				("SMS_Serf" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-ig/ultramar/t1_legionary/ig_ultramar_t1_03"				("SMS_Serf" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-ig/ultramar/t1_legionary/ig_ultramar_t1_04"				("SMS_Serf" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-ig/ultramar/t1_legionary/ig_ultramar_t1_sq_01"			("SMS_Serf" wpn(None))}

; // [SCOUTS]
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_tactical/sm_ultramarines_t1_01"			("SMS_Scouts" wpn(Shotgun))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_tactical/sm_ultramarines_t1_02"			("SMS_Scouts" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_tactical/sm_ultramarines_t1_03"			("SMS_Scouts" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_tactical/sm_ultramarines_t1_04"			("SMS_Scouts" wpn(Plasmagun))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_tactical/sm_ultramarines_t1_05"			("SMS_Scouts" wpn(Bolter_Stalker))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_tactical/sm_ultramarines_t1_sq_01"		("SMS_Scouts" wpn(Bolter))}

{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_heavy/sm_ultramarines_t1_06"			("SMS_Scouts_H" wpn(Grenade_Launcher))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_heavy/sm_ultramarines_t1_07"			("SMS_Scouts_H" wpn(Flamer))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_heavy/sm_ultramarines_t1_08"			("SMS_Scouts_H" wpn(Meltagun))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_heavy/sm_ultramarines_t1_09"			("SMS_Scouts_H" wpn(Rocket_Launcher))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T1_scouts_heavy/sm_ultramarines_t1_10"			("SMS_Scouts_H" wpn(Sniper_Rifle))}	

; // [Tacticals]
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_01"			("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_02"			("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_03"			("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_04"			("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_05"			("SMS_Marine" wpn(Plasmagun))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_06"			("SMS_Marine" wpn(Bolter_Stalker))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_07"			("SMS_Marine" wpn(Meltagun))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_08"			("SMS_Marine" wpn(Rocket_Launcher))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_sq_01"		("SMS_Marine_SGT" wpn(Chainsword))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_tactical/sm_ultramarines_t2_sq_02"		("SMS_Marine_SGT" wpn(Chainsword))}

; // [Devastator]
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_devastator/sm_ultramarines_t2_15"		("SMS_Devastator" wpn(Heavybolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_devastator/sm_ultramarines_t2_16"		("SMS_Devastator" wpn(Lascannon))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_devastator/sm_ultramarines_t2_17"		("SMS_Devastator" wpn(Plasmacannon))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_devastator/sm_ultramarines_t2_18"		("SMS_Devastator" wpn(Multimelta))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_devastator/sm_ultramarines_t2_sq_05"	("SMS_Devastator_SGT" wpn(Heavybolter))}

; // [Assault]
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_assault/sm_ultramarines_t2_09"			("SMS_Marine" wpn(Chainsword))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_assault/sm_ultramarines_t2_10"			("SMS_Marine" wpn(Flamer))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_assault/sm_ultramarines_t2_11"			("SMS_Marine" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_assault/sm_ultramarines_t2_12"			("SMS_Marine" wpn(Rocket_Launcher))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_assault/sm_ultramarines_t2_13"			("SMS_Marine" wpn(Plasmagun))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_assault/sm_ultramarines_t2_14"			("SMS_Marine" wpn(Meltagun))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_assault/sm_ultramarines_t2_sq_03"		("SMS_Marine_SGT" wpn(Powersword))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T2_marine_assault/sm_ultramarines_t2_sq_04"		("SMS_Marine_SGT" wpn(Powersword))}

; // [Tacticals Veterans]
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T3_veteran_tactical/sm_ultramarines_t3_01"		("SMS_Veteran" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T3_veteran_tactical/sm_ultramarines_t3_02"		("SMS_Veteran" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T3_veteran_tactical/sm_ultramarines_t3_03"		("SMS_Veteran" wpn(Bolter))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T3_veteran_tactical/sm_ultramarines_t3_04"		("SMS_Veteran" wpn(Bolter_C_Melta))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T3_veteran_tactical/sm_ultramarines_t3_05"		("SMS_Veteran" wpn(Plasmagun))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T3_veteran_tactical/sm_ultramarines_t3_06"		("SMS_Veteran" wpn(Rocket_Launcher))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T3_veteran_tactical/sm_ultramarines_t3_sq_01"		("SMS_Veteran_SGT" wpn(Powersword))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T3_veteran_tactical/sm_ultramarines_t3_sq_02"		("SMS_Veteran_SGT" wpn(Stormbolter))}

; // [Primaris Tactical]
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T4_intercessors/sm_ultramarines_t4_01"			("SMS_Intercessor" wpn(Bolter_Rifle))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T4_intercessors/sm_ultramarines_t4_02"			("SMS_Intercessor" wpn(Bolter_Rifle))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T4_intercessors/sm_ultramarines_t4_sq_01"			("SMS_Intercessor_SGT" wpn(Chainsword))}

; // [Sternguard]
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T5_sternguard/sm_ultramarines_t5_01"				("SMS_Sternguard" wpn(Bolter_Master))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T5_sternguard/sm_ultramarines_t5_02"				("SMS_Sternguard" wpn(Rocket_Launcher))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T5_sternguard/sm_ultramarines_t5_03"				("SMS_Sternguard" wpn(Plasmagun))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T5_sternguard/sm_ultramarines_t5_04"				("SMS_Sternguard" wpn(Volkite_Caliver))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/T5_sternguard/sm_ultramarines_t5_sq_01"			"SMS_Sternguard" wpn(Thunderhammer))}

; // [TX Specialists]															; do not consider the weapon prices for heroes
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_chaplain_01"					("SMS_Chaplain" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_commander_01"					("SMS_Commander" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_medic_01"						("SMS_Apothecary" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_psyker_01"						("SMS_Librarian" wpn(None))}		
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_techmarine_01"					("SMS_Techmarine" wpn(None))}

{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_tankman_01"					("Marine_Tankman" wpn(None))}	
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_tankman_02"					("Marine_Tankman" wpn(None))}

{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_servitor_01"					("SMS_Servitor" wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_servitor_02"					("SMS_Servitor" wpn(Heavybolter))}		; <- gun servitor
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_servitor_03"					("SMS_Servitor" wpn(Plasmacannon))}		; <- gun servitor
{"[SC_DLC_LV40k]/[MP]/-sm/UMS/sm_ultramarines_tx_servitor_04"					("SMS_Servitor" wpn(Multimelta))}		; <- gun servitor

; ======================== FAUNA INFANTRY ========================]

; // BUZZ: Terminator "_2" is always the sergeant!

{"HI_term_assaultcannon_UMS_1"	("SMS_Terminator" wpn(Assaultcannon))}
{"HI_term_assaultcannon_UMS_2"	("SMS_Terminator" wpn(Assaultcannon))}

{"HI_term_commander_ac_UMS_1"	("SMS_Commander" wpn(Assaultcannon))}
{"HI_term_commander_hf_UMS_1"	("SMS_Commander" wpn(Flamer_Heavy))}
{"HI_term_commander_sb_UMS_1"	("SMS_Commander" wpn(Stormbolter))}
{"HI_term_commander_th_UMS_1"	("SMS_Commander" wpn(Thunderhammer))}

{"HI_term_heavyflamer_UMS_1"	("SMS_Terminator" wpn(Flamer_Heavy))}
{"HI_term_heavyflamer_UMS_2"	("SMS_Terminator" wpn(Flamer_Heavy))}

{"HI_term_stormbolter_UMS_1"	("SMS_Terminator" wpn(Stormbolter))}
{"HI_term_stormbolter_UMS_2"	("SMS_Terminator" wpn(Stormbolter))}

{"HI_term_thunderhammer_UMS_1"	("SMS_Terminator" wpn(Thunderhammer))}
{"HI_term_thunderhammer_UMS_2"	("SMS_Terminator" wpn(Thunderhammer))}

; ======================== VEHICLES ========================]

{"UMS_thunderfire"								("sc_unit_tier_cx"	period(early) side(sms) cpm(5.0)	cwm(1.0) cost(150))}		; <- support auto gun

; // Land Speeder
{"UMS_landspeeder_HB_heavyflamer"				("sc_unit_tier_cx"	period(early) side(sms) cpm(8)	cwm(8.0) cost(130))}
{"UMS_landspeeder_HB_multimelta"				("sc_unit_tier_cx"	period(early) side(sms) cpm(8)	cwm(8.0) cost(150))}
{"UMS_landspeeder_MM_assaultcannon"				("sc_unit_tier_cx"	period(early) side(sms) cpm(10)	cwm(8.0) cost(175))}
{"UMS_landspeeder_HB_rocketpods"				("sc_unit_tier_cx"	period(early) side(sms) cpm(14)	cwm(8.0) cost(225))}
{"UMS_landspeeder_HB_multimelta_rocketpods"		("sc_unit_tier_cx"	period(early) side(sms) cpm(14)	cwm(8.0) cost(250))}

; // Dreadnoughts T1
{"ums_dread_std_assaultcannon"			("sc_unit_tier_cx"	period(early) side(sms) cpm(20)	cwm(8.0) cost(320))}
{"ums_dread_hel_assaultcannon"			("sc_unit_tier_cx"	period(early) side(sms) cpm(20)	cwm(8.0) cost(375))}

; // Dreadnoughts T2
{"ums_dread_std_inferno"				("sc_unit_tier_cx"	period(early) side(sms) cpm(24)	cwm(10.0) cost(400))}
{"ums_dread_std_heavybolter"			("sc_unit_tier_cx"	period(early) side(sms) cpm(24)	cwm(10.0) cost(425))}
{"ums_dread_STD_multimelta"				("sc_unit_tier_cx"	period(early) side(sms) cpm(22)	cwm(9.0) cost(475))}
{"ums_dread_std_autocannon"				("sc_unit_tier_cx"	period(early) side(sms) cpm(24)	cwm(10.0) cost(500))}
{"ums_dread_std_plasmacannon"			("sc_unit_tier_cx"	period(early) side(sms) cpm(24)	cwm(10.0) cost(500))}

{"ums_dread_std_lascannon"				("sc_unit_tier_cx"	period(early) side(sms) cpm(22)	cwm(9.0) cost(500))}
{"ums_dread_hel_lascannon"				("sc_unit_tier_cx"	period(early) side(sms) cpm(22)	cwm(9.0) cost(520))}

; // Dreadnoughts T3
{"ums_dread_irc_hurricane"				("sc_unit_tier_cx"	period(early) side(sms) cpm(25)	cwm(10.0) cost(600))}

; // Dreadnoughts Hero
{"ums_dread_ven_assaultcannon"			("sc_unit_tier_cx"	period(early) side(sms) cpm(25)	cwm(15.0) cost(600))}
{"ums_dread_ven_plasmacannon"			("sc_unit_tier_cx"	period(early) side(sms) cpm(25)	cwm(15.0) cost(675))}

; // RHINOS
{"ums_rhino_u"							("sc_unit_tier_cx"	period(early) side(ums) cpm(9) cwm(3.0) cost(50))}
{"ums_rhino_u_pintle"					("sc_unit_tier_cx"	period(early) side(ums) cpm(12) cwm(3.0) cost(125))}
{"ums_rhino_u_sb"						("sc_unit_tier_cx"	period(early) side(ums) cpm(12) cwm(3.0) cost(125))}

{"ums_rhino_h"							("sc_unit_tier_cx"	period(early) side(ums) cpm(12) cwm(5.0) cost(150))}
{"ums_rhino_h_pintle"					("sc_unit_tier_cx"	period(early) side(ums) cpm(15) cwm(5.0) cost(150))}
{"ums_rhino_h_sb"						("sc_unit_tier_cx"	period(early) side(ums) cpm(15) cwm(5.0) cost(150))}
{"ums_rhino_h_hkm"						("sc_unit_tier_cx"	period(early) side(ums) cpm(15) cwm(5.0) cost(200))}

{"ums_rhino_vindicator"					("sc_unit_tier_cx"	period(early) side(ums) cpm(32) cwm(8.0) cost(720))}
{"ums_rhino_damocles"					("sc_unit_tier_cx"	period(early) side(ums) cpm(-30) cwm(10.0) cost(400))}		; <- command tank - reduces CP - More CW

; // RAZORBACK IFV
{"ums_razorback_flamer"					("sc_unit_tier_cx"	period(early) side(sms) cpm(20) cwm(6.0) cost(175))}
{"ums_razorback_hb"						("sc_unit_tier_cx"	period(early) side(sms) cpm(20) cwm(6.0) cost(200))}		
{"ums_razorback_lascannon"				("sc_unit_tier_cx"	period(early) side(sms) cpm(26) cwm(6.0) cost(375))}

; // Predator
{"ums_predator_autocannon_hb_hb"		("sc_unit_tier_cx"	period(early) side(sms) cpm(30) cwm(9.0) cost(500))}
{"ums_predator_plasmacannon_hb_hb"		("sc_unit_tier_cx"	period(early) side(sms) cpm(30) cwm(9.0) cost(600))}
{"ums_predator_annihilator_lc_lc"		("sc_unit_tier_cx"	period(early) side(sms) cpm(30) cwm(9.0) cost(700))}		

; // Whirlwind - Support Vehicles
{"ums_whirlwind_stalker"				("sc_unit_tier_cx"	period(early) side(sms) cpm(24) cwm(9.0) cost(320))}
{"ums_whirlwind_hunter"					("sc_unit_tier_cx"	period(early) side(sms) cpm(30) cwm(9.0) cost(750))}	; <- giant AA missile - Can one shot a baneblade from the sides.
{"ums_whirlwind_artillery"				("sc_unit_tier_cx"	period(early) side(sms) cpm(35) cwm(9.0) cost(800))}

; // Land-Raider
{"UMS_landraider_prometheus"			("sc_unit_tier_cx"	period(early) side(sms) cpm(-50) cwm(20.0) cost(1000))}	; <- Command Tank - Can call orbital strikes

{"UMS_landraider_redeemer"				("sc_unit_tier_cx"	period(early) side(sms) cpm(60) cwm(15.0) cost(1200))}	; <- Inferno Flamers
{"UMS_landraider_crusader"				("sc_unit_tier_cx"	period(early) side(sms) cpm(60) cwm(15.0) cost(1200))}	; <- Fuckton of Heavybolters
{"UMS_landraider_phobos"				("sc_unit_tier_cx"	period(early) side(sms) cpm(60) cwm(15.0) cost(1400))}	; <- Standard Dawn of War Land raider

{"UMS_landraider_helios"				("sc_unit_tier_cx"	period(early) side(sms) cpm(70) cwm(15.0) cost(1600))}	; <- MLRS Artillery
{"UMS_landraider_ares"					("sc_unit_tier_cx"	period(early) side(sms) cpm(70) cwm(20.0) cost(1500))}	; <- Dark Angels very own variant (Demolisher)
{"UMS_landraider_terminus"				("sc_unit_tier_cx"	period(early) side(sms) cpm(70) cwm(20.0) cost(1700))}	; <- Ultramarines very own variant (Fuckton of lascannons)

; // Fellblades
; [...]

; // Knights
{"freeblade_knight_paladin_1"			("sc_unit_tier_cx"	period(early) side(ums) cpm(60) cwm(25.0) cost(1500))}	; battlecannon + Chainsword
{"freeblade_knight_warden_1"			("sc_unit_tier_cx"	period(early) side(ums) cpm(60) cwm(25.0) cost(1650))}	; rocket + gatling + Chainsword
{"freeblade_knight_errant_1"			("sc_unit_tier_cx"	period(early) side(ums) cpm(60) cwm(25.0) cost(1800))}	; thermal cannon + Chainsword
{"freeblade_knight_crusader_1"			("sc_unit_tier_cx"	period(early) side(ums) cpm(60) cwm(25.0) cost(1900))}	; gatling + gatling + rocket