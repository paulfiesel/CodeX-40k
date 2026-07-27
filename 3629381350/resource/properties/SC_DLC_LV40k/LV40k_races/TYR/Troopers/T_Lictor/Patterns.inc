
(include "Troopers_Lictor.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Lictor_1"
	("Skeleton" color(%color) model(Lictor))
	
	("SC_Troopers_Lictor_Breed" 
		Tag()
		Health(10000)	Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 		Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_lictor_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_lictor_talons"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Lictor_1"		("Pattern_Tyr_Lictor_1"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Lictor_1"	("Pattern_Tyr_Lictor_1"	color(Leviathan) speed_modifier(1.0) health_modifier(1.0)))
