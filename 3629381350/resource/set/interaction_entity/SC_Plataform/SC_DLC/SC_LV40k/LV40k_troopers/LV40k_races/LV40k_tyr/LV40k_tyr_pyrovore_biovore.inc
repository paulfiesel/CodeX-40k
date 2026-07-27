
;	<<<<------------------------------------------------------------------------------------------------------------->>>>	 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Shared Pyrovore and Biovore ===============] >>
;	<<<<------------------------------------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Pyrovore_Biovore"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_tyr_biovore) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{If tagged "Pyrovore"
			{Call "sc_stuff_call_add_weapon_fx_pyrovore"}
			{Call "sc_stuff_call_add_loop_fire_sound_pyrovore"}
			{add_view "fx_flamer_barrel_drops"	"lv40k_Biovore_fx"	"foresight3"} 
		}
		{if tagged "Biovore"
			{Call "sc_stuff_call_add_weapon_fx_weapon2"}
		}
		{View start "lv40k_Biovore_fx"}
	}

	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "frontal_leg_left"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(DEF-toe_L) sound(SC_fx/sc_bodymove_s2/halo_stalker_form/stalker_quiet_idle_moves))}
	{on animation_event "frontal_leg_right"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(DEF-toe_R) sound(SC_fx/sc_bodymove_s2/halo_stalker_form/stalker_quiet_idle_moves))}
	{on animation_event "mid_leg_left"		("SC_M_Stomp_Define_Add_Stomp_S0" leg(DEF-toe_L_001) sound(SC_fx/sc_bodymove_s2/halo_stalker_form/stalker_quiet_idle_moves))}
	{on animation_event "mid_leg_right"		("SC_M_Stomp_Define_Add_Stomp_S0" leg(DEF-toe_R_001) sound(SC_fx/sc_bodymove_s2/halo_stalker_form/stalker_quiet_idle_moves))}
	{on animation_event "back_leg_left"		("SC_M_Stomp_Define_Add_Stomp_S0" leg(DEF-toe_L_002) sound(SC_fx/sc_bodymove_s2/halo_stalker_form/stalker_quiet_idle_moves))}
	{on animation_event "back_leg_right"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(DEF-toe_R_002) sound(SC_fx/sc_bodymove_s2/halo_stalker_form/stalker_quiet_idle_moves))}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(pyrovore)
		d1(0.2) fx1(ch_vehicle_start)			b1(foresight3)
		d2(0.2) fx2(flamer_fire)				b2(foresight3)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(pyrovore)
		tag(pyrovore)
		snd(SC_DLC_LV40k/smallarms/lp_flamer_tyr_v1) 
		stop_delay(0.3)
	)
	{on fire "weapon"
		{if tagged "Biovore"
			{Ani_play "recoil1" callback}
			{Spawn "flash_tyr_cannon_big" "foresight3" x}
			
		else tagged "Pyrovore"
			{call "sc_stuff_call_fire_weapon_fx_pyrovore"}
			{call "sc_stuff_call_fire_Play_loop_sound_pyrovore"}
			
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight3) distance_m(40) gravity(1.0) spread(0.5)) 
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight3) distance_m(40) gravity(1.0) spread(3.0)) 
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{If rand 0.3	{Delay 1.8 {start_sound "talk/human/lv40k_tyr_biovore/angry_brsrk/v1" use_position}}}
		
		{if rand 0.3	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.3	{ani_play "Idle_Lowready2" callback}        		           
		else			{ani_play "Idle_Lowready3" callback}                          	
		}		
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload	
		{ani_play "Run_Aiming1" loop}	
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	 
		{start_sound "SC_Plataform/sc_bodymove_s2/halo_stalker_form/stalker_from_ranged" use_position}
		{spawn "tyr_biomass_exp_big" "def-bone" x}
		{spawn "bloodsparks_energo_death" "def-bone" x}
		{view stop "lv40k_Biovore_fx"}
		
		{if rand 0.33		{ani_play "death1" callback}
		else rand 0.33		{ani_play "death2" callback}
		else				{ani_play "death3" callback}
		}
  	}
	{On animation_end "death1" sync
		{start_sound "SC_Plataform/sc_bodymove_s2/halo_stalker_form/stalker_from_ranged" use_position}
	}
	{On animation_end "death2" sync
		{start_sound "SC_Plataform/sc_bodymove_s2/halo_stalker_form/stalker_from_ranged" use_position}
	}
	{On animation_end "death3" sync
		{start_sound "SC_Plataform/sc_bodymove_s2/halo_stalker_form/stalker_from_ranged" use_position}
	}

	; <<<<	===================	LV40k Trooper Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations"
		;	[...]
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{Delay 0.1 {start_sound "weapon\shot\SC_DLC_LV40k\melee\claws\d1"}}
		
		{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} 
		
		{if rand 0.5	{Call "Lv40k_Tyr_Biovore_Call_Melee_Anm_1"}
		else			{Call "Lv40k_Tyr_Biovore_Call_Melee_Anm_2"}}
	}
	
	{On "Lv40k_Tyr_Biovore_Call_Melee_Anm_1"	{ani_play "melee1" 1.7 callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Biovore_Call_Melee_Anm_2"	{ani_play "melee2" 1.7 callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	
	{on animation_event "sc_spawn_melee_ctc" sync		
		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_idle_armthud"}
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_warrior_talons) where(melee_ctc))		; // <- Temp contactor
	}
}














