
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
; // ULTRAMAR AUXILIA 
; ==========================================================================================

(Define "models_guardsmen_ultra_1"
	("Model_Path_LOD3"		args ig_guard_body_base 		1 torso_1 standard)
	
	("Model_Path_LOD3"		args ig_guard_arms_1 			0 hands_1 standard)
	("Model_Path_LOD3"		args ig_guard_arms_2 			1 hands_4 standard)
	("Model_Path_LOD3"		args ig_guard_legs_1 			1 legs_1 standard)
	("Model_Path_LOD3"		args ig_guard_legs_2 			0 legs_2 standard)
	
	("Model_Path_LOD1"		args ig_guard_backpack_1 		1 detail_backpack_1 standard)
	("Model_Path_LOD1"		args ig_guard_backpack_2 		0 detail_backpack_2 standard)
	("Model_Path_LOD1"		args ig_guard_backpack_3 		0 detail_backpack_3 standard)
	
	("Model_Path_LOD3"		args ig_guard_guard_head_1 		1 head_01 standard)
	("Model_Path_LOD2"		args ig_guard_guard_head_2 		0 head_02 standard)
	("Model_Path_LOD3"		args ig_guard_guard_head_3 		0 head_04 standard)
	("Model_Path_LOD2"		args ig_guard_guard_head_4 		0 head_06 standard)
	
	("Model_Path_LOD1"		args ig_guard_torso_detail1 	1 detail_skirt_2 standard)

	("Model_Path"			args ig_guard_belt_1 			1 detail_belt_1 ultramar)
		
	("Model_Path"			args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path"			args ig_guard_helmet 			1 helmet_ultramar ultramar)
	("Model_Path"			args ig_guard_helmet_detail1 	1 helmet_h_d_ultra ultramar)
)

(Define "models_guardsmen_ultra_sgt_1" 
	("Model_Path_LOD3"		args ig_guard_body_base 		1 torso_1 standard)
	
	("Model_Path_LOD3"		args ig_guard_arms_1 			1 hands_3 standard)
	("Model_Path_LOD3"		args ig_guard_legs_1			1 legs_2 standard)
	
	("Model_Path_LOD3"		args ig_guard_guard_head_1 		1 head_05 standard)
	("Model_Path_LOD3"		args ig_guard_guard_head_2 		0 head_03 standard)
	
	("Model_Path_LOD1"		args ig_guard_torso_detail1 	1 detail_skirt_2 standard)
	("Model_Path"			args ig_guard_torso_detail2 	1 detail_veteran_toga ultramar)
	("Model_Path"			args ig_guard_torso_detail3 	1 detail_gear_4 standard)

	("Model_Path"			args ig_guard_belt_1 			1 detail_belt_1 ultramar)
		
	("Model_Path_LOD2"		args ig_guard_shoulders 		1 shoulders_1 standard)
	
	("Model_Path"			args ig_guard_helmet 			1 helmet_ultramar ultramar)
	("Model_Path"			args ig_guard_helmet_detail1 	1 helmet_h_d_laurels ultramar)
	("Model_Path"			args ig_guard_helmet_detail2 	1 helmet_h_crest_horizontal ultramar)
	("Model_Path"			args ig_guard_helmet_detail3 	1 helmet_h_d_ultra ultramar)

)

; ==========================================================================================
; // ULTRAMAR STORMTROOPERS 
; ==========================================================================================

(Define "models_stormtrooper_ultra_1" 
	("Model_Path_LOD3"		args ig_guard_body_base 		1 torso_1 standard)
	
	("Model_Path_LOD3"		args ig_guard_arms_1 			1 hands_4 standard)
	("Model_Path_LOD3"		args ig_guard_legs_1 			1 legs_3 standard)
	
	("Model_Path_LOD1"		args ig_guard_backpack_1 		1 detail_backpack_kasrkin standard)
	
	("Model_Path"			args ig_guard_guard_head_1 		1 head_noface standard)
	
	("Model_Path_LOD1"		args ig_guard_torso_detail1 	1 detail_skirt_1 standard)
	("Model_Path"			args ig_guard_torso_detail2 	1 detail_gear_kasrkin standard)

	("Model_Path"			args ig_guard_shoulders 		1 shoulders_ultra ultramar)
	
	("Model_Path"			args ig_guard_helmet 			1 helmet_ultramar ultramar)
	("Model_Path"			args ig_guard_helmet_detail1 	1 helmet_h_stormtrooper ultramar)
	("Model_Path"			args ig_guard_helmet_detail2 	1 helmet_h_d_veteran ultramar)
)

(Define "models_stormtrooper_ultra_sgt_1" 

;//	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)

)
