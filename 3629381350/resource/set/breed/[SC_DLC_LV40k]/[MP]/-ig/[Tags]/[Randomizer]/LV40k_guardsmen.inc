
; ================================================================================================================
; // CADIAN HEROES
; ================================================================================================================

(Define "Randomizer_LV40k_A_Vindicare_001"
	{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Imperial_Guard"}
	
	{Bone Show "Skin"}
)

(Define "Randomizer_LV40k_Techpriest_001"
	{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Imperial_Guard"}

	{add_view "fx_sc_new_eyes_techpriest" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_eye1"}
	{add_view "fx_sc_new_eyes_techpriest" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_eye2"}
	{add_view "fx_sc_new_eyes_techpriest" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_eye3"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_body8"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_body7"}
	{add_view "fx_glow_green_med" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_body6"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_body5"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_body4"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_body3"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_body2"}
	{add_view "fx_glow_green_small" "SC_H_Fx_Skins_Disable_On_Death" "#tchp-fx_body1"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
	
	{Bone Show "Skin"}
)

(Define "Randomizer_LV40k_Psyker_001"
	{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Imperial_Guard"}

	{add_view "fx_sc_new_eyes_techpriest" "SC_H_Fx_Skins_Disable_On_Death" "#imp_rig-psyker_eye_l"}
	{add_view "fx_sc_new_eyes_techpriest" "SC_H_Fx_Skins_Disable_On_Death" "#imp_rig-psyker_eye_R"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
	
	{Bone Show "Skin"}
)

(Define "Randomizer_LV40k_Inquisitor_001"
	{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Imperial_Guard"}

	{Bone Show "Skin"}
)

(Define "Randomizer_LV40k_Commissar_001"
	{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Imperial_Guard"}
	
	{add_view "fx_sc_new_eyes_kasrkin" "SC_H_Fx_Skins_Disable_On_Death" "#imp_rig-fx_commissar_eye"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
	
	{Bone show "Skin"}
)

(Define "Randomizer_LV40k_Castellan_001"
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_guard_head"}
	{Bone show "ig_guard_leg_l_1"}
	{Bone show "ig_guard_leg_r_1"}
	
	{Bone show "ig_guard_helmet"}
	{Bone show "ig_guard_shoulders"}
	
	{Bone show "ig_guard_arm_l_1"}
	{Bone show "ig_guard_arm_r_1"}
	{Bone show "ig_guard_hand_1_l"}
	{Bone show "ig_guard_hand_1_r"}
	
	{Bone show "ig_guard_arm_l_detail1"}
	{Bone show "ig_guard_arm_r_detail1"}
	{Bone show "ig_guard_torso_detail1"}
	{Bone show "ig_guard_torso_detail2"}
	{Bone show "ig_guard_torso_detail3"}
	
	{Bone show "ig_guard_belt_1"}
	{Bone show "ig_guard_belt_2"}
	
	{add_view "fx_sc_new_eyes_kasrkin" "SC_H_Fx_Skins_Disable_On_Death" "#imp_rig-fx_castellan_eye"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)
	
(Define "Randomizer_LV40k_Lieutenant_001"
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_guard_head"}
	{Bone show "ig_guard_leg_l_1"}
	{Bone show "ig_guard_leg_r_1"}
	
	{Bone show "ig_guard_helmet"}
	{Bone show "ig_guard_shoulders"}
	
	{Bone show "ig_guard_arm_l_1"}
	{Bone show "ig_guard_arm_r_1"}
	{Bone show "ig_guard_hand_1_l"}
	{Bone show "ig_guard_hand_1_r"}
	
	{Bone show "ig_guard_arm_l_detail1"}
	{Bone show "ig_guard_arm_r_detail1"}
	{Bone show "ig_guard_leg_r_detail1"}
	{Bone show "ig_guard_leg_l_detail1"}
	
	{Bone show "ig_guard_belt_1"}
)
	
; ================================================================================================================
; // CADIAN SHOCK TROOPS
; ================================================================================================================

(Define "Randomizer_LV40k_Guardsmen_001"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	
	{Bone show "ig_guard_shoulders"}
	{Bone show "ig_guard_helmet"}
	{Bone show "ig_guard_helmet_detail1"}	; // <- helmet strap
	
	; // BODY
	{if rand 0.5 {Bone show "ig_guard_legs_1"} else  {Bone show "ig_guard_legs_2"}}
	{if rand 0.5 {Bone show "ig_guard_arms_1"} else  {Bone show "ig_guard_arms_2"}}
	
	; // SKIRT
	{If rand 0.5	{Bone show "ig_guard_torso_detail1"}
	else			{Bone show "ig_guard_torso_detail2"}
	}
	
	; // GOGLES
	{If rand 0.25	{Bone show "ig_guard_helmet_detail2"}
	else rand 0.25	{Bone show "ig_guard_helmet_detail3"}
	}
	
	; // HEAD
	{If rand 0.45	{Bone show "ig_guard_guard_head_1"}
	else rand 0.25	{Bone show "ig_guard_guard_head_2"}
	else rand 0.15	{Bone show "ig_guard_guard_head_3"}
	else			{Bone show "ig_guard_guard_head_4"}
	}
	
	; // Backpack
	{If rand 0.3	{Bone show "ig_guard_backpack_1"}
	else rand 0.1	{Bone show "ig_guard_backpack_2"}
	else rand 0.2	{Bone show "ig_guard_backpack_3"}
	}
	
	; // Belt
	{if rand 0.16	{Bone show "ig_guard_belt_1"}
	else rand 0.16 	{Bone show "ig_guard_belt_2"}
	else rand 0.16	{Bone show "ig_guard_belt_3"}
	else rand 0.16	{Bone show "ig_guard_belt_4"}
	else rand 0.16	{Bone show "ig_guard_belt_5"}
	else rand 0.16	{Bone show "ig_guard_belt_6"}
	else 			{Bone show "ig_guard_belt_7"}
	}
)

; // Whiteshield
(Define "Randomizer_LV40k_Guardsmen_000"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	; [...]
)

; // SERGEANT
(Define "Randomizer_LV40k_Guardsmen_002"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_shoulders"}
	{Bone show "ig_guard_helmet"}
	
	; // BODY
	{Bone show "ig_guard_legs_1"}
	{Bone show "ig_guard_arms_1"}
	{Bone show "ig_guard_torso_detail1"}
	{Bone show "ig_guard_torso_detail2"}
	{Bone show "ig_guard_torso_detail3"}
	{Bone show "ig_guard_belt_1"}
	
	; // HEAD
	{If rand 0.6	{Bone show "ig_guard_guard_head_1"}
	else 			{Bone show "ig_guard_guard_head_2"}
	}
)

; // GUNNER
(Define "Randomizer_LV40k_Guardsmen_005"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	; [...]
)

; // GUNNER
(Define "Randomizer_LV40k_Guardsmen_007"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	; [...]
)

; // MEDICAE
(Define "Randomizer_LV40k_Guardsmen_008"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	; [...]
)

; // TANKMAN
(Define "Randomizer_LV40k_Guardsmen_009"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	; [...]
)

; // VOX OPERATOR
(Define "Randomizer_LV40k_Guardsmen_010"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}

	; [...]
)

; ================================================================================================================
; // VETERANS
; ================================================================================================================

(Define "Randomizer_LV40k_Guardsmen_003"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{tags add "sc_skin_tag_lv40k_guardsmen_Vet"}	
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	
	{Bone show "ig_guard_shoulders"}
	{Bone show "ig_guard_helmet"}
	{Bone show "ig_guard_helmet_detail1"}	; // <- helmet strap
	
	; // BODY
	{Bone show "ig_guard_legs_1"}
	{Bone show "ig_guard_arms_1"}
	{Bone show "ig_guard_torso_detail1"}
	{Bone show "ig_guard_torso_detail2"}
	
	; // SCARF
	{If rand 0.5	{Bone show "ig_guard_torso_detail3"}
	else			{Bone show "ig_guard_torso_detail4"}
	}
	
	; // GOGLES
	{If rand 0.5	{Bone show "ig_guard_helmet_detail3"}
	else			{Bone show "ig_guard_helmet_detail4"}
	}
	
	; // HEAD
	{If rand 0.45	{Bone show "ig_guard_guard_head_1"}	{if rand 0.5 	{Bone show "ig_guard_helmet_detail2"}}		; // <- BUZZ: + respirator
	else 			{Bone show "ig_guard_guard_head_2"}
	}
	
	; // Backpack
	{If rand 0.3	{Bone show "ig_guard_backpack_1"}
	else rand 0.3	{Bone show "ig_guard_backpack_2"}
	else 			{Bone show "ig_guard_backpack_3"}
	}
	
	; // Belt
	{if rand 0.16	{Bone show "ig_guard_belt_1"}
	else rand 0.16 	{Bone show "ig_guard_belt_2"}
	else rand 0.16	{Bone show "ig_guard_belt_3"}
	else rand 0.16	{Bone show "ig_guard_belt_4"}
	else rand 0.16	{Bone show "ig_guard_belt_5"}
	else rand 0.16	{Bone show "ig_guard_belt_6"}
	else 			{Bone show "ig_guard_belt_7"}
	}
)

; // SERGEANT
(Define "Randomizer_LV40k_Guardsmen_004"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{tags add "sc_skin_tag_lv40k_guardsmen_Vet"}
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_shoulders"}
	{Bone show "ig_guard_helmet"}
	
	; // BODY
	{Bone show "ig_guard_legs_1"}
	{Bone show "ig_guard_arms_1"}
	{Bone show "ig_guard_torso_detail1"}
	{Bone show "ig_guard_torso_detail2"}
	{Bone show "ig_guard_torso_detail3"}
	{Bone show "ig_guard_belt_1"}
	
	; // HEAD
	{If rand 0.6	{Bone show "ig_guard_guard_head_1"}
	else 			{Bone show "ig_guard_guard_head_2"}
	}
)

; ================================================================================================================
; // STORMTROOPER
; ================================================================================================================

(Define "Randomizer_LV40k_Kasrkin_001"
	{tags add "sc_skin_tag_lv40k_guardsmen_Stm"}	
	
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_guard_head_1"}
	{Bone show "ig_guard_backpack_1"}
	{Bone show "ig_guard_legs_1"}
	{Bone show "ig_guard_arms_1"}
	{Bone show "ig_guard_shoulders"}
	{Bone show "ig_guard_torso_detail1"}
	{Bone show "ig_guard_torso_detail2"}
	
	{Bone show "ig_guard_helmet"}
	{bone show "ig_guard_helmet_detail1"}	
	{Bone show "ig_guard_helmet_detail2"}	
	{bone show "ig_guard_helmet_detail3"}
	{bone show "ig_guard_helmet_detail4"}		
	
	{bone show "ig_guard_hellgun_belt"} 	; // <- TEST!
	
	{add_view "fx_sc_new_eyes_kasrkin" "SC_H_Fx_Skins_Disable_On_Death" "#imp_rig-fx_kasrkin1"}
	{add_view "fx_sc_new_eyes_kasrkin" "SC_H_Fx_Skins_Disable_On_Death" "#imp_rig-fx_kasrkin2"}
	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

; // SERGEANT
(Define "Randomizer_LV40k_Kasrkin_002"
	{tags add "sc_skin_tag_lv40k_guardsmen_Stm"}	
	
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_guard_head"}
	{Bone show "ig_guard_leg_l_1"}
	{Bone show "ig_guard_leg_r_1"}
	
	{Bone show "ig_guard_helmet"}
	{Bone show "ig_guard_shoulders"}
	
	{Bone show "ig_guard_arm_l_1"}
	{Bone show "ig_guard_arm_r_1"}
	{Bone show "ig_guard_hand_1_l"}	{Bone show "ig_guard_hand_2_l"}
	{Bone show "ig_guard_hand_1_r"}	{Bone show "ig_guard_hand_2_r"}
	
	{bone show "ig_guard_hellgun_belt"} 	; // <- TEST!
	
	{Bone show "ig_guard_torso_detail1"}	; // <- Kasrkin bits
	{Bone show "ig_guard_torso_detail2"}	; // <- Sergeant Gear
	{Bone show "ig_guard_torso_detail4"}	; // <- Kasrkin Leg armor
	{Bone show "ig_guard_belt_2"}			; // <- Sergeant Gear
	{Bone show "ig_guard_backpack_1"}		; // <- Hellgun backpack 
	{Bone show "ig_guard_belt_1"}			; // <- belt armor
	
	; // Extra Armor
	{Bone show "ig_guard_leg_r_detail1"}
	{Bone show "ig_guard_leg_l_detail1"}
	{Bone show "ig_guard_arm_r_detail1"}
	{Bone show "ig_guard_arm_l_detail1"}
)

; ================================================================================================================
; // TEMPESTUS SCIONS 
; ================================================================================================================

(Define "Randomizer_LV40k_Scions_001"
	{tags add "sc_skin_tag_lv40k_guardsmen_Stm"}	
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_backpack_1"}
	{Bone show "ig_guard_torso_detail1"}
	{Bone show "ig_guard_torso_detail2"}
	{Bone show "ig_guard_shoulders"}
	
	{if rand 0.7
		{bone show "ig_guard_helmet_1"}
		{bone show "ig_guard_guard_head_4"}
	else
		{bone show "ig_guard_helmet"}
		{if rand 0.33
			{bone show "ig_guard_guard_head_1"}
		else rand 0.33
			{bone show "ig_guard_guard_head_2"}
		else
			{bone show "ig_guard_guard_head_3"}
		}
	}
	
;//	{add_view "fx_sc_new_eyes_green" "SC_H_Fx_Skins_Disable_On_Death" "#Imp_rig-FX_scion3"}
;//	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)

; // SERGEANT
(Define "Randomizer_LV40k_Scions_002"
	{tags add "sc_skin_tag_lv40k_guardsmen_Stm"}	
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_backpack_1"}
	{Bone show "ig_guard_torso_detail1"}
	{Bone show "ig_guard_torso_detail2"}
	{Bone show "ig_guard_shoulders"}

	{bone show "ig_guard_helmet"}
	{if rand 0.5
		{bone show "ig_guard_guard_head_1"}
	else
		{bone show "ig_guard_guard_head_2"}
	}
	
;//	{add_view "fx_sc_new_eyes_green" "SC_H_Fx_Skins_Disable_On_Death" "#Imp_rig-FX_scion4"}
;//	{view start "SC_H_Fx_Skins_Disable_On_Death"}
)
