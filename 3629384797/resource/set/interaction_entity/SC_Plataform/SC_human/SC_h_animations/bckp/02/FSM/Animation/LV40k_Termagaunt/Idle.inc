
(Define "SC_FSM_IDLE_LV40k_Termagaunt_Stop_All"
	{Ani_Stop "lv40k_Term_aim_stand"}
)

(Define "SC_FSM_IDLE_LV40k_Termagaunt_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")			anm_args(1.0 loop)	
		pstol_anm(lv40k_Term_aim_stand)					pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)