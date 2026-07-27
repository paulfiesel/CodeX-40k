
;	<<<< -------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Exocrine ===============] >>
;	<<<<--------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Exocrine"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_tyr_big) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{Add_view "orchatina"		"lv40k_exocrine_fx" "Exocrine_head_JawEndSHJnt"}
		{View start "lv40k_exocrine_fx"}
		
		; // BIO PLASMIC CANNON - MAIN WEAPON 
		{Call "sc_stuff_call_add_weapon_fx_weapon"}
	}

	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	;//{on animation_event "roar"	{start_sound "talk/human/lv40k_tyr_big/angry_brsrk/v1" use_position}}
	
	{on animation_event "frontal_leg_left"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(Exocrine_l_bigarms_WristSHJnt) sound(SC_fx/sc_stomp_s3/halo_scarab))}
	{on animation_event "frontal_leg_right"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(Exocrine_r_bigarms_WristSHJnt) sound(SC_fx/sc_stomp_s3/halo_scarab))}
	{on animation_event "back_leg_left"		("SC_M_Stomp_Define_Add_Stomp_S0" leg(Exocrine_l_legs_AnkleSHJnt) sound(SC_fx/sc_stomp_s1/halo/tank_footsteps))}
	{on animation_event "back_leg_right"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(Exocrine_r_legs_AnkleSHJnt) sound(SC_fx/sc_stomp_s1/halo/tank_footsteps))}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on fire "weapon"
		{Ani_play "Fire"}
		{Spawn "flash_tyr_cannon_big" "foresight3" x}
	;//	{call "sc_stuff_call_fire_weapon_fx_weapon"}
	}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(weapon)
		d1(0.5) fx1(flash_tyr_cannon_big)	b1(foresight3)
		d2(6.0) fx2(flash_tyr_cannon_big)	b2(foresight3)
	)
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{If rand 0.33	{Delay 2.5 {start_sound "talk/human/lv40k_tyr_big/angry_brsrk/v1" use_position}}}
		
		{if rand 0.4	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.4	{ani_play "Idle_Lowready2" callback}                       	
		else 			{ani_play "Idle_Lowready3" callback}                      	
		}		
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload		;}
		{Start_sound "SC_fx/sc_bodymove_w3/halo_tank_form/tank_to_ranged"}
		{ani_play "Run_Aiming1" loop}	
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
		{add_view "fx_sc_long_bleed" "dying_fx_tyr" "Exocrine_head_TopSHJnt"}
		{add_view "fx_sc_long_bleed" "dying_fx_tyr" "foresight3"}
		{View start "dying_fx_tyr"}	{Delay 8.0 {view stop "dying_fx_tyr"}}
		
		{Start_sound "SC_fx/sc_bodymove_w3/halo_tank_form/tank_from_stalker"}
		{Delay 1.0 	{Start_sound "SC_fx/sc_bodymove_w3/halo_tank_form/tank_from_stalker"}}
		{Delay 3.0 	{Start_sound "SC_fx/sc_bodymove_w3/halo_tank_form/tank_from_stalker"}}
		{Delay 6.5 	{Start_sound "SC_fx/sc_bodymove_w3/halo_tank_form/tank_from_stalker"}}
		
		{if terrain_fx "water"
			{Spawn "spherewater_big2" "basis" x}
		else terrain_pp "shallow_water"
			{Spawn "spherewater_big2" "basis" x}
		else terrain_pp "ice"
			{Spawn "tank_fire_maximum_dust_snow" "basis" x}
		else terrain_fx "ice"
			{Spawn "tank_fire_maximum_dust_snow" "basis" x}
		else terrain_pp "snow"
			{Spawn "tank_fire_maximum_dust_snow" "basis" x}
		else terrain_fx "snow"
			{Spawn "tank_fire_maximum_dust_snow" "basis" x}
		else
			{Spawn "tank_fire_maximum_dust_sand" "basis" x}
		}
    	{ani_play "death1" 0.47 callback}
		{spawn "tyr_biomass_exp_big" "Z_Exocrine_PelvisSHJnt" x}
		{spawn "bloodsparks_energo_death" "Z_Exocrine_PelvisSHJnt" x}
		{spawn "bloodsparks_energo_death" "Exocrine_head_TopSHJnt" x}
		{view stop "lv40k_meganob_fx"}
  	}
	
	{On animation_end "death1" sync
		{Tex_Mod "xx"}
		{blastwave c4 4 r0 2.5 r1 10 offset 0 0 60}
		{blastwave c4 2 r0 6 r1 12 offset 0 0 60}
		{if terrain_fx "water"
			{Spawn "spherewater_big2" "basis" x}
		else terrain_pp "shallow_water"
			{Spawn "spherewater_big2" "basis" x}
		else terrain_pp "ice"
			{Spawn "tank_fire_maximum_dust_snow" "basis" x}
		else terrain_fx "ice"
			{Spawn "tank_fire_maximum_dust_snow" "basis" x}
		else terrain_pp "snow"
			{Spawn "tank_fire_maximum_dust_snow" "basis" x}
		else terrain_fx "snow"
			{Spawn "tank_fire_maximum_dust_snow" "basis" x}
		else
			{Spawn "tank_fire_maximum_dust_sand" "basis" x}
		}
		{tex_mod "xx"}
		{spawn "exp_spore_mine_acid" "Z_Exocrine_PelvisSHJnt" x}
		{spawn "bloodsparks_energo_death" "Z_Exocrine_PelvisSHJnt" x}
		{spawn "bloodsparks_energo_death" "Exocrine_head_TopSHJnt" x}
		
		{add_view "tyr_spore_sparkles_02" "dead_tyr_fx" "Z_Exocrine_PelvisSHJnt"}
		{view start "dead_tyr_fx"} {delay 40 {view stop "dead_tyr_fx"}}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations"
		;	[...]
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_to_ranged"}
		{if rand 0.4	{Call_Synced "Lv40k_Tyr_Exocrine_Call_Melee_Anm_1"}
		else rand 0.4	{Call_Synced "Lv40k_Tyr_Exocrine_Call_Melee_Anm_2"}
		else			{Call_Synced "Lv40k_Tyr_Exocrine_Call_Melee_Anm_3"}
		}	
	}
	
	{On "Lv40k_Tyr_Exocrine_Call_Melee_Anm_1" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}}
	{On "Lv40k_Tyr_Exocrine_Call_Melee_Anm_2" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee2" callback}}
	{On "Lv40k_Tyr_Exocrine_Call_Melee_Anm_3" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee3" callback}}
		
	{on animation_event "sc_spawn_melee_ctc" sync		
		{Start_sound "SC_fx/sc_bodymove_w3/halo_tank_form/tank_idle_armthud"}
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_hiveguard) where(spawn_melee_ctc))
	}
}














