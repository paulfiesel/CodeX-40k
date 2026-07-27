
;	<<<< ------------------------------------------------------------------------------------>>>>			 
;	<< [=============== SC Plataform Interaction Entity: Human FSM Requests ===============] >>
;	<<<<------------------------------------------------------------------------------------->>>>			 

(Define "SC_H_Request_Define_Spawn_Event"
	{call "SC_FSM_Call_Exit_All_States"}
	("SC_H_Request_Define_Reset_Move_Tags")
	("reset_speed")
	{tags remove "speed_chek"}
)

; <<<<	===================	SC Human FSM Request: Default State	===================	>>>>

{on "SC_Request_Call_State_Default" overload
}

; <<<<	===================	SC Human FSM Request: WEAPON INSTANCE TAG ===================	>>>>

(Define "SC_H_Request_Define_Animation_Fix"

	; ---------------------------- // BUZZ: Animation adjustments:
	
	{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
		{if not tagged "LV40k_human_tag_weapon_heavy_bolter"
			{if "sc_human_flag_anm_instance_mgun"
				{set "sc_human_flag_anm_instance_mgun" 0}
				{set "sc_human_flag_anm_instance_rifle" 1}
			}
		else 
			{if "sc_human_flag_anm_instance_rifle"
				{set "sc_human_flag_anm_instance_mgun" 1}
				{set "sc_human_flag_anm_instance_rifle" 0}
			}
		}
	}
	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))	; // <- TEMP!
)

(Define "SC_H_Request_Define_Link_Weapon"
	{if effector  "anm_melee"		{set "sc_human_flag_anm_instance_melee" 1}	
	else effector "anm_pistol"		{set "sc_human_flag_anm_instance_pistol" 1}			
	else effector "anm_mgun"		{set "sc_human_flag_anm_instance_mgun" 1}
	else effector "anm_rifle"		{set "sc_human_flag_anm_instance_rifle" 1}
	else effector "anm_bazooka"		{set "sc_human_flag_anm_instance_bazooka" 1}
	else effector "rifle"			{set "sc_human_flag_anm_instance_rifle" 1}
	else effector "smg"				{set "sc_human_flag_anm_instance_rifle" 1}
	else effector "pistol"			{set "sc_human_flag_anm_instance_pistol" 1}
	else effector "mgun"			{set "sc_human_flag_anm_instance_mgun" 1}
	else effector "bazooka"			{set "sc_human_flag_anm_instance_bazooka" 1}
	}	
	("SC_H_Request_Define_Animation_Fix")
)

(Define "SC_H_Request_Define_Unlink_Weapon"
	{set "sc_human_flag_anm_instance_melee" 0}				
	{set "sc_human_flag_anm_instance_mgun" 0}
	{set "sc_human_flag_anm_instance_pistol" 0}
	{set "sc_human_flag_anm_instance_rifle" 0}
	{set "sc_human_flag_anm_instance_bazooka" 0}
	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))	; // <- TEMP!
)

(Define "SC_H_Request_Define_Fire_Hand_Right"
	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))
)

{on "reload"
	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))	; // <- TEMP!
}

; <<<<	===================	SC Human FSM Request: DIE ===================	>>>>

(Define "SC_H_Request_Define_Die"
	("SC_FSM_Define_Update_FSM" do(add) state(DEATH))
)

; <<<<	===================	SC Human FSM Request: MOVE	===================	>>>>

