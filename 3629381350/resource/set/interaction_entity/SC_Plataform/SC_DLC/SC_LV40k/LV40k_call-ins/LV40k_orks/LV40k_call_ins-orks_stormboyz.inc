
; ============================================================================================================================================================ ;
; // ORKZ - STORMBOYZ
; ============================================================================================================================================================ ;

{"lv40k_mp_call_ork_stormboyz_squad"
	{on spawn
		{add_view "fx_call-in_ork_1_idle_ally"		"marker_idle_ally_fx" "body"}
		{add_view "fx_call-in_ork_1_active_ally"	"marker_active_ally_fx" "body"}
		{add_view "fx_call-in_ork_1_active_foe"		"marker_active_enemy_fx" "body"}
		{add_view "fx_call-in_ork_1_idle_foe"		"marker_active_enemy_fx" "body"}
		
		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/ork_announcer/ork_player_reinf_stormboyz"}
	}
	{On "SC_MP_CLL_Call_Activated_Use" overload sync
		{Spawn "conquest_spawn_indicator" "body" x {Delay 12.0 {Delete}}}
		
		{Delay 1.0	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 2.5	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 4.0	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 5.0	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 6.5	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 7.0	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 8.5	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 9.5	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 10	{start_sound "weapon/shot/ambient_cannon" use_position}}
	}
}

{"lv40k_mp_call_ork_stormboyz_squad_1"
	{On "SC_MP_CLL_Call_Activated_Use"
		{delay 10
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy1) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy2) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy3) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy4) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy5) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy6) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy7) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy8) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy9) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy10) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy11) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy12) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			
			{delay 0.1
				{bone cut "boy1"}{bone cut "boy2"}{bone cut "boy3"}{bone cut "boy4"}{bone cut "boy5"}{bone cut "boy6"}
				{bone cut "boy7"}{bone cut "boy8"}{bone cut "boy9"}{bone cut "boy10"}{bone cut "boy11"}{bone cut "boy12"}
				{Delete}
			}
		}
	}
}

{"lv40k_mp_call_ork_stormboyz_squad_2"
	{On "SC_MP_CLL_Call_Activated_Use"
		{delay 10
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy1) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy2) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy3) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy4) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy5) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy6) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy7) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy8) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy9) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy10) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy11) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy12) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy13) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy14) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy15) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy16) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy17) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy18) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy19) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy20) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy21) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy22) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy23) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy24) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy25) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy26) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy27) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy28) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy29) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(boy30) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))
			
			{delay 0.1
				{bone cut "boy1"}{bone cut "boy2"}{bone cut "boy3"}{bone cut "boy4"}{bone cut "boy5"}{bone cut "boy6"}{bone cut "boy7"}{bone cut "boy8"}{bone cut "boy9"}{bone cut "boy10"}
				{bone cut "boy11"}{bone cut "boy12"}{bone cut "boy13"}{bone cut "boy14"}{bone cut "boy15"}{bone cut "boy16"}{bone cut "boy17"}{bone cut "boy18"}{bone cut "boy19"}{bone cut "boy20"}
				{bone cut "boy21"}{bone cut "boy22"}{bone cut "boy23"}{bone cut "boy24"}{bone cut "boy25"}{bone cut "boy26"}{bone cut "boy27"}{bone cut "boy28"}{bone cut "boy29"}{bone cut "boy30"}
				{Delete}
			}
		}
	}
}
