
(Include "/set/breed/SC_Plataform/+General_Defines.inc")

; // REMINDERS: 
; # BOLTER RIFLES ARE LABELED IN "MGUN_LIGHT" CATEGORY SO THEY CAN PLAY HIP ANIMATIONS**** 
; # INCREASE /Set/Ability/ FOLDER PERKS LEVELS, AS NONE OF THE GIVEN LEVELS CAN PROPERLY REFLECT ASTARTES SUPER HUMAN TRAITS


; ========================================================================]
; // LV40k Marines Vitality General Defines.
; ========================================================================]


(Define "lv40k_space_marine_vitality_scouts"
	{"personage" 0}		
	{"avoidance" lvl_4}		
	{"stealth"}
	("elite_vision")
)

(Define "lv40k_space_marine_vitality_general"
	{"personage" 0}		
	{"avoidance" lvl_8}			
	("standard_vision")		
)

(Define "lv40k_space_marine_vitality_hero"		; <- For Apothecaries, Chaplains, Techmarines, Commanders, Librarians, Chaos Lords, Sorcerors, Champions.
	{"personage" 0}		
	{"avoidance" lvl_8}			
	("specialist_vision")		
)


; ========================================================================]
; // LV40k Marines Vitality Class Defines
; ========================================================================]


; // VETERANS GET: / 50% more total health / 20% more health regeneration / 50% more stamina regeneration
; // SERGEANTS GET: / 30% more total health / 50% more health regeneration (increases survivability)

; #### ----------- SCOUTS ----------- #### 

(define "lv40k_space_marine_vitality_scout_regular"		
	{"health" "900%"}	{"health_regeneration" "20%"}	{"stamina" "600%"}	{"stamina_regeneration" "75%"}
	{speed 1.2}	("lv40k_space_marine_vitality_scouts")
)

(define "lv40k_space_marine_vitality_scout_sergeant"		
	{"health" "1200%"}	{"health_regeneration" "70%"}	{"stamina" "600%"}	{"stamina_regeneration" "75%"}
	{speed 1.2}	("lv40k_space_marine_vitality_scouts")
)

; #### ----------- INTERCESSORS ----------- #### 

(define "lv40k_space_marine_vitality_primaris_regular"
	{"health" "2500%"}	{"health_regeneration" "80%"}	{"stamina" "1000%"}	{"stamina_regeneration" "50%"}
	{speed 1.6}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_primaris_regular_sgt"
	{"health" "3000%"}	{"health_regeneration" "130%"}	{"stamina" "1000%"}	{"stamina_regeneration" "50%"}
	{speed 1.6}	("lv40k_space_marine_vitality_general")
)

; #### ----------- FIRSTBORN ----------- #### 

; // Tankers have diminished stats.

(define "lv40k_space_marine_vitality_firstborn_tankman"			
	{"health" "1000%"}	{"health_regeneration" "20%"}	{"stamina" "400%"}	{"stamina_regeneration" "25%"}
	{speed 1.4}	("lv40k_space_marine_vitality_general")
)

; // Tacticals 

(define "lv40k_space_marine_vitality_firstborn_tactical"			
	{"health" "2000%"}	{"health_regeneration" "40%"}	{"stamina" "800%"}	{"stamina_regeneration" "50%"}
	{speed 1.5}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_tactical_sgt"			
	{"health" "2500%"}	{"health_regeneration" "90%"}	{"stamina" "800%"}	{"stamina_regeneration" "50%"}
	{speed 1.5}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_tactical_vet"			
	{"health" "3000%"}	{"health_regeneration" "60%"}	{"stamina" "800%"}	{"stamina_regeneration" "75%"}
	{speed 1.5}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_tactical_vet_sgt"			
	{"health" "3500%"}	{"health_regeneration" "110%"}	{"stamina" "800%"}	{"stamina_regeneration" "75%"}
	{speed 1.5}	("lv40k_space_marine_vitality_general")
)

