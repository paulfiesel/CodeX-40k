
(Define "SC_FSM_STANCE_LV40k_Orkboy_Stop_All"
	; [...] // Shared with GEM_Default
)

(Define "SC_FSM_STANCE_LV40k_Orkboy_Events"
	; [...] // Shared with GEM_Default
)


; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_STANCE_LV40k_Orkboy_Stand_To_Crouch"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1.0 callback)	
		pstol_anm(squat_from_stand_pistol_mask)			pstol_anm1()
		rifle_anm(squat_from_stand_gun_mask)			rifle_anm1()
		mgun_anm(squat_from_stand_gun_mask)				mgun_anm1()
		bazooka_anm(squat_from_stand_bazooka_mask)		bazooka_anm1()
		unrmd_anm(squat_from_stand_empty_mask)			unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Orkboy_Crouch_To_Stand"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(-1.0 callback)	
		pstol_anm(squat_from_stand_pistol_mask)			pstol_anm1()
		rifle_anm(squat_from_stand_gun_mask)			rifle_anm1()
		mgun_anm(squat_from_stand_gun_mask)				mgun_anm1()
		bazooka_anm(squat_from_stand_bazooka_mask)		bazooka_anm1()
		unrmd_anm(squat_from_stand_empty_mask)			unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Orkboy_Crouch_To_Prone"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1.0 callback)	
		pstol_anm(lie_from_squat_pistol_mask)			pstol_anm1()
		rifle_anm(lie_from_squat_gun_mask)				rifle_anm1()
		mgun_anm(lie_from_squat_mgun_mask)				mgun_anm1()
		bazooka_anm(lie_from_squat_bazooka_mask)		bazooka_anm1()
		unrmd_anm(lie_from_squat_gun_mask)				unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Orkboy_Prone_To_Crouch"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(-1.0 callback)	
		pstol_anm(lie_from_squat_pistol_mask)			pstol_anm1()
		rifle_anm(lie_from_squat_gun_mask)				rifle_anm1()
		mgun_anm(lie_from_squat_mgun_mask)				mgun_anm1()
		bazooka_anm(lie_from_squat_bazooka_mask)		bazooka_anm1()
		unrmd_anm(lie_from_squat_gun_mask)				unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Orkboy_Stand_To_Prone"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1.0 callback)	
		pstol_anm(lie_from_stand_mask)					pstol_anm1()
		rifle_anm(lie_from_stand_mask)					rifle_anm1()
		mgun_anm(lie_from_stand_mask)					mgun_anm1()
		bazooka_anm(lie_from_stand_1_mask)				bazooka_anm1()
		unrmd_anm(lie_from_stand_mask)					unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Orkboy_Prone_To_Stand"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(-1.0 callback)	
		pstol_anm(lie_from_stand_mask)					pstol_anm1()
		rifle_anm(lie_from_stand_mask)					rifle_anm1()
		mgun_anm(lie_from_stand_mask)					mgun_anm1()
		bazooka_anm(lie_from_stand_1_mask)				bazooka_anm1()
		unrmd_anm(lie_from_stand_mask)					unrmd_anm1()
	)
)
