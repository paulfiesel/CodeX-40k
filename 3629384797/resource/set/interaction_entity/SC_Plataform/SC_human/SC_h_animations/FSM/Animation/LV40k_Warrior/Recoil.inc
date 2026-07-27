
(Define "SC_FSM_RECOIL_LV40k_Warrior_Stop_All"
	{Ani_Stop "lv40k_wrr_aim_fire_stand"}
	{Ani_Stop "lv40k_wrr_aim_fire_crouch"}
)

(Define "SC_FSM_RECOIL_LV40k_Warrior_Events"
	{on animation_end "lv40k_wrr_aim_fire_stand"	("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "lv40k_wrr_aim_fire_crouch"	("SC_FSM_RECOIL_Define_Animation_End")}
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_RECOIL_LV40k_Warrior_Play_Standing"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.5 callback)	
		pstol_anm(lv40k_wrr_aim_fire_stand)				pstol_anm1()
		rifle_anm() 									rifle_anm1(stand_fire_mgun_up_mask)
		mgun_anm()										mgun_anm1(stand_fire_mgun_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)
(Define "SC_FSM_RECOIL_LV40k_Warrior_Play_Squatting"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.5 callback)	
		pstol_anm(lv40k_wrr_aim_fire_crouch)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)