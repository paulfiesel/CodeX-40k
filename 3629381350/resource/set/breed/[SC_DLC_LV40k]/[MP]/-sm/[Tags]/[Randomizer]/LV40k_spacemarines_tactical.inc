
; ================================================================================================================
; // TACTICAL
; ================================================================================================================

(Define "SMs_001_Randomized_Bits"
	{bone show "sm_armleft1"}
	{bone show "sm_armright1"}
	{bone show "sm_legleft1"}
	{bone show "sm_legright1"}
	{bone show "sm_backpack1"}
	
	; // Torso
	{if rand 0.33	{bone show "sm_torso1"}
	else rand 0.33	{bone show "sm_torso2"}
	else 			{bone show "sm_torso3"}
	}
	
	; // Pauldron Left
	{if rand 0.33	{bone show "sm_pauldron_left1"}
	else rand 0.33	{bone show "sm_pauldron_left2"}
	else 			{bone show "sm_pauldron_left3"}
	}
	
	; // Pauldron Right
	{if rand 0.33	{bone show "sm_pauldron_right1"}
	else rand 0.33	{bone show "sm_pauldron_right2"}
	else 			{bone show "sm_pauldron_right3"}
	}
	
	; // Helmet
	{if rand 0.33	{bone show "sm_helmet1"}
	else			{bone show "sm_helmet2"}
	}
)

(Define "Randomizer_LV40k_SMs_001"
	("SMs_001_Randomized_Bits")
	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
)

(Define "Randomizer_LV40k_SMs_001_sgt"
	("SMs_001_Randomized_Bits")
	
	{bone show "sm_pauldron_left1"}	{bone show "sm_pauldron_right1"}
	
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
)

(Define "Randomizer_LV40k_SMs_001_vet"
	{tags add "sc_skin_tag_trait_melee_resistance_t3"} 	; <- melee trait
	
	("SMs_001_Randomized_Bits")
	
	; // Helmet
	{if rand 0.33
		{bone hide "sm_helmet1"}
		{bone hide "sm_helmet2"}
		{bone show "sm_helmet3"}
		
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk6_v1"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk6_v1"}
	else
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
	}
)

(Define "Randomizer_LV40k_SMs_001_vet_sgt"
	{tags add "sc_skin_tag_trait_melee_resistance_t3"} 	; <- melee trait
	
	("SMs_001_Randomized_Bits")
	
	{bone show "sm_pauldron_left1"}	{bone show "sm_pauldron_right1"}
	
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
)
