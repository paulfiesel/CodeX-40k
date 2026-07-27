
; ========================================================================================================================================================================
; // LOW-READY / NORMAL
; ========================================================================================================================================================================

{sequence "run_down"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Normal"}}}
{sequence "run_gun_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "run_empty_up"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "run_strap_up"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "run_bazooka_up"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

{Smooth 0.3} 
 
; // Mask
{sequence "run_down_mask"		{file "locomotion\jog_gun_down\anim_run_gun_1hand_bow_down.anm"}	{speed 0.55} {resume} {events {11 "leg_right"} {31 "leg_left"}}}
{sequence "run_down_mask_2"		{file "locomotion\jog_gun_down\anim_run_gun_1hand_down.anm"}		{speed 0.55} {resume} {events {11 "leg_right"} {31 "leg_left"}}}
{sequence "run_down_mask_3" 	{file "locomotion\jog_gun_down\anim_run_gun_2hand_down.anm"}		{speed 0.55} {resume} {events {11 "leg_right"} {31 "leg_left"}}}
{sequence "run_down_mask_4" 	{file "locomotion\jog_gun_down\anim_run_gun_2hand_var1_down.anm"}	{speed 0.55} {resume} {events {11 "leg_right"} {31 "leg_left"}}}
{sequence "run_down_mask_5" 	{file "locomotion\jog_gun_down\anim_run_gun_2hand_var2_down.anm"}	{speed 0.55} {resume} {events {11 "leg_right"} {31 "leg_left"}}}

{sequence "run_gun_up_mask"		{file "locomotion\jog_gun_up\anim_run_gun_1hand_bow_up.anm"}		{speed 0.55} {resume}}
{sequence "run_gun_up_mask_2"	{file "locomotion\jog_gun_up\anim_run_gun_1hand_up.anm"}			{speed 0.55} {resume}}
{sequence "run_gun_up_mask_3"	{file "locomotion\jog_gun_up\anim_run_gun_2hand_up.anm"}			{speed 0.55} {resume}}
{sequence "run_gun_up_mask_4"	{file "locomotion\jog_gun_up\anim_run_gun_2hand_var1_up.anm"}		{speed 0.55} {resume}}
{sequence "run_gun_up_mask_5"	{file "locomotion\jog_gun_up\anim_run_gun_2hand_var2_up.anm"}		{speed 0.55} {resume}}
		
{sequence "run_bazooka_up_mask"	{file "locomotion\sprint_bazooka_up"}	{speed 0.42} {resume}}
			
{sequence "run_empty_down_mask" 			;{file "locomotion\anim_run_empty_up.anm"}
 	{file "[ASV_LV]/run_down"} 	
	{speed 0.55} {resume}
}
{sequence "run_empty_up_mask" 				;{file "locomotion\anim_run_empty_up.anm"}
 	{file "[ASV_LV]/run_empty_up"} 	
	{speed 0.55} {resume}
}
{sequence "run_strap_up_mask" 				;{file "locomotion\anim_run_empty_up.anm"}
 	{file "[ASV_LV]/run_strap_up"} 	
	{speed 0.55} {resume}
}

; ========================================================================================================================================================================
; // CRAWLING
; ========================================================================================================================================================================

{sequence "crawl"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Crawling"}}}
{sequence "crawl_gun"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Crawling"}}}
	
{sequence "crawl_mask" 		{file "locomotion\anim_lie_crawl_empty.anm"}{resume} {speed 1.4}}	;//	{events {10 "leg_left"} {32 "leg_right"}}}
{sequence "crawl_gun_mask"	{file "locomotion\lie_crawl_gun"}{resume} {speed 1.4}}				;// {events {10 "leg_left"} {32 "leg_right"}}}
