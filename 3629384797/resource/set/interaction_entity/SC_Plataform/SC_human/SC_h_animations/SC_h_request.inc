
; // BUZZ: As per GOH v1.061 there's a bug with animation move FSM that it if you take control of a soldier moving in Low-ready state it won't switch back to Ready state.

;	<<<< ------------------------------------------------------------------------------------>>>>			 
;	<< [=============== SC Plataform Interaction Entity: Human FSM Requests ===============] >>
;	<<<<------------------------------------------------------------------------------------->>>>			 

(Define "SC_H_Request_Define_Spawn_Event"		; // <- BUZZ: called on "skin_select" event.
	("SC_FSM_Define_Clear_Entity_Tags")
	("SC_H_Request_Define_Reset_Move_Tags")
	("reset_speed")
	
	{Delay 0.5
		{Call "SC_FSM_Call_Update_States"}
	}

	{tags remove "sc_request_tag_is_reloading"}
	{tags remove "sc_request_tag_throw_grenade"}

	; // Temp
	{Tags remove "sc_request_tag_stand_to_squat"}
	{Tags remove "sc_request_tag_squat_to_stand"}
	{Tags remove "sc_request_tag_Stand_to_prone"}
	{Tags remove "sc_request_tag_Prone_to_Stand"}
	{Tags remove "sc_request_tag_squat_to_Prone"}
	{Tags remove "sc_request_tag_Prone_to_squat"}
	
	{tags remove "sc_request_tag_thrown_landed"}
	{tags remove "sc_request_tag_thrown_getup"}
	
	{tags remove "speed_chek"}
)

; <<<<	===================	SC Human FSM Request: DEATH ===================	>>>>

(Define "SC_H_Request_Define_Die"
	("SC_FSM_Define_Update_FSM" do(add) state(DEATH))
)

; <<<<	===================	SC Human FSM Request: CREW ===================	>>>>

; // BUZZ: add animation event to check board animations and prevent idle from overlapping it.

{on "SC_H_Request_Check_Board"
	{if not linked
		("SC_FSM_Define_Update_FSM" do(remove) state(CREW))
	else
		{delay 0.1 "SC_H_Request_Delay_Board" {call "SC_H_Request_Check_Board"}}
	}
}

(Define "SC_H_Request_Define_Crew_In"
	{Kill_Delay "SC_H_Request_Delay_Board"}	("SC_FSM_Define_Update_FSM" do(add) state(CREW))
)

(Define "SC_H_Request_Define_Crew_Out"
	{Kill_Delay "SC_H_Request_Delay_Board"} {Call "SC_H_Request_Check_Board"}
)

{on animation_event "SC_H_Request_Board_In_Animation"
	{if not tagged "SC_FSM_TAG_FSM_STATE_CREW" ("SC_H_Request_Define_Crew_In")}
}

; <<<<	===================	SC Human FSM Request: Vault	===================	>>>>

{on animation_event "SC_H_Request_Anm_Vault"
	{Kill_Delay "SC_FSM_VAULT_Delay"}
	
	{If not tagged "SC_FSM_TAG_FSM_STATE_VAULT"
		("SC_FSM_Define_Update_FSM" do(add)		state(VAULT))
		{Delay 2.5 "SC_FSM_VAULT_Delay" ("SC_FSM_Define_Update_FSM" do(remove)	state(VAULT))}
	else
		{delay 0.2 "SC_FSM_VAULT_Delay" ("SC_FSM_Define_Update_FSM" do(remove) state(VAULT))}
	}
}

; <<<<	===================	SC Human FSM Request: Takegun	===================	>>>>

{on animation_event "SC_H_Request_Anm_Takegun_S"
	; [...]
}

{on animation_event "SC_H_Request_Anm_Takegun_E"
	; [...]
}

; <<<<	===================	SC Human FSM Request: Default State	===================	>>>>

