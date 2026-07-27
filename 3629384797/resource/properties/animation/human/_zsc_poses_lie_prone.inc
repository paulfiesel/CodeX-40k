
; // Replace blends with sequences for smooth transition and to register events.

; ========================================================================================================================================================================
; // IDLE
; ========================================================================================================================================================================

{sequence "pose_lie_empty"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_lie_pistol"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_lie_gun"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_lie_mgun"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_lie_bazooka"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_lie_rifle"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	
{sequence "pose_snipe_rifle"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle"}}}	

; // MASK
{blend "pose_lie_empty_mask" 		{pose "weapon\anim_item_lie_take_end_01" end}}
{blend "pose_lie_pistol_mask"		{pose "weapon\anim_pistol_lie_shoot_01" end}}
{blend "pose_lie_gun_mask" 			{pose "weapon\anim_smg_lie_shoot_01" end}}
{blend "pose_lie_mgun_mask" 		{pose "weapon\anim_mg_lie_shoot_01" begin}}
{blend "pose_lie_bazooka_mask"		{pose "lie_reload_bazooka" end}}
{blend "pose_lie_rifle_mask"		{pose "weapon\anim_smg_lie_shoot_01" begin}}
{blend "pose_snipe_rifle_mask" 		{pose "weapon\anim_smg_lie_shoot_01" begin}}

; ========================================================================================================================================================================
; // OTHER
; ========================================================================================================================================================================

{smooth 0.5}

{sequence "lie_medic_revive"		{smooth 0.3} {speed 0.5}}

{sequence "lie_self-treatment_hand" 		{speed 0.9}}
{sequence "lie_self-treatment_hand_begin" 	{speed 0.65}}
{sequence "lie_self-treatment_hand_end" 	{speed 0.65}}
{sequence "lie_self-treatment_head" 		{speed 0.9}}
{sequence "lie_self-treatment_head_begin" 	{speed 0.65}}
{sequence "lie_self-treatment_head_end" 	{speed 0.65}}
{sequence "lie_self-treatment_leg" 			{speed 0.9}}
{sequence "lie_self-treatment_leg_begin" 	{speed 0.65}}
{sequence "lie_self-treatment_leg_end" 		{speed 0.65}}

{sequence "lie_throw_small_begin" 				{speed 0.9}}
{sequence "lie_throw_small_end" 				{speed 0.9}}
{sequence "lie_throw_grenade_begin" 			{file "throw\anim_lie_throw_begin.anm"}		{speed 1.5}{events {16 "arm_right"}}}
{sequence "lie_throw_grenade_end"   			{file "throw\anim_lie_throw_end.anm"}		{speed 1.5}}
{sequence "lie_throw_grenade_1_begin" 			{file "throw\anim_lie_throw_begin.anm"}		{speed 1.5}{events {16 "arm_right"}}}
{sequence "lie_throw_grenade_1_end"   			{file "throw\anim_lie_throw_end.anm"}		{speed 1.5}}

;Old grenade throw
{sequence "lie_throw_grenade_1_old_begin" 	{speed 1.25} {events {60 "arm_right"}}}
{sequence "lie_throw_grenade_1_old_end"   	{speed 1.25}}

{sequence "lie_rotate_l45" 					{movement} {speed 0.75}}
{sequence "lie_rotate_r45" 					{movement} {speed 0.75}}
{sequence "lie_rotate_l45_gun" 				{movement} {speed 0.75}}
{sequence "lie_rotate_r45_gun" 				{movement} {speed 0.75}}
{sequence "lie_grenade_alert"				{smooth 0.1} {speed 0.8} {movement}}
