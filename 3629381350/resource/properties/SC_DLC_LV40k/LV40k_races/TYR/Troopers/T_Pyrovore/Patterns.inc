
(include "Troopers_Pyrovore.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Pyrovore_1"
	("Skeleton" color(%color) model(Pyrovore))
	
	("SC_Troopers_Pyrovore_Breed" 
		Tag(Pyrovore)
		Health(25000)	Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 		Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "weapon"
			{weapon "Tyr_Flamespurt" filled}		
		}
		{place "melee"
			{weapon "tyr_Pyrovore"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Pyrovore_1"	("Pattern_Tyr_Pyrovore_1"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Pyrovore_1"	("Pattern_Tyr_Pyrovore_1"	color(Leviathan) speed_modifier(1.0) health_modifier(1.0)))
