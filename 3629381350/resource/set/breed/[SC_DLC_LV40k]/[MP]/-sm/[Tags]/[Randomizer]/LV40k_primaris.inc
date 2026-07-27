
(Define "LV40k_Primaris_Basic"
	{bone show "smp_armleft1"}
	{bone show "smp_armright1"}
	{bone show "smp_legleft1"}
	{bone show "smp_legright1"}
	{bone show "smp_backpack1"}
	{bone show "smp_pauldron_right1"}
	
	; // Torso
	{if rand 0.33	{bone show "smp_torso1"}
	else			{bone show "smp_torso2"}
	}
	
	; // Pauldron Left
	{if rand 0.33	{bone show "smp_pauldron_left1"}
	else rand 0.33	{bone show "smp_pauldron_left2"}
	else 			{bone show "smp_pauldron_left3"}
	}
	
	; // Helmet
	{if rand 0.33	{bone show "smp_helmet1"}
	else			{bone show "smp_helmet2"}
	}
)

; ================================================================================================================
; // TACTICAL
; ================================================================================================================

(Define "Randomizer_LV40k_SMs_P_001"
	("LV40k_Primaris_Basic")
	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#smp_rig-eyes_l_v1"}
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#smp_rig-eyes_r_v1"}
)

(Define "Randomizer_LV40k_SMs_P_001_sgt"
	("LV40k_Primaris_Basic")
	
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#smp_rig-eyes_l_v1"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#smp_rig-eyes_r_v1"}
)
