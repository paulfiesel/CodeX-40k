
(Define "SC_FSM_VAULT_LV40k_Warrior_Stop_All"
	{Ani_Stop "lv40k_wrr_vault"}
)

(Define "SC_FSM_VAULT_LV40k_Warrior_Events"
	{on animation_end "lv40k_wrr_vault" ("SC_FSM_VAULT_Define_Animation_End")}
)

; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_VAULT_LV40k_Warrior_Play_Anims"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
		{ani_play "lv40k_wrr_vault" callback}
	}
)

