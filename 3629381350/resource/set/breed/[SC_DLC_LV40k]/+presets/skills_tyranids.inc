
(Include "/set/breed/SC_Plataform/+General_Defines.inc")

; ========================================================================]
; // LV40k Tyranids Vitality General Defines.
; ========================================================================]

; // Disable personage for all tyranids...
; // All must have "avoidance" lvl9 so that they stop dropping there guns upon death.

(Define "lv40k_gaunts_vitality_general"		; // Gaunts have poor vision...
	; // {"personage" 0} 
	{"avoidance" lvl_9}			
	("irregular_vision")
)

(Define "lv40k_raveners_vitality_general"		
	; // {"personage" 0} 
	{"avoidance" lvl_9}			
	("standard_vision")
	
	("engineer" rr(1000) rg(0) 
		fort(
			{"fortifications" "capvein"}
			{"fortifications" "captower"}
			{"fortifications" "foxhole"}
		)
	)
)

(Define "lv40k_warriors_vitality_general"		
	; // {"personage" 0} 
	{"avoidance" lvl_9}			
	("elite_vision")
)

(Define "lv40k_zoanthropes_vitality_general"		
	; // {"personage" 0} 
	{"avoidance" lvl_9}			
	("specialist_vision")
)

(Define "lv40k_venomthropes_vitality_general"		
	; // {"personage" 0} 
	{"avoidance" lvl_9}			
	("standard_vision")
)

; ========================================================================]
; // LV40k Tyranids Vitality Class Defines
; ========================================================================]

; // Tyranids don't have health packs, so high regeneration rates are a must.
; // Synapse Tyranids have extra health regeneration bonus.

; // Tyranid weapons are heavy so they spend stamina for just walking, add increased stamina regen for all.
 
; #### ----------- Gaunts ----------- #### 

(define "lv40k_tyranids_vitality_gaunts_regular"
	{"health" "450%"}	{"health_regeneration" "100%"}
	{"stamina" "300%"}	{"stamina_regeneration" "100%"}	
	{"speed" 1.375}
	("lv40k_gaunts_vitality_general")
)

(define "lv40k_tyranids_vitality_gaunts_adapted"
	{"health" "900%"}	{"health_regeneration" "150%"}
	{"stamina" "400%"}	{"stamina_regeneration" "150%"}	
	{"speed" 1.5}
	("lv40k_gaunts_vitality_general")
)

; #### ----------- Raveners ----------- #### 

(define "lv40k_tyranids_vitality_raveners_regular"
	{"health" "3000%"}	{"health_regeneration" "100%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "100%"}	
	{"speed" 1.4}
	("lv40k_raveners_vitality_general")
)

(define "lv40k_tyranids_vitality_raveners_alpha"
	{"health" "4000%"}	{"health_regeneration" "200%"}
	{"stamina" "2000%"}	{"stamina_regeneration" "200%"}	
	{"speed" 1.5}
	("lv40k_raveners_vitality_general")
)

; #### ----------- Warrior ----------- #### 

	; // Warriors regenerate lots of health
	
(define "lv40k_tyranids_vitality_warriors_regular"
	{"health" "3000%"}	{"health_regeneration" "300%"}	
	{"stamina" "1000%"}	{"stamina_regeneration" "100%"}	
	{"speed" 1.6}
	("lv40k_warriors_vitality_general")
	
	; // ("sniper_perk")	; // <- Venom cannon (Scrapped)
)

(define "lv40k_tyranids_vitality_warriors_adapted"
	{"health" "4500%"}	{"health_regeneration" "400%"}		
	{"stamina" "2000%"}	{"stamina_regeneration" "100%"}	
	{"speed" 1.7}
	("lv40k_warriors_vitality_general")
	
	; // ("sniper_perk")	; // <- Venom cannon (Scrapped)
)

; // HERO UNIT
(define "lv40k_tyranids_vitality_warriors_prime"
	{"health" "8000%"}	{"health_regeneration" "500%"}		
	{"stamina" "2000%"}	{"stamina_regeneration" "200%"}	
	{"speed" 1.8}
	("lv40k_warriors_vitality_general")
	
	; // ("sniper_perk")	; // <- Venom cannon (Scrapped)
)

; #### ----------- Zoanthrope ----------- #### 

(define "lv40k_tyranids_vitality_zoanthropes_regular"
	{"health" "1000%"}	{"health_regeneration" "100%"}		
	{"stamina" "1000%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.35}
	("lv40k_zoanthropes_vitality_general")
)

; #### ----------- Venomthrope ----------- #### 

(define "lv40k_tyranids_vitality_venomthropes_regular"
	{"health" "5000%"}	{"health_regeneration" "100%"}		
	{"stamina" "1000%"}	{"stamina_regeneration" "100%"}
	{"speed" 1.1}
	("lv40k_venomthropes_vitality_general")
)

; ========================================================================]
; // LV40k Tyranids Skill Classes Defines.
; ========================================================================}
	
; // All tyranid skins weapons are classed as pistols or rocket launchers in order to disable certain FSM states.

(define "lv40k_tyranids_skill_class_tier1"
	{"rifle" lvl_1}			
	{"pistol" lvl_5}		
	{"mgun_light" lvl_1}	
	{"smg" lvl_1}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_3}	
	
	("basic_repair")
	("basic_gun")	
)

(define "lv40k_tyranids_skill_class_tier2"
	{"rifle" lvl_1}			
	{"pistol" lvl_7}		
	{"mgun_light" lvl_1}	
	{"smg" lvl_1}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_5}	
	
	("basic_repair")
	("basic_gun")	
)

(define "lv40k_tyranids_skill_class_tier3"
	{"rifle" lvl_1}			
	{"pistol" lvl_8}		
	{"mgun_light" lvl_1}	
	{"smg" lvl_1}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_8}	
	
	("basic_repair")
	("basic_gun")	
)

(define "lv40k_tyranids_skill_class_zoanthrope"
	{"rifle" lvl_1}			
	{"pistol" lvl_7}		
	{"mgun_light" lvl_1}	
	{"smg" lvl_1}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_1}	
	
	("basic_repair")
	("basic_gun")	
)

