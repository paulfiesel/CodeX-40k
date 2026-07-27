
(Define "SC_FSM_RECOIL_LV40k_Termagaunt_Stop_All"
	{Ani_Stop "lv40k_Term_aim_couch_recoil"}
	{Ani_Stop "lv40k_Term_aim_stand_recoil"}
)

(Define "SC_FSM_RECOIL_LV40k_Termagaunt_Events"
	{on animation_end "lv40k_Term_aim_couch_recoil"	("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "lv40k_Term_aim_stand_recoil"	("SC_FSM_RECOIL_Define_Animation_End")}
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_RECOIL_LV40k_Termagaunt_Play_Standing"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")			anm_args(1.5 callback norestart)	
		pstol_anm(lv40k_Term_aim_stand_recoil)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)
(Define "SC_FSM_RECOIL_LV40k_Termagaunt_Play_Squatting"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")			anm_args(1.5 callback norestart)	
		pstol_anm(lv40k_Term_aim_couch_recoil)			pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)