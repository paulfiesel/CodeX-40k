
(Define "SC_FSM_STANCE_LV40k_Warrior_Stop_All"
	{Ani_Stop "lv40k_wrr_Stand_To_Crouch"}
)

(Define "SC_FSM_STANCE_LV40k_Warrior_Events"
	{on animation_end "lv40k_wrr_Stand_To_Crouch"
		("SC_FSM_STANCE_Define_Animation_End")
	}
)

; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_STANCE_LV40k_Warrior_Stand_To_Crouch"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.0 callback)	
		pstol_anm(lv40k_wrr_Stand_To_Crouch)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_Stand_To_Crouch)			unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Warrior_Stand_To_Prone"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.0 callback)	
		pstol_anm(lv40k_wrr_Stand_To_Crouch)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_Stand_To_Crouch)			unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Warrior_Crouch_To_Stand"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(-1.0 callback)	
		pstol_anm(lv40k_wrr_Stand_To_Crouch)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_Stand_To_Crouch)			unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Warrior_Crouch_To_Prone"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.0 callback)	
		pstol_anm(lv40k_wrr_Stand_To_Crouch)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_Stand_To_Crouch)			unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Warrior_Prone_To_Stand"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.0 callback)	
		pstol_anm(lv40k_wrr_Stand_To_Crouch)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_Stand_To_Crouch)			unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Warrior_Prone_To_Crouch"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.0 callback)	
		pstol_anm(lv40k_wrr_Stand_To_Crouch)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_Stand_To_Crouch)			unrmd_anm1()
	)
)