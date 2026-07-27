
; ================================================================================================================
; // ULTRAMAR AUXILIA LEGIONARY
; ================================================================================================================

(Define "Randomizer_LV40k_Guardsmen_Ultra_001"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_shoulders"}
	
	{Bone show "ig_guard_helmet"}
	{Bone show "ig_guard_helmet_detail1"}	
	
	; // BODY
	{if rand 0.5 {Bone show "ig_guard_legs_1"} else  {Bone show "ig_guard_legs_2"}}
	{if rand 0.5 {Bone show "ig_guard_arms_1"} else  {Bone show "ig_guard_arms_2"}}
	
	{Bone show "ig_guard_belt_1"}
	{Bone show "ig_guard_torso_detail1"}
	
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
)

; // Sergeant
(Define "Randomizer_LV40k_Guardsmen_Ultra_002"
	{tags add "sc_skin_tag_lv40k_guardsmen_Csp"}
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_shoulders"}
	
	{Bone show "ig_guard_helmet"}
	{Bone show "ig_guard_helmet_detail1"}	
	{Bone show "ig_guard_helmet_detail2"}	
	{Bone show "ig_guard_helmet_detail3"}	
	
	; // BODY 
	{Bone show "ig_guard_legs_1"}
	{Bone show "ig_guard_arms_1"}
	
	{Bone show "ig_guard_belt_1"}
	{Bone show "ig_guard_torso_detail1"}
	{Bone show "ig_guard_torso_detail2"}
	{Bone show "ig_guard_torso_detail3"}
	
	; // HEAD
	{If rand 0.6	{Bone show "ig_guard_guard_head_1"}
	else			{Bone show "ig_guard_guard_head_2"}
	}
)

; // Stormtrooper
(Define "Randomizer_LV40k_Guardsmen_Ultra_003"
	{tags add "sc_skin_tag_lv40k_guardsmen_Stm"}	
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}

	{Bone show "ig_guard_guard_head_1"}
	{Bone show "ig_guard_body_base"}
	{Bone show "ig_guard_shoulders"}
	
	{Bone show "ig_guard_helmet"}
	{Bone show "ig_guard_helmet_detail1"}	
	{Bone show "ig_guard_helmet_detail2"}	
	
	; // BODY 
	{Bone show "ig_guard_legs_1"}
	{Bone show "ig_guard_arms_1"}
	
	{Bone show "ig_guard_backpack_1"}
	{Bone show "ig_guard_torso_detail1"}
	{Bone show "ig_guard_torso_detail2"}
)

; // Stormtrooper SGT
(Define "Randomizer_LV40k_Guardsmen_Ultra_004"
	{tags add "sc_skin_tag_lv40k_guardsmen_Stm"}	
	{tags add "sc_skin_tag_lv40k_guardsmen"}	; // BUZZ: <- obligatory tag.
	{Bone hide "Skin"}
	
)