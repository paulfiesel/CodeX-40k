
;	<<<< ------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Genestealer ===============] >>
;	<<<<-------------------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Genestealer"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_tyr_genestealer) v(v1))
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(marker_footfall_left) sound(SC_fx/sc_stomp_s1/halo/flood_stalker))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(marker_footfall_right) sound(SC_fx/sc_stomp_s1/halo/flood_stalker))}

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
		{if tagged "sc_request_tag_velocity_2"
			{ani_play "run_aiming1" loop} 
		else
			{ani_play "run_lowready1" 0.9 loop}
		}
	}
	("SC_TP_Main_Define_Move_Sprint" min_speed(28))
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
    	{if rand 0.5	{ani_play "death1"}
      	else			{ani_play "death2"}
		}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations" 
		;	[...]
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{if rand 0.2	{Call_Synced "Lv40k_Tyr_Genestealer_Call_Melee_Anm_1"}
		else rand 0.2	{Call_Synced "Lv40k_Tyr_Genestealer_Call_Melee_Anm_2"}
		else rand 0.2	{Call_Synced "Lv40k_Tyr_Genestealer_Call_Melee_Anm_3"}
		else rand 0.2	{Call_Synced "Lv40k_Tyr_Genestealer_Call_Melee_Anm_4"}
		else			{Call_Synced "Lv40k_Tyr_Genestealer_Call_Melee_Anm_5"}
		}
	}
	{On "Lv40k_Tyr_Genestealer_Call_Melee_Anm_1"	{ani_play "melee1" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Genestealer_Call_Melee_Anm_2"	{ani_play "melee2" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Genestealer_Call_Melee_Anm_3"	{ani_play "melee3" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Genestealer_Call_Melee_Anm_4"	{ani_play "melee4" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Genestealer_Call_Melee_Anm_5"	{ani_play "melee5" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	
	{on animation_event "sc_spawn_melee_ctc" sync		
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_genestealer) where(melee_ctc))
	}
}
