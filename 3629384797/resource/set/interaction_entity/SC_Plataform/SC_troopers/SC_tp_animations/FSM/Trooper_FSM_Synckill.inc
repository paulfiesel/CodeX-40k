
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; // ...

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_SYNCKILL_Define_Enter"
)

(define "SC_FSM_SYNCKILL_Define_Event"
	; // {Call "SC_FSM_SYNCKILL_Call_Play_Animations"}
	
	("SC_TP_Main_Define_AI_Disable")
	
	{if tagged "sync_dying_anm1"
		{call "die"}
		{player -1}
		{able minimap 0}
		{volumes disable contact overlap blast}    
		{die}
		{ani_play "syncdie_01"}
	else tagged "sync_dying_anm2"
		{call "die"}
		{player -1}
		{able minimap 0}
		{volumes disable contact overlap blast}    
		{die}
		{ani_play "syncdie_02"}
	else
		{if rand 0.5
			{call_synced "sync_kill_anm1"}
			{if tagged "sync_killin_an_ork"	{spawn "hi_orkboy_slugga_evilsunz_1" "sync_kill_victim" x	{call "sync_die_anm_1"}}}
		else
			{call_synced "sync_kill_anm2"}
			{if tagged "sync_killin_an_ork"	{spawn "hi_orkboy_slugga_evilsunz_1" "sync_kill_victim" x	{call "sync_die_anm_2"}}}
		}
	}
)

(define "SC_FSM_SYNCKILL_Define_Exit"
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

{on "sync_kill_anm1"
	{ani_play "synckill_01" callback}
}

{on "sync_kill_anm2"
	{ani_play "synckill_02" callback}
}


(define "SC_FSM_SYNCKILL_Define_Animation_End"
	
	; // WILL CRASH WITHOUT THE DELAY!
	{delay 0.01 "sc_fsm_SYNCKILL_delay_reset_state"
		("SC_TP_Main_Define_AI_Enable")
		("SC_FSM_Define_Update_FSM" do(remove) state(SYNCKILL))
	}
)

{on animation_end "synckill_01"	("SC_FSM_SYNCKILL_Define_Animation_End")}
{on animation_end "synckill_02"	("SC_FSM_SYNCKILL_Define_Animation_End")}



; // ...