; // Assault Marines - get more health, are faster and have more stamina at cost of ranged weapon skill...

(define "lv40k_space_marine_vitality_firstborn_assault"			
	{"health" "2500%"}	{"health_regeneration" "40%"}	{"stamina" "1000%"}	{"stamina_regeneration" "75%"}
	{speed 1.6}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_assault_sgt"			
	{"health" "3000%"}	{"health_regeneration" "90%"}	{"stamina" "1000%"}	{"stamina_regeneration" "75%"}
	{speed 1.6}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_assault_vet"			
	{"health" "3000%"}	{"health_regeneration" "60%"}	{"stamina" "1000%"}	{"stamina_regeneration" "125%"}
	{speed 1.6}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_assault_vet_sgt"			
	{"health" "3500%"}	{"health_regeneration" "110%"}	{"stamina" "1000%"}	{"stamina_regeneration" "125%"}
	{speed 1.6}	("lv40k_space_marine_vitality_general")
)

; // Devastators - Have less health, more stamina (tho regenerates slower) as well as less overall speed...

(define "lv40k_space_marine_vitality_firstborn_devastator"		
	{"health" "1500%"}	{"health_regeneration" "40%"}	{"stamina" "1500%"}	{"stamina_regeneration" "25%"}	
	{speed 1.25}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_devastator_sgt"		
	{"health" "2000%"}	{"health_regeneration" "90%"}	{"stamina" "1500%"}	{"stamina_regeneration" "25%"}	
	{speed 1.25}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_devastator_vet"		
	{"health" "2000%"}	{"health_regeneration" "60%"}	{"stamina" "2000%"}	{"stamina_regeneration" "50%"}	
	{speed 1.25}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_devastator_vet_sgt"		
	{"health" "2500%"}	{"health_regeneration" "110%"}	{"stamina" "2000%"}	{"stamina_regeneration" "50%"}	
	{speed 1.25}	("lv40k_space_marine_vitality_general")
)

; // Commander, Chaos Lord - Stamina should not be an issue, and have high health regeneration.		

(define "lv40k_space_marine_vitality_firstborn_commander"		
	{"health" "9000%"}	{"health_regeneration" "150%"}	{"stamina" "5000%"}	{"stamina_regeneration" "100%"}
	{speed 1.6}	("lv40k_space_marine_vitality_hero")
)

; // Apothecaries, Chaplains, Techmarines, Librarians, Chaos Sorcerers, All other non commander heroes - They all have ~~75% of commander stats.		

(define "lv40k_space_marine_vitality_firstborn_heroes"		
	{"health" "6000%"}	{"health_regeneration" "110%"}	{"stamina" "3500%"}	{"stamina_regeneration" "100%"}
	{speed 1.6}	("lv40k_space_marine_vitality_hero")
)

; // Champions, Honor Guards - They all have ~~50% of commander stats.		

(define "lv40k_space_marine_vitality_firstborn_1c"		
	{"health" "4000%"}	{"health_regeneration" "60%"}	{"stamina" "2500%"}	{"stamina_regeneration" "100%"}
	{speed 1.6}	("lv40k_space_marine_vitality_general")
)

(define "lv40k_space_marine_vitality_firstborn_1c_sgt"		
	{"health" "5000%"}	{"health_regeneration" "110%"}	{"stamina" "2500%"}	{"stamina_regeneration" "100%"}
	{speed 1.6}	("lv40k_space_marine_vitality_general")
)


; ========================================================================]
; // LV40k Astartes Classes Defines.
; ========================================================================}


(Define "lv40k_space_marine_skill_misc_basic"
	;//("fortification")
	("basic_repair")
	("basic_gun")	
)

(define "lv40k_space_marine_skill_class_hero"
	{"rifle" lvl_6}			
	{"pistol" lvl_8}		
	{"mgun_light" lvl_5}	
	{"smg" lvl_5}			
	{"mgun" lvl_3}				
	{"rocketlauncher" lvl_3}	
	{"melee" lvl_10}	
	
	("lv40k_space_marine_skill_misc_basic")
)

