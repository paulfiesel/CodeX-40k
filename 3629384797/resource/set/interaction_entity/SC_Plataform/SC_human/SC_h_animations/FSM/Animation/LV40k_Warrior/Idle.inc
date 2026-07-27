
(Define "SC_FSM_IDLE_LV40k_Warrior_Stop_All"
	{Ani_Stop "lv40k_wrr_aim_idle_crouch"}
	{Ani_Stop "lv40k_wrr_aim_idle_stand"}
	{Ani_Stop "lv40k_Wrr_aim_cover_snipe"}
)

(Define "SC_FSM_IDLE_LV40k_Warrior_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_IDLE_LV40k_Warrior_Play_Idle_Crouch"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.0 loop)	
		pstol_anm(lv40k_wrr_aim_idle_crouch)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_aim_idle_crouch)			unrmd_anm1()
	)
)

(Define "SC_FSM_IDLE_LV40k_Warrior_Play_Idle_Standing"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.0 loop)	
		pstol_anm(lv40k_wrr_aim_idle_stand)				pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_aim_idle_stand)				unrmd_anm1()
	)
)

(Define "SC_FSM_IDLE_LV40k_Warrior_Play_Idle_Snipe"
	{Kill_Delay "warrior_cover_pivot_Reset"}	; // <- fix pivot
	
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.0 loop)	
		pstol_anm(lv40k_Wrr_aim_cover_snipe)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_Wrr_aim_cover_snipe)			unrmd_anm1()
	)
)