	
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; // ...

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_MELEE_Define_Enter"
	{Kill_delay "sc_fsm_melee_delay_reset_state"}
	
;//	("SC_TP_Main_Define_Chassis_Disable")
	("SC_TP_Main_Define_IKs_Disable")
	("SC_TP_Main_Define_Weaponry_Disable_All_Ranged")
	("SC_TP_Main_Define_Weaponry_Disable_All_Melee")
)

(define "SC_FSM_MELEE_Define_Event"
	("SC_M_Talk_Define_V_melee_strike")
	
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
	
;//	("SC_TP_Main_Define_Chassis_Enable")
	("SC_TP_Main_Define_IKs_Enable")
	("SC_TP_Main_Define_Weaponry_Enable_All_Ranged")
	("SC_TP_Main_Define_Weaponry_Enable_All_Melee")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

(define "SC_FSM_MELEE_Define_Animation_End"
	
	; // WILL CRASH WITHOUT THE DELAY!
	{delay 0.1 "sc_fsm_melee_delay_reset_state"				
		("SC_FSM_Define_Update_FSM" do(remove) state(MELEE))
	}
)

{on animation_end "melee1" 	("SC_FSM_MELEE_Define_Animation_End")}
{on animation_end "melee2" 	("SC_FSM_MELEE_Define_Animation_End")}
{on animation_end "melee3" 	("SC_FSM_MELEE_Define_Animation_End")}
{on animation_end "melee4" 	("SC_FSM_MELEE_Define_Animation_End")}
{on animation_end "melee5" 	("SC_FSM_MELEE_Define_Animation_End")}
{on animation_end "melee6" 	("SC_FSM_MELEE_Define_Animation_End")}



