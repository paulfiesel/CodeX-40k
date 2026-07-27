
(Define "SC_FSM_DEATH_LV40k_Termagaunt_Stop_All"
	; [...]
)

(Define "SC_FSM_DEATH_LV40k_Termagaunt_Events"
	; [...]
)

; =============================================================================================================
; // DEATH
; =============================================================================================================

(define "SC_FSM_DEATH_LV40k_Termagaunt_Play_Death"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"
		{spawn "bloodsparks_big_med_air" "basis" x}
		{if rand 0.5 
			{ani_play "lv40k_term_die_1"}
		else
			{ani_play "lv40k_term_die_2"}
		}
	}
)