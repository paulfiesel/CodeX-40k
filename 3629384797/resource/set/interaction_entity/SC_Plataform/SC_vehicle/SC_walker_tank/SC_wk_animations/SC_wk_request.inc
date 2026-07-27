
;	<<<< ------------------------------------------------------------------------------>>>>			 
;	<< [=============== SC Plataform Interaction Entity: FSM Requests ===============] >>
;	<<<<------------------------------------------------------------------------------->>>>			 

(Define "SC_WK_Request_Define_Clear_All_Variables"
	{tags remove "sc_request_tag_velocity_2"}
	{tags remove "sc_request_tag_velocity_1"}

	{tags remove "sc_tp_Request_tag_is_aiming"}
	{tags remove "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}
	
	{Tags remove "bwd"}	{Tags remove "fwd"}
)	

{on "SC_Request_Call_State_Default"
	{If tagged "sc_tp_Request_tag_is_aiming"
		("SC_FSM_Define_Update_FSM" do(add) state(IDLE))
	else
		("SC_FSM_Define_Update_FSM" do(add) state(POSING))
	}
}

; <<<<	===================	SC FSM Request: Idle IK Aim/Lowready	===================	>>>>

{on "SC_Request_Call_Is_Aiming_Checker"
	{kill_delay "sc_tp_main_delay_aiming_reset"}		
	{Delay 10 "sc_tp_main_delay_aiming_reset"	{Tags remove "sc_tp_Request_tag_is_aiming"}}
	
	{if not tagged "sc_tp_Request_tag_is_aiming"
		{Tags add "sc_tp_Request_tag_is_aiming"}
		
		{if tagged "sc_fsm_tag_FSM_STATE_MOVE"
			("SC_FSM_Define_Reset_Callback" state(MOVE))
		else
			("SC_FSM_Define_Update_FSM" do(Remove)	state(POSING))
			("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		}
	}
	{if not active 
		("SC_M_Talk_Define_V_in_combat_comms")
	}
}

{on ik begin "basis"	{Call "SC_Request_Call_Is_Aiming_Checker"}}

; <<<<	===================	SC FSM Request: Movement	===================	>>>>

{on turn on	
	("SC_FSM_Define_Update_FSM" do(add) state(TURN))	
}

{on turn off
	("SC_FSM_Define_Update_FSM" do(remove) state(TURN))
}

{on "chek_move_dir"
	{if velocity 1
		{tags add "sc_request_tag_is_moving"}
		("SC_FSM_Define_Update_FSM" do(add) state(MOVE))	
	}
	{delay 0.01 "dir"	
		{call "chek_move_dir"}
	}
}

{on "SC_FSM_MOVE_Call_Check_Speed" 
	; // use overload.
}

{on move on			
	{call "chek_move_dir"}
	
	{kill_delay "Sprinting_checker"}
	{call "SC_FSM_MOVE_Call_Check_Speed"}
	
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
	{if not active 	("SC_M_Talk_Define_V_move_cmbt")}
}

{on move off	
	{Kill_delay "dir"}
	{tags remove "sc_request_tag_is_moving"}
	
	{kill_delay "Sprinting_checker"}
	{tags remove "sc_request_tag_velocity_2"}
	{tags remove "sc_request_tag_velocity_1"}
	
	("SC_FSM_Define_Update_FSM" do(remove) state(MOVE))
}

; <<<<	===================	SC FSM Request: Death	===================	>>>>

{On "SC_WK_Request_Call_Destroy"
	{if component "body"
		
		{tags remove "SC_WK_Request_Tag_Pilot_Dead"}
		{tags remove "SC_WK_Request_Tag_Is_Knocked"}
		
		{tags add "sc_fsm_tag_FSM_STATE_DISABLED"}
		{call "SC_FSM_Call_Update_States"}
		{delay 0.1 {Ani_play "death_pose"}}
	}
}

{On "SC_WK_Request_Call_Break"
	{if component "body" 
		{if prop "SC_plataform_prop_vehicle_auto"
			("SC_FSM_Define_Update_FSM" do(add) state(DEATH))
		else
			; // BUZZ: code walkers with human crew later...
		}
	}
}

; <<<<	===================	SC FSM Request: Combat	===================	>>>>

(Define "SC_WK_Request_Define_Combat_Comms"
	{if rand %r 	("SC_M_Talk_Define_V_angry_brsrk")
	else			("SC_M_Talk_Define_V_in_combat_comms")	
	}
)

{on fire "Melee" sync
	{Delay 0.1	("SC_FSM_Define_Update_FSM" do(add) state(MELEE))}	; // BUZZ: <- for some reason netcode works best in MP with this 1s delay [...]
	
	(mod "mp"
		{Delay 2.0	;}	// BUZZ: <- initial network check, if animation is not playing, then try again.
			{If work "body"	
				{if not tagged "sc_tp_Request_tag_mp_melee_sync_anm_is_playing" 
					("SC_FSM_Define_Reset_Callback" state(MELEE))
				}
			}
		}
		{Delay 4.0	;}	// BUZZ: <- second check, if the animation has failed and the unit is locked in place, then reset the chassis and call idle state again.
			{If work "body"
				("SC_FSM_Define_Update_FSM" do(remove) state(MELEE))	
				("SC_FSM_Define_Update_FSM" do(add) state(IDLE)) 
			}
		}
	)
}

{on fire "gun"		("SC_WK_Request_Define_Combat_Comms" r(0.25))}
{on fire "gun1"		("SC_WK_Request_Define_Combat_Comms" r(0.25))}
{on fire "mgun1"	("SC_WK_Request_Define_Combat_Comms" r(0.25))}
{on fire "mgun2"	("SC_WK_Request_Define_Combat_Comms" r(0.25))}
{on fire "mgun3"	("SC_WK_Request_Define_Combat_Comms" r(0.25))}



