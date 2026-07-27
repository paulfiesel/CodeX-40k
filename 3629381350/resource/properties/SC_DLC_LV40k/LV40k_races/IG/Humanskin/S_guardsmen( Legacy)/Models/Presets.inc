
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{bone "%0"
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2.ply"} 
		{visibility %1}	
	}
)

(Define "Model_Path_LOD1"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2.ply"} 	
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2_LOD1.ply"}
		} 
		{visibility %1}	
	}
)

(Define "Model_Path_LOD2"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2_LOD1.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2_LOD2.ply"} 
		}
		{visibility %1}	
	}
)

(Define "Model_Path_LOD3"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2_LOD1.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2_LOD2.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Guardsmen/%3/%2_LOD3.ply"} 
		}
		{visibility %1}	
	}
)

(Define "models_servitor_1"
)

; ==========================================================================================
; // CADIAN SHOCK TROOPS 
; ==========================================================================================

(Define "models_guardsmen_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian standard)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	0 H_strap_loose standard)
	("Model_Path" 			args ig_guard_helmet_detail3	0 Balaclava standard)
	
	("Model_Path_LOD2" 		args ig_guard_backpack_1 		0 backpack_1 standard)
	("Model_Path_LOD2" 		args ig_guard_backpack_2 		0 backpack_3 standard)
	("Model_Path_LOD2" 		args ig_guard_backpack_3 		0 backpack_4 standard)
	
	("Model_Path_LOD2" 		args ig_guard_belt_1 			0 belt_1 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_2 			0 belt_2 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_3 			0 belt_3 standard)
	("Model_Path_LOD1" 		args ig_guard_belt_4 			0 belt_4 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_5 			0 belt_5 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_6 			0 belt_6 standard)
	("Model_Path_LOD1" 		args ig_guard_belt_7 			0 belt_7 standard)
)

(Define "models_guardsmen_f_1"
	("Model_Path" 			args ig_guard_body_base 		1 body_base_f standard)
	("Model_Path" 			args ig_guard_guard_head 		1 guard_head_f standard)
	("Model_Path" 			args ig_guard_leg_l_1 			1 l_leg_f standard)
	("Model_Path" 			args ig_guard_leg_r_1 			1 r_leg_f standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_F_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_F_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian standard)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	0 H_strap_loose standard)
	("Model_Path" 			args ig_guard_helmet_detail3	0 Balaclava standard)
	
	("Model_Path_LOD2" 		args ig_guard_backpack_1 		0 backpack_1 standard)
	("Model_Path_LOD2" 		args ig_guard_backpack_2 		0 backpack_3 standard)
	("Model_Path_LOD2" 		args ig_guard_backpack_3 		0 backpack_4 standard)
	
	("Model_Path_LOD2" 		args ig_guard_belt_1 			0 belt_1 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_2 			0 belt_2 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_3 			0 belt_3 standard)
	("Model_Path_LOD1" 		args ig_guard_belt_4 			0 belt_4 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_5 			0 belt_5 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_6 			0 belt_6 standard)
	("Model_Path_LOD1" 		args ig_guard_belt_7 			0 belt_7 standard)
)

; ==========================================================================================
; // CADIAN SGT
; ==========================================================================================

(Define "models_guardsmen_sgt_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	
	;//("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	;//("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_hat_sgt standard)
	
	("Model_Path_LOD1" 		args ig_guard_belt_1 			1 belt_8 standard)
	("Model_Path_LOD1" 		args ig_guard_torso_detail1		1 Torso_Gear_SGT standard)
)

; ==========================================================================================
; // CADIAN VETERANS
; ==========================================================================================

