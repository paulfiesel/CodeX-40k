
(include "Troopers_Swarmlord.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Swarmlord_Melee_1"
	("Skeleton" color(%color) model(Swarmlord))
	
	("SC_Troopers_Swarmlord_Breed" 
		Tag()
		Health(500000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_swarmlord_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_Swarmlord"}
		}
	}
)


; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Melee_Swarmlord_1"			("Pattern_Tyr_Swarmlord_Melee_1" color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Melee_Swarmlord_1"		("Pattern_Tyr_Swarmlord_Melee_1" color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
