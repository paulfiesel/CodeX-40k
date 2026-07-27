
(Define "SC_INF_Effects_Define_Spawn_Event"
	{tags remove "SC_INF_Tag_Buff_Resistance_tier3"}
	{tags remove "SC_INF_Tag_Buff_Resistance_tier2"}
	{tags remove "SC_INF_Tag_Buff_Resistance_tier1"}
)

(Define "SC_INF_Effects_Define_Damage_Relation"
	{if prop "human"							
		{if tagged "sc_skin_tag_trait_heavy_infantry" 
			("human_health_x" c(%d_heavy_infantry) x(0.5))
		else
			("human_health_x" c(%d_normal) x(0.8))
		}
	else prop "SC_plataform_prop_troopers_size1" ("human_health"	c(%d_normal))
	else prop "SC_plataform_prop_troopers_size2" ("human_health"	c(%d_heavy_infantry))
	else prop "SC_plataform_prop_troopers_size3" ("human_health"	c(%d_heavy_infantry))
	else
		; // Creatures size 1,2,3
		("human_health"	c(%d_heavy_infantry))
	}
)

; <<<<	====================================================================================================================================================== >>>>
; // SC DLC LV40k - Warhammer Effects
; <<<<	====================================================================================================================================================== >>>>

; // Generic - Gas Tier 1:

{On "SC_INF_Call_DLC_LV40k_Gas_T1_Effect" sync
	{if tagged "sc_skin_tag_trait_gas_resistance_t1"
		; [...]
	else
		; [...]
	}
}

; // Generic - Poison Tier 1:

{On "SC_INF_Call_DLC_LV40k_Poison_T1_Effect" sync
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope"
		; [...]
	else
		{Kill_delay "tyr_poison_after_damage_Delay"}
		
		(Define "LV40k_tyranid_poison_after_damage"
			{Delay %c	"tyr_poison_after_damage_Delay" 
				{if not dead
					{If not tagged "SC_INF_Tag_Buff_Resistance_tier1"
						{If rand 0.1 {Talk "panicking"}}
						
						{Spawn "bloodsparks_mini_dead" "head" x} {Spawn "det_tyr_devourer_air" "head" x}
						{Spawn "bloodsparks_mini_dead" "fx_generic_head" x} {Spawn "det_tyr_devourer_air" "fx_generic_head" x}	; <- fauna
						
						{Damage_Report "basis"	"<f(impact)><c(RED)>POISONED!"}
						
						("SC_INF_Effects_Define_Damage_Relation" d_normal(100) d_heavy_infantry(50))
					}
				}
			}
		)
		("LV40k_tyranid_poison_after_damage" c(1.0))
		("LV40k_tyranid_poison_after_damage" c(3.0))
		("LV40k_tyranid_poison_after_damage" c(6.0))
		("LV40k_tyranid_poison_after_damage" c(9.0))
		("LV40k_tyranid_poison_after_damage" c(12.0))
		("LV40k_tyranid_poison_after_damage" c(15.0))
		("LV40k_tyranid_poison_after_damage" c(20.0))
	}
}

; // Tyranids - Devourer Worms:
 
{On "SC_INF_Call_DLC_LV40k_Devourer_Worm_Effect" sync
	{Kill_delay "tyr_devourer_worm_after_damage"}
	{Start_sound "SC_Plataform/SC_fx/sc_misc_s2/halo_infection_bite"} 
	
	(Define "LV40k_tyranid_worm_after_damage"
		{Delay %c	"tyr_devourer_worm_after_damage" 
			{if not dead
				{If not tagged "SC_INF_Tag_Buff_Resistance_tier1"
					{Start_sound "SC_Plataform/SC_fx/sc_misc_s2/halo_infection_bite"} 
					{If rand 0.1 {Talk "panicking"}}
					
					{Spawn "bloodsparks_mini_dead" "body" x} {Spawn "det_tyr_devourer_air" "body" x}
					{Spawn "bloodsparks_mini_dead" "fx_generic_body" x} {Spawn "det_tyr_devourer_air" "fx_generic_body" x}	; <- fauna
					
					{Damage_Report "basis"	"<f(impact)><c(GREEN)>BRAINLEECH!"}
					
					("SC_INF_Effects_Define_Damage_Relation" d_normal(60) d_heavy_infantry(30))
				}
			}
		}
	)
	("LV40k_tyranid_worm_after_damage" c(1.0))
	("LV40k_tyranid_worm_after_damage" c(3.0))
	("LV40k_tyranid_worm_after_damage" c(5.0))
	("LV40k_tyranid_worm_after_damage" c(7.0))
	("LV40k_tyranid_worm_after_damage" c(9.0))
	("LV40k_tyranid_worm_after_damage" c(11.0))
	("LV40k_tyranid_worm_after_damage" c(13.0))
}
