	
;=============================================================================================================================
; FSM BEGIN
;=============================================================================================================================

{on "FSM_Attack_Synckill_Enter"
	{if not tagged "FSM_STATE_ATTACK_SYNCKILL_ON"
		("NEW_FSM_MOTION" c(FSM_STATE_ATTACK_SYNCKILL))	
		{call "FSM_Attack_Synckill"}
	}
}
{on "FSM_Attack_Synckill"
	{tags add "FSM_STATE_ATTACK_SYNCKILL_ON"}
	{Call "FSM_Attack_Synckill_Void_Event"}
}
{on "FSM_Attack_Synckill_Exit"
	{tags remove "FSM_STATE_ATTACK_SYNCKILL"}
	{tags remove "FSM_STATE_ATTACK_SYNCKILL_ON"}
}

;=============================================================================================================================
; METHODS END
;=============================================================================================================================

{on "FSM_Attack_Synckill_Void_Event"
	{tags add "sc_var_invulnerability"}
	{call "Stop_All_Sound"}
		("Chassis_Disable")	
	
	{if tagged "sc_var_sync_kill_animation_victim"
		{call "Sc_Play_Synckill_Anm_VICTIM"}	
	else tagged "sc_var_sync_kill_animation_killer"
		{tags add "no_talk"} 
		{call "Sc_Play_Synckill_Anm_KILLER"}
		{volumes "sc_sync_kill_volume" disable overlap}
	}
}

{on "FSM_Attack_Synckill_Void_Synckill_Cooldown"
	{delay 2 {tags remove "sc_conditional_blocked_fsm_attack_synckill"}}
}
{on "FSM_Attack_Synckill_Void_Animation_End_Call"
	{tags remove "FSM_STATE_ATTACK_SYNCKILL"}	; // BUZZ: <- [FSM] Exit Event
	{tags remove "sc_var_sync_kill_attack_trigger"}
	{tags remove "sc_var_sync_kill_animation_killer"}
	{tags remove "sc_var_sync_kill_animation_v1"}
	{tags remove "sc_var_sync_kill_animation_v2"}	
	{tags remove "sc_var_invulnerability"}
	{volumes enable contact}
	{volumes "sc_sync_kill_volume" disable contact overlap}
	{delay 0.1 {call "SC_Enable_All_Weapons"}}
	{call "Reset_SK_Variables"}
	("Chassis_Enabled")	
}
{on animation_end "sync_kill_01"	{call "FSM_Attack_Synckill_Void_Animation_End_Call"}}
{on animation_end "sync_kill_02"	{call "FSM_Attack_Synckill_Void_Animation_End_Call"}}


; // BUZZ: Sync-kill Attack Trigger Event
(define "FSM_Attack_Synckill_Function_Trigger_Settings"
	{if not tagged "sc_conditional_blocked_fsm_attack_synckill"
		{tags add "sc_conditional_blocked_fsm_attack_synckill"} 
		{tags add "sc_var_sync_kill_attack_trigger"}
		{call "FSM_Attack_Synckill_Void_Synckill_Cooldown"}
		{call "SC_Disable_All_Weapons"}
	
		;("Chassis_Disable")		
		
		{physics_work 1} {Gravity 1}	
		{impulse up 0.0001 dir 0 forward -0.0001 com}	; // BUZZ: <- necessary
	
		{volumes disable contact}
		
		{delay 0.01 
			{volumes "sc_sync_kill_volume" enable overlap}	; // BUZZ: <- this delay avoid killer animation overlapping
		}	
		{delay 0.02
			{physics_work 0} {Gravity 0}	
			
			{volumes "sc_sync_kill_volume" disable overlap}
				
			; // BUZZ: Failed attack/No victim detected.
			{if not tagged "sc_var_sync_kill_animation_killer" 
				{tags remove "FSM_STATE_ATTACK_SYNCKILL"}	; // BUZZ: <- [FSM] Exit Event
				{volumes enable contact} 
				{volumes "sc_sync_kill_volume" disable contact}
				{delay 0.5 {call "SC_Enable_All_Weapons"}}
				
				("Chassis_Enabled")		
			}
			{tags remove "sc_var_sync_kill_attack_trigger"}
		}
	else		
		{tags remove "sc_var_sync_kill_attack_trigger"}
	}	
)

(define "FSM_Attack_Synckill_Void_T"	
	{tags add "sc_var_sync_kill_animation_victim"}
	{call "trigger_synckill"}	
	{delay 0.01 {volumes disable contact}}	; // BUZZ: <- temp fix... (without this delay the volumes wont be disabled)
	{player -1}	; // BUZZ: <- temp fix... (avoid showing the victim in yellow when viewing casualties)
	{die}
)

; // BUZZ: Sync-kill Event
(define "FSM_Attack_Synckill_Function_Overlap_Event"
	{tags add "sc_var_sync_kill_animation_killer"}
	{call "trigger_synckill"}
	{volumes disable blast bullet contact overlap}
	{if rand 0.5
		{tags add "sc_var_sync_kill_animation_v1"}
		{spawn "%victim" "sync_victim" x
			{tags add "sc_var_sync_kill_animation_v1"}	
			("FSM_Attack_Synckill_Void_T")	
		}
	else
		{tags add "sc_var_sync_kill_animation_v2"}
		{spawn "%victim" "sync_victim" x 
			{tags add "sc_var_sync_kill_animation_v2"}
			("FSM_Attack_Synckill_Void_T")
		}
	}
	{with_effector {delete}}	
)

