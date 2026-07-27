
;=============================================================================================================================
; FSM BEGIN
;=============================================================================================================================

{on "FSM_Kroot_Consume_Enter" 
	{if not tagged "FSM_STATE_KROOT_CONSUME_ON"
		{if not tagged "sc_var_kroot_consume_is_in_combat"
			{if not tagged "sc_var_kroot_consume_cooldown"
				("NEW_FSM_MOTION" c(FSM_STATE_KROOT_CONSUME))	
				{call "FSM_Kroot_Consume"}
			else
				{tags remove "FSM_STATE_KROOT_CONSUME"}
			}
		else
			{tags remove "FSM_STATE_KROOT_CONSUME"}
		}
	}
}	
{on "FSM_Kroot_Consume"         
	{tags add "FSM_STATE_KROOT_CONSUME_ON"}
	{call "SC_Play_Kroot_Consume_Anm"}	
	{call "FSM_Kroot_Consume_Void_Event"}
}	
{on "FSM_Kroot_Consume_Exit"	
	{tags remove "FSM_STATE_KROOT_CONSUME"}		
	{tags remove "FSM_STATE_KROOT_CONSUME_ON"}
	{ani_stop "eating_idle"}	
	{ani_stop "eating_idle1"}	
	{ani_stop "eating_idle2"}	
	{view pause "healing_bio"}
	{view pause "flesh_blood_fx"}	
	{bone hide "vis_fleshy_bit"}
} 	

;=============================================================================================================================
; METHODS END
;=============================================================================================================================

{on "FSM_Kroot_Consume_Void_Event"
	{call "SC_Disable_All_Weapons"}
	{call "talk_kllfoe"}		
	("Chassis_Disable")		
	{if not tagged "sc_var_kroot_consume_healing"
		{tags add "sc_var_kroot_consume_healing"}
		{delay 12									
			{call "FSM_Kroot_Consume_Void_Healing_Cooldown"}
			{tags remove "FSM_STATE_KROOT_CONSUME"}		; // BUZZ: <- [FSM] Exit Event
			{tags remove "FSM_STATE_KROOT_CONSUME_ON"}	
			{tags remove "sc_var_kroot_consume_healing"}				
			{call "SC_Enable_All_Weapons"}
			("Chassis_Enabled")		
		}
	}
}
{on "FSM_Kroot_Consume_Void_Check_If_Safe"
	{tags add "sc_var_kroot_consume_is_in_combat"}
	{delay 15 "sc_delay_recently_in_combat" {tags remove "sc_var_kroot_consume_is_in_combat"}}
}
{on "FSM_Kroot_Consume_Void_Healing_Cooldown"			
	{tags add "sc_var_kroot_consume_cooldown"}
	{delay 50 {tags remove "sc_var_kroot_consume_cooldown"}}	
}
{on "FSM_Kroot_Consume_Void_Callback"
	{health_damage_count -900	{effects "" "hit" "damage" "die" "die"}}	; // BUZZ: <- Healing at animation end (MUST BE NEGATIVE!)
	{tags remove "FSM_STATE_KROOT_CONSUME_ON"}	; // BUZZ: <- [FSM] Loop Event
}
{on animation_end "eating_idle" 	{call "FSM_Kroot_Consume_Void_Callback"}}	
{on animation_end "eating_idle1" 	{call "FSM_Kroot_Consume_Void_Callback"}}	
{on animation_end "eating_idle2" 	{call "FSM_Kroot_Consume_Void_Callback"}}	