{on "SC_Request_Call_State_Default" overload

	{if linked "vehicle"
		{if place	"passenger00"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger01"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger02"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger03"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger04"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger05"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger06"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger07"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger08"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger09"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger10"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger11"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		else place	"passenger12"	("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
		
		else
			("SC_FSM_Define_Update_FSM" do(add)		state(CREW))
		}
	else tagged "sc_request_tag_is_moving"
		("SC_FSM_Define_Update_FSM" do(add)		state(MOVE))
	
	else
		("SC_FSM_Define_Update_FSM" do(add)		state(IDLE))
			
		{Delay 20.0 "sc_h_request_delay_posing"
			{if linked
				; [...]
			else standing
				("SC_FSM_Define_Update_FSM" do(remove)	state(IDLE))
				("SC_FSM_Define_Update_FSM" do(add)		state(POSING))
			else squatting
				("SC_FSM_Define_Update_FSM" do(remove)	state(IDLE))
				("SC_FSM_Define_Update_FSM" do(add)		state(POSING))
			else lying
				; [...]
			else idle_low_health
				; [...]
			else swimming
				; [...]
			}
		}
	}
}

; <<<<	===================	SC Human FSM Request: Idle IK Aim/Lowready	===================	>>>>

(define "SC_H_Request_Define_Is_Aiming_Checker"
	{Call "SC_H_Request_Call_Check_Knockdown"}
	
	("SC_FSM_Define_Update_FSM" do(remove) state(CREW))
	
	{if tagged "sc_fsm_tag_FSM_STATE_RELOAD"	("SC_FSM_Define_Update_FSM"	do(remove)		state(RELOAD))}
	{if tagged "sc_fsm_tag_FSM_STATE_POSING"	("SC_FSM_Define_Update_FSM"	do(remove)		state(POSING))}
)	

{on ik begin "basis"		("SC_H_Request_Define_Is_Aiming_Checker")}	
{on ik begin "ik_leftright"	("SC_H_Request_Define_Is_Aiming_Checker")}	
{on ik begin "ik_socket"	("SC_H_Request_Define_Is_Aiming_Checker")}
{on ik begin "aim_h"		("SC_H_Request_Define_Is_Aiming_Checker")}	
{on ik begin "aim_v"		("SC_H_Request_Define_Is_Aiming_Checker")}

; <<<<	===================	SC Human FSM Request: COVER	===================	>>>>

(Define "SC_H_Request_Define_Clear_Cover_Tags"
	{tags remove "sc_H_request_tag_squat_hidden"}
	{Tags remove "sc_H_request_tag_snipe_open"}
	{tags remove "sc_H_request_tag_snipe_closed"}
	{tags remove "sc_H_request_tag_snipe_closed_animation"}
)

; // BUZZ: cancels cover animations:

{on animation_event "SC_H_Request_Anm_Idle"		
	{if squatting 
		{if tagged "sc_H_request_tag_squat_hidden"			
			{tags remove "sc_H_request_tag_squat_hidden"}
			("SC_FSM_Define_Update_FSM"	do(remove)		state(COVER))
			{delay 0.01 ("SC_FSM_Define_Reset_Callback" state(IDLE))}
			
		else tagged "sc_H_request_tag_snipe_closed_animation"	
			{tags remove "sc_H_request_tag_snipe_closed_animation"}
			("SC_FSM_Define_Reset_Callback" state(IDLE))
		}
	}
}

{on animation_event "SC_H_Request_Anm_Idle_Snipe"	
	{if not tagged "sc_request_tag_is_moving"
		{if tagged "sc_H_request_tag_snipe_closed"
			("SC_FSM_Define_Update_FSM"	do(add)		state(COVER))
			{tags remove "sc_H_request_tag_snipe_closed"}
			{tags remove "sc_H_request_tag_snipe_closed_animation"}
		else
			{Tags add "sc_h_request_tag_snipe_open"}
			("SC_FSM_Define_Reset_Callback" state(IDLE))
		}
	}
	("SC_H_Request_Define_Is_Aiming_Checker")
}

