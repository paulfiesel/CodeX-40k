	
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; ...

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_MELEE_Define_Enter"
	{Kill_delay "sc_fsm_melee_delay_reset_state"}
	
	("SC_WK_Request_Define_Disable_Main_Weapons")
;//	("SC_WK_Request_Define_Disable_Chassis")
	
;//	{Call_Synced "SC_WK_Request_Call_Fix_Chassis"}	; // <- this handles physics, must be synced...
)

(define "SC_FSM_MELEE_Define_Event"
	("SC_M_Talk_Define_V_angry_brsrk")
	
	{Delay 0.1 "sc_fsm_melee_delay_animation" {Call "SC_FSM_MELEE_Call_Play_Animations"}}	; // BUZZ: <- delay is a must in MP due to netcode...
)

(define "SC_FSM_MELEE_Define_Exit"
	{Ani_Stop "melee1"}
	{Ani_Stop "melee2"}
	{Ani_Stop "melee3"}
	{Ani_Stop "melee4"}
	{Ani_Stop "melee5"}
	{Ani_Stop "melee6"}
	{Kill_delay "sc_fsm_melee_delay_animation"}
	
	("SC_WK_Request_Define_Enable_Main_Weapons")
;//	("SC_WK_Request_Define_Enable_Chassis")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

(define "SC_FSM_MELEE_Define_Animation_End"
	
	; // WILL CRASH WITHOUT THE DELAY!
	{delay 0.1 "sc_fsm_melee_delay_reset_state"						
		("SC_FSM_Define_Update_FSM" do(remove) state(MELEE))
		
		{If tagged "SC_WK_Request_Tag_Stunned" {call "driver_revive"} {Call "crew_revive"}}
	}
)

{on animation_end "melee1"  ("SC_FSM_MELEE_Define_Animation_End")}
{on animation_end "melee2"  ("SC_FSM_MELEE_Define_Animation_End")}
{on animation_end "melee3"  ("SC_FSM_MELEE_Define_Animation_End")}



