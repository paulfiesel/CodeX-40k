
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1.ply"} 
)

(Define "Model_Path_LOD1"
	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1.ply"} 	
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1_LOD1.ply"}
	} 
)

(Define "Model_Path_LOD2"
	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1_LOD1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1_LOD2.ply"} 
	}
)

(Define "Model_Path_LOD3"
	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1_LOD1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1_LOD2.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Primaris/%0/%1_LOD3.ply"} 
	}
)

(Define "SM_Weapon_Backpack"
	; [...]
)

(Define "SM_Weapon_Melee"
	{extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Humanskin/S_sms_p/Models/+weapons/+weapons_melee.ext"}
)

; ==========================================================================================
; // MARINE - TACTICAL
; ==========================================================================================

(Define "models_tactical_1"
	
	; // ---------------------------------------------------- AVAILABLE WEAPONS
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "smp_legleft1"			{visibility 1}
		("Model_Path" args v1 leg_left_primaris_v1)
	}
	{bone "smp_legright1"			{visibility 1}
		("Model_Path" args v1 leg_right_primaris_v1)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "smp_armleft1"			{visibility 1}
		("Model_Path" args v1 arm_left_primaris_v1)
		
	}
	{bone "smp_armright1"			{visibility 1}
		("Model_Path" args v1 arm_right_primaris_v1)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "smp_torso1"				{visibility 1}
		("Model_Path" args v1 torso_primaris_v1)
		("Model_Path" args v1 torso_primaris_d_gorget_v1)
		("Model_Path" args v1 torso_primaris_d_ultra)
	}
	{bone "smp_torso2"				{visibility 0}
		("Model_Path" args v1 torso_primaris_v1)
		("Model_Path" args v1 torso_primaris_d_gorget_v1)
		("Model_Path" args v1 torso_primaris_d_torso_aquila)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "smp_pauldron_left1"		{visibility 1}
		("Model_Path" args v1 pauldron_left_primaris_v1)
	}
	{bone "smp_pauldron_left2"		{visibility 1}
		("Model_Path" args v1 pauldron_left_primaris_v2)
	}
	{bone "smp_pauldron_left3"		{visibility 1}
		("Model_Path" args v1 pauldron_left_primaris_v3)
	}
	{bone "smp_pauldron_right1"		{visibility 1}
		("Model_Path" args v1 pauldron_right_primaris_v1)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "smp_helmet1"				{visibility 1}
		("Model_Path" args v1 helmet_primaris_v1)
		("Model_Path" args v1 helmet_primaris_d_v1)
	}
	{bone "smp_helmet2"				{visibility 0}
		("Model_Path" args v1 helmet_primaris_v1)
		("Model_Path" args v1 helmet_primaris_d_v2)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "smp_backpack1"			{visibility 1}
		("Model_Path" args v1 backpack_primaris_v1)
	}
)


(Define "models_tactical_sgt_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "smp_legleft1"			{visibility 1}
		("Model_Path" args v1 leg_left_primaris_v1)
		("Model_Path" args v1 leg_left_primaris_d_laurel)
	}
	{bone "smp_legright1"			{visibility 1}
		("Model_Path" args v1 leg_right_primaris_v1)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "smp_armleft1"			{visibility 1}
		("Model_Path" args v1 arm_left_primaris_v1)
		
	}
	{bone "smp_armright1"			{visibility 1}
		("Model_Path" args v1 arm_right_primaris_v1)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "smp_torso1"				{visibility 1}
		("Model_Path" args v1 torso_primaris_v1)
		("Model_Path" args v1 torso_primaris_d_gorget_v1)
		("Model_Path" args v1 torso_primaris_d_ultra)
	}
	{bone "smp_torso2"				{visibility 0}
		("Model_Path" args v1 torso_primaris_v1)
		("Model_Path" args v1 torso_primaris_d_gorget_v1)
		("Model_Path" args v1 torso_primaris_d_torso_aquila)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "smp_pauldron_left1"		{visibility 1}
		("Model_Path" args v1 pauldron_left_primaris_v6)
	}
	{bone "smp_pauldron_left2"		{visibility 1}
		("Model_Path" args v1 pauldron_left_primaris_v7)
	}
	{bone "smp_pauldron_left3"		{visibility 1}
		("Model_Path" args v1 pauldron_left_primaris_v5)
	}
	{bone "smp_pauldron_right1"		{visibility 1}
		("Model_Path" args v1 pauldron_right_primaris_v1)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "smp_helmet1"				{visibility 1}
		("Model_Path" args v1 helmet_primaris_v1)
		("Model_Path" args v1 helmet_primaris_d_v1)
	}
	{bone "smp_helmet2"				{visibility 0}
		("Model_Path" args v1 helmet_primaris_v1)
		("Model_Path" args v1 helmet_primaris_d_v2)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "smp_backpack1"			{visibility 1}
		("Model_Path" args v1 backpack_primaris_v1)
		("Model_Path" args gear banner_pole)
		("Model_Path" args gear banner_banner_v5)
	}
)

