

;  ~~~~~~~~~~~~~~~~~~~~~ [RUN BOW TO COVER / GENERIC RUNNING WITH RIFLES/MGUNS]
{sequence "run_bow_gun_tocover_down"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Fast"}}}
{sequence "run_bow_gun_tocover_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{sequence "run_bow_gun_tocover_down_mask"	
	{file "locomotion\sprint_gun_down\anim_sprint_gun_2hand_down.anm"} 
	{speed 0.40} {resume}
	{smooth 0.1}
	{events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}										

{sequence "run_bow_gun_tocover_up_mask"		
	{file "locomotion\sprint_gun_up\anim_sprint_gun_2hand_up.anm"} 			
	{speed 0.40} {resume}
	{smooth 0.1}
}

;  ~~~~~~~~~~~~~~~~~~~~~ [RUN BOW TO COVER / GENERIC RUNNING UNARMED]
{sequence "run_bow_tocover_down"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Fast"}}}
{sequence "run_bow_tocover_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}	

{sequence "run_bow_tocover_down_mask"		
	{file "locomotion\sprint_gun_down"} 	
;	{speed 0.40}{smooth 0.2}{resume}
	{speed 0.40}{smooth 0.15}{resume}
	{events {11 "leg_right"}{27 "leg_left"}{42 "leg_right"}{59 "leg_left"}{74 "leg_right"}{88 "leg_left"}}
}
{sequence "run_bow_tocover_up_mask"			
	{file "locomotion\sprint_gun_up"} 			
;	{speed 0.40}{smooth 0.2}{resume}
	{speed 0.40}{smooth 0.15}{resume}
}
