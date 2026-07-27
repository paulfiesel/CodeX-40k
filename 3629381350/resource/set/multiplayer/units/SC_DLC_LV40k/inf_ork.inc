
; ======================== WEAPON PRICING ========================]

(Define "Ork_None" 					{cost (+ %cost1 %cost2  0)})

(Define "Ork_Grot_Blunderbuss" 		{cost (+ %cost1 %cost2  0)})
(Define "Ork_Grot_Blasta" 			{cost (+ %cost1 %cost2  0)})
(Define "Ork_Slugga" 				{cost (+ %cost1 %cost2  1.5)})

(Define "Ork_Stikkbombs" 			{cost (+ %cost1 %cost2  10.0)})		;<- Grenadiers

(Define "Ork_Shoota" 				{cost (+ %cost1 %cost2  5.0)})
(Define "Ork_Spechul_Shoota" 		{cost (+ %cost1 %cost2  5.0)})		;<- Shotgun
(Define "Ork_Kustom_Shoota" 		{cost (+ %cost1 %cost2  10.0)})		;<- ork stormbolter weaker counterpart 
(Define "Ork_Big_Shoota" 			{cost (+ %cost1 %cost2  12.5)})		;<- ork heavybolter weaker counterpart

(Define "Ork_Burna" 				{cost (+ %cost1 %cost2  30)})		

(Define "Ork_Rokkit_Pistol" 		{cost (+ %cost1 %cost2  10)})		;<- Panzerfaust
(Define "Ork_Rokkit_Launcha" 		{cost (+ %cost1 %cost2  20)})		;<- Grenade Launcher/Bazooka Hybrid

(Define "Ork_Deffgun_Dakka" 		{cost (+ %cost1 %cost2  40)})		;<- devastator heavybolter counterpart
(Define "Ork_Deffgun_Beamy" 		{cost (+ %cost1 %cost2  65)})		;<- lascannon counterpart
(Define "Ork_Deffgun_Megablasta" 	{cost (+ %cost1 %cost2  65)})		;<- plasma cannon. 

(Define "Ork_Snazzgun_Dakka" 		{cost (+ %cost1 %cost2  50)})		;<- Flashgitz main weapon
(Define "Ork_Snazzgun_Shootier" 	{cost (+ %cost1 %cost2  70)})		;<- Flashgitz main weapon (Autocannon)
(Define "Ork_Snazzgun_Blastier" 	{cost (+ %cost1 %cost2  100)})		;<- Flashgitz main weapon (Plasma)

; ================================================ SOLDIER PRICING ================================================

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 0] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Ork_Squigs"				
	("sc_inf_tier_cx"	period(early) side(ork) cpm(2) cwm(0))		; // BUZZ: <- Squigs cannot capture points.	
	("Ork_%wpn" cost1(25) cost2(0))
)		

(Define "Ork_Grots"				
	("sc_inf_tier0"		period(early) side(ork))	; // BUZZ: <- Grots are numerous and free, but have long cooldowns between buys and capture points much slower.	
	("Ork_%wpn" cost1(0) cost2(0))
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 1] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Ork_Boys"				
	("sc_inf_tier1"		period(early) side(ork))					
	("Ork_%wpn" cost1(2.5) cost2(0))
)

(Define "Ork_Boys_Lootas"				
	("sc_inf_tier_cx"	period(early) side(ork) cpm(8.0) cwm(2.0))		; // BUZZ: <- lootas are slightly more costly in CP.				
	("Ork_%wpn" cost1(10.0) cost2(0))
)

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 2] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Ork_Boys_Tankbustas"				
	("sc_inf_tier2"		period(early) side(ork))					
	("Ork_%wpn" cost1(5.0) cost2(0))
)

(Define "Ork_Boys_Stormboy"		
	("sc_inf_tier_cx"	period(early) side(ork) cpm(2.5) cwm(0.5))	; // BUZZ: <- Stormboys have low CW rate to balance their ability to be called anywhere.			
	("Ork_%wpn" cost1(5.0) cost2(0))
)	

(Define "Ork_Boys_Ard"		
	("sc_inf_tier3"		period(early) side(ork))
	("Ork_%wpn" cost1(7.5) cost2(0))
)	

(Define "Ork_Boys_Kommandos"	
	("sc_inf_tier_cx"	period(early) side(ork) cpm(3.5) cwm(7))	; // BUZZ: <- Kommandos can capture points really fast, but cost high CP.
	("Ork_%wpn" cost1(10.0)  cost2(0))
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 3] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Ork_Nobs"				
	("sc_inf_tier5"		period(early) side(ork))				
	("Ork_%wpn" cost1(20.0)  cost2(0))
)	

