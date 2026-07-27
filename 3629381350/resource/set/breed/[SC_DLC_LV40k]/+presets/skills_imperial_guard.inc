
(Include "/set/breed/SC_Plataform/+General_Defines.inc")

; // REMINDERS: 
; # ...


; ========================================================================]
; // LV40k Imperial Guard Vitality Defines.
; ========================================================================}


(Define "lv40k_ig_vitality_guardsmen"
	{"personage" 0}
	{"avoidance" lvl_1}			
	("irregular_vision")	; // <- poorer vision
)

(Define "lv40k_ig_vitality_veteran"
	{"personage" 0}				
	{"avoidance" lvl_3}			
	("standard_vision")
)

(Define "lv40k_ig_vitality_stormtrooper"
	{"personage" 0}				
	{"avoidance" lvl_8}			
	("elite_vision")
)

(Define "lv40k_ig_vitality_hero"
	{"personage" 0}			
	{"avoidance" lvl_6}			
	("elite_vision")
)


; #### ----------- CONSCRIPTS ----------- #### 

; // BUZZ: Made recruits slower, so that they suck even more.	

(define "lv40k_ig_vitality_guardsmen_recruit"
	{"health" "200%"}	{"health_regeneration" "10%"}
	{"stamina" "150%"}	{"stamina_regeneration" "50%"}
	{"speed" 0.9}			
	("lv40k_ig_vitality_guardsmen")
)

(define "lv40k_ig_vitality_guardsmen_trooper"
	{"health" "400%"}	{"health_regeneration" "20%"}
	{"stamina" "200%"}	{"stamina_regeneration" "80%"}
	{"speed" 1.0}			
	("lv40k_ig_vitality_guardsmen")
)

(define "lv40k_ig_vitality_guardsmen_sq"
	{"health" "600%"}	{"health_regeneration" "40%"}
	{"stamina" "200%"}	{"stamina_regeneration" "80%"}
	{"speed" 1.0}			
	("lv40k_ig_vitality_guardsmen")
)

; #### ----------- VETERANS ----------- #### 

(define "lv40k_ig_vitality_guardsmen_veteran"
	{"health" "600%"}	{"health_regeneration" "30%"}
	{"stamina" "300%"}	{"stamina_regeneration" "80%"}
	{"speed" 1.0}					
	("lv40k_ig_vitality_veteran")
)

(define "lv40k_ig_vitality_guardsmen_veteran_sq"
	{"health" "800%"}	{"health_regeneration" "50%"}
	{"stamina" "300%"}	{"stamina_regeneration" "80%"}
	{"speed" 1.0}					
	("lv40k_ig_vitality_veteran")
)

; #### ----------- STORM TROOPER ----------- #### 

(define "lv40k_ig_vitality_guardsmen_storm_trooper"
	{"health" "1000%"}	{"health_regeneration" "50%"}
	{"stamina" "500%"}	{"stamina_regeneration" "150%"}
	{"speed" 1.3}					
	("lv40k_ig_vitality_veteran")
)

(define "lv40k_ig_vitality_guardsmen_storm_trooper_sq"
	{"health" "1200%"}	{"health_regeneration" "70%"}
	{"stamina" "500%"}	{"stamina_regeneration" "150%"}
	{"speed" 1.3}					
	("lv40k_ig_vitality_veteran")
)
 
; #### ----------- IMPERIAL HEROES ----------- ####

(define "lv40k_ig_vitality_psyker_regular"
	{"health" "2000%"}	{"health_regeneration" "100%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "200%"}
	{"speed" 1.1}
	("lv40k_ig_vitality_hero")
)

(define "lv40k_ig_vitality_commissar_regular"
	{"health" "2500%"}	{"health_regeneration" "100%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "200%"}
	{"speed" 1.1}
	("lv40k_ig_vitality_hero")
)

(define "lv40k_ig_vitality_inquisitor_regular"
	{"health" "3000%"}	{"health_regeneration" "100%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "200%"}
	{"speed" 1.1}
	("lv40k_ig_vitality_hero")
)

(define "lv40k_ig_vitality_techpriest_regular"
	{"health" "4000%"}	{"health_regeneration" "100%"}
	{"stamina" "1000%"}	{"stamina_regeneration" "200%"}
	{"speed" 0.8}
	("lv40k_ig_vitality_hero")
)

; ========================================================================]
; // LV40k Imperial Guard Classes Defines.
; ========================================================================}

(define "lv40k_ig_skill_class_guardsmen_lasgun"
	{"rifle" lvl_3}	 			
	{"pistol" lvl_1}		
	{"mgun_light" lvl_1}	
	{"smg" lvl_2}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_1}	
	
	; // Change buildable stuff later...
	("fortification")
	
	; // tank crew skills
	("basic_repair")
	("basic_gun")	
)

(define "lv40k_ig_skill_class_veteran_lasgun"
	{"rifle" lvl_4}	 			
	{"pistol" lvl_2}		
	{"mgun_light" lvl_2}	
	{"smg" lvl_3}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_2}	
	
	; // Change buildable stuff later...
	("fortification")
	
	; // tank crew skills
	("basic_repair")
	("basic_gun")	
)

(define "lv40k_ig_skill_class_shock_trooper_lasgun"
	{"rifle" lvl_6}	 			
	{"pistol" lvl_4}		
	{"mgun_light" lvl_3}	
	{"smg" lvl_5}			
	{"mgun" lvl_2}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_4}	
	
	; // Change buildable stuff later...
	("fortification")
	
	; // tank crew skills
	("basic_repair")
	("basic_gun")	
)

(define "lv40k_ig_skill_class_commissar_common"
	{"rifle" lvl_4}			
	{"pistol" lvl_7}		
	{"mgun_light" lvl_2}	
	{"smg" lvl_3}			
	{"mgun" lvl_2}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_7}	
	
	; // Change buildable stuff later...
	("fortification")
	
	; // tank crew skills
	("basic_repair")
	("basic_gun")	
)
