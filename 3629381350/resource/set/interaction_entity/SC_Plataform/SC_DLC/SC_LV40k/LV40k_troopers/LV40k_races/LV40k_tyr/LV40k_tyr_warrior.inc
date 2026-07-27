
;	<<<< ----------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Warriors ===============] >>
;	<<<<------------------------------------------------------------------------------------------>>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Warrior"
	{on spawn	
		("LV40k_Tyranids_Spawn")
	
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_tyr_med) v(v1))
		
		{add_view "tyr_synapse_med" "tyranid_fx" "#wrr_rig-bip01_head"}
		
		{if tagged "bonesword"
			{add_view "fx_glow_red_small" "tyranid_fx" "#wrr_rig-eye_l"}
			{add_view "fx_glow_red_small" "tyranid_fx" "#wrr_rig-eye_r"}
		}
		
		{view start "tyranid_fx"}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	; // No footstep sounds -> ++Stealth.
	
	{on animation_event "leg_left"		("SC_M_Stomp_Define_Add_Stomp_S1" leg(#wrr_rig-bip01_l_toe0) sound(SC_fx/sc_stomp_s1/halo/brute/dirt/run))}
	{on animation_event "leg_right"		("SC_M_Stomp_Define_Add_Stomp_S1" leg(#wrr_rig-bip01_r_toe0) sound(SC_fx/sc_stomp_s1/halo/brute/dirt/run))}

	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>
	
	;	[...]
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.33	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.33	{ani_play "Idle_Lowready2" callback}     		           
		else 			{ani_play "Idle_Lowready3" callback}                             	
		}		
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload		;}
		{if tagged "bonesword"
			{ani_play "run_lowready1" loop}	
		else
			{ani_play "run_lowready2" loop}	
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
    	{if rand 0.5	{ani_play "death1"}
      	else			{ani_play "death2"}
		}
		
		{View stop "tyranid_fx"}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations" 
		;	[...]
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{if tagged "bonesword"
			{Delay 0.1 {start_sound "weapon\shot\SC_DLC_LV40k\melee\forceaxe\d1"}}
		else
			{Delay 0.1 {start_sound "weapon\shot\SC_DLC_LV40k\melee\claws\d1"}}
		}
		
		{if rand 0.2	{Call_Synced "Lv40k_Tyr_Warrior_Call_Melee_Anm_1"}
		else rand 0.2	{Call_Synced "Lv40k_Tyr_Warrior_Call_Melee_Anm_2"}
		else rand 0.2	{Call_Synced "Lv40k_Tyr_Warrior_Call_Melee_Anm_3"}
		else 			{Call_Synced "Lv40k_Tyr_Warrior_Call_Melee_Anm_4"}
		}
	}
	{On "Lv40k_Tyr_Warrior_Call_Melee_Anm_1"	{ani_play "melee1" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Warrior_Call_Melee_Anm_2"	{ani_play "melee2" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Warrior_Call_Melee_Anm_3"	{ani_play "melee3" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Warrior_Call_Melee_Anm_4"	{ani_play "melee4" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	
	{on animation_event "sc_spawn_melee_ctc" sync		
		{if tagged "bonesword"
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_warrior_bonesword) where(melee_ctc))
		else
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_warrior_talons) where(melee_ctc))
		}
	}
}
