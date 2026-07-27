
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Ork_Boy_Skin/%1.ply"} 
	{visibility %0}	
)

(Define "Model_Path_LOD1"
	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Ork_Boy_Skin/%1.ply"} 	
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Ork_Boy_Skin/%1_LOD1.ply"}
	} 
	{visibility %0}	
)

(Define "Model_Path_LOD2"
	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Ork_Boy_Skin/%1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Ork_Boy_Skin/%1_LOD1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Ork_Boy_Skin/%1_LOD2.ply"} 
	}
	{visibility %0}	
)

(Define "Loota_Guns"
	{bone "orkboy_weapon_loota_dakka"		("Model_Path" args 0 weapon_loota_dakka_dow2)}
	{bone "orkboy_weapon_loota_beamy"		("Model_Path" args 0 weapon_loota_beamy_dow2)}
	{bone "orkboy_weapon_loota_megablasta"	("Model_Path" args 0 weapon_loota_megablasta)}
)

(Define "models_orkboy_shoota_ardboy_1"
	; [...] - Badmoons only
)

(Define "models_orkboy_tankman_1"
	{bone "orkboy_body"				("Model_Path" args 1 ork_body)}
	
	{Bone "G_Head"
		{bone "orkboy_head_no_ear"			("Model_Path" args 1 ork_head_no_ear)}
		{bone "orkboy_helmet_1"				("Model_Path" args 1 helmet_stormboy_1)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T2_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T2_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orkboy_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T3_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orkboy_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T3_R)}
	}
	("Loota_Guns")
)

(Define "models_orkboy_shoota_1"
	{bone "orkboy_body"				("Model_Path" args 1 ork_body)}
	{bone "orkboy_body_D1"			("Model_Path" args 1 armor_3_ammobelt)}
	
	{bone "orkboy_armor_1"			("Model_Path" args 1 armor_3)}

	{bone "orkboy_armor_1_D1"		("Model_Path" args 1 armor_3_pad_left1)}
	{bone "orkboy_armor_1_D2"		("Model_Path" args 0 armor_3_pad_left2)}
	
	{bone "orkboy_armor_1_D1"		("Model_Path" args 0 armor_3_pad_right1)}
	{bone "orkboy_armor_2_D2"		("Model_Path" args 0 armor_3_pad_right2)}
	
	("Loota_Guns")
	
	{Bone "G_Head"
		{bone "orkboy_head_1"				("Model_Path" args 0 ork_head)}
		{bone "orkboy_head_no_ear"			("Model_Path" args 1 ork_head_no_ear)}
		
		{bone "orkboy_helmet_1"				("Model_Path" args 1 Helmet_Shoota_1)}
		{bone "orkboy_helmet_2"				("Model_Path" args 0 Helmet_Shoota_1B)}
		{bone "orkboy_helmet_3"				("Model_Path" args 0 Helmet_Shoota_1C)}
		{bone "orkboy_helmet_4"				("Model_Path" args 0 Helmet_Shoota_2)}
		{bone "orkboy_helmet_5"				("Model_Path" args 0 Helmet_Plume)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T1_R)}
		{bone "orkboy_arms_2R"				("Model_Path" args 0 Arms_T2_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T1_L)}
		{bone "orkboy_arms_2L"				("Model_Path" args 0 Arms_T2_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orkboy_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T2_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orkboy_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T2_R)}
	}
)

