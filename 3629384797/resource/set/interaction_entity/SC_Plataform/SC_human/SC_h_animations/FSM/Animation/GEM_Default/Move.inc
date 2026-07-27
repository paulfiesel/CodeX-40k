
(Define "SC_FSM_MOVE_GEM_Default_Stop_All"
	{Ani_Stop "walk_spot_gun_down_mask"}
	{Ani_Stop "walk_spot_gun_up_mask"}
	{Ani_Stop "walk_spot_gun_up_1_mask"}
	{Ani_Stop "walk_spot_gun_down_1_mask"}
	{Ani_Stop "walk_spot_gun_up_2_mask"}
	{Ani_Stop "walk_spot_gun_down_2_mask"}
	{Ani_Stop "walk_spot_gun_belt_down_mask"}
	{Ani_Stop "walk_spot_gun_belt_up_mask"}
	{Ani_Stop "walk_spot_gun_half-mast_down_mask"}
	{Ani_Stop "walk_spot_gun_half-mast_up_mask"}
	{Ani_Stop "walk_spot_mgun_down_mask"}
	{Ani_Stop "walk_spot_mgun_up_mask"}
	{Ani_Stop "walk_spot_mgun_down_1_mask"}
	{Ani_Stop "walk_spot_mgun_up_1_mask"}
	{Ani_Stop "walk_spot_pistol_down_mask"}
	{Ani_Stop "walk_spot_pistol_up_mask"}

	{Ani_Stop "run_spot_gun_up_mask"}
	{Ani_Stop "run_spot_gun_down_mask"}
	
	{Ani_Stop "run_slow_gun_up_mask"}
	{Ani_Stop "run_slow_down_mask"}

	{Ani_Stop "run_back_spot_gun_down_mask"}
	{Ani_Stop "run_back_spot_gun_up_mask"}
	{Ani_Stop "run_spot_back-strafe_gun_down_mask"}
	{Ani_Stop "run_spot_back-strafe_gun_up_mask"}
	{Ani_Stop "run_spot_left-strafe_gun_down_mask"}
	{Ani_Stop "run_spot_left-strafe_gun_up_mask"}

	{Ani_Stop "walk_normal_rifle_down_mask"}
	{Ani_Stop "walk_normal_rifle_up_mask"}
	{Ani_Stop "run_bow_gun_tocover_down_mask"}
	{Ani_Stop "run_bow_gun_tocover_up_mask"}
	
	{Ani_Stop "run_empty_up_mask"}
	{Ani_Stop "run_strap_up_mask"}
	
	{ani_stop "run_slow_empty_down_mask"}				
	{Ani_Stop "run_slow_empty_up_mask"}
	
	{Ani_Stop "run_bow_tocover_down_mask"}
	{Ani_Stop "run_bow_tocover_up_mask"}
	
	{Ani_Stop "walk_normal_pistol_down_mask"}
	{Ani_Stop "walk_normal_pistol_up_mask"}
	
	{Ani_Stop "run_empty_down_mask"}
	
	{Ani_Stop "walk_normal_mgun_up_mask"}
	
	{Ani_stop "crawl_mask"}
	{Ani_Stop "crawl_gun_mask"}
	
	{Ani_Stop "run_fast_down_mask"}
	{Ani_stop "run_fast_empty_up_mask"}
	{Ani_Stop "run_fast_strap_up_mask"}
	
	{Ani_Stop "run_fast_up_gun_mask"}
	{Ani_Stop "run_fast_up_gun_mask_1"}
	{Ani_Stop "run_fast_up_gun_mask_2"}
	
	{Ani_Stop "run_fast_down_gun_mask"}
	{Ani_Stop "run_fast_down_gun_mask_1"}
	{Ani_Stop "run_fast_down_gun_mask_2"}
	
	{Ani_Stop "run_bazooka_up_mask"}
	{Ani_Stop "run_bow_bazooka_up_mask"}
	{Ani_Stop "run_bow_bazooka_down_mask"}
	{Ani_Stop "run_fast_bazooka_rhand_up_mask"}
	
	{Ani_Stop "run_down_mask"}
	{Ani_Stop "run_down_mask_2"}
	{Ani_Stop "run_down_mask_3"}
	{Ani_Stop "run_down_mask_4"}
	{Ani_Stop "run_down_mask_5"}
	{Ani_Stop "run_gun_up_mask"}
	{Ani_Stop "run_gun_up_mask_2"}
	{Ani_Stop "run_gun_up_mask_3"}
	{Ani_Stop "run_gun_up_mask_4"}
	{Ani_Stop "run_gun_up_mask_5"}
		
	; // TEST
	{Ani_Stop "lv40k_scout-stand_bolter_walk_normal_down"}
	{Ani_Stop "lv40k_scout-stand_bolter_walk_normal_up"}
)

(Define "SC_FSM_MOVE_GEM_Default_Events"
	; [...]
)

