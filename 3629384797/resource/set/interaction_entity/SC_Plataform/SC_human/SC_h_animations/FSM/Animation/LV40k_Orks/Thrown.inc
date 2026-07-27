
(Define "SC_FSM_THROWN_LV40k_Orkboy_Stop_All"
)

(Define "SC_FSM_THROWN_LV40k_Orkboy_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_THROWN_LV40k_Orkboy_Play_Land"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1)	
		pstol_anm()										pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_THROWN_LV40k_Orkboy_Play_Getup"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1)	
		pstol_anm()										pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_THROWN_LV40k_Orkboy_Play_Thrown"
)