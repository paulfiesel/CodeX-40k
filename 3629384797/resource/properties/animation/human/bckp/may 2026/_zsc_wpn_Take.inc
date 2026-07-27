
; ========================================================================================================================================================================
; // TAKE GUN
; ========================================================================================================================================================================

{sequence "stand_take_gun_down"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_gun_up"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_mgun_up"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_mgun_down"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_bazooka"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}

{sequence "stand_take_pistol_up_begin"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"}} {Speed 0.6}}
{sequence "stand_take_pistol_up_end"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}

{sequence "squat_take_gun"				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "squat_take_pistol"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "squat_take_bazooka"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
	
{sequence "lie_take_rifle" 				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "lie_take_gun" 				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "lie_take_mgun" 				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "lie_take_pistol" 			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "lie_take_small" 				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_5f.anm"}	{events {5 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}

; // Mask
{sequence "stand_take_bazooka_mask"			{file "stand_take_bazooka"} 				
	{speed 0.6}
}
{sequence "stand_take_gun_down_mask"		;{file "weapon\stand_take_gun_down"}
	{file "[ASV_LV]/stand_take_gun_down"}
	{speed 1}	{smooth 0.2}
}
{sequence "stand_take_gun_up_mask"			;{file "weapon\stand_take_gun_up"}	
	{file "[ASV_LV]/stand_take_gun_up"}
	{speed 1}	{smooth 0.2}
}
{sequence "stand_take_mgun_up_mask"			;{file "stand_take_Mgun_up"}	
	{file "[ASV_LV]/stand_take_mgun_down"}
	{speed 1}	{smooth 0.2}
}
{sequence "stand_take_mgun_down_mask"		;{file "stand_take_mgun_down"}
	{file "[ASV_LV]/stand_take_mgun_up"}
	{speed 1}	{smooth 0.2}
}
{sequence "stand_take_pistol_up_begin_mask"	{file "weapon\anim_pistol_stand_equip_begin_up.anm"}	
;	{file "[ASV_LV]/stand_take_pistol_up_begin"}
	{speed 1}
}
{sequence "stand_take_pistol_up_end_mask"	{file "weapon\anim_pistol_stand_equip_end_up.anm"}	
;	{file "[ASV_LV]/stand_take_pistol_up_end"}
	{speed 1}
}

{sequence "squat_take_gun_mask" 			
	{file "weapon\anim_crouch_take_gun_01.anm"}
	{speed 1.35}
}
{sequence "squat_take_pistol_mask"
	{file "squat_take_pistol"}
	{speed 0.6}
}
{sequence "squat_take_bazooka_mask" 
	{file "squat_take_bazooka"}
	{speed 0.6}
}

{sequence "lie_take_rifle_mask" 	
	{file "lie_take_gun.anm"} 
	{speed 0.25}
}
{sequence "lie_take_gun_mask" 	
	{file "lie_take_gun.anm"} 
	{speed 0.25}
}
{sequence "lie_take_mgun_mask" 	
	{file "lie_take_mgun.anm"} 
	{speed 0.25}
}
{sequence "lie_take_pistol_mask" 
	{file "weapon\anim_item_lie_take_01.anm"}
	{speed 1}
}
{sequence "lie_take_small_mask" 	
	{file "weapon\anim_item_lie_take_end_01.anm"}	
	{speed 1}{events {1 "pick_up_small"}}
}

; ========================================================================================================================================================================
; // NOT YET DONE: TAKE ITEM
; ========================================================================================================================================================================

{sequence "stand_put_small" 			{file "weapon\anim_stand_take_empty_start_01.anm"}		{speed 1.33}{smooth 0.1}}
{sequence "stand_take_small" 			{file "weapon\anim_stand_take_empty_end_01.anm"}		{speed 1.33}{smooth 0.1} {events {1 "pick_up_small"}}}
{sequence "stand_pick_2hand_begin" 		{speed 0.35}}
{sequence "stand_pick_2hand_end" 		{speed 0.7}}

{sequence "squat_take_small" 			{file "weapon\anim_crouch_take_empty_end_01.anm"}{speed 1.1}{events {1 "pick_up_small"}}}
{sequence "squat_put_small" 			{file "weapon\anim_crouch_take_empty_start_01.anm"}{speed 1.1}{events {1 "pick_up_small"}}}

{sequence "lie_put_small" 				{file "weapon\anim_item_lie_take_start_01.anm"}	{speed 1}}
{sequence "lie_take_item_begin" 		{speed 0.7} {events {0 "pick_up_small"}}}
{sequence "lie_take_item_end" 			{speed 0.7}}