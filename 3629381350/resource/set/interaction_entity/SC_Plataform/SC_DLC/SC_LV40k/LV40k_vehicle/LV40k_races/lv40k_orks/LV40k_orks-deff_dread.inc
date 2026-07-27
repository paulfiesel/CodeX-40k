
;	<<<< --------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Ork Deff Dread ===============] >>
;	<<<<---------------------------------------------------------------------------------------->>>>			 

{"ork_deff_Dread"
	{on spawn 
		{tags add "SC_INF_Tag_Unit_Faction_Orks"}
		{tags add "SC_INF_Tag_Unit_Faction_Xenos"}
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/tank/lv40k_ork_deff_dread) v(v2))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{add_view "yellow_eyes_halo_big" "SC_vh_lights" "fx_eye_Mad_dread"}
		{add_view "halo_light_laser_sight" "SC_vh_lights" "fx_laser_Mad_dread"}
		
		{add_view "ch_vehicle_idle" "exhaust2" "fxsmoke1"}
		{add_view "ch_vehicle_idle" "exhaust2" "fxsmoke2"}
		{add_view "ch_vehicle_idle" "exhaust2" "fxsmoke3"}
		{add_view "ch_vehicle_idle" "exhaust2" "fxsmoke4"}
		{add_view "ch_vehicle_idle" "exhaust2" "fxsmoke5"}
		
		{add_view "ch_vehicle_start" "exhaust" "fxsmoke1"}
		{add_view "ch_vehicle_start" "exhaust" "fxsmoke2"}
		{add_view "ch_vehicle_start" "exhaust" "fxsmoke3"}
		{add_view "ch_vehicle_start" "exhaust" "fxsmoke4"}
		{add_view "ch_vehicle_start" "exhaust" "fxsmoke5"}
		
		; ===================== SHOOTAS VARIANT
		{If tagged "Shoota"
			{Call "sc_stuff_call_add_weapon_fx_shoota1"}
			{Call "sc_stuff_call_add_weapon_fx_shoota2"}
		}
		
		; ===================== KANNON VARIANT
		{If tagged "Kannon"
			{Call "sc_stuff_call_add_weapon_fx_Kannon1"}
			{Call "sc_stuff_call_add_weapon_fx_Kannon2"}
		}
		
		; ===================== MEGABLASTA VARIANT
		{If tagged "Megablasta"
			{Call "sc_stuff_call_add_weapon_fx_megablasta1"}
			{Call "sc_stuff_call_add_weapon_fx_megablasta2"}
			
			{add_view "fx_glow_orange_med"	"SC_vh_lights"	"fx_L_Megablasta00"} 
			{add_view "fx_glow_red_small"	"SC_vh_lights"	"fx_L_Megablasta01"} 
			{add_view "fx_glow_red_small"	"SC_vh_lights"	"fx_L_Megablasta02"} 
			{add_view "fx_glow_red_small"	"SC_vh_lights"	"fx_L_Megablasta03"} 
			{add_view "fx_glow_red_small"	"SC_vh_lights"	"fx_L_Megablasta04"} 
			
			{add_view "fx_glow_orange_med"	"SC_vh_lights"	"fx_R_Megablasta00"} 
			{add_view "fx_glow_red_small"	"SC_vh_lights"	"fx_R_Megablasta01"} 
			{add_view "fx_glow_red_small"	"SC_vh_lights"	"fx_R_Megablasta02"} 
			{add_view "fx_glow_red_small"	"SC_vh_lights"	"fx_R_Megablasta03"} 
			{add_view "fx_glow_red_small"	"SC_vh_lights"	"fx_R_Megablasta04"} 
		}
		
		; ===================== ZZAP VARIANT
		{If tagged "Zzapgun"
			{Call "sc_stuff_call_add_weapon_fx_zzap1"}
			{Call "sc_stuff_call_add_weapon_fx_zzap2"}
		}
		
		; ===================== AUTOCANNON VARIANT
		{If tagged "Autocannon"
			{Call "sc_stuff_call_add_weapon_fx_autocannon1"}
			{Call "sc_stuff_call_add_weapon_fx_autocannon2"}
		}
		
		; ===================== BURNAS VARIANT
		{if tagged "Burna"
			{Call "sc_stuff_call_add_loop_fire_sound_flamer1"}
			{Call "sc_stuff_call_add_loop_fire_sound_flamer2"}
			
			{Call "sc_stuff_call_add_weapon_fx_flamer1"}
			{Call "sc_stuff_call_add_weapon_fx_flamer2"}
			
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights"	"foresight_R_Burna"} 
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights"	"foresight_L_Burna"} 
			{add_view "flamer_fire_barrel_fall"	"SC_vh_lights"	"fx_R_Burna"} 
			{add_view "flamer_fire_barrel_fall"	"SC_vh_lights"	"fx_L_Burna"} 
		}
		
		; ===================== ROKKITS VARIANT
		; [...]
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/exhaust"}
		{link_sound "move"				""}
		{link_sound "brake"				""}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Weapons Sounds and FX 	===================	>>>>
	
	; // BUZZ: mgun1 is left / mgun2 is right
	
	{on "reload"
		{if tagged "Rokkit"
			{if name "mgun1"	{Delay 5.0 	{bone show "R_Ammo1"}	{bone show "R_Ammo2"}	{bone show "R_Ammo3"}}
			else name "mgun2"	{Delay 5.0 	{bone show "L_Ammo1"}	{bone show "L_Ammo2"}	{bone show "L_Ammo3"}}
			}
		}
	}
	
	(Define "LV40k_ork_deff_dread_Define_Fire_Rokkit_launcha" 
		{if tagged "fire_rokkit_%02"	{tags remove "fire_rokkit_%02"} 	{bone hide "%0_Ammo3"}	{spawn "bazooka_shot_small" "barrel_%0_Rokkits02" x}	
		else tagged "fire_rokkit_%01"	{tags remove "fire_rokkit_%01"}		{bone hide "%0_Ammo2"}	{spawn "bazooka_shot_small" "barrel_%0_Rokkits01" x}	{tags add "fire_rokkit_%02"}	
		else							{tags add "fire_rokkit_%01"}		{bone hide "%0_Ammo1"}	{spawn "bazooka_shot_small" "barrel_%0_Rokkits00" x}	
		}
	)
	
	{on fire "mgun1"
		{if tagged "Burna"
			{call "sc_stuff_call_fire_Play_loop_sound_flamer1"}	{call "sc_stuff_call_fire_weapon_fx_flamer1"}
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer) where(foresight_R_Burna) distance_m(40) gravity(1.0) spread(2.5)) 
			
		else tagged "Shoota"
			{call "sc_stuff_call_fire_weapon_fx_shoota1"}
			
		else tagged "Kannon"
			{call "sc_stuff_call_fire_weapon_fx_Kannon1"}
			
		else tagged "Zzapgun"
			{call "sc_stuff_call_fire_weapon_fx_zzap1"}
			
		else tagged "Autocannon"
			{call "sc_stuff_call_fire_weapon_fx_autocannon1"}
			
		else tagged "Megablasta"
			{call "sc_stuff_call_fire_weapon_fx_Megablasta1"}
			
		else tagged "Rokkit"	
			("LV40k_ork_deff_dread_Define_Fire_Rokkit_launcha" args R)
		}
	}
	{on fire "mgun2"
		{if tagged "Burna"		
			{call "sc_stuff_call_fire_Play_loop_sound_flamer2"}	{call "sc_stuff_call_fire_weapon_fx_flamer2"}
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer) where(foresight_L_Burna) distance_m(40) gravity(1.0) spread(2.5)) 
			
		else tagged "Shoota"
			{call "sc_stuff_call_fire_weapon_fx_shoota2"}
			
		else tagged "Kannon"
			{call "sc_stuff_call_fire_weapon_fx_Kannon2"}
			
		else tagged "Zzapgun"
			{call "sc_stuff_call_fire_weapon_fx_zzap2"}
			
		else tagged "Autocannon"
			{call "sc_stuff_call_fire_weapon_fx_autocannon2"}
			
		else tagged "Megablasta"
			{call "sc_stuff_call_fire_weapon_fx_Megablasta2"}
			
		else tagged "Rokkit"	
			("LV40k_ork_deff_dread_Define_Fire_Rokkit_launcha" args L)
		}
	}
	
	; // BURNAS
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(flamer1)
		d1(0.2) fx1(ch_vehicle_start)			b1(foresight_R_Burna)
		d2(0.2) fx2(flamer_fire)				b2(foresight_R_Burna)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(flamer1)
		tag(flamer1)
		snd(SC_DLC_LV40k/smallarms/lp_flamer_v1)  
		stop_delay(0.2)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(flamer2)
		d1(0.2) fx1(ch_vehicle_start)			b1(foresight_L_Burna)
		d2(0.2) fx2(flamer_fire)				b2(foresight_L_Burna)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(flamer2)
		tag(flamer2)
		snd(SC_DLC_LV40k/smallarms/lp_flamer_v1)  
		stop_delay(0.2)
	)
	
	; // ZZAP
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(zzap1)
		d1(0.4) fx1(flash_lascannon_orks)			b1(foresight_R_Zzap)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(zzap2)
		d1(0.4) fx1(flash_lascannon_orks)			b1(foresight_L_Zzap)
	)
	
	
	; // MEGABLASTA
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(megablasta1)
		d1(0.5) fx1(flash_mega_blast)			b1(foresight_R_Megablasta)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(megablasta2)
		d1(0.5) fx1(flash_mega_blast)			b1(foresight_L_Megablasta)
	)
	
	; // AUTOCANNON
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(Kannon1)
		d1(0.6) fx1(tank_canon_fire_50_57)			b1(foresight_R_Kannon)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(Kannon2)
		d1(0.6) fx1(tank_canon_fire_50_57)			b1(foresight_L_Kannon)
	)
	
	; // AUTOCANNON
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(autocannon1)
		d1(0.2) fx1(flash_bg)			b1(foresight_R_Autocannon)
		d2(0.2) fx2(shell_ac_40)		b2(fxshell_R_Autocannon)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(autocannon2)
		d1(0.2) fx1(flash_bg)			b1(foresight_L_Autocannon)
		d2(0.2) fx2(shell_ac_40)		b2(fxshell_L_Autocannon)
	)
	
	; // BIG SHOOTAS
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(shoota1)
		d1(0.2) fx1(flash_ork)			b1(barrel_R_Shoota00)
		d2(0.2) fx2(flash_ork)			b2(barrel_R_Shoota01)
		d3(0.1) fx3(shell_shoota_big)	b3(fxshell_R_Shoota00)
		d4(0.1) fx4(shell_shoota_big)	b4(fxshell_R_Shoota01)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(shoota2)
		d1(0.2) fx1(flash_ork)			b1(barrel_L_Shoota00)
		d2(0.2) fx2(flash_ork)			b2(barrel_L_Shoota01)
		d3(0.1) fx3(shell_shoota_big)	b3(fxshell_L_Shoota00)
		d4(0.1) fx4(shell_shoota_big)	b4(fxshell_L_Shoota01)
	)

	; <<<<	===================	LV40k Vehicle Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(fx_stomp_l) sound(SC_fx/sc_stomp_s3/IH_kolokol))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(fx_stomp_r) sound(SC_fx/sc_stomp_s3/IH_kolokol))}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Idle 	===================	>>>>
	
	{on ik begin "aim_bone_gun_left_h"	{Call "SC_Request_Call_Is_Aiming_Checker"}}
	{on ik begin "aim_bone_gun_left_v"	{Call "SC_Request_Call_Is_Aiming_Checker"}}
	{on ik begin "aim_bone_gun_right_h"	{Call "SC_Request_Call_Is_Aiming_Checker"}}
	{on ik begin "aim_bone_gun_right_v"	{Call "SC_Request_Call_Is_Aiming_Checker"}}
	{on ik begin "foresight_melee"		{Call "SC_Request_Call_Is_Aiming_Checker"}}
	{on ik begin "melee_rot"			{Call "SC_Request_Call_Is_Aiming_Checker"}}

	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" loop}  
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.25	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.25	{ani_play "Idle_Lowready2" callback}      		           
		else rand 0.25	{ani_play "Idle_Lowready3" callback}     		           
		else 			{ani_play "Idle_Lowready4" callback}                      
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
			{ani_play "Run_Aiming3" loop} 
		else
			{If tagged "fwd" 
				{ani_play "Run_Aiming1" loop} 
			else 
				{ani_play "Run_Aiming2" -1 loop}
			}	
		}
	}
	("SC_WK_Request_Define_Move_Sprint" min_speed(28))
	
	; <<<<	===================	LV40k Vehicle Behaviour: Die 	===================	>>>>

	{On "SC_FSM_DEATH_Call_Post_Death_Animation"
		{if not tagged "SC_WK_Request_Tag_Pilot_Dead" {Components "body" destroy}}
	}
 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
    	{ani_play "death1" callback}	{Spawn "bloodsparks_energo_death" "fxfire1"}
		{Start_Sound "SC_Plataform/detonation/explosion_mechs_wof_shared/pol_mech_trooptransport_death" 1 use_position}

		{if not tagged "SC_WK_Request_Tag_Pilot_Dead"
			{add_view	"cooking_high_open_2"		"SC_WK_fx_death_animation"	"FXfire3"}
			{add_view	"cooking_turret_ring"		"SC_WK_fx_death_animation"	"FXfire4"} 
			{add_view	"cooking_turret_smoke"		"SC_WK_fx_death_animation"	"FXfire4"}
		}
  	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_MELEE_Call_Play_Animations"  
		{start_sound "SC_plataform/SC_fx/sc_ability_s1/orks_dread/claw" use_position}
		
		{if rand 0.33	{Call_Synced "Lv40k_Orks_Deff_Dread_Call_Melee_Anm_1"}
		else rand 0.33	
			{Call_Synced "Lv40k_Orks_Deff_Dread_Call_Melee_Anm_2"}
			{Delay 0.35 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 0.5 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 0.6 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 0.7 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 0.85 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 1.0 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 1.1 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
		else 	
			{Call_Synced "Lv40k_Orks_Deff_Dread_Call_Melee_Anm_3"}
			{Delay 0.3 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 0.5 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 0.6 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 0.8 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 1.0 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
			{Delay 1.1 {Spawn "fx_sc_sparkles_s2" "melee_contact_l1" x}}
		}	
	}
	{On "Lv40k_Orks_Deff_Dread_Call_Melee_Anm_1"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}}
	{On "Lv40k_Orks_Deff_Dread_Call_Melee_Anm_2"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee2" callback} {start_sound "SC_plataform/SC_fx/sc_ability_s1/orks_dread/saw" 1 use_position}}
	{On "Lv40k_Orks_Deff_Dread_Call_Melee_Anm_3"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee3" callback} {start_sound "SC_plataform/SC_fx/sc_ability_s1/orks_dread/saw" 1 use_position}}
	
	{on animation_event "sc_spawn_melee_ctc_arm_r" sync
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_deff_dread) where(melee_contact_r1))
	}
	{on animation_event "sc_spawn_melee_ctc_arm_l" sync 
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_deff_dread) where(melee_contact_l1))
	}
}
