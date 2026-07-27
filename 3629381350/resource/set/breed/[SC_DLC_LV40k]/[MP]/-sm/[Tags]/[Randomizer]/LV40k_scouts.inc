
; ================================================================================================================
; // SCOUT - COMMON
; ================================================================================================================

(Define "LV40k_Scouts_Common"
	{bone show "sm_scout_torso"}
	{bone show "sm_scout_r_leg"}
	{bone show "sm_scout_l_leg"}
	{bone show "sm_scout_pauldrons"}
	{bone show "sm_scout_backpack"}
)

(Define "Randomizer_LV40k_Scouts_001"
	("LV40k_Scouts_Common")
	
	{bone cut "#scout_rig-helmet_vol"}
	
	{bone show "sm_scout_helmet"}
	
	; // Details Heads
	{if rand 0.05	{bone show "sm_scout_head_1"}
	else rand 0.05	{bone show "sm_scout_head_2"}
	else rand 0.05	{bone show "sm_scout_head_3"}
	else rand 0.05	{bone show "sm_scout_head_4"}
	else rand 0.05	{bone show "sm_scout_head_5"}
	else rand 0.05	{bone show "sm_scout_head_6"}
	else rand 0.05	{bone show "sm_scout_head_7"}
	else rand 0.05	{bone show "sm_scout_head_8"}
	else rand 0.05	{bone show "sm_scout_head_9"}
	else rand 0.05	{bone show "sm_scout_head_10"}
	else rand 0.05	{bone show "sm_scout_head_11"}
	else rand 0.05	{bone show "sm_scout_head_12"}
	else rand 0.05	{bone show "sm_scout_head_13"}
	else 			{bone show "sm_scout_head_14"}
	}
	
	; // Details Arms
	{if rand 0.5	{bone show "sm_scout_R_arm1"} {bone show "sm_scout_L_arm1"}
	else			{bone show "sm_scout_R_arm2"} {bone show "sm_scout_L_arm2"}
	}
	
	; // Details Gauntlets
	{if rand 0.5	{bone show "sm_scout_gauntlets_L3"} {bone show "sm_scout_gauntlets_R3"}
	else			{bone show "sm_scout_gauntlets_L2"} {bone show "sm_scout_gauntlets_R2"}
	}
)

; ================================================================================================================
; // SCOUT - HEAVY WEAPONS
; ================================================================================================================

(Define "Randomizer_LV40k_Scouts_002"
	("LV40k_Scouts_Common")
	
	{bone show "sm_scout_R_arm1"} 	
	{bone show "sm_scout_L_arm1"}
	{bone show "sm_scout_gauntlets_L4"}	
	{bone show "sm_scout_gauntlets_R4"}
	{bone show "sm_scout_gear_1"} 	
	{bone show "sm_scout_gear_2"}
	{bone show "sm_scout_gear_3"}
	
	; // Details Heads
	{if rand 0.5	
		{bone show "sm_scout_helmet"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#Scout_Rig-fx_scout_helmet_light"} 
		{view start "SC_H_Fx_Skins_Disable_On_Death"}
	else 		
		{bone show "sm_scout_head_1"}
		{bone cut "#scout_rig-head_vol"}
	}
)

; ================================================================================================================
; // SCOUT - SNIPER
; ================================================================================================================

(Define "Randomizer_LV40k_Scouts_003"
	("LV40k_Scouts_Common")
	
	{bone cut "#scout_rig-helmet_vol"}
	
	{bone show "sm_scout_R_arm1"} 
	{bone show "sm_scout_L_arm1"}
	{bone show "sm_scout_gauntlets_L4"}	
	{bone show "sm_scout_gauntlets_R4"}
	{bone show "sm_scout_gear_1"} 	
	{bone show "sm_scout_gear_2"}
	{bone show "sm_scout_head_1"}
)

; ================================================================================================================
; // SCOUT - SERGEANT
; ================================================================================================================

(Define "Randomizer_LV40k_Scouts_004"
	("LV40k_Scouts_Common")
	
	{bone cut "#scout_rig-helmet_vol"}
	
	{bone show "sm_scout_R_arm1"}
	{bone show "sm_scout_L_arm1"}
	{bone show "sm_scout_gauntlets_L1"}
	{bone show "sm_scout_gauntlets_R1"}
	{bone show "sm_scout_helmet"}
	{bone show "sm_scout_gear_1"} 	
	{bone show "sm_scout_gear_2"}

	
	; // Details Heads
	{if rand 0.3	{bone show "sm_scout_head_1"}
	else rand 0.3	{bone show "sm_scout_head_2"}
	else 			{bone show "sm_scout_head_3"}
	}
)