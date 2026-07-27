
;	<<<< ------------------------------------------------------------------------------------>>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Ork Meganob ===============] >>
;	<<<<------------------------------------------------------------------------------------->>>>			 

{"LV40k_dlc_prop_troopers_ork_meganobs"
	{on spawn	
		("LV40k_Ork_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_ork_meganob) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{if not tagged "mgn_ld"	{Add_view "fx_ork_halo_red_01" "lv40k_meganob_fx" "fx_eye"}}
		
		{Add_view "exhaust_dark_small"			"lv40k_meganob_fx" "fx_smoke1"}
		{Add_view "ch_vehicle_idle"				"lv40k_meganob_fx" "fx_smoke1"}
		{Add_view "exhaust_dark_small"			"lv40k_meganob_fx" "fx_smoke2"}
		{Add_view "ch_vehicle_idle"				"lv40k_meganob_fx" "fx_smoke2"}
		{Add_view "halo_light_laser_sight"		"lv40k_meganob_fx" "fx_laser"}
		
		{View start "lv40k_meganob_fx"}
		
		; // KUSTOM SHOOTA - WEAPON 1
		{Call "sc_stuff_call_add_loop_fire_sound_weapon"}
		{Call "sc_stuff_call_add_weapon_fx_weapon"}
		
		; // ROKKIT LAUNCHA - WEAPON 2
		{Call "sc_stuff_call_add_weapon_fx_weapon1"}
	}

	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(FX_FOOTSTEP_L) sound(SC_fx/sc_stomp_s2/IH_erlkonig))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(FX_FOOTSTEP_R) sound(SC_fx/sc_stomp_s2/IH_erlkonig))}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on fire "weapon"
		{call "sc_stuff_call_fire_Play_loop_sound_weapon"}
		{call "sc_stuff_call_fire_weapon_fx_weapon"}
	}
	{on fire "weapon1"
		{call "sc_stuff_call_fire_weapon_fx_weapon1"}
		{bone hide "Meganob_Rocket"}	{delay 6.0 {bone show "Meganob_Rocket"}}
	}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(weapon1)
		d1(0.2) fx1(bazooka_shot_small)			b1(foresight4)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(weapon)
		d1(0.2) fx1(flash_ork)			b1(foresight3)
		d2(0.05) fx2(shell_shoota_big)	b2(fx_shell)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(weapon)
		tag(lv40k_shoota_kustom)
		snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1)
		stop_delay(0.2)
	)
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.5	{ani_play "Idle_Lowready1" callback}       		           
		else 			{ani_play "Idle_Lowready2" callback}                       	
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
    	{ani_play "death1"}
		{spawn "bloodexp_big" "Rig_Pelvis" x}
		{view stop "lv40k_meganob_fx"}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations"
		{Ani_play "Recoil1" callback}
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{start_sound "SC_plataform/SC_fx/sc_ability_s1/orks_dread/claw" use_position}
		
		{if rand 0.2	{Call_Synced "Lv40k_Orks_Meganob_Call_Melee_Anm_1"}
		else rand 0.2	{Call_Synced "Lv40k_Orks_Meganob_Call_Melee_Anm_2"}
		else rand 0.2	{Call_Synced "Lv40k_Orks_Meganob_Call_Melee_Anm_3"}
		else			{Call_Synced "Lv40k_Orks_Meganob_Call_Melee_Anm_4"}
		}	
	}
	
	{On "Lv40k_Orks_Meganob_Call_Melee_Anm_1" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}}
	{On "Lv40k_Orks_Meganob_Call_Melee_Anm_2" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee2" callback}}
	{On "Lv40k_Orks_Meganob_Call_Melee_Anm_3" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee3" callback}}
	{On "Lv40k_Orks_Meganob_Call_Melee_Anm_4" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee4" callback}}
	
	{on animation_event "sc_spawn_melee_ctc_arm_r" sync
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_meganob) where(melee_spawn_r))
	}
	{on animation_event "sc_spawn_melee_ctc_arm_l" sync
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_meganob) where(melee_spawn_l))
	}
	{on animation_event "sc_lv40k_ork_mgnbfx" sync
		{call "sc_stuff_call_fire_Play_loop_sound_weapon"}
		{call "sc_stuff_call_fire_weapon_fx_weapon"}
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_meganob) where(foresight3))
	}
}
