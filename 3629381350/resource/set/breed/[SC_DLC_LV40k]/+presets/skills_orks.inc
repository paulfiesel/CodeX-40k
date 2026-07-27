
(Include "/set/breed/SC_Plataform/+General_Defines.inc")

; ========================================================================]
; // LV40k Orks Vitality General Defines.
; ========================================================================]

(Define "lv40k_grots_vitality_general"
	;//{"personage" 0} ; <- Grots are fodder.
	{"avoidance" lvl_1}			
	("irregular_vision")
)

(Define "lv40k_nobs_vitality_general"
	{"personage" 0}			
	{"avoidance" lvl_8}			
	("elite_vision")
)

(Define "lv40k_orks_vitality_general"
	{"personage" 0}			
	{"avoidance" lvl_7}			
	("standard_vision")
)

(Define "lv40k_weirdboy_vitality_general" 
	;//{"personage" 0}	; <- Weirdboys explode on death.			
	{"avoidance" lvl_4}				
	("recon_vision")
)

(Define "lv40k_kommando_vitality_general"
	{"personage" 0}			
	{"avoidance" lvl_4}	; // Sneaky gits should have lower avoidance.
	{"stealth"}
	("recon_vision")
)

; ========================================================================]
; // LV40k Orks Vitality Class Defines
; ========================================================================]

; #### ----------- GROTS ----------- #### 

(define "lv40k_orks_vitality_orkgrot_regular"
	{"health" "100%"}	{"health_regeneration" "10%"}
	{"stamina" "100%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.0}	("lv40k_grots_vitality_general")
)

(define "lv40k_orks_vitality_orkgrot_ard"
	{"health" "300%"}	{"health_regeneration" "25%"}
	{"stamina" "200%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.0}	("lv40k_grots_vitality_general")
)

; #### ----------- ORKBOY ----------- #### 

; // BUZZ: Orks have more damage resistance than regular humans (see in properties) in their unarmored bits.
; // BUZZ: For record, 500 health allows orks to resist 2-3 bolter shoots in 12-40m distance and 4-5 bolter shots from any further.
; // BUZZ: 'Ardboys are orks with armored bits, for that they have slower stamina regeneration.
 
; ############## // GOFFS: -> Have ~~20% more HP

(define "lv40k_orks_vitality_orkboy_regular"
	{"health" "800%"}	{"health_regeneration" "20%"}
	{"stamina" "300%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_orks_vitality_general")
)

(define "lv40k_orks_vitality_orkboy_goffs"
	{"health" "1200%"}	{"health_regeneration" "20%"}
	{"stamina" "400%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_orks_vitality_general")
)

(define "lv40k_orks_vitality_orkboy_tankman"
	{"health" "1500%"}	{"health_regeneration" "20%"}		; // BUZZ: <- They must have more health because most ork vehicles are open top.
	{"stamina" "200%"}	{"stamina_regeneration" "50%"}
	{"speed" 1.1}	("lv40k_orks_vitality_general")
)

(define "lv40k_orks_vitality_orkboy_loota"
	{"health" "1500%"}	{"health_regeneration" "20%"}	; // BUZZ: <- Lootas are slow moving troops, given that they need more health.
	{"stamina" "500%"}	{"stamina_regeneration" "200%"}	; // BUZZ: <- Lootas need stamina.
	{"speed" 0.95}	("lv40k_orks_vitality_general")
	{"avoidance" lvl_9}									; // BUZZ: <- this ensures lootas will not drop their weapons on death.
)

(define "lv40k_orks_vitality_orkboy_ardboy"
	{"health" "1500%"}	{"health_regeneration" "40%"}
	{"stamina" "400%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_orks_vitality_general")
)

(define "lv40k_orks_vitality_orkboy_ardboy_goff"
	{"health" "2000%"}	{"health_regeneration" "40%"}
	{"stamina" "500%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_orks_vitality_general")
)

(define "lv40k_orks_vitality_orkboy_kommando"
	{"health" "1500%"}	{"health_regeneration" "80%"}	; // BUZZ: <- Kommandos regenerate a little bit more health.
	{"stamina" "500%"}	{"stamina_regeneration" "200%"}	; // BUZZ: <- Kommandos have really good stamina.
	{"speed" 1.2}	("lv40k_kommando_vitality_general")
)

; // ------- ORK HEROES: Painboy/Mad-dok, Mekboy, Weirdboy

(define "lv40k_orks_vitality_orkboy_dok"
	{"health" "2000%"}	{"health_regeneration" "200%"}	; // BUZZ: <- Mad-dok regenerates health much faster.
	{"stamina" "1000%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_orks_vitality_general")
	
	{barricade
		{"fortifications" "auto_medic_place_flag"}
		{"fortifications" "medic_rally"}
	}
	{"resources" "10%"}
)

(define "lv40k_orks_vitality_orkboy_mekboy"
	{"health" "2000%"}	{"health_regeneration" "100%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_weirdboy_vitality_general")
)

(define "lv40k_orks_vitality_orkboy_weirdboy"
	{"health" "2000%"}	{"health_regeneration" "100%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_weirdboy_vitality_general")
)

(define "lv40k_orks_vitality_orknob_kommando"
	{"health" "3000%"}	{"health_regeneration" "200%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "200%"}	; // BUZZ: <- Kommandos have more stamina.
	{"speed" 1.3}	("lv40k_kommando_vitality_general")
)

; #### ----------- NOBS ----------- #### 

; // BUZZ: Nobs are slightly slower than average orkboys.
; // BUZZ: Nobs also regenerate more health.
; // BUZZ: Nobs have higher stamina pools because they carry more load.

(define "lv40k_orks_vitality_orknob_regular"
	{"health" "2400%"}	{"health_regeneration" "40%"}
	{"stamina" "750%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_nobs_vitality_general")
)

(define "lv40k_orks_vitality_orknob_goff"
	{"health" "3000%"}	{"health_regeneration" "40%"}
	{"stamina" "750%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_nobs_vitality_general")
)

(define "lv40k_orks_vitality_orknob_ardboy"
	{"health" "3000%"}	{"health_regeneration" "80%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_nobs_vitality_general")
)

(define "lv40k_orks_vitality_orknob_ardboy_goff"
	{"health" "4000%"}	{"health_regeneration" "80%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}	("lv40k_nobs_vitality_general")
)

; ========================================================================]
; // LV40k Orks Skill Classes Defines.
; ========================================================================}

(Define "lv40k_orks_skill_misc_basic"
	;//("fortification")
	("basic_repair")
	("basic_gun")	
)

(Define "lv40k_orks_skill_engineer_grots"
	("engineer" rr(100) rg(0) 
		fort(
			{"fortifications" "barricade_sq"}
			{"fortifications" "barricade"}

			{"fortifications" "barbwire"}
			{"fortifications" "hedgehog"}

			{"fortifications" "foxhole"}
		)
	)
)

(define "lv40k_orks_skill_class_orkgrot_fodder"
	{"rifle" lvl_1}			
	{"pistol" lvl_1}		
	{"mgun_light" lvl_1}	
	{"smg" lvl_1}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_1}	
	
	("lv40k_orks_skill_engineer_grots")
	("lv40k_orks_skill_misc_basic")
)

(define "lv40k_orks_skill_class_orkboy_loota"
	{"rifle" lvl_2}			
	{"pistol" lvl_2}		
	{"mgun_light" lvl_8}	
	{"smg" lvl_2}			
	{"mgun" lvl_8}				
	{"rocketlauncher" lvl_8}	
	{"melee" lvl_1}		; // <- By carrying a big gun, you have low melee skill.
	
	("lv40k_orks_skill_misc_basic")
)

(define "lv40k_orks_skill_class_orkboy_shoota"
	{"rifle" lvl_4}			
	{"pistol" lvl_2}		
	{"mgun_light" lvl_2}	
	{"smg" lvl_4}			
	{"mgun" lvl_2}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_5}	
	
	("lv40k_orks_skill_misc_basic")
)

