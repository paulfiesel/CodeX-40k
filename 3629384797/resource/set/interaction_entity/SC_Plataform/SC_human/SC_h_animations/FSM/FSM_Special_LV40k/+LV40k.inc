
;=============================================================================================================================
; FSM SPECIAL EXTENSION
;=============================================================================================================================

(Define "LV40k_FSM_Special_Play_Animations"
	{if tagged "SC_H_Request_Tag_SPECIAL_LV40k_Jetpack_Arrival"		("SC_FSM_SPECIAL_Define_LV40k_Jetpack_Arrival")}
	{if tagged "SC_H_Request_Tag_SPECIAL_LV40k_Ravener_Emerge"		("SC_FSM_SPECIAL_Define_LV40k_Ravener_Emerge")}
)

(Define "LV40k_FSM_Special_Stop_Animations"
	; [...]
)

;=============================================================================================================================
; FSM SPECIAL EVENTS
;=============================================================================================================================

(Include "LV40k_deepstrike_jetpack.inc")
(Include "LV40k_deepstrike_droppod.inc")
(Include "LV40k_deepstrike_raveners.inc")
