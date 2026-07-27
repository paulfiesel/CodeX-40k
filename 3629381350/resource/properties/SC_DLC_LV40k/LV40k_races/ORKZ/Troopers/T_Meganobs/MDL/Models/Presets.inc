
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Meganob_Trooper/%1.ply"} {visibility %0}	
)
(Define "Model_Path_L_X4"
	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Meganob_Trooper/%1.ply"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Meganob_Trooper/%1_lod1.ply"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Meganob_Trooper/%1_lod2.ply"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Meganob_Trooper/%1_lod3.ply"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Meganob_Trooper/%1_lod4.ply"}
	} 
	{visibility %0}	
)

(Define "models_meganob_1"
	{bone "Models"
		{bone "meganob_1"		("Model_Path_L_X4" args 1 meganob_1)}
		{bone "meganob_rocket"	("Model_Path" args 1 meganob_rocket)}
	}
)

(Define "models_meganob_2"
	{bone "Models"
		{bone "meganob_2"		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Meganob_Trooper/meganob_2.ply"}}
	;//	{bone "meganob_2"		("Model_Path_L_X4" args 1 meganob_2)}
		{bone "meganob_rocket"	("Model_Path" args 1 meganob_rocket)}
	}
)