(define "FSM_Attack_Synckill_Function_Overlap_Event_HUMAN"
	{tags add "sc_var_sync_kill_animation_killer"}
	{call "trigger_synckill"}
	{volumes disable blast bullet contact overlap}
	{if rand 0.5
		{tags add "sc_var_sync_kill_animation_v1"}
		{spawn "empty" "sync_victim" x 
			{delay 0.01 {delete}}
			{spawn_human "%victim"
				{tags add "sc_var_sync_kill_animation_v1"}	
				{call "SC_Die_Sync_Kill_Event"}
			}
		}
	else
		{tags add "sc_var_sync_kill_animation_v2"}
		{spawn "empty" "sync_victim" x 
			{delay 0.01 {delete}}
			{spawn_human "%victim"
				{tags add "sc_var_sync_kill_animation_v2"}	
				{call "SC_Die_Sync_Kill_Event"}
			}
		}
	}
)

	
	
	
;	<<<< --------------------------------------------------------- >>>> 
;	<< [=============== Behavior Sync-Kills Section ===============] >>
;	<<<< --------------------------------------------------------- >>>>

	{on "Sc_Play_Synckill_Anm_KILLER"
		{if tagged "sc_var_sync_kill_animation_v1"		
			{ani_play "sync_kill_01" callback}
			{delay 0.4	{play_sound "melee"}}
			{delay 1.0	{play_sound "melee"}}
			{delay 1.8	{play_sound "melee"}}
		;	{delay 2.9	("Gun_Fire_Settings") {start_sound "weapon/shot/WH40k/bolter/bolter1"}}
		;	{delay 3.1	("Gun_Fire_Settings") {start_sound "weapon/shot/WH40k/bolter/bolter1"}}
		;	{delay 3.3	("Gun_Fire_Settings") {start_sound "weapon/shot/WH40k/bolter/bolter1"}}
		;	{delay 3.5	("Gun_Fire_Settings") {start_sound "weapon/shot/WH40k/bolter/bolter1"}}
		else tagged "sc_var_sync_kill_animation_v2"
			{ani_play "sync_kill_02" callback}
		;	{delay 0.675	("Gun_Fire_Settings") {start_sound "weapon/shot/WH40k/bolter/bolter1"}}
			{delay 0.9		{play_sound "seefoe"}}
			{delay 1.8 		{play_sound "melee"}}
		}
	}	
	{on "Sc_Play_Synckill_Anm_VICTIM"
		{if tagged "sc_var_sync_kill_animation_v1"		
			{ani_play "sync_die_01"} 
			{delay 1.1	{spawn "bloodsparks_cut_limbs" "bip01_neck" x}			{play_sound "pain"}}
			{delay 1.6	{spawn "bloodsparks_cut_limbs" "bip01_neck" x}			{play_sound "pain"}}
			{delay 2.95 {spawn "bloodsparks_cut_limbs" "bip01_r_clavicle" x}	{play_sound "pain"}}
			{delay 3.15 {spawn "bloodsparks_cut_limbs" "bip01_spine3" x}		{play_sound "pain"}}
			{delay 3.35 {spawn "bloodsparks_cut_limbs" "bip01_jaw" x}			{play_sound "pain"}}
			{delay 3.55	{spawn "bloodsparks_cut_limbs" "bip01_head" x}			{play_sound "pain"}}
			{delay 3.75	{spawn "bloodsparks_bigest-d" "bip01_head" x}			{play_sound "dth"}}
		else tagged "sc_var_sync_kill_animation_v2"		
			{ani_play "sync_die_02"}
			{delay 0.675	{spawn "bloodsparks_cut_limbs" "bip01_spine3" x}	{play_sound "pain"}}
			{delay 2.9		{spawn "bloodsparks_bigest-d" "bip01_head" x}		{play_sound "dth"}}
		}
	}
;	{on "SC_Synckill_Relation_Trooper"
;		{if effector "ork_slugga_boy_evilsunz"		
;			{if not tagged "ork_boy_evilsunz"
;			;	("FSM_Attack_Synckill_Function_Overlap_Event" victim(ork_slugga_boy_evilsunz))}
;;				("FSM_Attack_Synckill_Function_Overlap_Event_HUMAN" victim(mp/das/tactic_bg))}
;		else effector "ork_slugga_boy_badmoons"		
;			{if not tagged "ork_boy_badmoons"	
;			;	("FSM_Attack_Synckill_Function_Overlap_Event" victim(ork_slugga_boy_badmoons))}
;				("FSM_Attack_Synckill_Function_Overlap_Event_HUMAN" victim(mp/das/tactic_bg))}
;		}
;	}
;	{on "SC_Synckill_Kill_Human"
;		{if tagged "sc_var_sk_spacemarine"
;			("FSM_Attack_Synckill_Function_Overlap_Event_HUMAN" victim(mp/das/tactic_bg))
;		else tagged "sc_var_sk_guardsmen"
;			("FSM_Attack_Synckill_Function_Overlap_Event_HUMAN" victim(mp/igs/ig_lg))
;		else tagged "sc_var_sk_scout"
;			("FSM_Attack_Synckill_Function_Overlap_Event_HUMAN" victim(mp/das/scout_bg))
;		else tagged "sc_var_sk_eldar"
;			("FSM_Attack_Synckill_Function_Overlap_Event_HUMAN" victim(mp/eld/guardian))
;		}
;	}