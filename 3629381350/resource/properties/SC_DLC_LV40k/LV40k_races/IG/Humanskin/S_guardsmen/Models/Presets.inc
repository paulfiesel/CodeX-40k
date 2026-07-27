
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

; ==========================================================================================
; // CADIAN SHOCK TROOPS 
; ==========================================================================================

(Define "models_guardsmen_1"
	("Model_Path_LOD3"		args ig_guard_body_base 		1 torso_1 standard)
	
	("Model_Path_LOD3"		args ig_guard_arms_1 				0 hands_1 standard)
	("Model_Path_LOD3"		args ig_guard_arms_2 				1 hands_4 standard)
	("Model_Path_LOD3"		args ig_guard_legs_1 				1 legs_1 standard)
	("Model_Path_LOD3"		args ig_guard_legs_2 				0 legs_2 standard)
	
	("Model_Path_LOD1"		args ig_guard_backpack_1 		1 detail_backpack_1 standard)
	("Model_Path_LOD1"		args ig_guard_backpack_2 		0 detail_backpack_2 standard)
	("Model_Path_LOD1"		args ig_guard_backpack_3 		0 detail_backpack_3 standard)
	
	("Model_Path_LOD3"		args ig_guard_guard_head_1 		1 head_01 standard)
	("Model_Path_LOD2"		args ig_guard_guard_head_2 		0 head_02 standard)
	("Model_Path_LOD3"		args ig_guard_guard_head_3 		0 head_04 standard)
	("Model_Path_LOD2"		args ig_guard_guard_head_4 		0 head_06 standard)
	
	("Model_Path_LOD1"		args ig_guard_torso_detail1 	1 detail_skirt_1 standard)
	("Model_Path_LOD1"		args ig_guard_torso_detail2 	1 detail_skirt_2 standard)

	("Model_Path_LOD1"		args ig_guard_belt_1 			1 Detail_belt_1 standard)
	("Model_Path_LOD1"		args ig_guard_belt_2 			0 Detail_belt_2 standard)
	("Model_Path_LOD1"		args ig_guard_belt_3 			0 Detail_belt_3 standard)
	("Model_Path_LOD1"		args ig_guard_belt_4 			0 Detail_belt_4 standard)
	("Model_Path_LOD1"		args ig_guard_belt_5 			0 Detail_belt_5 standard)
	("Model_Path_LOD1"		args ig_guard_belt_6 			0 Detail_belt_6 standard)
	("Model_Path_LOD1"		args ig_guard_belt_7 			0 Detail_belt_7 standard)
		
	("Model_Path_LOD2"		args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path_LOD2"		args ig_guard_helmet 			1 helmet_1 standard)
	("Model_Path"			args ig_guard_helmet_detail1 	1 helmet_h_hacs_strap standard)
	("Model_Path"			args ig_guard_helmet_detail2	0 helmet_h_hacs_googles standard)
	("Model_Path"			args ig_guard_helmet_detail3	0 Helmet_H_face_googles standard)
)

(Define "models_guardsmen_f_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

; ==========================================================================================
; // CADIAN SGT
; ==========================================================================================

(Define "models_guardsmen_sgt_1"
	("Model_Path_LOD3"		args ig_guard_body_base 		1 torso_1 standard)
	
	("Model_Path_LOD3"		args ig_guard_arms_1 			1 hands_3 standard)
	("Model_Path_LOD3"		args ig_guard_legs_1 			1 legs_2 standard)
	
	("Model_Path_LOD3"		args ig_guard_guard_head_1 		1 head_05 standard)
	("Model_Path_LOD2"		args ig_guard_guard_head_2 		0 head_03 standard)
	
	("Model_Path_LOD1"		args ig_guard_torso_detail1 	1 detail_skirt_2 standard)
	("Model_Path"			args ig_guard_torso_detail2 	1 detail_gear_3 standard)
	("Model_Path"			args ig_guard_torso_detail3 	1 detail_gear_4 standard)

	("Model_Path_LOD1"		args ig_guard_belt_1 			1 Detail_belt_8 standard)
		
	("Model_Path_LOD2"		args ig_guard_shoulders 		1 shoulders_1 standard)
	("Model_Path"			args ig_guard_helmet 			1 Helmet_Cap standard)
)

; ==========================================================================================
; // CADIAN VETERANS
; ==========================================================================================

(Define "models_veteran_1"
	("Model_Path_LOD3"		args ig_guard_body_base 		1 torso_1 standard)
	
	("Model_Path_LOD3"		args ig_guard_arms_1 			1 hands_4 standard)
	("Model_Path_LOD3"		args ig_guard_legs_1 			1 legs_3 standard)
	
	("Model_Path_LOD1"		args ig_guard_backpack_1 		1 detail_backpack_1 standard)
	("Model_Path_LOD1"		args ig_guard_backpack_2 		0 detail_backpack_2 standard)
	("Model_Path_LOD1"		args ig_guard_backpack_3 		0 detail_backpack_3 standard)
	
	("Model_Path_LOD3"		args ig_guard_guard_head_1 		1 head_01 standard)
	("Model_Path_LOD2"		args ig_guard_guard_head_2 		0 head_06 standard)
	
	("Model_Path_LOD1"		args ig_guard_torso_detail1 	1 detail_skirt_1 standard)
	("Model_Path_LOD2"		args ig_guard_torso_detail2 	1 Detail_gear_1 standard)
	
	("Model_Path"			args ig_guard_torso_detail3 	1 Detail_Scarf_1 standard)
	("Model_Path"			args ig_guard_torso_detail4 	0 Detail_Scarf_2 standard)

	("Model_Path_LOD1"		args ig_guard_belt_1 			1 Detail_belt_1 standard)
	("Model_Path_LOD1"		args ig_guard_belt_2 			0 Detail_belt_2 standard)
	("Model_Path_LOD1"		args ig_guard_belt_3 			0 Detail_belt_3 standard)
	("Model_Path_LOD1"		args ig_guard_belt_4 			0 Detail_belt_4 standard)
	("Model_Path_LOD1"		args ig_guard_belt_5 			0 Detail_belt_5 standard)
	("Model_Path_LOD1"		args ig_guard_belt_6 			0 Detail_belt_6 standard)
	("Model_Path_LOD1"		args ig_guard_belt_7 			0 Detail_belt_7 standard)
		
	("Model_Path_LOD2"		args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path_LOD2"		args ig_guard_helmet 			1 helmet_1 standard)
	("Model_Path"			args ig_guard_helmet_detail1 	1 helmet_h_hacs_strap standard)
	("Model_Path"			args ig_guard_helmet_detail2	1 Helmet_H_face_respirator standard)
	("Model_Path"			args ig_guard_helmet_detail3	1 helmet_h_hacs_googles standard)
	("Model_Path"			args ig_guard_helmet_detail4	0 Helmet_H_face_googles standard)

)

; ==========================================================================================
; // VETERAN SGT
; ==========================================================================================

(Define "models_veteran_sgt_1"
	("Model_Path_LOD3"		args ig_guard_body_base 		1 torso_1 standard)
	
	("Model_Path_LOD3"		args ig_guard_arms_1 			1 hands_3 standard)
	("Model_Path_LOD3"		args ig_guard_legs_1 			1 legs_3 standard)
	
	("Model_Path_LOD3"		args ig_guard_guard_head_1 		1 head_05 standard)
	("Model_Path_LOD2"		args ig_guard_guard_head_2 		0 head_03 standard)
	
	("Model_Path_LOD1"		args ig_guard_torso_detail1 	1 detail_skirt_1 standard)
	("Model_Path"			args ig_guard_torso_detail2 	1 detail_gear_3 standard)
	("Model_Path"			args ig_guard_torso_detail3 	1 detail_gear_4 standard)

	("Model_Path_LOD1"		args ig_guard_belt_1 			1 Detail_belt_8 standard)
		
	("Model_Path_LOD2"		args ig_guard_shoulders 		1 shoulders_1 standard)
	("Model_Path"			args ig_guard_helmet 			1 Helmet_SGT standard)

)

; ==========================================================================================
; // STORMTROOPER KASRKIN
; ==========================================================================================

(Define "models_stormtrooper_1"
	("Model_Path_LOD3"		args ig_guard_body_base 		1 torso_1 standard)
	
	("Model_Path_LOD3"		args ig_guard_arms_1 			1 hands_4 standard)
	("Model_Path_LOD3"		args ig_guard_legs_1 			1 legs_3 standard)
	
	("Model_Path_LOD1"		args ig_guard_backpack_1 		1 Detail_backpack_Kasrkin standard)
	("Model_Path"			args ig_guard_guard_head_1 		1 head_noface standard)
	
	("Model_Path_LOD1"		args ig_guard_torso_detail1 	1 detail_skirt_1 standard)
	("Model_Path"			args ig_guard_torso_detail2 	1 Detail_gear_kasrkin standard)
		
	("Model_Path_LOD2"		args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path_LOD2"		args ig_guard_helmet 			1 helmet_1 standard)
	("Model_Path"			args ig_guard_helmet_detail1 	1 helmet_h_hacs_strap standard)
	("Model_Path"			args ig_guard_helmet_detail2	1 Helmet_H_face_respirator standard)
	("Model_Path"			args ig_guard_helmet_detail3	1 Helmet_H_face_googles standard)
	("Model_Path"			args ig_guard_helmet_detail4	1 Helmet_H_hacs_tube standard)
	
	("Model_Path"			args ig_guard_hellgun_belt 		1 W_hellgun_cable standard)
)

; ==========================================================================================
; // STORMTROOPER SGT
; ==========================================================================================

(Define "models_stormtrooper_sgt_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

; ==========================================================================================
; // CADIAN GUNNER ARTILLERYMEN
; ==========================================================================================

(Define "models_gunner_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

(Define "models_sniper_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

; ==========================================================================================
; // MEDICAE
; ==========================================================================================

(Define "models_medicae_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

(Define "models_medicae_f_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

(Define "models_tankman_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

(Define "models_voxcaster_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

; ==========================================================================================
; // CADIAN WHITESHIELDS
; ==========================================================================================

(Define "models_whiteshield_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

(Define "models_whiteshield_f_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

; ==========================================================================================
; // CADIAN COMMANDERS
; ==========================================================================================

(Define "models_lieutenant_1"

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)

(Define "models_officer_1"		; ## <- AKA Castellan

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)
