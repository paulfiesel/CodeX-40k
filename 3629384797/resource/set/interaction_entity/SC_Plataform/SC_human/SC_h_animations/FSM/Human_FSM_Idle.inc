
(Include "Animation/GEM_Default/Idle.inc")
(Include "Animation/LV40k_Space_Marines/Idle.inc")
(Include "Animation/LV40k_Termagaunt/Idle.inc")
(Include "Animation/LV40k_Zoanthrope/Idle.inc")
(Include "Animation/LV40k_Venomthrope/Idle.inc")
(Include "Animation/LV40k_Ravener/Idle.inc")
(Include "Animation/LV40k_Warrior/Idle.inc")
(Include "Animation/LV40k_Orks/Idle.inc")

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
	{if lying
		("SC_FSM_IDLE_GEM_Default_Play_Idle_Lying")
		("SC_FSM_IDLE_LV40k_Orkboy_Play_Idle_Lying")
		("SC_FSM_IDLE_LV40k_Space_Marine_Play_Idle_Lying")
		
		; {} // Mask - Temp
		("SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle_Crouch")
		("SC_FSM_IDLE_LV40k_Zoanthrope_Play_Idle_Crouch")
		("SC_FSM_IDLE_LV40k_Venomthrope_Play_Idle_Crouch")
		("SC_FSM_IDLE_LV40k_Warrior_Play_Idle_Crouch")
		("SC_FSM_IDLE_LV40k_Ravener_Play_Idle_Crouch")
	
	else squatting
		{if cover_type "hide_stand"			
			("SC_FSM_IDLE_GEM_Default_Play_Idle_Crouch")
			("SC_FSM_IDLE_LV40k_Orkboy_Play_Idle_Crouch")
			("SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle_Crouch")
			("SC_FSM_IDLE_LV40k_Zoanthrope_Play_Idle_Crouch")
			("SC_FSM_IDLE_LV40k_Venomthrope_Play_Idle_Crouch")
			("SC_FSM_IDLE_LV40k_Warrior_Play_Idle_Crouch")
			("SC_FSM_IDLE_LV40k_Ravener_Play_Idle_Crouch")
			("SC_FSM_IDLE_LV40k_Space_Marine_Play_Idle_Crouch")
		
		else tagged "sc_H_request_tag_squat_hidden"
			; [...]
			
		else
			{if not tagged "sc_H_request_tag_snipe_closed_animation"
				("SC_FSM_IDLE_GEM_Default_Play_Idle_Crouch")
				("SC_FSM_IDLE_LV40k_Orkboy_Play_Idle_Crouch")
				("SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle_Crouch")
				("SC_FSM_IDLE_LV40k_Zoanthrope_Play_Idle_Crouch")
				("SC_FSM_IDLE_LV40k_Venomthrope_Play_Idle_Crouch")
				("SC_FSM_IDLE_LV40k_Warrior_Play_Idle_Crouch")
				("SC_FSM_IDLE_LV40k_Ravener_Play_Idle_Crouch")
				("SC_FSM_IDLE_LV40k_Space_Marine_Play_Idle_Crouch")
			}
		}
	
	else
		{if cover_type "snipe_cover"									
			("SC_FSM_IDLE_GEM_Default_Play_Idle_Snipe")
			("SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle_Snipe")
			("SC_FSM_IDLE_LV40k_Zoanthrope_Play_Idle_Snipe")
			("SC_FSM_IDLE_LV40k_Venomthrope_Play_Idle_Snipe")
			("SC_FSM_IDLE_LV40k_Space_Marine_Play_Idle_Snipe")
			("SC_FSM_IDLE_LV40k_Orkboy_Play_Idle_Snipe")
			("SC_FSM_IDLE_LV40k_Ravener_Play_Idle_Snipe")
			("SC_FSM_IDLE_LV40k_Warrior_Play_Idle_Snipe")
			
		else
			("SC_FSM_IDLE_GEM_Default_Play_Idle_Standing")
			("SC_FSM_IDLE_LV40k_Termagaunt_Play_Idle_Standing")
			("SC_FSM_IDLE_LV40k_Zoanthrope_Play_Idle_Standing")
			("SC_FSM_IDLE_LV40k_Venomthrope_Play_Idle_Standing")
			("SC_FSM_IDLE_LV40k_Space_Marine_Play_Idle_Standing")
			("SC_FSM_IDLE_LV40k_Orkboy_Play_Idle_Standing")
			("SC_FSM_IDLE_LV40k_Ravener_Play_Idle_Standing")
			("SC_FSM_IDLE_LV40k_Warrior_Play_Idle_Standing")
		}
	}
)

(define "SC_FSM_IDLE_Define_Exit"
	("SC_FSM_IDLE_GEM_Default_Stop_All")
	("SC_FSM_IDLE_LV40k_Termagaunt_Stop_All")
	("SC_FSM_IDLE_LV40k_Zoanthrope_Stop_All")
	("SC_FSM_IDLE_LV40k_Venomthrope_Stop_All")
	("SC_FSM_IDLE_LV40k_Space_Marine_Stop_All")
	("SC_FSM_IDLE_LV40k_Orkboy_Stop_All")
	("SC_FSM_IDLE_LV40k_Ravener_Stop_All")
	("SC_FSM_IDLE_LV40k_Warrior_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_IDLE_GEM_Default_Events")
("SC_FSM_IDLE_LV40k_Termagaunt_Events")
("SC_FSM_IDLE_LV40k_Zoanthrope_Events")
("SC_FSM_IDLE_LV40k_Venomthrope_Events")
("SC_FSM_IDLE_LV40k_Space_Marine_Events")
("SC_FSM_IDLE_LV40k_Orkboy_Events")
("SC_FSM_IDLE_LV40k_Ravener_Events")
("SC_FSM_IDLE_LV40k_Warrior_Events")

; // TEST!

{on animation_event "SC_test_idle"
	("SC_FSM_IDLE_GEM_Default_Stop_All")
	("SC_FSM_IDLE_LV40k_Termagaunt_Stop_All")
	("SC_FSM_IDLE_LV40k_Zoanthrope_Stop_All")
	("SC_FSM_IDLE_LV40k_Venomthrope_Stop_All")
	("SC_FSM_IDLE_LV40k_Space_Marine_Stop_All")
	("SC_FSM_IDLE_LV40k_Orkboy_Stop_All")
	("SC_FSM_IDLE_LV40k_Ravener_Stop_All")
	("SC_FSM_IDLE_LV40k_Warrior_Stop_All")
}