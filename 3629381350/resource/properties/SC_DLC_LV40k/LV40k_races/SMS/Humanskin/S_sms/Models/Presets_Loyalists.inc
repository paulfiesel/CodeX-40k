
; // ---------------------------------------------------- BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1.ply"} 
)

(Define "Model_Path_LOD1"
	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1.ply"} 	
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1_LOD1.ply"}
	} 
)

(Define "Model_Path_LOD2"
	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1_LOD1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1_LOD2.ply"} 
	}
)

(Define "Model_Path_LOD3"
	{LODView
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1_LOD1.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1_LOD2.ply"} 
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/SM_Jz_Firstborn/%0/%1_LOD3.ply"} 
	}
)

(Define "SM_Weapon_Backpack"
	{extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Humanskin/S_sms/Models/+weapons/+weapons_devastator.ext"}
)

(Define "SM_Weapon_Melee"
	{extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Humanskin/S_sms/Models/+weapons/+weapons_melee.ext"}
)

; ==========================================================================================
; // HERO - CHAPLAIN
; ==========================================================================================

(Define "models_chaplain_1"
	
	; // ---------------------------------------------------- AVAILABLE WEAPONS
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Left_Mk7_Basic)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args  mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Basic)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD2" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD2" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD2" args H_Chaplain Torso_Chaplain_MK7)
		("Model_Path_LOD2" args H_Chaplain Chestplate_Chaplain_MK7_v1)
		("Model_Path" args H_Chaplain Torso_Chaplain_D_Gorget_1)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD2" args H_Chaplain Torso_Chaplain_MK7)
		("Model_Path_LOD2" args H_Chaplain Chestplate_Chaplain_MK7_v2)
		("Model_Path" args H_Chaplain Torso_Chaplain_D_Gorget_2)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD2" args H_Chaplain Torso_Chaplain_MK7)
		("Model_Path_LOD2" args H_Chaplain Chestplate_Chaplain_MK7_v2)
		("Model_Path" args H_Chaplain Torso_Chaplain_D_Gorget_3)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2)
		("Model_Path" args mk7 Pauldron_Left_Mk7_Basic_v2_D_Markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v2)
		("Model_Path_LOD2" args H_Chaplain pauldron_right_chaplain)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD2" args H_Chaplain helmet_Chaplain_V1)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD2" args H_Chaplain helmet_Chaplain_V2)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD2" args H_Chaplain Backpack_Chaplain)
		("Model_Path_LOD2" args H_Chaplain Backpack_Chaplain_D_Accessory_Voxcaster)
	}
	{bone "sm_backpack2"			{visibility 0}
		("Model_Path_LOD2" args H_Chaplain Backpack_Chaplain)
		("Model_Path_LOD2" args H_Chaplain Backpack_Chaplain_D_Accessory_Pipeorgan)
	}
)

; ==========================================================================================
; // HERO - LIBRARIAN
; ==========================================================================================

(Define "models_librarian_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args H_Librarian Leg_Left_Librarian_D_Trims) ;// ("Model_Path" args H_Librarian Leg_Left_Librarian_D_Scrolls) ("Model_Path" args H_Librarian Leg_Left_Librarian_D_Slab)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args H_Librarian Leg_Right_Librarian_D_Trims) ; // ("Model_Path" args H_Librarian Leg_Right_Librarian_D_Scrolls) ("Model_Path" args mk7 Leg_D_Right_Mk7_Basic)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO - (BACKPACK IS PART OF THE TORSO FOR THE LIBRARIAN!)
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args H_Librarian Torso_Librarian)
		("Model_Path_LOD3" args H_Librarian Chestplate_Librarian)
		("Model_Path" args H_Librarian Backpack_Librarian_D_Book)
		("Model_Path" args H_Librarian Helmet_Librarian_D_psychichood_tigurius)	
		("Model_Path" args cloth sm_robes_belt_v4)
		("Model_Path" args cloth sm_robes_torso_v1)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args H_Librarian Torso_Librarian)
		("Model_Path_LOD3" args H_Librarian Chestplate_Librarian)
		("Model_Path" args H_Librarian Backpack_Librarian_D_Book)
		("Model_Path" args H_Librarian Helmet_Librarian_D_psychichood_dome)	
		("Model_Path" args cloth sm_robes_belt_v4)
		("Model_Path" args cloth sm_robes_torso_v1)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args H_Librarian Torso_Librarian)
		("Model_Path_LOD3" args H_Librarian Chestplate_Librarian)
		("Model_Path" args H_Librarian Backpack_Librarian_D_Book)
		("Model_Path" args H_Librarian Helmet_Librarian_D_psychichood_tubes)	
		("Model_Path" args cloth sm_robes_belt_v4)
		("Model_Path" args cloth sm_robes_torso_v1)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2)
		("Model_Path" args mk7 Pauldron_Left_Mk7_Basic_v2_D_Markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args H_Librarian Pauldron_Right_Librarian)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args H_Librarian Helmet_Librarian)
	}
)

