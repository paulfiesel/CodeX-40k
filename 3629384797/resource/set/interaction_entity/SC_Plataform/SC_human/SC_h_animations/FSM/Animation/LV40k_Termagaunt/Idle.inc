
(Define "SC_FSM_IDLE_LV40k_Termagaunt_Stop_All"
	{Ani_Stop "lv40k_Term_aim_stand"}
	{Ani_Stop "lv40k_term_aim_cover_snipe"}
	{Ani_Stop "lv40k_Term_aim_crouch"}
)

(Define "SC_FSM_IDLE_LV40k_Termagaunt_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle_Standing"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")			anm_args(1.0 loop)	
		pstol_anm(lv40k_Term_aim_stand)					pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_Term_aim_stand)					unrmd_anm1()
	)
)

(Define "SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle_Crouch"
	{if in_cover
		("SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle_Standing")
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")			anm_args(1.0 loop)	
			pstol_anm(lv40k_Term_aim_crouch)				pstol_anm1()
			rifle_anm()										rifle_anm1()
			mgun_anm()										mgun_anm1()
			bazooka_anm()									bazooka_anm1()
			unrmd_anm(lv40k_Term_aim_crouch)				unrmd_anm1()
		)
	}
)

(Define "SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle_Snipe"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")			anm_args(1.0 loop)	
		pstol_anm(lv40k_term_aim_cover_snipe)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_Term_aim_stand)					unrmd_anm1()
	)
)