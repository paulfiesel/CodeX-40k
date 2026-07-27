
; ========================================================================================================================================================================
; // MGUN
; ========================================================================================================================================================================

{sequence "walk_normal_mgun_down"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Walk_Normal"}}}
{sequence "walk_normal_mgun_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

; // Mask
{sequence "walk_normal_mgun_down_mask"	
	{file "locomotion\anim_run_empty_down.anm"}	
	{speed 0.55} {smooth 0.08} {resume} {events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "walk_normal_mgun_up_mask"			
	{file "walk_normal_mgun_up.anm"} 
	{speed 0.27} {smooth 0.08} {resume}
}

; ========================================================================================================================================================================
; // GUN/GENERIC
; ========================================================================================================================================================================

{sequence "walk_normal_gun_short_down"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Walk_Normal"}}}
{sequence "walk_normal_gun_short_up"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{sequence "walk_normal_gun_down"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Walk_Normal"}}}
{sequence "walk_normal_gun_up"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{sequence "walk_normal_gun_down_2"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Walk_Normal"}}}
{sequence "walk_normal_gun_up_2"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

; // Mask
{sequence "walk_normal_gun_short_down_mask"	
	{file "locomotion\anim_run_dc_down.anm"}	
	{speed 0.55} {resume} {events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "walk_normal_gun_short_up_mask"	
	{file "locomotion\anim_run_dc_gun_up.anm"}	
	{speed 0.55} {resume}
}
{sequence "walk_normal_gun_down_mask"
	{file "locomotion\anim_run_dc_down.anm"}	
	{speed 0.55} {smooth 0.08} {resume} {events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "walk_normal_gun_up_mask"		
	{file "locomotion\anim_run_dc_gun_up.anm"}	
	{speed 0.55} {smooth 0.08} {resume}
}
{sequence "walk_normal_gun_down_2_mask"	
	{file "locomotion\anim_run_dc_down.anm"}
	{speed 0.55} {resume} {events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "walk_normal_gun_up_2_mask"	
	{file "locomotion\anim_run_dc_gun_up.anm"}	
	{speed 0.55} {resume}
}

; ========================================================================================================================================================================
; // RIFLE
; ========================================================================================================================================================================

{sequence "walk_normal_rifle_down"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Walk_Normal"}}}
{sequence "walk_normal_rifle_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

; // Mask
{sequence "walk_normal_rifle_down_mask"	
	{file "locomotion\anim_run_dc_down.anm"}	
	{speed 0.55} {smooth 0.08} {resume} {events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "walk_normal_rifle_up_mask"	
	{file "locomotion\anim_run_dc_gun_up.anm"}	
	{speed 0.55} {smooth 0.08} {resume}
}

; ========================================================================================================================================================================
; // PISTOL
; ========================================================================================================================================================================

{sequence "walk_normal_pistol_down"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Walk_Normal"}}}
{sequence "walk_normal_pistol_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

; // Mask
{sequence "walk_normal_pistol_down_mask"
	{file "locomotion\anim_run_dc_down.anm"}	
	{speed 0.55} {smooth 0.08} {resume} {events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "walk_normal_pistol_up_mask"		
	{file "walk_normal_pistol_up.anm"}
	{speed 0.30} {smooth 0.08} {resume}
}

; ========================================================================================================================================================================
; // FLAG
; ========================================================================================================================================================================

{sequence "run_flag_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Walk_Normal"}}}
{sequence "run_flag_down"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Walk_Normal"}}}
	
; // MASK
{sequence "run_flag_up_mask"		{file "run_flag_up"} {speed 0.60} {resume}}
{sequence "run_flag_down_mask"		{file "run_flag_down"} {speed 0.60} {resume}}

