
;	<<<< -------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Ork Boy ===============] >>
;	<<<<--------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Ork_Warboss"
	{on spawn	
		("LV40k_Ork_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_ork_warboss) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{Delay 0.1 {Ani_play "fidget"}}
		
		{Add_view "gold_oreol"		"lv40k_warboss_fx" "Rig_Head"}
		{Add_view "orchatina"		"lv40k_warboss_fx" "fx_breath"}
		{View start "lv40k_warboss_fx"}
		
		; // SUPA SHOOTA - WEAPON 1
		{Call "sc_stuff_call_add_weapon_fx_weapon_c00"}
		{Call "sc_stuff_call_add_weapon_fx_weapon_c01"}
		{Call "sc_stuff_call_add_weapon_fx_weapon_c02"}
		
		; // ROKKIT LAUNCHA - WEAPON 2
		{Call "sc_stuff_call_add_weapon_fx_weapon2"}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(FX_FOOTSTEP_L) sound(SC_fx/sc_stomp_s1/halo/grunt/dirt/walk))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(FX_FOOTSTEP_R) sound(SC_fx/sc_stomp_s1/halo/grunt/dirt/walk))}
	
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(weapon2)
		d1(0.2) fx1(bazooka_shot_small)	b1(foresight_rokkit)
	)
	{on fire "weapon2"
		{call "sc_stuff_call_fire_weapon_fx_weapon2"}
		{bone hide "warboss_rokkit"}	{delay 2.0 {bone show "warboss_rokkit"}}
	}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(weapon_c00)	d1(0.3) fx1(flash_ork)	b1(barrel00) d2(0.2) fx2(shell_shoota)	b2(fxshell00))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(weapon_c01)	d1(0.3) fx1(flash_ork)	b1(barrel01) d2(0.2) fx2(shell_shoota)	b2(fxshell01))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(weapon_c02)	d1(0.3) fx1(flash_ork)	b1(barrel02) d2(0.2) fx2(shell_shoota)	b2(fxshell00))
	
	{on fire "weapon1"
		{if name "00"	{call "sc_stuff_call_fire_weapon_fx_weapon_c00"}
		else name "01"	{call "sc_stuff_call_fire_weapon_fx_weapon_c01"}
		else name "02"	{call "sc_stuff_call_fire_weapon_fx_weapon_c02"}
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.2	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.2	{ani_play "Idle_Lowready2" callback}                       	
		else rand 0.2	{ani_play "Idle_Lowready3" callback}                      	
		else rand 0.2	{ani_play "Idle_Lowready4" callback}                         	                       	
		else 			{ani_play "Idle_Lowready5" callback}                          	
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
    	{if rand 0.5	{ani_play "death1"}
      	else			{ani_play "death4"}
		}
		{spawn "bloodsparks_energo_death" "Rig_Pelvis" x}
		{spawn "bloodexp_big" "Rig_Pelvis" x}
		{view stop "lv40k_warboss_fx"}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations"
		{Ani_play "Recoil1" callback}
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{start_sound "human/move/gear_rattle/normal/" 1}
	
		{if rand 0.5	{Call_Synced "Lv40k_Orks_Warboss_Call_Melee_Anm_1"}
		else rand 0.3	{Call_Synced "Lv40k_Orks_Warboss_Call_Melee_Anm_2"}
		else			{Call_Synced "Lv40k_Orks_Warboss_Call_Melee_Anm_3"}
		}
	}
	{On "Lv40k_Orks_Warboss_Call_Melee_Anm_1" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}}
	{On "Lv40k_Orks_Warboss_Call_Melee_Anm_2" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee2" callback}}
	{On "Lv40k_Orks_Warboss_Call_Melee_Anm_3" {Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee3" callback}}
	
	{on animation_event "sc_spawn_melee_ctc_arm" sync
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_warboss) where(melee_spawn_ctc))
	}
}














