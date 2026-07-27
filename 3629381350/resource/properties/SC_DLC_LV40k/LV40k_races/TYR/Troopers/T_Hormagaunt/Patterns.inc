
(include "Troopers_Hormagaunt.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Hormagaunts_1"
	("Skeleton" color(%color) model(Hormagaunt))
	
	("SC_Troopers_Hormagaunts_Breed" 
		Tag()
		Health(600)		Health_Modifier(%health_modifier)	Health_Regen(00)	
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
			{weapon "tyr_gaunt_talons"}
		}
	}
)

(define "Pattern_Tyr_Hormagaunts_2"
	("Skeleton" color(%color) model(Hormagaunt_slasher))
	
	("SC_Troopers_Hormagaunts_Breed" 
		Tag(Adapted)
		Health(1000)	Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.2) 		Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_gaunt_talons"}
		}
	}
)


; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Hormagaunts_1"		("Pattern_Tyr_Hormagaunts_1"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Hormagaunts_2"		("Pattern_Tyr_Hormagaunts_2"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Hormagaunts_1"	("Pattern_Tyr_Hormagaunts_1"	color(Leviathan) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Hormagaunts_2"	("Pattern_Tyr_Hormagaunts_2"	color(Leviathan) speed_modifier(1.0) health_modifier(1.0)))