(define "lv40k_space_marine_skill_class_apothecary"
	{"rifle" lvl_6}			
	{"pistol" lvl_8}		
	{"mgun_light" lvl_5}	
	{"smg" lvl_5}			
	{"mgun" lvl_3}				
	{"rocketlauncher" lvl_3}	
	{"melee" lvl_10}	
	{"medic"}
	
	{barricade
		{"fortifications" "auto_medic_place_flag"}
		{"fortifications" "medic_rally"}
	}
	{"resources" "10%"}
	
	("lv40k_space_marine_skill_misc_basic")
)

; ----------------------------------------------------------------------------- ;

(define "lv40k_space_marine_skill_class_assault"
	{"rifle" lvl_4}			
	{"pistol" lvl_8}		
	{"mgun_light" lvl_4}	
	{"smg" lvl_4}			
	{"mgun" lvl_2}				
	{"rocketlauncher" lvl_2}	
	{"melee" lvl_9}	
	
	("lv40k_space_marine_skill_misc_basic")
)

(define "lv40k_space_marine_skill_class_tankman"
	{"rifle" lvl_6}			
	{"pistol" lvl_5}		
	{"mgun_light" lvl_7}	
	{"smg" lvl_8}			
	{"mgun" lvl_2}				
	{"rocketlauncher" lvl_2}	
	{"melee" lvl_8}	
	("SC_Tankman_tier3")
	
	("lv40k_space_marine_skill_misc_basic")
)

(define "lv40k_space_marine_skill_class_tactical"
	{"rifle" lvl_6}			
	{"pistol" lvl_5}		
	{"mgun_light" lvl_7}	
	{"smg" lvl_8}			
	{"mgun" lvl_2}				
	{"rocketlauncher" lvl_2}	
	{"melee" lvl_8}	
	
	("lv40k_space_marine_skill_misc_basic")
)

(define "lv40k_space_marine_skill_class_devastator"
	{"rifle" lvl_3}			
	{"pistol" lvl_5}		
	{"mgun_light" lvl_8}	
	{"smg" lvl_3}			
	{"mgun" lvl_8}				
	{"rocketlauncher" lvl_8}	
	{"melee" lvl_5}	
	
	("lv40k_space_marine_skill_misc_basic")
)

(define "lv40k_space_marine_skill_class_techmarine"
	{"rifle" lvl_7}			
	{"pistol" lvl_6}		
	{"mgun_light" lvl_7}	
	{"smg" lvl_7}			
	{"mgun" lvl_4}				
	{"rocketlauncher" lvl_4}	
	{"melee" lvl_8}	

	("SC_Tankman_tier3")
	
	("lv40k_space_marine_skill_misc_basic")
	
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


; ----------------------------------------------------------------------------- ;

(define "lv40k_space_marine_skill_class_scout_tankman"
	{"rifle" lvl_5}			
	{"pistol" lvl_4}		
	{"mgun_light" lvl_6}	
	{"smg" lvl_6}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_3}	
	("SC_Tankman_tier2")
	
	("lv40k_space_marine_skill_misc_basic")	
)

(define "lv40k_space_marine_skill_class_scout_tactical"
	{"rifle" lvl_5}			
	{"pistol" lvl_4}		
	{"mgun_light" lvl_6}	
	{"smg" lvl_6}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_3}	
	
	("lv40k_space_marine_skill_misc_basic")	
)

(define "lv40k_space_marine_skill_class_scout_sniper"
	{"rifle" lvl_8}			
	{"pistol" lvl_4}		
	{"mgun_light" lvl_6}	
	{"smg" lvl_6}			
	{"mgun" lvl_1}				
	{"rocketlauncher" lvl_1}	
	{"melee" lvl_3}	
	("sniper_perk")
	
	("lv40k_space_marine_skill_misc_basic")	
)
