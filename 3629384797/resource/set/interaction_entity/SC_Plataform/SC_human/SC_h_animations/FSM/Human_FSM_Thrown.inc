
(Include "Animation/GEM_Default/Thrown.inc")
(Include "Animation/LV40k_Ravener/Thrown.inc")
(Include "Animation/LV40k_Termagaunt/Thrown.inc")
(Include "Animation/LV40k_Zoanthrope/Thrown.inc")
(Include "Animation/LV40k_Venomthrope/Thrown.inc")
(Include "Animation/LV40k_Warrior/Thrown.inc")
(Include "Animation/LV40k_Orks/Thrown.inc")

;#//(Include "Animation/LV40k_Nobs/Thrown.inc")
;#//(Include "Animation/LV40k_Termagaunt/Thrown.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

;	[...]

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_THROWN_Define_Enter"
	;	[...]
)

(define "SC_FSM_THROWN_Define_Event"
	{if tagged "sc_request_tag_thrown_landed"
		("SC_FSM_THROWN_GEM_Default_Play_Land")
		("SC_FSM_THROWN_LV40k_Termagaunt_Play_Land")
		("SC_FSM_THROWN_LV40k_Zoanthrope_Play_Land")
		("SC_FSM_THROWN_LV40k_Venomthrope_Play_Land")
		("SC_FSM_THROWN_LV40k_Warrior_Play_Land")
		("SC_FSM_THROWN_LV40k_Orkboy_Play_Land")
		("SC_FSM_THROWN_LV40k_Ravener_Play_Land")
	else tagged "sc_request_tag_thrown_getup"
		("SC_FSM_THROWN_GEM_Default_Play_Getup")
		("SC_FSM_THROWN_LV40k_Termagaunt_Play_Getup")
		("SC_FSM_THROWN_LV40k_Zoanthrope_Play_Getup")
		("SC_FSM_THROWN_LV40k_Venomthrope_Play_Getup")
		("SC_FSM_THROWN_LV40k_Warrior_Play_Getup")
		("SC_FSM_THROWN_LV40k_Orkboy_Play_Getup")
		("SC_FSM_THROWN_LV40k_Ravener_Play_Getup")
	else
		("SC_FSM_THROWN_GEM_Default_Play_Thrown")
		("SC_FSM_THROWN_LV40k_Termagaunt_Play_Thrown")
		("SC_FSM_THROWN_LV40k_Zoanthrope_Play_Thrown")
		("SC_FSM_THROWN_LV40k_Venomthrope_Play_Thrown")
		("SC_FSM_THROWN_LV40k_Warrior_Play_Thrown")
		("SC_FSM_THROWN_LV40k_Orkboy_Play_Thrown")
		("SC_FSM_THROWN_LV40k_Ravener_Play_Thrown")
	}
)

(define "SC_FSM_THROWN_Define_Exit"
	("SC_FSM_THROWN_GEM_Default_Stop_All")
	("SC_FSM_THROWN_LV40k_Termagaunt_Stop_All")
	("SC_FSM_THROWN_LV40k_Zoanthrope_Stop_All")
	("SC_FSM_THROWN_LV40k_Venomthrope_Stop_All")
	("SC_FSM_THROWN_LV40k_Warrior_Stop_All")
	("SC_FSM_THROWN_LV40k_Orkboy_Stop_All")
	("SC_FSM_THROWN_LV40k_Ravener_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_THROWN_GEM_Default_Events")
("SC_FSM_THROWN_LV40k_Termagaunt_Events")
("SC_FSM_THROWN_LV40k_Zoanthrope_Events")
("SC_FSM_THROWN_LV40k_Venomthrope_Events")
("SC_FSM_THROWN_LV40k_Warrior_Events")
("SC_FSM_THROWN_LV40k_Orkboy_Events")
("SC_FSM_THROWN_LV40k_Ravener_Events")