(Define "models_veteran_1"

	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	("Model_Path"			args ig_guard_hand_2_l 			0 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_2_r 			0 Hand_R_Glove2 standard)
	("Model_Path"			args ig_guard_hand_3_l 			0 Hand_L_Glove standard)
	("Model_Path"			args ig_guard_hand_3_r 			0 Hand_R_Glove standard)
	
	;//("Model_Path"			args ig_guard_arm_r_2 		0 Arm_R_Short standard)
	;//("Model_Path"			args ig_guard_arm_l_2		0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 Shoulders_Veteran standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian standard)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	0 H_strap_loose standard)
	
	("Model_Path_LOD2" 		args ig_guard_backpack_1 		0 backpack_1 standard)
	("Model_Path_LOD2" 		args ig_guard_backpack_2 		0 backpack_3 standard)
	("Model_Path_LOD2" 		args ig_guard_backpack_3 		0 backpack_4 standard)
	
	("Model_Path_LOD2" 		args ig_guard_belt_1 			0 belt_1 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_2 			0 belt_2 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_3 			0 belt_3 standard)
	("Model_Path_LOD1" 		args ig_guard_belt_4 			0 belt_4 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_5 			0 belt_5 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_6 			0 belt_6 standard)
	("Model_Path_LOD1" 		args ig_guard_belt_7 			0 belt_7 standard)
	
	; ================================================================================== ;	// Veteran Gubbins
	
	("Model_Path" 			args ig_guard_helmet_detail3	0 Goggles_Down standard)
	("Model_Path" 			args ig_guard_helmet_detail4	1 Goggles_Up standard)
	("Model_Path" 			args ig_guard_helmet_detail5	1 Balaclava standard)
	("Model_Path" 			args ig_guard_helmet_detail6	0 Respirator standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
	
	("Model_Path_LOD1" 		args ig_guard_torso_detail1		1 Torso_Gear1 standard)
	("Model_Path_LOD2" 		args ig_guard_torso_detail2		0 Torso_Gear2 standard)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 Forearm_R_Stormtrooper standard)
	("Model_Path" 			args ig_guard_arm_l_detail1 	1 Forearm_L_Stormtrooper standard)
)

; ==========================================================================================
; // VETERAN SGT
; ==========================================================================================

(Define "models_veteran_sgt_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	
	;//("Model_Path"		args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	;//("Model_Path"		args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 Shoulders_Veteran standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 Helmet_Comms_SGT standard)
	
	("Model_Path_LOD1" 		args ig_guard_belt_1 			1 belt_8 standard)
	("Model_Path_LOD1" 		args ig_guard_torso_detail1		1 Torso_Gear_SGT standard)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 Auspex standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_r_detail2 	0 Thigh_R_Gear1 standard)
	
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail2 	0 Thigh_L_Gear1 standard)
)

; ==========================================================================================
; // STORMTROOPER KASRKIN
; ==========================================================================================

(Define "models_stormtrooper_1"

	("Model_Path" 			args ig_guard_hellgun_belt 		1 Kasrkin_Belt standard)
	
	
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	("Model_Path"			args ig_guard_hand_2_l 			0 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_2_r 			0 Hand_R_Glove2 standard)
	("Model_Path"			args ig_guard_hand_3_l 			0 Hand_L_Glove standard)
	("Model_Path"			args ig_guard_hand_3_r 			0 Hand_R_Glove standard)
	
	;//("Model_Path"			args ig_guard_arm_r_2 		0 Arm_R_Short standard)
	;//("Model_Path"			args ig_guard_arm_l_2		0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path_LOD1" 		args ig_guard_shoulders 		1 Shoulders_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian standard)
	("Model_Path" 			args ig_guard_helmet_detail1	0 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	1 H_strap_loose standard)
	
	("Model_Path_LOD3" 		args ig_guard_backpack_1 		1 Backpack_Kasrkin standard)

	("Model_Path" 			args ig_guard_belt_1 			1 Belt_Stormtrooper standard)
	("Model_Path_LOD2" 		args ig_guard_belt_2 			0 belt_2 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_3 			0 belt_5 standard)
	
	; ================================================================================== ;	// stormtrooper Gubbins
	
	("Model_Path" 			args ig_guard_helmet_detail3	1 Stormtrooper_Attach standard)
	("Model_Path" 			args ig_guard_helmet_detail4	1 Goggles_Down standard)
	("Model_Path" 			args ig_guard_helmet_detail5	0 Balaclava standard)
	("Model_Path" 			args ig_guard_helmet_detail6	1 Respirator standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_torso_detail1		1 Storm_Trooper_Bits standard)
	("Model_Path" 			args ig_guard_torso_detail2		1 Details_Scarf_1 standard)
	("Model_Path" 			args ig_guard_torso_detail3		0 Details_Scarf_2 standard)
	
	("Model_Path_LOD2" 		args ig_guard_torso_detail4		1 Thigh_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 Forearm_R_Stormtrooper standard)
	("Model_Path" 			args ig_guard_arm_l_detail1 	1 Forearm_L_Stormtrooper standard)
)

