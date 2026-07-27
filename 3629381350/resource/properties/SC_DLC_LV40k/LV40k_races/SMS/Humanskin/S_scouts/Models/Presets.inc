
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{bone "%0"
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2.ply"} 
		{visibility %1}	
	}
)

(Define "Model_Path_LOD1"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2.ply"} 	
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2_LOD1.ply"}
		} 
		{visibility %1}	
	}
)

(Define "Model_Path_LOD2"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2_LOD1.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2_LOD2.ply"} 
		}
		{visibility %1}	
	}
)

(Define "Model_Path_LOD3"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2_LOD1.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2_LOD2.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Scouts/%2_LOD3.ply"} 
		}
		{visibility %1}	
	}
)

(Define "Common_Parts"
	("Model_Path_LOD3" args sm_scout_torso 1 scout_torso)
	("Model_Path_LOD3" args sm_scout_r_leg 1 scout_r_leg)
	("Model_Path_LOD3" args sm_scout_l_leg 1 scout_l_leg)
	("Model_Path_LOD3" args sm_scout_backpack 1 detail_backpack)
	("Model_Path_LOD1" args sm_scout_pauldrons 1 scout_pauldrons)
	
	("Model_Path" args sm_scout_L_arm1 1 scout_L_arm1)
	("Model_Path" args sm_scout_L_arm2 0 scout_L_arm2)
	("Model_Path" args sm_scout_R_arm1 1 scout_R_arm1)
	("Model_Path" args sm_scout_R_arm2 0 scout_R_arm2)
)

(Define "models_scout_sniper"
	("Common_Parts")
	
	("Model_Path_LOD2" args sm_scout_head_1 1 head_sniper)
	
	("Model_Path" args sm_scout_gear_1 1 detail_hood)
	("Model_Path" args sm_scout_gear_2 1 detail_capes)
	
	("Model_Path" args sm_scout_gauntlets_L4 1 scout_gauntlets_L4)
	("Model_Path" args sm_scout_gauntlets_R4 1 scout_gauntlets_R4)
)

(Define "models_scout_sergeant"
	("Common_Parts")
	
	("Model_Path" args sm_scout_gear_1 1 detail_capes)
	("Model_Path" args sm_scout_gear_2 1 detail_sergeant)
	
	("Model_Path_LOD1" args sm_scout_head_1 0 head_hd9)
	("Model_Path_LOD1" args sm_scout_head_2 0 head_hd10)
	("Model_Path_LOD1" args sm_scout_head_3 1 head_hd11)
	
	("Model_Path" args sm_scout_helmet 1 helmet_sergeant)
	
	("Model_Path" args sm_scout_gauntlets_L1 1 scout_gauntlets_L1)
	("Model_Path" args sm_scout_gauntlets_R1 1 scout_gauntlets_R1)
)

(Define "models_scout_tactical_2"
	("Common_Parts")
	
	("Model_Path_LOD2" args sm_scout_helmet 1 helmet_heavy)
	("Model_Path_LOD2" args sm_scout_head_1 0 head_masked)
	
	("Model_Path" args sm_scout_gear_1 1 detail_gear_belt)
	("Model_Path" args sm_scout_gear_2 1 detail_gear_l)
	("Model_Path" args sm_scout_gear_3 1 detail_gear_r)
	
	("Model_Path" args sm_scout_gauntlets_L4 1 scout_gauntlets_L4)
	("Model_Path" args sm_scout_gauntlets_R4 1 scout_gauntlets_R4)
)

(Define "models_scout_tactical_1"
	("Common_Parts")
	
	("Model_Path_LOD2" args sm_scout_helmet 1 helmet_default)
	
	("Model_Path" args sm_scout_gear_1 1 detail_gear_belt)
	
	("Model_Path_LOD1" args sm_scout_head_1 1 head_hd1)
	("Model_Path_LOD1" args sm_scout_head_2 0 head_hd2)
	("Model_Path_LOD1" args sm_scout_head_3 0 head_hd3)
	("Model_Path_LOD1" args sm_scout_head_4 0 head_hd4)
	("Model_Path_LOD1" args sm_scout_head_5 0 head_hd5)
	("Model_Path_LOD1" args sm_scout_head_6 0 head_hd6)
	("Model_Path_LOD1" args sm_scout_head_7 0 head_hd7)
	("Model_Path_LOD1" args sm_scout_head_8 0 head_hd8)
	("Model_Path_LOD1" args sm_scout_head_9 0 head_hd9)
	("Model_Path_LOD1" args sm_scout_head_10 0 head_hd10)
	("Model_Path_LOD1" args sm_scout_head_11 0 head_hd11)
	("Model_Path_LOD1" args sm_scout_head_12 0 head_hd12)
	("Model_Path_LOD1" args sm_scout_head_13 0 head_hd13)
	("Model_Path_LOD1" args sm_scout_head_14 0 head_hd14)
		
	("Model_Path" args sm_scout_gauntlets_L2 1 scout_gauntlets_L2)
	("Model_Path" args sm_scout_gauntlets_L3 1 scout_gauntlets_L3)
	("Model_Path" args sm_scout_gauntlets_R2 1 scout_gauntlets_R2)
	("Model_Path" args sm_scout_gauntlets_R3 1 scout_gauntlets_R3)
)

