
; ============================================================================================================================================================ ;
; // SM - Assault Squads
; ============================================================================================================================================================ ;

{"lv40k_mp_call_sms_assaultmarines"
	{on spawn
		{add_view "fx_call-in_sms_1_idle_ally"		"marker_idle_ally_fx" 		"basis"}
		{add_view "fx_call-in_sms_1_active_ally"	"marker_active_ally_fx"		"basis"}
		{add_view "fx_call-in_sms_1_active_foe"		"marker_active_enemy_fx"	"basis"}
		{add_view "fx_call-in_sms_1_idle_foe"		"marker_active_enemy_fx"	"basis"}
		
		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/sm_announcer/callins/assault"}
	}
	{On "SC_MP_CLL_Call_Activated_Use" overload sync
		{Spawn "conquest_spawn_indicator" "body" x {Delay 8.0 {Delete}}}
		
		{Delay 0.5	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 1.0	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 2.0	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 4.0	{start_sound "weapon/shot/ambient_cannon" use_position}}
		{Delay 5.0	{start_sound "weapon/shot/ambient_cannon" use_position}}
	}
}

{"lv40k_mp_call_sms_assaultmarines_1"
	{On "SC_MP_CLL_Call_Activated_Use"
		{delay 8.0
			{delay 0.1	("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point1) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))} 
			{delay 0.2	("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point2) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))}
			{delay 0.3	("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point3) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))}
			{delay 0.4	("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point4) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"}))}
			{delay 0.5	("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point5) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival"})) 
				{delay 0.5	{bone cut "spawn_point1"}{bone cut "spawn_point2"}{bone cut "spawn_point3"}{bone cut "spawn_point4"}{bone cut "spawn_point5"}{Delete}}
			}
		}
	}
}