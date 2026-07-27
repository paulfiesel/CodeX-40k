
(include "Troopers_Meganobs.Inc")
(include "MDL/Skeleton.inc")

; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Pattern_Orks_Meganobs"
	("Skeleton" color(%color) model(meganob_1))

	("SC_Troopers_Meganobs_Breed" 
		Tag()
		Health(15000) Health_Modifier(%health_modifier) Health_Regen(0)
		Speed(1.0) Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t3"}	; // <- melee trait
	
	; ------------------------------------------------- ;
	
	{extender "inventory"
		{box
			{item "lv40k_ork_waaagh_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "ork_veh_melee_meganob"}
		}
		{place "weapon"
			{weapon "shoota_kustom_meganob"}
		}
		{place "weapon1"
			{weapon "rokkit_launcha_meganob"}
		}
	}
)

(define "Pattern_Orks_Meganobs_Leader"
	("Skeleton" color(%color) model(meganob_2))
	
	("SC_Troopers_Meganobs_Breed" 
		Tag(mgn_ld)
		Health(25000) Health_Modifier(%health_modifier) Health_Regen(0)
		Speed(0.9) Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t4"}	; // <- melee trait
	
	; ------------------------------------------------- ;
	
	{extender "inventory"
		{box
			{item "lv40k_ork_waaagh_item"}
			{item "rokkit_launcha_ammo boomy ammo" 1}
			{item "rokkit_launcha_ammo tankbustin ammo" 1}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "ork_veh_melee_meganob"}
		}
		{place "weapon"
			{weapon "shoota_kustom_meganob"}
		}
		{place "weapon1"
			{weapon "rokkit_launcha_meganob"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** EVILSUNZ ***	- Evilsunz are 10% faster, but 10% weaker

(define "Perk_Evilsunz_Meganobs_1"	("Pattern_Orks_Meganobs"		color(evilsunz) speed_modifier(1.1) health_modifier(0.9)))
(define "Perk_Evilsunz_Meganobs_2"	("Pattern_Orks_Meganobs_Leader"	color(evilsunz) speed_modifier(1.1) health_modifier(0.9)))

; // *** GOFFS ***	- Goffs has 20% more health, but is 10% slower

(define "Perk_Goffs_Meganobs_1"		("Pattern_Orks_Meganobs"		color(goffs) speed_modifier(0.95) health_modifier(1.2)))
(define "Perk_Goffs_Meganobs_2"		("Pattern_Orks_Meganobs_Leader"	color(goffs) speed_modifier(0.95) health_modifier(1.2)))

; // *** BADMOONS ***	- Default

(define "Perk_Badmoons_Meganobs_1"	("Pattern_Orks_Meganobs"		color(badmoons) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Badmoons_Meganobs_2"	("Pattern_Orks_Meganobs_Leader"	color(badmoons) speed_modifier(1.0) health_modifier(1.0)))
