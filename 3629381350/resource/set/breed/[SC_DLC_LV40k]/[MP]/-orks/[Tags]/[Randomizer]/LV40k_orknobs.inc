
(Define "Randomizer_LV40k_Orknob_001"	; SHOOTA NOB COMMON
	
	; // BASIC PARTS
	{bone show "orknob_body"}
	{bone show "orknob_body_D1"}
	{bone show "orknob_body_D2"}
	{bone show "orknob_body_D3"}
	{bone show "orknob_body_D4"}
	{bone show "orknob_body_D5"}
	
	{bone show "orknob_arms_1R"}
	{bone show "orknob_arms_1L"}
	{bone show "orknob_legs_1L"}
	{bone show "orknob_legs_1R"}
	{bone show "orknob_legs_1L_D1"}
	{bone show "orknob_legs_1R_D1"}
	
	{bone show "orknob_head_no_ear"}

	; // RANDOMIZED 1 - HEAD
	{if rand 0.2
		{bone show "orknob_helmet_1"}
	else rand 0.2
		{bone show "orknob_helmet_2"}
	else rand 0.2
		{bone show "orknob_helmet_3"}
	else rand 0.2
		{bone show "orknob_helmet_4"}
	else
		{bone hide "orknob_head_no_ear"}
		{bone show "orknob_head_1"}
		{bone show "orknob_helmet_5"}
	}
	
	; // RANDOMIZED 3 - Pauldrons
	{bone show "orknob_armor_1"}
	{bone show "orknob_armor_2"}
)

; ================================================================================================================
; // STORM NOBS
; ================================================================================================================

(Define "Randomizer_LV40k_Orknob_002"	
	{Tags add "sc_h_skin_tag_lv40k_stormboyz"}

	; // BASIC PARTS
	{bone show "orknob_body"}
	{bone show "orknob_body_D1"}
	{bone show "orknob_body_D2"}
	{bone show "orknob_body_D3"}
	{bone show "orknob_body_D4"}
	
	{bone show "orknob_arms_1R"}
	{bone show "orknob_arms_1L"}
	{bone show "orknob_legs_1L"}
	{bone show "orknob_legs_1R"}
	{bone show "orknob_legs_1L_D1"}
	{bone show "orknob_legs_1R_D1"}
	
	{bone show "orknob_armor_1"}
	{bone show "orknob_armor_2"}
	
	{bone show "orknob_head_1"}

	; // RANDOMIZED 1 - HEAD
	{if rand 0.25
		{bone show "orknob_helmet_1"}
	else rand 0.25
		{bone show "orknob_helmet_2"}
	else rand 0.25
		{bone hide "orknob_head_1"}
		{bone show "orknob_head_no_ear"}
		{bone show "orknob_helmet_1"}
		{bone show "orknob_helmet_3"}
	else
		{bone show "orknob_helmet_2"}
		{bone show "orknob_helmet_4"}
	}
	
	{add_view "ch_vehicle_start" "LV40k_deepstrike_jetpack_FX" "#ork_rig-stormrocket"}
	
	{add_view "fx_flamer_barrel_drops" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-stormrocket"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

; ================================================================================================================
; // KOMMANDO NOBS
; ================================================================================================================

(Define "Randomizer_LV40k_Orknob_003"	
	{Tags add "sc_h_skin_tag_lv40k_stormboyz"}

	; // BASIC PARTS
	{bone show "orknob_body"}
	{bone show "orknob_body_D1"}
	{bone show "orknob_body_D2"}
	{bone show "orknob_body_D3"}
	{bone show "orknob_body_D4"}
	
	{bone show "orknob_arms_1R"}
	{bone show "orknob_arms_1L"}
	{bone show "orknob_legs_1L"}
	{bone show "orknob_legs_1R"}
	{bone show "orknob_legs_1L_D1"}
	{bone show "orknob_legs_1R_D1"}
	
	{bone show "orknob_armor_1"}
	{bone show "orknob_armor_1_D1"}
	{bone show "orknob_armor_1_D2"}
	
	{bone show "orknob_head_1"}

	; // RANDOMIZED 1 - HEAD
	{if rand 0.5
		{bone show "orknob_helmet_1"}
	else
		{bone show "orknob_helmet_2"}
	}
	{tex_mod "Kommando"}
)

; ================================================================================================================
; // FLASH GITZ
; ================================================================================================================

(Define "Randomizer_LV40k_Orknob_004"	

	; // BASIC PARTS
	{bone show "orknob_body"}
	
	{bone show "orknob_arms_1R"}
	{bone show "orknob_arms_1L"}
	{bone show "orknob_legs_1L"}
	{bone show "orknob_legs_1R"}
	{bone show "orknob_legs_1L_D1"}
	{bone show "orknob_legs_1R_D1"}
	
	{bone show "orknob_head_1"}
	{bone show "orknob_helmet_D1"}

	; // RANDOMIZED 1 - HEAD
	{if rand 0.5
		{bone show "orknob_helmet_1"}
	else
		{bone show "orknob_helmet_2"}
	}
	
	; // RANDOMIZED 2 - Eye Monicle
	{if rand 0.5
		{add_view "fx_glow_red_med" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-eyepiece_monicle_nob"}
		{bone show "orknob_helmet_D2"}
	}
	
	; // RANDOMIZED 3 - Shoulder Detail
	{bone show "orknob_armor_1"}
	{bone show "orknob_armor_1_D1"}

	{add_view "halo_light_laser_sight" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-gitz_shoulder_fx"}
	{bone show "orknob_armor_1_D2"}
	
	; // RANDOMIZED 4 - Pole/Stikk
	{bone show "orknob_armor_2"}
	{if rand 0.5 {bone show "orknob_armor_2_D1"} else rand 0.33 {bone show "orknob_armor_2_D2"} else {bone show "orknob_armor_2_D3"}}
	{if rand 0.5 {bone show "orknob_armor_3_D1"} else rand 0.33 {bone show "orknob_armor_3_D2"} else {bone show "orknob_armor_3_D3"}}
	
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

; ================================================================================================================
; // BIG MEK
; ================================================================================================================

(Define "Randomizer_LV40k_Orknob_005"	

	; // BASIC PARTS
	{bone show "orknob_body"}
	{bone show "orknob_body_D1"}
	{bone show "orknob_body_D2"}
	
	{bone show "orknob_head_1"}
	
	{bone show "orknob_arms_1R"}
	{bone show "orknob_arms_1L"}
	{bone show "orknob_legs_1L"}
	{bone show "orknob_legs_1R"}
	{bone show "orknob_legs_1L_D1"}
	{bone show "orknob_legs_1R_D1"}
	
	{bone show "orknob_armor_1"}
	{bone show "orknob_armor_1_D1"}
	{bone show "orknob_armor_1_D2"}
	{bone show "orknob_armor_1_D3"}
	
	{bone show "orknob_weapon_powerklaw"}

	; // RANDOMIZED 1 - HEAD
	{bone show "orknob_helmet_1"}
)
