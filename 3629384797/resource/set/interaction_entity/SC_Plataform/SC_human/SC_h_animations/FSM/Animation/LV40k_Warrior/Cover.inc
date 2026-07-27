
(Define "SC_FSM_COVER_LV40k_Warrior_Stop_All"
	{Ani_stop "lv40k_wrr_aim_cover_snipe_go_low"}
	
	{If tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
		{Delay 0.2 "warrior_cover_pivot_Reset" {Ani_Play "lv40k_wrr_aim_cover_pivot_fix"}}
	}
)

(Define "SC_FSM_COVER_LV40k_Warrior_Events"
	; // WILL CRASH WITHOUT THE DELAY!
		
	{on animation_end "lv40k_wrr_aim_cover_snipe_go_low"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(COVER))
			
			{If tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
				{Delay 0.2 "warrior_cover_pivot_Reset" {Ani_Play "lv40k_wrr_aim_cover_pivot_fix"}}
			}
		}
	}
)

; =============================================================================================================
; // COVER 
; =============================================================================================================

(Define "SC_FSM_COVER_LV40k_Warrior_Snipe_Peek"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(-1.0 callback)	
		pstol_anm(lv40k_wrr_aim_cover_snipe_go_low)		pstol_anm1()
		rifle_anm() 									rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_aim_cover_snipe_go_low)		unrmd_anm1()
	)
)

(Define "SC_FSM_COVER_LV40k_Warrior_Snipe_Close"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")			anm_args(1.0 callback)	
		pstol_anm(lv40k_wrr_aim_cover_snipe_go_low)		pstol_anm1()
		rifle_anm() 									rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_wrr_aim_cover_snipe_go_low)		unrmd_anm1()
	)
)