(Define "models_devastator_1"
	("SM_Weapon_Backpack")
	
	("Model_Path" args smp_armleft1 v1 arm_left_primaris_v1)
	("Model_Path" args smp_armright1 v1 arm_right_primaris_v1)
	
	("Model_Path" args smp_backpack1 v1 backpack_primaris_v1)
	
	("Model_Path" args smp_helmet1 v1 helmet_primaris_v1)
	("Model_Path" args smp_helmet1_d1 v1 helmet_primaris_d_v1)
	("Model_Path" args smp_helmet1_d2 v1 helmet_primaris_d_v2)
	("Model_Path" args smp_helmet1_d3 v1 helmet_primaris_d_v3)
	
	("Model_Path" args smp_legleft1 v1 leg_left_primaris_v1)
	("Model_Path" args smp_legright1 v1 leg_right_primaris_v1)

	("Model_Path" args smp_pauldron_right1 v1 pauldron_right_primaris_v1)
	
	("Model_Path" args smp_pauldron_left1 v1 pauldron_left_primaris_v4)
	("Model_Path" args smp_pauldron_left2 v1 pauldron_left_primaris_v5)
	("Model_Path" args smp_pauldron_left3 v1 pauldron_left_primaris_v6)
	
	("Model_Path" args smp_torso1 v1 torso_primaris_v1)
	("Model_Path" args smp_torso1_d1 v1 torso_primaris_d_gorget_v2)
	("Model_Path" args smp_torso1_d2 v1 torso_primaris_d_hood_v1)
	("Model_Path" args smp_torso1_d3 v1 torso_primaris_d_torso_doubleplate)
)

(Define "models_devastator_sgt_1"
	("SM_Weapon_Backpack")
	
	("Model_Path" args smp_armleft1 v1 arm_left_primaris_v2)
	("Model_Path" args smp_armright1 v1 arm_right_primaris_v1)
	
	("Model_Path" args smp_backpack1 v1 backpack_primaris_v1)
	
	("Model_Path" args smp_helmet1 v1 helmet_primaris_v1)
	("Model_Path" args smp_helmet1_d1 v1 helmet_primaris_d_v1)
	("Model_Path" args smp_helmet1_d2 v1 helmet_primaris_d_v2)
	("Model_Path" args smp_helmet1_d3 v1 helmet_primaris_d_v3)
	
	("Model_Path" args smp_legleft1 v1 leg_left_primaris_v1)
	("Model_Path" args smp_legleft1_D1 v1 leg_left_primaris_d_laurel)
	
	("Model_Path" args smp_legright1 v1 leg_right_primaris_v1)
	("Model_Path" args smp_legright1_D1 v1 leg_right_primaris_d_laurel)
	("Model_Path" args smp_legright1_D2 v1 leg_right_primaris_d_skull)

	("Model_Path" args smp_pauldron_right1 v1 pauldron_right_primaris_v1)
	
	("Model_Path" args smp_pauldron_left1 v1 pauldron_left_primaris_v7)
	("Model_Path" args smp_pauldron_left2 v1 pauldron_left_primaris_v5)
	("Model_Path" args smp_pauldron_left3 v1 pauldron_left_primaris_v6)
	("Model_Path" args smp_pauldron_left1_d1 v1 pauldron_left_primaris_d_laurel)
	
	("Model_Path" args smp_torso1 v1 torso_primaris_v1)
	("Model_Path" args smp_torso1_d1 v1 torso_primaris_d_gorget_v2)
	("Model_Path" args smp_torso1_d2 v1 torso_primaris_d_hood_v1)
	("Model_Path" args smp_torso1_d3 v1 torso_primaris_d_torso_doubleplate)
)