; ==========================================================================================
; // STORMTROOPER SGT
; ==========================================================================================

(Define "models_stormtrooper_sgt_1"

	("Model_Path" 			args ig_guard_hellgun_belt 		1 Kasrkin_Belt standard)
	
	
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	("Model_Path"			args ig_guard_hand_3_l 			0 Hand_L_Glove standard)
	("Model_Path"			args ig_guard_hand_3_r 			0 Hand_R_Glove standard)
	
	;//("Model_Path"			args ig_guard_arm_r_2 		0 Arm_R_Short standard)
	;//("Model_Path"			args ig_guard_arm_l_2		0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path_LOD1" 		args ig_guard_shoulders 		1 Shoulders_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 Goggles_Forehead standard)
	
	("Model_Path_LOD3" 		args ig_guard_backpack_1 		1 Backpack_Kasrkin standard)

	("Model_Path" 			args ig_guard_belt_1 			1 Belt_Stormtrooper standard)
	("Model_Path_LOD1" 		args ig_guard_belt_2 			1 belt_8 standard)
	
	; ================================================================================== ;	// stormtrooper Gubbins
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_torso_detail1		1 Storm_Trooper_Bits standard)
	("Model_Path_LOD1" 		args ig_guard_torso_detail2		1 Torso_Gear_SGT standard)
	("Model_Path_LOD2" 		args ig_guard_torso_detail4		1 Thigh_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 Forearm_R_Stormtrooper standard)
	("Model_Path" 			args ig_guard_arm_l_detail1 	1 Forearm_L_Stormtrooper standard)
)

; ==========================================================================================
; // CADIAN GUNNER ARTILLERYMEN
; ==========================================================================================

(Define "models_gunner_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_2 			1 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			1 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Thigh_R_Gear1 standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		0 Thigh_L_Gear1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian standard)
	("Model_Path" 			args ig_guard_helmet_detail1	0 H_strap_loose standard)
	("Model_Path" 			args ig_guard_helmet_detail2	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail3	0 Balaclava standard)
	("Model_Path" 			args ig_guard_helmet_detail4	0 Goggles_Down standard)
	("Model_Path" 			args ig_guard_helmet_detail5	1 Goggles_Up standard)
	
	("Model_Path_LOD1" 		args ig_guard_torso_detail1		1 Torso_Gear1 standard)
	("Model_Path_LOD2" 		args ig_guard_torso_detail2		0 Torso_Gear2 standard)
	("Model_Path" 			args ig_guard_torso_detail3		0 Details_Scarf_1 standard)
	("Model_Path" 			args ig_guard_torso_detail4		1 Details_Scarf_2 standard)
)

(Define "models_sniper_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	("Model_Path"			args ig_guard_hand_2_r 			0 Hand_R_Glove2 standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet_detail1	1 Balaclava standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 Helmet_Sniper_Hood standard)
	
	("Model_Path_LOD2" 		args ig_guard_belt_1 			1 belt_3 standard)
	
	("Model_Path" 			args ig_guard_torso_detail1		1 Details_Scarf_2 standard)
	("Model_Path_LOD2" 		args ig_guard_torso_detail2		1 Thigh_Stormtrooper standard)
)

; ==========================================================================================
; // MEDICAE
; ==========================================================================================

(Define "models_medicae_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian standard)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	0 H_strap_loose standard)
	("Model_Path" 			args ig_guard_helmet_detail3	1 Balaclava standard)
	
	("Model_Path_LOD2" 		args ig_guard_backpack_1 		1 Backpack_Medic standard)
	("Model_Path" 			args ig_guard_belt_1 			1 Detail_Medic_Bag standard)
	("Model_Path_LOD2" 		args ig_guard_belt_2 			1 belt_1 standard)
)

