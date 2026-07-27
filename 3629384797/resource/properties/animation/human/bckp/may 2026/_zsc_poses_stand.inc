
; // Replace blends with sequences for smooth transition and to register events.

; ========================================================================================================================================================================
; // MGUN
; ========================================================================================================================================================================

{sequence "pose_stand_fire_mgun_down"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_stand_fire_mgun_down_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}		
{sequence "pose_stand_fire_mgun_up"				{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "pose_stand_fire_mgun_up_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

; // Mask
{blend "pose_stand_fire_mgun_down_mask"		;{file "weapon\anim_mg_stand_shoot_01_down"} 
	{pose "[ASV_LV]/stand_fire_mgun_down_1" begin} 
}

{blend "pose_stand_fire_mgun_up_mask"		;{file "weapon\anim_mg_stand_shoot_01_up"}
	{pose "[ASV_LV]/stand_fire_mgun_up_1" begin} 
}

{blend "pose_stand_fire_mgun_down_1_mask"	;{file "weapon\anim_mg_stand_shoot_01_down"}
	{pose "[ASV_LV]/stand_fire_mgun_down_1" begin} 
}

{blend "pose_stand_fire_mgun_up_1_mask"		;{file "weapon\anim_mg_stand_shoot_01_up"}
	{pose "[ASV_LV]/stand_fire_mgun_up_1" begin} 
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
{blend "pose_stand_fire_pistol_down_mask" 
	{pose "weapon\anim_pistol_stand_shoot_01_down" begin}
}

{blend "pose_stand_fire_pistol_up_mask"  
	{pose  "weapon\anim_pistol_stand_shoot_01_up" begin}
}

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

{sequence "pose_stand_fire_rifle_up_mask"		{file "[SC]/stand_idle_rifle_up"}		{smooth 0.1} {speed 0.6}}
{sequence "pose_stand_fire_rifle_down_mask"		{file "[SC]/stand_idle_rifle_down"}	{smooth 0.1} {speed 0.6}}

; ========================================================================================================================================================================
; // POSES GENERIC
; ========================================================================================================================================================================

;{blend "pose_stand_pistol_up" 	{pose "stand_take_pistol_up_end" end}}
;{blend "pose_stand_empty_1" 	{pose "stand_idle_empty_1" begin}}
;{blend "pose_stand_strap_1" 	{pose "weapon\anim_stand_take_empty_start_01" begin}}
;{blend "pose_stand_bazooka" 	{pose "weapon\anim_bazooka_stand_shoot_all" begin}}
;{blend "pose_stand_1hand" 		{pose "walk_1hand" begin}}
;{blend "pose_stand_2hand" 		{pose "walk_2hand" begin}}
;{blend "pose_stand_corpse" 	{pose "stand_drop_corpse" begin}}
;{blend "pose_stand_flag" 		{pose "stand_flag" end}}
;{blend "pose_stand_down" 		{pose "stand_down" begin}}
;{blend "pose_stand_gun_down" 	{pose "stand_take_gun_down" end}}
;{blend "pose_stand_giveup_1" 	{pose "stand_giveup_1" end}}
;{blend "pose_stand_giveup_2" 	{pose "stand_giveup_2" end}}

{sequence "pose_stand_down" 		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "pose_stand_empty_1" 		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "pose_stand_strap_1" 		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{sequence "pose_stand_pistol_up" 	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "pose_stand_bazooka" 		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "pose_stand_gun_down" 	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

{blend "pose_stand_1hand" 		{pose "walk_1hand" begin}}
{blend "pose_stand_2hand" 		{pose "walk_2hand" begin}}
{blend "pose_stand_corpse" 		{pose "stand_drop_corpse" begin}}
{blend "pose_stand_flag" 		{pose "stand_flag" end}}
{blend "pose_stand_giveup_1" 	{pose "stand_giveup_1" end}}
{blend "pose_stand_giveup_2" 	{pose "stand_giveup_2" end}}

; // Mask
{blend "pose_stand_down_Mask" 		{pose "stand_down" begin}}
{blend "pose_stand_empty_1_Mask" 	{pose "stand_idle_empty_1" begin}}
{blend "pose_stand_strap_1_Mask" 	{pose "weapon\anim_stand_take_empty_start_01" begin}}