; ==========================================================================================
; // HERO - FORCE COMMANDER
; ==========================================================================================

(Define "models_commander_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	("SM_Weapon_Melee")

	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk2 leg_left_mk2_veteran)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk2 leg_right_mk2_veteran)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path" args mk4 arm_left_mk4_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path" args mk4 arm_right_mk4_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}		
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_commander_sicarius)
		("Model_Path" args mk7 Belt_mk7_belt_laurel)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_shield)
		("Model_Path" args cloth Pauldron_D_shouldercape_L)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 Pauldron_Right_Mk7_Champion)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk4 Helmet_MK4_Basic)
		
		("Model_Path" args mk7 Helmet_MK7_D_crest_mk7_hori)
		("Model_Path" args mk7 Helmet_MK7_D_forehead_sicarius)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk2 backpack_mk2_basic)
	}	
)

; ==========================================================================================
; // HERO - APOTHECARY
; ==========================================================================================

(Define "models_apothecary_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	("SM_Weapon_Melee")

	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Basic)
	
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Left_Mk7_Basic)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}		
		("Model_Path_LOD3" args H_Apothecary Torso_Apothecary_MK7)
		("Model_Path" args H_Apothecary Belt_Apothecary_hipgear_tassets)
		("Model_Path" args H_Apothecary Belt_Apothecary_hipgear)
		("Model_Path_LOD3" args H_Apothecary Apothecary_Nathercium)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v2)
		("Model_Path" args H_Apothecary pauldron_d_shoulder_apothecary_R)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
		("Model_Path" args H_Apothecary Helmet_Apothecary_D_apo_optic2_R)
		("Model_Path" args H_Apothecary Helmet_Apothecary_D_apo_optic1_R)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args H_Apothecary Backpack_Apothecary_MK6)
	}	
)

; ==========================================================================================
; // HERO - TECHMARINE
; ==========================================================================================

(Define "models_techmarine_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk8 leg_left_mk8_basic)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk8 leg_right_mk8_basic)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path" args h_Techmarine Arm_Left_Bionic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path" args h_Techmarine Arm_Right_Bionic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args h_Techmarine torso_Techmarine)
		("Model_Path" args h_Techmarine Belt_Techmarine_Crotchplates)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 Pauldron_Left_Mk7_Basic_D_Markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args h_Techmarine pauldron_right_Techmarine)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_knight_H)
		("Model_Path" args h_Techmarine Helmet_Techmarine_D_Mechanicus)
		("Model_Path" args h_Techmarine Helmet_Techmarine_D_camera_L1)
;//		("Model_Path" args h_Techmarine Helmet_Techmarine_D_camera_R1)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args h_Techmarine Backpack_Techmarine)
		("Model_Path_LOD3" args h_Techmarine Techmarine_Servo_Arms)
	}
)

; ==========================================================================================
; // MARINES - TACTICAL
; ==========================================================================================