(Define "Ork_Boys_Stormnob"		
	("sc_inf_tier_cx"	period(early) side(ork) cpm(5) cwm(0.5))	; // BUZZ: <- Stormnobs cost more CP.			
	("Ork_%wpn" cost1(30.0) cost2(0))
)	

(Define "Ork_Nobs_Kommandos"	
	("sc_inf_tier_cx"	period(early) side(ork) cpm(5) cwm(9.0))	; // BUZZ: <- Officer hero, Nob Kommando has slightly higher CW
	("Ork_%wpn" cost1(30.0)  cost2(0))
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 4] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Ork_Meganobs"				
	("sc_inf_tier6"		period(early) side(ork))	
	("Ork_%wpn" cost1(80)  cost2(0))
)	

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER SPECIAL] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "Ork_Mekboy"	
	("sc_inf_tier_cx"	period(early) side(ork) cpm(10.0) cwm(1))	; // BUZZ: <- Mekboy has lower CW 
	("Ork_%wpn" cost1(150)  cost2(0))
)		

(Define "Ork_Warboss"	
	("sc_inf_tier_cx"	period(early) side(ork) cpm(-50.0) cwm(25.0))	; // BUZZ: <- Warboss increases CP and has massive Capture weight.	
	("Ork_%wpn" cost1(400)  cost2(0))
)		

(Define "Ork_Boys_Painboy"	
	("sc_inf_tier4"		period(early) side(ork))		
	("Ork_%wpn" cost1(75.0)  cost2(0))
)		

(Define "Ork_Boys_Psyker"	
	("sc_inf_tier_cx"	period(early) side(ork) cpm(10) cwm(5))	; // BUZZ: <- Weirdboys capture points as fast as officers do in vanilla, with the power of the Waaagh they are able to project.
	("Ork_%wpn" cost1(175)  cost2(0))
)		

(Define "Ork_Boys_Tankman"	
	("sc_inf_tankman"		period(early) side(ork))	
	("Ork_%wpn" cost1(0)  cost2(0))		
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
; ######################## // EVILSUNZ
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

; ======================== BREED INFANTRY ========================]

; // [GROTS]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t0_gretchin/ork_evilsunz_t0_01"	("Ork_Grots" wpn(Grot_Blasta))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t0_gretchin/ork_evilsunz_t0_02"	("Ork_Grots" wpn(Grot_Blunderbuss))}



; // [SHOOTAS]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t1_01"	{tags "lvl1 lvl2 lvl3"}	("Ork_Boys" wpn(Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t1_02"	{tags "lvl1 lvl2 lvl3"}	("Ork_Boys" wpn(Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t1_03"	{tags "lvl1 lvl2 lvl3"}	("Ork_Boys" wpn(Big_Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t1_04"	{tags "lvl1 lvl2 lvl3"}	("Ork_Boys" wpn(Shoota))}

; // [TANKBUSTAS]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t1_05"	("Ork_Boys_Tankbustas" wpn(Stikkbombs))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t1_06"	("Ork_Boys_Tankbustas" wpn(Rokkit_Launcha))}

; // [LOOTAS]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t1_07"	("Ork_Boys_Lootas" wpn(Deffgun_Dakka))}

; // [ARDBOYS]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t2_01"	("Ork_Boys_Ard"	wpn(Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t2_02"	("Ork_Boys_Ard"	wpn(Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t2_03"	("Ork_Boys_Ard"	wpn(Big_Shoota))}

; // [STORMBOYZ]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t2_04"	("Ork_Boys_Stormboy"	wpn(Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t2_05"	("Ork_Boys_Stormboy"	wpn(Big_Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t2_06"	("Ork_Boys_Stormboy"	wpn(Stikkbombs))}

; // [KOMMANDO BOYZ]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t2_07"	("Ork_Boys_Kommandos"	wpn(Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t2_08"	("Ork_Boys_Kommandos"	wpn(Spechul_Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t1_boyz/ork_evilsunz_t2_09"	("Ork_Boys_Kommandos"	wpn(Kustom_Shoota))}



; // [NOBS]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_01"	("Ork_Nobs"	wpn(Spechul_Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_02"	("Ork_Nobs"	wpn(Big_Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_03"	("Ork_Nobs"	wpn(Kustom_Shoota))}

