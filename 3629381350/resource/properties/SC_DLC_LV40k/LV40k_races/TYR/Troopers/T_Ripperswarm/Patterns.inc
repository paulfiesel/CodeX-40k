
(include "Troopers_Ripperswarm.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Ripperswarm_1"
	("Skeleton" color(%color) model(Ripperswarm))
	
	("SC_Troopers_Ripperswarm_Breed" 
		Tag()
		Health(5000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_ripperswarm_melee"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Ripperswarm_1"		("Pattern_Tyr_Ripperswarm_1"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Ripperswarm_1"	("Pattern_Tyr_Ripperswarm_1"	color(Leviathan) speed_modifier(1.0) health_modifier(1.0)))
