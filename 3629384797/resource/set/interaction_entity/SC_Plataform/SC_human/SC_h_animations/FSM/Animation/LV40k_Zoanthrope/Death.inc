
(Define "SC_FSM_DEATH_LV40k_Zoanthrope_Stop_All"
	; [...]
)

(Define "SC_FSM_DEATH_LV40k_Zoanthrope_Events"
)

; =============================================================================================================
; // DEATH
; =============================================================================================================

(define "SC_FSM_DEATH_LV40k_Zoanthrope_Play_Death"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"
		{start_sound "SC_Plataform/body_move/-halo/ranged_form/ranged_to_stalker"}
		
		{if rand 0.5 
			{ani_play "lv40k_zth_death1" 0.7}
		else
			{ani_play "lv40k_zth_death2" 0.7}
		}
		{spawn "bloodsparks_energo_death" "#zth_rig-bip01_spine1" x}
		{spawn "flash_eldar_en" "#zth_rig-bip01_spine1" x}
	}
)