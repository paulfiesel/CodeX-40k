
(Include "Animation/GEM_Default/Posing.inc")
(Include "Animation/LV40k_Space_Marines/Posing.inc")
(Include "Animation/LV40k_Termagaunt/Posing.inc")
(Include "Animation/LV40k_Zoanthrope/Posing.inc")
(Include "Animation/LV40k_Venomthrope/Posing.inc")
(Include "Animation/LV40k_Ravener/Posing.inc")
(Include "Animation/LV40k_Warrior/Posing.inc")
(Include "Animation/LV40k_Orks/Posing.inc")
(Include "Animation/LV40k_Space_Marines/Posing.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; [...]

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_POSING_Define_Enter"
	; [...]
)

(define "SC_FSM_POSING_Define_Event"
	{if standing
		{if not tagged "SC_H_Request_Tag_Idle_Animation"
			{tags add "SC_H_Request_Tag_Idle_Animation"}
			
			("SC_FSM_POSING_GEM_Default_Play_Posing")
			("SC_FSM_POSING_LV40k_Space_Marine_Play_Posing")
			("SC_FSM_POSING_LV40k_Termagaunt_Play_Posing")
			("SC_FSM_POSING_LV40k_Zoanthrope_Play_Posing")
			("SC_FSM_POSING_LV40k_Venomthrope_Play_Posing")
			("SC_FSM_POSING_LV40k_Ravener_Play_Posing")
			("SC_FSM_POSING_LV40k_Orkboy_Play_Posing")
			("SC_FSM_POSING_LV40k_Warrior_Play_Posing")
		}
	else
		("SC_FSM_POSING_Define_Exit")
	}
)

(define "SC_FSM_POSING_Define_Exit"
	{kill_delay "sc_h_request_delay_posing"}
	{Tags remove "SC_H_Request_Tag_Idle_Animation"}	
	
	("SC_FSM_POSING_GEM_Default_Stop_All")
	("SC_FSM_POSING_LV40k_Space_Marine_Stop_All")
	("SC_FSM_POSING_LV40k_Termagaunt_Stop_All")
	("SC_FSM_POSING_LV40k_Zoanthrope_Stop_All")
	("SC_FSM_POSING_LV40k_Venomthrope_Stop_All")
	("SC_FSM_POSING_LV40k_Orkboy_Stop_All")
	("SC_FSM_POSING_LV40k_Ravener_Stop_All")
	("SC_FSM_POSING_LV40k_Warrior_Stop_All")
	
	{Kill_Delay "SC_FSM_POSING_Delay"}
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_POSING_GEM_Default_Events")
("SC_FSM_POSING_LV40k_Space_Marine_Events")
("SC_FSM_POSING_LV40k_Termagaunt_Events")
("SC_FSM_POSING_LV40k_Zoanthrope_Events")
("SC_FSM_POSING_LV40k_Venomthrope_Events")
("SC_FSM_POSING_LV40k_Orkboy_Events")
("SC_FSM_POSING_LV40k_Ravener_Events")
("SC_FSM_POSING_LV40k_Warrior_Events")
	
	