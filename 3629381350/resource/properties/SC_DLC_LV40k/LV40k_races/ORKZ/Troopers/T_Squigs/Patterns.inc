
(include "Troopers_Squigs.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Orks_Squigs_1"
	("Skeleton" color(%color) model(Squigs))
	
	("SC_Troopers_Squigs_Breed" 
		Tag()
		Health(1500)	Health_Modifier(%health_modifier)	Health_Regen(0)
		Speed(1.0) 		Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "melee"
			{weapon "ork_veh_melee_squigbomb"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** EVILSUNZ ***

(define "Perk_Evilsunz_Squigs_1"	("Pattern_Orks_Squigs_1"	color(evilsunz) speed_modifier(1.0) health_modifier(1.0)))