; =============================================================================================================
; // STRAFE 
; =============================================================================================================

(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Back"
	("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(1.4 loop)			
		pstol_anm()										pstol_anm1()
		rifle_anm(run_back_spot_gun_down_mask)			rifle_anm1(run_back_spot_gun_up_mask)
		mgun_anm(run_back_spot_gun_down_mask)			mgun_anm1(run_back_spot_gun_up_mask)
		bazooka_anm(run_back_spot_gun_down_mask)		bazooka_anm1(run_back_spot_gun_up_mask)
		unrmd_anm()										unrmd_anm1()
	)
)
	
(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Left"
	("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(1.2 loop)	
		pstol_anm()										pstol_anm1()
		rifle_anm(run_spot_left-strafe_gun_down_mask)	rifle_anm1(run_spot_left-strafe_gun_up_mask)
		mgun_anm(run_spot_left-strafe_gun_down_mask)	mgun_anm1(run_spot_left-strafe_gun_up_mask)
		bazooka_anm(run_spot_left-strafe_gun_down_mask)	bazooka_anm1(run_spot_left-strafe_gun_up_mask)
		unrmd_anm()										unrmd_anm1()
	)
)
	
(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Right"
	("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(1.2 loop)	
		pstol_anm()										pstol_anm1()
		rifle_anm(run_spot_back-strafe_gun_down_mask)	rifle_anm1(run_spot_back-strafe_gun_up_mask)
		mgun_anm(run_spot_back-strafe_gun_down_mask)	mgun_anm1(run_spot_back-strafe_gun_up_mask)
		bazooka_anm(run_spot_back-strafe_gun_down_mask)	bazooka_anm1(run_spot_back-strafe_gun_up_mask)
		unrmd_anm()										unrmd_anm1()	
	)
)	

(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Slow"
	("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(2.25 loop)	
		pstol_anm()										pstol_anm1()
		rifle_anm(walk_spot_gun_down_mask)				rifle_anm1(walk_spot_gun_up_mask)
		mgun_anm(walk_spot_gun_down_mask)				mgun_anm1(walk_spot_gun_up_mask)
		bazooka_anm(walk_spot_gun_down_mask)			bazooka_anm1(walk_spot_gun_up_mask)
		unrmd_anm()										unrmd_anm1()
	)
)

(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Fast"
	("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(1.15 loop)		
		pstol_anm()										pstol_anm1()
		rifle_anm(run_spot_gun_down_mask)				rifle_anm1(run_spot_gun_up_mask)
		mgun_anm(run_spot_gun_down_mask)				mgun_anm1(run_spot_gun_up_mask)
		bazooka_anm(run_spot_gun_down_mask)				bazooka_anm1(run_spot_gun_up_mask)
		unrmd_anm()										unrmd_anm1()
	)
)
	
; =============================================================================================================
; // MOVE STATE
; =============================================================================================================

(define "SC_FSM_MOVE_GEM_Default_Play_S_Crawl"
	("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(1.0 loop)			
		pstol_anm(crawl_gun_mask)						pstol_anm1()
		rifle_anm(crawl_gun_mask) 						rifle_anm1()
		mgun_anm(crawl_gun_mask)						mgun_anm1()
		bazooka_anm(crawl_gun_mask)						bazooka_anm1()
		unrmd_anm(crawl_mask)							unrmd_anm1()
	)
)

(define "SC_FSM_MOVE_GEM_Default_Play_S_Slow"
	("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(3.0 loop)		
		pstol_anm(run_slow_down_mask)					pstol_anm1(run_slow_empty_up_mask)
		rifle_anm(run_slow_down_mask) 					rifle_anm1(run_slow_gun_up_mask)
		mgun_anm(run_slow_down_mask)					mgun_anm1(run_slow_gun_up_mask)
		bazooka_anm(run_slow_down_mask)					bazooka_anm1(run_slow_gun_up_mask)
		unrmd_anm(run_slow_down_mask)					unrmd_anm1(run_slow_empty_up_mask)
	)
)
	
(define "SC_FSM_MOVE_GEM_Default_Play_S_Spot"
	("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(2.0 loop)		
		pstol_anm(walk_spot_pistol_down_mask)			pstol_anm1(walk_spot_pistol_up_mask)
		rifle_anm(walk_spot_gun_down_1_mask) 			rifle_anm1(walk_spot_gun_up_1_mask)
		mgun_anm(walk_spot_mgun_down_mask)				mgun_anm1(walk_spot_mgun_up_mask)
		bazooka_anm(run_down_mask)						bazooka_anm1(run_gun_up_mask)
		unrmd_anm(walk_spot_pistol_down_mask)			unrmd_anm1(run_slow_empty_up_mask)
	)
)
	
