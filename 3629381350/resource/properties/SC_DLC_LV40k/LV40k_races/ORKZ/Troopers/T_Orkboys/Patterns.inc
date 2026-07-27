
(include "Troopers_Orkboys.inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Pattern_Orks_Boy_Sluggaboy_1"
	("Skeleton" color(%color) model(Slugga))	

	("SC_Troopers_orkboy_Breed" 
		Tag()
		Health(1200)	Health_Modifier(%health_modifier) Health_Regen(0)
		Speed(1.0) Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "Ork_slugga_common" filled	{user "weapon"}}
			{item "ork_choppa" filled	{user "melee"}}
			{item "lv40k_ork_waaagh_item"}
		}
	}
	{Weaponry
	}
)

(define "Pattern_Orks_Boy_Ardboy_1"
	("Skeleton" color(%color) model(Ardboy))

	("SC_Troopers_orkboy_Breed" 
		Tag(Ardboy)
		Health(2400)	Health_Modifier(%health_modifier) Health_Regen(0)
		Speed(1.1)		Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	{Props "SC_plataform_prop_troopers_no_recoil_anm"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t2"}	; // <- melee trait
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "ork_shoota_stubba" filled	{user "weapon"}}
			{item "ork_choppa_ard" filled	{user "melee"}}
			{item "lv40k_ork_waaagh_item"}
		}
	}
	{Weaponry
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** EVILSUNZ ***	- Boyz are 10% faster

(define "Perk_Evilsunz_Sluggaboy_1"	("Pattern_Orks_Boy_Sluggaboy_1"	color(evilsunz) speed_modifier(1.1) health_modifier(1.0)))
(define "Perk_Evilsunz_Ardboy_1"	("Pattern_Orks_Boy_Ardboy_1"	color(evilsunz) speed_modifier(1.1) health_modifier(1.0)))

; // *** GOFFS ***	-	Boyz have 20% more health

(define "Perk_Goffs_Sluggaboy_1"	("Pattern_Orks_Boy_Sluggaboy_1"	color(goffs) speed_modifier(1.0) health_modifier(1.2)))
(define "Perk_Goffs_Ardboy_1"		("Pattern_Orks_Boy_Ardboy_1"	color(goffs) speed_modifier(1.0) health_modifier(1.2)))

; // *** BADMOONS ***	- Default

(define "Perk_Badmoons_Sluggaboy_1"	("Pattern_Orks_Boy_Sluggaboy_1"	color(badmoons) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Badmoons_Ardboy_1"	("Pattern_Orks_Boy_Ardboy_1"	color(badmoons) speed_modifier(1.0) health_modifier(1.0)))
