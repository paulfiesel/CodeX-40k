
; // Zoanthropes and Warriors Synapse Aura

;	<<<< ----------------------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Tyranid Synapse Lvl1 Aura] ===============] >>
;	<<<<------------------------------------------------------------------------------------>>>>			 

(Define "SC_AB_Spawn_Tyr_Synapse_1"
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse"}
	{Tags remove "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"}

	; // BUZZ: who can use this ability:
	{Delay 1.0
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"	{Delay 5.0 {Call "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}}
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"	{Delay 5.0 {Call "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}}
		{if prop "LV40k_dlc_prop_troopers_Tyr_Warrior"				{Delay 5.0 {Call "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}}
		{if tagged "SC_INF_Tag_Unit_Faction_Tyranids"				{tags add "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"}}
	}
	{if prop "human"	
		{Add_view "fx_tyr_synapse_convulsion" "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken" "#trm_rig-bip01_head"}
		{Add_view "fx_tyr_synapse_convulsion" "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken" "#rvn_rig-bip01_head"}
		
		{Add_view "fx_tyr_synapse_under_1" "SC_AB_FX_Ability_Tyr_Synapse" "#trm_rig-bip01_pelvis"}
		{Add_view "fx_tyr_synapse_under_1" "SC_AB_FX_Ability_Tyr_Synapse" "#rvn_rig-bip01_spine3"}
		
	;//	{Add_view "fx_tyr_synapse_eyes_small_1" "SC_AB_FX_Ability_Tyr_Synapse" "fx_tyr_syn_eye_r"}
	;//	{Add_view "fx_tyr_synapse_eyes_small_1" "SC_AB_FX_Ability_Tyr_Synapse" "fx_tyr_syn_eye_l"}
	else			
		{Add_view "fx_tyr_synapse_convulsion" "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken" "fx_head"}
		
		{Add_view "fx_tyr_synapse_under_1" "SC_AB_FX_Ability_Tyr_Synapse" "fx_aura"}
	;//	{Add_view "fx_tyr_synapse_eyes_small_1" "SC_AB_FX_Ability_Tyr_Synapse" "fx_tyr_syn_eye_r"}
	;//	{Add_view "fx_tyr_synapse_eyes_small_1" "SC_AB_FX_Ability_Tyr_Synapse" "fx_tyr_syn_eye_l"}
	}
)
	
{On "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"
	{if prop "LV40k_dlc_prop_troopers_Tyr_Warrior"	
		("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_1) where(basis) args())
		{Delay 6 32 "LV40k_Tyr_Synapse_1_Aura_Delay"	{If not dead	{Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}}
	}
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
		("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_1) where(basis) args())
		{Delay 8 24 "LV40k_Tyr_Synapse_1_Aura_Delay"	{If not dead	{Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}}
	}
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"	
		("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_2) where(basis) args())
		{Delay 8.0 "LV40k_Tyr_Synapse_1_Aura_Delay"		{If not dead	{Call "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}}
	}
}

; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Tyr_Synapse_1"
	{Kill_Delay "LV40k_Tyr_Synapse_1_Aura_Delay"}		; // <- End aura on death...
	{view stop "SC_AB_FX_Ability_Tyr_Synapse"}
	
	{if prop "LV40k_dlc_prop_troopers_Tyr_Warrior"				{if rand 0.22 	{Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Warrior"}}}
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"	{if rand 0.36 	{Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Warrior"}}}
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"	{Call "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Zoanthrope"}}
)

{on "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Warrior"	{Spawn "fx_tyr_synapse_break_1"} ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_1_broken) where(basis) args())}
{on "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Zoanthrope"	{Spawn "fx_tyr_synapse_break_1"} ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_2_broken) where(basis) args())}

; <<<<	===================	Ability Event: Contact	===================	>>>>	

; // Zoanthrope synapse break has higher chance to kill [...]

(Define "SC_AB_Contact_Tyr_Synapse_1"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_tyr_synapse_1) do({Call "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects"}))
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_tyr_synapse_2) do({Call "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects"}))
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_tyr_synapse_1_broken) do({If rand 0.3 {Call_Synced "SC_AB_Call_ability_Tyr_Synapse_Break_Effects"}}))
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_tyr_synapse_2_broken) do({If rand 0.5 {Call_Synced "SC_AB_Call_ability_Tyr_Synapse_Break_Effects"}}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

; // no need to check personage for tyranids!!
	
{on "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects" 
	{if not dead
		{if tagged "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"
			{if not tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
				{if not prop "LV40k_dlc_prop_troopers_Tyr_Warrior"
					{if not tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"	;} // BUZZ: <- aura has no effect on transmitter, only receptors.
						{if not tagged "SC_AB_Tag_Aura_Tyr_Synapse"					;}
						
							; // Buff visual feedback..
							{view start "SC_AB_FX_Ability_Tyr_Synapse"}	
							
							; // Buff unit effects [Healing and Damage boost]	----	Heals "X" hp per use
							{Delay 0.1	
								{if not dead
									{if prop "human" 								{health_damage_count -25	{effects "" "" "" "" ""}}	
									else prop "SC_plataform_prop_troopers_size1"	{health_damage_count -100	{effects "" "" "" "" ""}}	;//{Call "SC_TP_EXP_Call_Clear_Tags"}
									else prop "SC_plataform_prop_troopers_size2"	{health_damage_count -250	{effects "" "" "" "" ""}}	;//{Call "SC_TP_EXP_Call_Clear_Tags"}
									else prop "SC_plataform_prop_troopers_size3"	{health_damage_count -500	{effects "" "" "" "" ""}}	;//{Call "SC_TP_EXP_Call_Clear_Tags"}
									else prop "SC_plataform_prop_troopers_size4"	{health_damage_count -1000	{effects "" "" "" "" ""}}	;//{Call "SC_TP_EXP_Call_Clear_Tags"}
									else prop "SC_plataform_prop_troopers_size5"	{health_damage_count -1500	{effects "" "" "" "" ""}}	;//{Call "SC_TP_EXP_Call_Clear_Tags"}
									else prop "SC_plataform_prop_troopers_size6"	{health_damage_count -2500	{effects "" "" "" "" ""}}	;//{Call "SC_TP_EXP_Call_Clear_Tags"}
									}
								}
							}
							{Tags add "SC_AB_Tag_Aura_Tyr_Synapse"}				
							{Tags add "SC_INF_Tag_Buff_Bul_tier1"}
							
							; // Duration of the buff...
							{Delay 20 "SC_AB_Delay_Ability_Tyr_Synapse_Duration"
								{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse"}
								{view pause "SC_AB_FX_Ability_Tyr_Synapse"}
								{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
							}
						else
							
							; // Reset buff timeout timer.
							{Kill_Delay "SC_AB_Delay_Ability_Tyr_Synapse_Duration"}
							
							{Delay 20 "SC_AB_Delay_Ability_Tyr_Synapse_Duration"
								{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse"}
								{view pause "SC_AB_FX_Ability_Tyr_Synapse"}
								{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
							}
						}
					}
				}
			}
		}
	}
}

{on "SC_AB_Call_ability_Tyr_Synapse_Break_Effects"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"		
		{Call "Die"} {view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
	}
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener"	
		{Call "Die"} {view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
	}
	{if prop "LV40k_dlc_prop_troopers_Tyr_Hormagaunt"	
		{Call "Die"} {view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
	}
	{if prop "LV40k_dlc_prop_troopers_Tyr_Ripperswarm"	
		{Call "Die"} {view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
	}
}