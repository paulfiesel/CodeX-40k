
;	<<<< -------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Ork Nob ===============] >>
;	<<<<--------------------------------------------------------------------------------->>>>			 

{"LV40k_dlc_prop_troopers_Ork_Nob"
	{on spawn	
		("LV40k_Ork_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_ork_nob) v(v2))
		
		{delay 0.5 {if not tagged "_bot" {If rand 0.5 ("SC_M_Talk_Define_V_selection")}}}
		
		{Delay 0.1 
			{if rand 0.33 	{bone show "helmet_nob_1"}
			else rand 0.33	{bone show "helmet_nob_2"}
			else			{bone show "helmet_nob_3"}
			}
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(foot3L) sound(SC_fx/sc_stomp_s1/halo/brute/dirt/run))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(foot3R) sound(SC_fx/sc_stomp_s1/halo/brute/dirt/run))}

	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>
	
	; // Melee Nobs, no ranged Weaponry [...]
	
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
		{ani_play "Run_Aiming1" loop}	
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
    	{if rand 0.3	{ani_play "death1"}
      	else rand 0.2	{ani_play "death2"}
      	else 			{ani_play "death3"}
		}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{if rand 0.25	{Call_Synced "Lv40k_Orks_Orkboy_Call_Melee_Anm_1"}
		else rand 0.25	{Call_Synced "Lv40k_Orks_Orkboy_Call_Melee_Anm_2"}
		else rand 0.25	{Call_Synced "Lv40k_Orks_Orkboy_Call_Melee_Anm_3"}
		else			{Call_Synced "Lv40k_Orks_Orkboy_Call_Melee_Anm_4"}
		}
	}
	{On "Lv40k_Orks_Orkboy_Call_Melee_Anm_1"	{ani_play "melee1" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Orks_Orkboy_Call_Melee_Anm_2"	{ani_play "melee2" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Orks_Orkboy_Call_Melee_Anm_3"	{ani_play "melee3" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Orks_Orkboy_Call_Melee_Anm_4"	{ani_play "melee4" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	
	{on animation_event "sc_spawn_melee_ctc" sync
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_mace) where(spawn_melee_ctc))
	}
	{on animation_event "ork_nob_mace_hit"
		{Start_sound "SC_Plataform/hit/-bullet/size2/chaos_autocanon_hit" use_position}
		{Spawn "metal_hit_bul_at" "spawn_melee_ctc" x} 
	}
}
