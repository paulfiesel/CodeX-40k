
; ========================================================================================================================================================================
; // STRAFE
; ========================================================================================================================================================================

; // Strafe front is new and has been altered in human.ext.
{sequence "strafe_spot_gun_up_1_slow"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Strafe_Slow"}}}	
{sequence "strafe_spot_gun_up_2_fast"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Strafe_Fast"}}}	

{sequence "run_back_spot_gun_down"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}{events {0 "SC_H_Request_Anm_Strafe_Back"}}}	
{sequence "run_back_spot_gun_up"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{sequence "run_spot_back-strafe_gun_down"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}{events {0 "SC_H_Request_Anm_Strafe_Right"}}}	
{sequence "run_spot_back-strafe_gun_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

{sequence "run_spot_left-strafe_gun_down"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}{events {0 "SC_H_Request_Anm_Strafe_Left"}}}	
{sequence "run_spot_left-strafe_gun_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}		

; // Mask 
{sequence "run_back_spot_gun_down_mask"	 	 	{resume} {File "run_back_spot_gun_down"}}
{sequence "run_back_spot_gun_up_mask"			{resume} {File "run_back_spot_gun_up"}}
{sequence "run_spot_back-strafe_gun_down_mask"	{resume} {rotate "body" 0 0 1 -90} {File "run_spot_back-strafe_gun_down"}}
{sequence "run_spot_back-strafe_gun_up_mask"  	{resume} {rotate "body" 0 0 1 -90} {File "run_spot_back-strafe_gun_up"}}
{sequence "run_spot_left-strafe_gun_down_mask"	{resume} {rotate "body" 0 0 1 -90} {File "run_spot_left-strafe_gun_down"}}
{sequence "run_spot_left-strafe_gun_up_mask"  	{resume} {rotate "body" 0 0 1 -90} {File "run_spot_left-strafe_gun_up"}}

{sequence "run_spot_gun_down_mask"				{File "run_spot_gun_down"} {resume}}
{sequence "run_spot_gun_up_mask" 				{File "run_spot_gun_up"} {resume}}

; ###### --- ANIMATIONS NOW ON  -> // _ZSC_WALK_SPOT.INC

; // {sequence "walk_spot_gun_down_mask" 			{File "walk_spot_gun_down"} {speed 0.45} {resume} {events {10 "leg_left"} {40 "leg_right"}}}
; // {sequence "walk_spot_gun_up_mask" 				{File "walk_spot_gun_up"} {speed 0.45} {resume} {events {10 "leg_left"} {40 "leg_right"}}}
