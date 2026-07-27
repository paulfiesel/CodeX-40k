
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Ork_Nob_Skin/%1.ply"} {visibility %0}	; <- visibility only in preview.
)

(Define "models_orknob_shoota_1"
	{bone "orknob_body"				("Model_Path" args 1 ork_body)}
	{bone "orknob_body_D1"			("Model_Path" args 1 Backpack_Nob_Shoota)}
	{bone "orknob_body_D2"			("Model_Path" args 1 Armored_Belt)}
	{bone "orknob_body_D3"			("Model_Path" args 1 Armor_Nobz)}
	{bone "orknob_body_D4"			("Model_Path" args 1 Leg_Armor_Thighs)}
	{bone "orknob_body_D5"			("Model_Path" args 1 Leg_Armor_Knees1)}
	
	{bone "orknob_armor_1"			("Model_Path" args 1 armor_3)}
	{bone "orknob_armor_2"			("Model_Path" args 1 armor_3_pad_nob1)}
	
	{Bone "G_Head"
		{bone "orknob_head_1"				("Model_Path" args 0 ork_head_no_mouth)}
		{bone "orknob_head_no_ear"			("Model_Path" args 1 ork_head_no_ear)}
		
		{bone "orknob_helmet_1"				("Model_Path" args 1 Helmet_Nob_1)}
		{bone "orknob_helmet_2"				("Model_Path" args 0 Helmet_Nob_2)}
		{bone "orknob_helmet_3"				("Model_Path" args 0 Helmet_Nob_3)}
		{bone "orknob_helmet_4"				("Model_Path" args 0 Helmet_Nob_4)}
		{bone "orknob_helmet_5"				("Model_Path" args 0 Helmet_Gasmask)}
	}
	{bone "G_Hand1R"
		{bone "orknob_arms_1R"				("Model_Path" args 1 Arms_T2_R)}
	}
	{bone "G_Hand1L"
		{bone "orknob_arms_1L"				("Model_Path" args 1 Arms_T2_L)}
	}
	{bone "G_Foot1L"
		{bone "orknob_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orknob_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T3_L)}
	}
	{bone "G_Foot1R"
		{bone "orknob_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orknob_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T3_R)}
	}
)

(Define "models_orknob_stormnob_1"
	{bone "orknob_body"				("Model_Path" args 1 ork_body)}
	{bone "orknob_body_D1"			("Model_Path" args 1 backpack_stormboy)}
	{bone "orknob_body_D2"			("Model_Path" args 1 Armored_Belt)}
	{bone "orknob_body_D3"			("Model_Path" args 1 Leg_Armor_Thighs)}
	{bone "orknob_body_D4"			("Model_Path" args 1 Leg_Armor_Knees1)}
	
	{bone "orknob_armor_1"			("Model_Path" args 1 armor_stormboy)}
	{bone "orknob_armor_2"			("Model_Path" args 1 armor_3_pad_nob2)}
	
	{Bone "G_Head"
		{bone "orknob_head_1"				("Model_Path" args 1 ork_head)}
		{bone "orknob_head_no_ear"			("Model_Path" args 0 ork_head_no_mouth)}
		
		{bone "orknob_helmet_1"				("Model_Path" args 1 Helmet_Cap_1)}
		{bone "orknob_helmet_2"				("Model_Path" args 0 Helmet_Cap_2)}
		{bone "orknob_helmet_3"				("Model_Path" args 0 Helmet_Gasmask)}
		{bone "orknob_helmet_4"				("Model_Path" args 0 Detail_Fangs1)}
	}
	{bone "G_Hand1R"
		{bone "orknob_arms_1R"				("Model_Path" args 1 Arms_T3_R)}
	}
	{bone "G_Hand1L"
		{bone "orknob_arms_1L"				("Model_Path" args 1 Arms_T3_L)}
	}
	{bone "G_Foot1L"
		{bone "orknob_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orknob_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T2_L)}
	}
	{bone "G_Foot1R"
		{bone "orknob_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orknob_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T2_R)}
	}
)

(Define "models_orknob_kommando_1"
	{bone "orknob_body"				("Model_Path" args 1 ork_body)}
	{bone "orknob_body_D1"			("Model_Path" args 1 Backpack_Kommando)}
	{bone "orknob_body_D2"			("Model_Path" args 1 Leg_Armor_Knees1)}
	{bone "orknob_body_D3"			("Model_Path" args 1 Detail_Kommando1)}
	{bone "orknob_body_D4"			("Model_Path" args 1 Detail_Kommando2)}
	
	{bone "orknob_armor_1"			("Model_Path" args 1 Armor_Kommando)}
	{bone "orknob_armor_1_D1"		("Model_Path" args 1 armor_kommando_nob)}
	{bone "orknob_armor_1_D2"		("Model_Path" args 1 Detail_Armor_Kommando3)}
	
	{Bone "G_Head"
		{bone "orknob_head_1"				("Model_Path" args 1 ork_head)}
		
		{bone "orknob_helmet_1"				("Model_Path" args 1 Helmet_Cap)}
		{bone "orknob_helmet_2"				("Model_Path" args 1 Detail_Kommando_Goggles2)}
	}
	{bone "G_Hand1R"
		{bone "orknob_arms_1R"				("Model_Path" args 1 Arms_T3_R)}
	}
	{bone "G_Hand1L"
		{bone "orknob_arms_1L"				("Model_Path" args 1 Arms_T3_L)}
	}
	{bone "G_Foot1L"
		{bone "orknob_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orknob_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T3_L)}
	}
	{bone "G_Foot1R"
		{bone "orknob_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orknob_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T3_R)}
	}
)

(Define "models_orknob_flashgit_1"
	{bone "orknob_body"				("Model_Path" args 1 ork_body)}
	
	{bone "orknob_armor_1"			("Model_Path" args 1 armor_3)}
	{bone "orknob_armor_1_D1"		("Model_Path" args 1 armor_3_pad_gitz)}
	{bone "orknob_armor_1_D2"		("Model_Path" args 1 Detail_Gitz_Shoulder)}
	{bone "orknob_armor_1_D3"		("Model_Path" args 1 Detail_Targeting_Squig)}
	
	{bone "orknob_armor_2"			("Model_Path" args 1 pointy_stikk_flashgitz)}
	
	{bone "orknob_armor_2_D1"		("Model_Path" args 0 pointy_stikk_flashgitz_l1)}
	{bone "orknob_armor_2_D2"		("Model_Path" args 0 pointy_stikk_flashgitz_l2)}
	{bone "orknob_armor_2_D3"		("Model_Path" args 0 pointy_stikk_flashgitz_l3)}
	
	{bone "orknob_armor_3_D1"		("Model_Path" args 0 pointy_stikk_flashgitz_r1)}
	{bone "orknob_armor_3_D2"		("Model_Path" args 0 pointy_stikk_flashgitz_r2)}
	{bone "orknob_armor_3_D3"		("Model_Path" args 0 pointy_stikk_flashgitz_r3)}
	
	{Bone "G_Head"
		{bone "orknob_head_1"				("Model_Path" args 1 ork_head)}
		
		{bone "orknob_helmet_1"				("Model_Path" args 1 helmet_gitz_1)}
		{bone "orknob_helmet_2"				("Model_Path" args 1 helmet_gitz_2)}
		
		{bone "orknob_helmet_D1"			("Model_Path" args 1 Detail_Gold_Piercings)}
		{bone "orknob_helmet_D2"			("Model_Path" args 1 Detail_Monicle_Nob1)}
	}
	{bone "G_Hand1R"
		{bone "orknob_arms_1R"				("Model_Path" args 1 Arms_T3_R)}
	}
	{bone "G_Hand1L"
		{bone "orknob_arms_1L"				("Model_Path" args 1 Arms_T3_L)}
	}
	{bone "G_Foot1L"
		{bone "orknob_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orknob_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T3_L)}
	}
	{bone "G_Foot1R"
		{bone "orknob_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orknob_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T3_R)}
	}
)

(Define "models_orknob_bigmek_1"
	{bone "orknob_body"					("Model_Path" args 1 ork_body)}
	{bone "orknob_body_D1"				("Model_Path" args 1 Backpack_Big_Mek)}
	{bone "orknob_body_D2"				("Model_Path" args 1 Leg_Armor_Thighs)}
	
	{bone "orknob_armor_1"				("Model_Path" args 1 armor_3)}
	{bone "orknob_armor_1_D1"			("Model_Path" args 1 Armor_3_Chestpiece_2)}
	{bone "orknob_armor_1_D2"			("Model_Path" args 1 Armband_R)}
	{bone "orknob_armor_1_D3"			("Model_Path" args 1 Armband_L)}
	
	{bone "orknob_weapon_powerklaw"		("Model_Path" args 1 weapon_powerklaw)}
	
	{Bone "G_Head"
		{bone "orknob_head_1"			("Model_Path" args 1 ork_head_no_mouth)}
		{bone "orknob_helmet_1"			("Model_Path" args 1 Helmet_Burna_2)}
	}
	{bone "G_Hand1R"
		{bone "orknob_arms_1R"			("Model_Path" args 1 Arms_T1_R)}
	}
	{bone "G_Hand1L"
		{bone "orknob_arms_1L"			("Model_Path" args 1 Arms_T1_L)}
	}
	{bone "G_Foot1L"
		{bone "orknob_legs_1L"			("Model_Path" args 1 Ork_LEG_L)}
		{bone "orknob_legs_1L_D1"		("Model_Path" args 1 Leg_Armor_T3_L)}
	}
	{bone "G_Foot1R"
		{bone "orknob_legs_1R"			("Model_Path" args 1 Ork_LEG_R)}
		{bone "orknob_legs_1R_D1"		("Model_Path" args 1 Leg_Armor_T3_R)}
	}
)
