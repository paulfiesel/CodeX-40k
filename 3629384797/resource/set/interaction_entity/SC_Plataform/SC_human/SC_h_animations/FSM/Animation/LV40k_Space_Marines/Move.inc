
(Define "SC_FSM_MOVE_LV40k_Space_Marine_Stop_All"
	{Ani_Stop "lv40k_sms-stand_bolter_sprint_down"}
	{Ani_Stop "lv40k_sms-stand_bolter_sprint_up"}
	
	{Ani_Stop "lv40k_sms-stand_bolter_strafe_right_up"}
	{Ani_Stop "lv40k_sms-stand_bolter_strafe_left_up"}
	{Ani_Stop "lv40k_sms-stand_bolter_strafe_back_up"}
	{Ani_Stop "lv40k_sms-stand_bolter_strafe_right_down"}
	{Ani_Stop "lv40k_sms-stand_bolter_strafe_left_down"}
	{Ani_Stop "lv40k_sms-stand_bolter_strafe_back_down"}
	
	{Ani_Stop "lv40k_sms-stand_bolter_walk_normal_aim_up"}
	{Ani_Stop "lv40k_sms-stand_bolter_walk_normal_down"}
	{Ani_Stop "lv40k_sms-stand_bolter_walk_normal_up"}
	{Ani_Stop "lv40k_sms-stand_bolter_walk_slow_down"}
	{Ani_Stop "lv40k_sms-stand_bolter_walk_slow_up"}
	
	; --------------------------------------------------------- ;
	
	{Ani_Stop "lv40k_sms-stand_lascannon_sprint_down"}
	{Ani_Stop "lv40k_sms-stand_lascannon_sprint_up"}
	{Ani_Stop "lv40k_sms-stand_lascannon_walk_normal_down"}
	{Ani_Stop "lv40k_sms-stand_lascannon_walk_normal_up"}
	{Ani_Stop "lv40k_sms-stand_lascannon_walk_slow_down"}
	{Ani_Stop "lv40k_sms-stand_lascannon_walk_slow_up"}
	
	; --------------------------------------------------------- ;
	
	{Ani_Stop "lv40k_sms-stand_plasmacannon_sprint_down"}
	{Ani_Stop "lv40k_sms-stand_plasmacannon_sprint_up"}
	{Ani_Stop "lv40k_sms-stand_plasmacannon_walk_normal_aim_up"}
	{Ani_Stop "lv40k_sms-stand_plasmacannon_walk_normal_up"}
	{Ani_Stop "lv40k_sms-stand_plasmacannon_walk_normal_down"}
	{Ani_Stop "lv40k_sms-stand_plasmacannon_walk_slow_down"}
	{Ani_Stop "lv40k_sms-stand_plasmacannon_walk_slow_up"}
	
	; --------------------------------------------------------- ;
	
	{Ani_Stop "lv40k_sms-stand_missile_sprint_down"}
	{Ani_Stop "lv40k_sms-stand_missile_sprint_up"}
	{Ani_Stop "lv40k_sms-stand_missile_walk_normal_down"}
	{Ani_Stop "lv40k_sms-stand_missile_walk_normal_up"}
	{Ani_Stop "lv40k_sms-stand_missile_walk_slow_down"}
	{Ani_Stop "lv40k_sms-stand_missile_walk_slow_up"}
	
	; --------------------------------------------------------- ;
	
	{Ani_Stop "lv40k_sms-stand_hammer_sprint_down"}
	{Ani_Stop "lv40k_sms-stand_hammer_sprint_up"}
	{Ani_Stop "lv40k_sms-stand_hammer_walk_normal_down"}
	{Ani_Stop "lv40k_sms-stand_hammer_walk_normal_up"}
	
	; --------------------------------------------------------- ;
	
	{Ani_Stop "lv40k_sms-stand_hb_sprint_down"}
	{Ani_Stop "lv40k_sms-stand_hb_sprint_up"}
	
	{Ani_Stop "lv40k_sms-stand_hb_strafe_right_up"}
	{Ani_Stop "lv40k_sms-stand_hb_strafe_left_up"}
	{Ani_Stop "lv40k_sms-stand_hb_strafe_back_up"}
	{Ani_Stop "lv40k_sms-stand_hb_strafe_right_down"}
	{Ani_Stop "lv40k_sms-stand_hb_strafe_left_down"}
	{Ani_Stop "lv40k_sms-stand_hb_strafe_back_down"}
	
	{Ani_Stop "lv40k_sms-stand_hb_walk_normal_aim_up"}
	{Ani_Stop "lv40k_sms-stand_hb_walk_normal_down"}
	{Ani_Stop "lv40k_sms-stand_hb_walk_normal_up"}
	{Ani_Stop "lv40k_sms-stand_hb_walk_slow_down"}
	{Ani_Stop "lv40k_sms-stand_hb_walk_slow_up"}
	
	; --------------------------------------------------------- ;
	
	{Ani_Stop "lv40k_sms-stand_pistol_sprint_down"}
	{Ani_Stop "lv40k_sms-stand_pistol_sprint_up"}
	
	{Ani_Stop "lv40k_sms-stand_pistol_walk_normal_aim_down"}
	{Ani_Stop "lv40k_sms-stand_pistol_walk_normal_aim_up"}
	{Ani_Stop "lv40k_sms-stand_pistol_walk_normal_down"}
	{Ani_Stop "lv40k_sms-stand_pistol_walk_normal_up"}
	{Ani_Stop "lv40k_sms-stand_pistol_walk_slow_down"}
	{Ani_Stop "lv40k_sms-stand_pistol_walk_slow_up"}
	
	{Ani_Stop "lv40k_sms-stand_librarian_walk_up"}
	{Ani_Stop "lv40k_sms-stand_librarian_walk_down"}
)

