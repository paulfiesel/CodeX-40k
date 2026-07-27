
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{bone "%0"
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/ADM_Servitor/%2.ply"} 
		{visibility %1}	
	}
)

(Define "Model_Path_LOD1"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/ADM_Servitor/%2.ply"} 	
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/ADM_Servitor/%2_LOD1.ply"}
		} 
		{visibility %1}	
	}
)

(Define "Model_Path_LOD2"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/ADM_Servitor/%2.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/ADM_Servitor/%2_LOD1.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/ADM_Servitor/%2_LOD2.ply"} 
		}
		{visibility %1}	
	}
)

(Define "models_servitor_1"
	("Model_Path" args servitor_body 1 Servitor_Body)
	("Model_Path" args Servitor_head 1 Servitor_Head)
	
	("Model_Path" args Servitor_headgear1 1 Servitor1_HeadMech)
	("Model_Path" args Servitor_headgear2 0 Servitor2_HeadMech)
	("Model_Path" args Servitor_headgear3 0 Servitor3_HeadMech)
	("Model_Path" args Servitor_headgear4 0 Servitor4_HeadMech)
	
	("Model_Path" args servitor_l_servoarm 1 Arm_Servitor)
	("Model_Path" args servitor_gunservitor 0 Gun_Servitor)
	
	("Model_Path" args servitor_w_multimelta 0 L_W_Melta)
	("Model_Path" args servitor_w_plasmacannon 0 L_w_Plasma)
	("Model_Path" args servitor_w_heavybolter 0 L_W_Heavybolter)
)
