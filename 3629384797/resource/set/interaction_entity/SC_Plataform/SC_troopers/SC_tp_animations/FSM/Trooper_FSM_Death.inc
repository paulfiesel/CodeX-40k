
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; [...]

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_DEATH_Define_Enter"
	{if not dead 
		("SC_M_Talk_Define_V_death_scream")
		{able minimap 0}
		{volumes disable contact overlap blast}    
		{die}
		
	;//	{if prop "SC_plataform_prop_troopers_human_carrier" 	; <- OLD SCRAPPED!
	;//		{volumes disable contact overlap blast}    
	;//		{auto_operatable 0}
	;//		{Able select 0}
	;//		{Able minimap 0}	
	;//	}
	}
)

(define "SC_FSM_DEATH_Define_Event"
	{Call "SC_FSM_DEATH_Call_Play_Animations"}
	{Kill_delay "sc_fsm_melee_delay_animation"}		; // <- Stops delay timer in FSM Melee that restarts animations.
)

(define "SC_FSM_DEATH_Define_Exit"
	; [...]
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

; [...]