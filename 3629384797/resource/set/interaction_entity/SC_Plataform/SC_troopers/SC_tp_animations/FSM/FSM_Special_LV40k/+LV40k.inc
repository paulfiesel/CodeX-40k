
;=============================================================================================================================
; FSM SPECIAL EXTENSION
;=============================================================================================================================

(Define "LV40k_FSM_Special_Play_Animations"
	{if tagged "SC_TP_Request_Tag_SPECIAL_LV40k_Carnifex_OldOneEye"		("SC_FSM_SPECIAL_Define_LV40k_Carnifex_OldOneEye")}
	{if tagged "SC_TP_Request_Tag_SPECIAL_LV40k_Lictor_Cloak" 			("SC_FSM_SPECIAL_Define_LV40k_Lictor_Cloak")}
	{if tagged "SC_TP_Request_Tag_SPECIAL_LV40k_Hiveguard_Shieldwall"	("SC_FSM_SPECIAL_Define_LV40k_Hiveguard_Shieldwall")}
	{if tagged "SC_TP_Request_Tag_SPECIAL_LV40k_Tervigon"				("SC_FSM_SPECIAL_Define_LV40k_Tervigon")}
)

(Define "LV40k_FSM_Special_Stop_Animations"
	("SC_FSM_SPECIAL_Define_LV40k_Carnifex_Stop_Animations")
	("SC_FSM_SPECIAL_Define_LV40k_Hiveguard_Stop_Animations")
	("SC_FSM_SPECIAL_Define_LV40k_Tervigon_Stop_Animations")
)

;=============================================================================================================================
; FSM SPECIAL EVENTS
;=============================================================================================================================

(Include "LV40k_carnifex.inc")
(Include "LV40k_lictor.inc")
(Include "LV40k_hiveguard.inc")
(Include "LV40k_tervigon.inc")
