; This file contains animations and poses for overall infantry movement when not part of vehicle crews


; // IMPOSSIBLE TO KEEP TRACK!
; // GAME UPDATES WILL REQUIRE INTENSIVE TESTING!

;==============================================================================================================================
;===================================SC PLATAFORM FSM MOD ANIMS - BEGIN================================================================================
;==============================================================================================================================


{blend "pose_sit_chair"					{pose "pose_sit_chair"  begin}}
{blend "pose_stand_look_around_gun"		{pose "stand_look_around_gun"  end}}
{blend "pose_stand_look_around_gun_1"	{pose "pose_stand_gun_aside_1_2"  end}}
{blend "pose_stand_gun_aside"			{pose "pose_stand_gun_aside"  begin}}
{blend "pose_stand_gun_aside_1"   	    {pose "pose_stand_gun_aside_1_2"  begin}}
{blend "pose_stand_gun_aside_2"     	{pose "pose_stand_gun_aside_1_2"  end}}

{sequence "getover_middle" {movement} {speed 0.6} {smooth 0.2} {events {3 "crouch"} {7 "leg_right"} {21 "crouch"} {22 "leg_left"} {29 "leg_right"}}}      ; JUMPING  FENCE

{sequence "stand_down"}
{sequence "stand_throw-off_tarpaulin" 	{speed 0.3} {file "stand_pick_2hand_end.anm"}}
{sequence "stand_pick_small_begin" 		{file "weapon\anim_stand_take_ground_start_01.anm"}{speed 1.1} {events {1 "pick_up_small"}}}
{sequence "stand_pick_small_end" 		{file "weapon\anim_stand_take_ground_end_01.anm"}{speed 1.25}}
{sequence "stand_holdback_gun_up"				{file "weapon\anim_rifle_stand_holdback_01_up.anm"}		{speed 1}{smooth 0.2}}
{sequence "stand_holdback_mgun_up"				{file "weapon\anim_rifle_stand_holdback_01_up.anm"}		{speed 1}{smooth 0.2}}
{sequence "stand_holdback_pistol_up"			{file "weapon\pistol_holdback_up"}						{speed 1}{smooth 0.2}}
{sequence "stand_holdback_gun_down"				{file "weapon\anim_rifle_stand_holdback_01_down.anm"}	{speed 1}{smooth 0.2}}
{sequence "stand_holdback_mgun_down"			{file "weapon\anim_rifle_stand_holdback_01_down.anm"}	{speed 1}{smooth 0.2}}
{sequence "stand_holdback_pistol_down"			{file "weapon\pistol_holdback_down"}					{speed 1}{smooth 0.2}}
{sequence "stand_flag"}
{sequence "stand_ring_gong_up"}
{sequence "stand_pourin_barrel"}
{sequence "stand_pourin_can"}
{sequence "stand_pourout_barrel"}
{sequence "stand_pourout_can"}
{sequence "stand_turn_railswitch" {movement} {smooth 0}}
{sequence "stand_dig_trench" {speed 0.75} {events {1 "crouch"} {6 "shovel"}}}

{sequence "stand_drop_corpse"}
{sequence "stand_lift_corpse"}

{sequence "corpse_drop" {smooth 0} {dynamicSpeed {102 103 1000}}}
{sequence "corpse_lift"}

{smooth 0.025}

;new mapped to gun
{sequence "stand_holdback_rifle_up"		{file "stand_holdback_gun_up.anm"}{speed 2}}
{sequence "stand_holdback_rifle_down" 	{file "stand_holdback_gun_down.anm"}{speed 2}}
{sequence "stand_take_rifle_up"			{file "stand_take_gun_up.anm"}{speed 2}}
{sequence "stand_holdback_bazooka_up"	{file "stand_holdback_gun_up.anm"}{speed 2}}
{sequence "stand_holdback_bazooka_down" {file "stand_holdback_gun_down.anm"}{speed 2}}


; // ----------------------------------------------------- [ WALK/RUN ANIMATIONS

{smooth 0.25}

{sequence "walk_giveup_1" 					{speed 1} {resume} {events {10 "leg_left"} {40 "leg_right"}}}
{sequence "walk_giveup_2" 					{speed 1} {resume} {events {10 "leg_left"} {40 "leg_right"}}}

