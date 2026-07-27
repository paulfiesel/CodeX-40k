
(Define "SC_FSM_MOVE_LV40k_Termagaunt_Stop_All"
	{Ani_Stop "lv40k_Term_aim_run_1"}
	{Ani_Stop "lv40k_Term_crouch_run"}
	{Ani_Stop "lv40k_Term_run_2"}
	{Ani_Stop "lv40k_Term_run_3"}
	{Ani_Stop "lv40k_Term_run_4"}
	{Ani_Stop "lv40k_Term_run_sprint"}
)

(Define "SC_FSM_MOVE_LV40k_Termagaunt_Events"
	; [...]
)

; =============================================================================================================
; // STRAFE 
; =============================================================================================================

(define "SC_FSM_MOVE_LV40k_Termagaunt_Play_Strafe_Back"
	; [...]
)
	
(define "SC_FSM_MOVE_LV40k_Termagaunt_Play_Strafe_Left"
	; [...]
)
	
(define "SC_FSM_MOVE_LV40k_Termagaunt_Play_Strafe_Right"
	; [...]
)	

(define "SC_FSM_MOVE_LV40k_Termagaunt_Play_Strafe_Slow"
	; [...]
)

(define "SC_FSM_MOVE_LV40k_Termagaunt_Play_Strafe_Fast"
	; [...]
)
	
; =============================================================================================================
; // MOVE STATE
; =============================================================================================================

(define "SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Slow"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")	anm_args(1.0 loop)		
		pstol_anm(lv40k_Term_crouch_run)				pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_Term_crouch_run)				unrmd_anm1()
	)
)
	
(define "SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Normal"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")	anm_args(1.0 loop)		
		pstol_anm(lv40k_Term_aim_run_1)					pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_Term_aim_run_1)					unrmd_anm1()
	)
)

(define "SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Jog"
	("SC_H_Request_Define_Animation_State" 				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")	anm_args(1.0 loop)	
		pstol_anm(lv40k_Term_run_3)						pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_Term_run_3)						unrmd_anm1()
	)
)
	
	
(define "SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Fast"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")	anm_args(%0 loop)		
		pstol_anm(lv40k_Term_run_sprint)				pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_Term_run_sprint)				unrmd_anm1()
	)
)