(define "SC_FSM_MOVE_GEM_Default_Play_S_Normal"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_servitor"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_skeleton_lv40k_servitor")		
			anm(run_empty_down_mask)								anm1(run_empty_up_mask) 
		)
	else
		("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(2.0 loop)		
			pstol_anm(walk_normal_pistol_down_mask)			pstol_anm1(walk_normal_pistol_up_mask)
			rifle_anm(walk_normal_rifle_down_mask)			rifle_anm1(walk_normal_rifle_up_mask)
			mgun_anm(walk_normal_rifle_down_mask)			mgun_anm1(walk_normal_rifle_up_mask)
			bazooka_anm(run_down_mask)						bazooka_anm1(run_gun_up_mask)
			unrmd_anm()										unrmd_anm1()
		)
	}
)

(define "SC_FSM_MOVE_GEM_Default_Play_S_Jog"
	{if "sc_human_flag_anm_instance_rifle"
		{if rand 0.2	("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(1.8 loop) anm(run_down_mask)		anm1(run_gun_up_mask))
		else rand 0.2 	("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(1.8 loop) anm(run_down_mask_2)	anm1(run_gun_up_mask_2))
		else rand 0.2	("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(1.8 loop) anm(run_down_mask_3)	anm1(run_gun_up_mask_3))
		else rand 0.2 	("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(1.8 loop) anm(run_down_mask_4)	anm1(run_gun_up_mask_4))
		else			("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(1.8 loop) anm(run_down_mask_5)	anm1(run_gun_up_mask_5))
		}
	else
	
		; // 40k TEST
		{if tagged "sc_h_skin_tag_skeleton_lv40k_scout"
			("SC_H_Request_Define_Animation_State_MOVE" 				chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(1.8 loop)	
				pstol_anm(run_empty_down_mask)							pstol_anm1(run_empty_up_mask)
				rifle_anm(lv40k_scout-stand_bolter_walk_normal_down)	rifle_anm1(lv40k_scout-stand_bolter_walk_normal_up)
				mgun_anm(lv40k_scout-stand_bolter_walk_normal_down)		mgun_anm1(lv40k_scout-stand_bolter_walk_normal_up)
				bazooka_anm(run_down_mask)								bazooka_anm1(run_gun_up_mask)
				unrmd_anm(run_empty_down_mask)							unrmd_anm1(run_empty_up_mask)
			)
		else tagged "sc_h_skin_tag_skeleton_lv40k_servitor"
			("SC_H_Request_Define_Animation_Single"	anm_args(1.8 loop)	chk(tagged "sc_h_skin_tag_skeleton_lv40k_servitor")		
				anm(run_empty_down_mask)								anm1(run_empty_up_mask) 
			)
		else
			("SC_H_Request_Define_Animation_State_MOVE" 				chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(1.8 loop)	
				pstol_anm(run_empty_down_mask)							pstol_anm1(run_empty_up_mask)
				rifle_anm()												rifle_anm1()
				mgun_anm(run_down_mask)									mgun_anm1(run_gun_up_mask)
				bazooka_anm(run_down_mask)								bazooka_anm1(run_gun_up_mask)
				unrmd_anm(run_empty_down_mask)							unrmd_anm1(run_empty_up_mask)
			)
		}
	}
)
	
	
(define "SC_FSM_MOVE_GEM_Default_Play_S_Fast"
	{if "sc_human_flag_anm_instance_rifle"
		{if rand 0.33	("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(%0 loop) anm(run_fast_down_gun_mask)		anm1(run_fast_up_gun_mask))
		else rand 0.33 	("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(%0 loop) anm(run_fast_down_gun_mask_1)	anm1(run_fast_up_gun_mask_1))
		else			("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(%0 loop) anm(run_fast_down_gun_mask_2)	anm1(run_fast_up_gun_mask_2))
		}
	else "sc_human_flag_anm_instance_mgun"
		{if rand 0.33	("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(%0 loop) anm(run_fast_down_gun_mask)		anm1(run_fast_up_gun_mask))
		else rand 0.33 	("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(%0 loop) anm(run_fast_down_gun_mask_1)	anm1(run_fast_up_gun_mask_1))
		else			("SC_H_Request_Define_Animation_Single_MOVE"	chk(tagged "sc_h_skin_tag_fsm_anim_default") anm_args(%0 loop) anm(run_fast_down_gun_mask_2)	anm1(run_fast_up_gun_mask_2))
		}
	else
		("SC_H_Request_Define_Animation_State_MOVE"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(%0 loop)		
			pstol_anm(run_fast_down_mask)					pstol_anm1(run_fast_empty_up_mask)
			rifle_anm() 									rifle_anm1()
			mgun_anm()										mgun_anm1()
			bazooka_anm(run_fast_down_mask)					bazooka_anm1(run_fast_up_gun_mask)
			unrmd_anm(run_fast_down_mask)					unrmd_anm1(run_fast_strap_up_mask)
		)
	}
)