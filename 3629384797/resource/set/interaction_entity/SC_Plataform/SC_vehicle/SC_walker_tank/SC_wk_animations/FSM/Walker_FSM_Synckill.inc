
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

(define "SC_FSM_DEATH_Define_Spawn_Gore"	; // BUZZ: <- self explaining name.
	{spawn "bloodsparks_bigest-d" "%b1" x}
	{if rand 0.5 {spawn "bomb_cluster_meat1" "%b1" x}}
	{if rand 0.5 {spawn "bomb_cluster_meat1" "%b1" x}}
	{if rand 0.5 {spawn "bomb_organs_pulmones" "%b3" x}}
	{if rand 0.5 {spawn "bomb_organs_kidney" "%b3" x}}
	{if rand 0.5 {spawn "bomb_organs_aye" "%b3" x}}
	{if rand 0.5 {spawn "bomb_organs_braine" "%b2" x}}
	{if rand 0.5 {spawn "bomb_organs_kidney" "%b1" x}}
	{if not tagged "sc_fsm_death_tag_do_not_delete_body" {if rand 0.5 {delay 20 {call "explosion"}}}}	; // BUZZ: <- performance boost. 50% of the bodies are deleted by the script.
)

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_DEATH_Define_Enter"
	{if not dead 
		("SC_M_Talk_Define_V_death_scream")
		{volumes disable contact overlap blast}    
		{die}
		
		{kill_delay "sc_fsm_melee_delay_spawn_melee"}
	}
)

(define "SC_FSM_DEATH_Define_Event"
	{Call "SC_FSM_DEATH_Call_Play_Animations"}
)

(define "SC_FSM_DEATH_Define_Exit"
	; // there is no exit in death...
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

