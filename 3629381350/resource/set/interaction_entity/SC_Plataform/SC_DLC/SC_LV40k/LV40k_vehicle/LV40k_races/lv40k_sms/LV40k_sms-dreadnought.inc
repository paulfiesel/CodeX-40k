
;	<<<< -------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Space Marines Dreadnought ===============] >>
;	<<<<--------------------------------------------------------------------------------------------------->>>>			 

{"sm_Dreadnought"
	{on spawn 
		{tags add "SC_INF_Tag_Unit_Faction_Space_Marines"}
		{tags add "SC_INF_Tag_Unit_Faction_Humans"}
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/tank/lv40k_sm_Dreadnought) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{add_view "sm_vehicle_start" "exhaust" "fxsmoke1"}
		{add_view "sm_vehicle_idle" "exhaust2" "fxsmoke1"}
		
		{add_view "sm_vehicle_start" "exhaust" "fxsmoke2"}
		{add_view "sm_vehicle_idle" "exhaust2" "fxsmoke2"}
		
		{add_view "fx_glow_green_small" "SC_vh_lights" "fxlights1"}
		{add_view "fx_glow_red_small" "SC_vh_lights" "fxlights2"}
		{add_view "fx_glow_red_small" "SC_vh_lights" "fxlights3"}
		{add_view "fx_glow_green_small" "SC_vh_lights" "fxlights4"}
		{add_view "fx_glow_red_small" "SC_vh_lights" "fxlights5"}
		
		; ################# // DREADNOUGHT SKINS
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "venerable"
			{add_view "fx_glow_gold_big" "SC_vh_lights" "fx_venerable_gold_halo3"}
			
			{add_view "fx_glow_red_small" "SC_vh_lights" "fx_venerable_eye_r"}
			{add_view "fx_glow_red_small" "SC_vh_lights" "fx_venerable_eye_l"}
			
		else tagged "Ironclad"
			{bone show "leg_armor3"}
			
		else
			{if rand 0.33	{bone show "Chest_torsoA"}
			else rand 0.33	{bone show "Chest_torsoB"}
			else			{bone show "Chest_torsoC"}}
			
			{if rand 0.33	{bone show "leg_armor1"}
			else rand 0.33	{bone show "leg_armor2"}
			else			{bone show "leg_armor3"}}
		
		}
		
		; ################# // DREADNOUGHT IRONCLAD MISSILE LAUNCHERS
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{If tagged "Ironclad_ML"
			; [...]
		}
		
		; ################# // DREADNOUGHT AUX WEAPONS
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "aux_HKM"		; <- ironclad
			; [...]
		}

		{If tagged "AUX_HFF"
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights"	"foresight_hff_spawn"} 
			{add_view "flamer_fire_barrel_blue"	"SC_vh_lights"	"fx_HFF"} 
			
			{Call "sc_stuff_call_add_loop_fire_sound_aux_HFF"}
			{Call "sc_stuff_call_add_weapon_fx_aux_HFF"}
			
		else tagged "AUX_Bolter"
			; [...]
		}
		
		; ################# // DREADNOUGHT RIGHT ARM WEAPONS
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{If tagged "R_ATC"	
			{bone cut "voL_WR_verB"}
			{Call "sc_stuff_call_add_weapon_fx_R_ATC00"}
			{Call "sc_stuff_call_add_weapon_fx_R_ATC01"}
			
		else tagged "R_HRC"
			{bone cut "voL_WR_verA"}
			{Call "sc_stuff_call_add_loop_fire_sound_R_HRC"}
			{Call "sc_stuff_call_add_weapon_fx_R_hrc00"}
			{Call "sc_stuff_call_add_weapon_fx_R_hrc01"}
			{Call "sc_stuff_call_add_weapon_fx_R_hrc02"}
			{Call "sc_stuff_call_add_weapon_fx_R_hrc03"}
			{Call "sc_stuff_call_add_weapon_fx_R_hrc04"}
			{Call "sc_stuff_call_add_weapon_fx_R_hrc05"}
		
		else tagged "R_AS2"	
			{bone cut "voL_WR_verB"}
			{Call "sc_stuff_call_add_loop_fire_sound_R_AS2_fire"}
			{Call "sc_stuff_call_add_loop_fire_sound_R_AS2_ring"}
			{Call "sc_stuff_call_add_weapon_fx_R_AS2"}
			
		else tagged "R_HBB"
			{bone cut "voL_WR_verB"}
			{Call "sc_stuff_call_add_loop_fire_sound_R_HBB"}
			{Call "sc_stuff_call_add_weapon_fx_R_hbb00"}
			{Call "sc_stuff_call_add_weapon_fx_R_hbb01"}
			
		else tagged "R_PCC"	
			{bone cut "voL_WR_verB"}
			{add_view "plasma_overheat_halo_blue"	"plasma_reload"	"fx_PC1"}
			{add_view "plasma_radiator_blue_big"	"SC_vh_lights"	"fx_PC1"}
			{add_view "spark_light_b_big"			"SC_vh_lights"	"fx_PC1"}
			{add_view "spark_light_b_big"			"SC_vh_lights"	"fx_PC2"}
			{add_view "spark_light_b_big"			"SC_vh_lights"	"fx_PC3"}
			
		else tagged "R_LAS"	
			{bone cut "voL_WR_verB"}
			
		else tagged "R_INF"	
			{bone cut "voL_WR_verB"}
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights"	"foresight_INF"} 
			{add_view "flamer_fire_barrel_blue"	"SC_vh_lights"	"fx_INF"} 
			
			{Call "sc_stuff_call_add_loop_fire_sound_R_INF"}
			{Call "sc_stuff_call_add_weapon_fx_R_INF"}
			
		else tagged "R_MUM"	
			{bone cut "voL_WR_verB"}
			{Call "sc_stuff_call_add_weapon_fx_R_MUM00"}
			{Call "sc_stuff_call_add_weapon_fx_R_MUM01"}
		}
		
		; ################# // DREADNOUGHT LEFT ARM WEAPONS
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{If tagged "L_MLL"		
			{bone cut "voL_WL_verA"}
			
		else tagged "L_POWERFIST"		
			{bone cut "voL_WL_verB"}
			{add_view "fx_thunder_weapon_activ" "SC_vh_lights" "fx_l_claw"}	
			
		else tagged "L_POWERCLAW"	
			{bone cut "voL_WL_verB"}
			{add_view "fx_thunder_weapon_activ" "SC_vh_lights" "fx_l_claw"}	
		}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_Dreadnought/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_Dreadnought/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_Dreadnought/idle"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/exhaust"}
		{link_sound "move"				""}
		{link_sound "brake"				""}
	}
	{on "smoke_screen"
		("SC_smoke_shot" args "nbk39" smoke_shot1 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" smoke_shot2 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" smoke_shot3 12 0.5 0 20)
	}

	; <<<<	===================	LV40k Vehicle Behaviour: Aux Weapon 	===================	>>>>
	
	; // Heavy Flamer
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(aux_HFF) d1(0.2) fx1(fx_fl_arcon_01) b1(foresight_hff_spawn) d2(0.2) fx2(fx_arcflamer_01) b2(foresight_hff))
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(aux_HFF) tag(aux_HFF) snd(SC_DLC_LV40k/smallarms/lp_flamer_v1) stop_delay(0.2))
	
	{on fire "Mgun"
		{if tagged "aux_HFF"
			{call "sc_stuff_call_fire_Play_loop_sound_aux_HFF"}	{call "sc_stuff_call_fire_weapon_fx_aux_HFF"}
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight_hff) distance_m(40) gravity(1.0) spread(2.5)) 
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Right Arm - Weapon 	===================	>>>>
	
	{on "reload"
		{if name "gun1"
			{if tagged "R_PCC"
				{view start "plasma_reload"}
				{delay 8.0 {view pause "plasma_reload"}}
			}
		}
	}
	
	; // AUTOCANNON
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_ATC00) d1(0.4) fx1(tank_canon_fire_37_47) b1(barrel_ac00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_ATC01) d1(0.4) fx1(tank_canon_fire_37_47) b1(barrel_ac01))
	
	; // HURRICANE
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(R_HRC) tag(R_HRC) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v2) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_HRC00) d1(0.2) fx1(tank_canon_fire_20_25_auto) b1(barrel_hrc00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_HRC01) d1(0.2) fx1(tank_canon_fire_20_25_auto) b1(barrel_hrc01))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_HRC02) d1(0.2) fx1(tank_canon_fire_20_25_auto) b1(barrel_hrc02))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_HRC03) d1(0.2) fx1(tank_canon_fire_20_25_auto) b1(barrel_hrc03))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_HRC04) d1(0.2) fx1(tank_canon_fire_20_25_auto) b1(barrel_hrc04))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_HRC05) d1(0.2) fx1(tank_canon_fire_20_25_auto) b1(barrel_hrc05))

	; // TWIN HEAVY-BOLTERS
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(R_HBB) tag(R_HBB) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_HBB00)d1(0.2) fx1(flash_hb) b1(barrel_hb00) d2(0.2) fx2(shell_heavybolter) b2(fxshell_hb00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_HBB01)d1(0.2) fx1(flash_hb) b1(barrel_hb01) d2(0.2) fx2(shell_heavybolter) b2(fxshell_hb01))
	
	; // ASSAULT CANNON
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(R_AS2_fire) tag(R_AS2_fire) snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_v2) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(R_AS2_ring) tag(R_AS2_ring) snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_ring_v3) stop_delay(2.0))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_AS2) d1(0.2) fx1(flash_hb) b1(foresight_AS2) d2(0.3) fx2(flash_hb_x)	b2(foresight_AS2))
	
	; // Inferno Flamer
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(R_INF) d1(0.2) fx1(fx_arcflamer_01) b1(foresight_INF) d2(0.2) fx2(flamer_fire) b2(foresight_INF))
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(R_INF) tag(R_INF) snd(SC_DLC_LV40k/smallarms/lp_flamer_heavy_v1) stop_delay(0.2))
	
	; // Multi-Melta
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(R_MUM00) d1(0.3) fx1(flash_gun_melta_x2) b1(Barrel_MM00))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(R_MUM01) d1(0.3) fx1(flash_gun_melta_x2) b1(Barrel_MM01))
	
	{on fire "gun1"
		{if tagged "R_AS2"
			{call "sc_stuff_call_fire_weapon_fx_R_AS2"}
			{call "sc_stuff_call_fire_Play_loop_sound_R_AS2_ring"}
			{call "sc_stuff_call_fire_Play_loop_sound_R_AS2_fire"}
			("SC_Misc_Define_Gun_Rev_Animation" args as2)
		
		else tagged "R_PCC"
			{spawn "flash_plasmacannon" "foresight_PC" x}

		else tagged "R_LAS"
			{if name "00" {spawn "flash_lascannon_big" "Barrel_LC00" x}
			else {spawn "flash_lascannon_big" "Barrel_LC01" x}
			}
		
		else tagged "R_MUM"
			{call "sc_stuff_call_fire_weapon_fx_R_MUM01"}
			{call "sc_stuff_call_fire_weapon_fx_R_MUM00"}
			{spawn "fx_melta_cone_mul" "foresight_mm" x}
			
		else tagged "R_HRC"
			{call "sc_stuff_call_fire_Play_loop_sound_R_HRC"}
			{If name "00"	{call "sc_stuff_call_fire_weapon_fx_R_HRC00"}
			else name "01"	{call "sc_stuff_call_fire_weapon_fx_R_HRC01"}
			else name "02"	{call "sc_stuff_call_fire_weapon_fx_R_HRC02"}
			else name "03"	{call "sc_stuff_call_fire_weapon_fx_R_HRC03"}
			else name "04"	{call "sc_stuff_call_fire_weapon_fx_R_HRC04"}
			else name "05"	{call "sc_stuff_call_fire_weapon_fx_R_HRC05"}
			}

		else tagged "R_ATC"
			{If name "00"	{call "sc_stuff_call_fire_weapon_fx_R_ATC00"}
			else			{call "sc_stuff_call_fire_weapon_fx_R_ATC01"}
			}
			
		else tagged "R_HBB"
			{call "sc_stuff_call_fire_Play_loop_sound_R_HBB"}
			{If name "00"	{call "sc_stuff_call_fire_weapon_fx_R_HBB00"}
			else			{call "sc_stuff_call_fire_weapon_fx_R_HBB01"}
			}

		else tagged "R_INF"
			{call "sc_stuff_call_fire_Play_loop_sound_R_INF"}	{call "sc_stuff_call_fire_weapon_fx_R_INF"}
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_inferno) where(foresight_INF) distance_m(40) gravity(1.0) spread(2.5)) 
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Left Arm - Hellfire 	===================	>>>>
	
	{on fire "gun"
		{if tagged "L_MLL"
			{if name "00" {spawn "bazooka_shot_small" "Barrel_MLL00" x}
			else name "01" {spawn "bazooka_shot_small" "Barrel_MLL01" x}
			else name "02" {spawn "bazooka_shot_small" "Barrel_MLL02" x}
			else name "03" {spawn "bazooka_shot_small" "Barrel_MLL03" x}
			else name "04" {spawn "bazooka_shot_small" "Barrel_MLL04" x}
			else name "05" {spawn "bazooka_shot_small" "Barrel_MLL05" x}
			else name "06" {spawn "bazooka_shot_small" "Barrel_MLL06" x}
			else name "07" {spawn "bazooka_shot_small" "Barrel_MLL07" x}
			}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: HKM - Ironclad 	===================	>>>>
	
	{on fire "gun2"
		{if tagged "aux_HKM"
			{if name "00" {spawn "tank_canon_fire_50_57" "Barrel_HKM00" x}
			else name "01" {spawn "tank_canon_fire_50_57" "Barrel_HKM01" x}
			}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(Bip01_L_foot) sound(SC_fx/sc_stomp_s3/IH_zolw))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(Bip01_R_foot) sound(SC_fx/sc_stomp_s3/IH_zolw))}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Idle 	===================	>>>>
	
	{on ik begin "aim_h"			{Call "SC_Request_Call_Is_Aiming_Checker"}}
	{on ik begin "aim_v"			{Call "SC_Request_Call_Is_Aiming_Checker"}}
	{on ik begin "foresight_melee"	{Call "SC_Request_Call_Is_Aiming_Checker"}}
	{on ik begin "melee_rot"		{Call "SC_Request_Call_Is_Aiming_Checker"}}

	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" loop}  
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.33	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.33	{ani_play "Idle_Lowready2" callback}      		           
		else 			{ani_play "Idle_Lowready3" callback}     		           
		}
	}
	{on "SC_FSM_TURN_Call_Play_Animations" overload
		{if turn_right
			{ani_play "Turn_Right1" loop}	
		else
			{ani_play "Turn_Left1" loop}	
		}
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload
		{if tagged "sc_request_tag_velocity_2"
			{ani_play "Run_Aiming1" 1.4 loop} 
		else
			{If tagged "fwd" 
				{If tagged "sc_tp_Request_tag_is_aiming"	{ani_play "Run_Aiming1" loop}	
				else										{ani_play "Run_Lowready1" loop}} 
			else 
				{If tagged "sc_tp_Request_tag_is_aiming"	{ani_play "Run_Aiming1" -1 loop}	
				else										{ani_play "Run_Lowready1" -1 loop}}
			}	
		}
		("SC_M_Talk_Define_V_move_cmbt_100")	
	}
	("SC_WK_Request_Define_Move_Sprint" min_speed(23))
	
	; <<<<	===================	LV40k Vehicle Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
    	{ani_play "death1" callback}	{Spawn "bloodsparks_energo_death" "visor_eyes"}

		{if tagged "SC_WK_Request_Tag_Pilot_Dead"
			; [...]
		else tagged "SC_WK_Request_Tag_Is_Knocked"
			; [...]
		else
			{add_view	"cooking_high_open_2"		"SC_WK_fx_death_animation"	"FXfire3"}
			{add_view	"cooking_turret_ring"		"SC_WK_fx_death_animation"	"FXfire2"} 
			{add_view	"cooking_turret_smoke"		"SC_WK_fx_death_animation"	"FXfire2"}
			
			{Start_Sound "SC_Plataform/detonation/explosion_mechs_wof_shared/usa_mech_brooklyn_death" 1 use_position}
		}
  	}
	{On "SC_FSM_DEATH_Call_Post_Death_Animation" sync
		{if tagged "SC_WK_Request_Tag_Pilot_Dead"
			; [...]
		else tagged "SC_WK_Request_Tag_Is_Knocked" 
			; [...]
		else
			{Components "body" destroy}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_MELEE_Call_Play_Animations"  
		{Delay 0.1 {start_sound "SC_plataform/SC_fx/sc_ability_s1/orks_dread/claw" 1 use_position}}
		
		{if rand 0.25	{Call_Synced "Lv40k_SM_Dreadnought_Call_Melee_Anm_1"}
		else rand 0.25	{Call_Synced "Lv40k_SM_Dreadnought_Call_Melee_Anm_2"}
	;//	else rand 0.25	{Call_Synced "Lv40k_SM_Dreadnought_Call_Melee_Anm_3"}
		else 			{Call_Synced "Lv40k_SM_Dreadnought_Call_Melee_Anm_3"}
		}	
	}
	{On "Lv40k_SM_Dreadnought_Call_Melee_Anm_1"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}}
	{On "Lv40k_SM_Dreadnought_Call_Melee_Anm_2"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee2" callback}}
	{On "Lv40k_SM_Dreadnought_Call_Melee_Anm_3"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee3" callback}}
	{On "Lv40k_SM_Dreadnought_Call_Melee_Anm_4"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee4" callback}}
	
	{on animation_event "sc_spawn_melee_ctc_spin" sync	
		{if tagged "L_POWERFIST"
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_dreadnought_PF_Spin) where(Basis))	
			
		else tagged "L_POWERCLAW"
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_dreadnought_PC_Spin) where(Basis))	
		}
		{spawn "melee_hit_thunder_hammer" "bip01_l_hand" x}	
	}
	{on animation_event "sc_spawn_melee_ctc_arm_L" sync	
		{if tagged "L_POWERFIST"
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_dreadnought_PF) where(Spawn_Melee_CTC))	
			
		else tagged "L_POWERCLAW"
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_dreadnought_PC) where(Spawn_Melee_CTC))	
		}
		{spawn "melee_hit_thunder_hammer" "bip01_l_hand" x}	
	}
	{on animation_event "sc_spawn_melee_ctc_arm_R" sync	
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_dreadnought_UN) where(Spawn_Melee_CTC))
	}
}
