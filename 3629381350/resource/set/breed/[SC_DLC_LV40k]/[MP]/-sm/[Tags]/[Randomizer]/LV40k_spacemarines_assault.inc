
; ================================================================================================================
; // ASSAULT
; ================================================================================================================

(Define "SMs_002_Randomized_Bits"
	{Tags add "sc_h_skin_tag_lv40k_assaultmarines"}

	{add_view "ch_vehicle_start" "LV40k_deepstrike_jetpack_FX" "#sm_rig-jumppack_l"}
	{add_view "ch_vehicle_start" "LV40k_deepstrike_jetpack_FX" "#sm_rig-jumppack_r"}
	
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
)

(Define "Randomizer_LV40k_SMs_002"
	("SMs_002_Randomized_Bits")
	
	; // Helmet
	{if rand 0.3
		{bone show "sm_helmet1"}	
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
	else rand 0.3
		{bone show "sm_helmet2"}	
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
	else		
		{bone show "sm_helmet3"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk6_v1"}	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk6_v1"}
	}
	{add_view "fx_sm_jumper_engine_start" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-jumppack_l"}
	{add_view "fx_sm_jumper_engine_start" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-jumppack_r"}
)

(Define "Randomizer_LV40k_SMs_002_sgt"
	("SMs_002_Randomized_Bits")
	
	{bone show "sm_pauldron_left1"}	{bone show "sm_pauldron_right1"}
	
	; // Helmet
	{if rand 0.3
		{bone show "sm_helmet1"}	
		{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
	else rand 0.3
		{bone show "sm_helmet2"}	
		{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
	else		
		{bone show "sm_helmet3"}
		{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk6_v1"}	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk6_v1"}
	}
	{add_view "fx_sm_jumper_engine_start" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-jumppack_l_mk5"}
	{add_view "fx_sm_jumper_engine_start" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-jumppack_r_mk5"}
)


(Define "Randomizer_LV40k_SMs_002_vet")
(Define "Randomizer_LV40k_SMs_002_vet_sgt")


(Define "Randomizer_LV40k_SMs_002_vet")
(Define "Randomizer_LV40k_SMs_002_vet_sgt")