(define "lv40k_orks_skill_class_orkboy_big_shoota"
	{"rifle" lvl_2}			
	{"pistol" lvl_2}		
	{"mgun_light" lvl_6}	
	{"smg" lvl_2}			
	{"mgun" lvl_6}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_5}	
	
	("lv40k_orks_skill_misc_basic")
)

(define "lv40k_orks_skill_class_orkboy_shoota_pro"
	{"rifle" lvl_7}			
	{"pistol" lvl_4}		
	{"mgun_light" lvl_7}	
	{"smg" lvl_7}			
	{"mgun" lvl_4}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_5}	
	
	("lv40k_orks_skill_misc_basic")
)

(define "lv40k_orks_skill_class_orkboy_tankbusta"
	{"rifle" lvl_7}	; // BUZZ: <- grenade launchers.			
	{"pistol" lvl_3}		
	{"mgun_light" lvl_3}	
	{"smg" lvl_3}			
	{"mgun" lvl_3}				
	{"rocketlauncher" lvl_7}	
	{"melee" lvl_5}	
	
	("lv40k_orks_skill_misc_basic")
)

(define "lv40k_orks_skill_class_orkboy_psyker"
	{"rifle" lvl_3}			
	{"pistol" lvl_8}	; // BUZZ: <- Weirdboy staff is classed as a pistol.	
	{"mgun_light" lvl_3}	
	{"smg" lvl_3}			
	{"mgun" lvl_3}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_8}	
	
	("lv40k_orks_skill_misc_basic")
)

(define "lv40k_orks_skill_class_orkboy_dok"
	{"rifle" lvl_3}			
	{"pistol" lvl_3}		
	{"mgun_light" lvl_1}	
	{"smg" lvl_3}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_5}	
	{"medic"}
	
	("lv40k_orks_skill_misc_basic")
)

(define "lv40k_orks_skill_class_orkboy_tankman"
	{"rifle" lvl_3}			
	{"pistol" lvl_3}		
	{"mgun_light" lvl_3}	
	{"smg" lvl_3}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_5}	
	("SC_Tankman_tier1")
	
	("lv40k_orks_skill_misc_basic")
)

(Define "lv40k_orks_skill_engineer_mekboys"
	("engineer" rr(1000) rg(00) 
		fort(
			{"fortifications" "barricade_sq"}
			{"fortifications" "barricade"}

			{"fortifications" "barbwire"}
			{"fortifications" "hedgehog"}

			{"fortifications" "foxhole"}
			{"fortifications" "foxhole_big"}
			{"fortifications" "mortar_pit"}
			{"fortifications" "tank_cover"}

			{"fortifications" "heavy_mg_mg34"}
			{"fortifications" "heavy_mg_maxim"}
			{"fortifications" "heavy_mg_maxim_m1910_30"}
			{"fortifications" "heavy_mg_m1917_30cal"}
		)
	)
)

(define "lv40k_orks_skill_class_orkboy_mekboy"
	{"rifle" lvl_7}			
	{"pistol" lvl_6}		
	{"mgun_light" lvl_7}	
	{"smg" lvl_7}			
	{"mgun" lvl_4}				
	{"rocketlauncher" lvl_4}	
	{"melee" lvl_7}	

	("SC_Tankman_tier1")
	
	("lv40k_orks_skill_engineer_mekboys")
	("lv40k_orks_skill_misc_basic")
)
