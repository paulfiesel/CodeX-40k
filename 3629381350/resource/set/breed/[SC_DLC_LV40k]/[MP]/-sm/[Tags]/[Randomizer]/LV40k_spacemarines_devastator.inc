
; ================================================================================================================
; // DEVASTATOR
; ================================================================================================================

(Define "SMs_003_Randomized_Bits"
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
	
	; // Code tags.
	{tags add "sc_h_skin_tag_lv40k_can_use_sm_hb"}
	{tags add "sc_h_skin_tag_lv40k_can_use_sm_pc"}
	{tags add "sc_h_skin_tag_lv40k_can_use_sm_lc"}
	{tags add "sc_h_skin_tag_lv40k_can_use_sm_mm"}
)

(Define "Randomizer_LV40k_SMs_003"
	("SMs_003_Randomized_Bits")
	
	{bone show "sm_helmet1"}
	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}		
)

(Define "Randomizer_LV40k_SMs_003_sgt"
	("SMs_003_Randomized_Bits")

	{bone show "sm_pauldron_left1"}	{bone show "sm_pauldron_right1"}
	
	; // Helmet
	{if rand 0.33
		{bone show "sm_helmet3"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_r_mk7_v1"}
	else rand 0.33	
		{bone show "sm_helmet2"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_l_mk7_v1"}
	else 	
		{bone show "sm_helmet1"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}		
	}
)

(Define "Randomizer_LV40k_SMs_003_vet")
(Define "Randomizer_LV40k_SMs_003_vet_sgt")