; // [STORMNOBS]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_04"	("Ork_Boys_Stormnob"	wpn(Big_Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_05"	("Ork_Boys_Stormnob"	wpn(Kustom_Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_06"	("Ork_Boys_Stormnob"	wpn(Kustom_Shoota))}

; // [KOMMANDO NOBZ]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_07"	("Ork_Nobs_Kommandos"	wpn(Kustom_Shoota))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_08"	("Ork_Nobs_Kommandos"	wpn(Spechul_Shoota))}

; // [FLASHGITZ]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_09"	("Ork_Nobs"	wpn(Snazzgun_Dakka))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_10"	("Ork_Nobs"	wpn(Snazzgun_Shootier))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/t3_nobz/ork_evilsunz_t3_11"	("Ork_Nobs"	wpn(Snazzgun_Blastier))}



; // [ODDBOYZ]
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/ork_evilsunz_tx_at_01"			("Ork_Boys_Lootas"	wpn(Deffgun_Beamy))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/ork_evilsunz_tx_flamer_01"		("Ork_Boys"	wpn(Burna))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/ork_evilsunz_tx_medic_01"		("Ork_Boys_Painboy"	wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/ork_evilsunz_tx_psyker_01"		("Ork_Boys_Psyker"	wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/ork_evilsunz_tx_tankman_01"	("Ork_Boys_Tankman"	wpn(None))}
{"[SC_DLC_LV40k]/[MP]/-orks/evilsunz/ork_evilsunz_tx_mekboy_01"		("Ork_Mekboy"	wpn(None))}


; ======================== FAUNA INFANTRY ========================]

; // [SLUGGABOYZ]
{"HI_orkboy_slugga_evilsunz_1"	("Ork_Boys" wpn(Slugga))}
{"HI_orkboy_ardboy_evilsunz_1"	("Ork_Boys" wpn(None))}

; // [NOBS]
{"HI_orknob_evilsunz_1"			("Ork_Nobs"	wpn(None))}	

{"HI_meganob_evilsunz_1"		("Ork_Meganobs" wpn(None))}	
{"HI_meganob_evilsunz_2"		("Ork_Meganobs" wpn(None))}		

; // [WARBOSS]
{"HI_warboss_evilsunz_1"		("Ork_Warboss" wpn(None))}	

; // [SQUIGS]
{"HI_squigbomb_1"				("Ork_Squigs" wpn(None))}	

; ======================== VEHICLES ========================]

{"temp_ork_76mm_m1927"					("sc_unit_tier_cx"	period(early) side(ork) cpm(3) cwm(1.5) cost(140))}
{"temp_ork_flak_20mm_flakvierling38"	("sc_unit_tier_cx"	period(early) side(ork) cpm(2) cwm(1.0) cost(160))}
{"temp_ork_ammo_box"					("sc_unit_tier_cx"	period(early) side(ork) cpm(0) cwm(1.0) cost(30.0))}

{"evz_ork_mekgun"						("sc_unit_tier_cx"	period(early) side(ork) cpm(4) cwm(3.0) cost(350))}
{"evz_grot_sentry_turret"				("sc_unit_tier_cx"	period(early) side(ork) cpm(0) cwm(1.0) cost(50))}		; // <- Spawned through mekboys

{"evz_grot_tank_shoota"					("sc_unit_tier_cx"	period(early) side(ork) cpm(6) cwm(4.0) cost(80))}		
{"evz_grot_tank_kannon"					("sc_unit_tier_cx"	period(early) side(ork) cpm(7) cwm(4.5) cost(125))}	
{"evz_grot_tank_rokkit"					("sc_unit_tier_cx"	period(early) side(ork) cpm(8) cwm(5.0) cost(150))}		

{"evz_ork_warbike"						("sc_unit_tier_cx"	period(early) side(ork) cpm(4) cwm(4.0) cost(25))}
{"evz_ork_wartrakk"						("sc_unit_tier_cx"	period(early) side(ork) cpm(8) cwm(4.0) cost(175))}		; // <- Light Mortar Tank

; // Burnas and Zzap Warbuggy are Doctrine Only for Evilsunz...
; // Warbuggies cost 80% for Evilsunz
{"Evz_Warbuggy_shootas"					("sc_unit_tier_cx"	period(early) side(ork) cpm(6) cwm(3.0) cost(50))}
{"Evz_Warbuggy_rokkits"					("sc_unit_tier_cx"	period(early) side(ork) cpm(6) cwm(3.0) cost(70))}
{"Evz_Warbuggy_burnas"					("sc_unit_tier_cx"	period(early) side(ork) cpm(6) cwm(3.0) cost(80))}	
{"Evz_Warbuggy_zzap"					("sc_unit_tier_cx"	period(early) side(ork) cpm(8) cwm(4.0) cost(125))}	

