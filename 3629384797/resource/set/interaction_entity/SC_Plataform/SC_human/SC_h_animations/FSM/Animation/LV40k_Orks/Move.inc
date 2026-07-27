
(Define "SC_FSM_MOVE_LV40k_Orkboy_Stop_All"
	{Ani_stop "lv40k_ork-stand_rifle_sprint_up"}
	{Ani_Stop "lv40k_ork-stand_rifle_sprint_down"}
	
	{Ani_stop "lv40k_ork-stand_rifle_strafe_back_down"}
	{Ani_Stop "lv40k_ork-stand_rifle_strafe_back_up"}
	
	{Ani_stop "lv40k_ork-stand_rifle_strafe_right_down"}
	{Ani_Stop "lv40k_ork-stand_rifle_strafe_right_up"}
	
	{Ani_stop "lv40k_ork-stand_rifle_strafe_left_down"}
	{Ani_Stop "lv40k_ork-stand_rifle_strafe_left_up"}
	
	{Ani_stop "lv40k_ork-stand_rifle_walk_normal_down"}
	{Ani_Stop "lv40k_ork-stand_rifle_walk_normal_up"}
	
	{Ani_stop "walk_spot_mgun_down_1"}
	{Ani_Stop "walk_spot_mgun_up_1"}
	
	; ================================================
	 
	{Ani_stop "lv40k_ork-stand_loota_sprint_up"}
	{Ani_Stop "lv40k_ork-stand_loota_sprint_down"}
	
	{Ani_stop "lv40k_ork-stand_loota_strafe_back_down"}
	{Ani_Stop "lv40k_ork-stand_loota_strafe_back_up"}
	
	{Ani_stop "lv40k_ork-stand_loota_strafe_right_down"}
	{Ani_Stop "lv40k_ork-stand_loota_strafe_right_up"}
	
	{Ani_stop "lv40k_ork-stand_loota_strafe_left_down"}
	{Ani_Stop "lv40k_ork-stand_loota_strafe_left_up"}
	
	{Ani_stop "lv40k_ork-stand_loota_walk_slow_down"}
	{Ani_Stop "lv40k_ork-stand_loota_walk_slow_up"}
	
	{Ani_stop "lv40k_ork-stand_loota_walk_normal_down"}
	{Ani_Stop "lv40k_ork-stand_loota_walk_normal_up"}
)

(Define "SC_FSM_MOVE_LV40k_Orkboy_Events"
	; [...]
)

; =============================================================================================================
; // STRAFE 
; =============================================================================================================

(define "SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Back"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_strafe_back_down) 
			anm1(lv40k_ork-stand_loota_strafe_back_up)
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(1.8 loop)			
			pstol_anm()											pstol_anm1()
			rifle_anm(lv40k_ork-stand_rifle_strafe_back_down)	rifle_anm1(lv40k_ork-stand_rifle_strafe_back_up)
			mgun_anm(lv40k_ork-stand_rifle_strafe_back_down)	mgun_anm1(lv40k_ork-stand_rifle_strafe_back_up)
			bazooka_anm()										bazooka_anm1()
			unrmd_anm()											unrmd_anm1()
		)
	}
)
	
(define "SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Left"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.2 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_strafe_left_down) 
			anm1(lv40k_ork-stand_loota_strafe_left_up)
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(1.2 loop)	
			pstol_anm()											pstol_anm1()
			rifle_anm(lv40k_ork-stand_rifle_strafe_left_down)	rifle_anm1(lv40k_ork-stand_rifle_strafe_left_up)
			mgun_anm(lv40k_ork-stand_rifle_strafe_left_down)	mgun_anm1(lv40k_ork-stand_rifle_strafe_left_up)
			bazooka_anm()										bazooka_anm1()
			unrmd_anm()											unrmd_anm1()
		)
	}
)
	
(define "SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Right"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.2 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_strafe_right_down) 
			anm1(lv40k_ork-stand_loota_strafe_right_up)
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(1.2 loop)	
			pstol_anm()											pstol_anm1()
			rifle_anm(lv40k_ork-stand_rifle_strafe_right_down)	rifle_anm1(lv40k_ork-stand_rifle_strafe_right_up)
			mgun_anm(lv40k_ork-stand_rifle_strafe_right_down)	mgun_anm1(lv40k_ork-stand_rifle_strafe_right_up)
			bazooka_anm()										bazooka_anm1()
			unrmd_anm()											unrmd_anm1()	
		)
	}
)	

(define "SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Slow"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.25 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_walk_slow_down) 
			anm1(lv40k_ork-stand_loota_walk_slow_up)
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(2.25 loop)	
			pstol_anm()											pstol_anm1()
			rifle_anm(walk_spot_mgun_down_1_mask)				rifle_anm1(walk_spot_mgun_up_1_mask)
			mgun_anm(walk_spot_mgun_down_1_mask)				mgun_anm1(walk_spot_mgun_up_1_mask)
			bazooka_anm()										bazooka_anm1()
			unrmd_anm()											unrmd_anm1()
		)
	}
)

