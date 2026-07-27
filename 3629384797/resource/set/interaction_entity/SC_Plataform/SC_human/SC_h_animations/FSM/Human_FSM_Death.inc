
;#//(Include "Animation/GEM_Default/Death.inc")		<- not necessary.

(Include "Animation/LV40k_Termagaunt/Death.inc")
(Include "Animation/LV40k_Warrior/Death.inc")
(Include "Animation/LV40k_Ravener/Death.inc")
(Include "Animation/LV40k_Zoanthrope/Death.inc")
(Include "Animation/LV40k_Venomthrope/Death.inc")

;#//(Include "Animation/LV40k_Nobs/Death.inc")
;#//(Include "Animation/LV40k_Orks/Death.inc")
;#//(Include "Animation/LV40k_Spacemarine/Death.inc")

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
	("SC_FSM_DEATH_LV40k_Warrior_Play_Death")
	("SC_FSM_DEATH_LV40k_Zoanthrope_Play_Death")
	("SC_FSM_DEATH_LV40k_Venomthrope_Play_Death")
	("SC_FSM_DEATH_LV40k_Ravener_Play_Death")
)

(define "SC_FSM_DEATH_Define_Exit"
	("SC_FSM_DEATH_LV40k_Termagaunt_Stop_All")
	("SC_FSM_DEATH_LV40k_Warrior_Stop_All")
	("SC_FSM_DEATH_LV40k_Zoanthrope_Stop_All")
	("SC_FSM_DEATH_LV40k_Venomthrope_Stop_All")
	("SC_FSM_DEATH_LV40k_Ravener_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_DEATH_LV40k_Termagaunt_Events")
("SC_FSM_DEATH_LV40k_Warrior_Events")
("SC_FSM_DEATH_LV40k_Zoanthrope_Events")
("SC_FSM_DEATH_LV40k_Venomthrope_Events")
("SC_FSM_DEATH_LV40k_Ravener_Events")





