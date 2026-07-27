
;	<<<< ------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Hormagaunt ===============] >>
;	<<<<-------------------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Hormagaunt"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_tyr_small) v(v1))
		
		{If tagged "Adapted"
			{add_view "fx_glow_red_small" "hormagaunt_ad_fx" "#trm_rig-eye_l"}
			{add_view "fx_glow_red_small" "hormagaunt_ad_fx" "#trm_rig-eye_r"}
			{view start "hormagaunt_ad_fx"}
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	; // CAUSING WAY TOO MUCH LAG!
	
;//	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(marker_footfall_left) sound(SC_fx/sc_stomp_s1/halo/flood_stalker))}
;//	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(marker_footfall_right) sound(SC_fx/sc_stomp_s1/halo/flood_stalker))}

	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>
	
	;	[...]
	;	Hormagaunts have no ranged weaponry...
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.2	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.2	{ani_play "Idle_Lowready2" callback}                       	
		else rand 0.2	{ani_play "Idle_Lowready3" callback}                      	
		else rand 0.2	{ani_play "Idle_Lowready4" callback}                         	                       	
		else rand 0.1	{ani_play "Idle_Lowready5" callback}                       	                       	
		else 			{ani_play "Idle_Lowready6" callback}                             	
		}		
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload		;}
;//		{if tagged "sc_tp_Request_tag_is_aiming"
			{if rand 0.3
				{ani_play "Run_Aiming1" loop}	
			else rand 0.3
				{ani_play "Run_Aiming2" loop}	
			else
				{ani_play "Run_Aiming3" loop}	
			}
;//		else						
;//			{ani_play "Run_Lowready1" loop}
;//		}		
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
    	{if rand 0.5	{ani_play "death1"}
      	else			{ani_play "death2"}
		}
		
		{view stop "hormagaunt_ad_fx"}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations" 
		;	[...]
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{if rand 0.3	{Call_Synced "Lv40k_Tyr_Hormagaunt_Call_Melee_Anm_1"}
		else rand 0.3	{Call_Synced "Lv40k_Tyr_Hormagaunt_Call_Melee_Anm_2"}
		else			{Call_Synced "Lv40k_Tyr_Hormagaunt_Call_Melee_Anm_3"}
		}
	}
	{On "Lv40k_Tyr_Hormagaunt_Call_Melee_Anm_1"	{ani_play "melee1" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Hormagaunt_Call_Melee_Anm_2"	{ani_play "melee2" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	{On "Lv40k_Tyr_Hormagaunt_Call_Melee_Anm_3"	{ani_play "melee3" callback}	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}}
	
	{on animation_event "sc_spawn_melee_ctc" sync		;}
		{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s2/halo_ranged_form/ranged_spike_hits"}
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_gaunt) where(spawn_melee_ctc))
	}
}
