
;	<<<< ----------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: FSM Machine ===============] >>
;	<<<<------------------------------------------------------------------------------>>>>			 

(Include "/set/interaction_entity/SC_Plataform/SC_FSM/SC_FSM_Patterns.inc")

(Include "SC_grav_defines_anm.inc")
	
; ============================================================================================================================================ ;

(include "FSM/Grav_FSM_Board.inc")
(include "FSM/Grav_FSM_Bail.inc")
(include "FSM/Grav_FSM_Broken.inc")
(include "FSM/Grav_FSM_Death.inc")
(include "FSM/Grav_FSM_FIRE.inc")
(include "FSM/Grav_FSM_Idle.inc")
(include "FSM/Grav_FSM_Move_START.inc")
(include "FSM/Grav_FSM_Move_LOOP.inc")
(include "FSM/Grav_FSM_Move_STOP.inc")
(include "FSM/Grav_FSM_Turn.inc")

{on "SC_FSM_Call_Clear_Request_Tags" overload
}

{on "SC_FSM_Call_Update_States" overload 
	{if tagged  "sc_fsm_tag_FSM_STATE_DISABLED"
	else tagged "sc_fsm_tag_FSM_STATE_DEATH"			("SC_FSM_Define_FSM_Enter" state(DEATH))
	else tagged "sc_fsm_tag_FSM_STATE_BROKEN"			("SC_FSM_Define_FSM_Enter" state(BROKEN))	
	else tagged "sc_fsm_tag_FSM_STATE_BAIL"				("SC_FSM_Define_FSM_Enter" state(BAIL))	
	else tagged "sc_fsm_tag_FSM_STATE_BOARD"			("SC_FSM_Define_FSM_Enter" state(BOARD))	
	else tagged "sc_fsm_tag_FSM_STATE_FIRE"				("SC_FSM_Define_FSM_Enter" state(FIRE))	
	else tagged "sc_fsm_tag_FSM_STATE_MOVE_STOP"		("SC_FSM_Define_FSM_Enter" state(MOVE_STOP))	
	else tagged "sc_fsm_tag_FSM_STATE_MOVE_START"		("SC_FSM_Define_FSM_Enter" state(MOVE_START))	
	else tagged "sc_fsm_tag_FSM_STATE_MOVE_LOOP"		("SC_FSM_Define_FSM_Enter" state(MOVE_LOOP))	
	else tagged "sc_fsm_tag_FSM_STATE_TURN"				("SC_FSM_Define_FSM_Enter" state(TURN))	
	else tagged "sc_fsm_tag_FSM_STATE_IDLE"				("SC_FSM_Define_FSM_Enter" state(IDLE))	
	else 
		{Call "SC_Request_Call_State_Default"}
	}
}

{on "SC_FSM_Call_Exit_All_States" overload 
	("SC_FSM_Define_FSM_Exit" state(DEATH))	
	("SC_FSM_Define_FSM_Exit" state(IDLE))	
	("SC_FSM_Define_FSM_Exit" state(BOARD))	
	("SC_FSM_Define_FSM_Exit" state(FIRE))	
	("SC_FSM_Define_FSM_Exit" state(BAIL))	
	("SC_FSM_Define_FSM_Exit" state(BROKEN))	
	("SC_FSM_Define_FSM_Exit" state(MOVE_LOOP))	
	("SC_FSM_Define_FSM_Exit" state(MOVE_START))	
	("SC_FSM_Define_FSM_Exit" state(MOVE_STOP))	
	("SC_FSM_Define_FSM_Exit" state(TURN))
}



















