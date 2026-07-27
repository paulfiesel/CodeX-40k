
(include "Troopers_Carnifex.Inc")

; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

; // BUZZ: Tyranid Hero - Double Health and can revive.
(define "Pattern_Tyr_Old_One_Eye_1"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Carnifex/MDL/Skeleton.Inc")
	("Skeleton" color(%color) model(Carnifex_Melee) anm(Melee))
	
	("SC_Troopers_Carnifex_Breed_Melee" 
		Tag(OOE)
		Health(700000)			Health_Modifier(%health_modifier)	Health_Regen(450)
		Speed(1.25) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_oldoneeye_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_Carnifex" filling "tyr_melee_target_carnifex" 999}
		}
		{place "weapon"
			{weapon "tyr_acid_spitter_1"}
			{foresight "foresight_spitter"}
		}
	}

)

; // BUZZ: Melee Carnifex - Crushing Claws + Scything Talons
(define "Pattern_Tyr_Carnifex_Melee_1"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Carnifex/MDL/Skeleton.Inc")
	("Skeleton" color(%color) model(Carnifex_Melee) anm(Melee))
	
	("SC_Troopers_Carnifex_Breed_Melee" 
		Tag()
		Health(250000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_Carnifex" filling "tyr_melee_target_carnifex" 999}
		}
	}
)

; // BUZZ: Melee Carnifex - Devourers + Scything Talons
(define "Pattern_Tyr_Carnifex_Melee_2"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Carnifex/MDL/Skeleton_Hellfex.Inc")
	("Skeleton" color(%color) model(Carnifex_Melee_Dev) anm(Melee))
	
	("SC_Troopers_Carnifex_Breed_Melee" 
		Tag(_2)
		Health(250000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_Carnifex" filling "tyr_melee_target_carnifex" 999}
		}
		{place "weapon4"
			{weapon "tyr_hellfex_devourers"}
		}
		{place "weapon6"
			{weapon "tyr_hellfex_devourers"}
		}
	}
)

; // BUZZ: Barbed Strangler Carnifex - Strangler + Scything Talons
(define "Pattern_Tyr_Carnifex_Barbed_Strangler_1"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Carnifex/MDL/Skeleton.Inc")
	("Skeleton" color(%color) model(Carnifex_Barbed_Strangler) anm(Ranged))
	
	("SC_Troopers_Carnifex_Breed_Ranged" 
		Tag(main_strangler)
		Health(150000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_Carnifex" filling "tyr_melee_target_carnifex lowp" 999}
		}
		{place "weapon"
			{weapon "tyr_barbed_strangler_big"}
			{foresight "foresight_barbed_strangler"}
		}
	}
)

; // BUZZ: Barbed Strangler Carnifex - Strangler + Devourers
(define "Pattern_Tyr_Carnifex_Barbed_Strangler_2"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Carnifex/MDL/Skeleton.Inc")
	("Skeleton" color(%color) model(Carnifex_Barbed_Strangler_Dev) anm(Ranged))
	
	("SC_Troopers_Carnifex_Breed_Ranged" 
		Tag(main_strangler)
		Health(150000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
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
			{weapon "tyr_barbed_strangler_big"}
			{foresight "foresight_barbed_strangler"}
		}
		{place "weapon3"
			{weapon "tyr_hellfex_devourers"}
		}
		{place "weapon5"
			{weapon "tyr_hellfex_devourers"}
		}
	}
)

; // BUZZ: Venom Cannon Carnifex - Venom Cannon + Scything Talons
(define "Pattern_Tyr_Carnifex_Venom_Cannon_1"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Carnifex/MDL/Skeleton.Inc")
	("Skeleton" color(%color) model(Carnifex_Venom_Cannon) anm(Ranged))
	
	("SC_Troopers_Carnifex_Breed_Ranged" 
		Tag(main_venomcannon)
		Health(150000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_Carnifex" filling "tyr_melee_target_carnifex lowp" 999}
		}
		{place "weapon"
			{weapon "tyr_venom_cannon_big"}
			{foresight "foresight_venom_cannon"}
				
			("abm_dymamic" zeroing(5.0) dispersion(0.30))
		}
	}
)