(Define "SC_FSM_MOVE_LV40k_Space_Marine_Events"
	; [...]
)

(Define "SC_FSM_MOVE_LV40k_Space_Marine_Footstep_Sounds"
	{if standing
		{if terrain_pp "water"
		else terrain_fx "shallow_water"
		else terrain_fx "snow"
			{if tagged "sc_h_skin_tag_fsm_anim_spacemarine" {start_sound "SC_Plataform/SC_fx/sc_stomp_s1/space_marines/snow"}}
		else terrain_fx "sand"
			{if tagged "sc_h_skin_tag_fsm_anim_spacemarine" {start_sound "SC_Plataform/SC_fx/sc_stomp_s1/space_marines/sand"}}
		else terrain_fx "ground"
			{if tagged "sc_h_skin_tag_fsm_anim_spacemarine" {start_sound "SC_Plataform/SC_fx/sc_stomp_s1/space_marines/sand"}}
		else terrain_fx "grass"
			{if tagged "sc_h_skin_tag_fsm_anim_spacemarine" {start_sound "SC_Plataform/SC_fx/sc_stomp_s1/space_marines/grass"}}
		else
			{if tagged "sc_h_skin_tag_fsm_anim_spacemarine" {start_sound "SC_Plataform/SC_fx/sc_stomp_s1/space_marines/road"}}
		}
	else
		{if tagged "sc_h_skin_tag_fsm_anim_spacemarine" {start_sound "SC_Plataform/SC_fx/sc_stomp_s1/space_marines/crawl"}}
	}
)

{on animation_event "leg_left"	("SC_FSM_MOVE_LV40k_Space_Marine_Footstep_Sounds")}
{on animation_event "leg_right"	("SC_FSM_MOVE_LV40k_Space_Marine_Footstep_Sounds")}

; =============================================================================================================
; // STRAFE 
; =============================================================================================================

