
(Define "Randomizer_LV40k_SMs_Servitor"
	{Bone show "servitor_l_servoarm"}
	{Bone show "servitor_body"}
	{Bone show "servitor_head"}
	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#SVT_Rig-FXlight_back1"}
	
	{If rand 0.25
		{Bone show "Servitor_headgear1"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#SVT_Rig-fx_eye_r1"}
	else rand 0.25
		{Bone show "Servitor_headgear2"}
		{add_view "fx_glow_gold_small" "SC_H_Fx_Skins_Disable_On_Death" "#SVT_Rig-fx_eye_r2"}
	else rand 0.25
		{Bone show "Servitor_headgear3"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#SVT_Rig-fx_eye_l4"}
	else
		{Bone show "Servitor_headgear4"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#SVT_Rig-fx_eye_r4"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#SVT_Rig-fx_eye_l4"}
	}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)
