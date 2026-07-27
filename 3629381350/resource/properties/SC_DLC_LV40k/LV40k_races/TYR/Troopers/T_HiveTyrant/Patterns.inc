
(include "Troopers_HiveTyrant.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

; // Melee variant is faster.

(define "Pattern_Tyr_HiveTyrant_Melee_1"
	("Skeleton" color(%color) model(HiveTyrant_Melee) anm(Melee))
	
	("SC_Troopers_HiveTyrant_Breed" 
		Tag()
		Health(300000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.12) 		Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_hivetyrant_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_HiveTyrant" filling "tyr_melee_target_hivetyrant" 999}
		}
	}
)

(define "Pattern_Tyr_HiveTyrant_Venom_Cannon_1"
	("Skeleton" color(%color) model(HiveTyrant_Venom_Cannon) anm(Ranged))
	
	("SC_Troopers_HiveTyrant_Breed" 
		Tag()
		Health(300000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_hivetyrant_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_HiveTyrant" filling "tyr_melee_target_hivetyrant lowp" 999}
		}
		{place "weapon"
			{weapon "tyr_venom_cannon_big_v2"}
		}
	}
)


; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Melee_HiveTyrant_1"				("Pattern_Tyr_HiveTyrant_Melee_1"				color(kraken) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Venom_Cannon_HiveTyrant_1"			("Pattern_Tyr_HiveTyrant_Venom_Cannon_1"		color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Melee_HiveTyrant_1"				("Pattern_Tyr_HiveTyrant_Melee_1"				color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Venom_Cannon_HiveTyrant_1"		("Pattern_Tyr_HiveTyrant_Venom_Cannon_1"		color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
