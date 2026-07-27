
; ================================================================================================================
; // SHOOTA BOY REGULAR 
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_001"	
	{Tags add "sc_h_skin_tag_lv40k_can_use_deffgun"}
	
	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	{bone show "orkboy_legs_1L_D1"}
	{bone show "orkboy_legs_1R_D1"}
	
	; // DETAILS 1 - ARMS
	{if rand 0.6	{bone show "orkboy_arms_1R"}{bone show "orkboy_arms_1L"}
	else 			{bone show "orkboy_arms_2R"}{bone show "orkboy_arms_2L"}
	}
		
	; // DETAILS 2 - HELMET
	{if rand 0.18
		{bone show "orkboy_head_no_ear"}{bone show "orkboy_helmet_1"}
	else rand 0.18
		{bone show "orkboy_head_no_ear"}{bone show "orkboy_helmet_2"}
	else rand 0.18
		{bone show "orkboy_head_no_ear"}{bone show "orkboy_helmet_3"}
	else rand 0.18
		{bone show "orkboy_head_no_ear"}{bone show "orkboy_helmet_4"}
	else rand 0.18
		{bone show "orkboy_head_1"}{bone show "orkboy_helmet_5"}
	else
		{bone show "orkboy_head_1"}
	}
		
	; // DETAILS 3 - BODY ARMOR
	{bone show "orkboy_armor_1"}
	
	{if rand 0.5	{bone show "orkboy_body_D1"}}	; // bullet belt
	
	{if rand 0.2	{bone show "orkboy_armor_1_D1"}
	else rand 0.2	{bone show "orkboy_armor_1_D2"}
	else rand 0.2	{bone show "orkboy_armor_2_D1"}
	else rand 0.2	{bone show "orkboy_armor_2_D2"}
	}
)

; // BIG SHOOTA ORK
(Define "Randomizer_LV40k_Orkboy_011"	
	
	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	{bone show "orkboy_armor_1"}
	
	{bone show "orkboy_body_D1"}
	
	; // DETAILS 1 - ARMS
	{bone show "orkboy_arms_1R"}
	{bone show "orkboy_arms_1L"}
		
	; // DETAILS 2 - HELMET
	{bone show "orkboy_head_no_ear"}
	{bone show "orkboy_helmet_D1"}
	
	{add_view "fx_sc_new_eyes_red" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-eyepiece_monicle_shoota"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
	
	{if rand 0.2
		{bone show "orkboy_helmet_1"}
	else rand 0.2
		{bone show "orkboy_helmet_2"}
	else rand 0.2
		{bone show "orkboy_helmet_3"}
	else
		{bone show "orkboy_helmet_4"}
	}
)

; ================================================================================================================
; // SHOOTA 'ARDBOY 
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_002"	
	; [...]
)

(Define "Randomizer_LV40k_Orkboy_002b"	
	; [...]
)

; ================================================================================================================
; // TANKBUSTER 
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_003"		
	
	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_armor_1"}
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	{bone show "orkboy_legs_1L_D1"}
	{bone show "orkboy_legs_1R_D1"}
	
	; // DETAILS 0 - Backpack
	{if rand 0.5 {bone show "orkboy_body_D1"}
	else {bone show "orkboy_body_D1"}
	}
	
	; // DETAILS 1 - ARMS
	{bone show "orkboy_arms_1R"}
	{bone show "orkboy_arms_1L"}
		
	; // DETAILS 2 - HELMET
	{bone show "orkboy_head_no_ear"}
	
	{if rand 0.4
		{bone show "orkboy_helmet_1"}
	else
		{bone show "orkboy_helmet_2"}
	}
)

; ================================================================================================================
; // ORKBOY LOOTA DEFFGUN
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_004"	; LOOTA BOY COMMON
	{Tags add "sc_h_skin_tag_lv40k_can_use_deffgun"}
	
	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_armor_1"}
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	{bone show "orkboy_legs_1L_D1"}
	{bone show "orkboy_legs_1R_D1"}
	
	{bone show "orkboy_body_D3"}
	
	; // DETAILS 0 - Backpack
	{if rand 0.5 {bone show "orkboy_body_D1"}
	else {bone show "orkboy_body_D1"}
	}
	
	; // DETAILS 1 - ARMS
	{bone show "orkboy_arms_1R"}
	{bone show "orkboy_arms_1L"}
		
	; // DETAILS 2 - HELMET
	{bone show "orkboy_head_no_ear"}
	{if rand 0.4
		{bone show "orkboy_helmet_1"}
	else
		{bone show "orkboy_helmet_2"}
	}
)

; ================================================================================================================
; // KOMMANDO BOYZ
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_005"	; KOMMANDO BOYZ
	
	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	{bone show "orkboy_legs_1L_D1"}
	{bone show "orkboy_legs_1R_D1"}
	
	{bone show "orkboy_body_d1"}
	{bone show "orkboy_body_d2"}
	
	; // DETAILS 0 - Armor
	{bone show "orkboy_armor_1"}
	
	{if rand 0.5 {bone show "orkboy_armor_1_D1"}}
	{if rand 0.5 {bone show "orkboy_armor_1_D2"}}
	{if rand 0.5 {bone show "orkboy_armor_1_D3"}}
	{if rand 0.5 {bone show "orkboy_armor_1_D4"}}
	{if rand 0.5 {bone show "orkboy_armor_1_D5"}}
	
	; // DETAILS 1 - ARMS
	{bone show "orkboy_arms_1R"}
	{bone show "orkboy_arms_1L"}
		
	; // DETAILS 2 - HELMET
	{if rand 0.3
		{bone show "orkboy_head_1"}
		{bone show "orkboy_helmet_1"}
	else rand 0.3
		{bone show "orkboy_head_1"}
		{bone show "orkboy_helmet_2"}
	else rand 0.3
		{bone show "orkboy_head_1"}
		{bone show "orkboy_helmet_3"}
	else
		{bone show "orkboy_head_no_ear"}
		{bone show "orkboy_helmet_4"}
	}
	
	{tex_Mod "kommando"}
)

