
(Define "SC_FSM_DEATH_LV40k_Ravener_Stop_All"
	; [...]
)

(Define "SC_FSM_DEATH_LV40k_Ravener_Events"
	; [...]
)

; =============================================================================================================
; // DEATH
; =============================================================================================================

(define "SC_FSM_DEATH_LV40k_Ravener_Play_Death"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener"
		{spawn "bloodsparks_big_med_air" "basis" x}
		{if rand 0.5 
			{ani_play "lv40k_rvn_death1"}
		else
			{ani_play "lv40k_rvn_death2"}
		}
	}
)