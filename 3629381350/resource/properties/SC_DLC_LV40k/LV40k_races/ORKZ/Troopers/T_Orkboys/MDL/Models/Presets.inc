
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Boy_Trooper/%1.ply"} {visibility %0}	
)

(Define "models_sluggaboy"
	{bone "Models"
		{bone "ork_body"				("Model_Path" args 1 ork_body)}
		{bone "ork_leg_l"				("Model_Path" args 1 ork_leg_l)}
		{bone "ork_leg_r"				("Model_Path" args 1 ork_leg_r)}
		
		{bone "armor_3"					("Model_Path" args 0 armor_3)}
		{bone "armor_3_pad_left1"		("Model_Path" args 0 armor_3_pad_left1)}
		{bone "armor_3_pad_right1"		("Model_Path" args 0 armor_3_pad_right1)}
		
		{bone "arms_r_gibbed"			("Model_Path" args 0 arms_r_gibbed)}
		{bone "arms_l_gibbed"			("Model_Path" args 0 arms_l_gibbed)}
		
		{Bone "G_Head"
			{bone "ork_head"				("Model_Path" args 1 ork_head)}
			{bone "ork_head_no_ear"			("Model_Path" args 0 ork_head_no_ear)}
			
			{bone "helmet_plume"			("Model_Path" args 0 helmet_plume)}
			{bone "helmet_shoota_1"			("Model_Path" args 0 helmet_shoota_1)}
			{bone "helmet_shoota_2"			("Model_Path" args 0 helmet_shoota_1b)}
			{bone "helmet_shoota_3"			("Model_Path" args 0 helmet_shoota_1c)}
			{bone "helmet_shoota_4"			("Model_Path" args 0 helmet_shoota_2)}
			{bone "helmet_shoota_5"			("Model_Path" args 0 helmet_shoota_3)}
			{bone "helmet_shoota_6"			("Model_Path" args 0 helmet_shoota_4)}
		}
		{bone "G_Hand1R"
			{bone "arms_t1_r"				("Model_Path" args 1 arms_t1_r)}
		}
		{bone "G_Hand1L"
			{bone "arms_t1_l"				("Model_Path" args 1 arms_t1_l)}
		}
	}
)

(Define "models_ardboy"
	{bone "Models"
		{bone "ork_body"				("Model_Path" args 1 ork_body)}
		{bone "ork_leg_l"				("Model_Path" args 1 ork_leg_l)}
		{bone "ork_leg_r"				("Model_Path" args 1 ork_leg_r)}
		
		{bone "armor_3"					("Model_Path" args 1 armor_3)}
		{bone "armor_3_pad_left2"		("Model_Path" args 1 armor_3_pad_left2)}
		{bone "armor_3_pad_right2"		("Model_Path" args 1 armor_3_pad_right2)}
		
		{bone "arms_r_gibbed"			("Model_Path" args 0 arms_r_gibbed)}
		{bone "arms_l_gibbed"			("Model_Path" args 0 arms_l_gibbed)}
		
		{Bone "G_Head"
			{bone "ork_head_no_ear"			("Model_Path" args 1 ork_head_no_ear)}
			{bone "helmet_shoota_4"			("Model_Path" args 1 helmet_shoota_4)}
		}
		{bone "G_Hand1R"
			{bone "arms_t3_r"					("Model_Path" args 1 arms_t3_r)}
			{bone "weapon_ardboy_shield"		("Model_Path" args 1 weapon_ardboy_shield)}
		}
		{bone "G_Hand1L"
			{bone "arms_t3_l"					("Model_Path" args 1 arms_t3_l)}
		}
		{bone "G_Foot1L"
			{bone "leg_armor_t2_r"				("Model_Path" args 1 leg_armor_t2_r)}
			{bone "leg_armor_t3_r"				("Model_Path" args 0 leg_armor_t3_r)}
		}
		{bone "G_Foot1R"
			{bone "leg_armor_t2_l"				("Model_Path" args 1 leg_armor_t2_l)}
			{bone "leg_armor_t3_l"				("Model_Path" args 0 leg_armor_t3_l)}
		}
	}
)