; ================================================================================================================
; // WEIRD BOYZ
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_006"	
	{bone show "orkboy_body"}
	
	{add_view "fx_ork_weirdboy_eyes" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-eye_weirdboy_r_fx"}
	{add_view "fx_ork_weirdboy_brain_waves" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-head"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
	
	{tags add "sc_h_skin_tag_lv40k_orkboy_weirdboy"}
)

; ================================================================================================================
; // STORM BOYZ
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_007"	
	{Tags add "sc_h_skin_tag_lv40k_stormboyz"}

	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	{bone show "orkboy_legs_1L_D1"}
	{bone show "orkboy_legs_1R_D1"}
	
	{bone show "orkboy_body_d1"}
	
	; // DETAILS 0 - Armor
	{bone show "orkboy_armor_1"}
	{bone show "orkboy_armor_2"}	; <- Kneepads
	
	; Pauldrons
	{bone show "orkboy_armor_1_D1"}
	{bone show "orkboy_armor_2_D1"}
	
	; // DETAILS 1 - ARMS
	{bone show "orkboy_arms_1R"}
	{bone show "orkboy_arms_1L"}
		
	; // DETAILS 2 - HELMET
	{bone show "orkboy_head_no_ear"}
	
	{if rand 0.5
		{bone show "orkboy_helmet_1"}
	else
		{bone show "orkboy_helmet_2"}
	}
	
	{add_view "ch_vehicle_start" "LV40k_deepstrike_jetpack_FX" "#ork_rig-stormrocket"}
	
	{add_view "fx_flamer_barrel_drops" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-stormrocket"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

; ================================================================================================================
; // BURNA BOYZ
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_008"	
	{Tags add "sc_h_skin_tag_lv40k_can_use_burna_pack"}

	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	
	; // DETAILS 0 - Armor
	{bone show "orkboy_armor_1"}
	
	; Pauldrons
	{bone show "orkboy_armor_1_D1"}
	{bone show "orkboy_armor_2_D1"}
	
	; // DETAILS 1 - ARMS
	{bone show "orkboy_arms_1R"}
	{bone show "orkboy_arms_1L"}
		
	; // DETAILS 2 - HELMET
	{bone show "orkboy_head_no_ear"}
	
	{if rand 0.5
		{bone show "orkboy_helmet_1"}
	else
		{bone show "orkboy_helmet_2"}
	}
)

; ================================================================================================================
; // PAIN BOY / MAD DOK
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_009"	
	{tags add "sc_h_skin_tag_lv40k_orkboy_painboy"}
	{tags add "sc_h_skin_tag_lv40k_orkboy_painboy"}

	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_body_d1"}
	{bone show "orkboy_body_d2"}
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	{bone show "orkboy_weapon_painboy_fist"}
	
	; // DETAILS 0 - Armor
	{bone show "orkboy_armor_1"}
	
	; // DETAILS 1 - ARMS
	{bone show "orkboy_arms_1R"}
	{bone show "orkboy_arms_1L"}
		
	; // DETAILS 2 - HELMET
	{bone show "orkboy_head_1"}
	{bone show "orkboy_helmet_1"}
	{bone show "orkboy_helmet_D1"}
	
	{add_view "fx_sc_new_eyes_red" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-eyepiece_monicle_tankbusta"}
	{add_view "fx_glow_red_med" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-painboy_fx_hand1"}
	{add_view "fx_glow_blue_med" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-painboy_fx_hand2"}
	{add_view "fx_glow_red_med" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-painboy_fx1"}
	;//{add_view "orchatina" "SC_H_Fx_Skins_Disable_On_Death" "#ork_rig-painboy_fx2"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

; ================================================================================================================
; // WAGONBOY
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_012"	

	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	{bone show "orkboy_legs_1L_D1"}
	{bone show "orkboy_legs_1R_D1"}
	
	; // DETAILS 1 - ARMS
	{bone show "orkboy_arms_1R"}{bone show "orkboy_arms_1L"}
		
	; // DETAILS 2 - HELMET
	{bone show "orkboy_head_no_ear"}{bone show "orkboy_helmet_1"}
)

; ================================================================================================================
; // MEKBOY
; ================================================================================================================

(Define "Randomizer_LV40k_Orkboy_013"	
	{Tags add "sc_h_skin_tag_lv40k_can_use_deffgun"}
	{tags add "sc_h_skin_tag_lv40k_orkboy_mekboy"}
	{tags add "sc_h_skin_tag_SC_AI_can_place_objects"}

	; // BASIC PARTS
	{bone show "orkboy_body"}
	{bone show "orkboy_armor_1"}
	{bone show "orkboy_head_1"}
	{bone show "orkboy_helmet_1"}
	
	{bone show "orkboy_legs_1L"}
	{bone show "orkboy_legs_1R"}
	{bone show "orkboy_legs_1L_D1"}
	{bone show "orkboy_legs_1R_D1"}
	
	{bone show "orkboy_armor_1"}
	{bone show "orkboy_body_D1"}
	
	; // DETAILS 1 - ARMS
	{bone show "orkboy_arms_1R"}
	{bone show "orkboy_arms_1L"}
)
