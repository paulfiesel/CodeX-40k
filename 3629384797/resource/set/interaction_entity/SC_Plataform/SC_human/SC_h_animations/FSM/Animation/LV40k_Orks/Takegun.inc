
(Define "SC_FSM_TAKEGUN_LV40k_Orkboy_Stop_All"
	; [...] // Shared with LV40k_Orkboy
)

(Define "SC_FSM_TAKEGUN_LV40k_Orkboy_Events"
	; [...] // Shared with LV40k_Orkboy
)

; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_TAKEGUN_LV40k_Orkboy_Play_Take_Standing"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(%in)	
		pstol_anm(stand_take_pistol_up_end_mask)		pstol_anm1()
		rifle_anm(stand_take_gun_down_mask)				rifle_anm1(stand_take_gun_up_mask)
		mgun_anm(stand_take_mgun_down_mask)				mgun_anm1(stand_take_mgun_up_mask)
		bazooka_anm(stand_take_bazooka_mask)			bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_TAKEGUN_LV40k_Orkboy_Play_Take_Squatting"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(%in)	
		pstol_anm(squat_take_pistol_mask)				pstol_anm1()
		rifle_anm(squat_take_gun_mask)					rifle_anm1()
		mgun_anm(squat_take_gun_mask)					mgun_anm1()
		bazooka_anm(squat_take_bazooka_mask)			bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_TAKEGUN_LV40k_Orkboy_Play_Take_Lying"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(%in)	
		pstol_anm(lie_take_pistol_mask)					pstol_anm1()
		rifle_anm(lie_take_gun_mask)					rifle_anm1()
		mgun_anm(lie_take_gun_mask)						mgun_anm1()
		bazooka_anm(lie_take_gun_mask)					bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)
