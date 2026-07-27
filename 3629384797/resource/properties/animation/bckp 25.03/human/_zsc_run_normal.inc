
; ========================================================================================================================================================================
; // LOW-READY / NORMAL
; ========================================================================================================================================================================

{sequence "run_down"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Normal"}}}
{sequence "run_gun_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

{sequence "run_down_mask"					;{file "locomotion\jog_gun_down\anim_run_gun_2hand_var1_down.anm"} 	
 	{file "[ASV_LV]/run_down"} 	
	{speed 0.55} {resume}
	{Smooth 0.2}
	{events {11 "leg_right"} {31 "leg_left"}}
}			

{sequence "run_gun_up_mask" 				;{file "locomotion\jog_gun_up\anim_run_gun_2hand_var1_up.anm"}	
 	{file "[ASV_LV]/run_gun_up"} 	
	{Smooth 0.2} {speed 0.55} {resume}
	{events {11 "leg_left"} {31 "leg_right"}}
}

{sequence "run_empty_up" 					;{file "locomotion\anim_run_empty_up.anm"}
 	{file "[ASV_LV]/run_empty_up"} 	
	{speed 0.55} {resume}
	{events {11 "leg_right"} {31 "leg_left"}}
}

{sequence "run_strap_up" 					;{file "locomotion\anim_run_empty_up.anm"}
 	{file "[ASV_LV]/run_strap_up"} 	
	{speed 0.55} {resume}
	{events {11 "leg_right"} {31 "leg_left"}}
}

; ========================================================================================================================================================================
; // TO DO LATER [...]
; ========================================================================================================================================================================

{sequence "run_flag_up"		{speed 0.60} {resume}}
{sequence "run_flag_down"	{speed 0.60} {resume}}

;  ~~~~~~~~~~~~~~~~~~~~~ [CRAWLING]								
{sequence "crawl" 						{file "locomotion\anim_lie_crawl_empty.anm"}{resume} {speed 1.4} {events {10 "leg_left"} {32 "leg_right"}}}
{sequence "crawl_gun" 					{file "locomotion\lie_crawl_gun"}{resume} {speed 1.4} {events {10 "leg_left"} {32 "leg_right"}}}

