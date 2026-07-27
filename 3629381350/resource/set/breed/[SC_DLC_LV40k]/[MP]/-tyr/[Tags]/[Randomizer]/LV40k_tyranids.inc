
; ================================================================================================================
; // TERMAGAUNTS
; ================================================================================================================

(Define "Randomizer_LV40k_Termagaunt_001"	
	{bone show "tyr_termagaunt_arms"}
	{bone show "tyr_termagaunt_body"}
)

(Define "Randomizer_LV40k_Termagaunt_002"	
	{bone show "tyr_termagaunt_arms"}
	{bone show "tyr_termagaunt_body"}
	{bone show "tyr_Termagaunt_Toxin_Sack"}
	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#trm_rig-eye_l"}
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#trm_rig-eye_r"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

; ================================================================================================================
; // WARRIOR
; ================================================================================================================

(Define "Randomizer_LV40k_Warrior_002"	
	{bone show "tyr_warrior_head"}
	{bone show "tyr_warrior_body"}
	{bone show "tyr_warrior_m_arms_claws"}
	{bone show "tyr_warrior_m_arms_talons"}
	
	{add_view "tyr_synapse_med" "SC_H_Fx_Skins_Disable_On_Death" "#wrr_rig-bip01_head"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

(Define "Randomizer_LV40k_Warrior_003"	
	{bone show "tyr_warrior_head"}
	{bone show "tyr_warrior_body"}
	{bone show "tyr_warrior_m_arms_claws"}
	{bone show "tyr_warrior_m_arms_talons"}
	
	{Tags add "Adapted"}
	
	{add_view "tyr_synapse_big" "SC_H_Fx_Skins_Disable_On_Death" "#wrr_rig-bip01_head"}
	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#wrr_rig-eye_l"}
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#wrr_rig-eye_r"}
	
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

(Define "Randomizer_LV40k_Warrior_004"	
	{bone show "tyr_warrior_head"}
	{bone show "tyr_warrior_body"}
	{bone show "tyr_warrior_m_arms_claws"}
;//	{bone show "tyr_warrior_m_arms_talons"}
	{bone show "tyr_warrior_m_arms_bonesword"}
	
	{Tags add "Prime"}
	
	{add_view "tyr_synapse_big" "SC_H_Fx_Skins_Disable_On_Death" "#wrr_rig-synapse_prime"}
	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#wrr_rig-eye_r_prime"}
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#wrr_rig-eye_l_prime"}
	
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

; ================================================================================================================
; // ZOANTHROPE
; ================================================================================================================

(Define "Randomizer_LV40k_Zoanthrope_003"	
	{bone show "tyr_zoanthrope_head"}
	{bone show "tyr_zoanthrope_body"}
	
	{add_view "tyr_synapse_big" "SC_H_Fx_Skins_Disable_On_Death" "#zth_rig-bip01_head"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

; ================================================================================================================
; // RAVENERS
; ================================================================================================================

(Define "Randomizer_LV40k_Ravener_004"	
	{bone show "tyr_ravener_talons"}
	{bone show "tyr_ravener_lower_arms"}
	{bone show "tyr_ravener_head"}
	{bone show "tyr_ravener_body"}
)

; // Ravener Alpha
(Define "Randomizer_LV40k_Ravener_005"	
	{tags add "sc_h_skin_tag_lv40k_ravener_alpha"}
	{tags add "sc_h_skin_tag_SC_AI_can_place_objects"}
	
	{bone show "tyr_ravener_talons"}
	{bone show "tyr_ravener_back_spikes"}
	{bone show "tyr_ravener_lower_arms"}
	{bone show "tyr_ravener_head"}
	{bone show "tyr_ravener_body"}
)

; ================================================================================================================
; // Venomthrope
; ================================================================================================================

(Define "Randomizer_LV40k_Venomthrope_006"	
	{bone show "tyr_Venomthrope_body"}
	{bone show "tyr_Venomthrope_head"}
	{bone show "tyr_Venomthrope_Arms"}
	
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#vth_rig-eye_l"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#vth_rig-eye_r"}
	
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)
