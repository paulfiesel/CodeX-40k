
(include "Troopers_Warrior.Inc")
(include "MDL/Skeleton.Inc")


; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;


(define "Pattern_Tyr_Warriors_Bonesword_1"
	("Skeleton" color(%color) model(Warrior_bonesword))
	
	("SC_Troopers_Warriors_Breed" 
		Tag(bonesword)
		Health(15000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.3) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_synapse_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_warrior_bonesword"}
		}
	}
)


(define "Pattern_Tyr_Warriors_Talons_1"
	("Skeleton" color(%color) model(Warrior_talons))
	
	("SC_Troopers_Warriors_Breed" 
		Tag(talons)
		Health(9000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_synapse_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_warrior_talons"}
		}
	}
)


; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Warrior_Bonesword_1"		("Pattern_Tyr_Warriors_Bonesword_1"	color(kraken_gl) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Warrior_Talons_1"			("Pattern_Tyr_Warriors_Talons_1"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Warrior_Bonesword_1"	("Pattern_Tyr_Warriors_Bonesword_1"	color(Leviathan_gl) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Warrior_Talons_1"		("Pattern_Tyr_Warriors_Talons_1"	color(Leviathan) speed_modifier(1.0) health_modifier(1.0)))
