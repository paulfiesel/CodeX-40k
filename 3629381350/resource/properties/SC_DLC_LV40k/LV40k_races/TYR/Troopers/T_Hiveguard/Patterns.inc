
(include "Troopers_Hiveguard.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Hiveguard_1"
	("Skeleton" color(%color) model(Hiveguard))
	
	("SC_Troopers_Hiveguard_Breed" 
		Tag()
		Health(75000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.00) 		Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_hiveguard_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_hiveguard" filling "tyr_melee_target_hiveguard" 999}
		}
	}
)

(define "Pattern_Tyr_Hiveguard_Impaler_1"
	("Skeleton" color(%color) model(Hiveguard_Impaler))
	
	("SC_Troopers_Hiveguard_Breed" 
		Tag(Ranged main_impaler)
		Health(50000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_hiveguard_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_hiveguard" filling "tyr_melee_target_hiveguard lowp" 999}
		}
		{place "weapon1"
			{weapon "tyr_impaler_cannon"}
			{foresight "foresight_impaler"}
		}
	}
)

(define "Pattern_Tyr_Hiveguard_Shockcannon_1"
	("Skeleton" color(%color) model(Hiveguard_Shockcannon))
	
	("SC_Troopers_Hiveguard_Breed" 
		Tag(Ranged main_shockcannon)
		Health(50000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_hiveguard_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_hiveguard" filling "tyr_melee_target_hiveguard lowp" 999}
		}
		{place "weapon1"
			{weapon "tyr_shockcannon"}
			{foresight "foresight_shockcannon"}
			
			("abm_dymamic" zeroing(3.0) dispersion(0.20))
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Hiveguard_1"			("Pattern_Tyr_Hiveguard_1"				color(kraken) speed_modifier(1.0) health_modifier(1)))
(define "Perk_Kraken_Hiveguard_Imp_1"		("Pattern_Tyr_Hiveguard_Impaler_1"		color(kraken_gl) speed_modifier(1.0) health_modifier(1)))
(define "Perk_Kraken_Hiveguard_Shk_1"		("Pattern_Tyr_Hiveguard_Shockcannon_1"	color(kraken_gl) speed_modifier(1.0) health_modifier(1)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Hiveguard_1"		("Pattern_Tyr_Hiveguard_1"				color(Leviathan) speed_modifier(1.0) health_modifier(1)))
(define "Perk_Leviathan_Hiveguard_Imp_1"	("Pattern_Tyr_Hiveguard_Impaler_1"		color(Leviathan_gl) speed_modifier(1.0) health_modifier(1)))
(define "Perk_Leviathan_Hiveguard_Shk_1"	("Pattern_Tyr_Hiveguard_Shockcannon_1"	color(Leviathan_gl) speed_modifier(1.0) health_modifier(1)))
