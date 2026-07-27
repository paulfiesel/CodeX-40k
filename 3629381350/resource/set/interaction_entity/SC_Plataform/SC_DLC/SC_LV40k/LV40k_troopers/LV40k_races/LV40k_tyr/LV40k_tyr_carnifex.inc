
;	<<<< ------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Hive Guard ===============] >>
;	<<<<-------------------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Carnifex"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_tyr_big) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{Add_view "fx_tyr_breath_s1"		"lv40k_carnifex_fx"	"fx_breath"}
		
		{If tagged "OOE" 
			{Add_view "fx_tyr_eyes_swarmlord"	"lv40k_carnifex_fx"		"fx_old_one_eye_eye"}
			{Add_view "tyr_synapse_big"			"lv40k_carnifex_fx"		"synapse_ooe"}
			{Tags add "OOE_First_Death"}
		}
		{View start "lv40k_carnifex_fx"}
		
		; // CARNIFEX MAIN WEAPONS
		{Call "sc_stuff_call_add_weapon_fx_weapon_strangler"}
		{Call "sc_stuff_call_add_weapon_fx_weapon_venomcannon"}
		
		; // HELLFEX MULTI DEVOURERS
		{Call "sc_stuff_call_add_weapon_fx_weapon3_00"}
		{Call "sc_stuff_call_add_weapon_fx_weapon3_01"}
		{Call "sc_stuff_call_add_weapon_fx_weapon3_02"}
		{Call "sc_stuff_call_add_weapon_fx_weapon3_03"}
	}

	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "carn_body_move"	{start_sound "SC_Plataform/sc_bodymove_s1/halo_flood_human/combat_human_longmove"}}
	
	{on animation_event "talon_left"		("SC_M_Stomp_Define_Add_Stomp_S1" leg(fx_talon_left) sound(body_move/-halo/ranged_form/tank_melee_hit))}
	{on animation_event "talon_right"		("SC_M_Stomp_Define_Add_Stomp_S1" leg(fx_talon_right) sound(body_move/-halo/ranged_form/tank_melee_hit))}
	
	{on animation_event "leg_left"			("SC_M_Stomp_Define_Add_Stomp_S1" leg(bip01_l_toe0) sound(SC_fx/sc_stomp_s3/halo_scarab))}
	{on animation_event "leg_right"			("SC_M_Stomp_Define_Add_Stomp_S1" leg(bip01_r_toe0) sound(SC_fx/sc_stomp_s3/halo_scarab))}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations"
		{Ani_Play "Recoil1" callback}
	}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(weapon_strangler)
		d1(0.5) fx1(flash_tyr_cannon_big)	b1(foresight_barbed_strangler)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(weapon_venomcannon)
		d1(0.5) fx1(flash_venom_duwitel)	b1(foresight_venom_cannon)
	)
	{on fire "weapon"
		{if tagged "main_strangler"
			{call "sc_stuff_call_fire_weapon_fx_weapon_strangler"}
		else tagged "main_venomcannon"
			{call "sc_stuff_call_fire_weapon_fx_weapon_venomcannon"}
		else
			; [...]
		}
	}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(weapon3_00)	d1(0.3) fx1(flash_fleshborer)	b1(foresight_dev_l_up))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(weapon3_01)	d1(0.3) fx1(flash_fleshborer)	b1(foresight_dev_l_down))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(weapon3_02)	d1(0.3) fx1(flash_fleshborer)	b1(foresight_dev_r_up))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(weapon3_03)	d1(0.3) fx1(flash_fleshborer)	b1(foresight_dev_r_down))

	{on fire "weapon3"	{call "sc_stuff_call_fire_weapon_fx_weapon3_00"}}
	{on fire "weapon4"	{call "sc_stuff_call_fire_weapon_fx_weapon3_01"}}
	{on fire "weapon5"	{call "sc_stuff_call_fire_weapon_fx_weapon3_02"}}
	{on fire "weapon6"	{call "sc_stuff_call_fire_weapon_fx_weapon3_03"}}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{If rand 0.33	{Delay 2.5 {start_sound "talk/human/lv40k_tyr_big/angry_brsrk/v1" use_position}}}
		
		{if rand 0.25	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.25	{ani_play "Idle_Lowready2" callback}     		           
		else rand 0.25	{If tagged "hellfex" {ani_play "Idle_Lowready1" callback} else {ani_play "Idle_Lowready3" callback}}   		           
		else 			{ani_play "Idle_Lowready4" callback}                           	
		}		
	}
	
	; // BUZZ: old one eye is faster.
	{on "SC_FSM_MOVE_Call_Play_Animations" overload		
		{If tagged "OOE" 
			{if tagged "sc_request_tag_velocity_2"
				{ani_play "Run_aiming2" 1.6 loop} 
			else
				{ani_play "Run_Aiming1" 1.2 loop}
			}
		else
			{if tagged "sc_request_tag_velocity_2"
				{ani_play "Run_aiming2" 1.3 loop} 
			else
				{ani_play "Run_Aiming1" loop}
			}
		}
	}
	("SC_TP_Main_Define_Move_Sprint" min_speed(24))
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
		{add_view "fx_sc_long_bleed" "dying_fx_tyr" "fx_breath"}
	
		{View stop "lv40k_carnifex_fx"}
		{View start "dying_fx_tyr"}
		
		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_from_ranged"}
		{Delay 2.8 	{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_from_ranged"}}
		{Delay 4.4 	{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_from_ranged"}}
		{Delay 7.1 	{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_from_ranged"}}
    	{ani_play "death1" 0.67 callback}
		{spawn "tyr_biomass_exp_big" "bip01_pelvis" x}
		{spawn "bloodsparks_energo_death" "bip01_pelvis" x}
		{spawn "bloodsparks_energo_death" "bip01_head" x}
  	}
	{On animation_end "death1" sync
		{If not tagged "OOE_First_Death" 
			{Tex_Mod "xx"}
			
			{Bone cut "w_Devourer_UP"}
			{Bone cut "w_Devourer_DOWN"}
			{Bone cut "w_Tail_end"}
			{Bone cut "Upper_Talons"}
			{Bone cut "w_crushing_claws"}
			{Bone cut "w_Barbed_Strangler"}
			{Bone cut "w_Venom_Cannon"}
			
			{view stop "dying_fx_tyr"}
			{blastwave c4 4 r0 2.5 r1 10 offset 0 0 60}
			{blastwave c4 2 r0 6 r1 12 offset 0 0 60}
			{if terrain_fx "water"
				{Spawn "spherewater_big2" "bip01_pelvis" x}
			else terrain_pp "shallow_water"
				{Spawn "spherewater_big2" "bip01_pelvis" x}
			else terrain_fx "shallow_water"
				{Spawn "spherewater_big2" "bip01_pelvis" x}
			else terrain_pp "ice"
				{Spawn "tank_fire_maximum_dust_snow" "bip01_pelvis" x}
			else terrain_fx "ice"
				{Spawn "tank_fire_maximum_dust_snow" "bip01_pelvis" x}
			else terrain_pp "snow"
				{Spawn "tank_fire_maximum_dust_snow" "bip01_pelvis" x}
			else terrain_fx "snow"
				{Spawn "tank_fire_maximum_dust_snow" "bip01_pelvis" x}
			else
				{Spawn "tank_fire_maximum_dust_sand" "bip01_pelvis" x}
			}
			{tex_mod "xx"}
			{spawn "exp_spore_mine_acid" "bip01_pelvis" x}
			{spawn "bloodsparks_energo_death" "bip01_pelvis" x}
			{spawn "bloodsparks_energo_death" "bip01_head" x}
			
			{add_view "tyr_spore_sparkles_02" "dead_tyr_fx" "bip01_pelvis"}
			{view start "dead_tyr_fx"} {delay 40 {view stop "dead_tyr_fx"}}
		else
			{Delay 10 
				{Delete}
				
				; // add different colour spawns later.
				
				{Spawn "hi_tyr_oldoneeye_leviathan_1" "basis" x {Call "SC_TP_Request_Call_Anm_LV40k_Carnifex_OldOneEye"}} 
			}
		}
	}
	{On animation_event "carn_body_falls"
		{start_sound "SC_Plataform/SC_fx/sc_stomp_s3/halo_scarab"}
		{Delay 0.2 {start_sound "SC_Plataform/SC_fx/sc_stomp_s3/halo_scarab"}}
		{blastwave c4 4 r0 2.5 r1 10 offset 0 0 60}
		{blastwave c4 2 r0 6 r1 12 offset 0 0 60}
		{Delay 0.5 	{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_from_ranged"}}
		{if terrain_fx "water"
			{Spawn "spherewater_big2" "bip01_pelvis" x}
		else terrain_fx "shallow_water"
			{Spawn "spherewater_big2" "bip01_pelvis" x}
		else terrain_pp "shallow_water"
			{Spawn "spherewater_big2" "bip01_pelvis" x}
		else terrain_pp "ice"
			{Spawn "tank_fire_maximum_dust_snow" "bip01_pelvis" x}
		else terrain_fx "ice"
			{Spawn "tank_fire_maximum_dust_snow" "bip01_pelvis" x}
		else terrain_pp "snow"
			{Spawn "tank_fire_maximum_dust_snow" "bip01_pelvis" x}
		else terrain_fx "snow"
			{Spawn "tank_fire_maximum_dust_snow" "bip01_pelvis" x}
		else
			{Spawn "tank_fire_maximum_dust_sand" "bip01_pelvis" x}
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{start_sound "SC_Plataform/sc_bodymove_s1/halo_flood_human/combat_human_longmove"}
		{Delay 0.5	{start_sound "SC_Plataform/sc_bodymove_s1/halo_flood_human/combat_human_longmove"}}
		{delay 2.0	{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tankform_spew_5sec"}}
		{Delay 3.6	{start_sound "SC_Plataform/sc_bodymove_s1/halo_flood_human/combat_human_longmove"}}
		
		{if rand 0.3	{Call_Synced "Lv40k_Tyr_Carnifex_Call_Melee_Anm_1"}
		else rand 0.3	{Call_Synced "Lv40k_Tyr_Carnifex_Call_Melee_Anm_2"}
		else rand 0.3	{Call_Synced "Lv40k_Tyr_Carnifex_Call_Melee_Anm_3"}
		else			{Call_Synced "Lv40k_Tyr_Carnifex_Call_Melee_Anm_4"}
		}	
	}
	
	{On "Lv40k_Tyr_Carnifex_Call_Melee_Anm_1" 
		{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}
		{If tagged "OOE" {ani_play "melee1" 1.35 callback} else {ani_play "melee1" callback}}
	}
	{On "Lv40k_Tyr_Carnifex_Call_Melee_Anm_2" 
		{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}
		{If tagged "OOE" {ani_play "melee2" 1.35 callback} else {ani_play "melee2" callback}}
	}
	{On "Lv40k_Tyr_Carnifex_Call_Melee_Anm_3" 
		{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}
		{If tagged "OOE" {ani_play "melee3" 1.35 callback} else {ani_play "melee3" callback}}
	}
	{On "Lv40k_Tyr_Carnifex_Call_Melee_Anm_4" 
		{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}
		{If tagged "OOE" 
			{ani_play "melee4" 1.35 callback} else {ani_play "melee4" callback}
		}
		{If tagged "_2" 
			{ani_play "melee2" callback} else {ani_play "melee4" callback}
		}
	}
		
	{on animation_event "sc_spawn_melee_ctc" sync		
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_Tyr_Carnifex) where(melee_ctc))
	}
	{on animation_event "melee_woosh"	{start_sound "weapon/shot/SC_DLC_LV40k/melee/woosh_big/d1"}}
	
}
