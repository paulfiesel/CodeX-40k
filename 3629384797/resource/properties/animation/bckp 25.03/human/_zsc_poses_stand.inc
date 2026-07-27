
; // Replace blends with sequences for smooth transition and to register events.

; ========================================================================================================================================================================
; // MGUN
; ========================================================================================================================================================================

{sequence "pose_stand_fire_mgun_down"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_mgun_down_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}		
{sequence "pose_stand_fire_mgun_up"				{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "pose_stand_fire_mgun_up_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

; // Mask
{sequence "pose_stand_fire_mgun_down_mask"		{file "weapon\anim_mg_stand_shoot_01_down"} 	{Smooth 0.05}}
{sequence "pose_stand_fire_mgun_up_mask"		{file "weapon\anim_mg_stand_shoot_01_up"}		{Smooth 0.05}}

{sequence "pose_stand_fire_mgun_down_1_mask"	;{file "weapon\anim_mg_stand_shoot_01_down"}
	{file "[ASV_LV]/stand_fire_mgun_down_1"} 
	{Smooth 0.05}
}
{sequence "pose_stand_fire_mgun_up_1_mask"		{file "weapon\anim_mg_stand_shoot_01_up"}
	{file "[ASV_LV]/stand_fire_mgun_up_old"} 
	{Smooth 0.05}
}

; forgot to include blends for reference here...

;//{blend "pose_stand_fire_gun_up_old"		{pose "weapon\anim_smg_stand_shoot_01_up" begin}}
;//{blend "pose_stand_fire_mgun_up_old"		{pose "weapon\anim_mg_stand_shoot_01_up" begin}}

; ========================================================================================================================================================================
; // PISTOL
; ========================================================================================================================================================================

{sequence "pose_stand_fire_pistol_down"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_pistol_up"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_pistol_down_1"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_pistol_up_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_pistol_down_2"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_pistol_up_2"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	

; // Mask
{sequence "pose_stand_fire_pistol_down_mask" 	{file "weapon\anim_pistol_stand_shoot_01_down"}	{Smooth 0.05}}
{sequence "pose_stand_fire_pistol_up_mask"  	{file "weapon\anim_pistol_stand_shoot_01_up"} 	{Smooth 0.05}}

; Blends Old reference
;//{blend "pose_stand_fire_pistol_down_mask" 	{pose "weapon\anim_pistol_stand_shoot_01_down"	begin}}
;//{blend "pose_stand_fire_pistol_up_mask"   	{pose "weapon\anim_pistol_stand_shoot_01_up" 	begin}}
;//{blend "pose_stand_fire_pistol_down_1_mask" 	{pose "weapon\anim_pistol_stand_shoot_01_down"	begin}}
;//{blend "pose_stand_fire_pistol_up_1_mask"   	{pose "weapon\anim_pistol_stand_shoot_01_up" 	begin}}
;//{blend "pose_stand_fire_pistol_down_2_mask" 	{pose "weapon\anim_pistol_stand_shoot_01_down"	begin}}
;//{blend "pose_stand_fire_pistol_up_2_mask"   	{pose "weapon\anim_pistol_stand_shoot_01_up" 	begin}}

; ========================================================================================================================================================================
; // GUN GENERIC
; ========================================================================================================================================================================

{sequence "pose_stand_fire_gun_up_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_gun_down_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_gun_up"				{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_gun_down"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_gun_short_up"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_gun_short_down"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_rifle_up"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_rifle_down"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_assault-fire_rifle_up"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_assault-fire_rifle_down"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_assault-fire_gun_up"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_assault-fire_gun_down"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_assault-fire_gun_down_1"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_assault-fire_gun_up_1"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	

; // Mask
{blend "pose_stand_fire_gun_up_mask"   		;{file "weapon\anim_smg_stand_shoot_01_up"}	
	{pose "[ASV_LV]\stand_fire_gun_up" begin}	
}

{blend "pose_stand_fire_gun_down_mask" 		;{file "weapon\anim_smg_stand_shoot_01_down"}
	{pose "[ASV_LV]\stand_fire_gun_down" begin}
}

{blend "pose_stand_fire_rifle_up_mask"		;{file "weapon\anim_rifle_stand_shoot_01_up"}
	{pose "[ASV_LV]\stand_fire_gun_up" begin}
}

{blend "pose_stand_fire_rifle_down_mask"		;{file "weapon\anim_rifle_stand_shoot_01_down"}
	{pose "[ASV_LV]\stand_fire_gun_down" begin}
}

; Blends Old reference
;//{blend "pose_stand_fire_gun_up_1"			{pose "weapon\anim_smg_stand_shoot_01_up"   begin}}
;//{blend "pose_stand_fire_gun_down_1"			{pose "weapon\anim_smg_stand_shoot_01_down" begin}}
;//{blend "pose_stand_fire_gun_up"    			{pose "weapon\anim_smg_stand_shoot_01_up"     begin}}
;//{blend "pose_stand_fire_gun_down"   			{pose "weapon\anim_smg_stand_shoot_01_down"   begin}}

;//{blend "pose_stand_fire_gun_short_up"		{pose "weapon\anim_smg_stand_shoot_01_up" begin}}
;//{blend "pose_stand_fire_gun_short_down"		{pose "weapon\anim_smg_stand_shoot_01_down" begin}}
;//{blend "pose_stand_fire_rifle_up"			{pose "weapon\anim_rifle_stand_shoot_01_up" begin}}
;//{blend "pose_stand_fire_rifle_down"			{pose "weapon\anim_rifle_stand_shoot_01_down" begin}}

;//{blend "pose_stand_assault-fire_rifle_down"	{pose "weapon\anim_smg_stand_shoot_01_down" begin}}
;//{blend "pose_stand_assault-fire_rifle_up"	{pose "weapon\anim_smg_stand_shoot_01_up" begin}}
;//{blend "pose_stand_assault-fire_gun_down"	{pose "weapon\anim_smg_stand_shoot_01_down" begin}}
;//{blend "pose_stand_assault-fire_gun_up"		{pose "weapon\anim_smg_stand_shoot_01_up" begin}}
;//{blend "pose_stand_assault-fire_gun_down_1"	{pose "weapon\anim_smg_stand_shoot_01_down" begin}}
;//{blend "pose_stand_assault-fire_gun_up_1"	{pose "weapon\anim_smg_stand_shoot_01_up" begin}}

; // RECOIL ANIMATION 

{sequence "recoil_pose_stand_fire_gun_up_mask"   		;{file "weapon\anim_smg_stand_shoot_01_up"}	
	{file "[ASV_LV]\stand_fire_gun_up"}	
	{smooth 0.05}
}

{sequence "recoil_stand_fire_gun_down_mask" 		;{file "weapon\anim_smg_stand_shoot_01_down"}
	{file "[ASV_LV]\stand_fire_gun_down"}
	{smooth 0.05}
}

{sequence "recoil_stand_fire_rifle_up_mask"		;{file "weapon\anim_rifle_stand_shoot_01_up"}
	{file "[ASV_LV]\stand_fire_gun_up"}
	{smooth 0.05}
}

{sequence "recoil_stand_fire_rifle_down_mask"		;{file "weapon\anim_rifle_stand_shoot_01_down"}
	{file "[ASV_LV]\stand_fire_gun_down"}
	{smooth 0.05}
}