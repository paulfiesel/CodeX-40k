
(include "Troopers_Sporemine.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Sporemine_1"
	("Skeleton" color(%color) model(Sporemine))
	
	("SC_Troopers_Sporemine_Breed" 
		Tag()
		Health(1000)	Health_Modifier(%health_modifier)	Health_Regen(00)		
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
			{weapon "tyr_Sporemine_melee"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

(define "Perk_Sporemine_1"		("Pattern_Tyr_Sporemine_1"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))
