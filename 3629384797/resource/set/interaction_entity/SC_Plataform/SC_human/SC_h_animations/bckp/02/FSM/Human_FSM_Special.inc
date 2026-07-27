
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

(Define "SC_FSM_SPECIAL_Define_Disable_Human"
	{auto_operatable 0}
	{Chassis_Work 0}
	{Weapon_Work "hand_right" 0}
	{Able select 0}
	{Volumes disable bullet blast contact}
)

(Define "SC_FSM_SPECIAL_Define_Enable_Human"
	{auto_operatable 1}
	{Chassis_Work 1}
	{Weapon_Work "hand_right" 1}
	{Able select 1}
	{Volumes enable bullet blast contact}
)

; // DLC FSM SPECIAL EVENTS DLC EXTENDERS:
(Include "FSM_Special_LV40k/+LV40k.inc")

(define "SC_FSM_SPECIAL_Define_Play_Animations"
	("LV40k_FSM_Special_Play_Animations")
)

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_SPECIAL_Define_Enter"
)

(define "SC_FSM_SPECIAL_Define_Event"
	("SC_FSM_SPECIAL_Define_Play_Animations")
)

(define "SC_FSM_SPECIAL_Define_Exit"
	("LV40k_FSM_Special_Stop_Animations")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================
