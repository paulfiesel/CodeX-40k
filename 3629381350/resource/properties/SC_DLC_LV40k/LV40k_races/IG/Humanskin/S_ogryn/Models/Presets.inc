
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{bone "%0"
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Ogryn/%3/%2.ply"} 
		{visibility %1}	
	}
)

(Define "Model_Path_LOD1"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Ogryn/%3/%2.ply"} 	
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Ogryn/%3/%2_LOD1.ply"}
		} 
		{visibility %1}	
	}
)

(Define "Model_Path_LOD2"
	{bone "%0"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Ogryn/%3/%2.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Ogryn/%3/%2_LOD1.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/IG_Ogryn/%3/%2_LOD2.ply"} 
		}
		{visibility %1}	
	}
)

; ==========================================================================================
; // DEFAULT OGRYNS
; ==========================================================================================

(Define "models_ogryn_1"
	("Model_Path_LOD2"		args ogryn_head1	1 Ogryn_head1 standard)
	("Model_Path_LOD2"		args ogryn_head2	0 Ogryn_head2 standard)
	
	("Model_Path_LOD2"		args ogryn_torso	1 ogryn_shirt standard)
	("Model_Path_LOD2"		args ogryn_arms		1 ogryn_arms standard)
	("Model_Path_LOD2"		args ogryn_legs		1 ogryn_legs standard)
	("Model_Path"			args ogryn_armor	1 ogryn_armor standard)
	
	("Model_Path"			args ogryn_pauldron_R	1 ogryn_armor_pauldrons_L standard)
	("Model_Path"			args ogryn_gauntlets	1 ogryn_gauntlets standard)
	("Model_Path"			args ogryn_backpack		1 ogryn_backpack standard)
)

(Define "models_bullgryn_1"

;	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
;	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	
)

(Define "models_bonehead_1"

;	("Model_Path_LOD2"		args ig_guard_guard_head 		1 guard_Head standard)
;	("Model_Path"			args ig_guard_body_base 		1 body_base standard)
	
)