(Define "models_orkboy_shoota_big_1"
	{bone "orkboy_body"				("Model_Path" args 1 ork_body)}
	{bone "orkboy_body_d1"			("Model_Path" args 1 Backpack_Big_Shoota)}
	
	{bone "orkboy_armor_1"			("Model_Path" args 1 armor_3)}

	{Bone "G_Head"
		{bone "orkboy_head_no_ear"			("Model_Path" args 1 ork_head_no_ear)}
		
		{bone "orkboy_helmet_1"				("Model_Path" args 1 Helmet_Shoota_1)}
		{bone "orkboy_helmet_2"				("Model_Path" args 0 Helmet_Shoota_1B)}
		{bone "orkboy_helmet_3"				("Model_Path" args 0 Helmet_Shoota_1C)}
		{bone "orkboy_helmet_4"				("Model_Path" args 0 Helmet_Shoota_2)}
		
		{bone "orkboy_helmet_D1"			("Model_Path" args 1 Detail_Shoota_Monicle1)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T3_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T3_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
	}
)

(Define "models_orkboy_tankbuster_1"
	{bone "orkboy_body"				("Model_Path" args 1 ork_body)}
	{bone "orkboy_body_d1"			("Model_Path" args 1 Backpack_Tankbusta1)}
	{bone "orkboy_body_d2"			("Model_Path" args 1 Backpack_Tankbusta2)}
	
	{bone "orkboy_armor_1"			("Model_Path" args 1 armor_3)}

	{Bone "G_Head"
		{bone "orkboy_head_no_ear"			("Model_Path" args 1 ork_head_no_ear)}
		
		{bone "orkboy_helmet_1"				("Model_Path" args 1 Helmet_Tankbusta)}
		{bone "orkboy_helmet_2"				("Model_Path" args 1 Helmet_Mask_2)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T3_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T3_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orkboy_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T3_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orkboy_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T3_R)}
	}
)

(Define "models_orkboy_loota_1"
	{bone "orkboy_body"				("Model_Path" args 1 ork_body)}
	{bone "orkboy_armor_1"			("Model_Path" args 1 armor_3)}

	{Bone "G_Head"
		{bone "orkboy_head_no_ear"			("Model_Path" args 1 ork_head_no_ear)}
		{bone "orkboy_helmet_1"				("Model_Path" args 1 Helmet_Loota_1)}
		{bone "orkboy_helmet_2"				("Model_Path" args 0 Helmet_Loota_2)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T3_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T3_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orkboy_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T2_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orkboy_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T2_R)}
	}
	("Loota_Guns")
)

(Define "models_orkboy_kommando_1"
	{bone "orkboy_body"				("Model_Path" args 1 ork_body)}
	{bone "orkboy_body_d1"			("Model_Path" args 1 Backpack_Kommando)}
;//	{bone "orkboy_body_d2"			("Model_Path" args 1 armor_3_pad_left1)}
	
	{bone "orkboy_armor_1"			("Model_Path" args 1 Armor_Kommando)}
	{bone "orkboy_armor_1_D1"		("Model_Path" args 1 Detail_Armor_Kommando1)}
	{bone "orkboy_armor_1_D2"		("Model_Path" args 1 Detail_Armor_Kommando2)}
	{bone "orkboy_armor_1_D3"		("Model_Path" args 1 Detail_Armor_Kommando3)}
	{bone "orkboy_armor_1_D4"		("Model_Path" args 1 Detail_Kommando1)}
	{bone "orkboy_armor_1_D5"		("Model_Path" args 1 Detail_Kommando2)}

	{Bone "G_Head"
		{bone "orkboy_head_1"				("Model_Path" args 1 ork_head)}
		{bone "orkboy_head_no_ear"			("Model_Path" args 0 ork_head_no_ear)}
		
		{bone "orkboy_helmet_1"				("Model_Path" args 1 Detail_Kommando_Goggles1)}
		{bone "orkboy_helmet_2"				("Model_Path" args 0 Detail_Kommando_Goggles2)}
		{bone "orkboy_helmet_3"				("Model_Path" args 0 Detail_Kommando_Goggles3)}
		{bone "orkboy_helmet_4"				("Model_Path" args 0 Helmet_Mask)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T3_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T3_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orkboy_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T3_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orkboy_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T3_R)}
	}
)