(Define "models_tactical_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	; // ("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Basic)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Left_Mk7_Basic)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ultrawings)
		("Model_Path" args mk7 Belt_mk7_belt_eagleskull)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_vent)
		("Model_Path" args mk7 Belt_mk7_belt_shield)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_imperialis)
		("Model_Path" args mk7 Belt_detailprop_skull_oneside)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_markings)
	}
	{bone "sm_pauldron_left2"		{visibility 0}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_shield)
	}
	{bone "sm_pauldron_right2"		{visibility 0}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_Studs)
	}
	{bone "sm_pauldron_left3"		{visibility 0}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_studs)
	}
	{bone "sm_pauldron_right3"		{visibility 0}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_Ropes)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_knight)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk7 backpack_mk7_basic)
	}
)

(Define "models_tactical_sgt_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	; // ("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Basic)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Sergeant)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ventwings)
		("Model_Path" args mk7 Belt_chestropes1)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_aquila)
		("Model_Path" args mk7 Belt_chestropes2)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_imperialis)
		("Model_Path" args mk7 Belt_chestropes1)	
	}
		
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2)
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2_D_chains)
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2_D_markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_D_vet_ultramar)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_knight_H)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk7 backpack_mk7_basic)
		("Model_Path" args gear banner_pole)
		("Model_Path" args gear banner_banner_v5)
	}
)

; ==========================================================================================
; // MARINES - TACTICAL VETERAN
; ==========================================================================================

(Define "models_tactical_vet_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	; // ("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Veteran)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Left_Mk7_Veteran)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_tyrannicveterans)
		("Model_Path" args mk7 Belt_mk7_belt_crux)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ventwings)
		("Model_Path" args mk7 Belt_mk7_belt_cross)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_tituslike)
		("Model_Path" args mk7 Belt_mk7_belt_skullshield)
	}
	
	; // ---------------------------------------------------- PAULDRONS

	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_veteran)
		("Model_Path" args mk7 pauldron_left_mk7_veteran_D_Eagle)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_veteran)
		("Model_Path" args mk7 pauldron_right_mk7_veteran_D_Imperialis)
	}
	{bone "sm_pauldron_left2"		{visibility 0}
		("Model_Path" args mk7 pauldron_left_mk7_veteran)
		("Model_Path" args mk7 pauldron_left_mk7_veteran_D_Imperialis)
	}
	{bone "sm_pauldron_right2"		{visibility 0}
		("Model_Path" args mk7 pauldron_right_mk7_veteran)
		("Model_Path" args mk7 pauldron_right_mk7_veteran_D_Eagle)
	}
	{bone "sm_pauldron_left3"		{visibility 0}
		("Model_Path" args mk7 pauldron_left_mk7_veteran)
		("Model_Path" args mk7 pauldron_left_mk7_veteran_D_Eagle)
	}
	{bone "sm_pauldron_right3"		{visibility 0}
		("Model_Path" args mk7 pauldron_right_mk7_veteran)
		("Model_Path" args mk7 pauldron_right_mk7_veteran_D_Eagle)
	}
		
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
		("Model_Path" args mk7 helmet_mk7_d_forehead_ultra)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_knight)
	}
	{bone "sm_helmet3"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
		("Model_Path" args mk7 helmet_mk7_d_forehead_roman)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk7 Backpack_MK7_Veteran)
	}
)

(Define "models_tactical_vet_sgt_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	; // ("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Sergeant)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Left_Mk7_Veteran)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_tyrannicveterans)
		("Model_Path" args mk7 Belt_chestropes1)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ventwings)
		("Model_Path" args mk7 Belt_chestropes2)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_tituslike)
		("Model_Path" args mk7 Belt_chestropes1)
	}
	
	; // ---------------------------------------------------- PAULDRONS

	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_veteran)
		("Model_Path" args mk7 pauldron_left_mk7_veteran_D_Eagle)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_veteran)
		("Model_Path" args mk7 pauldron_right_mk7_veteran_D_Imperialis)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
		("Model_Path" args mk7 Helmet_MK7_D_laurel)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_knight)
		("Model_Path" args mk7 Helmet_MK7_D_laurel)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk7 Backpack_MK7_Veteran)
		("Model_Path" args gear banner_pole)
		("Model_Path" args gear banner_banner_v1)
	}
)

