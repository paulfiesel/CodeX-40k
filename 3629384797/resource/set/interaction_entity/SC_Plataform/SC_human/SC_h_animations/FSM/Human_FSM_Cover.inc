
(Include "Animation/GEM_Default/Cover.inc")
(Include "Animation/LV40k_Orks/Cover.inc")
(Include "Animation/LV40k_Termagaunt/Cover.inc")
(Include "Animation/LV40k_Warrior/Cover.inc")
(Include "Animation/LV40k_Ravener/Cover.inc")
(Include "Animation/LV40k_Zoanthrope/Cover.inc")
(Include "Animation/LV40k_Venomthrope/Cover.inc")
(Include "Animation/LV40k_Space_Marines/Cover.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; [...]

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_COVER_Define_Enter"	
	; [...]
)

(define "SC_FSM_COVER_Define_Event"
	{if not cover_type "snipe_cover"

;//		{If tagged "sc_H_request_tag_squat_hidden"
;//			("SC_FSM_COVER_GEM_Default_Squat_Hide_Peek")
;//			("SC_FSM_COVER_LV40k_Space_Marine_Squat_Hide_Peek")
;//			("SC_FSM_COVER_LV40k_Orkboy_Squat_Hide_Peek")
;//		else 
			{tags add "sc_H_request_tag_squat_hidden"}
			("SC_FSM_COVER_GEM_Default_Squat_Hide_Close")
			("SC_FSM_COVER_LV40k_Space_Marine_Squat_Hide_Close")
			("SC_FSM_COVER_LV40k_Orkboy_Squat_Hide_Close")
;//		}

	else
		{If squatting
			("SC_FSM_COVER_GEM_Default_Snipe_Peek")
			("SC_FSM_COVER_LV40k_Orkboy_Snipe_Peek")
			("SC_FSM_COVER_LV40k_Space_Marine_Snipe_Peek")
			("SC_FSM_COVER_LV40k_Termagaunt_Snipe_Peek")
			("SC_FSM_COVER_LV40k_Warrior_Snipe_Peek")
			("SC_FSM_COVER_LV40k_Ravener_Snipe_Peek")
			("SC_FSM_COVER_LV40k_Zoanthrope_Snipe_Peek")
			("SC_FSM_COVER_LV40k_Venomthrope_Snipe_Peek")
		else 
			("SC_FSM_COVER_GEM_Default_Snipe_Close")
			("SC_FSM_COVER_LV40k_Orkboy_Snipe_Close")
			("SC_FSM_COVER_LV40k_Space_Marine_Snipe_Close")
			("SC_FSM_COVER_LV40k_Termagaunt_Snipe_Close")
			("SC_FSM_COVER_LV40k_Warrior_Snipe_Close")
			("SC_FSM_COVER_LV40k_Ravener_Snipe_Close")
			("SC_FSM_COVER_LV40k_Zoanthrope_Snipe_Close")
			("SC_FSM_COVER_LV40k_Venomthrope_Snipe_Close")
		}
	}
)

(define "SC_FSM_COVER_Define_Exit"
	("SC_FSM_COVER_GEM_Default_Stop_All")
	("SC_FSM_COVER_LV40k_Orkboy_Stop_All")
	("SC_FSM_COVER_LV40k_Space_Marine_Stop_All")
	("SC_FSM_COVER_LV40k_Termagaunt_Stop_All")
	("SC_FSM_COVER_LV40k_Warrior_Stop_All")
	("SC_FSM_COVER_LV40k_Ravener_Stop_All")
	("SC_FSM_COVER_LV40k_Zoanthrope_Stop_All")
	("SC_FSM_COVER_LV40k_Venomthrope_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_COVER_GEM_Default_Events")
("SC_FSM_COVER_LV40k_Orkboy_Events")
("SC_FSM_COVER_LV40k_Space_Marine_Events")
("SC_FSM_COVER_LV40k_Termagaunt_Events")
("SC_FSM_COVER_LV40k_Warrior_Events")
("SC_FSM_COVER_LV40k_Ravener_Events")
("SC_FSM_COVER_LV40k_Zoanthrope_Events")
("SC_FSM_COVER_LV40k_Venomthrope_Events")