(Define "models_medicae_f_1"
	("Model_Path" 			args ig_guard_body_base 		1 body_base_f standard)
	("Model_Path" 			args ig_guard_guard_head 		1 guard_head_f standard)
	("Model_Path" 			args ig_guard_leg_l_1 			1 l_leg_f standard)
	("Model_Path" 			args ig_guard_leg_r_1 			1 r_leg_f standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_F_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_F_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian standard)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	0 H_strap_loose standard)
	("Model_Path" 			args ig_guard_helmet_detail3	1 Balaclava standard)
	
	("Model_Path_LOD2" 		args ig_guard_backpack_1 		1 Backpack_Medic standard)
	("Model_Path" 			args ig_guard_belt_1 			1 Detail_Medic_Bag standard)
	("Model_Path_LOD2" 		args ig_guard_belt_2 			1 belt_1 standard)
)

(Define "models_tankman_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 Helmet_Tanker standard)
	
	("Model_Path_LOD2" 		args ig_guard_belt_1 			1 belt_1 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_2 			0 belt_3 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_3 			0 belt_5 standard)
	("Model_Path" 			args ig_guard_belt_4 			1 Detail_Medic_Bag standard)
)

(Define "models_voxcaster_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			0 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			0 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			0 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			0 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			1 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			1 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian standard)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	0 H_strap_loose standard)
	("Model_Path" 			args ig_guard_helmet_detail3	1 Balaclava standard)
	("Model_Path" 			args ig_guard_helmet_detail4	1 Stormtrooper_Attach standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Thigh_R_Gear1 standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		0 Thigh_L_Gear1 standard)
	
	("Model_Path_LOD2" 		args ig_guard_backpack_1 		1 Backpack_Vox standard)
	
	("Model_Path_LOD2" 		args ig_guard_belt_1 			0 belt_1 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_2 			0 belt_2 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_3 			0 belt_3 standard)
	("Model_Path_LOD1" 		args ig_guard_belt_4 			0 belt_4 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_5 			0 belt_5 standard)
	("Model_Path_LOD2" 		args ig_guard_belt_6 			0 belt_6 standard)
	("Model_Path_LOD1" 		args ig_guard_belt_7 			0 belt_7 standard)
)

; ==========================================================================================
; // CADIAN WHITESHIELDS
; ==========================================================================================

(Define "models_whiteshield_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			0 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			0 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			0 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			0 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			1 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			1 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian_ws standard)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	0 H_strap_loose standard)
	; // Whiteshields have no additional gear
)

(Define "models_whiteshield_f_1"
	("Model_Path" 			args ig_guard_body_base 		1 body_base_f standard)
	("Model_Path" 			args ig_guard_guard_head 		1 guard_head_f standard)
	("Model_Path" 			args ig_guard_leg_l_1 			1 l_leg_f standard)
	("Model_Path" 			args ig_guard_leg_r_1 			1 r_leg_f standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			0 arm_r_F_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			0 arm_l_F_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			0 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			0 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			1 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			1 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_cadian_ws standard)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	0 H_strap_loose standard)
	; // Whiteshields have no additional gear
)

; ==========================================================================================
; // CADIAN COMMANDERS
; ==========================================================================================

