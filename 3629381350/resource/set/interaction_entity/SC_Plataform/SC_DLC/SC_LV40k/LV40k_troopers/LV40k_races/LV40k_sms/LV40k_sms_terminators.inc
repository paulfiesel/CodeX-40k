
;	<<<< ------------------------------------------------------------------------------------>>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Terminators ===============] >>
;	<<<<------------------------------------------------------------------------------------->>>>			 

; // BUZZ: Weapon Tags
;* "ACC" - Assault Cannon
;* "MLL" - Missile Launcher
;* "SHTH" - Shield Thunder Hammer
;* "FLL" - Flamethrower

{"LV40k_DLC_prop_troopers_SM_Terminators"
	{on spawn
		("LV40k_Space_Marine_Spawn")
		
		{delay 0.5
			{if tagged "COM"
				("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_marine_commander) v(v1))
			else
				("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_marine_terminator) v(v1))
			}
			{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		}
		{if not dead 
			{Spawn "teleport_gold"}	; // <- spawn FX
			{ani_play "fidget"}		; // <- fix fingers
		}
		
		; // ============================================================================= Weapons
		{if tagged "HFF"
			; [...]
		else tagged "ACC"
			{Call "sc_stuff_call_add_loop_fire_sound_acc_ring"}
			{Call "sc_stuff_call_add_loop_fire_sound_acc_fire"}
		else tagged "SHTH"
			{Add_view "fx_thunder_hammer_activ"		"lv40k_terminator_fx" "fx_thunderhammer"}
		else	
			{Add_view "fx_thunder_hammer_activ"		"lv40k_terminator_fx" "fx_powerfist"} {bone cut "shield_attach"}
		}
		{if tagged "MLL"
			{Add_view "fx_glow_red_small"			"lv40k_terminator_fx" "fx_light3"}
			{Add_view "fx_glow_red_small"			"lv40k_terminator_fx" "fx_light4"}
			{Add_view "fx_glow_red_small"			"lv40k_terminator_fx" "fx_light5"}
			{Add_view "fx_glow_red_small"			"lv40k_terminator_fx" "fx_light6"}
		}
		
		; // ============================================================================= Model Randomization - Indomitus Pattern
		
		{if Tagged "SGT"
			{Add_view "fx_glow_green_small"			"lv40k_terminator_fx" "fx_eye_l"}
			{Add_view "fx_glow_green_small"			"lv40k_terminator_fx" "fx_eye_r"}
			
			; // Sergeant Details
			{Bone show "T_Chestropes"}
			{Bone show "T_Gorget"}
			{Bone show "T_Artificer"}
			{Bone show "T_Iron_Halo"}
			
			; // Legs
			{Bone show "T_legs_R_D1"}	{Bone show "T_legs_L_D1"}
			{Bone hide "T_Legs1"}		{Bone show "T_Legs4"}
			
			; // Chestplate
			{If rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate2"}
			else rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate3"}
			else rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate4"}
			else rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate5"}
			}
			
			; // Shoulder Pads
			{If rand 0.33		{Bone hide "T_Shoulder_Pads1"}	{Bone show "T_Shoulder_Pads2"}
			else rand 0.33		{Bone hide "T_Shoulder_Pads1"}	{Bone show "T_Shoulder_Pads3"}
			else				
			}
			
			; // Shoulder Details
			{Bone show "T_Shoulder_R_D2"}
			{Bone show "T_Shoulder_L_D2"}
			{Bone show "T_Shoulder_L_D5"}
			
		else tagged "COM"
			{Add_view "fx_glow_red_small"			"lv40k_terminator_fx" "fx_eye_l"}
			{Add_view "fx_glow_red_small"			"lv40k_terminator_fx" "fx_eye_r"}
						
			; // Commander Details
			{Bone show "T_Eagle"}
			{Bone show "T_Gorget"}
			{Bone show "T_Artificer"}
			
			; // Legs
			{Bone show "T_legs_R_D1"}	{Bone show "T_legs_L_D1"}
			{Bone hide "T_Legs1"}		{Bone show "T_Legs3"}
			
			; // Chestplate
			{If rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate2"}
			else rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate3"}
			else rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate4"}
			else rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate5"}
			}
			
			; // Shoulder Pads
			{If rand 0.33		{Bone hide "T_Shoulder_Pads1"}	{Bone show "T_Shoulder_Pads3"}
			else rand 0.33		{Bone hide "T_Shoulder_Pads1"}	{Bone show "T_Shoulder_Pads4"}
			else				
			}
			
			; // Shoulder Details
			{Bone show "T_Shoulder_R_D1"}
			{Bone show "T_Shoulder_L_D2"}
			{Bone show "T_Shoulder_L_D4"}
			
		else
			{Add_view "fx_glow_red_small"			"lv40k_terminator_fx" "fx_eye_l"}
			{Add_view "fx_glow_red_small"			"lv40k_terminator_fx" "fx_eye_r"}
							
			; // Legs Details
			{If rand 0.5		{Bone show "T_legs_R_D2"}	{Bone show "T_legs_L_D2"}
			else 				{Bone show "T_legs_R_D3"}	{Bone show "T_legs_L_D3"}
			}
			
			; // Legs
			{If rand 0.33		{Bone hide "T_Legs1"}	{Bone show "T_Legs4"}
			else rand 0.33		{Bone hide "T_Legs1"}	{Bone show "T_Legs5"}
			else				
			}
			
			; // Chestplate
			{If rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate2"}
			else rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate3"}
			else rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate4"}
			else rand 0.2		{Bone hide "T_Chestplate1"}	{Bone show "T_Chestplate5"}
			}
			
			; // Shoulder Pads
			{If rand 0.33		{Bone hide "T_Shoulder_Pads1"}	{Bone show "T_Shoulder_Pads5"}
			else rand 0.33		{Bone hide "T_Shoulder_Pads1"}	{Bone show "T_Shoulder_Pads6"}
			else				
			}
			
			; // Shoulder Details
			{If rand 0.5		{Bone show "T_Shoulder_L_D1"}
			else 				{Bone show "T_Shoulder_L_D2"}
			}
		}
		{View start "lv40k_terminator_fx"}
	}
	
	{on animation_event "tp_start" {Spawn "teleport_gold" "basis" x}}
	{on animation_event "tp_end" {Spawn "teleport_gold" "basis" x}}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(acc_fire)
		tag(acc_fire)
		snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_v1)
		stop_delay(0.2)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(acc_ring)
		tag(acc_ring)
		snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_ring_v3)
		stop_delay(2.0)
	)
	
	{on "link_weapon"
		{if effector "stuff weapon"		;// see interaction_entity/stuff.inc
			{with_effector
				{call "link_human"}
			}
		}
	}
	{on fire "weapon"
		{if effector "stuff weapon"		;// see interaction_entity/stuff.inc
			{if tagged "ACC"
				{call "sc_stuff_call_fire_Play_loop_sound_acc_ring"}
				{call "sc_stuff_call_fire_Play_loop_sound_acc_fire"}
				{with_effector
					{CalL "fire"}
					{ani_stop "fire_end"}
					{Ani_play "fire" loop}
					{Delay 1.8 "lp_fire_term"
						{ani_stop "fire"}
						{ani_play "fire_end"}
					}
				}
			}
		}
	}
	
	; // Flamer
	{on fire "weapon1"
		{if effector "stuff weapon"
			{with_effector
				{call "fire"}
			}
		}
	}
	
	; // Stormbolter
	{on fire "weapon2"
		{if effector "stuff weapon"
			{with_effector
				{call "fire"}
			}
		}
	}
	
	; // Cyclone Missile Launcher
	{on fire "weapon3"
		{if name "00"	{spawn "bazooka_shot_small" "barrel_m00" x}	
		else name "01"	{spawn "bazooka_shot_small" "barrel_m01" x}	 
		else name "02"	{spawn "bazooka_shot_small" "barrel_m02" x}	
		else name "03"	{spawn "bazooka_shot_small" "barrel_m03" x}	
		else name "04"	{spawn "bazooka_shot_small" "barrel_m04" x}	
		else name "05"	{spawn "bazooka_shot_small" "barrel_m05" x}	 
		else name "06"	{spawn "bazooka_shot_small" "barrel_m06" x}	
		else name "07"	{spawn "bazooka_shot_small" "barrel_m07" x}	
		else name "08" 	{spawn "bazooka_shot_small" "barrel_m08" x}	
		else name "09"	{spawn "bazooka_shot_small" "barrel_m09" x}	
		else name "10"	{spawn "bazooka_shot_small" "barrel_m10" x}	
		else name "11"	{spawn "bazooka_shot_small" "barrel_m11" x}	
		}
	}
	
	{on "SC_FSM_RECOIL_Call_Play_Animations"
		{Ani_play "Recoil1" callback}
		;//{Ani_play "Recoil1" norestart callback}
		{If tagged "HFF"
			("SC_FSM_Define_Update_FSM" do(remove) state(RECOIL))	; // <- no recoil for flamers.
		}
	}

	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(RIG_L_Foot) sound(SC_fx/sc_stomp_s2/marine_terminator))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(RIG_R_Foot) sound(SC_fx/sc_stomp_s2/marine_terminator))}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.2		{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.25		{ani_play "Idle_Lowready2" callback}      		           
		else rand 0.15		{ani_play "Idle_Lowready3" callback}       		           
		else rand 0.1		{ani_play "Idle_Lowready4" callback}       		           
		else rand 0.1		{ani_play "Idle_Lowready5" callback}      		           
		else 				{ani_play "Idle_Lowready6" callback}         		           
		}		
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload
		{if tagged "sc_tp_Request_tag_is_aiming"
			{ani_play "Run_Aiming1" loop}	
		else						
			{ani_play "Run_Lowready1" loop}
       	}		
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
		{ani_play "death1" callback}
		
		{spawn "bloodexp_big" "rig_pelvisbone" x}
		{view stop "lv40k_terminator_fx"}
  	}
	{on animation_end "death1"
		{if rand 0.25 {Call_Synced "Lv40k_SM_Terminator_Call_Die_Still_Alive"}}
	}
	
	; // Alternative Death Animation
	{on "Lv40k_SM_Terminator_Call_Die_Still_Alive"
		{ani_play "knocked_wounded" 0.5}
		{Delay 5.0 {Spawn "teleport_gold" "basis" x} {call "delete"}}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{if rand 0.5	{Call_Synced "Lv40k_SM_Terminator_Call_Melee_Anm_1"}
		else rand 0.33	{Call_Synced "Lv40k_SM_Terminator_Call_Melee_Anm_2"}
		else			{Call_Synced "Lv40k_SM_Terminator_Call_Melee_Anm_3"}
		}	
	}
	
	{On "Lv40k_SM_Terminator_Call_Melee_Anm_1" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}}
	{On "Lv40k_SM_Terminator_Call_Melee_Anm_2" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee2" callback}}
	{On "Lv40k_SM_Terminator_Call_Melee_Anm_3" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee3" callback}}
	
	{on animation_event "sc_spawn_melee_ctc_arm_r" sync	
		{if tagged "SHTH"
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_thunderhammer) where(Melee_Ctc))	{spawn "melee_hit_thunder_hammer" "fx_thunderhammer" x}	; // Hammer Bonk
		else
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_powerfist) where(Melee_Ctc))		{spawn "melee_hit_power_sword" "fx_powerfist" x}		; // Powerfist Punch
		}
	}
	{on animation_event "sc_spawn_melee_ctc_arm_l" sync
		{if tagged "SHTH"	("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_combatknife) where(Melee_Ctc))}		; // Shield Stroke  
	}
}
