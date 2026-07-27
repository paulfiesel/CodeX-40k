
;	<<<< ------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Hive Guard ===============] >>
;	<<<<-------------------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Hiveguard"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_tyr_big) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{Add_view "tyr_synapse_max" "FX_Shieldwall" "marker_synapse"}	; // BUZZ: <- part of shieldwall ability, being used in FSM.
		
		{If tagged "main_shockcannon"
			{Add_view "fx_electric_shock_activ" "Tyr_Fx" "foresight_shockcannon"}	
			{Add_view "fx_glow_blue_big" "Tyr_Fx" "beltouter_auxshjnt"}
			{View start "Tyr_FX"}
		}
		
		; // IMPALER - WEAPON 1
		{Call "sc_stuff_call_add_weapon_fx_weapon_impaler"}
	}

	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "frontal_leg_left"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(marker_hand_l) sound(SC_fx/sc_stomp_s1/halo/tank_footsteps))}
	{on animation_event "frontal_leg_right"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(marker_hand_r) sound(SC_fx/sc_stomp_s1/halo/tank_footsteps))}
	{on animation_event "back_leg_left"		("SC_M_Stomp_Define_Add_Stomp_S0" leg(marker_footfall_left) sound(SC_fx/sc_stomp_s1/halo/brute/dirt/run))}
	{on animation_event "back_leg_right"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(marker_footfall_right) sound(SC_fx/sc_stomp_s1/halo/brute/dirt/run))}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	; // BUZZ: Use weapon 1 - no recoil animation
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(weapon_impaler) d1(0.2) fx1(flash_venom_duwitel) b1(foresight_impaler))
	
	{on fire "weapon1"	
		{if tagged "main_impaler"
			{call "sc_stuff_call_fire_weapon_fx_weapon_impaler"}
		else tagged "main_shockcannon"
			{Spawn "flash_eldar_en" "foresight_shockcannon" x}
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.5	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.25	{ani_play "Idle_Lowready2" callback}     		           
		else 			{ani_play "Idle_Lowready3" callback}                          	
		}		
	}
	{on "SC_FSM_TURN_Call_Play_Animations"
		{if turn_left
			{ani_play "Turn_Left1" loop}	
		else
			{ani_play "Turn_Right1" loop}	
		}
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload	
		{if tagged "sc_request_tag_velocity_2"
			{ani_play "Run_aiming2" 1.4 loop} 
		else
			{ani_play "Run_Aiming1" loop}
		}
	}
	("SC_TP_Main_Define_Move_Sprint" min_speed(20))
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
		{add_view "fx_sc_long_bleed" "dying_fx_tyr" "bip01_head"}
		{View start "dying_fx_tyr"}
		{View stop "tyr_Fx"}
		{Delay 8.0 {view stop "dying_fx_tyr"}}
		
    	{ani_play "death1" 0.67}
		{spawn "tyr_biomass_exp_big" "bip01_pelvis" x}
		{spawn "bloodsparks_energo_death" "bip01_pelvis" x}
		{spawn "bloodsparks_energo_death" "bip01_head" x}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations"
		;	[...]
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_to_ranged"}
		
		{if rand 0.4	{Call_Synced "Lv40k_Tyr_Hiveguard_Call_Melee_Anm_1"}
		else rand 0.4	{Call_Synced "Lv40k_Tyr_Hiveguard_Call_Melee_Anm_2"}
		else			{Call_Synced "Lv40k_Tyr_Hiveguard_Call_Melee_Anm_3"}
		}	
	}
	
	{On "Lv40k_Tyr_Hiveguard_Call_Melee_Anm_1" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}}
	{On "Lv40k_Tyr_Hiveguard_Call_Melee_Anm_2" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee2" callback}}
	{On "Lv40k_Tyr_Hiveguard_Call_Melee_Anm_3" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee3" callback}}
		
	{on animation_event "sc_spawn_melee_ctc" sync		
		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_idle_armthud"}
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_hiveguard) where(melee_ctc))
	}
}