(Define "models_lieutenant_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_lieutenant standard)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 Forearm_R_Stormtrooper standard)
	("Model_Path" 			args ig_guard_arm_l_detail1 	1 Forearm_L_Stormtrooper standard)
	
	("Model_Path_LOD1" 		args ig_guard_belt_1			1 belt_1 standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
)

(Define "models_officer_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_helmet		 	1 helmet_castellan standard)
	
	("Model_Path" 			args ig_guard_arm_l_detail1		1 Castellan_L_Hand standard)
	("Model_Path" 			args ig_guard_arm_r_detail1		1 Castellan_R_Hand standard)
	
	("Model_Path" 			args ig_guard_torso_detail1		1 Detail_Medic_Bag standard)
	("Model_Path_LOD1" 		args ig_guard_torso_detail2		1 Torso_Gear_SGT standard)
	("Model_Path" 			args ig_guard_torso_detail3		1 Skirt_Short standard)
	
	("Model_Path_LOD1" 		args ig_guard_belt_1			1 belt_8 standard)
	("Model_Path" 			args ig_guard_belt_2			1 Castellan_Detail standard)
)

; ==========================================================================================
; // ULTRAMAR LEGION 
; ==========================================================================================

(Define "models_guardsmen_ultra_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_backpack_1 		1 Backpack_Ultramar ultramar)
	
	("Model_Path_LOD2" 		args ig_guard_helmet			1 Helmet_Ultramar ultramar)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	
	("Model_Path" 			args ig_guard_belt_1 			1 Chest_Ultramar ultramar)
	("Model_Path" 			args ig_guard_belt_2 			1 Belt_ultramar ultramar)
;//	("Model_Path" 			args ig_guard_belt_3 			1 Belt_pteruges ultramar)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
)

(Define "models_guardsmen_ultra_sgt_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_backpack_1 		1 Backpack_Ultramar ultramar)
	
	("Model_Path_LOD2" 		args ig_guard_helmet			1 Helmet_Ultramar ultramar)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	1 H_Crest_Horizontal ultramar)
	("Model_Path" 			args ig_guard_helmet_detail3	1 H_ultramar_detail_Ultra ultramar)
	
	("Model_Path" 			args ig_guard_belt_1 			1 Chest_Ultramar ultramar)
	("Model_Path" 			args ig_guard_belt_2 			1 Belt_ultramar ultramar)
;//	("Model_Path" 			args ig_guard_belt_3 			1 Belt_pteruges ultramar)
	("Model_Path_LOD1" 		args ig_guard_belt_4 			1 belt_8 standard)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 Forearm_R_Stormtrooper standard)
	("Model_Path" 			args ig_guard_arm_l_detail1 	1 Forearm_L_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
	
	("Model_Path_LOD1" 		args ig_guard_torso_detail1		1 Torso_Gear_SGT standard)
	("Model_Path" 			args ig_guard_torso_detail2 	1 Detail_Veteran_Toga ultramar)
)

(Define "models_stormtrooper_ultra_sgt_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path_LOD2" 		args ig_guard_helmet			1 Helmet_Ultramar ultramar)
	("Model_Path_LOD3" 		args ig_guard_helmet_detail1	1 H_Ultramar_Stormtrooper ultramar)
	("Model_Path" 			args ig_guard_helmet_detail2	1 H_Crest_Horizontal ultramar)
	("Model_Path" 			args ig_guard_helmet_detail3	1 H_laurels ultramar)
	("Model_Path" 			args ig_guard_helmet_detail4	1 H_veteran_detail_ultra ultramar)
	
	("Model_Path_LOD3" 		args ig_guard_backpack_1 		1 Backpack_Kasrkin standard)
	
	("Model_Path" 			args ig_guard_belt_1 			1 Chest_Ultramar ultramar)
	("Model_Path" 			args ig_guard_belt_2 			1 Belt_ultramar ultramar)
;//	("Model_Path" 			args ig_guard_belt_3 			1 Belt_pteruges ultramar)
	("Model_Path_LOD1" 		args ig_guard_belt_4 			1 belt_8 standard)
	("Model_Path" 			args ig_guard_belt_5 			1 Thigh_L_Gear1 standard)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 Forearm_R_Stormtrooper standard)
	("Model_Path" 			args ig_guard_arm_l_detail1 	1 Forearm_L_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
	
	("Model_Path_LOD2" 		args ig_guard_torso_detail1		1 Shoulders_Ultramar ultramar)
	("Model_Path_LOD1" 		args ig_guard_torso_detail2		1 Torso_Gear_SGT standard)
	("Model_Path" 			args ig_guard_torso_detail3 	1 Detail_Veteran_Toga ultramar)
)