(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Back"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(4.2 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")
			anm(lv40k_sms-stand_hb_strafe_back_down) 
			anm1(lv40k_sms-stand_hb_strafe_back_up)
		)
	else
		("SC_H_Request_Define_Animation_State"						chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(2.0 loop)			
			pstol_anm()												pstol_anm1()
			rifle_anm(lv40k_sms-stand_bolter_strafe_back_down)		rifle_anm1(lv40k_sms-stand_bolter_strafe_back_up)
			mgun_anm(lv40k_sms-stand_bolter_strafe_back_down)		mgun_anm1(lv40k_sms-stand_bolter_strafe_back_up)
			bazooka_anm(run_back_spot_gun_down_mask)				bazooka_anm1(run_back_spot_gun_up_mask)
			unrmd_anm()												unrmd_anm1()
		)
	}
)
	
(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Left"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")
			anm(lv40k_sms-stand_hb_strafe_left_down) 
			anm1(lv40k_sms-stand_hb_strafe_left_up)
		)
	else
		("SC_H_Request_Define_Animation_State"						chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(1.8 loop)	
			pstol_anm()												pstol_anm1()
			rifle_anm(lv40k_sms-stand_bolter_strafe_left_down)		rifle_anm1(lv40k_sms-stand_bolter_strafe_left_up)
			mgun_anm(lv40k_sms-stand_bolter_strafe_left_down)		mgun_anm1(lv40k_sms-stand_bolter_strafe_left_up)
			bazooka_anm(run_spot_left-strafe_gun_down_mask)			bazooka_anm1(run_spot_left-strafe_gun_up_mask)
			unrmd_anm()												unrmd_anm1()
		)
	}
)
	
(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Right"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hb_strafe_right_down) 
			anm1(lv40k_sms-stand_hb_strafe_right_up)
		)
	else
		("SC_H_Request_Define_Animation_State"						chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(1.8 loop)	
			pstol_anm()												pstol_anm1()
			rifle_anm(lv40k_sms-stand_bolter_strafe_right_down)		rifle_anm1(lv40k_sms-stand_bolter_strafe_right_up)
			mgun_anm(lv40k_sms-stand_bolter_strafe_right_down)		mgun_anm1(lv40k_sms-stand_bolter_strafe_right_up)
			bazooka_anm(run_spot_back-strafe_gun_down_mask)			bazooka_anm1(run_spot_back-strafe_gun_up_mask)
			unrmd_anm()												unrmd_anm1()
		)
	}
)	

(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Slow"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.1 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hb_walk_slow_up) 
			anm1(lv40k_sms-stand_hb_walk_slow_down)
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(2.25 loop)	
			pstol_anm()											pstol_anm1()
			rifle_anm(walk_spot_gun_down_mask)					rifle_anm1(walk_spot_gun_up_mask)
			mgun_anm(walk_spot_gun_down_mask)					mgun_anm1(walk_spot_gun_up_mask)
			bazooka_anm(walk_spot_gun_down_mask)				bazooka_anm1(walk_spot_gun_up_mask)
			unrmd_anm()											unrmd_anm1()
		)
	}
)

(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Fast"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.6 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hb_walk_normal_down) 
			anm1(lv40k_sms-stand_hb_walk_normal_up)
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(1.15 loop)		
			pstol_anm()											pstol_anm1()
			rifle_anm(run_spot_gun_down_mask)					rifle_anm1(run_spot_gun_up_mask)
			mgun_anm(run_spot_gun_down_mask)					mgun_anm1(run_spot_gun_up_mask)
			bazooka_anm(run_spot_gun_down_mask)					bazooka_anm1(run_spot_gun_up_mask)
			unrmd_anm()											unrmd_anm1()
		)
	}
)
	
; =============================================================================================================
; // MOVE STATE
; =============================================================================================================

(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Crawl"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(1.0 loop)			
		pstol_anm(crawl_gun_mask)						pstol_anm1()
		rifle_anm(crawl_gun_mask) 						rifle_anm1()
		mgun_anm(crawl_gun_mask)						mgun_anm1()
		bazooka_anm(crawl_gun_mask)						bazooka_anm1()
		unrmd_anm(crawl_mask)							unrmd_anm1()
	)
)

