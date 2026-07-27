
(Define "SC_FSM_IDLE_LV40k_Zoanthrope_Stop_All"
	{Ani_Stop "lv40k_zth_aim"}
	{Ani_Stop "lv40k_zth_aim_cover_snipe_stay_low"}
)

(Define "SC_FSM_IDLE_LV40k_Zoanthrope_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================


(Define "SC_FSM_IDLE_LV40k_Zoanthrope_Play_Idle_Standing"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope")			anm_args(1.0 loop)	
		pstol_anm(lv40k_zth_aim)						pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_zth_aim)						unrmd_anm1()
	)
)

(Define "SC_FSM_IDLE_LV40k_Zoanthrope_Play_Idle_Crouch"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope")			anm_args(1.0 loop)	
		pstol_anm(lv40k_zth_aim_cover_snipe_stay_low)	pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_zth_aim_cover_snipe_stay_low)	unrmd_anm1()
	)
)

(Define "SC_FSM_IDLE_LV40k_Zoanthrope_Play_Idle_Snipe"
	("SC_FSM_IDLE_LV40k_Zoanthrope_Play_Idle_Standing")
)