; // Deff Dreads T1
{"evz_deff_dread_shoota"				("sc_unit_tier_cx"	period(early) side(ork) cpm(15)	cwm(4.0) cost(225))}
{"evz_deff_dread_burna"					("sc_unit_tier_cx"	period(early) side(ork) cpm(15)	cwm(4.0) cost(250))}

; // Deff Dreads T2
{"evz_deff_dread_rokkit"				("sc_unit_tier_cx"	period(early) side(ork) cpm(18) cwm(5.0) cost(275))}
{"evz_deff_dread_kannon"				("sc_unit_tier_cx"	period(early) side(ork) cpm(18) cwm(5.0) cost(300))}
{"evz_deff_dread_autocannon"			("sc_unit_tier_cx"	period(early) side(ork) cpm(18) cwm(5.0) cost(350))}

; // Deff Dreads T3
{"evz_deff_dread_megablasta"			("sc_unit_tier_cx"	period(early) side(ork) cpm(20) cwm(6.0) cost(375))}
{"evz_deff_dread_zzapgun"				("sc_unit_tier_cx"	period(early) side(ork) cpm(20) cwm(6.0) cost(400))}

; // EVILSUNZ Trukks cost 50% MP	
{"Evz_Wartrukk_ammo"					("sc_unit_tier_cx"	period(early) side(ork) cpm(2) cwm(0.5) cost(50))}	
{"Evz_Wartrukk"							("sc_unit_tier_cx"	period(early) side(ork) cpm(3) cwm(1.0) cost(55))}	
{"Evz_Wartrukk_burna"					("sc_unit_tier_cx"	period(early) side(ork) cpm(4) cwm(2.0) cost(75))}	

; // TANKS T2
{"evz_gunwagon_transport"				("sc_unit_tier_cx"	period(early) side(ork) cpm(6) cwm(3.0) cost(100))}
{"evz_gunwagon_flakk"					("sc_unit_tier_cx"	period(early) side(ork) cpm(7) cwm(4.0) cost(300))}
{"evz_gunwagon_kannon"					("sc_unit_tier_cx"	period(early) side(ork) cpm(9) cwm(5.0) cost(400))}

; // TANKS T3
{"evz_gunwagon_zzap"					("sc_unit_tier_cx"	period(early) side(ork) cpm(16) cwm(6.0) cost(550))}	; <- ork vanquisher

{"evz_looted_lemanruss_rokkit_shoota"	("sc_unit_tier_cx"	period(early) side(ork) cpm(18) cwm(7.0) cost(600))}		

; // TANKS T4
{"evz_looted_predator_kannons_hb_hb"	("sc_unit_tier_cx"	period(early) side(ork) cpm(24) cwm(8.0) cost(650))}		
{"evz_looted_predator_zzap_hb_hb"		("sc_unit_tier_cx"	period(early) side(ork) cpm(24) cwm(8.0) cost(750))}	; <- Annihilator

{"evz_battlewagon_transport"			("sc_unit_tier_cx"	period(early) side(ork) cpm(24) cwm(10.0) cost(500))}	; <- Mobile superfortress
{"evz_battlewagon_kannon"				("sc_unit_tier_cx"	period(early) side(ork) cpm(30) cwm(12.0) cost(800))}		
{"evz_battlewagon_liftadrop"			("sc_unit_tier_cx"	period(early) side(ork) cpm(34) cwm(12.0) cost(1300))}	
{"evz_battlewagon_supakannon"			("sc_unit_tier_cx"	period(early) side(ork) cpm(40) cwm(14.0) cost(1500))}	; <- shadowsword counterpart

{"evz_kill_bursta_tank"					("sc_unit_tier_cx"	period(early) side(ork) cpm(32) cwm(12.0) cost(1200))}	; <- Super Siege Tank

{"evz_Gorkanaut"						("sc_unit_tier_cx"	period(early) side(ork) cpm(50) cwm(25.0) cost(1300))}	; <- Uber 
{"evz_Morkanaut"						("sc_unit_tier_cx"	period(early) side(ork) cpm(60) cwm(25.0) cost(1500))}	; <- Uber 