; ==========================================================================================
; // MARINES - STERNGUARD
; ==========================================================================================

(Define "models_sternguard_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	; // ("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Veteran)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Left_Mk7_Veteran)
	}
	{bone "sm_legleft2"				{visibility 0}
		("Model_Path_LOD3" args mk6 leg_left_mk6_veteran)
	}
	{bone "sm_legright2"			{visibility 0}
		("Model_Path_LOD3" args mk6 leg_right_mk6_veteran)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_tyrannicveterans)
		("Model_Path" args mk7 Belt_mk7_belt_crux)
		("Model_Path" args cloth sm_robes_belt_v1)
		("Model_Path" args cloth purity_seals_v1)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ventwings)
		("Model_Path" args mk7 Belt_mk7_belt_cross)
		("Model_Path" args cloth sm_robes_belt_v1)
		("Model_Path" args cloth purity_seals_v1)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_tituslike)
		("Model_Path" args mk7 Belt_mk7_belt_skullshield)
		("Model_Path" args cloth sm_robes_belt_v1)
		("Model_Path" args cloth purity_seals_v1)
	}
	
	; // ---------------------------------------------------- PAULDRONS

	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_veteran)
		("Model_Path" args mk7 pauldron_left_mk7_veteran_D_Eagle)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_veteran)
		("Model_Path" args mk7 pauldron_right_mk7_veteran_D_Imperialis)
	}
	{bone "sm_pauldron_left2"		{visibility 0}
		("Model_Path" args mk7 pauldron_left_mk7_veteran)
		("Model_Path" args mk7 pauldron_left_mk7_veteran_D_Imperialis)
	}
	{bone "sm_pauldron_right2"		{visibility 0}
		("Model_Path" args mk7 Pauldron_Right_Mk7_Champion)
	}
	{bone "sm_pauldron_left3"		{visibility 0}
		("Model_Path" args mk7 Pauldron_Left_Mk7_Champion)
	}
	{bone "sm_pauldron_right3"		{visibility 0}
		("Model_Path" args mk7 pauldron_right_mk7_veteran)
		("Model_Path" args mk7 pauldron_right_mk7_veteran_D_Eagle)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
		("Model_Path" args mk7 Helmet_MK7_D_laurel)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_knight)
		("Model_Path" args mk7 Helmet_MK7_D_laurel)
	}
	{bone "sm_helmet3"				{visibility 0}
		("Model_Path_LOD3" args mk6 helmet_mk6_basic)
		("Model_Path" args mk7 Helmet_MK7_D_laurel)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk4 backpack_mk4_basic)
	}
)

(Define "models_sternguard_sgt_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	; // ("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Sergeant)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Left_Mk7_Veteran)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_tyrannicveterans)
		("Model_Path" args mk7 Belt_chestropes1)
		("Model_Path" args cloth sm_robes_belt_v1)
		("Model_Path" args cloth sm_robes_torso_v2)
		("Model_Path" args cloth purity_seals_v1)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ventwings)
		("Model_Path" args mk7 Belt_chestropes2)
		("Model_Path" args cloth sm_robes_belt_v1)
		("Model_Path" args cloth sm_robes_torso_v2)
		("Model_Path" args cloth purity_seals_v1)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_tituslike)
		("Model_Path" args mk7 Belt_chestropes1)
		("Model_Path" args cloth sm_robes_belt_v1)
		("Model_Path" args cloth sm_robes_torso_v2)
		("Model_Path" args cloth purity_seals_v1)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_veteran)
		("Model_Path" args mk7 pauldron_left_mk7_veteran_D_Eagle)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_veteran)
		("Model_Path" args mk7 pauldron_right_mk7_veteran_D_Eagle)
	}
	
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
		("Model_Path" args mk7 Helmet_MK7_D_laurel)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_knight)
		("Model_Path" args mk7 Helmet_MK7_D_laurel)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk7 Backpack_MK7_Veteran)
		("Model_Path" args gear banner_pole)
		("Model_Path" args gear banner_banner_v2)
	}
)

