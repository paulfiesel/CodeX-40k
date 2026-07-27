
;  ~~~~~~~~~~~~~~~~~~~~~ [RUN FAST -  AI NOT IN DIRECT CONTROL]
{sequence "run_fast_down"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Fast"}}}
{sequence "run_fast_empty_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	
{sequence "run_fast_gun_rhand_up"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	
{sequence "run_fast_gun_up"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	
{sequence "run_fast_strap_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{sequence "run_fast_down_mask"			
	{file "locomotion\anim_sprint_empty_down.anm"} 
	{speed 0.40}{smooth 0.2}{resume}
	{events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}

{sequence "run_fast_empty_up_mask"			{file "locomotion\anim_sprint_empty_up.anm"}	{speed 0.40}{smooth 0.2}{resume}}
{sequence "run_fast_gun_rhand_up_mask"		{file "locomotion\sprint_gun_up\anim_sprint_gun_1hand_up.anm"}	{speed 0.40}{smooth 0.2}{resume}}
{sequence "run_fast_gun_up_mask"			{file "locomotion\sprint_gun_up\anim_sprint_gun_1hand_up.anm"}	{speed 0.40}{smooth 0.2}{resume}}
{sequence "run_fast_strap_up_mask"			{file "locomotion\anim_sprint_empty_up.anm"}	{speed 0.40}{smooth 0.2}{resume}}

;  ~~~~~~~~~~~~~~~~~~~~~ [RUN BOW - FASTER JOG ALSO FOR AI]
{sequence "run_bow_gun_down"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Fast"}}}
{sequence "run_bow_gun_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{sequence "run_bow_gun_down_mask"		
	{file "locomotion\sprint_gun_down"} 
	{speed 0.40}{smooth 0.2}{resume}
	{events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}

{sequence "run_bow_gun_up_mask"		
	{file "locomotion\sprint_gun_up"} 	
	{speed 0.40}{smooth 0.2}{resume}
}
