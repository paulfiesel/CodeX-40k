
;#//(Include "Animation/GEM_Default/Death.inc")		<- not necessary.

(Include "Animation/LV40k_Termagaunt/Death.inc")

;#//(Include "Animation/LV40k_Nobs/Death.inc")
;#//(Include "Animation/LV40k_Orks/Death.inc")
;#//(Include "Animation/LV40k_Spacemarine/Death.inc")
;#//(Include "Animation/LV40k_Warrior/Death.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; [...]

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_DEATH_Define_Enter"
)

(define "SC_FSM_DEATH_Define_Event"
	("SC_FSM_DEATH_LV40k_Termagaunt_Play_Death")
)

(define "SC_FSM_DEATH_Define_Exit"
	("SC_FSM_DEATH_LV40k_Termagaunt_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_DEATH_LV40k_Termagaunt_Events")




