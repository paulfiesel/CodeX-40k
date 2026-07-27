
(include "Troopers_Exocrine.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Exocrine_1"
	("Skeleton" color(%color) model(Exocrine))
	
	("SC_Troopers_Exocrine_Breed" 
		Tag()
		Health(35000)		Health_Modifier(%health_modifier)	Health_Regen(00)		
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "weapon"
			{weapon "Tyr_Bioplasmic_Cannon" filled}		
		}
		{place "melee"
			{weapon "tyr_Exocrine"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Exocrine_1"	("Pattern_Tyr_Exocrine_1"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Exocrine_1"	("Pattern_Tyr_Exocrine_1"	color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
