
(Define "SC_FSM_MOVE_LV40k_Warrior_Stop_All"
	{Ani_Stop "lv40k_wrr_run_2"}
	{Ani_Stop "lv40k_wrr_aim_run"}
	{Ani_Stop "lv40k_wrr_run_sprint"}
)

(Define "SC_FSM_MOVE_LV40k_Warrior_Events"
	; [...]
)

; =============================================================================================================
; // STRAFE 
; =============================================================================================================

(define "SC_FSM_MOVE_LV40k_Warrior_Play_Strafe_Back"
	; [...]
)
	
(define "SC_FSM_MOVE_LV40k_Warrior_Play_Strafe_Left"
	; [...]
)
	
(define "SC_FSM_MOVE_LV40k_Warrior_Play_Strafe_Right"
	; [...]
)	

(define "SC_FSM_MOVE_LV40k_Warrior_Play_Strafe_Slow"
	; [...]
)

(define "SC_FSM_MOVE_LV40k_Warrior_Play_Strafe_Fast"
	; [...]
)
	
; =============================================================================================================
; // MOVE STATE
; =============================================================================================================

(define "SC_FSM_MOVE_LV40k_Warrior_Play_S_Slow"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")	anm_args(0.5 loop)		
		pstol_anm(lv40k_wrr_run_2)						pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_run_2)						unrmd_anm1()
	)
)
	
(define "SC_FSM_MOVE_LV40k_Warrior_Play_S_Normal"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")	anm_args(1.0 loop)		
		pstol_anm(lv40k_wrr_aim_run)					pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_aim_run)					unrmd_anm1()
	)
)

(define "SC_FSM_MOVE_LV40k_Warrior_Play_S_Jog"
	("SC_H_Request_Define_Animation_State" 				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")	anm_args(1.0 loop)	
		pstol_anm(lv40k_wrr_run_2)						pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_run_2)						unrmd_anm1()
	)
)
	
	
(define "SC_FSM_MOVE_LV40k_Warrior_Play_S_Fast"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")	anm_args(%0 loop)		
		pstol_anm(lv40k_wrr_run_sprint)					pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_run_sprint)					unrmd_anm1()
	)
)