; ==========================================================================================
; // MARINES - DEVASTATOR
; ==========================================================================================

(Define "models_devastator_1"
		
	; // ---------------------------------------------------- AVAILABLE WEAPONS
	("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Basic)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Left_Mk7_Basic)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ultrawings)
		("Model_Path" args mk7 Belt_mk7_belt_eagleskull)
		("Model_Path" args mk7 torso_mk7_d_gorget)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_vent)
		("Model_Path" args mk7 Belt_mk7_belt_shield)
		("Model_Path" args mk7 torso_mk7_d_gorget)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_imperialis)
		("Model_Path" args mk7 Belt_detailprop_skull_oneside)
		("Model_Path" args mk7 torso_mk7_d_gorget)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_markings)
	}
	{bone "sm_pauldron_left2"		{visibility 0}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_shield)
	}
	{bone "sm_pauldron_right2"		{visibility 0}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_Studs)
	}
	{bone "sm_pauldron_left3"		{visibility 0}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_studs)
	}
	{bone "sm_pauldron_right3"		{visibility 0}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_Ropes)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk7 backpack_mk7_basic)
	}
)

(Define "models_devastator_sgt_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Basic)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Sergeant)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ventwings)
		("Model_Path" args mk7 Belt_chestropes1)
		("Model_Path" args mk7 torso_mk7_d_gorget)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_aquila)
		("Model_Path" args mk7 Belt_chestropes2)
		("Model_Path" args mk7 torso_mk7_d_gorget)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_imperialis)
		("Model_Path" args mk7 Belt_chestropes1)	
		("Model_Path" args mk7 torso_mk7_d_gorget)
	}
		
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2)
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2_D_chains)
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2_D_markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_D_vet_ultramar)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
		("Model_Path" args H_Techmarine Helmet_Techmarine_D_camera_R1)
	}
	{bone "sm_helmet3"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
		("Model_Path" args H_Techmarine Helmet_Techmarine_D_camera_L1)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk7 backpack_mk7_basic)
		("Model_Path" args gear banner_pole)
		("Model_Path" args gear banner_banner_v4)
	}
)

; ==========================================================================================
; // MARINES - ASSAULT
; ==========================================================================================

(Define "models_assault_1"
	
	; // ---------------------------------------------------- AVAILABLE WEAPONS
	; // ("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Basic)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Left_Mk7_Basic)
	}
	{bone "sm_legleft2"				{visibility 0}
		("Model_Path_LOD3" args mk6 leg_left_mk6_basic)
	}
	{bone "sm_legright2"			{visibility 0}
		("Model_Path_LOD3" args mk6 leg_right_mk6_basic)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ultrawings)
		("Model_Path" args mk7 Belt_mk7_belt_eagleskull)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_vent)
		("Model_Path" args mk7 Belt_mk7_belt_shield)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk6 torso_mk6_basic)
		("Model_Path" args mk6 chestplate_mk6_basic)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_markings)
	}
	{bone "sm_pauldron_left2"		{visibility 0}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_shield)
	}
	{bone "sm_pauldron_right2"		{visibility 0}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_Studs)
	}
	{bone "sm_pauldron_left3"		{visibility 0}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_left_mk7_basic_d_studs)
	}
	{bone "sm_pauldron_right3"		{visibility 0}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_markings)
		("Model_Path" args mk7 pauldron_right_mk7_basic_d_Ropes)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
	}
	{bone "sm_helmet3"				{visibility 0}
		("Model_Path_LOD3" args mk6 helmet_mk6_basic)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args gear backpack_mk7_jp)
	}
)

