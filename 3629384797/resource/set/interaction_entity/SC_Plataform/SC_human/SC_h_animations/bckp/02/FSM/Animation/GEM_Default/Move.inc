
(Define "SC_FSM_MOVE_GEM_Default_Stop_All"
	{Ani_Stop "walk_spot_gun_up_mask"}
	{Ani_Stop "walk_spot_gun_down_mask"}
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
	{Ani_Stop "run_down_mask"}
	{Ani_Stop "run_gun_up_mask"}
	
	{Ani_Stop "run_bow_tocover_down_mask"}
	{Ani_Stop "run_bow_tocover_up_mask"}
	
	{Ani_Stop "run_empty_up"}
	{Ani_Stop "walk_normal_pistol_down_mask"}
	{Ani_Stop "walk_normal_pistol_up_mask"}
	
	{Ani_Stop "walk_normal_mgun_up_mask"}
	
	{Ani_Stop "run_fast_down_mask"}
	{Ani_stop "run_fast_empty_up_mask"}
	{Ani_Stop "run_fast_strap_up_mask"}
)

(Define "SC_FSM_MOVE_GEM_Default_Events"
	; [...]
)

; =============================================================================================================
; // STRAFE 
; =============================================================================================================

(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Back"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(1.8 loop)			
		pstol_anm()										pstol_anm1()
		rifle_anm(run_back_spot_gun_down_mask)			rifle_anm1(run_back_spot_gun_up_mask)
		mgun_anm(run_back_spot_gun_down_mask)			mgun_anm1(run_back_spot_gun_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)
	
(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Left"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(1.2 loop)	
		pstol_anm()										pstol_anm1()
		rifle_anm(run_spot_left-strafe_gun_down_mask)	rifle_anm1(run_spot_left-strafe_gun_up_mask)
		mgun_anm(run_spot_left-strafe_gun_down_mask)	mgun_anm1(run_spot_left-strafe_gun_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)
	
(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Right"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(1.2 loop)	
		pstol_anm()										pstol_anm1()
		rifle_anm(run_spot_back-strafe_gun_down_mask)	rifle_anm1(run_spot_back-strafe_gun_up_mask)
		mgun_anm(run_spot_back-strafe_gun_down_mask)	mgun_anm1(run_spot_back-strafe_gun_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()	
	)
)	

(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Slow"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(2.25 loop)	
		pstol_anm()										pstol_anm1()
		rifle_anm(walk_spot_gun_down_mask)				rifle_anm1(walk_spot_gun_up_mask)
		mgun_anm(walk_spot_gun_down_mask)				mgun_anm1(walk_spot_gun_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(define "SC_FSM_MOVE_GEM_Default_Play_Strafe_Fast"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(1.15 loop)		
		pstol_anm()										pstol_anm1()
		rifle_anm(run_spot_gun_down_mask)				rifle_anm1(run_spot_gun_up_mask)
		mgun_anm(run_spot_gun_down_mask)				mgun_anm1(run_spot_gun_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)
	
; =============================================================================================================
; // MOVE STATE
; =============================================================================================================

(define "SC_FSM_MOVE_GEM_Default_Play_S_Slow"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(3.0 loop)		
		pstol_anm()										pstol_anm1()
		rifle_anm(run_slow_down_mask) 					rifle_anm1(run_slow_gun_up_mask)
		mgun_anm(run_slow_down_mask)					mgun_anm1(run_slow_gun_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)
	
(define "SC_FSM_MOVE_GEM_Default_Play_S_Normal"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(2.0 loop)		
		pstol_anm(walk_normal_pistol_down_mask)			pstol_anm1(walk_normal_pistol_up_mask)
		rifle_anm(walk_normal_rifle_up_mask)			rifle_anm1(walk_normal_rifle_down_mask)
		mgun_anm(walk_normal_rifle_up_mask)				mgun_anm1(walk_normal_rifle_down_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(define "SC_FSM_MOVE_GEM_Default_Play_S_Jog"
	("SC_H_Request_Define_Animation_State" 				chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(1.8 loop)	
		pstol_anm(run_down_mask)						pstol_anm1(run_empty_up)
		rifle_anm(run_down_mask)						rifle_anm1(run_gun_up_mask)
		mgun_anm(run_down_mask)							mgun_anm1(run_gun_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(run_down_mask)						unrmd_anm1(run_empty_up)
	)
)
	
	
(define "SC_FSM_MOVE_GEM_Default_Play_S_Fast"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(%0 loop)		
		pstol_anm(run_fast_down_mask)					pstol_anm1(run_fast_empty_up_mask)
		rifle_anm(run_bow_gun_tocover_down_mask) 		rifle_anm1(run_bow_gun_tocover_up_mask)
		mgun_anm(run_bow_gun_tocover_down_mask)			mgun_anm1(run_bow_gun_tocover_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(run_fast_down_mask)					unrmd_anm1(run_fast_strap_up_mask)
	)
)