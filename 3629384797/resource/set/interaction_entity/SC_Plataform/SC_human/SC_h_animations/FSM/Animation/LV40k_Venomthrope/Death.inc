
(Define "SC_FSM_DEATH_LV40k_Venomthrope_Stop_All"
	; [...]
)

(Define "SC_FSM_DEATH_LV40k_Venomthrope_Events"
)

; =============================================================================================================
; // DEATH
; =============================================================================================================

(define "SC_FSM_DEATH_LV40k_Venomthrope_Play_Death"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope"
		{spawn "tyr_sporemine_grenade" "basis" x {stuff_detonate}}
		{Call "Delete"} 
	}
)