(Define "models_stormtrooper_ultra_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path_LOD3" 		args ig_guard_backpack_1 		1 Backpack_Kasrkin standard)
	
	("Model_Path_LOD2" 		args ig_guard_helmet			1 Helmet_Ultramar ultramar)
	("Model_Path_LOD3" 		args ig_guard_helmet_detail1	1 H_Ultramar_Stormtrooper ultramar)
	("Model_Path" 			args ig_guard_helmet_detail2	1 H_Crest_Mohawk ultramar)
	("Model_Path" 			args ig_guard_helmet_detail3	1 H_laurels ultramar)
	
	("Model_Path" 			args ig_guard_belt_1 			1 Chest_Ultramar ultramar)
	("Model_Path" 			args ig_guard_belt_2 			1 Belt_ultramar ultramar)
;//	("Model_Path" 			args ig_guard_belt_3 			1 Belt_pteruges ultramar)
	("Model_Path" 			args ig_guard_belt_4 			1 Thigh_R_Gear1 standard)
	("Model_Path" 			args ig_guard_belt_5 			0 Thigh_L_Gear1 standard)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 Forearm_R_Stormtrooper standard)
	("Model_Path" 			args ig_guard_arm_l_detail1 	1 Forearm_L_Stormtrooper standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
	
	("Model_Path_LOD2" 		args ig_guard_torso_detail1		1 Shoulders_Ultramar ultramar)
	("Model_Path_LOD2" 		args ig_guard_torso_detail2		1 Torso_Gear2 standard)
)

(Define "models_gunner_ultra_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			0 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			0 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			0 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			0 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			1 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			1 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path" 			args ig_guard_backpack_1 		1 Backpack_Ultramar ultramar)
	
	("Model_Path_LOD2" 		args ig_guard_helmet			1 Helmet_Ultramar ultramar)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	1 Goggles_Down standard)
	("Model_Path" 			args ig_guard_helmet_detail3	0 Goggles_Up standard)
	
	("Model_Path" 			args ig_guard_belt_1 			1 Chest_Ultramar ultramar)
	("Model_Path" 			args ig_guard_belt_2 			1 Belt_ultramar ultramar)
;//	("Model_Path" 			args ig_guard_belt_3 			1 Belt_pteruges ultramar)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
	
	("Model_Path_LOD1" 		args ig_guard_torso_detail1		0 Torso_Gear1 standard)
	("Model_Path_LOD2" 		args ig_guard_torso_detail2		1 Torso_Gear2 standard)
	("Model_Path" 			args ig_guard_torso_detail3		0 Details_Scarf_1 standard)
	("Model_Path" 			args ig_guard_torso_detail4		1 Details_Scarf_2 standard)
)

(Define "models_medicae_ultra_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path_LOD2" 		args ig_guard_backpack_1 		1 Backpack_Medic standard)
	
	("Model_Path_LOD2" 		args ig_guard_helmet			1 Helmet_Ultramar ultramar)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	1 Balaclava standard)
	
	("Model_Path" 			args ig_guard_belt_1 			1 Chest_Ultramar ultramar)
	("Model_Path" 			args ig_guard_belt_2 			1 Belt_ultramar ultramar)
;//	("Model_Path" 			args ig_guard_belt_3 			1 Belt_pteruges ultramar)
	("Model_Path" 			args ig_guard_belt_4 			1 Detail_Medic_Bag standard)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
)

(Define "models_voxcaster_ultra_1"
	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_default standard)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_default standard)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	("Model_Path"			args ig_guard_hand_1_l 			1 hand_l_base standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 hand_r_base standard)
	
	("Model_Path"			args ig_guard_arm_r_2 			0 Arm_R_Short standard)
	("Model_Path"			args ig_guard_arm_l_2			0 Arm_L_Short standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path_LOD2" 		args ig_guard_backpack_1 		1 Backpack_Vox standard)
	
	("Model_Path_LOD2" 		args ig_guard_helmet			1 Helmet_Ultramar ultramar)
	("Model_Path" 			args ig_guard_helmet_detail1	1 H_strap_tight standard)
	("Model_Path" 			args ig_guard_helmet_detail2	1 Balaclava standard)
	("Model_Path" 			args ig_guard_helmet_detail3	1 Goggles_Down standard)
	
	("Model_Path" 			args ig_guard_belt_1 			1 Chest_Ultramar ultramar)
	("Model_Path" 			args ig_guard_belt_2 			1 Belt_ultramar ultramar)
;//	("Model_Path" 			args ig_guard_belt_3 			1 Belt_pteruges ultramar)
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 Leg_R_Armor_Stormtrooper standard)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 Leg_L_Armor_Stormtrooper standard)
)

