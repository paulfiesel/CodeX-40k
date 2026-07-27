
; // Replace blends with sequences for smooth transition and to register events.

; ========================================================================================================================================================================
; // IDLE POSES
; ========================================================================================================================================================================

{sequence "pose_squat_assault-fire_gun"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_squat_assault-fire_rifle"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}		
{sequence "pose_squat_fire_gun"					{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_squat_fire_gun_short"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}		
{sequence "pose_squat_fire_rifle"				{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_squat_fire_pistol"				{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}		
{sequence "pose_squat_fire_pistol_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_squat_empty"					{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}		
{sequence "pose_squat_bazooka"					{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_squat_fire_mgun"				{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}

; // MASK
{blend "pose_squat_fire_mgun_mask"				; {pose "weapon\anim_smg_crouch_shoot_01"		begin}
	{pose "[ASV_LV]/squat_fire_gun" begin}
}
{blend "pose_squat_empty_mask" 					; {pose "locomotion\mantle\anim_stand_to_crouch_empty" end}
	{pose "[ASV_LV]/squat_from_stand_empty" begin}
}
{blend "pose_squat_bazooka_mask" 				; {pose "squat_take_bazooka" end}
	{pose "[ASV_LV]/squat_fire_bazooka" begin}
}
{blend "pose_squat_assault-fire_gun_mask"		; {pose "weapon\anim_smg_crouch_shoot_01"		begin}
	{pose "[ASV_LV]/squat_assault-fire_gun" begin}
}
{blend "pose_squat_assault-fire_rifle_mask"		; {pose "weapon\anim_rifle_crouch_shoot_01"	begin}
	{pose "[ASV_LV]/squat_assault-fire_rifle" begin}
}
{blend "pose_squat_fire_gun_mask"				; {pose "weapon\anim_smg_crouch_shoot_01"		begin}
	{pose "[ASV_LV]/squat_fire_gun" begin}
}
{blend "pose_squat_fire_gun_short_mask"			; {pose "weapon\anim_smg_crouch_shoot_01" 	begin}
	{pose "[ASV_LV]/squat_fire_gun" begin}
}
{blend "pose_squat_fire_rifle_mask"				; {pose "weapon\anim_rifle_crouch_shoot_01"	begin}
	{pose "[ASV_LV]/squat_fire_rifle" begin}
}
{blend "pose_squat_fire_pistol_mask"			; {pose "squat_fire_pistol"					begin}
	{pose "[ASV_LV]/squat_fire_pistol" begin}
}
{blend "pose_squat_fire_pistol_1_mask"			; {pose "squat_fire_pistol_1"					begin}
	{pose "[ASV_LV]/squat_fire_pistol_1" begin}
}

; ========================================================================================================================================================================
; // SQUAT ACTIONS
; ========================================================================================================================================================================

{smooth 0.5}

{sequence "squat_take_gun" 					{file "weapon\anim_crouch_take_gun_01.anm"}{speed 1.35}}
{sequence "squat_take_pistol"				{speed 0.6}}
{sequence "squat_take_small" 				{file "weapon\anim_crouch_take_empty_end_01.anm"}{speed 1.1}{events {1 "pick_up_small"}}}
{sequence "squat_put_small" 				{file "weapon\anim_crouch_take_empty_start_01.anm"}{speed 1.1}{events {1 "pick_up_small"}}}
{sequence "squat_reload_gun" 				{file "weapon\anim_smg_crouch_reload.anm"}{speed 2.3} {smooth 0.1}}
{sequence "squat_reload_piat" 				{speed 1}}
{sequence "squat_reload_pistol"				{file "weapon\anim_pistol_crouch_reload_01_all.anm"}{speed 1}}
{sequence "squat_take_bazooka" 				{speed 0.6}}
{sequence "squat_reload_bazooka" 			{speed 0.35}}
{sequence "squat_throw_small_begin"}
{sequence "squat_throw_small_end"}
{sequence "squat_throw_grenade_begin" 			{file "throw\anim_crouch_throw_begin.anm"}	{speed 1.6} {events {40 "arm_right"}}}
{sequence "squat_throw_grenade_end" 			{file "throw\anim_crouch_throw_end.anm"}	{speed 1.8}}
{sequence "squat_throw_grenade_1_begin" 		{file "throw\anim_crouch_throw_begin.anm"}	{speed 1.6} {events {50 "arm_right"}}}
{sequence "squat_throw_grenade_1_end"   		{file "throw\anim_crouch_throw_end.anm"}	{speed 1.8}}
{sequence "squat_throw_knife_begin" {speed 0.9}}
{sequence "squat_throw_knife_end"   {speed 0.9}}
{sequence "squat_repair_1" {speed 0.65} {smooth 0.1} {events {18 "toolbox_open"} {40 "tool_equip"} {83 "wrench_turn"} {100 "wrench_turn"} {117 "wrench_turn"} {135 "wrench_turn"} {151 "wrench_turn"} {168 "wrench_turn"} {196 "toolbox_close"}}}
{sequence "squat_repair_2" {speed 0.45} {smooth 0.1} {events {25 "toolbox_open"} {58 "tool_equip"} {82 "screw_twist"} {93 "screw_twist"} {105 "screw_twist"} {118 "screw_twist"} {133 "screw_twist"} {161 "screw_twist"} {175 "screw_twist"} {187 "screw_twist"} {198 "screw_twist"} {226 "screw_twist"} {238 "screw_twist"} {251 "screw_twist"} {270 "toolbox_close"}}}
{sequence "squat_holdback_gun"						{file "weapon\anim_rifle_crouch_holdback_01.anm"}{speed 1}}
{sequence "squat_holdback_pistol"					{file "weapon\anim_pistol_crouch_holdback_01_up.anm"}{speed 1}}
{sequence "squat_self-treatment_hand" {speed 0.4}}
{sequence "squat_self-treatment_hand_begin" {speed 0.4}}
{sequence "squat_self-treatment_hand_end" {speed 0.4}}
{sequence "squat_self-treatment_head" {speed 0.4}}
{sequence "squat_self-treatment_head_begin" {speed 0.4}}
{sequence "squat_self-treatment_head_end" {speed 0.4}}
{sequence "squat_self-treatment_leg" {speed 0.4}}
{sequence "squat_self-treatment_leg_begin" {speed 0.4}}
{sequence "squat_self-treatment_leg_end" {speed 0.4}}
{sequence "squat_dig_trench" {speed 0.75} {events {22 "shovel"}}}

{smooth 0.025}
{sequence "squat_holdback_rifle" 	{file "weapon\anim_rifle_crouch_holdback_01.anm"}}
{sequence "squat_holdback_bazooka" 	{file "squat_holdback_gun.anm"}}
{sequence "squat_reload_rifle" 		{file "weapon\anim_smg_crouch_reload.anm"}{speed 0.35}}
{sequence "squat_reload_mgun" 		{file "squat_reload_gun.anm"} {speed 0.5}}

{smooth 0.1}