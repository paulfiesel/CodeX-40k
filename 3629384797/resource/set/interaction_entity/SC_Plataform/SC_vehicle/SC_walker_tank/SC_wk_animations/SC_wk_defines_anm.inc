

; ==============================================================================]
; // Mobility
; ==============================================================================] 

(Define "SC_WK_Request_Define_Move_Sprint"
	{on "SC_FSM_MOVE_Call_Check_Speed" overload
		{Delay 0.5 "Sprinting_checker"
			{if tagged "exploded"
				; [...]
			else	
				{if velocity %min_speed	
					{if not tagged "sc_request_tag_velocity_2"
						{tags add "sc_request_tag_velocity_2"} 
						{tags remove "sc_request_tag_velocity_1"} 
						("SC_FSM_Define_Reset_Callback" state(MOVE))
					}
				else
					{if tagged "sc_request_tag_velocity_1"
					else tagged "sc_request_tag_velocity_2"
						{tags add "sc_request_tag_velocity_1"} 
						{tags remove "sc_request_tag_velocity_2"} 
						("SC_FSM_Define_Reset_Callback" state(MOVE))
					}
				}
				{Call "SC_FSM_MOVE_Call_Check_Speed"}
			}
		}
	}
)

(Define "SC_WK_Request_Define_Disable_Chassis"
	{if not tagged "exploded"
		{chassis_work 0}
	}
)

(Define "SC_WK_Request_Define_Enable_Chassis"
	{if tagged "exploded"
		; [...]
	else not work "body"
		; [...]
	else not work "engine"
		; [...]
	else not work "trackleft"
		; [...]
	else not work "trackright"
		; [...]
	else
		{chassis_work 1}
	}
)

; ==============================================================================]
; // Weaponry
; ==============================================================================] 

(Define "SC_WK_Request_Define_Disable_Main_Weapons"
	{if tagged "exploded"
		; [...]
	else not work "body"
		; [...]
	else
		{weapon_work "gun" 0}
		{weapon_work "gun1" 0}
		{weapon_work "gun2" 0}
		{weapon_work "melee" 0}
		{weapon_work "melee1" 0}
		{weapon_work "melee2" 0}
	}
)

(Define "SC_WK_Request_Define_Enable_Main_Weapons"
	{if tagged "exploded"
		; [...]
	else not work "body"
		; [...]
	else
		{if work "gun"		{weapon_work "gun" 1}}
		{if work "gun1"		{weapon_work "gun1" 1}}
		{if work "gun2"		{weapon_work "gun2" 1}}
		{if work "melee"	{weapon_work "melee" 1}}
		{if work "melee1"	{weapon_work "melee1" 1}}
		{if work "melee2"	{weapon_work "melee2" 1}}
	}
)

; ==============================================================================]
; // GENERIC/MISC/OTHER
; ==============================================================================] 

{On "SC_WK_Request_Call_Fix_Chassis" sync
	{if tagged "exploded"
		; [...]
	else tagged "sc_request_tag_is_moving"	;} // <- No need to do this if the vehicle is stopped.
		{physics_work 1}
		{Gravity 1}		
		{impulse up 0.01}
		{Kill_delay "turn_delay"}
		{delay 0.1	"sc_delay_mov_reset"	{Gravity 0} {physics_work 0} {area enable}} 
	}
}

