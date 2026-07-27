
;	<<<< ------------------------------------------------------------------------------>>>>			 
;	<< [=============== SC Plataform Interaction Entity: FSM Requests ===============] >>
;	<<<<------------------------------------------------------------------------------->>>>			 

(Define "SC_GRAV_Request_Define_Spawn"
	{Kill_delay "SC_grav_delay_check_hover"} {call "SC_grav_veh_call_check_hover"}
	{call "SC_Request_Call_State_Default"}
)	

{on "SC_Request_Call_State_Default"
	{if crew_in_place "driver"
		("SC_FSM_Define_Update_FSM" do(add) state(IDLE))
	}
}

; <<<<	===================	SC FSM Request: Crew	===================	>>>>

{on crew in 	
	{if work "body"
		{if not tagged "SC_grav_veh_tag_is_hovering" {physics_work 0} ("SC_FSM_Define_Update_FSM" do(add) state(BOARD))}
		
		{Kill_delay "SC_grav_delay_check_hover"} {call "SC_grav_veh_call_check_hover"}
	}
}
	
{on crew out	
	{if not crew_in_place "driver"	("SC_FSM_Define_Update_FSM" do(add) state(BAIL))}
	
	{Kill_delay "SC_grav_delay_check_hover"} {call "SC_grav_veh_call_check_hover"}
}

; <<<<	===================	SC FSM Request: Break	===================	>>>>

{on repair	
	{if component "body" 
		{if work "engine"
			{physics_work 0} 
			("SC_FSM_Define_Update_FSM" do(remove) state(BROKEN))
			{Kill_delay "SC_grav_delay_check_hover"} {call "SC_grav_veh_call_check_hover"}
		}
	else component "engine"
		{if work "body"
			{physics_work 0} 
			("SC_FSM_Define_Update_FSM" do(remove) state(BROKEN))
			{Kill_delay "SC_grav_delay_check_hover"} {call "SC_grav_veh_call_check_hover"}
		}
	}
}

{on break	
	{if component "body" 
		{physics_work 1} {impulse up 0.1}
		("SC_FSM_Define_Update_FSM" do(add) state(BROKEN))
		{Kill_delay "SC_grav_delay_check_hover"} {call "SC_grav_veh_call_check_hover"}
	else component "engine"
		{physics_work 1} {impulse up 0.1} 
		("SC_FSM_Define_Update_FSM" do(add) state(DEATH))
		{Kill_delay "SC_grav_delay_check_hover"} {call "SC_grav_veh_call_check_hover"}
	}
}
{on Destroy
	{if component "body" 
		{physics_work 1} {impulse up 0.1} 
		("SC_FSM_Define_Update_FSM" do(add) state(DEATH))
		{Kill_delay "SC_grav_delay_check_hover"} {call "SC_grav_veh_call_check_hover"}
	else component "engine"
		{physics_work 1} {impulse up 0.1} 
		("SC_FSM_Define_Update_FSM" do(add) state(BROKEN))
		{Kill_delay "SC_grav_delay_check_hover"} {call "SC_grav_veh_call_check_hover"}
	}
}

; <<<<	===================	SC FSM Request: Movement	===================	>>>>

{on turn on	
	("SC_FSM_Define_Update_FSM" do(add) state(TURN))	
}

{on turn off
	("SC_FSM_Define_Update_FSM" do(remove) state(TURN))
}

{on move on			
	{tags add "sc_request_tag_is_moving"}
	
	{if move_forward
		{if not tagged "fwd"	
			{tags remove "bwd"}
			{tags add "fwd"} 
			("SC_FSM_Define_Reset_Callback" state(MOVE))
		}
	else 
		{if not tagged "bwd"
			{tags remove "fwd"}
			{tags add "bwd"}
			("SC_FSM_Define_Reset_Callback" state(MOVE))
		}
	}
	("SC_FSM_Define_Update_FSM" do(add) state(MOVE_START))	
}

{on move off	
	{tags remove "sc_request_tag_is_moving"}
	
	("SC_FSM_Define_Update_FSM" do(remove) state(MOVE_START))
	("SC_FSM_Define_Update_FSM" do(remove) state(MOVE_LOOP))

;//	("SC_FSM_Define_Update_FSM" do(add) state(MOVE_STOP))
}

{on brake on
	("SC_FSM_Define_Update_FSM" do(add) state(MOVE_STOP))
}

{on brake off
}
