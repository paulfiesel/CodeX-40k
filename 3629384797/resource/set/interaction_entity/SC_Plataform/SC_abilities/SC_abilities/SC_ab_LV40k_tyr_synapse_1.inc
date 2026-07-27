
; // Zoanthropes and Warriors Synapse Aura

;	<<<< ------------------------------------------------------------------------------>>>>			 
;	<< [=============== Ability: [DLC - LV40k / Tyranid Synapse Aura] ===============] >>
;	<<<<------------------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Tyr_Synapse_1"
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Heal"}
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Buff"}
	
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_2_Heal"}
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_2_Buff"}
	
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_3_Heal"}
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_3_Buff"}
	
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_1"}
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_2"}		
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_3"}		
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_1"}	; // <- Warriors and Zoanthropes
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_2"}	; // <- Hive Tyrant
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_3"}	; // <- Swarmlord

	; // BUZZ: SWARMLORD AND HIVE TYRANT AURAS ARE CONTROLLED THROUGH TRIGGERS [...]

	{if prop "human"	
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener"
			{Add_view "fx_tyr_synapse_convulsion"	"SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"	"#rvn_rig-bip01_head"}
			{Add_view "fx_tyr_synapse_under_1_s1"	"SC_AB_FX_Ability_Tyr_Synapse_1"			"#rvn_rig-bip01_spine3"}
			{Add_view "fx_tyr_synapse_under_1_s1"	"SC_AB_FX_Ability_Tyr_Synapse_2"			"#rvn_rig-bip01_spine3"}
			{Add_view "fx_tyr_synapse_under_2_s1"	"SC_AB_FX_Ability_Tyr_Synapse_3"			"#rvn_rig-bip01_spine3"}
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope"
			{Add_view "fx_tyr_synapse_convulsion"	"SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"	"#vth_rig-neck_01_02SHJnt"}
			{Add_view "fx_tyr_synapse_under_1_s1"	"SC_AB_FX_Ability_Tyr_Synapse_1"			"#vth_rig-ROOTSHJnt"}
			{Add_view "fx_tyr_synapse_under_1_s1"	"SC_AB_FX_Ability_Tyr_Synapse_2"			"#vth_rig-ROOTSHJnt"}
			{Add_view "fx_tyr_synapse_under_2_s1"	"SC_AB_FX_Ability_Tyr_Synapse_3"			"#vth_rig-ROOTSHJnt"}
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"
			{Add_view "fx_tyr_synapse_convulsion"	"SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"	"#trm_rig-bip01_head"}
			{Add_view "fx_tyr_synapse_under_1_s1"	"SC_AB_FX_Ability_Tyr_Synapse_1"			"#trm_rig-bip01_pelvis"}
			{Add_view "fx_tyr_synapse_under_1_s1"	"SC_AB_FX_Ability_Tyr_Synapse_2"			"#trm_rig-bip01_pelvis"}
			{Add_view "fx_tyr_synapse_under_2_s1"	"SC_AB_FX_Ability_Tyr_Synapse_3"			"#trm_rig-bip01_pelvis"}
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
			{Add_view "fx_tyr_synapse_convulsion"	"SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"	"#wrr_rig-bip01_head"}
			{Add_view "fx_tyr_synapse_under_2_s1"	"SC_AB_FX_Ability_Tyr_Synapse_3"			"#wrr_rig-bip01_head"}
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_1"}
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"
			{Add_view "fx_tyr_synapse_convulsion"	"SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"	"#zth_rig-bip01_head"}
			{Add_view "fx_tyr_synapse_under_2_s1"	"SC_AB_FX_Ability_Tyr_Synapse_3"			"#zth_rig-bip01_head"}
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_1"}
		}
	else			
		{Add_view "fx_tyr_synapse_convulsion"	"SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"	"fx_head"}
		
		; // BUZZ: trooper generics
		{if prop "SC_plataform_prop_troopers_size6"
			{Add_view "fx_tyr_synapse_under_1_s3"		"SC_AB_FX_Ability_Tyr_Synapse_1"			"fx_aura"}
			{Add_view "fx_tyr_synapse_under_1_s3"		"SC_AB_FX_Ability_Tyr_Synapse_2"			"fx_aura"}
			{Add_view "fx_tyr_synapse_under_2_s3"		"SC_AB_FX_Ability_Tyr_Synapse_3"			"fx_aura"}
		else prop "SC_plataform_prop_troopers_size5"
			{Add_view "fx_tyr_synapse_under_1_s2"		"SC_AB_FX_Ability_Tyr_Synapse_1"			"fx_aura"}
			{Add_view "fx_tyr_synapse_under_1_s2"		"SC_AB_FX_Ability_Tyr_Synapse_2"			"fx_aura"}
			{Add_view "fx_tyr_synapse_under_2_s3"		"SC_AB_FX_Ability_Tyr_Synapse_3"			"fx_aura"}
		else prop "SC_plataform_prop_troopers_size4"
			{Add_view "fx_tyr_synapse_under_1_s2"		"SC_AB_FX_Ability_Tyr_Synapse_1"			"fx_aura"}
			{Add_view "fx_tyr_synapse_under_1_s2"		"SC_AB_FX_Ability_Tyr_Synapse_2"			"fx_aura"}
			{Add_view "fx_tyr_synapse_under_2_s2"		"SC_AB_FX_Ability_Tyr_Synapse_3"			"fx_aura"}
		else
			{Add_view "fx_tyr_synapse_under_1_s1"		"SC_AB_FX_Ability_Tyr_Synapse_1"			"fx_aura"}
			{Add_view "fx_tyr_synapse_under_1_s1"		"SC_AB_FX_Ability_Tyr_Synapse_2"			"fx_aura"}
			{Add_view "fx_tyr_synapse_under_2_s1"		"SC_AB_FX_Ability_Tyr_Synapse_3"			"fx_aura"}
		}
		
		; // BUZZ: trooper specifics
		{if prop "LV40k_dlc_prop_troopers_Tyr_Swarmlord"		
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_3"}
		else prop "LV40k_DLC_prop_troopers_Tyr_HiveTyrant"	
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_2"}	
		else prop "LV40k_dlc_prop_troopers_Tyr_Tervigon"		
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_1"}
		else prop "LV40k_dlc_prop_troopers_Tyr_Warrior"		
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_1"}
		}
	}
	{If tagged "SC_INF_Tag_Unit_Faction_Tyranids"			
		{If tagged "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_1"
			{Delay 5.0 "LV40k_Tyr_Synapse_1_Aura_Delay" {Call "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_3"}
			
		else tagged "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_2"
			; // Works through map Triggers [...]
			
		else tagged "SC_AB_Tag_Aura_Tyr_Synapse_Transmitter_3"
			; // Works through map Triggers [...]
			
		else
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_1"}
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_2"}
			{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_3"}
		}
	}
)
	
{On "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"
	{if tagged "SC_AB_Tag_Aura_Tyr_Synapse_2_Buff"		
	else tagged "SC_AB_Tag_Aura_Tyr_Synapse_3_Buff"		
	else
		
		; {} // BUZZ: Warrior Tyranid Prime has a larger AOE.
		(Define "Warrior_Synapse"
			{if tagged "prime"		("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_2) where(basis) args())
			else					("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_1) where(basis) args())	
			}
			{Delay 12.0 "LV40k_Tyr_Synapse_1_Aura_Delay"		{If not dead	{Call "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}}
		)
		
		{if prop "LV40k_dlc_prop_troopers_Tyr_Warrior"		
			("Warrior_Synapse")
			
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
			("Warrior_Synapse")
		
		else prop "LV40k_dlc_prop_troopers_Tyr_Tervigon"		
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_2) where(basis) args())
			{Delay 6.0 "LV40k_Tyr_Synapse_1_Aura_Delay"	{If not dead	{Call "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}}
			
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"	
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_2) where(basis) args())
			{Delay 8.0 "LV40k_Tyr_Synapse_1_Aura_Delay"	{If not dead	{Call "SC_AB_Call_ability_Tyr_Synapse_1_Spawn_Aura"}}}
		}
	}
}
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

; // BUZZ: Warriors have RND chance of releasing backlash when dying, use SYNC
{on "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Warrior"
	{Spawn "fx_tyr_synapse_break_1"} 
	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_1_broken) where(basis) args())
}

(Define "SC_AB_Die_Tyr_Synapse_1"
	{if not tagged "SC_AB_Tag_Aura_Tyr_Synapse_3_Buff"
		{if prop "LV40k_dlc_prop_troopers_Tyr_Warrior"		
			{if tagged "adapted"	{if rand 0.25 	{Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Warrior"}}
			else					{if rand 0.50 	{Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Warrior"}}
			}
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"		
			{if tagged "prime"	
			else tagged "adapted"	{if rand 0.25 	{Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Warrior"}}
			else					{if rand 0.50 	{Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Break_Synapse_Warrior"}}
			}
		else prop "LV40k_dlc_prop_troopers_Tyr_Tervigon"	
			{Spawn "fx_tyr_synapse_break_1" "fx_Synapse" x} 
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_2_broken) where(basis) args())

		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"	
			{Spawn "fx_tyr_synapse_break_1"} 	
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_tyr_synapse_2_broken) where(basis) args())
			
		else prop "LV40k_dlc_prop_troopers_Tyr_Swarmlord"	
			{Spawn "fx_tyr_synapse_break_2"} 	
			
		else prop "LV40k_DLC_prop_troopers_Tyr_HiveTyrant"	
			{Spawn "fx_tyr_synapse_break_2"} 	
		}
	}
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_3_Buff"}
	{Tags remove "SC_INF_Tag_Buff_Bul_tier3"}
	{view stop "SC_AB_FX_Ability_Tyr_Synapse_3"}
	
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_2_Buff"}
	{Tags remove "SC_INF_Tag_Buff_Bul_tier2"}
	{view stop "SC_AB_FX_Ability_Tyr_Synapse_2"}
	
	{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Buff"}
	{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
	{view pause "SC_AB_FX_Ability_Tyr_Synapse_1"}
	{Kill_Delay "LV40k_Tyr_Synapse_1_Aura_Delay"}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

; // BUZZ: Zoanthrope synapse break will always take effect [...]

(Define "SC_AB_Contact_Tyr_Synapse_1"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_tyr_synapse_1) do({Call "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects_1"}))
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_tyr_synapse_2) do({Call "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects_1"}))
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_tyr_synapse_1_broken) do({If rand 0.08 {Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Break_Effects"}}))
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_tyr_synapse_2_broken) do({If rand 0.24 {Call_Synced "SC_AB_Call_ability_Tyr_Synapse_1_Break_Effects"}}))
)

; <<<<	===============================================================================================	>>>>	
; // SYNAPSE AURA LEVEL 1 
; <<<<	===============================================================================================	>>>>

; // BUZZ: no need to check personage for tyranids, they can't be revived!!
	
{on "SC_AB_Call_ability_Tyr_Synapse_1_Break_Effects"
	{if tagged "SC_AB_Tag_Aura_Tyr_Synapse_2_Buff"
	else dead
	else
		{if prop "LV40k_dlc_prop_troopers_Tyr_Lictor"		
			; [...]
			
		else prop "LV40k_dlc_prop_troopers_Tyr_Genestealer"	
			; [...]
				
		else prop "LV40k_dlc_prop_troopers_Tyr_Tyrannofex"	
			; [...]
			
		else prop "LV40k_dlc_prop_troopers_Tyr_Carnifex"
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 4.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			("human_health" c(8000))
			
		else prop "LV40k_dlc_prop_troopers_Tyr_Exocrine" 	
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 4.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			("human_health" c(5000))
			
		else prop "LV40k_dlc_prop_troopers_Tyr_Hiveguard"	
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 4.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			("human_health" c(4000))
			
		else prop "LV40k_DLC_prop_troopers_Tyr_Pyrovore_Biovore"	
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 4.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			("human_health" c(2000))
			
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope" 	
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 4.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			("human_health" c(600))
			
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener" 	
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 4.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			("human_health" c(600))
		
		; // BUZZ: Anything lesser will just die!
		
		else tagged "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_1"
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			
			{Call_Synced "die"} 	; // BUZZ: <- GLITCH - Sometimes units happen not to die in ONLINE MP??
		}
		
		{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Heal"}
		{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Buff"}
		{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
		{view pause "SC_AB_FX_Ability_Tyr_Synapse_1"}
	}
}

{on "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects_1" 

	{if tagged "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_1"		
		{if not dead		
		
			{if not tagged "SC_AB_Tag_Aura_Tyr_Synapse_1_Heal"
				{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_1_Heal"}
				{Delay 0.5	
					{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Heal"}
					
					{if prop "human" 								("SC_INF_Define_Heal" c(10))	
					else prop "SC_plataform_prop_troopers_size1"	("SC_INF_Define_Heal" c(10))	
					else prop "SC_plataform_prop_troopers_size2"	("SC_INF_Define_Heal" c(50))	
					else prop "SC_plataform_prop_troopers_size3"	("SC_INF_Define_Heal" c(100))	
					else prop "SC_plataform_prop_troopers_size4"	("SC_INF_Define_Heal" c(200))	
					else prop "SC_plataform_prop_troopers_size5"	("SC_INF_Define_Heal" c(400))	
					else prop "SC_plataform_prop_troopers_size6"	("SC_INF_Define_Heal" c(800))	
					}
				}
			}
			{if not tagged "SC_AB_Tag_Aura_Tyr_Synapse_1_Buff"			; {}
			
				{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_1_Buff"}		
				
				; // Buff visual feedback..
				{view start "SC_AB_FX_Ability_Tyr_Synapse_1"}	
						
				{Tags add "SC_INF_Tag_Buff_Bul_tier1"}	; // <- Buff tag (1/3)
				
				; // Duration of the buff...
				{Delay 20 "SC_AB_Delay_Ability_Tyr_Synapse_1_Buff_Duration"
					{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Buff"}
					{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
					{view pause "SC_AB_FX_Ability_Tyr_Synapse_1"}
				}
			else
				
				; // Reset buff timeout timer.
				{Kill_Delay "SC_AB_Delay_Ability_Tyr_Synapse_1_Buff_Duration"}
				
				{Delay 20 "SC_AB_Delay_Ability_Tyr_Synapse_1_Duration"
					{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Buff"}
					{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
					{view pause "SC_AB_FX_Ability_Tyr_Synapse_1"}
				}
			}
		}
	}
}

; <<<<	===============================================================================================	>>>>	
; // SYNAPSE AURA LEVEL 2 
; <<<<	===============================================================================================	>>>>

{on "SC_AB_Call_ability_Tyr_Synapse_2_Break_Effects"
	{if not dead 
		{if prop "LV40k_dlc_prop_troopers_Tyr_Lictor"
			; [...]
			
		else prop "LV40k_dlc_prop_troopers_Tyr_Genestealer"
			; [...]		
			
		else prop "LV40k_dlc_prop_troopers_Tyr_Tyrannofex"	
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			("human_health" c(125000))
			
		else prop "LV40k_dlc_prop_troopers_Tyr_Carnifex"	
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			("human_health" c(75000))
		
		; // BUZZ: Anything lesser will just die!
		
		else tagged "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_2"
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			
			{Call_Synced "die"} 	; // BUZZ: <- GLITCH - Sometimes units happen not to die in ONLINE MP??
		}
		
		{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_2_Heal"}
		{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_2_Buff"}
		{Tags remove "SC_INF_Tag_Buff_Bul_tier2"}
		{view stop "SC_AB_FX_Ability_Tyr_Synapse_2"}
	}
}

{on "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects_2" 

	{if tagged "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_2"
		{if not dead

			; {} // Stops and overlapps the Aura level 1.
			{Kill_Delay "SC_AB_Delay_Ability_Tyr_Synapse_1_Buff_Duration"}
			{Kill_Delay "LV40k_Tyr_Synapse_1_Aura_Delay"}
	
			{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Heal"}
			{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Buff"}
			{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
			{view pause "SC_AB_FX_Ability_Tyr_Synapse_1"}
			
			{if not tagged "SC_AB_Tag_Aura_Tyr_Synapse_2_Heal"
				{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_2_Heal"}
				
				{if prop "human" 								("SC_INF_Define_Heal" c(300))
				else prop "SC_plataform_prop_troopers_size1"	("SC_INF_Define_Heal" c(500))	
				else prop "SC_plataform_prop_troopers_size2"	("SC_INF_Define_Heal" c(1000))
				else prop "SC_plataform_prop_troopers_size3"	("SC_INF_Define_Heal" c(3000))
				else prop "SC_plataform_prop_troopers_size4"	("SC_INF_Define_Heal" c(9000))
				else prop "SC_plataform_prop_troopers_size5"	("SC_INF_Define_Heal" c(18000))
				else prop "SC_plataform_prop_troopers_size6"	("SC_INF_Define_Heal" c(30000))
				}
			}
			{if not tagged "SC_AB_Tag_Aura_Tyr_Synapse_2_Buff"			; {}
				{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_2_Buff"}		
				
				; // Buff visual feedback..
				{view start "SC_AB_FX_Ability_Tyr_Synapse_2"}	
				{Tags add "SC_INF_Tag_Buff_Bul_tier2"}	; // <- Buff tag (2/3) - Buff only stops when hive-tyrant is killed.
			}
		}
	}
}

; <<<<	===============================================================================================	>>>>	
; // SYNAPSE AURA LEVEL 3
; <<<<	===============================================================================================	>>>>

{on "SC_AB_Call_ability_Tyr_Synapse_3_Break_Effects"
	{if not dead 
		{if prop "LV40k_dlc_prop_troopers_Tyr_Lictor"	
			; [...]
			
		else prop "LV40k_dlc_prop_troopers_Tyr_Genestealer"	
			; [...]
		
		else prop "LV40k_dlc_prop_troopers_Tyr_Tyrannofex"	
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
			("human_health" c(150000))
			
		; // BUZZ: Anything lesser will just die!
		
		else tagged "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_3"
			{view start "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"} {delay 8.0 {view stop "SC_AB_FX_Ability_Tyr_Synapse_Dead_Broken"}}
		
			{Call_Synced "die"} 	; // BUZZ: <- GLITCH - Sometimes units happen not to die in ONLINE MP??
		}
		
		{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_3_Heal"}
		{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_3_Buff"}
		{Tags remove "SC_INF_Tag_Buff_Bul_tier3"}
		{view stop "SC_AB_FX_Ability_Tyr_Synapse_3"}
	}
}

{on "SC_AB_Call_ability_Tyr_Synapse_Aura_Effects_3" 
	{if tagged "SC_AB_Tag_Aura_Tyr_Synapse_Receiver_3"	
		{if not dead

			; {} // Stops and overlapps the Aura level 1.
			{Kill_Delay "SC_AB_Delay_Ability_Tyr_Synapse_1_Buff_Duration"}
			{Kill_Delay "LV40k_Tyr_Synapse_1_Aura_Delay"}
	
			{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Heal"}
			{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_1_Buff"}
			{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
			{view pause "SC_AB_FX_Ability_Tyr_Synapse_1"}
			
			; // Stops and overlapps the Aura level 2.
			{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_2_Heal"}
			{Tags remove "SC_AB_Tag_Aura_Tyr_Synapse_2_Buff"}
			{Tags remove "SC_INF_Tag_Buff_Bul_tier2"}
			{view pause "SC_AB_FX_Ability_Tyr_Synapse_2"}
			
			{if not tagged "SC_AB_Tag_Aura_Tyr_Synapse_3_Heal"
				{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_3_Heal"}
				
				{if prop "human" 								("SC_INF_Define_Heal" c(500))	
				else prop "SC_plataform_prop_troopers_size1"	("SC_INF_Define_Heal" c(1000))	
				else prop "SC_plataform_prop_troopers_size2"	("SC_INF_Define_Heal" c(2000))
				else prop "SC_plataform_prop_troopers_size3"	("SC_INF_Define_Heal" c(6000))
				else prop "SC_plataform_prop_troopers_size4"	("SC_INF_Define_Heal" c(20000))
				else prop "SC_plataform_prop_troopers_size5"	("SC_INF_Define_Heal" c(40000))
				else prop "SC_plataform_prop_troopers_size6"	("SC_INF_Define_Heal" c(80000))
				}
			}
			{if not tagged "SC_AB_Tag_Aura_Tyr_Synapse_3_Buff"			; {}
				{Tags add "SC_AB_Tag_Aura_Tyr_Synapse_3_Buff"}		
				
				; // Buff visual feedback..
				{view start "SC_AB_FX_Ability_Tyr_Synapse_3"}	
				{Tags add "SC_INF_Tag_Buff_Bul_tier3"}	; // <- Buff tag (3/3) - Buff only stops when swarmlord is killed.
			}
		}
	}
}