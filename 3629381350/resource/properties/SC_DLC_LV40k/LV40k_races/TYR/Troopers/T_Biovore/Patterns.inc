
(include "Troopers_Biovore.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Pattern_Tyr_Biovore_1"
	("Skeleton" color(%color) model(Biovore))
	
	("SC_Troopers_Biovore_Breed" 
		Tag(Biovore)
		Health(12500)	Health_Modifier(%health_modifier)	Health_Regen(00)	
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
			{weapon "Tyr_Biovore_Mortar" filled}		
		}
		{place "melee"
			{weapon "tyr_Biovore"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Biovore_1"		("Pattern_Tyr_Biovore_1"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Biovore_1"	("Pattern_Tyr_Biovore_1"	color(Leviathan) speed_modifier(1.0) health_modifier(1.0)))
