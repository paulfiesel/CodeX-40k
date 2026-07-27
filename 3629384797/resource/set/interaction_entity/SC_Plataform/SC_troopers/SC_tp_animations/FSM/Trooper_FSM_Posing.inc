
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; // ...

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_POSING_Define_Enter"
)

(define "SC_FSM_POSING_Define_Event"
	("SC_M_Talk_Define_V_idle_look")
	{Call "SC_FSM_POSING_Call_Play_Animations"}
)

(define "SC_FSM_POSING_Define_Exit"
	{Ani_Stop "Idle_Lowready1"}
	{Ani_Stop "Idle_Lowready2"}
	{Ani_Stop "Idle_Lowready3"}
	{Ani_Stop "Idle_Lowready4"}
	{Ani_Stop "Idle_Lowready5"}
	{Ani_Stop "Idle_Lowready6"}
	{Ani_Stop "Idle_Lowready7"}
	{Ani_Stop "Idle_Lowready8"}
	{Ani_Stop "Idle_Lowready9"}
	{Kill_Delay "SC_FSM_POSING_Delay"}
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

; // BUZZ: [FSM] Loop Event
{on animation_end "Idle_Lowready1" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}	
{on animation_end "Idle_Lowready2" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}	
{on animation_end "Idle_Lowready3" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}	
{on animation_end "Idle_Lowready4" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}	
{on animation_end "Idle_Lowready5" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}	
{on animation_end "Idle_Lowready6" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
{on animation_end "Idle_Lowready7" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}	
{on animation_end "Idle_Lowready8" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}	
{on animation_end "Idle_Lowready9" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}		







