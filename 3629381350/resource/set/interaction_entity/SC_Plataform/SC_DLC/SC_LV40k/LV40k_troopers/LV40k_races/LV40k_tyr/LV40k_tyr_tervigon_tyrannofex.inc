
;	<<<<---------------------------------------------------------------------------------------------------------------->>>>	 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Shared Tervigon and Tyrannofex ===============] >>
;	<<<<---------------------------------------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Tervigon_Tyrannofex"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_tyr_big) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{Add_view "fx_glow_green_big"	"lv40k_Tervigon_Tyrannofex_fx" "eyes_r"}
		{Add_view "fx_glow_green_big"	"lv40k_Tervigon_Tyrannofex_fx" "eyes_l"}
		{Add_view "orchatina"			"lv40k_Tervigon_Tyrannofex_fx" "fx_Breath"}
		
		{If tagged "Tervigon"
			{add_view "tyr_synapse_med" "lv40k_Tervigon_Tyrannofex_fx" "fx_Synapse"}
		else
			{add_view "fx_Tyr_tyrannofex_acid_glow" "lv40k_Tervigon_Tyrannofex_fx" "foresight3"}
			{add_view "blood_droper-g" "lv40k_Tervigon_Tyrannofex_fx" "foresight3"}
		}
		{View start "lv40k_Tervigon_Tyrannofex_fx"}
		
		; // ACID SPRAY - MAIN WEAPON 
		{Call "sc_stuff_call_add_weapon_fx_weapon1"}
		{Call "sc_stuff_call_add_loop_fire_sound_weapon1"}
	}

	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "frontal_leg_left"	("SC_M_Stomp_Define_Add_Stomp_S2" leg(fx_stomp_hand1l) sound(SC_fx/sc_stomp_s3/halo_scarab))}
	{on animation_event "frontal_leg_right"	("SC_M_Stomp_Define_Add_Stomp_S2" leg(fx_stomp_hand1r) sound(SC_fx/sc_stomp_s3/halo_scarab))}
	{on animation_event "back_leg_left"		("SC_M_Stomp_Define_Add_Stomp_S2" leg(fx_stomp_foot1l) sound(SC_fx/sc_stomp_s3/halo_scarab))}
	{on animation_event "back_leg_right"	("SC_M_Stomp_Define_Add_Stomp_S2" leg(fx_stomp_foot1r) sound(SC_fx/sc_stomp_s3/halo_scarab))}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(weapon1)
		d1(0.2) fx1(flash_gun_acid_cannon)	b1(foresight3)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(weapon1)
		tag(lv40k_acid_spray)
		snd(SC_DLC_LV40k/gun/lp_acid_spray_v1)
		stop_delay(0.3)
	)
	{on fire "weapon1"
		{spawn "fx_acid_cone" "foresight3" x}
		
		{if not tagged "sc_stuff_tag_loop_sound_on_weapon1"
			{start_sound "weapon/shot/SC_DLC_LV40k/gun/lp_acid_spray_v1/d1"}
		}
		{call "sc_stuff_call_fire_weapon_fx_weapon1"}
		{call "sc_stuff_call_fire_Play_loop_sound_weapon1"}
		
	}
	
	{on fire "weapon2"
		{if name "00" {spawn "tyr_hitin_hit_sm" "barrels00" x}
		else name "01" {spawn "tyr_hitin_hit_sm" "barrels01" x}
		else name "02" {spawn "tyr_hitin_hit_sm" "barrels02" x}
		else name "03" {spawn "tyr_hitin_hit_sm" "barrels03" x}
		else name "04" {spawn "tyr_hitin_hit_sm" "barrels04" x}
		else name "05" {spawn "tyr_hitin_hit_sm" "barrels05" x}
		else name "06" {spawn "tyr_hitin_hit_sm" "barrels06" x}
		else name "07" {spawn "tyr_hitin_hit_sm" "barrels07" x}
		else name "08" {spawn "tyr_hitin_hit_sm" "barrels08" x}
		else name "09" {spawn "tyr_hitin_hit_sm" "barrels09" x}
		else name "10" {spawn "tyr_hitin_hit_sm" "barrels10" x}
		else name "11" {spawn "tyr_hitin_hit_sm" "barrels11" x}
		else name "12" {spawn "tyr_hitin_hit_sm" "barrels12" x}
		else name "13" {spawn "tyr_hitin_hit_sm" "barrels13" x}
		else name "14" {spawn "tyr_hitin_hit_sm" "barrels14" x}
		else name "15" {spawn "tyr_hitin_hit_sm" "barrels15" x}
		else name "16" {spawn "tyr_hitin_hit_sm" "barrels16" x}
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{If rand 0.33	{Delay 2.5 {start_sound "talk/human/lv40k_tyr_big/angry_brsrk/v1" use_position}}}
		
		{if rand 0.5	{ani_play "Idle_Lowready1" callback}       		           
		else			{ani_play "Idle_Lowready2" callback}                       	
		}		
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload	
		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_to_ranged"}
		{ani_play "Run_Aiming1" loop}	
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
		{add_view "fx_sc_long_bleed" "dying_fx_tyr" "Terrvigon_head_TopSHJnt"}
		{add_view "fx_sc_long_bleed" "dying_fx_tyr" "fx_breath"}
		{View start "dying_fx_tyr"}	{Delay 8.0 {view stop "dying_fx_tyr"}}
		
		{Delay 0.5 	{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_from_ranged"}}
		{Delay 2.0 	{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_from_ranged"}}
		{Delay 4.0 	{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_from_ranged"}}
		
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
		{spawn "tyr_biomass_exp_big" "Terrvigon_ROOTSHJnt" x}
		{spawn "bloodsparks_energo_death" "Terrvigon_ROOTSHJnt" x}
		{spawn "bloodsparks_energo_death" "Terrvigon_head_TopSHJnt" x}
		{view stop "lv40k_Tervigon_Tyrannofex_fx"}
  	}
	{On animation_end "death1" sync
		{view stop "dying_fx_tyr"}
		
		{blastwave c4 8 r0 6 r1 18 offset 0 0 30}
		{blastwave c4 6 r0 8 r1 14 offset 0 0 30}
		
		{if terrain_fx "water"
			{Spawn "spherewater_big2" "Terrvigon_ROOTSHJnt" x}
		else terrain_pp "shallow_water"
			{Spawn "spherewater_big2" "Terrvigon_ROOTSHJnt" x}
		else terrain_fx "shallow_water"
			{Spawn "spherewater_big2" "Terrvigon_ROOTSHJnt" x}
		else terrain_pp "ice"
			{Spawn "tank_fire_maximum_dust_snow" "Terrvigon_ROOTSHJnt" x}
		else terrain_fx "ice"
			{Spawn "tank_fire_maximum_dust_snow" "Terrvigon_ROOTSHJnt" x}
		else terrain_pp "snow"
			{Spawn "tank_fire_maximum_dust_snow" "Terrvigon_ROOTSHJnt" x}
		else terrain_fx "snow"
			{Spawn "tank_fire_maximum_dust_snow" "Terrvigon_ROOTSHJnt" x}
		else
			{Spawn "tank_fire_maximum_dust_sand" "Terrvigon_ROOTSHJnt" x}
		}
		
		{if not tagged "Tervigon"
			{Tex_Mod "xx"}
			{spawn "exp_spore_mine_acid" "Terrvigon_ROOTSHJnt" x}
			{spawn "bloodsparks_energo_death" "Terrvigon_ROOTSHJnt" x}
			{spawn "bloodsparks_energo_death" "Terrvigon_head_TopSHJnt" x}
		}
		
		{add_view "tyr_spore_sparkles_02" "dead_tyr_fx" "Terrvigon_ROOTSHJnt"}
		{view start "dead_tyr_fx"} {delay 40 {view stop "dead_tyr_fx"}}
	}
	{On animation_event "terv_body_falls"
		{start_sound "SC_Plataform/SC_fx/sc_stomp_s3/halo_scarab"}
		{Delay 0.2 {start_sound "SC_Plataform/SC_fx/sc_stomp_s3/halo_scarab"}}
		
		{blastwave c4 8 r0 6 r1 18 offset 0 0 30}
		{blastwave c4 6 r0 8 r1 14 offset 0 0 30}
		
		{Delay 0.5 	{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_from_ranged"}}
		{if terrain_fx "water"
			{Spawn "spherewater_big2" "Terrvigon_ROOTSHJnt" x}
		else terrain_fx "shallow_water"
			{Spawn "spherewater_big2" "Terrvigon_ROOTSHJnt" x}
		else terrain_pp "shallow_water"
			{Spawn "spherewater_big2" "Terrvigon_ROOTSHJnt" x}
		else terrain_pp "ice"
			{Spawn "tank_fire_maximum_dust_snow" "Terrvigon_ROOTSHJnt" x}
		else terrain_fx "ice"
			{Spawn "tank_fire_maximum_dust_snow" "Terrvigon_ROOTSHJnt" x}
		else terrain_pp "snow"
			{Spawn "tank_fire_maximum_dust_snow" "Terrvigon_ROOTSHJnt" x}
		else terrain_fx "snow"
			{Spawn "tank_fire_maximum_dust_snow" "Terrvigon_ROOTSHJnt" x}
		else
			{Spawn "tank_fire_maximum_dust_sand" "Terrvigon_ROOTSHJnt" x}
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations"
		;	[...]
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_to_ranged"}
		
		{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}
	}
	
	{on animation_event "sc_spawn_melee_ctc" sync		
		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s3/halo_tank_form/tank_idle_armthud"}
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_tervigon) where(spawn_Melee_ctc))
	}
	{on animation_event "melee_woosh"	{start_sound "weapon/shot/SC_DLC_LV40k/melee/woosh_big/d1"}}
}














