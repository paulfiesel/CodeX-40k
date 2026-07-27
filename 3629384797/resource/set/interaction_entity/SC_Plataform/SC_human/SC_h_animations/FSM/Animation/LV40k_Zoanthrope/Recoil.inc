
(Define "SC_FSM_RECOIL_LV40k_Zoanthrope_Stop_All"
	; [...]
)

(Define "SC_FSM_RECOIL_LV40k_Zoanthrope_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_RECOIL_LV40k_Zoanthrope_Play_Standing"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope")			anm_args(1.5 callback)	
		pstol_anm(SC_no_recoil)							pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)
(Define "SC_FSM_RECOIL_LV40k_Zoanthrope_Play_Squatting"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope")			anm_args(1.5 callback)	
		pstol_anm(SC_no_recoil)							pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)