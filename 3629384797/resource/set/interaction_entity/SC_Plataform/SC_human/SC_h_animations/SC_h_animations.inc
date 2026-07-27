
;	<<<< --------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Human FSM ===============] >>
;	<<<<---------------------------------------------------------------------------->>>>			 
	
(Include "/set/interaction_entity/SC_Plataform/SC_FSM/SC_FSM_Patterns.inc")

(Include "SC_h_defines_anm.inc")

; ============================================================================================================================================ ;

(include "FSM/Human_FSM_Cover.inc")
(include "FSM/Human_FSM_Death.inc")
(include "FSM/Human_FSM_Crew.inc")
(include "FSM/Human_FSM_Idle.inc")
(include "FSM/Human_FSM_Fight.inc")
(include "FSM/Human_FSM_Move.inc")
(include "FSM/Human_FSM_Posing.inc")
(include "FSM/Human_FSM_Recoil.inc")
(include "FSM/Human_FSM_Stance.inc")
(include "FSM/Human_FSM_Reload.inc")
(include "FSM/Human_FSM_Takegun.inc")
(include "FSM/Human_FSM_Special.inc")
(include "FSM/Human_FSM_Thrown.inc")
(include "FSM/Human_FSM_Vault.inc")

{on "SC_FSM_Call_Clear_Request_Tags" overload
	; [...]
}

{on "SC_FSM_Call_Update_States" overload
	{If tagged "sc_h_skin_tag_skeleton_defined"
		{if tagged  "sc_fsm_tag_FSM_STATE_DISABLED"
		
		else tagged "sc_fsm_tag_FSM_STATE_DEATH"			("SC_FSM_Define_FSM_Enter" state(DEATH))
		else tagged "sc_fsm_tag_FSM_STATE_THROWN"			("SC_FSM_Define_FSM_Enter" state(THROWN))
		else tagged "sc_fsm_tag_FSM_STATE_SPECIAL"			("SC_FSM_Define_FSM_Enter" state(SPECIAL))
		else tagged "sc_fsm_tag_FSM_STATE_CREW"				("SC_FSM_Define_FSM_Enter" state(CREW))	
		else tagged "sc_fsm_tag_FSM_STATE_FIGHT"			("SC_FSM_Define_FSM_Enter" state(FIGHT))
		else tagged "sc_fsm_tag_FSM_STATE_VAULT"			("SC_FSM_Define_FSM_Enter" state(VAULT))
		
		else tagged "sc_fsm_tag_FSM_STATE_MOVE"				("SC_FSM_Define_FSM_Enter" state(MOVE))	
		
		else tagged "sc_fsm_tag_FSM_STATE_STANCE"			("SC_FSM_Define_FSM_Enter" state(STANCE))
		else tagged "sc_fsm_tag_FSM_STATE_COVER"			("SC_FSM_Define_FSM_Enter" state(COVER))
		
		else tagged "sc_fsm_tag_FSM_STATE_TAKEGUN"			("SC_FSM_Define_FSM_Enter" state(TAKEGUN))
		else tagged "sc_fsm_tag_FSM_STATE_RELOAD"			("SC_FSM_Define_FSM_Enter" state(RELOAD))
		
		else tagged "sc_fsm_tag_FSM_STATE_RECOIL"			("SC_FSM_Define_FSM_Enter" state(RECOIL))
		else tagged "sc_fsm_tag_FSM_STATE_IDLE"				("SC_FSM_Define_FSM_Enter" state(IDLE))	
		else tagged "sc_fsm_tag_FSM_STATE_POSING"			("SC_FSM_Define_FSM_Enter" state(POSING))	
		
		else 
			{Call "SC_Request_Call_State_Default"}
		}
	}
}

{on "SC_FSM_Call_Exit_All_States" overload
	{If tagged "sc_h_skin_tag_skeleton_defined"
	
	;	("SC_FSM_Define_FSM_Exit" state(DEATH))	<- do not use exit with death.
	
		("SC_FSM_Define_FSM_Exit" state(CREW))	
		("SC_FSM_Define_FSM_Exit" state(STANCE))	
		("SC_FSM_Define_FSM_Exit" state(TAKEGUN))	
		("SC_FSM_Define_FSM_Exit" state(COVER))	
		("SC_FSM_Define_FSM_Exit" state(IDLE))	
		("SC_FSM_Define_FSM_Exit" state(VAULT))	
		("SC_FSM_Define_FSM_Exit" state(FIGHT))		
		("SC_FSM_Define_FSM_Exit" state(MOVE))	
		("SC_FSM_Define_FSM_Exit" state(RECOIL))	
		("SC_FSM_Define_FSM_Exit" state(RELOAD))	
		("SC_FSM_Define_FSM_Exit" state(SPECIAL))
		("SC_FSM_Define_FSM_Exit" state(THROWN))	
		("SC_FSM_Define_FSM_Exit" state(POSING))
	}	
}

(Include "SC_h_request.inc")














