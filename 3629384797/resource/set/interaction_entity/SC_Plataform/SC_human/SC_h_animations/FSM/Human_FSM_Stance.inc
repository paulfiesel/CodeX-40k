
(Include "Animation/GEM_Default/Stance.inc")
(Include "Animation/LV40k_Orks/Stance.inc")
(Include "Animation/LV40k_Ravener/Stance.inc")
(Include "Animation/LV40k_Termagaunt/Stance.inc")
(Include "Animation/LV40k_Warrior/Stance.inc")
(Include "Animation/LV40k_Zoanthrope/Stance.inc")
(Include "Animation/LV40k_Venomthrope/Stance.inc")
(Include "Animation/LV40k_Space_Marines/Stance.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

(Define "SC_FSM_STANCE_Define_Animation_End"
	; [...]
)

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_STANCE_Define_Enter"
	{Kill_Delay "SC_FSM_Stance_Delay_Toggle"}
)

(define "SC_FSM_STANCE_Define_Event"
	("SC_FSM_STANCE_GEM_Default_Stop_All")
	("SC_FSM_STANCE_LV40k_Space_Marine_Stop_All")
	("SC_FSM_STANCE_LV40k_Orkboy_Stop_All")
	("SC_FSM_STANCE_LV40k_Ravener_Stop_All")
	("SC_FSM_STANCE_LV40k_Termagaunt_Stop_All")
	("SC_FSM_STANCE_LV40k_Warrior_Stop_All")
	("SC_FSM_STANCE_LV40k_Zoanthrope_Stop_All")
	("SC_FSM_STANCE_LV40k_Venomthrope_Stop_All")

	{if tagged "sc_request_tag_stand_to_Squat"
		("SC_FSM_STANCE_GEM_Default_Stand_To_Crouch")
		("SC_FSM_STANCE_LV40k_Space_Marine_Stand_To_Crouch")
		("SC_FSM_STANCE_LV40k_Orkboy_Stand_To_Crouch")
		("SC_FSM_STANCE_LV40k_Ravener_Stand_To_Crouch")
		("SC_FSM_STANCE_LV40k_Termagaunt_Stand_To_Crouch")
		("SC_FSM_STANCE_LV40k_Warrior_Stand_To_Crouch")
		("SC_FSM_STANCE_LV40k_Zoanthrope_Stand_To_Crouch")
		("SC_FSM_STANCE_LV40k_Venomthrope_Stand_To_Crouch")
	}
	{if tagged "sc_request_tag_stand_to_prone"
		("SC_FSM_STANCE_GEM_Default_Stand_To_Prone")
		("SC_FSM_STANCE_LV40k_Space_Marine_Stand_To_Prone")
		("SC_FSM_STANCE_LV40k_Orkboy_Stand_To_Prone")
		("SC_FSM_STANCE_LV40k_Ravener_Stand_To_Prone")
		("SC_FSM_STANCE_LV40k_Termagaunt_Stand_To_Prone")
		("SC_FSM_STANCE_LV40k_Warrior_Stand_To_Prone")
		("SC_FSM_STANCE_LV40k_Zoanthrope_Stand_To_Prone")
		("SC_FSM_STANCE_LV40k_Venomthrope_Stand_To_Prone")
	}
	{if tagged "sc_request_tag_squat_to_stand"
		("SC_FSM_STANCE_GEM_Default_Crouch_To_Stand")
		("SC_FSM_STANCE_LV40k_Space_Marine_Crouch_To_Stand")
		("SC_FSM_STANCE_LV40k_Orkboy_Crouch_To_Stand")
		("SC_FSM_STANCE_LV40k_Ravener_Crouch_To_Stand")
		("SC_FSM_STANCE_LV40k_Termagaunt_Crouch_To_Stand")
		("SC_FSM_STANCE_LV40k_Warrior_Crouch_To_Stand")
		("SC_FSM_STANCE_LV40k_Zoanthrope_Crouch_To_Stand")
		("SC_FSM_STANCE_LV40k_Venomthrope_Crouch_To_Stand")
	}
	{if tagged "sc_request_tag_squat_to_prone"
		("SC_FSM_STANCE_GEM_Default_Crouch_To_Prone")
		("SC_FSM_STANCE_LV40k_Space_Marine_Crouch_To_Prone")
		("SC_FSM_STANCE_LV40k_Orkboy_Crouch_To_Prone")
		("SC_FSM_STANCE_LV40k_Ravener_Crouch_To_Prone")
		("SC_FSM_STANCE_LV40k_Termagaunt_Crouch_To_Prone")
		("SC_FSM_STANCE_LV40k_Warrior_Crouch_To_Prone")
		("SC_FSM_STANCE_LV40k_Zoanthrope_Crouch_To_Prone")
		("SC_FSM_STANCE_LV40k_Venomthrope_Crouch_To_Prone")
	}
	{if tagged "sc_request_tag_Prone_to_stand"
		("SC_FSM_STANCE_GEM_Default_Prone_To_Stand")
		("SC_FSM_STANCE_LV40k_Space_Marine_Prone_To_Stand")
		("SC_FSM_STANCE_LV40k_Orkboy_Prone_To_Stand")
		("SC_FSM_STANCE_LV40k_Ravener_Prone_To_Stand")
		("SC_FSM_STANCE_LV40k_Termagaunt_Prone_To_Stand")
		("SC_FSM_STANCE_LV40k_Warrior_Prone_To_Stand")
		("SC_FSM_STANCE_LV40k_Zoanthrope_Prone_To_Stand")
		("SC_FSM_STANCE_LV40k_Venomthrope_Prone_To_Stand")
	}
	{if tagged "sc_request_tag_Prone_to_squat"
		("SC_FSM_STANCE_GEM_Default_Prone_To_Crouch")
		("SC_FSM_STANCE_LV40k_Space_Marine_Prone_To_Crouch")
		("SC_FSM_STANCE_LV40k_Orkboy_Prone_To_Crouch")
		("SC_FSM_STANCE_LV40k_Ravener_Prone_To_Crouch")
		("SC_FSM_STANCE_LV40k_Termagaunt_Prone_To_Crouch")
		("SC_FSM_STANCE_LV40k_Warrior_Prone_To_Crouch")
		("SC_FSM_STANCE_LV40k_Zoanthrope_Prone_To_Crouch")
		("SC_FSM_STANCE_LV40k_Venomthrope_Prone_To_Crouch")
	}
	{Tags remove "sc_request_tag_stand_to_squat"}
	{Tags remove "sc_request_tag_squat_to_stand"}
	{Tags remove "sc_request_tag_Stand_to_prone"}
	{Tags remove "sc_request_tag_Prone_to_Stand"}
	{Tags remove "sc_request_tag_squat_to_Prone"}
	{Tags remove "sc_request_tag_Prone_to_squat"}
)

(define "SC_FSM_STANCE_Define_Exit"
	; // [...] Must be played in Animation Start since this FSM has a hardcoded safe-lock in the game engine.
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_STANCE_GEM_Default_Events")
("SC_FSM_STANCE_LV40k_Space_Marine_Events")
("SC_FSM_STANCE_LV40k_Orkboy_Events")
("SC_FSM_STANCE_LV40k_Ravener_Events")
("SC_FSM_STANCE_LV40k_Termagaunt_Events")
("SC_FSM_STANCE_LV40k_Warrior_Events")
("SC_FSM_STANCE_LV40k_Zoanthrope_Events")
("SC_FSM_STANCE_LV40k_Venomthrope_Events")





