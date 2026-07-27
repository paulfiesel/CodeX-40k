
;=============================================================================================================================
; FSM SPECIAL - // REQUEST CALL
;=============================================================================================================================

{on "SC_TP_Request_Call_Anm_LV40k_Carnifex_OldOneEye" sync 
	{if not dead 
		{tags add "SC_TP_Request_Tag_SPECIAL_LV40k_Carnifex_OldOneEye"}
		
		("SC_FSM_Define_Update_FSM" do(add) state(SPECIAL))
	}
}

;=============================================================================================================================
; FSM SPECIAL - // EVENT
;=============================================================================================================================

(Define "SC_FSM_SPECIAL_Define_LV40k_Carnifex_Stop_Animations"
	{Ani_Stop "revive"}
)

(Define "SC_FSM_SPECIAL_Define_LV40k_Carnifex_OldOneEye"
	("SC_TP_Main_Define_Weaponry_Disable_All_Ranged")
	("SC_TP_Main_Define_Weaponry_Disable_All_Melee")
	("SC_TP_Main_Define_IKs_Disable")
	("SC_TP_Main_Define_Chassis_Disable")
	{Auto_Operatable 0}
	
	{If rand 0.66 {tags remove "OOE_First_Death"}}	; // <- tag to prevent 2nd revive.
	
	{ani_play "revive" -1.0 callback}
)

{on animation_end "revive"			; {}
	
	; // TAG FROM SC ABILITY
	{Delay 0.1 
		{Auto_Operatable 1}
	
		("SC_TP_Main_Define_Weaponry_Disable_All_Ranged")
		("SC_TP_Main_Define_Weaponry_Disable_All_Melee")
		("SC_TP_Main_Define_IKs_Disable")
		("SC_TP_Main_Define_Chassis_Disable")
		
		{tags remove "SC_TP_Request_Tag_SPECIAL_LV40k_Carnifex_OldOneEye"}
		
		("SC_FSM_Define_Update_FSM" do(remove) state(SPECIAL))	
	}
}

