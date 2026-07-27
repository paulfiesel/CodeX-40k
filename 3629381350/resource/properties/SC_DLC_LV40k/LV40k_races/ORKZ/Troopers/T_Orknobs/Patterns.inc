
(include "Troopers_Orknobs.inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Orks_Nob_1"
	("Skeleton" color(%color) model(Nob))
	
	("SC_Troopers_orknob_Breed" 
		Tag()
		Health(10000)	Health_Modifier(%health_modifier) Health_Regen(0)
		Speed(1.0)		Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t1"}	; // <- melee trait
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "ork_choppa_mace"		filled	{user "melee"}}
			{item "lv40k_ork_waaagh_item"}
		}
	}
	{Weaponry
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** EVILSUNZ ***	- 	10% faster

(define "Perk_Evilsunz_Orknob_1"	("Pattern_Orks_Nob_1"	color(evilsunz) speed_modifier(1.1) health_modifier(1.0)))

; // *** GOFFS ***		-	25% more health

(define "Perk_Goffs_Orknob_1"		("Pattern_Orks_Nob_1"	color(goffs) speed_modifier(1.0) health_modifier(1.25)))

; // *** BADMOONS ***	-	Default

(define "Perk_Badmoons_Orknob_1"	("Pattern_Orks_Nob_1"	color(badmoons) speed_modifier(1.0) health_modifier(1.0)))
