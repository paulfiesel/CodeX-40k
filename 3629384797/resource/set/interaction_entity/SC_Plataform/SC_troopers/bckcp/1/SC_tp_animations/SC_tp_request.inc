
;	<<<< ------------------------------------------------------------------------------>>>>			 
;	<< [=============== SC Plataform Interaction Entity: FSM Requests ===============] >>
;	<<<<------------------------------------------------------------------------------->>>>			 

(Define "SC_TP_Request_Define_Clear_All_Variables"
	{tags remove "sc_tp_Request_tag_is_aiming"}
	{tags remove "sc_tp_Request_tag_is_moving"}
	
	{tags remove "moving_for_real"}	; // <- temp
				
	{tags remove "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}
)	

; <<<<	===================	SC FSM Request: Default State ===================	>>>>

{on "SC_Request_Call_State_Default"
	{If tagged "sc_tp_Request_tag_is_aiming"
		("SC_FSM_Define_Update_FSM" do(add) state(IDLE))
	else
		("SC_FSM_Define_Update_FSM" do(add) state(POSING))
	}
}

; <<<<	===================	SC FSM Request: Idle IK Aim/Lowready	===================	>>>>

(define "SC_Request_Define_Is_Aiming_Checker"
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
)	

{on ik begin "basis"			("SC_Request_Define_Is_Aiming_Checker")}	
{on ik begin "aim_h"			("SC_Request_Define_Is_Aiming_Checker")}	
{on ik begin "aim_v"			("SC_Request_Define_Is_Aiming_Checker")}
{on ik begin "m_aim_h"			("SC_Request_Define_Is_Aiming_Checker")}	
{on ik begin "m_aim_v"			("SC_Request_Define_Is_Aiming_Checker")}	

{on ik begin "aux1_aim_h"		("SC_Request_Define_Is_Aiming_Checker")}	
{on ik begin "aux1_aim_v"		("SC_Request_Define_Is_Aiming_Checker")}		
{on ik begin "aux2_aim_h"		("SC_Request_Define_Is_Aiming_Checker")}	
{on ik begin "aux2_aim_v"		("SC_Request_Define_Is_Aiming_Checker")}	
{on ik begin "aux3_aim_h"		("SC_Request_Define_Is_Aiming_Checker")}	
{on ik begin "aux3_aim_v"		("SC_Request_Define_Is_Aiming_Checker")}
			
{on "hit"						("SC_Request_Define_Is_Aiming_Checker")}			

; <<<<	===================	SC FSM Request: Movement	===================	>>>>

{on turn on	
	{if prop "SC_plataform_prop_troopers_has_turn_anims"
		("SC_FSM_Define_Update_FSM" do(add) state(TURN))	
	}
}
{on turn off
	{if prop "SC_plataform_prop_troopers_has_turn_anims"
		("SC_FSM_Define_Update_FSM" do(remove) state(TURN))
	}
}

{on "Tp_check_vel"
	{if velocity 1 
		{if not tagged "moving_for_real"
			{tags add "moving_for_real"}
			("SC_FSM_Define_Update_FSM" do(remove) state(TURN))
			("SC_FSM_Define_Update_FSM" do(add) state(MOVE))
		else
			{if not tagged "sc_fsm_tag_FSM_STATE_MOVE"
				{tags remove "moving_for_real"}
			}
		}
	}
	{delay 0.1 "check_vel_delay" {if tagged "sc_tp_Request_tag_is_moving" {Call "Tp_check_vel"}}}
}

{on move on		
	{if not active	{If tagged "sc_tp_Request_tag_is_aiming" ("SC_M_Talk_Define_V_angry_brsrk")}}
	
	{kill_delay "check_vel_delay"}
	{Call "Tp_check_vel"}
		
	{tags add "sc_tp_Request_tag_is_moving"}	
	("SC_FSM_Define_Update_FSM" do(add) state(MOVE))	
	{if not active 
		("SC_M_Talk_Define_V_move_cmbt")
	}
}
{on move off	
	{kill_delay "check_vel_delay"}
	{tags remove "moving_for_real"}
	
	{tags remove "sc_tp_Request_tag_is_moving"}
	("SC_FSM_Define_Update_FSM" do(remove) state(MOVE))
}

; <<<<	===================	SC FSM Request: Death	===================	>>>>
	
(Define "SC_TP_Request_Define_Death_Event"
	("SC_M_Talk_Define_Stop_All_Talk_Sounds")
	("SC_FSM_Define_Update_FSM" do(add) state(DEATH))
)

; <<<<	===================	SC FSM Request: Combat	===================	>>>>

{on fire "weapon"	
	("SC_Request_Define_Is_Aiming_Checker")
		
	{if not active 
		{if rand 0.5 	("SC_M_Talk_Define_V_angry_brsrk")
		else			("SC_M_Talk_Define_V_in_combat_comms")	
		}
	}
	{if not prop "SC_plataform_prop_troopers_no_recoil_anm"
		("SC_FSM_Define_Update_FSM" do(remove) state(RECOIL))
		
		{if tagged "sc_tp_Request_tag_is_moving";}
		
			; // add run recoil state [...]
			
		else
			("SC_FSM_Define_Update_FSM" do(add) state(RECOIL))
		}
	}
}

{on fire "Melee" sync 		
	{tags add "sync_kill_oportunity"} {Delay 0.1 {Tags remove "sync_kill_oportunity"}}
	
	{if prop "SC_plataform_prop_troopers_human_carrier"
		{call_synced "SC_WK_Request_Call_Fix_Chassis"}
	}
	{Delay 0.1	("SC_FSM_Define_Update_FSM" do(add) state(MELEE))}	; // BUZZ: <- for some reason netcode works best in MP with this 1s delay [...]
	
	(mod "mp"
		{Delay 1.0	;}	// BUZZ: <- initial network check, if animation is not playing, then try again.
			{If not dead	
				{if not tagged "sc_tp_Request_tag_mp_melee_sync_anm_is_playing" 
					("SC_FSM_Define_Reset_Callback" state(MELEE))
				}
			}
		}
		{Delay 3.5	;}	// BUZZ: <- second check, if the animation has failed and the unit is locked in place, then reset the chassis and call idle state again.
			{If not dead	
				("SC_FSM_Define_Update_FSM" do(remove) state(MELEE))	
				("SC_FSM_Define_Update_FSM" do(add) state(IDLE)) 
				{tags remove "chek_sync"}
			}
		}
	)
}

{on fire "Special1"			
}

{on "sync_kill_test"
	("SC_FSM_Define_Update_FSM" do(remove) state(MELEE))
	("SC_FSM_Define_Update_FSM" do(add) state(SYNCKILL))
}

{on "sync_die_anm_1"
	{tags add "sync_dying_anm1"}
	("SC_FSM_Define_Update_FSM" do(add) state(SYNCKILL))
}

{on "sync_die_anm_2"
	{tags add "sync_dying_anm2"}
	("SC_FSM_Define_Update_FSM" do(add) state(SYNCKILL))
}