(Define "models_orkboy_burna_1"
	{bone "orkboy_body"				("Model_Path" args 1 ork_body)}
	
	{bone "orkboy_armor_1"			("Model_Path" args 1 armor_3)}

	{bone "orkboy_armor_1_D1"		("Model_Path" args 0 armor_3_pad_left1)}
	{bone "orkboy_armor_2_D1"		("Model_Path" args 0 armor_3_pad_right1)}
	
	{Bone "G_Head"
		{bone "orkboy_head_no_ear"			("Model_Path" args 1 ork_head_no_Teef)}
		
		{bone "orkboy_helmet_1"				("Model_Path" args 1 Helmet_Burna1)}
		{bone "orkboy_helmet_2"				("Model_Path" args 0 Helmet_Burna_2)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T1_R)}
		{bone "orkboy_arms_2R"				("Model_Path" args 0 Arms_T2_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T1_L)}
		{bone "orkboy_arms_2L"				("Model_Path" args 0 Arms_T2_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
	}

	{bone "orkboy_weapon_pack_burna" 			("Model_Path" args 1 weapon_pack_burna_wbs)}	
)

(Define "models_orkboy_stormboy_1"
	{bone "orkboy_head_no_ear"			("Model_Path" args 1 ork_head_no_ear)}
	{bone "orkboy_body"					("Model_Path" args 1 ork_body)}
	{bone "orkboy_body_d1"				("Model_Path" args 1 Backpack_Stormboy)}
	
	{bone "orkboy_armor_1"				("Model_Path" args 1 armor_stormboy)}
	{bone "orkboy_armor_2"				("Model_Path" args 1 Leg_Armor_Knees1)}

	{bone "orkboy_armor_1_D1"			("Model_Path" args 0 armor_3_pad_left2)}
	{bone "orkboy_armor_2_D1"			("Model_Path" args 0 armor_3_pad_right2)}
	
	{Bone "G_Head"
		{bone "orkboy_head_no_ear"			("Model_Path" args 1 ork_head_no_ear)}
		
		{bone "orkboy_helmet_1"				("Model_Path" args 1 helmet_stormboy_1)}
		{bone "orkboy_helmet_2"				("Model_Path" args 0 helmet_stormboy_2)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T3_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T3_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orkboy_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T3_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orkboy_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T3_R)}
	}
)

(Define "models_orkboy_weirdboy_1"
	{bone "orkboy_body"					("Model_Path_LOD2" args 1 ork_body_weirdboy)}
)

(Define "models_orkboy_dok_1"
	{bone "orkboy_body"					("Model_Path" args 1 ork_body)}
	{bone "orkboy_body_d1"				("Model_Path" args 1 Backpack_Painboy)}
	{bone "orkboy_body_d2"				("Model_Path" args 1 detail_painboy)}
	
	{bone "orkboy_armor_1"				("Model_Path" args 1 armor_painboy)}
	
	{Bone "G_Head"
		{bone "orkboy_head_1"				("Model_Path" args 1 ork_head_no_teef)}
		{bone "orkboy_helmet_1"				("Model_Path" args 1 helmet_painboy)}
		{bone "orkboy_helmet_D1"			("Model_Path" args 1 Detail_Monicle_Tankbusta1)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T1_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T1_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
	}
	{bone "orkboy_weapon_painboy_fist"	("Model_Path" args 0 weapon_painboy_fist)}
)

(Define "models_orkboy_mek_1"
	{bone "orkboy_body"					("Model_Path" args 1 ork_body)}
	{bone "orkboy_body_d1"				("Model_Path" args 1 backpack_mekboy)}
	
	{bone "orkboy_armor_1"				("Model_Path" args 1 armor_3)}
	
	{Bone "G_Head"
		{bone "orkboy_head_1"				("Model_Path" args 1 ork_head)}
		{bone "orkboy_helmet_1"				("Model_Path" args 1 helmet_mekboy)}
	}
	{bone "G_Hand1R"
		{bone "orkboy_arms_1R"				("Model_Path" args 1 Arms_T1_R)}
		{bone "orkboy_arms_2R"				("Model_Path" args 0 Arms_T2_R)}
	}
	{bone "G_Hand1L"
		{bone "orkboy_arms_1L"				("Model_Path" args 1 Arms_T1_L)}
		{bone "orkboy_arms_2L"				("Model_Path" args 0 Arms_T2_L)}
	}
	{bone "G_Foot1L"
		{bone "orkboy_legs_1L"				("Model_Path" args 1 Ork_LEG_L)}
		{bone "orkboy_legs_1L_D1"			("Model_Path" args 1 Leg_Armor_T3_L)}
	}
	{bone "G_Foot1R"
		{bone "orkboy_legs_1R"				("Model_Path" args 1 Ork_LEG_R)}
		{bone "orkboy_legs_1R_D1"			("Model_Path" args 1 Leg_Armor_T3_R)}
	}
	("Loota_Guns")
	
)