; // BUZZ: Venom Cannon Carnifex - Venom Cannon + Devourers
(define "Pattern_Tyr_Carnifex_Venom_Cannon_2"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Carnifex/MDL/Skeleton.Inc")
	("Skeleton" color(%color) model(Carnifex_Venom_Cannon_Dev) anm(Ranged))
	
	("SC_Troopers_Carnifex_Breed_Ranged" 
		Tag(main_venomcannon)
		Health(150000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
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
			{weapon "tyr_venom_cannon_big"}
			{foresight "foresight_venom_cannon"}
				
			("abm_dymamic" zeroing(5.0) dispersion(0.30))
		}
		{place "weapon3"
			{weapon "tyr_hellfex_devourers"}
		}
		{place "weapon5"
			{weapon "tyr_hellfex_devourers"}
		}
	}
)

; // BUZZ: Hellfex - Carnifex with 4x Devourers - Has no melee capabilities.
(define "Pattern_Tyr_Hellfex_Devourer_1"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Carnifex/MDL/Skeleton_Hellfex.Inc")
	("Skeleton" color(%color) model(Hellfex_Devourer) anm(Melee))
	
	("SC_Troopers_Carnifex_Breed_Ranged" 
		Tag(hellfex)
		Health(150000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "weapon3"
			{weapon "tyr_hellfex_devourers"}
			{ai_in_manual}
		}
		{place "weapon4"
			{weapon "tyr_hellfex_devourers"}
			{ai_in_manual}
		}
		{place "weapon5"
			{weapon "tyr_hellfex_devourers"}
			{ai_in_manual}
		}
		{place "weapon6"
			{weapon "tyr_hellfex_devourers"}
			{ai_in_manual}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Old_One_Eye_1"						("Pattern_Tyr_Old_One_Eye_1"				color(kraken_ooe) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Devourer_Hellfex_1"				("Pattern_Tyr_Hellfex_Devourer_1"			color(kraken) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Melee_Carnifex_1"					("Pattern_Tyr_Carnifex_Melee_1"				color(kraken) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Barbed_Strangler_Carnifex_1"		("Pattern_Tyr_Carnifex_Barbed_Strangler_1"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Venom_Cannon_Carnifex_1"			("Pattern_Tyr_Carnifex_Venom_Cannon_1"		color(kraken) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Melee_Carnifex_2"					("Pattern_Tyr_Carnifex_Melee_2"				color(kraken) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Barbed_Strangler_Carnifex_2"		("Pattern_Tyr_Carnifex_Barbed_Strangler_2"	color(kraken) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Venom_Cannon_Carnifex_2"			("Pattern_Tyr_Carnifex_Venom_Cannon_2"		color(kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Old_One_Eye_1"					("Pattern_Tyr_Old_One_Eye_1"				color(leviathan_ooe) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Devourer_Hellfex_1"				("Pattern_Tyr_Hellfex_Devourer_1"			color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Melee_Carnifex_1"				("Pattern_Tyr_Carnifex_Melee_1"				color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Barbed_Strangler_Carnifex_1"	("Pattern_Tyr_Carnifex_Barbed_Strangler_1"	color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Venom_Cannon_Carnifex_1"		("Pattern_Tyr_Carnifex_Venom_Cannon_1"		color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Melee_Carnifex_2"				("Pattern_Tyr_Carnifex_Melee_2"				color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Barbed_Strangler_Carnifex_2"	("Pattern_Tyr_Carnifex_Barbed_Strangler_2"	color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Venom_Cannon_Carnifex_2"		("Pattern_Tyr_Carnifex_Venom_Cannon_2"		color(leviathan) speed_modifier(1.0) health_modifier(1.0)))