(define "SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Fast"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.15 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_walk_normal_down) 
			anm1(lv40k_ork-stand_loota_walk_normal_up)
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(1.15 loop)		
			pstol_anm()											pstol_anm1()
			rifle_anm(lv40k_ork-stand_rifle_walk_normal_down)	rifle_anm1(lv40k_ork-stand_rifle_walk_normal_up)
			mgun_anm(lv40k_ork-stand_rifle_walk_normal_down)	mgun_anm1(lv40k_ork-stand_rifle_walk_normal_up)
			bazooka_anm()										bazooka_anm1()
			unrmd_anm()											unrmd_anm1()
		)
	}
)
	
; =============================================================================================================
; // MOVE STATE
; =============================================================================================================

(define "SC_FSM_MOVE_LV40k_Orkboy_Play_S_Crawl"
;//	{if tagged "lv40k_human_tag_weapon_deffgun"
;//		("SC_H_Request_Define_Animation_Single"	anm_args(3.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
;//			anm(lv40k_ork-stand_loota_walk_slow_down) 
;//			anm1(lv40k_ork-stand_loota_walk_slow_up)
;//		)
;//	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(1.0 loop)			
			pstol_anm(crawl_gun_mask)						pstol_anm1()
			rifle_anm(crawl_gun_mask) 						rifle_anm1()
			mgun_anm(crawl_gun_mask)						mgun_anm1()
			bazooka_anm(crawl_gun_mask)						bazooka_anm1()
			unrmd_anm(crawl_mask)							unrmd_anm1()
		)
;//	}
)

(define "SC_FSM_MOVE_LV40k_Orkboy_Play_S_Slow"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(3.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_walk_slow_down) 
			anm1(lv40k_ork-stand_loota_walk_slow_up)
		)
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(3.0 loop)			
			pstol_anm(run_slow_down_mask)					pstol_anm1(run_slow_empty_up_mask)
			rifle_anm(run_slow_down_mask) 					rifle_anm1(run_slow_gun_up_mask)
			mgun_anm(run_slow_down_mask)					mgun_anm1(run_slow_gun_up_mask)
			bazooka_anm()									bazooka_anm1()
			unrmd_anm()										unrmd_anm1()
		)
	}
)
	
(define "SC_FSM_MOVE_LV40k_Orkboy_Play_S_Normal"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	
			anm(lv40k_ork-stand_loota_walk_normal_up) 
			anm1(lv40k_ork-stand_loota_walk_normal_down)
		)
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(2.0 loop)		
			pstol_anm(walk_normal_pistol_down_mask)			pstol_anm1(walk_normal_pistol_up_mask)
			rifle_anm(walk_normal_rifle_up_mask)			rifle_anm1(walk_normal_rifle_down_mask)
			mgun_anm(walk_normal_rifle_up_mask)				mgun_anm1(walk_normal_rifle_down_mask)
			bazooka_anm(run_down_mask)						bazooka_anm1(run_gun_up_mask)
			unrmd_anm()										unrmd_anm1()
		)
	}
)

(define "SC_FSM_MOVE_LV40k_Orkboy_Play_S_Spot"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(2.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	
			anm(lv40k_ork-stand_loota_walk_normal_up) 
			anm1(lv40k_ork-stand_loota_walk_normal_down)
		)
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(2.0 loop)		
			pstol_anm(walk_spot_pistol_down_mask)			pstol_anm1(walk_spot_pistol_up_mask)
			rifle_anm(walk_spot_mgun_down_mask)				rifle_anm1(walk_spot_mgun_up_mask)
			mgun_anm(walk_spot_mgun_down_mask)				mgun_anm1(walk_spot_mgun_up_mask)
			bazooka_anm()									bazooka_anm1()
			unrmd_anm()										unrmd_anm1()
		)
	}
)

(define "SC_FSM_MOVE_LV40k_Orkboy_Play_S_Jog"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_walk_normal_up) 
			anm1(lv40k_ork-stand_loota_walk_normal_down)
		)
	else
		("SC_H_Request_Define_Animation_State" 				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(1.8 loop)	
			pstol_anm(run_empty_down_mask)					pstol_anm1(run_empty_up_mask)
			rifle_anm(run_down_mask)						rifle_anm1(run_gun_up_mask)
			mgun_anm(run_down_mask)							mgun_anm1(run_gun_up_mask)
			bazooka_anm(run_down_mask)						bazooka_anm1(run_gun_up_mask)
			unrmd_anm(run_empty_down_mask)					unrmd_anm1(run_empty_up_mask)
		)
	}
)
	
	
(define "SC_FSM_MOVE_LV40k_Orkboy_Play_S_Fast"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(%0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_sprint_down) 
			anm1(lv40k_ork-stand_loota_sprint_up)
		)
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(%0 loop)		
			pstol_anm(run_fast_down_mask)					pstol_anm1(run_fast_empty_up_mask)
			rifle_anm(lv40k_ork-stand_rifle_sprint_down) 	rifle_anm1(lv40k_ork-stand_rifle_sprint_up)
			mgun_anm(lv40k_ork-stand_rifle_sprint_down)		mgun_anm1(lv40k_ork-stand_rifle_sprint_up)
			bazooka_anm()									bazooka_anm1()
			unrmd_anm(run_fast_down_mask)					unrmd_anm1(run_fast_strap_up_mask)
		)
	}
)