
(Define "SC_FSM_STANCE_GEM_Default_Stop_All"
	{Ani_Stop "squat_from_stand_gun_mask"}
	{Ani_Stop "squat_from_stand_bazooka_mask"}
	{Ani_Stop "squat_from_stand_pistol_mask"}
	{Ani_Stop "squat_from_stand_empty_mask"}
		
	{Ani_Stop "lie_from_stand_mask"}
	{Ani_Stop "lie_from_stand_1_mask"}
	{Ani_Stop "lie_from_squat_empty_mask"}
		
	{Ani_Stop "lie_from_squat_gun_mask"}
	{Ani_Stop "lie_from_squat_mgun_mask"}
	{Ani_Stop "lie_from_squat_bazooka_mask"}
	{Ani_Stop "lie_from_squat_pistol_mask"}
)

(Define "SC_FSM_STANCE_GEM_Default_Events"
	{on animation_end "squat_from_stand_gun_mask"		("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "squat_from_stand_bazooka_mask"	("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "squat_from_stand_pistol_mask"	("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "squat_from_stand_empty_mask"		("SC_FSM_STANCE_Define_Animation_End")}
	
	{on animation_end "lie_from_stand_mask"				("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "lie_from_stand_1_mask"			("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "lie_from_squat_empty_mask"		("SC_FSM_STANCE_Define_Animation_End")}
	
	{on animation_end "lie_from_squat_gun_mask"			("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "lie_from_squat_mgun_mask"		("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "lie_from_squat_bazooka_mask"		("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "lie_from_squat_pistol_mask"		("SC_FSM_STANCE_Define_Animation_End")}
)

; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_STANCE_GEM_Default_Stand_To_Crouch"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(1.0 callback)	
		pstol_anm(squat_from_stand_pistol_mask)			pstol_anm1()
		rifle_anm(squat_from_stand_gun_mask)			rifle_anm1()
		mgun_anm(squat_from_stand_gun_mask)				mgun_anm1()
		bazooka_anm(squat_from_stand_bazooka_mask)		bazooka_anm1()
		unrmd_anm(squat_from_stand_empty_mask)			unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_GEM_Default_Crouch_To_Stand"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(-1.0 callback)	
		pstol_anm(squat_from_stand_pistol_mask)			pstol_anm1()
		rifle_anm(squat_from_stand_gun_mask)			rifle_anm1()
		mgun_anm(squat_from_stand_gun_mask)				mgun_anm1()
		bazooka_anm(squat_from_stand_bazooka_mask)		bazooka_anm1()
		unrmd_anm(squat_from_stand_empty_mask)			unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_GEM_Default_Crouch_To_Prone"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(1.0 callback)	
		pstol_anm(lie_from_squat_pistol_mask)			pstol_anm1()
		rifle_anm(lie_from_squat_gun_mask)				rifle_anm1()
		mgun_anm(lie_from_squat_mgun_mask)				mgun_anm1()
		bazooka_anm(lie_from_squat_bazooka_mask)		bazooka_anm1()
		unrmd_anm(lie_from_squat_gun_mask)				unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_GEM_Default_Prone_To_Crouch"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(-1.0 callback)	
		pstol_anm(lie_from_squat_pistol_mask)			pstol_anm1()
		rifle_anm(lie_from_squat_gun_mask)				rifle_anm1()
		mgun_anm(lie_from_squat_mgun_mask)				mgun_anm1()
		bazooka_anm(lie_from_squat_bazooka_mask)		bazooka_anm1()
		unrmd_anm(lie_from_squat_gun_mask)				unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_GEM_Default_Stand_To_Prone"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(1.0 callback)	
		pstol_anm(lie_from_stand_mask)					pstol_anm1()
		rifle_anm(lie_from_stand_mask)					rifle_anm1()
		mgun_anm(lie_from_stand_mask)					mgun_anm1()
		bazooka_anm(lie_from_stand_1_mask)				bazooka_anm1()
		unrmd_anm(lie_from_stand_mask)					unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_GEM_Default_Prone_To_Stand"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(-1.0 callback)	
		pstol_anm(lie_from_stand_mask)					pstol_anm1()
		rifle_anm(lie_from_stand_mask)					rifle_anm1()
		mgun_anm(lie_from_stand_mask)					mgun_anm1()
		bazooka_anm(lie_from_stand_1_mask)				bazooka_anm1()
		unrmd_anm(lie_from_stand_mask)					unrmd_anm1()
	)
)
