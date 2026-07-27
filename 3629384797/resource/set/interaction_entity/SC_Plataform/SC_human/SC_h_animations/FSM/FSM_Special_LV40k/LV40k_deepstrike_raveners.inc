
;=============================================================================================================================
; FSM SPECIAL - // REQUEST CALL
;=============================================================================================================================

{on "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge" sync 
	{if not dead 
		{tags add "SC_H_Request_Tag_SPECIAL_LV40k_Ravener_Emerge"}
		{tags add "SC_H_Crew_CLL_Tag_Deploy"} 
		{Delay 0.1 1.5 {Call_Synced "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge_Play_Animations"}}
	}
}
{on "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge_Play_Animations"
	{unlink} {bone show "basis"}
	("SC_FSM_Define_Update_FSM" do(add) state(SPECIAL))
}

;=============================================================================================================================
; FSM SPECIAL - // EVENT
;=============================================================================================================================

(Define "SC_FSM_SPECIAL_Define_LV40k_Ravener_Emerge"
	{ani_play "lv40k_rvn_call_in_emerge" callback} {if rand 0.5 {talk "angry_brsrk"}}
	{blastwave c4 4.5 r0 0.5 r1 2.0 position}	; // BUZZ: small blast on emerge area to clear small obstacles like sandbags... or food!
)

{on animation_end "lv40k_rvn_call_in_emerge" sync
	{tags remove "SC_H_Request_Tag_SPECIAL_LV40k_Ravener_Emerge"}
	{tags remove "SC_H_Crew_CLL_Tag_Deploy"}
	
	{Call "SC_H_Request_Call_Callin_Exit"} 

	("SC_FSM_Define_Update_FSM" do(remove) state(SPECIAL))	
}