; Bazooka mapped to gun
{smooth 0.025}
{sequence "run_bazooka_up"				{file "locomotion\sprint_bazooka_up"} 			{speed 0.42} {resume}}
{sequence "run_fast_bazooka_rhand_up" 	{file "locomotion\sprint_bazooka_up"} 			{speed 0.42} {resume}}
{sequence "run_bow_bazooka_up" 			{file "locomotion\sprint_bazooka_up"} 			{speed 0.42} {resume}}
{sequence "run_bow_bazooka_down" 		{file "locomotion\sprint_bazooka_down"} 		{speed 0.42} {resume}}

; 	run backward - for manual control
;	{sequence "run_back_down"}
;	{sequence "run_back_up"}
;	{sequence "run_strap_back_down"}
;	{sequence "run_strap_back_up"}


;==============================================================================================================================
;===================================SC PLATAFORM FSM MOD ANIMS - END================================================================================
;==============================================================================================================================







;==============================================================================================================================
;===================================MOCAP ANIMS================================================================================
;==============================================================================================================================



;========================================================CINEMATICS========================================================================
;==========================================================================================================================================


	{sequence "cinematics\lst_attn_01" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_attn_02a" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_attn_02b" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_attn_03" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_exhaust_01" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_exhaust_02" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_irrit_01" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_irrit_02" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_irrit_03" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_neut_01" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_neut_02" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\lst_neut_03" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_lst_exhaust_01_sitdown" 				{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_lst_exhaust_01" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_lst_neut_01" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_lst_neut_01_getup" 					{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_lst_neut_01_sitdown" 				{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_lst_neut_02" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_lst_neut_02_getup" 					{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_lst_neut_02_sitdown" 				{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_spk_exhaust_01" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_spk_exhaust_01_getup" 				{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_spk_exhaust_01_sitdown" 				{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_spk_neut_01" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\sit_spk_neut_02" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_angry_01" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_angry_02" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_angry_03" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_calm_01" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_calm_02" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_calm_03" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_nervous_01" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_nervous_02" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_nervous_03" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_neut_01" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_neut_02" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\spk_neut_03" 							{smooth 0.01}{speed 1}}
	{sequence "cinematics\varsity_intro_01a" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\varsity_intro_01b" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\varsity_intro_01c" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\varsity_intro_02a" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\varsity_intro_02b" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\varsity_intro_02c" 						{smooth 0.01}{speed 1}}
	{sequence "cinematics\varsity_intro_02d" 						{smooth 0.01}{speed 1}}

;==============================================================================================================================
;==============================================================================================================================
;==============================================================================================================================





;============ flinching ================
	{sequence "flinch/flinch_arm_l_01" {additive}}
	{sequence "flinch/flinch_arm_r_01" {additive}}
	{sequence "flinch/flinch_chest_01" {additive}}
	{sequence "flinch/flinch_chest_l_01" {additive}}
	{sequence "flinch/flinch_chest_r_01" {additive}}
	{sequence "flinch/flinch_head_01" {additive}}
	{sequence "flinch/flinch_leg_l_01" {additive}}
	{sequence "flinch/flinch_leg_r_01" {additive}}

	{smooth 0}
	{sequence "flinch/flinch_head_01_set" {file "flinch/flinch_head_01.anm"}}
	{smooth 0.2}

	
	
;==========================================================================================================================================
;============================================DIRECT CONTROL================================================================================
;	{sequence "walk_normal_pistol_down"	{speed 0.27} {smooth 0.08} {resume} {events {10 "leg_right"} {22 "leg_left"} {34 "leg_right"} {47 "leg_left"} {60 "leg_right"} {72 "leg_left"}}}
;	{sequence "walk_normal_pistol_up"	{speed 0.27} {smooth 0.08} {resume}}
;	{sequence "walk_normal_mgun_down"	{speed 0.27} {smooth 0.08} {resume} {events {10 "leg_right"} {23 "leg_left"} {35 "leg_right"} {47 "leg_left"} {60 "leg_right"} {72 "leg_left"}}}
;	{sequence "walk_normal_mgun_up"		{speed 0.27} {smooth 0.08} {resume}}
;	{sequence "walk_normal_gun_down"	{speed 0.27} {smooth 0.08} {resume} {events {11 "leg_right"} {22 "leg_left"} {36 "leg_right"} {47 "leg_left"} {61 "leg_right"} {72 "leg_left"}}}
;	{sequence "walk_normal_gun_up"		{speed 0.27} {smooth 0.08} {resume}}
;	{sequence "walk_normal_rifle_down"	{speed 0.27} {smooth 0.08} {resume} {events {9 "leg_right"} {21 "leg_left"} {34 "leg_right"} {47 "leg_left"} {59 "leg_right"} {72 "leg_left"}}}
;	{sequence "walk_normal_rifle_up"	{speed 0.27} {smooth 0.08} {resume}}
;	{sequence "walk_normal_gun_down_2"	{speed 0.27} {resume} {events {7 "leg_left"} {33 "leg_right"}}}
;	{sequence "walk_normal_gun_up_2"	{speed 0.27} {resume}}
;	{sequence "walk_normal_gun_short_down"	{speed 0.40} {resume} {events {36 "leg_left"} {13 "leg_right"}}}
;	{sequence "walk_normal_gun_short_up"	{speed 0.40} {resume}}
;==========================================================================================================================================	
;==========================================================================================================================================
;==========================================================================================================================================
;==========================================================================================================================================
;=============================================DIRECT CONTROL (MOCAP)=======================================================================
; Used MOCAP anims for new DC movement, however the result was 'ok' but not satisfactory.
; Disabled for now since the regular DC movement blends just fine with new anims, and these are too 'fast' to work with DC speeds.
; Reccomended that speed and other settings need to be changed first before use.

;==========================================================================================================================================
;==========================================================================================================================================



	;--- crouching idles ---
	{sequence "idle_crouch_empty"		{file "idle\empty_crouch"}	{speed 0.8}{smooth 0.2}}
	{sequence "idle_crouch_gun"			{file "idle\gun_crouch"}	{speed 0.8}{smooth 0.2}}

	;--- lying idles ---
	{sequence "idle_lie_empty"			{file "idle_lie_empty"}		{speed 1.5}{smooth 0.2}}
	{sequence "idle_lie_gun"			{file "idle_lie_gun"}		{speed 1.5}{smooth 0.2}}











;==============================================================================================================================
;==============================================================================================================================
;==============================================================================================================================














;=================paratroopers begin==============================

	{sequence "para_drop_idle_1" {file "paratroopers\para_drop_idle_1.anm"} {speed 0.7} {smooth 0}}
	{sequence "para_drop_idle_2" {file "paratroopers\para_drop_idle_2.anm"} {speed 0.7} {smooth 0}}
	{sequence "para_drop_idle_3" {file "paratroopers\para_drop_idle_3.anm"} {speed 0.7} {smooth 0}}

	{sequence "paratroopers/para_dead_1"		{speed 0.7} {smooth 0}}
	{sequence "paratroopers/para_dead_2"		{speed 0.7} {smooth 0}}


;=================paratroopers end==============================


;======================Supplement for animations to work properly==============

	{sequence "fingers/fingers_smg_l"}
	{sequence "fingers/fingers_smg_r"}
	{sequence "fingers/fingers_bare_l"}
	{sequence "fingers/fingers_bare_r"}
	{sequence "fingers/fingers_box_l"}
	{sequence "fingers/fingers_box_r"}
	{sequence "fingers/fingers_item_l"}
	{sequence "fingers/fingers_item_r"}
	{sequence "fingers/fingers_pistol_l"}
	{sequence "fingers/fingers_pistol_r"}
	{sequence "fingers/fingers_rifle_l"}
	{sequence "fingers/fingers_rifle_r"}


;=================BOLTING Animations==============================

;=================LIE Bolt==========

	{sequence "lie_bolt_rifle"			{file "weapon\anim_rifle_lie_bolt_01.anm"}						{speed 0.8}{smooth 0.15}{events {7 "open_bolt"}{22 "close_bolt"}}}
	{sequence "lie_bolt_rifle_open"		{file "weapon\anim_rifle_lie_bolt_open_01.anm"}					{speed 0.8}{smooth 0.15}{events {7 "open_bolt"}}}
	{sequence "lie_bolt_rifle_close"	{file "weapon\anim_rifle_lie_bolt_close_01.anm"}				{speed 0.8}{smooth 0.15}{events {9 "close_bolt"}}}

;=================STAND Bolt==========

	{sequence "stand_bolt_rifle_up"			{file "weapon\anim_bolt_rifle_stand_bolt_up.anm"}			{speed 1.5}{smooth 0.05}{events {10 "open_bolt"} {35 "close_bolt"}}}
	{sequence "stand_bolt_rifle_down"		{file "weapon\anim_bolt_rifle_stand_bolt_down.anm"}			{speed 1.5}{smooth 0.05}}
	{sequence "stand_bolt_rifle_open_up"	{file "weapon\anim_bolt_rifle_stand_bolt_open_up.anm"}		{speed 1.5}{smooth 0.05}{events {10 "open_bolt"}}}
	{sequence "stand_bolt_rifle_open_down"	{file "weapon\anim_bolt_rifle_stand_bolt_open_down.anm"}	{speed 1.5}{smooth 0.05}}
	{sequence "stand_bolt_rifle_close_up"	{file "weapon\anim_bolt_rifle_stand_bolt_close_up.anm"}		{speed 1.5}{smooth 0.05}}
	{sequence "stand_bolt_rifle_close_down"	{file "weapon\anim_bolt_rifle_stand_bolt_close_down.anm"}	{speed 1.5}{smooth 0.05}}

;=================SQUAT Bolt==========

	{sequence "squat_bolt_rifle"		{file "weapon\anim_bolt_rifle_crouch_bolt_all.anm"}{speed 1.35} {smooth 0.15} {events {10 "open_bolt"} {35 "close_bolt"}}}
	{sequence "squat_bolt_rifle_open"	{file "weapon\anim_bolt_rifle_crouch_bolt_open_all.anm"}{speed 0.9} {smooth 0}}
	{sequence "squat_bolt_rifle_close"	{file "weapon\anim_bolt_rifle_crouch_bolt_close_all.anm"}{speed 0.9} {smooth 0}}

;=================experiments begin==============================
	{smooth 0.5}

	{sequence "squat_death_TEST"	{speed 1} {smooth 0}}
	{sequence "crouch_cover"		{speed 1} {smooth 0}}
	{sequence "stand_idle_02"		{speed 1} {smooth 0}}
;	{sequence "stand_die_03"		{movement} {speed 1} {smooth 0.1} {events {16 "body_fall_heavy"}}}
;	{sequence "stand_die_04"		{movement} {speed 0.7} {smooth 0.1} {events {20 "body_fall_heavy"} {43 "death_breathe"}}}
;	{sequence "stand_die_05"		{movement} {speed 0.65} {smooth 0.1} {events {18 "body_fall_heavy"}}}
;	{sequence "stand_die_06"		{movement} {speed 1} {smooth 0.1} {events {26 "body_fall_light"}}}
	{sequence "stand_idle_gun_01"	{speed 1} {smooth 0}}
	{sequence "dig_pickaxe_01"		{speed 1} {smooth 0} {events {28 "leg_left"} {35 "leg_right"} {38 "pickaxe"}}}
	{sequence "squat_dig_01"		{speed 1} {smooth 0} {events {17 "pickaxe"}}}
	{sequence "stand_dig_01"		{speed 1} {smooth 0} {events {27 "leg_left"} {32 "shovel"}}}
;	{sequence "stand_die_back_5"	{movement} {speed 0.65} {smooth 0.1} {events {22 "body_fall_light"} {41 "death_breathe"}}}

	{sequence "squat_construct_sandbag"		{speed 0.8} {smooth 0.3} {events {48 "construct_sandbag"}}}
	{sequence "squat_construct_mine"		{speed 0.8} {smooth 0.3} {events {46 "construct_mine"}}}

	{sequence "squat_medic_revive"		{speed 0.5} {smooth 0.07}}
	{sequence "lie_wounded"		{speed 0.5} {smooth 0.3}}
	{sequence "lie_wounded_1"		{speed 0.5} {smooth 0.3}}
	{sequence "lie_wounded_2"		{speed 0.5} {smooth 0.3}}

	{sequence "stand_at_attention"		{speed 0.6} {smooth 0.1} {events {1 "stand_at_attention"}}}

;=================surrender begin================================

	{sequence "stand_surrender"			{speed 1} {smooth 0.7}}
	{sequence "stand_surrender_idle"	{speed 1} {smooth 0.7}}
	{sequence "stand_handcuff"			{speed 1} {smooth 0.7}}
	{sequence "stand_handcuff_idle"		{speed 1} {smooth 0.7}}
	{sequence "stand_handcuff_walk"		{speed 1} {smooth 0.7}}


;=================Wire Cutting==========

	{sequence "stand_cut_wire"	{speed 0.65} {smooth 0}}

;=================Wire Cutting==========


;=================POSES begin==============================

	{smooth 0.5}
;	{blend "pose_die_water" 		{pose <now uses no pose> end}}
	{blend "pose_lie_empty" 		{pose "weapon\anim_item_lie_take_end_01" end}}
	{blend "pose_lie_pistol"		{pose "weapon\anim_pistol_lie_shoot_01" end}}
	{blend "pose_lie_gun" 			{pose "weapon\anim_smg_lie_shoot_01" end}}
	{blend "pose_lie_mgun" 			{pose "weapon\anim_mg_lie_shoot_01" begin}}
	{blend "pose_lie_bazooka"		{pose "lie_reload_bazooka" end}}


	{blend "pose_stand_pistol_up" 	{pose "stand_take_pistol_up_end" end}}
	{blend "pose_stand_empty_1" 	{pose "stand_idle_empty_1" begin}}
	{blend "pose_stand_strap_1" 	{pose "weapon\anim_stand_take_empty_start_01" begin}}
	{blend "pose_stand_bazooka" 	{pose "weapon\anim_bazooka_stand_shoot_all" begin}}
	{blend "pose_stand_1hand" 		{pose "walk_1hand" begin}}
	{blend "pose_stand_2hand" 		{pose "walk_2hand" begin}}
	{blend "pose_stand_corpse" 		{pose "stand_drop_corpse" begin}}
	{blend "pose_stand_flag" 		{pose "stand_flag" end}}
	{blend "pose_stand_down" 		{pose "stand_down" begin}}
	{blend "pose_stand_gun_down" 	{pose "stand_take_gun_down" end}}

	{blend "pose_stand_giveup_1" 	{pose "stand_giveup_1" end}}
	{blend "pose_stand_giveup_2" 	{pose "stand_giveup_2" end}}

	{blend "pose_watch_binocular" 		{pose "stand_watch_binocular" begin}}
	{blend "pose_squat_watch_binocular" {pose "squat_watch_binocular" begin}}
	{blend "pose_lie_watch_binocular" 	{pose "squat_watch_binocular" end}}

	{blend "pose_corpse" 					{pose "corpse_move" begin}}
	{blend "pose_test" 						{pose "pose_test" begin}}

;==================POSES end ==============================

;=================IDLE ANIMATIONS (of any stance) begin ===


	{sequence "stand_smoke_1"}
	{sequence "stand_smoke_2"}
	{sequence "stand_smoke_3"}
	{sequence "stand_climb_stairs"}
	{sequence "stand_upstairs"}
	{smooth 0.1}
	{sequence "stand_clime_up_rope_begin" {speed 0.5}}
	{sequence "stand_clime_up_rope_end" {speed 0.5}}
	{sequence "stand_move_up_rope" {speed 0.5}}
	{sequence "stand_giveup_1" {speed 1}}
	{sequence "stand_giveup_2" {speed 1}}



	; cinematic-only animations begin
	{sequence "cinematics\cin_idle_01"}
	{sequence "cinematics\cin_idle_02"}
	{sequence "cinematics\cin_idle_02_lean"}
	{sequence "cinematics\cin_idle_sit_01"}
	{sequence "cinematics\cin_idle_sit_02"}
	{sequence "cinematics\cin_idle_sit_03"}
	{sequence "cinematics\cin_idle_sit_crate_01"}
	{sequence "cinematics\cin_piano_play" {events {10 "play_piano"}}}
	
	{sequence "cinematics\idle_attention"}
	{sequence "cinematics\idle_to_attention"}
	{sequence "cinematics\idle_attention_salute"}
	{sequence "cinematics\idle_attention_eyes_left"}
	{sequence "cinematics\idle_attention_eyes_right"}

	; mission-only gamedesign idle animations begin
	{sequence "idle_mission\idle_passive_squat_ground_gun_strap_simple1"}
	{sequence "idle_mission\idle_passive_squat_ground_gun_strap_scratch"}
	{sequence "idle_mission\idle_passive_squat_ground_gun_strap_simple2"}
	{sequence "idle_mission\idle_passive_squat_ground_gun_strap_simple3"}
	{sequence "idle_mission\idle_passive_squat_ground_gun_strap_sleep"}
	{sequence "idle_mission\idle_passive_squat_ground_gun_strap_smoke"}
	{sequence "idle_mission\idle_passive_squat_gun_aside_drop"}
	{sequence "idle_mission\idle_passive_squat_gun_aside_fals_alarm"}
	{sequence "idle_mission\idle_passive_squat_gun_aside_ground_test"}
	{sequence "idle_mission\idle_passive_squat_gun_aside_gun_test1"}
	{sequence "idle_mission\idle_passive_squat_gun_aside_gun_test2"}
	{sequence "idle_mission\idle_passive_squat_gun_aside_look_around"}
	{sequence "idle_mission\idle_passive_squat_wall_gun_aside_simple1"}
	{sequence "idle_mission\idle_passive_squat_wall_gun_aside_simple2"}
	{sequence "idle_mission\idle_passive_squat_wall_gun_aside_sleep"}
	{sequence "idle_mission\idle_passive_stand_gun_strap_gun_test"}
	{sequence "idle_mission\idle_passive_stand_gun_strap_lace"}
	{sequence "idle_mission\idle_passive_stand_gun_strap_self_clean"}
	{sequence "idle_mission\idle_passive_stand_gun_strap_simple_long"}
	{sequence "idle_mission\idle_passive_stand_gun_strap_simple3"}
	{sequence "idle_mission\idle_squat_from_stand_ground_gun_strap"}
	{sequence "idle_mission\idle_squat_from_stand_gun_aside"}
	{sequence "idle_mission\idle_squat_from_stand_wall_gun_aside"}
	{sequence "idle_mission\idle_stand_from_squat_ground_gun_strap"}
	{sequence "idle_mission\idle_stand_gun_aside_test"}
	{sequence "idle_mission\idle_stand_listen_gun_aside_1"}
	{sequence "idle_mission\idle_stand_listen_gun_aside_2"}
	{sequence "idle_mission\idle_stand_listen_gun_aside_3"}
	{sequence "idle_mission\idle_stand_listen_gun_aside_4"}
	{sequence "idle_mission\idle_stand_listen_gun_strap_1"}
	{sequence "idle_mission\idle_stand_listen_gun_strap_2"}
	{sequence "idle_mission\idle_stand_listen_gun_strap_3"}
	{sequence "idle_mission\idle_stand_listen_gun_strap_4"}
	{sequence "idle_mission\idle_stand_listen_gun_strap_5"}
	{sequence "idle_mission\idle_stand_listen_gun_strap_6"}
	{sequence "idle_mission\idle_stand_talk_gun_aside_1"}
	{sequence "idle_mission\idle_stand_talk_gun_aside_2"}
	{sequence "idle_mission\idle_passive_squat_ground_gun_strap_ground_test"}



	{sequence "idle_mission\idle_passive_stand_gun_strap_warming"}
	{sequence "idle_mission\idle_passive_stand_gun_strap_watch_test"}
	{sequence "idle_mission\idle_passive_stand_wall_gun_aside_1"}
	{sequence "idle_mission\idle_passive_stand_wall_gun_aside_2"}
	{sequence "idle_mission\idle_stand_talk_gun_aside_3"}
	{sequence "idle_mission\idle_stand_talk_gun_aside_4"}
	{sequence "idle_mission\idle_stand_talk_gun_aside_5"}
	{sequence "idle_mission\idle_stand_talk_gun_aside_6"}
	{sequence "idle_mission\idle_stand_talk_gun_strap_1"}
	{sequence "idle_mission\idle_stand_talk_gun_strap_2"}
	{sequence "idle_mission\idle_stand_talk_gun_strap_3"}
	{sequence "idle_mission\idle_stand_talk_gun_strap_4"}
	{sequence "idle_mission\idle_walk_listen_left_gun_strap_1"}
	{sequence "idle_mission\idle_walk_listen_left_gun_strap_2"}
	{sequence "idle_mission\idle_walk_listen_left_gun_strap_3"}
	{sequence "idle_mission\idle_walk_listen_left_gun_strap_4"}
	{sequence "idle_mission\idle_walk_listen_right_gun_strap_1"}
	{sequence "idle_mission\idle_walk_listen_right_gun_strap_2"}
	{sequence "idle_mission\idle_walk_listen_right_gun_strap_3"}
	{sequence "idle_mission\idle_walk_listen_right_gun_strap_4"}
	{sequence "idle_mission\idle_walk_talk_left_gun_strap_1"}
	{sequence "idle_mission\idle_walk_talk_left_gun_strap_2"}
	{sequence "idle_mission\idle_walk_talk_left_gun_strap_3"}
	{sequence "idle_mission\idle_walk_talk_left_gun_strap_4"}
	{sequence "idle_mission\idle_walk_talk_right_gun_strap_1"}
	{sequence "idle_mission\idle_walk_talk_right_gun_strap_2"}
	{sequence "idle_mission\idle_walk_talk_right_gun_strap_3"}
	{sequence "idle_mission\idle_walk_talk_right_gun_strap_4"}

	{sequence "lie_sleep_idle_1" {smooth 0.1}}
	{sequence "lie_sleep_idle_2" {smooth 0.1}}
	{sequence "idle_passive_squat_ground_gun_strap_sleep" {smooth 0.1}}

	; mission-only gamedesign idle animations end

;==================IDLE ANIMATIONS end ==============================

;================= STANDING UP ANIMATIONS begin ===========


;====================== FIRING ANIMATIONS end ==========================

;================= SQUATING ANIMATIONS begin ==============

;================== SQUATING ANIMATIONS end ==========================

;================= LYING DOWN ANIMATIONS begin ============

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
	

	

	{sequence "lie_reload_gun" 			{file "weapon\lie_reload_gun"}{speed 1.3} {smooth 0.5}}
	{sequence "lie_take_gun" 			{speed 0.25}}
	{sequence "lie_fire_gun" 			{file "weapon\anim_smg_lie_shoot_01.anm"}{speed 1}}
	{sequence "lie_holdback_gun"		{file "weapon\anim_rifle_lie_holdback_01.anm"}{speed 1}}
	{sequence "lie_holdback_bazooka" 	{file "lie_holdback_gun.anm"}}

	{sequence "lie_reload_mgun" 			{file "weapon\anim_mg_lie_reload_01.anm"}{speed 0.4}{smooth 0.1} {dynamicSpeed {0 10 0.6} {10 15 0.3} {25 27 0.2}}}
	{sequence "lie_reload_bazooka" 			{speed 1} {smooth 0}}
	{sequence "lie_reload_piat" 			{speed 1}}
	{sequence "lie_fire_bazooka" 			{speed 1}}
	{sequence "lie_take_mgun" 				{speed 0.25}}
	{sequence "lie_fire_mgun" 				{file "weapon\anim_mg_lie_shoot_01.anm"}}

	{sequence "lie_take_pistol" 				{file "weapon\anim_item_lie_take_01.anm"}	{speed 1}}
	{sequence "lie_fire_pistol"					{file "weapon\anim_pistol_lie_shoot_01.anm"}	{speed 1}}
	{sequence "lie_reload_pistol" 				{file "weapon\anim_pistol_lie_reload_01.anm"}	{speed 1}{dynamicSpeed {0 10 0.6} {10 15 0.3}}}
	{sequence "lie_holdback_pistol"				{file "weapon\anim_pistol_lie_holdback_01.anm"}	{speed 1}}
	{sequence "lie_take_small" 					{file "weapon\anim_item_lie_take_end_01.anm"}	{speed 1}{events {1 "pick_up_small"}}}
	{sequence "lie_put_small" 					{file "weapon\anim_item_lie_take_start_01.anm"}	{speed 1}}
	{sequence "lie_take_item_begin" 				{speed 0.7} {events {0 "pick_up_small"}}}
	{sequence "lie_take_item_end" 					{speed 0.7}}
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
	{smooth 0.025}
	{sequence "lie_from_squat_rifle" 	{file "lie_from_squat_gun.anm"} {speed 0.5}}
	{blend "pose_lie_rifle"				{pose "weapon\anim_smg_lie_shoot_01" begin}}
	{blend "pose_snipe_rifle" 			{pose "weapon\anim_smg_lie_shoot_01" begin}}
	{sequence "lie_take_rifle" 			{file "lie_take_gun.anm"} {speed 0.25}}
	{sequence "lie_reload_rifle"		{file "weapon\lie_reload_gun"}{speed 0.4} {dynamicSpeed {0 10 0.6} {10 15 0.3}}}
	{sequence "lie_fire_rifle"			{file "weapon\anim_rifle_lie_shoot_01.anm"}{speed 1}}
	{smooth 0.1}

;================== LYING DOWN ANIMATIONS end ==========================

;================= STEP ASIDE (STRAFE) begin ==============

	{blend "pose_step_aside_left"  		{pose "stand_step_aside_left" end}}
	{blend "pose_step_aside_right" 		{pose "stand_step_aside_right" end}}
	{blend "pose_step_aside_left_gun" 	{pose "stand_step_aside_left_gun" end}}
	{blend "pose_step_aside_right_gun"	{pose "stand_step_aside_right_gun" end}}

	{sequence "stand_step_aside_left"  		{speed 1.0}}
	{sequence "stand_step_aside_right" 		{speed 1.0}}
	{sequence "stand_step_aside_left_gun" 	{speed 1.0}}
	{sequence "stand_step_aside_right_gun"	{speed 1.0}}

;====================== STEP ASIDE (STRAFE) end =========================

;================= WALK AND RUN begin =====================

;====================== WALK AND RUN end =====================

;================= THROWING begin =========================


	{smooth 0.2}
	{sequence "stand_throw_1hand_begin" 			{file "throw\anim_stand_throw_begin.anm"}{speed 1}}
	{sequence "stand_throw_1hand_end" 				{file "throw\anim_stand_throw_end.anm"}{speed 1}}
	{sequence "stand_throw_small_begin" 			{file "throw\anim_stand_throw_begin.anm"}{speed 1}}
	{sequence "stand_throw_small_end" 				{file "throw\anim_stand_throw_end.anm"}{speed 1}}
	{sequence "stand_front_throw_knife_1_begin" 	{speed 0.9}}
	{sequence "stand_front_throw_knife_1_end"   	{speed 0.9}}
	{sequence "stand_back_throw_knife_begin" 		{speed 0.9}}
	{sequence "stand_back_throw_knife_end"   		{speed 0.9}}


;	{sequence "stand_throw-side_grenade_begin" {file "stand_throw-side_grenade_mp_begin.anm"} {smooth 0.5} {speed 0.8} {events {5 "arm_right"}}}
;	{sequence "stand_throw-side_grenade_end"   {file "stand_throw-side_grenade_end.anm"} {speed 0.8}}

	{sequence "stand_throw-side_grenade_begin" {file "throw\anim_stand_throw_begin.anm"}	{speed 1.5} {smooth 0.5} {events {5 "arm_right"}}}
	{sequence "stand_throw-side_grenade_end"   {file "throw\anim_stand_throw_end.anm"}		{speed 1.5}}
	
	{sequence "stand_throw_grenade_begin"      {file "stand_throw_grenade_begin.anm"}  {smooth 0.5} {speed 1.75} {events {50 "arm_right"}}}
	{sequence "stand_throw_grenade_end"        {file "stand_throw_grenade_end.anm"} {smooth 0.5} {speed 1.50}}
	{sequence "stand_throw_grenade_1_begin"    {file "stand_throw_grenade_1_mp_begin.anm"} {smooth 0.5} {speed 1.00} {events {5 "arm_right"}}}
	{sequence "stand_throw_grenade_1_end"      {file "stand_throw_grenade_1_end.anm"} {speed 1.50}}
	{sequence "stand_throw_grenade_2_begin"    {file "stand_throw_grenade_2_mp_begin.anm"} {smooth 0.5} {speed 1.00} {events {10 "arm_right"}}}
	{sequence "stand_throw_grenade_2_end"      {file "stand_throw_grenade_2_end.anm"} {speed 1.50}}

;================== THROWING end =====================


	{smooth 0.2}

;================== DEATH ANIMATIONS end =====================

;================= LOOK L/R begin =========================


;================== LOOK L/R end =====================

;================= SNIPE COVER begin ======================

;================== SNIPE COVER end =====================

;================= SWIM begin ======================

	{smooth 0.5}
	{sequence "swim_from_stand_gun" {movement} {speed 0.7} {smooth 0.3}}
	{sequence "swim_gun"	  {pinback} {speed 0.9}}
	{sequence "swim_spot_gun" {pinback}}
	{sequence "swim_from_stand_empty" {movement} {smooth 0.3}}
	{sequence "swim_on_the_spot_empty" {pinback}}
	{sequence "swim_empty" {pinback}}
	{sequence "swim_fast_empty" {pinback}}
	{smooth 0.2}

;================== SWIM end =====================

;================= MELEE begin =============================

;================== MELEE end =====================

;=============These are not the anims you are looking for===============
	{sequence "anim_that_yoinky_sploinky_01" 					{smooth 0.01}{speed 1}}
	{sequence "anim_that_yoinky_sploinky_02" 					{smooth 0.01}{speed 1}}
	{sequence "anim_that_yoinky_sploinky_03" 					{smooth 0.01}{speed 1}}
	{sequence "anim_that_yoinky_sploinky_04" 					{smooth 0.01}{speed 1}}
;=============These are not the anims you are looking for===============
