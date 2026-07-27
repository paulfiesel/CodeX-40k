
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Nob_Trooper/%1.ply"} {visibility %0}	
)

(Define "models_melee_nobs"
	{bone "Models"
		{bone "ork_body"					("Model_Path" args 1 ork_body)}
		{bone "ork_leg_r"					("Model_Path" args 1 ork_leg_r)}
		{bone "ork_leg_l"					("Model_Path" args 1 ork_leg_l)}
		
		{bone "arms_l_gibbed"				("Model_Path" args 0 arms_l_gibbed)}
		{bone "arms_r_gibbed"				("Model_Path" args 0 arms_r_gibbed)}
		
		{bone "armor3"						("Model_Path" args 1 armor_3)}
		{bone "armor_nobz_1"				("Model_Path" args 1 armor_3_chestpiece_1)}
		{bone "armor_nobz_2"				("Model_Path" args 1 armor_3_pad_nob1)}
		{bone "armor_nobz_3"				("Model_Path" args 1 armor_pelvis_belt)}
		{bone "armor_nobz_4"				("Model_Path" args 1 armor_pelvis_plate)}
		{bone "armor_nobz_5"				("Model_Path" args 1 armor_thigh_armor)}
		
		{Bone "G_Head"
			{bone "ork_head"				("Model_Path" args 1 ork_head_no_ear)}
			{bone "helmet_nob_1"			("Model_Path" args 0 helmet_nob_1)}
			{bone "helmet_nob_2"			("Model_Path" args 0 helmet_nob_2)}
			{bone "helmet_nob_3"			("Model_Path" args 0 helmet_nob_3)}
		}	
		{Bone "G_Hand1R"	
			{bone "arms_t3_r"				("Model_Path" args 1 arms_t3_r)}
		}
		{Bone "G_Hand1L"
			{bone "arms_t3_l"				("Model_Path" args 1 arms_t3_l)}
			{bone "weapon_ork_uge_mace"		("Model_Path" args 1 weapon_ork_uge_mace)}
		}
		{bone "G_Foot1L"
			{bone "leg_armor_t3_r"			("Model_Path" args 1 leg_armor_t3_r)}
		}
		{bone "G_Foot1R"
			{bone "leg_armor_t3_l"			("Model_Path" args 1 leg_armor_t3_l)}
		}
	}
)
