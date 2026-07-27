
(Define "SC_FSM_DEATH_LV40k_Warrior_Stop_All"
	; [...]
)

(Define "SC_FSM_DEATH_LV40k_Warrior_Events"
	; [...]
)

; =============================================================================================================
; // DEATH
; =============================================================================================================

(define "SC_FSM_DEATH_LV40k_Warrior_Play_Death"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
		{spawn "bloodsparks_energo_death" "basis" x}
		{if Rand 0.5	{Ani_play "lv40k_wrr_death1"}
		else			{Ani_play "lv40k_wrr_death2"}}
	}
)