
(Include "Animation/GEM_Default/Vault.inc")
(Include "Animation/LV40k_Termagaunt/Vault.inc")
(Include "Animation/LV40k_Warrior/Vault.inc")


;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

(Define "SC_FSM_VAULT_Define_Animation_End"	
	{if tagged "SC_FSM_TAG_FSM_STATE_VAULT"
		{Kill_Delay "SC_FSM_VAULT_Delay"}
		{delay 0.1 "SC_FSM_VAULT_Delay"				
			("SC_FSM_Define_Update_FSM" do(remove) state(VAULT))
		}
	}
)

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_VAULT_Define_Enter"
	; [...]
)

(define "SC_FSM_VAULT_Define_Event"	
	("SC_FSM_VAULT_GEM_Default_Play_Anims")
	("SC_FSM_VAULT_LV40k_Termagaunt_Play_Anims")
	("SC_FSM_VAULT_LV40k_Warrior_Play_Anims")
)

(define "SC_FSM_VAULT_Define_Exit"
	("SC_FSM_VAULT_GEM_Default_Stop_All")
	("SC_FSM_VAULT_LV40k_Termagaunt_Stop_All")
	("SC_FSM_VAULT_LV40k_Warrior_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_VAULT_GEM_Default_Events")
("SC_FSM_VAULT_LV40k_Termagaunt_Events")
("SC_FSM_VAULT_LV40k_Warrior_Events")
