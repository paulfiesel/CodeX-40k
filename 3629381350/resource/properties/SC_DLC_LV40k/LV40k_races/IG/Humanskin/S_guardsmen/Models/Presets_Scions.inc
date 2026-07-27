
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
; // TEMPESTUS SCIONS STORMTROOPER
; ==========================================================================================

(Define "models_stormtrooper_scions_1"
	("Model_Path" 			args ig_guard_body_base 		1 torso_1 scions)
	("Model_Path"			args ig_guard_shoulders 		1 shoulders_1 scions)
	("Model_Path"			args ig_guard_backpack_1 		1 detail_backpack_1 scions)
	
	("Model_Path"			args ig_guard_torso_detail1 	1 detail_gear_1 scions)
	("Model_Path"			args ig_guard_torso_detail2 	0 detail_gear_2 scions)
	
	("Model_Path"			args ig_guard_helmet 			1 helmet_1 scions)
	("Model_Path"			args ig_guard_helmet_1 			0 helmet_2 scions)
	
	("Model_Path_LOD3"		args ig_guard_guard_head_1 		1 head_01 scions)
	("Model_Path_LOD2"		args ig_guard_guard_head_2 		0 head_02 scions)
	("Model_Path_LOD2"		args ig_guard_guard_head_3 		0 head_06 scions)
	("Model_Path"			args ig_guard_guard_head_4 		0 head_noface scions)
)

; ==========================================================================================
; // TEMPESTUS SCIONS STORMTROOPER SGT
; ==========================================================================================

(Define "models_stormtrooper_scions_sgt_1"
	("Model_Path" 			args ig_guard_body_base 		1 torso_1 scions)
	("Model_Path"			args ig_guard_shoulders 		1 shoulders_1 scions)
	("Model_Path"			args ig_guard_backpack_1 		1 detail_backpack_1 scions)
	
	("Model_Path"			args ig_guard_torso_detail1 	1 detail_gear_1 scions)
	("Model_Path"			args ig_guard_torso_detail2 	0 detail_gear_2 scions)
	
	("Model_Path"			args ig_guard_helmet 			1 helmet_3 scions)
	
	("Model_Path_LOD3"		args ig_guard_guard_head_1 		1 head_03 scions)
	("Model_Path_LOD3"		args ig_guard_guard_head_2 		0 head_05 scions)
)