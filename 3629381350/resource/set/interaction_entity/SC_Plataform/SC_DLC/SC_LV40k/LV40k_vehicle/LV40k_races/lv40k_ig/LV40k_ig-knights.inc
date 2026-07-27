
;	<<<< --------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Imperial Knight  ===============] >>
;	<<<<---------------------------------------------------------------------------------------->>>>			 

{"IG_knight"
	{on spawn 
		{tags add "SC_INF_Tag_Unit_Faction_Imperial_Guard"}
		{tags add "SC_INF_Tag_Unit_Faction_Humans"}
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/tank/lv40k_imperial_knight) v(v2))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{add_view "fx_tyr_eyes_swarmlord" "SC_vh_lights" "eyes_r"}
		{add_view "fx_tyr_eyes_swarmlord" "SC_vh_lights" "eyes_L"}
		
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke1"}
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke2"}
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke3"}
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke4"}
		
		; ################# // TOP GUN
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "T_Missile_Launcher"
			{Call "sc_stuff_call_add_cannon_fx_T_missile_launcher"}
		}
		
		; ################# // LEFT ARM
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "L_arm_battlecannon"
			{Call "sc_stuff_call_add_cannon_fx_L_arm_battlecannon"}
		}
		
		; ################# // RIGHT ARM
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "R_arm_battlecannon"
			{Call "sc_stuff_call_add_cannon_fx_R_arm_battlecannon"}
		}
		{if tagged "R_arm_Avenger"
			{Call "sc_stuff_call_add_weapon_fx_R_arm_avenger"}
		}
		
		; ################# // STUBBERS
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{Call "sc_stuff_call_add_weapon_fx_stubber1"}
		{Call "sc_stuff_call_add_weapon_fx_stubber2"}
		{Call "sc_stuff_call_add_weapon_fx_stubber3"}
		{Call "sc_stuff_call_add_weapon_fx_stubber4"}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_Predator/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_Predator/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_landraider/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_Predator/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/sm_Predator/exhaust"}
		{link_sound "move"				""}
		{link_sound "brake"				""}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Left Arm - Crusader Knight 	===================	>>>>
	
	{on fire "gun"
		; [...]
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Right Arm 	===================	>>>>
	
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(R_arm_battlecannon) d1(0.8) fx1(tank_canon_fire_122_128) b1(foresight_wr_battlecannon))
	
	("SC_Misc_Define_Add_Weapon_Muzzle"	gun_name(R_arm_avenger) 
		d1(0.2) fx1(fx_sc_muzzle_gatling_avenger)	b1(foresight_WR_Gatling)
		d2(5.0) fx2(fx_sc_punisher_overheat)		b2(foresight_WR_Gatling)
		d3(8.0) fx3(gun_smoke_steam)				b3(foresight_punisher)
		d4(8.0) fx4(shell_ac_hydra)					b4(fxshell_WR_gatling)
	)
	
	{on fire "gun1"
		{if tagged "R_arm_battlecannon"
			{call "sc_stuff_call_fire_Cannon_fx_R_arm_battlecannon"}

		else tagged "R_arm_Avenger"	
			{call "sc_stuff_call_fire_weapon_fx_R_arm_avenger"}
			("SC_Misc_Define_Gun_Rev_Animation" args gatling_r)
		}			
		
		("SC_M_Talk_Define_V_angry_brsrk")	
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Top Gun 	===================	>>>>
	
	{on fire "gun2"
		{if name "00"	{spawn "tank_canon_fire_50_57" "barrels_ML00" x}
		else name "01"	{spawn "tank_canon_fire_50_57" "barrels_ML01" x}
		else name "02"	{spawn "tank_canon_fire_50_57" "barrels_ML02" x}
		else name "03"	{spawn "tank_canon_fire_50_57" "barrels_ML03" x}
		else name "04"	{spawn "tank_canon_fire_50_57" "barrels_ML04" x}
		else name "05"	{spawn "tank_canon_fire_50_57" "barrels_ML05" x}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Auxiliary Weapons 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(stubber1) d1(0.4) fx1(tank_canon_fire_20_25_auto) b1(foresight_cxl_stubber))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(stubber2) d1(0.4) fx1(tank_canon_fire_20_25_auto) b1(foresight_cxl_stubber))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(stubber3) d1(0.4) fx1(tank_canon_fire_20_25_auto) b1(foresight_wr_battlecannon_stb))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(stubber4) d1(0.4) fx1(tank_canon_fire_20_25_auto) b1(foresight_wl_battlecannon_stb))
	
	{on fire "mgun1" {call "sc_stuff_call_fire_weapon_fx_stubber1"}}
	{on fire "mgun2" {call "sc_stuff_call_fire_weapon_fx_stubber2"}}
	{on fire "mgun3" {call "sc_stuff_call_fire_weapon_fx_stubber3"}}
	{on fire "mgun4" {call "sc_stuff_call_fire_weapon_fx_stubber4"}}
		
	; <<<<	===================	LV40k Vehicle Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left_stomp"	("SC_M_Stomp_Define_Add_Stomp_S2" leg(DT_C_LLeg) sound(SC_fx/sc_stomp_s3/knight))}
	{on animation_event "leg_right_stomp"	("SC_M_Stomp_Define_Add_Stomp_S2" leg(DT_C_RLeg) sound(SC_fx/sc_stomp_s3/knight))}
	{on animation_event "leg_mech"			{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s4/knight_move" use_position}}
	{on animation_event "leg_mech_fast"		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s4/scarab_walk_move" use_position}}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" loop}  
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{ani_play "Idle_Lowready1" callback} 
	}
	{on "SC_FSM_TURN_Call_Play_Animations" overload
		{if turn_right
			{ani_play "Turn_Right1" loop}	
		else
			{ani_play "Turn_Left1" -1 loop}	
		}
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload
		{if tagged "sc_request_tag_velocity_2"
			{ani_play "Run_Aiming3" loop} 
		else
			{If tagged "fwd" 
				{ani_play "Run_Aiming1" loop} 
			else 
				{ani_play "Run_Aiming2" -1 loop}
			}	
		}
		("SC_M_Talk_Define_V_move_cmbt_100")	
	}
	
	("SC_WK_Request_Define_Move_Sprint" min_speed(36))
	
	; <<<<	===================	LV40k Vehicle Behaviour: Die 	===================	>>>>

	{On "explosion"
		{spawn "ex_nuke" "basis" x}
		{Delay 0.5 {Start_Sound "SC_Plataform/hit/-bullet/size4/titan" 1 use_position}}	; <- huge ass boom sound
		
		{blastwave c4 60 r0 10 r1 25 offset 0 0 0}
		{blastwave c4 30 r0 25 r1 50 offset 0 0 0}
		{blastwave c4 15 r0 50 r1 75 offset 0 0 0}
		{blastwave c4 7.5 r0 50 r1 100 offset 0 0 0}
		{blastwave c4 5 r0 50 r1 125 offset 0 0 0}
		{blastwave c4 2.0 r0 50 r1 150 offset 0 0 0}
	}
 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
		{if tagged "SC_WK_Request_Tag_Pilot_Dead"
			{ani_play "death1" callback}	
		else tagged "SC_WK_Request_Tag_Is_Knocked"
			{ani_play "death2" callback}	
		else
			{ani_play "death1" callback}	
			{add_view	"cooking_high_open_2"		"SC_WK_fx_death_animation"	"ML_h"}
			{add_view	"cooking_turret_ring"		"SC_WK_fx_death_animation"	"DT_C_Body_aim"} 
			{add_view	"cooking_turret_smoke"		"SC_WK_fx_death_animation"	"DT_C_Body_aim"}
			
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
	{On animation_event "body_falls"
		{start_sound "SC_Plataform/SC_fx/sc_stomp_s3/halo_scarab"}
		{Delay 0.2 {start_sound "SC_Plataform/SC_fx/sc_stomp_s3/halo_scarab"}}
		
		{blastwave c4 12 r0 2.5 r1 5.0 offset 0 0 25}
		{blastwave c4 6 r0 5.0 r1 15.0 offset 0 0 25}
		
		{if terrain_fx "water"
			{Spawn "ex_size4_water" "body_rot" x}
		else terrain_fx "shallow_water"
			{Spawn "ex_size4_water" "body_rot" x}
		else terrain_pp "shallow_water"
			{Spawn "ex_size4_water" "body_rot" x}
		else terrain_pp "ice"
			{Spawn "tank_fire_maximum_dust_snow" "body_rot" x}
		else terrain_fx "ice"
			{Spawn "tank_fire_maximum_dust_snow" "body_rot" x}
		else terrain_pp "snow"
			{Spawn "tank_fire_maximum_dust_snow" "body_rot" x}
		else terrain_fx "snow"
			{Spawn "tank_fire_maximum_dust_snow" "body_rot" x}
		else
			{Spawn "tank_fire_maximum_dust_sand" "body_rot" x}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_MELEE_Call_Play_Animations"  
		{if rand 0.33	{Call_Synced "Lv40k_IGC_Knight_Call_Melee_Anm_1"}
		else rand 0.33	{Call_Synced "Lv40k_IGC_Knight_Call_Melee_Anm_2"} {Start_sound "SC_Plataform/SC_fx/sc_ability_s2/ripper_chainsword/Knight_Melee_Chainsword_Disengage_Success" use_position}
		else 			{Call_Synced "Lv40k_IGC_Knight_Call_Melee_Anm_3"} {Start_sound "SC_Plataform/SC_fx/sc_ability_s2/ripper_chainsword/Knight_Melee_Chainsword_Disengage_Success" use_position}
		}	
	}
	{On "Lv40k_IGC_Knight_Call_Melee_Anm_1"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}}
	{On "Lv40k_IGC_Knight_Call_Melee_Anm_2"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee2" callback}}
	{On "Lv40k_IGC_Knight_Call_Melee_Anm_3"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee3" callback}}
	
	{on animation_event "mech_attack_sound"		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s4/scarab_walk_move" use_position}}
	
	{on animation_event "sc_spawn_melee_stomp" sync
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_knight_stomp) where(DT_C_LLeg))
		{Start_sound "SC_Plataform/SC_fx/sc_ability_s2/knight_stomp" use_position}
	}
	{on animation_event "sc_spawn_melee_left_arm" sync
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_knight_ripperchainsword) where(Melee_CTC))
		{Start_sound "SC_Plataform/SC_fx/sc_ability_s2/ripper_chainsword/Knight_Melee_Chainsword_Attack_1" use_position}
		{spawn "fx_sc_sparkles_s2" "Melee_CTC" x}
	}
	{on animation_event "sc_chainsword_sparkles" sync
		{spawn "fx_sc_sparkles_s2" "Melee_CTC" x}
	}
}
