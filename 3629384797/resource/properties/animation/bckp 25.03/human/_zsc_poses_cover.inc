
; ========================================================================================================================================================================
; // COVER SQUAT
; ========================================================================================================================================================================

{sequence "squat_hide"						{file "cover_crouch"}{speed 1.5}}

; ========================================================================================================================================================================
; // SNIPE POSE
; ========================================================================================================================================================================

{sequence "pose_snipe_pistol"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle_Snipe"}}}	
{sequence "pose_snipe_gun"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Idle_Snipe"}}}	

; // Mask
{sequence "pose_snipe_pistol_mask" 	{file "stand_fire_pistol_up_1"}}
{sequence "pose_snipe_gun_mask" 	{file "weapon\anim_pose_stand_rifle"}}

; Blends Old reference
;//{blend "pose_snipe_pistol" 	{pose "stand_fire_pistol_up_1" end}}
;//{blend "pose_snipe_gun" 		{pose "weapon\anim_pose_stand_rifle" begin}}

; ========================================================================================================================================================================
; // SNIPE TRANSITION
; ========================================================================================================================================================================

{smooth 0.5}

{sequence "cover_from_stand_empty"					{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"}	{events {0 "SC_H_Request_Anm_Snipe_Switch"} {15 "SC_H_Request_Anm_Snipe_Switch"}}}	
{sequence "cover_from_snipe_gun"					{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"}	{events {0 "SC_H_Request_Anm_Snipe_Switch"} {15 "SC_H_Request_Anm_Snipe_Switch"}}}	
{sequence "cover_from_snipe_gun_for_wind"			{file "/[SC_Plataform]/SC_animations/human/z_dummy_15f.anm"}	{events {0 "SC_H_Request_Anm_Snipe_Switch"} {15 "SC_H_Request_Anm_Snipe_Switch"}}}	

{sequence "cover_from_stand_empty_mask"			{file "cover_stand_empty"}{speed 1.2} {movement} {smooth 0.2}}
{sequence "cover_from_snipe_gun_mask" 			{file "cover_stand"}{speed 1.2}{movement}{smooth 0.2}}
{sequence "cover_from_snipe_gun_for_wind_mask" 	{file "cover_stand"}{speed 1.2}{movement}{smooth 0.2}}

; Old reference
;//{sequence "cover_from_stand_empty"				{file "cover_stand_empty"}{speed 1.2} {movement} {smooth 0.2}}
;//{sequence "cover_from_snipe_gun" 				{file "cover_stand"}{speed 1.2}{movement}{smooth 0.2}}
;//{sequence "cover_from_snipe_gun_for_wind" 		{file "cover_stand"}{speed 1.2}{movement}{smooth 0.2}}

; // Unused???
{sequence "snipe_take_pistol"}

;	{sequence "snipe_from_cover_gun" 				{movement}}
;	{sequence "snipe_from_cover_gun_for_wind" 		{file "snipe_from_cover_gun.anm"}}
;	{sequence "snipe_put_gun"}
;	{sequence "snipe_reload_gun"}

{sequence "cover_grenade_alert_left" 			{speed 0.70} {smooth 0.1}}
{sequence "cover_grenade_alert_left_gun"		{speed 0.70} {smooth 0.1}}
{sequence "cover_grenade_alert_right_gun"		{speed 0.70} {smooth 0.1}}

; ========================================================================================================================================================================
; // LOOK LEFT PEEK COVER
; ========================================================================================================================================================================

{sequence "llook_stealth_gun"		{file "weapon\anim_pose_stand_rifle"}	{events {0 ""} {1 ""}}}	
{sequence "rlook_stealth_gun"		{file "weapon\anim_pose_stand_rifle"}	{events {0 ""} {1 ""}}}	

{smooth 0.5}

{sequence "llook_stealth_gun_mask" {File "llook_stealth_gun"} {movement}}
{sequence "rlook_stealth_gun_mask" {File "rlook_stealth_gun"} {movement}}

{sequence "rlook_gun"		{movement}}
{sequence "llook_gun" 		{movement}}
{sequence "rlook_pistol"	{movement}}
{sequence "llook_pistol" 	{movement}}
{sequence "rlook_item" 		{movement}}
{sequence "rlook_throw_item_begin" {pinback 2}}
{sequence "rlook_throw_item_end" {pinback 2}}
{sequence "llook_item" 		{movement}}
{sequence "llook_throw_item_begin" {pinback 2}}
{sequence "llook_throw_item_end" {pinback 2}}

{sequence "rlook_peep" {movement}}
{sequence "llook_peep_gun" {movement}}
{sequence "llook_stealth_item" {movement}}
{sequence "llook_stealth_throw_item_begin" {pinback 2}}
{sequence "llook_stealth_throw_item_end" {pinback 2}}
{sequence "rlook_stealth_item" {movement}}
{sequence "rlook_stealth_throw_item_begin" {pinback 2}}
{sequence "rlook_stealth_throw_item_end" {pinback 2}}

; Old Reference
;//{sequence "rlook_gun"		{movement}}
;//{sequence "llook_gun" 		{movement}}
;//{sequence "rlook_pistol"	{movement}}
;//{sequence "llook_pistol" 	{movement}}
;//{sequence "rlook_item" 		{movement}}
;//{sequence "rlook_throw_item_begin" {pinback 2}}
;//{sequence "rlook_throw_item_end" {pinback 2}}
;//{sequence "llook_item" 		{movement}}
;//{sequence "llook_throw_item_begin" {pinback 2}}
;//{sequence "llook_throw_item_end" {pinback 2}}

;//{sequence "rlook_peep" {movement}}
;//{sequence "llook_peep_gun" {movement}}
;//{sequence "llook_stealth_gun" {movement}}
;//{sequence "rlook_stealth_gun" {movement}}
;//{sequence "llook_stealth_item" {movement}}
;//{sequence "llook_stealth_throw_item_begin" {pinback 2}}
;//{sequence "llook_stealth_throw_item_end" {pinback 2}}
;//{sequence "rlook_stealth_item" {movement}}
;//{sequence "rlook_stealth_throw_item_begin" {pinback 2}}
;//{sequence "rlook_stealth_throw_item_end" {pinback 2}}

