
(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Tervigon_Shared/Troopers_Tervigon.Inc")

; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Pattern_Tyr_Tervigon_1"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Tervigon_Shared/MDL/Skeleton.Inc")
	("Skeleton" color(%color) model(Tervigon))
	
	("SC_Troopers_Tervigon_Tyrannofex_Breed" 
		Tag(Tervigon)
		Health(100000)		Health_Modifier(%health_modifier)	Health_Regen(150)	; <- will fully regenerate in about 10 minutes.	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	("SC_Creatures_Size_3"
		v_perk()
		v_bone_eyes(visor_eyes) v_bone_around(visor_around)
		v_vision_eyes(human_elite) v_vision_around(human_peripheral_v2)
	)	

	{props "LV40k_DLC_prop_troopers_Tyr_Tervigon"}
	{Props "SC_plataform_prop_misc_melee"}
	
	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
			{item "lv40k_tyr_tervigon_item"}
		}
	}
	{Weaponry
		{place "melee"
			{weapon "tyr_Tervigon"}
		}
		{place "weapon2"
			{weapon "tyr_stingers"}
			{Rotate}
		}
	}
)

; ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ ;

(define "Pattern_Tyr_Tyrannofex_1"
	(include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Tervigon_Shared/MDL/Skeleton.Inc")
	("Skeleton" color(%color) model(Tyrannofex))
		
	("SC_Creatures_Size_3"
		v_perk()
		v_bone_eyes(visor_eyes) v_bone_around(visor_around)
		v_vision_eyes(human) v_vision_around(human_peripheral)
	)	
	("SC_Troopers_Tervigon_Tyrannofex_Breed" 
		Tag(Tyrannofex)
		Health(600000)		Health_Modifier(%health_modifier)	Health_Regen(00)	
		Speed(1.0) 			Speed_Modifier(%speed_modifier)
	)
	
	{props "LV40k_DLC_prop_troopers_Tyr_Tyrannofex"}
	{Props "SC_plataform_prop_misc_melee"}
		
	{targetSelector "tank_heavy"}			; // <- AI prioritize vehicles.

	; // -----------------------> WEAPONRY 

	{extender "inventory"
		{box
		}
	}
	{Weaponry
		{place "weapon1"
			{weapon "tyr_acid_cannon"}
		}
		{place "weapon2"
			{weapon "tyr_stingers"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***

(define "Perk_Kraken_Tervigon_1"		("Pattern_Tyr_Tervigon_1"	color(Kraken) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Kraken_Tyrannofex_1"		("Pattern_Tyr_Tyrannofex_1"	color(Kraken) speed_modifier(1.0) health_modifier(1.0)))

; // *** LEVIATHAN ***

(define "Perk_Leviathan_Tervigon_1"		("Pattern_Tyr_Tervigon_1"	color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Leviathan_Tyrannofex_1"	("Pattern_Tyr_Tyrannofex_1"	color(leviathan) speed_modifier(1.0) health_modifier(1.0)))
