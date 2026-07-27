
(Include "Animation/GEM_Default/Posing.inc")
(Include "Animation/LV40k_Termagaunt/Posing.inc")

;#//(Include "Animation/LV40k_Nobs/Posing.inc")
;#//(Include "Animation/LV40k_Orks/Posing.inc")
;#//(Include "Animation/LV40k_Spacemarine/Posing.inc")
;#//(Include "Animation/LV40k_Warrior/Posing.inc")

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
	{if not tagged "SC_H_Request_Tag_Idle_Animation"
		{tags add "SC_H_Request_Tag_Idle_Animation"}
		
		("SC_FSM_POSING_GEM_Default_Play_Posing")
		("SC_FSM_POSING_LV40k_Termagaunt_Play_Posing")
	}
)

(define "SC_FSM_POSING_Define_Exit"
	{Tags remove "SC_H_Request_Tag_Idle_Animation"}
	
	("SC_FSM_POSING_GEM_Default_Stop_All")
	("SC_FSM_POSING_LV40k_Termagaunt_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_POSING_GEM_Default_Events")
("SC_FSM_POSING_LV40k_Termagaunt_Events")
	