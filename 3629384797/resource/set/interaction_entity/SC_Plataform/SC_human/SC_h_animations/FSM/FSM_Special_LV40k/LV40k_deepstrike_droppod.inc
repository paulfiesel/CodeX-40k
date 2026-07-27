
;=============================================================================================================================
; FSM SPECIAL - // REQUEST CALL
;=============================================================================================================================

{on "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink" sync 
	{if not dead 
		{tags add "SC_H_Crew_CLL_Tag_Deploy"} 
	
		{unlink} {bone show "basis"}	{ani_play "lv40k_sms-exit_drop_pod"}  ; <- TEST!

		{Delay 0.1 
			{tags remove "SC_H_Crew_CLL_Tag_Deploy"}
			{Call "SC_H_Request_Call_Callin_Exit"} 
		}
	}
}

;=============================================================================================================================
; FSM SPECIAL - // EVENT
;=============================================================================================================================

(Define "SC_FSM_SPECIAL_Define_LV40k_Mycetic_Drop"
)



