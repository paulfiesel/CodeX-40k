
; ========================================================================================================================================================================
; // RUN FAST
; ========================================================================================================================================================================

{sequence "run_fast_down"				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Fast"}}}
{sequence "run_fast_empty_up"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	
{sequence "run_fast_gun_rhand_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	
{sequence "run_fast_gun_up"				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	
{sequence "run_fast_strap_up"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	
{sequence "run_fast_bazooka_rhand_up" 	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{smooth 0.2}

{sequence "run_fast_down_mask"			{file "locomotion\anim_sprint_empty_down.anm"} {speed 0.40} {resume}
	{events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "run_fast_down_gun_mask"		{file "locomotion\sprint_gun_down\anim_sprint_gun_1hand_bow_down.anm"} {speed 0.40} {resume}
	{events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "run_fast_down_gun_mask_1"	{file "locomotion\sprint_gun_down\anim_sprint_gun_1hand_down.anm"} {speed 0.40} {resume}
	{events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "run_fast_down_gun_mask_2"	{file "locomotion\sprint_gun_down\anim_sprint_gun_2hand_down.anm"} {speed 0.40} {resume}
	{events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}

{sequence "run_fast_bazooka_rhand_up_mask"	{file "locomotion\sprint_bazooka_up"}	{speed 0.42} {resume}}

{sequence "run_fast_up_gun_mask"		{file "locomotion\sprint_gun_up\anim_sprint_gun_1hand_bow_up.anm"}	{speed 0.40}{resume}}
{sequence "run_fast_up_gun_mask_1"		{file "locomotion\sprint_gun_up\anim_sprint_gun_1hand_up.anm"}		{speed 0.40}{resume}}
{sequence "run_fast_up_gun_mask_2"		{file "locomotion\sprint_gun_up\anim_sprint_gun_2hand_up.anm"}		{speed 0.40}{resume}}

{sequence "run_fast_empty_up_mask"		{file "locomotion\anim_sprint_empty_up.anm"}	{speed 0.40}{resume}}
{sequence "run_fast_gun_rhand_up_mask"	{file "locomotion\sprint_gun_up\anim_sprint_gun_1hand_up.anm"}	{speed 0.40}{resume}}
{sequence "run_fast_strap_up_mask"		{file "locomotion\anim_sprint_empty_up.anm"}	{speed 0.40}{resume}}

; ========================================================================================================================================================================
; // RUN BOW - ALSO USED FOR AI WHEN MOVING INTO COVER.
; ========================================================================================================================================================================

{sequence "run_bow_gun_down"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Fast"}}}
{sequence "run_bow_gun_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{sequence "run_bow_gun_down_mask"		
	{file "locomotion\sprint_gun_down"} 	{speed 0.40}{smooth 0.2}{resume}
	{events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}

{sequence "run_bow_gun_up_mask"		
	{file "locomotion\sprint_gun_up"} 	
	{speed 0.40}{smooth 0.2}{resume}
}
