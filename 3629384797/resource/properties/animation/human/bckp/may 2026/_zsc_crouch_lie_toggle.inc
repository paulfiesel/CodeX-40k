
; ========================================================================================================================================================================
; // SQUAT <-> STAND 
; ========================================================================================================================================================================

{smooth 0.5}
 
{sequence "squat_from_stand_empty"		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"} {15 "SC_H_Request_Anm_Stand_From_Squat"}}}
{sequence "squat_from_stand_gun"		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"} {15 "SC_H_Request_Anm_Stand_From_Squat"}}}
{sequence "squat_from_stand_bazooka"	{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"} {15 "SC_H_Request_Anm_Stand_From_Squat"}}}
{sequence "squat_from_stand_rifle" 		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"} {15 "SC_H_Request_Anm_Stand_From_Squat"}}}
{sequence "squat_from_stand_mgun" 		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"} {15 "SC_H_Request_Anm_Stand_From_Squat"}}}
{sequence "squat_from_stand_pistol"		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"} {15 "SC_H_Request_Anm_Stand_From_Squat"}}}

; // Mask
{sequence "squat_from_stand_empty_mask"				;{file "locomotion\mantle\anim_stand_to_crouch_empty.anm"}
	{file "[ASV_LV]/squat_from_stand_empty"}
	{speed 2.0}	{events {12 "crouch"}}
}

{sequence "squat_from_stand_pistol_mask"			{file "squat_from_stand_pistol.anm"} 
	;{file "[ASV_LV]/squat_from_stand_empty"}
	{speed 2.0}	{events {12 "crouch"}}
}

{sequence "squat_from_stand_gun_mask"				;{file "locomotion\mantle\anim_stand_to_crouch_gun.anm"}
	{file "[ASV_LV]/squat_from_stand_gun"}
	{speed 2.0}	{events {12 "crouch"}}
}

{sequence "squat_from_stand_bazooka_mask"			;{file "locomotion\mantle\anim_stand_to_crouch_gun.anm"}
	{file "[ASV_LV]/squat_from_stand_bazooka"}
	{speed 2.0}	{events {12 "crouch"}}
}

============================================================================================================================================================
; // LIE <-> STAND 
; ========================================================================================================================================================================

{sequence "lie_from_stand"			{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Prone_From_Stand"} {15 "SC_H_Request_Anm_Stand_From_Prone"}}}
{sequence "lie_from_stand_1" 		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Prone_From_Stand"} {15 "SC_H_Request_Anm_Stand_From_Prone"}}}

; // Mask
{sequence "lie_from_stand_mask" 		
	{file "locomotion\mantle\anim_stand_to_lie_gun_alt.anm"}{speed 2.0}
	{events {12 "stand_to_prone"}}
	{events {0 "SC_H_Request_Anm_Stand_To_Prone"} {12 "SC_H_Request_Anm_Stand_To_Prone"}}
}

{sequence "lie_from_stand_1_mask"
	{file "locomotion\mantle\anim_stand_to_lie_gun_alt.anm"}{speed 2.0}
	{events {12 "prone_to_stand"}}
	{events {0 "SC_H_Request_Anm_Stand_To_Prone"} {12 "SC_H_Request_Anm_Stand_To_Prone"}}
}

{sequence "lie_from_squat_empty_mask" 	
	{file "locomotion\mantle\anim_crouch_to_lie_empty.anm"} {speed 2.0}
	{events {32 "prone_to_stand"}}
	{events {0 "SC_H_Request_Anm_Stand_To_Prone"} {32 "SC_H_Request_Anm_Stand_To_Prone"}}
}

============================================================================================================================================================
; // LIE <-> SQUAT 
; ========================================================================================================================================================================

{sequence "lie_from_squat_empty" 		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Prone_From_Squat"} {15 "SC_H_Request_Anm_Squat_From_Prone"}}}
{sequence "lie_from_squat_gun"			{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Prone_From_Squat"} {15 "SC_H_Request_Anm_Squat_From_Prone"}}}
{sequence "lie_from_squat_mgun" 		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Prone_From_Squat"} {15 "SC_H_Request_Anm_Squat_From_Prone"}}}
{sequence "lie_from_squat_bazooka" 		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Prone_From_Squat"} {15 "SC_H_Request_Anm_Squat_From_Prone"}}}
{sequence "lie_from_squat_pistol" 		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Prone_From_Squat"} {15 "SC_H_Request_Anm_Squat_From_Prone"}}}
{sequence "lie_from_squat_rifle" 		{Speed 0.6}	{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"} {events {0 "SC_H_Request_Anm_Prone_From_Squat"} {15 "SC_H_Request_Anm_Squat_From_Prone"}}}

{sequence "lie_from_squat_gun_mask"
	{file "locomotion\mantle\anim_crouch_to_lie_gun.anm"}{speed 2.5}
	{events {0 "stand_to_prone"}}
	{events {0 "SC_H_Request_Anm_Stand_To_Prone"} {12 "SC_H_Request_Anm_Stand_To_Prone"}}
}

{sequence "lie_from_squat_mgun_mask"
	{file "locomotion\mantle\anim_crouch_to_lie_gun.anm"}{speed 2.5}
	{events {0 "stand_to_prone"}}
	{events {0 "SC_H_Request_Anm_Stand_To_Prone"} {12 "SC_H_Request_Anm_Stand_To_Prone"}}
}

{sequence "lie_from_squat_bazooka_mask"
	{file "locomotion\mantle\anim_crouch_to_lie_gun.anm"}{speed 2.5}
	{events {0 "stand_to_prone"}}
	{events {0 "SC_H_Request_Anm_Stand_To_Prone"} {12 "SC_H_Request_Anm_Stand_To_Prone"}}
}

{sequence "lie_from_squat_pistol_mask"
	{file "locomotion\mantle\anim_crouch_to_lie_empty.anm"}{speed 2.5}
	{events {1 "stand_to_prone"}}
	{events {0 "SC_H_Request_Anm_Stand_To_Prone"} {12 "SC_H_Request_Anm_Stand_To_Prone"}}
}

============================================================================================================================================================
; // Getup from Blast (Not Sure)
; ========================================================================================================================================================================

{Smooth 0.2}

; // Check later // Not Yet done
{sequence "stand_from_lie_back"  		{speed 0.5}}
{sequence "stand_from_lie_back_1" 		{speed 0.5}}