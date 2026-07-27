
; ========================================================================================================================================================================
; // TAKE GUN
; ========================================================================================================================================================================

{sequence "stand_take_gun_down"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {30 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_gun_up"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {30 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_mgun_up"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {30 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_mgun_down"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {30 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_pistol_up_begin"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {30 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_pistol_up_end"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"}};//	{events {0 "SC_H_Request_Anm_Takegun_S"} {30 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}
{sequence "stand_take_bazooka"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"}	{events {0 "SC_H_Request_Anm_Takegun_S"} {30 "SC_H_Request_Anm_Takegun_E"}} {Speed 0.6}}

; // Mask
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
	{file "[ASV_LV]/stand_take_mgun_down"}
	{speed 1}	{smooth 0.2}
}
{sequence "stand_take_pistol_up_begin_mask"	;{file "weapon\anim_pistol_stand_equip_begin_up.anm"}	
	{file "[ASV_LV]/stand_take_small"}
	{speed 1.2}
}
{sequence "stand_take_pistol_up_end_mask"	;{file "weapon\anim_pistol_stand_equip_end_up.anm"}	
	{file "[ASV_LV]/stand_take_small"}
	{speed 1.2}
}
{sequence "stand_take_bazooka_mask"			{file "stand_take_bazooka"} 				
	{speed 0.6}
}

; ========================================================================================================================================================================
; // NOT YET DONE: TAKE ITEM
; ========================================================================================================================================================================

{sequence "stand_put_small" 			{file "weapon\anim_stand_take_empty_start_01.anm"}		{speed 1.33}{smooth 0.1}}
{sequence "stand_take_small" 			{file "weapon\anim_stand_take_empty_end_01.anm"}		{speed 1.33}{smooth 0.1} {events {1 "pick_up_small"}}}

{sequence "stand_pick_2hand_begin" 		{speed 0.35}}
{sequence "stand_pick_2hand_end" 		{speed 0.7}}