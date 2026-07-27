
(Define "SC_FSM_THROWN_LV40k_Ravener_Stop_All"
	{Ani_Stop "lv40k_rvn_thrown_land"}
	{Ani_Stop "lv40k_rvn_thrown_fly"}
	{Ani_Stop "lv40k_rvn_thrown_getup"}
)

(Define "SC_FSM_THROWN_LV40k_Ravener_Events"
	; // WILL CRASH WITHOUT THE DELAY!
		
	{on animation_end "lv40k_rvn_thrown_getup"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(THROWN))
			{Call "SC_H_Request_Call_Thrown_Getup"}
		}
	}
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_THROWN_LV40k_Ravener_Play_Land"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener")			anm_args(0.8)	
		pstol_anm(lv40k_rvn_thrown_land)				pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_rvn_thrown_land)				unrmd_anm1()
	)
)

(Define "SC_FSM_THROWN_LV40k_Ravener_Play_Getup"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener")			anm_args(0.8 callback)	
		pstol_anm(lv40k_rvn_thrown_getup)				pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_rvn_thrown_getup)				unrmd_anm1()
	)
)

(Define "SC_FSM_THROWN_LV40k_Ravener_Play_Thrown"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener")			anm_args(1.2)	
		pstol_anm(lv40k_rvn_thrown_fly)					pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_rvn_thrown_fly)					unrmd_anm1()
	)
)