(Define "models_assault_sgt_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	; // ("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Basic)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 Leg_D_Right_Mk7_Sergeant)
	}
	{bone "sm_legleft2"				{visibility 0}
		("Model_Path_LOD3" args mk6 leg_left_mk6_veteran)
	}
	{bone "sm_legright2"			{visibility 0}
		("Model_Path_LOD3" args mk6 leg_right_mk6_veteran)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 arm_left_mk7_basic)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ultrawings)
		("Model_Path" args mk7 Belt_chestropes1)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_vent)
		("Model_Path" args mk7 Belt_chestropes1)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk6 torso_mk6_basic)
		("Model_Path" args mk6 chestplate_mk6_basic)
		("Model_Path" args mk7 Belt_chestropes2)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2)
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2_D_chains)
		("Model_Path" args mk7 pauldron_left_mk7_basic_v2_D_markings)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_basic_v1)
		("Model_Path" args mk7 pauldron_right_mk7_basic_D_vet_ultramar)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
	}
	{bone "sm_helmet2"				{visibility 0}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
	}
	{bone "sm_helmet3"				{visibility 0}
		("Model_Path_LOD3" args mk6 helmet_mk6_basic)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args gear backpack_mk5_jp)
		("Model_Path" args gear banner_pole)
		("Model_Path" args gear banner_banner_v5)
	}
)

; ==========================================================================================
; // MARINES - DEATHWATCH - TACTICAL
; ==========================================================================================

(Define "models_tactical_deathwatch_1"

	; // ---------------------------------------------------- AVAILABLE WEAPONS
	; // ("SM_Weapon_Backpack")
	("SM_Weapon_Melee")
	
	; // ---------------------------------------------------- LEGS
	{bone "sm_legleft1"				{visibility 1}
		("Model_Path_LOD3" args mk7 leg_right_mk7_basic)
		("Model_Path" args mk7 leg_d_right_mk7_veteran)
	}
	{bone "sm_legright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 leg_left_mk7_basic)
		("Model_Path" args mk7 leg_d_left_mk7_veteran)
	}
	
	; // ---------------------------------------------------- ARMS
	{bone "sm_armleft1"				{visibility 1}
		("Model_Path" args mk7 arm_left_mk7_dw)
	}
	{bone "sm_armright1"			{visibility 1}
		("Model_Path_LOD3" args mk7 arm_right_mk7_basic)
	}
	
	; // ---------------------------------------------------- TORSO
	{bone "sm_torso1"				{visibility 1}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_MK7_Imperialis)
		("Model_Path" args cloth sm_robes_torso_v1)
		("Model_Path" args cloth sm_robes_belt_v3)
	}
	{bone "sm_torso2"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_ventwings)
		("Model_Path" args cloth sm_robes_torso_v1)
		("Model_Path" args cloth sm_robes_belt_v3)
		("Model_Path" args mk7 Belt_mk7_belt_crux)
	}
	{bone "sm_torso3"				{visibility 0}
		("Model_Path_LOD3" args mk7 torso_mk7_basic)
		("Model_Path" args mk7 Chestplate_mk7_torso_flat)
		("Model_Path" args cloth sm_robes_torso_v1)
		("Model_Path" args cloth sm_robes_belt_v3)
		("Model_Path" args mk7 Belt_chestropes1)
	}
	
	; // ---------------------------------------------------- PAULDRONS
	{bone "sm_pauldron_left1"		{visibility 1}
		("Model_Path" args mk7 Pauldron_Left_Deathwatch)
	}
	{bone "sm_pauldron_right1"		{visibility 1}
		("Model_Path" args mk7 pauldron_right_mk7_dw)
		("Model_Path" args mk7 Pauldron_Right_Mk7_Basic_D_Studs)
	}
	
	; // ---------------------------------------------------- HELMET
	{bone "sm_helmet1"				{visibility 1}
		("Model_Path_LOD3" args mk7 helmet_mk7_basic)
		("Model_Path" args cloth sm_robes_helmet)
	}
	
	; // ---------------------------------------------------- BACKPACK
	{bone "sm_backpack1"			{visibility 1}
		("Model_Path_LOD3" args mk7 backpack_mk7_basic)
	}
)