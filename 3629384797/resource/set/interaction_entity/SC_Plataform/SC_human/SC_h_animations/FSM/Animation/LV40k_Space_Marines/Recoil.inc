
(Define "SC_FSM_RECOIL_LV40k_Space_Marine_Stop_All"
	{Ani_Stop "lv40k_sms-stand_librarian_fire_up"}
	{Ani_Stop "lv40k_sms-stand_librarian_fire_down"}
	
)

(Define "SC_FSM_RECOIL_LV40k_Space_Marine_Events"
	{on animation_end "lv40k_sms-stand_librarian_fire_up"	("SC_FSM_RECOIL_Define_Animation_End")}
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_RECOIL_LV40k_Space_Marine_Play_Standing"
	{if tagged "sc_h_skin_tag_fsm_anim_spacemarine"
		{if tagged "lv40k_human_tag_weapon_librarian"
			("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
				anm(lv40k_sms-stand_librarian_fire_up) 
				anm1(lv40k_sms-stand_librarian_fire_down)
			)
		else
			{Ani_Play "SC_no_recoil" callback}
		}
	}
)

(Define "SC_FSM_RECOIL_LV40k_Space_Marine_Play_Squatting"
	{if tagged "sc_h_skin_tag_fsm_anim_spacemarine"
		{Ani_Play "SC_no_recoil" callback}
	}
)

(Define "SC_FSM_RECOIL_LV40k_Space_Marine_Play_Lying"
	{if tagged "sc_h_skin_tag_fsm_anim_spacemarine"
		{Ani_Play "SC_no_recoil" callback}
	}
)