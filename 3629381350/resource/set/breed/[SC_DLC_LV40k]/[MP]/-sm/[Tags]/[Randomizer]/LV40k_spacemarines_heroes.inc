
; ================================================================================================================
; // Heroes
; ================================================================================================================

; // Apothecary
(Define "Randomizer_LV40k_SMs_H_001"
	{tags add "sc_h_skin_tag_lv40k_spacemarine_apothecary"}
	
	{tags add "sc_skin_tag_trait_melee_resistance_t3"} 	; <- melee trait

	{bone show "sm_armleft1"}
	{bone show "sm_armright1"}
	{bone show "sm_legleft1"}
	{bone show "sm_legright1"}
	{bone show "sm_torso1"}
	{bone show "sm_backpack1"}
	{bone show "sm_pauldron_left1"}
	{bone show "sm_pauldron_right1"}
	
	{bone show "sm_helmet1"}
	{add_view "apotekariy_skan" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-fx_apothecary"}	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
)

; // Chaplain
(Define "Randomizer_LV40k_SMs_H_002"
	{tags add "sc_h_skin_tag_lv40k_spacemarine_chaplain"}
	
	{tags add "sc_skin_tag_trait_melee_resistance_t4"} 	; <- melee trait
	
	{bone show "sm_armleft1"}
	{bone show "sm_armright1"}
	{bone show "sm_legleft1"}
	{bone show "sm_legright1"}
	{bone show "sm_backpack1"}
	{bone show "sm_pauldron_left1"}
	{bone show "sm_pauldron_right1"}

	; // Torso
	{if rand 0.5	{bone show "sm_torso1"}
	else rand 0.25	{bone show "sm_torso2"}
	else			{bone show "sm_torso3"}}
	
	; // Backpack
	{if rand 0.5	{bone show "sm_backpack1"}
	else			{bone show "sm_backpack2"}}
	
	; // Helmet
	{if rand 0.5	
		{bone show "sm_helmet1"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}	
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
	else		
		{bone show "sm_helmet2"}
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_Chap_V2"}	
		{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_Chap_V2"}
	}
)

; // Commander
(Define "Randomizer_LV40k_SMs_H_003"
	{tags add "sc_h_skin_tag_lv40k_spacemarine_commander"}
	
	{tags add "sc_skin_tag_trait_melee_resistance_t4"} 	; <- melee trait

	{bone show "sm_armleft1"}
	{bone show "sm_armright1"}
	{bone show "sm_legleft1"}
	{bone show "sm_legright1"}
	{bone show "sm_torso1"}
	{bone show "sm_backpack1"}
	{bone show "sm_pauldron_left1"}
	{bone show "sm_pauldron_right1"}
	{bone show "sm_torso1"}
	{bone show "sm_backpack1"}
	
	; // Helmet
	{bone show "sm_helmet1"}
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk4"}	
	{add_view "fx_glow_red_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk4"}
)

; // Librarian
(Define "Randomizer_LV40k_SMs_H_004"
	{tags add "sc_h_skin_tag_lv40k_spacemarine_librarian"}
	
	{tags add "sc_skin_tag_trait_melee_resistance_t4"} 	; <- melee trait
	
	{bone show "sm_armleft1"}
	{bone show "sm_armright1"}
	{bone show "sm_legleft1"}
	{bone show "sm_legright1"}
	{bone show "sm_torso1"}
	{bone show "sm_backpack1"}
	{bone show "sm_pauldron_left1"}
	{bone show "sm_pauldron_right1"}

	; // Torso
	{if rand 0.5	{bone show "sm_torso1"}
	else rand 0.25	{bone show "sm_torso2"}
	else			{bone show "sm_torso3"}
	}
	
	; // Helmet
	{bone show "sm_helmet1"}
	{add_view "fx_glow_purple_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}	
	{add_view "fx_glow_purple_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_L_mk7_v1"}
)

; // Techmarines
(Define "Randomizer_LV40k_SMs_H_005"
	{tags add "sc_h_skin_tag_lv40k_spacemarine_techmarine"}
	
	{tags add "sc_h_skin_tag_SC_AI_can_place_objects"}
	{tags add "sc_skin_tag_trait_melee_resistance_t3"} 	; <- melee trait
	
	{bone show "sm_armleft1"}
	{bone show "sm_armright1"}
	{bone show "sm_legleft1"}
	{bone show "sm_legright1"}
	{bone show "sm_torso1"}
	{bone show "sm_backpack1"}
	{bone show "sm_pauldron_left1"}
	{bone show "sm_pauldron_right1"}
	
	; // Helmet Details
	{bone show "sm_helmet1"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#sm_rig-eyes_R_mk7_v1"}	
)