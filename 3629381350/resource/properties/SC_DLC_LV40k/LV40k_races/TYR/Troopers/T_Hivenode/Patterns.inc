
(include "Troopers_Hivenode.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Hivenode_1"
	("Skeleton" color(%color) model(Hivenode))
	
	("SC_Troopers_Hivenode_Breed" 
		Tag()
		Health(2000)		Health_Modifier(%health_modifier)	Health_Regen(00)		
	)
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			; [...]
		}
	}
	{Weaponry
		; [...]
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Hivenode_1"		("Pattern_Tyr_Hivenode_1"	color(kraken) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Hivenode_1"		("Pattern_Tyr_Hivenode_1"	color(leviathan) health_modifier(1.0)))
