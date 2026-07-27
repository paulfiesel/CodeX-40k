	
(Include "Animation/GEM_Default/Recoil.inc")
(Include "Animation/LV40k_Orks/Recoil.inc")
(Include "Animation/LV40k_Termagaunt/Recoil.inc")
(Include "Animation/LV40k_Ravener/Recoil.inc")
(Include "Animation/LV40k_Venomthrope/Recoil.inc")
(Include "Animation/LV40k_Zoanthrope/Recoil.inc")
(Include "Animation/LV40k_Warrior/Recoil.inc")
(Include "Animation/LV40k_Space_Marines/Recoil.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

(Define "SC_FSM_RECOIL_Define_Animation_End"	
	{If tagged "SC_FSM_TAG_FSM_STATE_RECOIL"
		{Kill_Delay "SC_FSM_RECOIL_Delay"}
		{delay 0.1 "SC_FSM_RECOIL_Delay"				
			("SC_FSM_Define_Update_FSM" do(remove) state(RECOIL))
		}
	}
)

(Define "SC_FSM_RECOIL_Define_Play_Animations"
	; [...]
)

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_RECOIL_Define_Enter"
)

(define "SC_FSM_RECOIL_Define_Event"
	{if in_cover
		("SC_FSM_RECOIL_Define_Exit")
	else linked
		("SC_FSM_RECOIL_Define_Exit")
	else lying
		("SC_FSM_RECOIL_GEM_Default_Play_Lying")
		("SC_FSM_RECOIL_LV40k_Orkboy_Play_Lying")
		("SC_FSM_RECOIL_LV40k_Space_Marine_Play_Lying")
		
		; // Mask - Temp
		("SC_FSM_RECOIL_LV40k_Termagaunt_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Warrior_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Venomthrope_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Ravener_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Zoanthrope_Play_Squatting")
		
	else squatting
		("SC_FSM_RECOIL_GEM_Default_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Orkboy_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Space_Marine_Play_Squatting")
		
		("SC_FSM_RECOIL_LV40k_Termagaunt_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Warrior_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Venomthrope_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Ravener_Play_Squatting")
		("SC_FSM_RECOIL_LV40k_Zoanthrope_Play_Squatting")
		
	else standing
		("SC_FSM_RECOIL_GEM_Default_Play_Standing")
		("SC_FSM_RECOIL_LV40k_Orkboy_Play_Standing")
		("SC_FSM_RECOIL_LV40k_Space_Marine_Play_Standing")
		
		("SC_FSM_RECOIL_LV40k_Termagaunt_Play_Standing")
		("SC_FSM_RECOIL_LV40k_Warrior_Play_Standing")
		("SC_FSM_RECOIL_LV40k_Venomthrope_Play_Standing")
		("SC_FSM_RECOIL_LV40k_Ravener_Play_Standing")
		("SC_FSM_RECOIL_LV40k_Zoanthrope_Play_Standing")
	}
)

(define "SC_FSM_RECOIL_Define_Exit"
	("SC_FSM_RECOIL_GEM_Default_Stop_All")
	("SC_FSM_RECOIL_LV40k_Orkboy_Stop_All")
	("SC_FSM_RECOIL_LV40k_Space_Marine_Stop_All")
	
	("SC_FSM_RECOIL_LV40k_Termagaunt_Stop_All")
	("SC_FSM_RECOIL_LV40k_Warrior_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_RECOIL_GEM_Default_Events")
("SC_FSM_RECOIL_LV40k_Orkboy_Events")
("SC_FSM_RECOIL_LV40k_Space_Marine_Events")

("SC_FSM_RECOIL_LV40k_Termagaunt_Events")
("SC_FSM_RECOIL_LV40k_Warrior_Events")