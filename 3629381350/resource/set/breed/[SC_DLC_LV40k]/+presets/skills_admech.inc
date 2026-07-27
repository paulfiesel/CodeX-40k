
(Include "/set/breed/SC_Plataform/+General_Defines.inc")

; // REMINDERS: 

; ========================================================================]
; // LV40k Adeptus Mechanicus Vitality General Defines.
; ========================================================================]


(Define "lv40k_admech_vitality_servitor"
	;//{"personage" 0}		
	{"avoidance" lvl_1}		
	("standard_vision")
)


; ========================================================================]
; // LV40k Adeptus Mechanicus Vitality Class Defines
; ========================================================================]


; #### ----------- SERVITORS ----------- #### 

(define "lv40k_admech_vitality_combat_servitor"		
	{"health" "500%"}	{"health_regeneration" "20%"}	{"stamina" "1000%"}	{"stamina_regeneration" "300%"}	; // <- stamina not an issue to servitors...
	{speed 0.8}	("lv40k_admech_vitality_servitor")
)


; ========================================================================]
; // LV40k Adeptus Mechanicus Classes Defines.
; ========================================================================}


(define "lv40k_admech_skill_class_builder_servitor"
	{"rifle" lvl_1}			
	{"pistol" lvl_1}		
	{"mgun_light" lvl_1}	
	{"smg" lvl_1}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_1}	
	
	("fortification")
	("basic_repair")
	("basic_gun")	
	
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

(define "lv40k_admech_skill_class_combat_servitor"
	{"rifle" lvl_1}			
	{"pistol" lvl_1}		
	{"mgun_light" lvl_8}	
	{"smg" lvl_1}			
	{"mgun" lvl_8}				
	{"rocketlauncher" lvl_8}	
	{"melee" lvl_1}	
	
	("fortification")
	("basic_repair")
	("basic_gun")	
	
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