; ==========================================================================================
; // TEMPESTUS SCIONS STORMTROOPER KASRKIN
; ==========================================================================================

(Define "models_stormtrooper_scions_1"

	("Model_Path" 			args ig_guard_hellgun_belt 		1 tempestus_belt scions)
	
	("Model_Path"			args ig_guard_guard_head1 		0 tempestus_helmet1 scions)
	("Model_Path"			args ig_guard_guard_head2 		0 tempestus_helmet2 scions)
	("Model_Path"			args ig_guard_guard_head3 		0 tempestus_helmet3 scions)
	("Model_Path"			args ig_guard_guard_head4 		1 tempestus_helmet4 scions)
	
	("Model_Path"			args ig_guard_body_base 		1 tempestus_base scions)
	
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_tempestus scions)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_tempestus scions)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_tempestus scions)
	("Model_Path" 			args ig_guard_backpack_1 		1 tempestus_backpack scions)

	; ================================================================================== ;	// Gubbins
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 leg_r_tempestus scions)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 leg_l_tempestus scions)
	("Model_Path" 			args ig_guard_leg_r_detail2 	0 Thigh_R_Gear1 standard)
	("Model_Path" 			args ig_guard_leg_l_detail2		1 Thigh_L_Gear1 standard)
	
	("Model_Path" 			args ig_guard_torso_detail1		1 tempestus_armor1 scions)
	("Model_Path" 			args ig_guard_torso_detail2		0 tempestus_armor2 scions)
	("Model_Path" 			args ig_guard_torso_detail3		0 tempestus_armor3 scions)
	("Model_Path" 			args ig_guard_torso_detail4		0 tempestus_armor4 scions)
	("Model_Path" 			args ig_guard_torso_detail5		1 tempestus_thighs scions)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 forearm_l_tempestus scions)
	("Model_Path" 			args ig_guard_arm_l_detail1 	1 forearm_r_tempestus scions)
)

; ==========================================================================================
; // TEMPESTUS SCIONS STORMTROOPER SGT
; ==========================================================================================

(Define "models_stormtrooper_scions_sgt_1"
	
	("Model_Path"			args ig_guard_guard_head 		1 head_tempestor scions)
	("Model_Path"			args ig_guard_body_base 		1 tempestus_base scions)
	("Model_Path"			args ig_guard_leg_l_1 			1 leg_l_tempestus scions)
	("Model_Path"			args ig_guard_leg_r_1 			1 leg_r_tempestus scions)
	
	; // ARM 
	("Model_Path"			args ig_guard_arm_r_1 			1 arm_r_full standard)
	("Model_Path"			args ig_guard_arm_l_1 			1 arm_l_full standard)
	
	("Model_Path"			args ig_guard_hand_1_l 			1 Hand_L_Glove2 standard)
	("Model_Path"			args ig_guard_hand_1_r 			1 Hand_R_Glove2 standard)
	
	; ================================================================================== ;	// Gear
	
	("Model_Path" 			args ig_guard_shoulders 		1 shoulders_tempestus scions)
	("Model_Path" 			args ig_guard_backpack_1 		1 tempestus_backpack scions)

	; ================================================================================== ;	// Gubbins
	
	("Model_Path" 			args ig_guard_leg_r_detail1 	1 leg_r_tempestus scions)
	("Model_Path" 			args ig_guard_leg_l_detail1		1 leg_l_tempestus scions)
	
	("Model_Path" 			args ig_guard_torso_detail1		1 tempestus_armor_prime scions)
	("Model_Path" 			args ig_guard_torso_detail2		1 tempestus_thighs scions)
	("Model_Path" 			args ig_guard_torso_detail3		1 tempestus_coat scions)
	
	("Model_Path" 			args ig_guard_arm_r_detail1 	1 forearm_l_tempestus scions)
	("Model_Path" 			args ig_guard_arm_l_detail1 	1 forearm_r_tempestus scions)
)