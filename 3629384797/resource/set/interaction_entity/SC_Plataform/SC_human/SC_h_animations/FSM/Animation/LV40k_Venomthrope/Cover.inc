
(Define "SC_FSM_COVER_LV40k_Venomthrope_Stop_All"
	{Ani_stop "lv40k_vth_aim_cover_snipe_go_low"}
)

(Define "SC_FSM_COVER_LV40k_Venomthrope_Events"
	; // WILL CRASH WITHOUT THE DELAY!
		
	{on animation_end "lv40k_vth_aim_cover_snipe_go_low"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(COVER))
		}
	}
)

; =============================================================================================================
; // COVER 
; =============================================================================================================

(Define "SC_FSM_COVER_LV40k_Venomthrope_Snipe_Peek"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope")			anm_args(-1.0 callback)	
		pstol_anm(lv40k_vth_aim_cover_snipe_go_low)		pstol_anm1()
		rifle_anm() 									rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_vth_aim_cover_snipe_go_low)		unrmd_anm1()
	)
)

(Define "SC_FSM_COVER_LV40k_Venomthrope_Snipe_Close"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope")			anm_args(1.0 callback)	
		pstol_anm(lv40k_vth_aim_cover_snipe_go_low)		pstol_anm1()
		rifle_anm() 									rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_vth_aim_cover_snipe_go_low)		unrmd_anm1()
	)
)