(Define "SC_H_Request_Define_Reset_Move_Tags"
	{tags remove "SC_FSM_MOVE_Tag_S_Fast"}
	{tags remove "SC_FSM_MOVE_Tag_S_Normal"}
	{tags remove "SC_FSM_MOVE_Tag_S_Jog"}
	{Tags remove "SC_FSM_MOVE_Tag_S_Slow"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Back"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Left"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Right"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Slow"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Fast"}
	{tags remove "SC_FSM_MOVE_Tag_Variable_Speed"}
)

(Define "reset_speed"
	{tags remove"f_vel_24"}
	{tags remove"f_vel_21"}
	{tags remove"f_vel_18"}
	{tags remove"f_vel_15"}
	{tags remove"f_vel_12"}
	{tags remove"f_vel_9"}
	{tags remove"f_vel_6"}
	{tags remove"f_vel_3"}
)

{on "SC_H_Request_Call_Mov_Speed_Chek" sync
	{if tagged "speed_chek"
		{delay 0.05 "speed_chek_delay" {call "SC_H_Request_Call_Mov_Speed_Chek"}}
		
		
		; // {if tagged "SC_FSM_MOVE_Tag_Variable_Speed"
			{if velocity 24		{if not tagged "f_vel_24" 	("reset_speed")	{tags add "f_vel_24"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
			else velocity 21	{if not tagged "f_vel_21" 	("reset_speed")	{tags add "f_vel_21"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
			else velocity 18	{if not tagged "f_vel_18" 	("reset_speed")	{tags add "f_vel_18"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
			else velocity 15	{if not tagged "f_vel_15" 	("reset_speed")	{tags add "f_vel_15"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
			else velocity 12	{if not tagged "f_vel_12"	("reset_speed") {tags add "f_vel_12"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
			else velocity 9		{if not tagged "f_vel_9" 	("reset_speed")	{tags add "f_vel_9"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
			else velocity 6		{if not tagged "f_vel_6" 	("reset_speed")	{tags add "f_vel_6"}	("SC_FSM_Define_Reset_Callback" state(MOVE))} 	
			else				{if not tagged "f_vel_3"	("reset_speed") {tags add "f_vel_3"} 	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
			}
		; // }
	}
}

{on movement_mode_changed 	
	{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"}
}

{on move on
	{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"}

	{tags add "sc_request_tag_is_moving"}
	("SC_FSM_Define_Update_FSM" do(add) state(MOVE))
}

{on move off			
	{kill_delay "speed_chek_delay"} {tags remove "speed_chek"}	("reset_speed")
	
	{tags remove "sc_request_tag_is_moving"}
	("SC_H_Request_Define_Reset_Move_Tags")
	("SC_FSM_Define_Update_FSM" do(remove) state(MOVE))
}

{on animation_event "SC_H_Request_Anm_Run_Fast"
	{if not tagged "SC_FSM_MOVE_Tag_S_Fast"
		("SC_H_Request_Define_Reset_Move_Tags")	
		{tags add "SC_FSM_MOVE_Tag_S_Fast"}
		{tags add "SC_FSM_MOVE_Tag_Variable_Speed"}
		("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Run_Normal"	;} // BUZZ: <- Jogging low-ready.
	{if not tagged "SC_FSM_MOVE_Tag_S_Jog"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_S_Jog"}
		("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Walk_Normal"	;} // BUZZ: <- FOR DIRECT CONTROL
	{if not tagged "SC_FSM_MOVE_Tag_S_Normal"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_S_Normal"}
		("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Run_Slow"
	{if not tagged "SC_FSM_MOVE_Tag_S_Slow"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_S_Slow"}
		("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

; <<<<	===================	SC Human FSM Request: [Move] Strafing	===================	>>>>

{on animation_event "SC_H_Request_Anm_Strafe_Slow"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Slow"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Slow"}
		("SC_FSM_Define_Reset_Callback" state(MOVE))
		("SC_H_Talk_Trigger_Define_Strafe_Forward")
	}
}

{on animation_event "SC_H_Request_Anm_Strafe_Fast"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Fast"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Fast"}
		("SC_FSM_Define_Reset_Callback" state(MOVE))
		("SC_H_Talk_Trigger_Define_Strafe_Forward")
	}
}

{on animation_event "SC_H_Request_Anm_Strafe_Back"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Back"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Back"}
		("SC_FSM_Define_Reset_Callback" state(MOVE))
		("SC_H_Talk_Trigger_Define_Strafe_Back")
	}
}

{on animation_event "SC_H_Request_Anm_Strafe_Left"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Left"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Left"}
		("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Strafe_Right"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Right"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Right"}
		("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

; <<<<	===================	SC Human FSM Request: SQUAT/PRONE/STAND TRANSITIONS	===================	>>>>

{on animation_event "SC_H_Request_Anm_Stand_To_Prone"	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))}
{on animation_event "SC_H_Request_Anm_Stand_To_Squat"	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))}
{on animation_event "SC_H_Request_Anm_Squat_To_Prone"	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))}

; <<<<	===================	SC Human FSM Request: POSING	===================	>>>>

{on "throw-off"
	{talk "death_cry"}
	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))	; // <- TEMP!
}

{on animation_event "SC_H_Request_Anm_Look_Around_Gun"
	{if tagged "sc_h_skin_tag_skeleton_defined"
		("SC_FSM_Define_Update_FSM" do(remove) state(IDLE))
		("SC_FSM_Define_Update_FSM" do(add) state(POSING))
	}
}

; <<<<	===================	SC Human FSM Request: IDLE POSE	===================	>>>>

{on animation_event "SC_H_Request_Anm_Idle"
	("SC_FSM_Define_Update_FSM" do(add) state(IDLE))
}