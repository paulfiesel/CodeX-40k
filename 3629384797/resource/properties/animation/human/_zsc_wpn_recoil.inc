
; ========================================================================================================================================================================
; // STAND | MGUN
; ========================================================================================================================================================================

{sequence "stand_fire_mgun_down"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_mgun_down_1"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_mgun_up"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_mgun_up_1"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

; // Mask
{sequence "stand_fire_mgun_down_1_mask"  	{file "weapon\anim_mg_stand_shoot_01_down.anm"}		{speed 4}}
{sequence "stand_fire_mgun_up_1_mask" 		{file "weapon\anim_mg_stand_shoot_01_up.anm"}		{speed 4}}
{sequence "stand_fire_mgun_up_old_mask"		{file "weapon\anim_mg_stand_shoot_01_up.anm"}		{resume}{speed 1}}

{sequence "stand_fire_mgun_down_mask"  		;{file "weapon\anim_mg_stand_shoot_01_down.anm"}
	{file "[ASV_LV]\stand_fire_mgun_down_1"}	
	{resume}{speed 1}{smooth 0.1}
}	

{sequence "stand_fire_mgun_up_mask"			;{file "weapon\anim_mg_stand_shoot_01_up.anm"}	
	{file "[ASV_LV]\stand_fire_mgun_up_1"}
	{resume}{speed 1}{smooth 0.1}
}

; ========================================================================================================================================================================
; // STAND | GUN GENERIC
; ========================================================================================================================================================================

;  ~~~~~~~~~~~~~~~~~~~~~ [Assault]

{sequence "stand_assault-fire_gun_up"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_assault-fire_gun_down"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_assault-fire_gun_up_1"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_assault-fire_gun_down_1"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_assault-fire_rifle_up"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_assault-fire_rifle_down"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

; // Mask
{sequence "stand_assault-fire_gun_up_1_mask"	{file "weapon\anim_smg_stand_shoot_01_up.anm"}	{speed 4}}
{sequence "stand_assault-fire_gun_down_1_mask"	{file "weapon\anim_smg_stand_shoot_01_down.anm"}{speed 4}}
{sequence "stand_assault-fire_gun_up_mask"		{file "weapon\anim_smg_stand_shoot_01_up.anm"}	{speed 4}}
{sequence "stand_assault-fire_gun_down_mask"	{file "weapon\anim_smg_stand_shoot_01_down.anm"}{speed 4}}
{sequence "stand_assault-fire_rifle_up_mask"	{file "weapon\anim_smg_stand_shoot_01_up.anm"}	{speed 2}}
{sequence "stand_assault-fire_rifle_down_mask"	{file "weapon\anim_smg_stand_shoot_01_down.anm"}{speed 2}}

;  ~~~~~~~~~~~~~~~~~~~~~ [GUN/GENERIC]

{sequence "stand_fire_gun_down_1"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_gun_down"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_gun_up"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_gun_up_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_gun_short_down"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_gun_short_up"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

; // Mask
{sequence "stand_fire_gun_down_1_mask" 		{file "weapon\anim_smg_stand_shoot_01_down.anm"}	{speed 1}{smooth 0.1}}
{sequence "stand_fire_gun_up_1_mask" 		{file "weapon\anim_smg_stand_shoot_01_up.anm"}		{resume}{speed 1}{smooth 0.1}}
;//{sequence "stand_fire_gun_up_old" 		{file "weapon\anim_smg_stand_shoot_01_up.anm"}		{resume}{speed 1}}
{sequence "stand_fire_gun_short_down_mask"	{file "weapon\anim_smg_stand_shoot_01_down.anm"}	{speed 1}}
{sequence "stand_fire_gun_short_up_mask"	{file "weapon\anim_smg_stand_shoot_01_up.anm"}		{speed 1}}

{sequence "stand_fire_gun_down_mask"  	;{file "weapon\anim_smg_stand_shoot_01_down.anm"}	
	{file "[ASV_LV]\stand_fire_gun_up"}	
	{resume}{speed 1}{smooth 0.1}
}
{sequence "stand_fire_gun_up_mask"  	;{file "weapon\anim_smg_stand_shoot_01_up.anm"}
	{file "[ASV_LV]\stand_fire_gun_down"}
	{resume}{speed 1}{smooth 0.1}
}

;  ~~~~~~~~~~~~~~~~~~~~~ [RIFLE/BOLT ACTION]

{sequence "stand_fire_rifle_up"				{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_rifle_down"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

; // Mask
{sequence "stand_fire_rifle_up_mask"		;{file "weapon\anim_rifle_stand_shoot_01_up.anm"}	
	{file "[SC]/stand_fire_rifle_up"}; {file "[ASV_LV]\stand_fire_gun_up"}
	{resume}{speed 2}
}
{sequence "stand_fire_rifle_down_mask"		;{file "weapon\anim_rifle_stand_shoot_01_down.anm"}	
	{file "[SC]/stand_fire_rifle_down"} ; {file "[ASV_LV]\stand_fire_gun_down"}
	{resume}{speed 2}
}

; ========================================================================================================================================================================
; // STAND | PISTOL
; ========================================================================================================================================================================

{sequence "stand_fire_pistol"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_pistol_down"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_pistol_up"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_pistol_down_1"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_pistol_down_2"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_pistol_up_1"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "stand_fire_pistol_up_2"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

; // Mask
{sequence "stand_fire_pistol_mask" 			{file "weapon\anim_pistol_stand_shoot_01_up.anm"}	{speed 2.1}}
{sequence "stand_fire_pistol_down_mask"		{file "weapon\anim_pistol_stand_shoot_01_down.anm"}	{speed 1}{events {1 "prone_to_stand"}}}
{sequence "stand_fire_pistol_up_mask"		{file "weapon\anim_pistol_stand_shoot_01_up.anm"}	{speed 1} {events {1 "stand_to_prone"}}}
{sequence "stand_fire_pistol_down_1_mask"	{file "weapon\anim_pistol_stand_shoot_02_down.anm"}}
{sequence "stand_fire_pistol_down_2_mask"	{file "weapon\anim_pistol_stand_shoot_01_down.anm"}}
{sequence "stand_fire_pistol_up_1_mask"		{file "weapon\anim_pistol_stand_shoot_02_up.anm"}}
{sequence "stand_fire_pistol_up_2_mask"		{file "weapon\anim_pistol_stand_shoot_01_up.anm"}}

; ========================================================================================================================================================================
; // STAND | BAZOOKA
; ========================================================================================================================================================================

{sequence "stand_fire_bazooka"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

; // Mask
{sequence "stand_fire_bazooka_mask" 	{file "weapon\anim_bazooka_stand_shoot_all.anm"}	{speed 1}}

; ========================================================================================================================================================================
; // SQUAT FIRE
; ========================================================================================================================================================================

{sequence "squat_fire_bazooka"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "squat_assault-fire_gun"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "squat_assault-fire_rifle"	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "squat_fire_gun"				{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "squat_fire_gun_short"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "squat_fire_rifle" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "squat_fire_mgun" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "squat_fire_pistol"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "squat_fire_pistol_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

; // Mask
{sequence "squat_fire_gun_short_mask"					;{file "weapon\anim_smg_crouch_shoot_01.anm"}
	{file "[SC]/squat_rifle_idle"}
}
{sequence "squat_fire_gun_mask"							;{file "weapon\anim_smg_crouch_shoot_01.anm"}
	{file "[SC]/squat_rifle_idle"}
}
{sequence "squat_fire_bazooka_mask"						;{file "weapon\anim_smg_crouch_shoot_01.anm"}	
	{file "[ASV_LV]/squat_fire_bazooka"}
}
{sequence "squat_assault-fire_gun_mask"					;{file "weapon\anim_smg_crouch_shoot_01.anm"}	
	{file "[SC]/squat_rifle_idle"}
}
{sequence "squat_assault-fire_rifle_mask"				;{file "weapon\anim_rifle_crouch_shoot_01.anm"}
	{file "[SC]/squat_rifle_idle"}
}
{sequence "squat_fire_rifle_mask" 						;{file "weapon\anim_rifle_crouch_shoot_01.anm"}
	{file "[SC]/squat_rifle_idle"}
}
{sequence "squat_fire_mgun_mask" 						;{file "weapon\anim_smg_crouch_shoot_01_up.anm"}
	{file "[ASV_LV]/squat_fire_rifle"}
}
{sequence "squat_fire_pistol_mask"						
;	{file "weapon\anim_pistol_crouch_shoot_01_up.anm"}
;	{file "[ASV_LV]/squat_fire_pistol"}
	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}
}
{sequence "squat_fire_pistol_1_mask"					
;	{file "weapon\anim_pistol_crouch_shoot_01_up.anm"}		
;	{file "[ASV_LV]/squat_fire_pistol_1"}
	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}
}

; ========================================================================================================================================================================
; // LIE FIRE
; ========================================================================================================================================================================

{sequence "lie_fire_rifle"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "lie_fire_gun" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "lie_fire_bazooka" 		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "lie_fire_mgun" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "lie_fire_pistol"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

{Smooth 0.05}

; // Mask
{sequence "lie_fire_rifle_mask"			
	{file "weapon\anim_rifle_lie_shoot_01.anm"}
	{speed 1}
}
{sequence "lie_fire_gun_mask" 		
	{file "weapon\anim_smg_lie_shoot_01.anm"}
	{speed 1}
}
{sequence "lie_fire_bazooka_mask" 	
	{file "lie_fire_bazooka"} 
	{speed 1}
}
{sequence "lie_fire_mgun_mask" 		
	{file "weapon\anim_mg_lie_shoot_01.anm"}
}
{sequence "lie_fire_pistol_mask"	
	{file "weapon\anim_pistol_lie_shoot_01.anm"}	
	{speed 1}
}