(define "models_reiver_1"
	("Model_Path" args smp_armleft1 v1 arm_left_primaris_v1)
	("Model_Path" args smp_armright1 v1 arm_right_primaris_v1)
	
	("Model_Path" args smp_backpack1 reiver backpack_reiver_v1)
	
	("Model_Path" args smp_helmet1 reiver helmet_reiver_v1)
	
	("Model_Path" args smp_legleft1 v1 leg_left_primaris_v1)
	("Model_Path" args smp_legright1 v1 leg_right_primaris_v1)

	("Model_Path" args smp_pauldron_right1 reiver pauldron_right_reiver_v1)
	("Model_Path" args smp_pauldron_left1 reiver pauldron_left_reiver_v1)
	
	("Model_Path" args smp_torso1 reiver torso_reiver_v1)
)

(define "models_reiver_sgt_1"
	("Model_Path" args smp_armleft1 v1 arm_left_primaris_v1)
	("Model_Path" args smp_armright1 v1 arm_right_primaris_v1)
	
	("Model_Path" args smp_backpack1 reiver backpack_reiver_v1)
	
	("Model_Path" args smp_helmet1 reiver helmet_reiver_v1)
	
	("Model_Path" args smp_legleft1 v1 leg_left_primaris_v1)
	("Model_Path" args smp_legright1 v1 leg_right_primaris_v1)

	("Model_Path" args smp_pauldron_right1 reiver pauldron_right_reiver_v1)
	("Model_Path" args smp_pauldron_left1 reiver pauldron_left_reiver_v1)
	
	("Model_Path" args smp_torso1 reiver torso_reiver_v1)
)

(define "models_inceptor_1"
	("Model_Path" args smp_armleft1 v1 arm_left_primaris_v3)
	("Model_Path" args smp_armright1 v1 arm_right_primaris_v3)
	
	("Model_Path" args smp_backpack1 gravis backpack_inceptor_v1)
	
	("Model_Path" args smp_helmet1 gravis helmet_inceptor_v1)
	
	("Model_Path" args smp_legleft1 gravis leg_left_inceptor_v1)
	("Model_Path" args smp_legleft1_D1 gravis leg_left_gravis_d_studs)
	
	("Model_Path" args smp_legright1 gravis leg_right_inceptor_v1)
	("Model_Path" args smp_legright1_D1 gravis leg_right_gravis_d_studs)

	("Model_Path" args smp_pauldron_right1 gravis pauldron_right_gravis_v1)
	("Model_Path" args smp_pauldron_left1 gravis pauldron_left_gravis_v1)
	
	("Model_Path" args smp_torso1 gravis torso_inceptor_v1)
	("Model_Path" args smp_torso1_d1 gravis torso_gravis_d_v1)
	("Model_Path" args smp_torso1_d2 gravis torso_gravis_d_v2)
	("Model_Path" args smp_torso1_d3 gravis torso_gravis_d_v3)
)

(define "models_inceptor_sgt_1"
	("Model_Path" args smp_armleft1 v1 arm_left_primaris_v3)
	("Model_Path" args smp_armright1 v1 arm_right_primaris_v3)
	
	("Model_Path" args smp_backpack1 gravis backpack_inceptor_v1)
	
	("Model_Path" args smp_helmet1 gravis helmet_inceptor_v1)
	
	("Model_Path" args smp_legleft1 gravis leg_left_inceptor_v1)
	("Model_Path" args smp_legleft1_D1 gravis leg_left_gravis_d_studs)
	
	("Model_Path" args smp_legright1 gravis leg_right_inceptor_v1)
	("Model_Path" args smp_legright1_D1 gravis leg_right_gravis_d_studs)

	("Model_Path" args smp_pauldron_right1 gravis pauldron_right_gravis_v1)
	("Model_Path" args smp_pauldron_left1 gravis pauldron_left_gravis_v1)
	
	("Model_Path" args smp_torso1 gravis torso_inceptor_v1)
	("Model_Path" args smp_torso1_d1 gravis iron_halo_v1)
	("Model_Path" args smp_torso1_d2 gravis torso_gravis_d_v3)
	("Model_Path" args smp_torso1_d3 gravis torso_gravis_d_v2)
)

(define "models_victrix_1"
)