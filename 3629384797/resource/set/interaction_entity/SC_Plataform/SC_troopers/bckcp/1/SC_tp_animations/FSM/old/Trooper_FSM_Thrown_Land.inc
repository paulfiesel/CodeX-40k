
;=============================================================================================================================
; FSM BEGIN
;=============================================================================================================================

{on "FSM_Stun_Enter"	
	{if not tagged "FSM_STATE_STUN_ON"
		{if not dead
			("NEW_FSM_MOTION" c(FSM_STATE_STUN))	
			{call "FSM_Stun"}
		}
	}
}
{on "FSM_Stun"
	{tags add "FSM_STATE_STUN_ON"}
	{Call "FSM_Stun_Void_Event"}

}
{on "FSM_Stun_Exit"	
	{tags remove "FSM_STATE_STUN"}
	{tags remove "FSM_STATE_STUN_ON"}
}

;=============================================================================================================================
; METHODS END
;=============================================================================================================================

{on "FSM_Stun_Void_Event"
	{tags add "sc_var_invulnerability"}
	{call "SC_Disable_All_Weapons"}
	{call "talk_dth"}
	{volumes disable contact}
	("Chassis_Disable")
	{if tagged "sc_var_stun_front"	{ani_play "Knocked_Fly_Back" callback}
	else							{ani_play "Knocked_Fly_Front" callback}}
}

{on animation_end "Knocked_Stand_Up"
	{tags remove "FSM_STATE_STUN"}			; // BUZZ: <- [FSM] Exit Event
	{tags remove "sc_var_invulnerability"}	
	{call "SC_Enable_All_Weapons"}			
	("Chassis_Enabled")	
	{delay 0.1
		{volumes enable contact}
		{volumes "sc_sync_kill_volume" disable contact overlap}
	}	
}
{on animation_end "Knocked_Fly_Back"
	{tags remove "sc_var_stun_front"}
	{tags remove "sc_var_stun_back"}
	{ani_play "Knocked_Stand_Up" 0.6 callback}
}
{on animation_end "Knocked_Fly_Front"
	{tags remove "sc_var_stun_front"}
	{tags remove "sc_var_stun_back"}
	{ani_play "Knocked_Stand_Up" 0.6 callback}
}