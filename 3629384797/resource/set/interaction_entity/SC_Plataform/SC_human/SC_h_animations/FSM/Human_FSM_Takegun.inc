
(Include "Animation/GEM_Default/Takegun.inc")
(Include "Animation/LV40k_Orks/Takegun.inc")
(Include "Animation/LV40k_Space_Marines/Takegun.inc")

;//(Include "Animation/LV40k_Termagaunt/Takegun.inc")
;//(Include "Animation/LV40k_Zoanthrope/Takegun.inc")
;//(Include "Animation/LV40k_Ravener/Takegun.inc")
;//(Include "Animation/LV40k_Warrior/Takegun.inc")
;//(Include "Animation/LV40k_Termagaunt/Takegun.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; [...]

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_TAKEGUN_Define_Enter"
	; [...]
)

(define "SC_FSM_TAKEGUN_Define_Event"	
	{if not "sc_human_flag_anm_has_weapon"
		{if lying
			("SC_FSM_TAKEGUN_GEM_Default_Play_Take_Lying" in(1))
			("SC_FSM_TAKEGUN_LV40k_Space_Marine_Play_Take_Lying" in(1))
			("SC_FSM_TAKEGUN_LV40k_Orkboy_Play_Take_Lying" in(1))
		else squatting
			("SC_FSM_TAKEGUN_GEM_Default_Play_Take_Squatting" in(1))
			("SC_FSM_TAKEGUN_LV40k_Space_Marine_Play_Take_Squatting" in(1))
			("SC_FSM_TAKEGUN_LV40k_Orkboy_Play_Take_Squatting" in(1))
		else standing
			("SC_FSM_TAKEGUN_GEM_Default_Play_Take_Standing" in(1))
			("SC_FSM_TAKEGUN_LV40k_Space_Marine_Play_Take_Standing" in(1))
			("SC_FSM_TAKEGUN_LV40k_Orkboy_Play_Take_Standing" in(1))
		}
	else
		{if lying
			("SC_FSM_TAKEGUN_GEM_Default_Play_Take_Lying" in(-1))
			("SC_FSM_TAKEGUN_LV40k_Space_Marine_Play_Take_Lying" in(-1))
			("SC_FSM_TAKEGUN_LV40k_Orkboy_Play_Take_Lying" in(-1))
		else squatting
			("SC_FSM_TAKEGUN_GEM_Default_Play_Take_Squatting" in(-1))
			("SC_FSM_TAKEGUN_LV40k_Space_Marine_Play_Take_Squatting" in(-1))
			("SC_FSM_TAKEGUN_LV40k_Orkboy_Play_Take_Squatting" in(-1))
		else standing
			("SC_FSM_TAKEGUN_GEM_Default_Play_Take_Standing" in(-1))
			("SC_FSM_TAKEGUN_LV40k_Space_Marine_Play_Take_Standing" in(-1))
			("SC_FSM_TAKEGUN_LV40k_Orkboy_Play_Take_Standing" in(-1))
		}
	}
)

(define "SC_FSM_TAKEGUN_Define_Exit"
	("SC_FSM_TAKEGUN_GEM_Default_Stop_All")
	("SC_FSM_TAKEGUN_LV40k_Space_Marine_Stop_All")
	("SC_FSM_TAKEGUN_LV40k_Orkboy_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_TAKEGUN_GEM_Default_Events")
("SC_FSM_TAKEGUN_LV40k_Space_Marine_Events")
("SC_FSM_TAKEGUN_LV40k_Orkboy_Events")
