
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Warboss_Trooper/%1.ply"} {visibility %0}	
)
(Define "Model_Path_L_X4"
;//	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Warboss_Trooper/%1.ply"}
;//		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Warboss_Trooper/%1_lod1.ply"}
;//		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Warboss_Trooper/%1_lod2.ply"}
;//		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Warboss_Trooper/%1_lod3.ply"}
;//		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Warboss_Trooper/%1_lod4.ply"}
;//	} 
	{visibility %0}	
)

(Define "models_warboss_1"
	{bone "Models"
		{bone "Warboss_Body"		("Model_Path" args 1 Warboss_Body)}
		{bone "Warboss_Head_1"		("Model_Path" args 1 Warboss_Head_1)}
		{bone "Warboss_Head_2"		("Model_Path" args 0 Warboss_Head_2)}
		{bone "Warboss_Leg_L"		("Model_Path" args 1 Warboss_Leg_L)}
		{bone "Warboss_Leg_R"		("Model_Path" args 1 Warboss_Leg_R)}
		{bone "Warboss_Rokkit"		("Model_Path" args 1 Warboss_Rokkit)}
	}
)
