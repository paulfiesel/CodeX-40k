
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
		{if Rand 0.5	{Ani_play "lv40k_Term_die_1"}
		else			{Ani_play "lv40k_Term_die_2"}}
	}
)