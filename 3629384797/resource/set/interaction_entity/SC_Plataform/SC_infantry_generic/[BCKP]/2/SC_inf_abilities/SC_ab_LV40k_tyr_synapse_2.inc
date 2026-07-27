
; // Hive Tyrant Synapse Aura

;	<<<< ------------------------------------------------------------------------------>>>>			 
;	<< [=============== Ability: [DLC - LV40k / Tyranid Synapse Lvl2 Aura] ===============] >>
;	<<<<------------------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Tyr_Synapse"
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse"}
	{Tags remove "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"}

	; // BUZZ: who can use this ability:
	{Delay 1.0
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"		{tags add "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"}}
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"	{tags add "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"}}
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"	{tags add "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"}}
		
		{if prop "LV40k_dlc_prop_troopers_Tyr_Hiveguard"			{tags add "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"}}
		{if prop "LV40k_dlc_prop_troopers_Tyr_Hormagaunt"			{tags add "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"}}
	}
	
	{if prop "human"	
		{Add_view "fx_ork_aura_warboss" "SC_AB_FX_Ability_Tyr_Synapse" "body"}
	else			
		{Add_view "fx_ork_aura_warboss" "SC_AB_FX_Ability_Tyr_Synapse" "fx_aura"}
	}
)
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Tyr_Synapse"
	{view stop "SC_AB_FX_Ability_Tyr_Synapse"}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_Tyr_Synapse"
	;//("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_Tyr_Synapse) do({Call_Synced "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects"}))
	;//("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_Tyr_Synapse) do({Call "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects"}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects" ;} // sync
	{if not dead
		{if not tagged "_bleedout_"
			{if tagged "SC_AB_Tag_Can_Use_AB_Tyr_Synapse"
				{if not tagged "SC_AB_Tag_Aura_Warboss";}
					
					; // Buff visual feedback..
					{view start "SC_AB_FX_Ability_Tyr_Synapse"}	
					
					; // Buff unit effects [Healing and Damage boost]	----	Heals "X" hp per use
					{Delay 0.1	
						{if not dead
							{if prop "human" 								{health_damage_count -25	{effects "" "" "" "" ""}}	
							else prop "SC_plataform_prop_troopers_size1"	{health_damage_count -50	{effects "" "" "" "" ""}}	;//{Call "SC_TP_EXP_Call_Clear_Tags"}
							else prop "SC_plataform_prop_troopers_size2"	{health_damage_count -90	{effects "" "" "" "" ""}}	;//{Call "SC_TP_EXP_Call_Clear_Tags"}
							else prop "SC_plataform_prop_troopers_size3"	{health_damage_count -140	{effects "" "" "" "" ""}}	;//{Call "SC_TP_EXP_Call_Clear_Tags"}
							}
						}
					}
					{Tags add "SC_AB_Tag_Aura_Warboss"}				
					{Tags add "SC_INF_Tag_Buff_Bul_tier1"}
					
					; // Duration of the buff...
					{Delay 30 "SC_AB_Delay_Ability_Warboss_Duration"
						{Tags remove "SC_AB_Tag_Aura_Warboss"}
						{view pause "SC_AB_FX_Ability_Tyr_Synapse"}
						{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
					}
				}
			}
		}
	}
}