(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Slow"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.25 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hb_walk_slow_down) 
			anm1(lv40k_sms-stand_hb_walk_slow_up)
		)
	else tagged "lv40k_human_tag_weapon_lascannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_lascannon_walk_slow_down) 	
			anm1(lv40k_sms-stand_lascannon_walk_slow_up) 
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_walk_slow_down) 	
			anm1(lv40k_sms-stand_plasmacannon_walk_slow_up) 
		)
	else tagged "lv40k_human_tag_weapon_multi_melta"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_walk_slow_down) 
			anm1(lv40k_sms-stand_plasmacannon_walk_slow_up) 
		)
	else
		("SC_H_Request_Define_Animation_State"						chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(2.5 loop)		
			pstol_anm(run_slow_down_mask)							pstol_anm1(run_slow_empty_up_mask)
			rifle_anm(lv40k_sms-stand_bolter_walk_slow_down)		rifle_anm1(lv40k_sms-stand_bolter_walk_slow_up)
			mgun_anm(lv40k_sms-stand_bolter_walk_slow_down)			mgun_anm1(lv40k_sms-stand_bolter_walk_slow_up)
			bazooka_anm(lv40k_sms-stand_missile_walk_slow_up)		bazooka_anm1(lv40k_sms-stand_missile_walk_slow_down)
			unrmd_anm()												unrmd_anm1()
		)
	}
)
	
(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Normal"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hb_walk_normal_up) 
			anm1(lv40k_sms-stand_hb_walk_normal_down)
		)
	else tagged "lv40k_human_tag_weapon_librarian"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_librarian_walk_down) 	
			anm1(lv40k_sms-stand_librarian_walk_up) 
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_walk_normal_down) 	
			anm1(lv40k_sms-stand_plasmacannon_walk_normal_aim_up) 
		)
	else tagged "lv40k_human_tag_weapon_multi_melta"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_walk_normal_down) 
			anm1(lv40k_sms-stand_plasmacannon_walk_normal_aim_up) 
		)
	else tagged "lv40k_human_tag_weapon_thunderhammer"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hammer_walk_normal_down) 
			anm1(lv40k_sms-stand_hammer_walk_normal_up) 
		)
	else tagged "sc_human_tag_has_melee_weapon"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_pistol_walk_normal_up) 
			anm1(lv40k_sms-stand_pistol_walk_normal_down)
		)
	else
		("SC_H_Request_Define_Animation_State"						chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(2.0 loop)		
			pstol_anm(lv40k_sms-stand_pistol_walk_normal_aim_up)	pstol_anm1(lv40k_sms-stand_pistol_walk_normal_aim_down)
			rifle_anm(lv40k_sms-stand_bolter_walk_normal_aim_up)	rifle_anm1(lv40k_sms-stand_bolter_walk_normal_down)
			mgun_anm(lv40k_sms-stand_bolter_walk_normal_aim_up)		mgun_anm1(lv40k_sms-stand_bolter_walk_normal_down)
			bazooka_anm(lv40k_sms-stand_missile_walk_normal_up)		bazooka_anm1(lv40k_sms-stand_missile_walk_normal_down)
			unrmd_anm()												unrmd_anm1()
		)
	}
)

(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Spot"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(0.85 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hb_walk_normal_up) 
			anm1(lv40k_sms-stand_hb_walk_normal_down)
		)
	else
		("SC_H_Request_Define_Animation_State"						chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(2.0 loop)		
			pstol_anm(walk_spot_pistol_down_mask)					pstol_anm1(walk_spot_pistol_up_mask)
			rifle_anm(walk_spot_gun_down_1_mask) 					rifle_anm1(walk_spot_gun_up_1_mask)
			mgun_anm(walk_spot_mgun_down_mask)						mgun_anm1(walk_spot_mgun_up_mask)
			bazooka_anm(lv40k_sms-stand_missile_walk_normal_up)		bazooka_anm1(lv40k_sms-stand_missile_walk_normal_down)
			unrmd_anm()												unrmd_anm1()
		)
	}
)
	