{on animation_event "SC_H_Request_Anm_Snipe_Switch"	
	{Tags remove "sc_h_request_tag_snipe_open"}
	("SC_FSM_Define_Update_FSM"	do(add)		state(COVER))
	{tags add "sc_H_request_tag_snipe_closed"}
	{tags add "sc_H_request_tag_snipe_closed_animation"}
}

{on animation_event "SC_H_Request_Anm_Squat_Hide_Switch"
	("SC_FSM_Define_Update_FSM"	do(add)		state(COVER))
}

; <<<<	===================	SC Human FSM Request: WEAPON INSTANCE TAG ===================	>>>>

; // BUZZ: you can swap here between FSM states (say you want a rifle to have pistol animations)

{On "SC_H_Request_Call_Animation_Fix"
	{Call "SC_FSM_Call_Update_States"}
	{Delay 0.5
		{if tagged "sc_request_tag_is_moving"
			("SC_FSM_Define_Reset_Callback" state(MOVE))
		else	
			("SC_FSM_Define_Reset_Callback" state(IDLE))
		}
	}
}

(Define "SC_H_Request_Define_Link_Weapon"
	{if tagged "sc_request_tag_throw_grenade"
		{tags remove "sc_request_tag_throw_grenade"}
		("SC_FSM_Define_Reset_Callback" state(IDLE))
	else
		{Call "SC_H_Request_Call_Animation_Fix"}
	}
)

(Define "SC_H_Request_Define_Unlink_Weapon"
	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))
	{Call "SC_H_Request_Call_Animation_Fix"}
)

(Define "SC_H_Request_Define_Fire_Hand_Right"
	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))

	{if effector "SC_no_recoil_anim"
		; [...]
	else
		{if tagged "sc_human_tag_has_melee_weapon"
			{if lying
				{Damage_Report "basis"	"<f(impact)><c(RED)>MUST BE STANDING IN ORDER TO USE MELEE!"}
	;//		else squatting
	;//			{Damage_Report "basis"	"<f(impact)><c(RED)>MUST BE STANDING IN ORDER TO USE MELEE!"}
			else
				("SC_FSM_Define_Update_FSM" do(add) state(FIGHT))
			}
		else effector "grenade"
			{delay 0.05
				{tags add "sc_request_tag_throw_grenade"}
				("SC_FSM_Define_Update_FSM" do(remove) state(SPECIAL))
			}
		else
			("SC_FSM_Define_Update_FSM" do(remove) state(RECOIL))
			("SC_FSM_Define_Update_FSM" do(add) state(RECOIL))
		}
	}
)

; <<<<	===================	SC Human FSM Request: UNREGISTERED EVENTS	===================	>>>>

{on animation_event "SC_H_Request_Reset_Move"
	("SC_FSM_Define_Update_FSM" do(add) state(SPECIAL))		; {}	 // BUZZ: <- CURRENTLY BEING USED TO PATCH IDLE TRANSITIONS WHEN USING GRENADES.
}

; <<<<	===================	SC Human FSM Request: FIGHT/MELEE COMBAT	===================	>>>>

(define "SC_H_Request_Define_Bullet_Hit"
	; [...]
)

{on "SC_INF_Call_Melee_Hit" 	; // BUZZ: <- SC Plataform Effect (Called when entity is hit by melee contact volume)
	; [...]
}

{on animation_event "SC_H_Request_Anm_Fight_Stagger"
	; [...]
}

{on "blow_effect"				; // BUZZ: <- Attacker Effect
	("SC_FSM_Define_Update_FSM" do(add) state(FIGHT))
}

{on "blow_opponent_effect"		; // BUZZ: <- Victim Effect
	{Start_sound "SC_Plataform/hit/_melee/melee_flesh"}
;	("SC_INF_Define_Spawn_Blood_Hit_Very_Big" c("ik_leftright" x))
}

; <<<<	===================	SC Human FSM Request: POSING	===================	>>>>

