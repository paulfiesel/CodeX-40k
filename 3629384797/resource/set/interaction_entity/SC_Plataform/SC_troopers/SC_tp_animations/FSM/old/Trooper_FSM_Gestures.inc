	
;=============================================================================================================================
; FSM BEGIN
;=============================================================================================================================

{on "FSM_Attack_Ranged_Enter"
	{if not tagged "FSM_STATE_ATTACK_RANGED_ON"	
		{if not tagged "FSM_STATE_MOVE"	
			("NEW_FSM_MOTION" c(FSM_STATE_ATTACK_RANGED))	
			{call "FSM_Attack_Ranged"}
		else
			{tags remove "FSM_STATE_ATTACK_RANGED"}
		}
	}
}
{on "FSM_Attack_Ranged"
	{tags add "FSM_STATE_ATTACK_RANGED_ON"}
	{ani_stop "fire_1"}							; // BUZZ: <- this can potentially f#@!-up the code...
	{call "Sc_Play_Attack_Ranged_Anm"}
	{call "FSM_Attack_Ranged_Void_Event"}
}
{on "FSM_Attack_Ranged_Exit"
	{tags remove "FSM_STATE_ATTACK_RANGED"}
	{tags remove "FSM_STATE_ATTACK_RANGED_ON"}
	{ani_stop "fire_1"}
}

;=============================================================================================================================
; METHODS END
;=============================================================================================================================

{on "FSM_Attack_Ranged_Void_Event"
	{call "talk_cmbt"}
	{tags remove "FSM_STATE_ATTACK_RANGED"} 	; // BUZZ: <- this can potentially f#@!-up the code...
	{tags remove "FSM_STATE_ATTACK_RANGED_ON"}	; // BUZZ: <- this can potentially f#@!-up the code...
}

{on animation_end "fire_1"	{tags remove "FSM_STATE_ATTACK_RANGED"} {tags remove "FSM_STATE_ATTACK_RANGED_ON"}}	; // BUZZ: <- [FSM] Exit Event