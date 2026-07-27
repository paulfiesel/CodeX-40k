
(Include "Animation/GEM_Default/Idle.inc")
(Include "Animation/LV40k_Termagaunt/Idle.inc")

;#//(Include "Animation/LV40k_Nobs/Idle.inc")
;#//(Include "Animation/LV40k_Orks/Idle.inc")
;#//(Include "Animation/LV40k_Termagaunt/Idle.inc")
;#//(Include "Animation/LV40k_Warrior/Idle.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; [...]

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_IDLE_Define_Enter"	
	; [...]
)

(define "SC_FSM_IDLE_Define_Event"
	("SC_FSM_IDLE_GEM_Default_Play_Idle")
	("SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle")
)

(define "SC_FSM_IDLE_Define_Exit"
	("SC_FSM_IDLE_GEM_Default_Stop_All")
	("SC_FSM_IDLE_LV40k_Termagaunt_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_IDLE_GEM_Default_Events")
("SC_FSM_IDLE_LV40k_Termagaunt_Events")