(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Jog"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hb_walk_normal_up) 
			anm1(lv40k_sms-stand_hb_walk_normal_down)
		)
	else tagged "lv40k_human_tag_weapon_lascannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_lascannon_walk_normal_down) 	
			anm1(lv40k_sms-stand_lascannon_walk_normal_up) 
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_walk_normal_down) 	
			anm1(lv40k_sms-stand_plasmacannon_walk_normal_up) 
		)
	else tagged "lv40k_human_tag_weapon_multi_melta"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_walk_normal_down) 
			anm1(lv40k_sms-stand_plasmacannon_walk_normal_up) 
		)
	else tagged "lv40k_human_tag_weapon_thunderhammer"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hammer_walk_normal_down) 
			anm1(lv40k_sms-stand_hammer_walk_normal_up) 
		)
	else tagged "lv40k_human_tag_weapon_librarian"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_librarian_walk_down) 	
			anm1(lv40k_sms-stand_librarian_walk_up) 
		)
	else tagged "sc_human_tag_has_melee_weapon"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_pistol_walk_normal_up) 
			anm1(lv40k_sms-stand_pistol_walk_normal_down)
		)
	else	
		("SC_H_Request_Define_Animation_State" 						chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(1.8 loop)		
			pstol_anm(lv40k_sms-stand_pistol_walk_normal_up)		pstol_anm1(lv40k_sms-stand_pistol_walk_normal_down)
			rifle_anm(lv40k_sms-stand_bolter_walk_normal_up)		rifle_anm1(lv40k_sms-stand_bolter_walk_normal_down)
			mgun_anm(lv40k_sms-stand_bolter_walk_normal_up)			mgun_anm1(lv40k_sms-stand_bolter_walk_normal_down)
			bazooka_anm(lv40k_sms-stand_missile_walk_normal_up)		bazooka_anm1(lv40k_sms-stand_missile_walk_normal_down)
			unrmd_anm(lv40k_sms-stand_pistol_walk_normal_up)		unrmd_anm1(lv40k_sms-stand_pistol_walk_normal_down)
		)
	}
)
	
	
(define "SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Fast"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(%0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hb_sprint_down) 
			anm1(lv40k_sms-stand_hb_sprint_up)
		)
	else tagged "lv40k_human_tag_weapon_lascannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(%0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_lascannon_sprint_down) 	
			anm1(lv40k_sms-stand_lascannon_sprint_up) 
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(%0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_sprint_down) 	
			anm1(lv40k_sms-stand_plasmacannon_sprint_up) 
		)
	else tagged "lv40k_human_tag_weapon_multi_melta"
		("SC_H_Request_Define_Animation_Single"	anm_args(%0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_sprint_down) 
			anm1(lv40k_sms-stand_plasmacannon_sprint_up) 
		)
	else tagged "lv40k_human_tag_weapon_thunderhammer"
		("SC_H_Request_Define_Animation_Single"	anm_args(%0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hammer_sprint_down) 
			anm1(lv40k_sms-stand_hammer_sprint_up) 
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(%0 loop)		
			pstol_anm(lv40k_sms-stand_pistol_sprint_down)		pstol_anm1(lv40k_sms-stand_pistol_sprint_up)
			rifle_anm(lv40k_sms-stand_bolter_sprint_down)		rifle_anm1(lv40k_sms-stand_bolter_sprint_up)
			mgun_anm(lv40k_sms-stand_bolter_sprint_down)		mgun_anm1(lv40k_sms-stand_bolter_sprint_up)
			bazooka_anm(lv40k_sms-stand_missile_sprint_down)	bazooka_anm1(lv40k_sms-stand_missile_sprint_up)
			unrmd_anm(run_fast_down_mask)						unrmd_anm1(run_fast_strap_up_mask)
		)
	}
)