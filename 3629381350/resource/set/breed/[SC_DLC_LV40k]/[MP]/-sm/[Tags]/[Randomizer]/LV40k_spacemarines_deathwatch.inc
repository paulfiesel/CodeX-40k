
(Define "Randomizer_LV40k_SMs_025"
	{bone show "sm_armleft1"}
	{bone show "sm_armright1"}
	{bone show "sm_legleft1"}
	{bone show "sm_legright1"}
	{bone show "sm_backpack1"}
	{bone show "sm_helmet1"}	
	{bone show "sm_pauldron_right1"}
	{bone show "sm_pauldron_left1"}
	
	; // Torso
	{if rand 0.33	{bone show "sm_torso1"}
	else rand 0.33	{bone show "sm_torso2"}
	else 			{bone show "sm_torso3"}
	}
	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
)
