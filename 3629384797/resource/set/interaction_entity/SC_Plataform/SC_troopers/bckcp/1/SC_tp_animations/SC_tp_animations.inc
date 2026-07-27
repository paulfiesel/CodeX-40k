
;	<<<< ----------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: FSM Machine ===============] >>
;	<<<<------------------------------------------------------------------------------>>>>			 
	
(Include "/set/interaction_entity/SC_Plataform/SC_FSM/SC_FSM_Patterns.inc")

; ============================================================================================================================================ ;

;(include "FSM/Trooper_FSM_Cover.inc")
(include "FSM/Trooper_FSM_Death.inc")
;(include "FSM/Trooper_FSM_Gestures.inc")
(include "FSM/Trooper_FSM_Idle.inc")
(include "FSM/Trooper_FSM_Melee.inc")
(include "FSM/Trooper_FSM_Move.inc")
(include "FSM/Trooper_FSM_Posing.inc")
(include "FSM/Trooper_FSM_Recoil.inc")
;(include "FSM/Trooper_FSM_Reload.inc")
;(include "FSM/Trooper_FSM_Special.inc")
(include "FSM/Trooper_FSM_Turn.inc")
(include "FSM/Trooper_FSM_Synckill.inc")
;(include "FSM/Trooper_FSM_Thrown.inc")
;(include "FSM/Trooper_FSM_Thrown_Land.inc")

{on "SC_FSM_Call_Clear_Request_Tags" overload
	{tags remove "sc_tp_request_tag_is_Covered"}
	{tags remove "sc_tp_request_tag_is_Reloading"}
	{tags remove "sc_tp_request_tag_is_Moving"}
	{tags remove "sc_tp_request_tag_is_Lowready"}
}

{on "SC_FSM_Call_Update_States" overload 
	{if tagged  "sc_fsm_tag_FSM_STATE_DISABLED"			;
	else tagged "sc_fsm_tag_FSM_STATE_SYNCKILL"			("SC_FSM_Define_FSM_Enter" state(SYNCKILL))
	else tagged "sc_fsm_tag_FSM_STATE_DEATH"			("SC_FSM_Define_FSM_Enter" state(DEATH))
;	else tagged "sc_fsm_tag_FSM_STATE_THROWNLAND"		("SC_FSM_Define_FSM_Enter" state(THROWN_LAND))
;	else tagged "sc_fsm_tag_FSM_STATE_THROWN"			("SC_FSM_Define_FSM_Enter" state(THROWN))
;//	else tagged "sc_fsm_tag_FSM_STATE_SYNCKILL"			("SC_FSM_Define_FSM_Enter" state(SYNCKILL))
;	else tagged "sc_fsm_tag_FSM_STATE_SPECIAL"			("SC_FSM_Define_FSM_Enter" state(SPECIAL))
;	else tagged "sc_fsm_tag_FSM_STATE_GESTURES"			("SC_FSM_Define_FSM_Enter" state(GESTURES))
	else tagged "sc_fsm_tag_FSM_STATE_MELEE"			("SC_FSM_Define_FSM_Enter" state(MELEE))	
;	else tagged "sc_fsm_tag_FSM_STATE_RELOAD"			("SC_FSM_Define_FSM_Enter" state(RELOAD))	
	else tagged "sc_fsm_tag_FSM_STATE_TURN"				("SC_FSM_Define_FSM_Enter" state(TURN))	
	else tagged "sc_fsm_tag_FSM_STATE_MOVE"				("SC_FSM_Define_FSM_Enter" state(MOVE))	
;	else tagged "sc_fsm_tag_FSM_STATE_COVER"			("SC_FSM_Define_FSM_Enter" state(COVER))
	else tagged "sc_fsm_tag_FSM_STATE_RECOIL"			("SC_FSM_Define_FSM_Enter" state(RECOIL))
	else tagged "sc_fsm_tag_FSM_STATE_POSING"			("SC_FSM_Define_FSM_Enter" state(POSING))	
	else tagged "sc_fsm_tag_FSM_STATE_IDLE"				("SC_FSM_Define_FSM_Enter" state(IDLE))	
	else 
		{Call "SC_Request_Call_State_Default"}
	}
}

{on "SC_FSM_Call_Exit_All_States" overload 
;	("SC_FSM_Define_FSM_Exit" state(COVER))	
	("SC_FSM_Define_FSM_Exit" state(DEATH))	
;	("SC_FSM_Define_FSM_Exit" state(GESTURES))	
	("SC_FSM_Define_FSM_Exit" state(IDLE))	
	("SC_FSM_Define_FSM_Exit" state(MELEE))		
	("SC_FSM_Define_FSM_Exit" state(MOVE))	
	("SC_FSM_Define_FSM_Exit" state(POSING))		
	("SC_FSM_Define_FSM_Exit" state(TURN))
	("SC_FSM_Define_FSM_Exit" state(RECOIL))
;	("SC_FSM_Define_FSM_Exit" state(RELOAD))	
;	("SC_FSM_Define_FSM_Exit" state(SPECIAL))
	("SC_FSM_Define_FSM_Exit" state(SYNCKILL))	
;	("SC_FSM_Define_FSM_Exit" state(THROWN))
;	("SC_FSM_Define_FSM_Exit" state(THROWNLAND))		
}



