; // BUZZ: Use this to replace the blast baked animations, check tag then apply effect.
; // BUZZ: currently using baked animations for Tyranids.

{On animation_event "SC_H_Request_Anm_Blast_Mask"

	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))	
	
	{Delay 0.1
		{if not dead 
			{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope"	{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360  force} ("SC_FSM_Define_Update_FSM" do(add) state(THROWN))}
			{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"		{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360  force} ("SC_FSM_Define_Update_FSM" do(add) state(THROWN))}
			{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"		{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360  force} ("SC_FSM_Define_Update_FSM" do(add) state(THROWN))}
			{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"			{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360  force} ("SC_FSM_Define_Update_FSM" do(add) state(THROWN))}
		else
			("SC_FSM_Define_Update_FSM" do(add) state(DEATH))	
		}
	}
}

{on animation_event "SC_H_Request_Anm_Thrown_Fly"
	{talk "death_cry"}	

	("SC_FSM_Define_Update_FSM" do(remove) state(CREW))
	("SC_FSM_Define_Update_FSM" do(remove) state(POSING))	
	("SC_FSM_Define_Update_FSM" do(add) state(THROWN))	
}

{on ground_hit
	{if tagged "sc_fsm_tag_fsm_state_thrown"
		{if tagged "sc_h_skin_tag_fsm_anim_orkz"			("SC_FSM_Define_Update_FSM" do(remove) state(THROWN))	
		else tagged "sc_h_skin_tag_fsm_anim_default"		("SC_FSM_Define_Update_FSM" do(remove) state(THROWN))	
		else tagged "sc_h_skin_tag_fsm_anim_spacemarine"	("SC_FSM_Define_Update_FSM" do(remove) state(THROWN))	
		else
			{tags add "sc_request_tag_thrown_landed"}
			("SC_FSM_Define_Reset_Callback" state(THROWN))
		}
	}
}

{on animation_event "SC_H_Request_Anm_Thrown_Land"
	{if tagged "sc_h_skin_tag_fsm_anim_orkz"
	else tagged "sc_h_skin_tag_fsm_anim_default"
	else tagged "sc_h_skin_tag_fsm_anim_spacemarine"
	else
		{tags add "sc_request_tag_thrown_landed"}
		("SC_FSM_Define_Reset_Callback" state(THROWN))
	}
}

{On "SC_H_Request_Call_Check_Knockdown"
	{If tagged "sc_request_tag_thrown_landed"
		{tags remove "sc_request_tag_thrown_landed"}
		
		("SC_FSM_Define_Update_FSM" do(remove) state(THROWN))	
		{Auto_operatable 0}
;//		{Delay 0.1
			{tags add "sc_request_tag_thrown_getup"}
			("SC_FSM_Define_Update_FSM" do(add) state(THROWN))	
;//		}
	}
}

{On "SC_H_Request_Call_Thrown_Getup"
	{tags remove "sc_request_tag_thrown_getup"}	{Auto_operatable 1}
}

; <<<<	===================	SC Human FSM Request: SQUAT/PRONE/STAND TRANSITIONS	===================	>>>>

(Define "SC_FSM_Define_Stance"
	{on animation_event "SC_H_Request_Anm_%0_From_%1"
		{kill_delay "sc_h_request_delay_posing"}
		{kill_delay "Stance_Transiton"}
		
		{if %2
			{tags add "sc_request_tag_%1_to_%0"}
			("SC_FSM_Define_Update_FSM"	do(remove)			state(STANCE))
			("SC_FSM_Define_Update_FSM"	do(add)				state(STANCE))
		else
			{Delay 0.1 "Stance_Transiton"
;				{tags remove "sc_request_tag_%0_to_%1"}
				("SC_FSM_Define_Update_FSM"	do(remove)		state(STANCE))
			}
		}
	}
	{on animation_event "SC_H_Request_Anm_%1_From_%0"
		{kill_delay "sc_h_request_delay_posing"}
		{kill_delay "Stance_Transiton"}
		
		{if %3
			{tags add "sc_request_tag_%0_to_%1"}
			("SC_FSM_Define_Update_FSM"	do(remove)			state(STANCE))
			("SC_FSM_Define_Update_FSM"	do(add)				state(STANCE))
		else
			{Delay 0.1 "Stance_Transiton"
;				{tags add "sc_request_tag_%1_to_%0"}
				("SC_FSM_Define_Update_FSM"	do(remove)		state(STANCE))
			}
		}
	}
)

("SC_FSM_Define_Stance" args Squat Stand Standing Squatting)
("SC_FSM_Define_Stance" args Squat Prone Lying Squatting)
("SC_FSM_Define_Stance" args Stand Prone Lying Standing)

; <<<<	===================	SC Human FSM Request: Reload	===================	>>>>

{on animation_event "SC_H_Request_Anm_Reload"
	{if tagged "SC_human_tag_no_reload_anim"
		; [...]
	else tagged "sc_human_tag_has_melee_weapon"
		; [...]
	else
		{tags add "sc_request_tag_is_reloading"}
		{if tagged "sc_request_tag_is_moving"
			("SC_FSM_Define_Update_FSM" do(remove)	state(MOVE))
		}
		("SC_FSM_Define_Update_FSM" do(add)		state(RELOAD))
	}
}

; <<<<	===================	SC Human FSM Request: MOVE	===================	>>>>

(Define "SC_H_Request_Define_Reset_Move_Tags"
	{tags remove "SC_FSM_MOVE_Tag_S_Crawl"}
	{tags remove "SC_FSM_MOVE_Tag_S_Fast"}
	{tags remove "SC_FSM_MOVE_Tag_S_Normal"}
	{tags remove "SC_FSM_MOVE_Tag_S_Jog"}
	{Tags remove "SC_FSM_MOVE_Tag_S_Slow"}
	{Tags remove "SC_FSM_MOVE_Tag_S_Spot"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Back"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Left"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Right"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Slow"}
	{tags remove "SC_FSM_MOVE_Tag_Strafe_Fast"}
)

(Define "reset_speed"
	{tags remove"f_vel_30"}
	{tags remove"f_vel_27"}
	{tags remove"f_vel_24"}
	{tags remove"f_vel_21"}
	{tags remove"f_vel_18"}
	{tags remove"f_vel_15"}
	{tags remove"f_vel_12"}
	{tags remove"f_vel_9"}
	{tags remove"f_vel_6"}
	{tags remove"f_vel_3"}
)

{on "SC_H_Request_Call_Mov_Speed_Chek"
	{if tagged "speed_chek"
		{if tagged "sc_request_tag_is_moving"
		
			{delay 1.0 "speed_chek_delay" {call "SC_H_Request_Call_Mov_Speed_Chek"}}
			
			{if tagged "SC_FSM_TAG_FSM_STATE_VAULT" ("SC_FSM_Define_Update_FSM" do(remove)		state(VAULT))}
			
			{delay 0.1 "speed_chek_delay"
				{if velocity 30		{if not tagged "f_vel_30" 	("reset_speed")	{tags add "f_vel_30"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
				else velocity 27	{if not tagged "f_vel_27" 	("reset_speed")	{tags add "f_vel_27"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}
				else velocity 24	{if not tagged "f_vel_24" 	("reset_speed")	{tags add "f_vel_24"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
				else velocity 21	{if not tagged "f_vel_21" 	("reset_speed")	{tags add "f_vel_21"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
				else velocity 18	{if not tagged "f_vel_18" 	("reset_speed")	{tags add "f_vel_18"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
				else velocity 15	{if not tagged "f_vel_15" 	("reset_speed")	{tags add "f_vel_15"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
				else velocity 12	{if not tagged "f_vel_12"	("reset_speed") {tags add "f_vel_12"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
				else velocity 9		{if not tagged "f_vel_9" 	("reset_speed")	{tags add "f_vel_9"}	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
				else velocity 6		{if not tagged "f_vel_6" 	("reset_speed")	{tags add "f_vel_6"}	("SC_FSM_Define_Reset_Callback" state(MOVE))} 	
				else				{if not tagged "f_vel_3"	("reset_speed") {tags add "f_vel_3"} 	("SC_FSM_Define_Reset_Callback" state(MOVE))}	
				}
			}
		}
	}
}

{on move on
	{if tagged "sc_h_skin_tag_fsm_anim_orkz"
	else tagged "sc_h_skin_tag_fsm_anim_default"
	else tagged "sc_h_skin_tag_fsm_anim_spacemarine"
	else
		{Call "SC_H_Request_Call_Check_Knockdown"}
	}
	
	; ------------------------------------------------------------------------ ;
	
	("SC_H_Request_Define_Clear_Cover_Tags")

	{tags add "sc_request_tag_is_moving"}
	
	{kill_delay "sc_h_request_delay_posing"}

	{kill_delay "delay_start_speed_chek"}
	{Delay 0.01 "delay_start_speed_chek" {kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"}}
	
	("SC_FSM_Define_Update_FSM" do(remove) state(CREW))
	("SC_FSM_Define_Update_FSM" do(add) state(MOVE))
}

{on move off	
	{tags remove "sc_request_tag_is_moving"}
	
	{kill_delay "delay_start_speed_chek"}
	{kill_delay "speed_chek_delay"} {tags remove "speed_chek"}	("reset_speed")
	
	("SC_H_Request_Define_Animations_Enable_IKs")
	("SC_H_Request_Define_Reset_Move_Tags")
	
	; // BUZZ: Without this delay human controller completely breaks upon switching Stance while moving for some fucking reason.
	
	("SC_FSM_Define_Update_FSM" do(remove) state(MOVE))
	
	{if tagged "sc_request_tag_is_reloading"
		("SC_FSM_Define_Update_FSM" do(remove) state(RELOAD))
		{tags remove "sc_request_tag_is_reloading"}
	}
}

{on animation_event "SC_H_Request_Anm_Run_Crawling"
	{if not tagged "SC_FSM_MOVE_Tag_S_Crawl"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_S_Crawl"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Run_Fast"
	{if not tagged "SC_FSM_MOVE_Tag_S_Fast"
		("SC_H_Request_Define_Reset_Move_Tags")	
		{tags add "SC_FSM_MOVE_Tag_S_Fast"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Run_Normal"	;} // BUZZ: <- FOR AI NORMAL MOVE / JOG.
	{if not tagged "SC_FSM_MOVE_Tag_S_Jog"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_S_Jog"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Run_Slow"
	{if not tagged "SC_FSM_MOVE_Tag_S_Slow"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_S_Slow"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Walk_Normal"	;} // BUZZ: <- FOR DIRECT CONTROL
	{if not tagged "SC_FSM_MOVE_Tag_S_Normal"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_S_Normal"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Walk_Spot"	
	{if not tagged "SC_FSM_MOVE_Tag_S_Spot"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_S_Spot"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Walk_Slow"	
	{if not tagged "SC_FSM_MOVE_Tag_S_Slow"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_S_Slow"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

; <<<<	===================	SC Human FSM Request: [Move] Strafing	===================	>>>>

{on animation_event "SC_H_Request_Anm_Strafe_Slow"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Slow"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Slow"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Strafe_Fast"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Fast"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Fast"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Strafe_Back"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Back"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Back"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Strafe_Left"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Left"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Left"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}

{on animation_event "SC_H_Request_Anm_Strafe_Right"	
	{if not tagged "SC_FSM_MOVE_Tag_Strafe_Right"
		("SC_H_Request_Define_Reset_Move_Tags")	{tags add "SC_FSM_MOVE_Tag_Strafe_Right"}
		{kill_delay "speed_chek_delay"} {tags add "speed_chek"} {call "SC_H_Request_Call_Mov_Speed_Chek"} ("SC_FSM_Define_Reset_Callback" state(MOVE))
	}
}
