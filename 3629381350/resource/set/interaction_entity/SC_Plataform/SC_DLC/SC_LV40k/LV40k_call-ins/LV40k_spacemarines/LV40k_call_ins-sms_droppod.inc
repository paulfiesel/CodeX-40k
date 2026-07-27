
; ============================================================================================================================================================ ;
; // SM - Drop Pod
; ============================================================================================================================================================ ;

{"lv40k_mp_call_sms_droppod"
	{on spawn
		{add_view "fx_call-in_sms_1_idle_ally"		"marker_idle_ally_fx" "basis"}
		{add_view "fx_call-in_sms_1_active_ally"	"marker_active_ally_fx" "basis"}
		{add_view "fx_call-in_sms_1_active_foe"		"marker_active_enemy_fx" "basis"}
		{add_view "fx_call-in_sms_1_idle_foe"		"marker_active_enemy_fx" "basis"}
	}
}

; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ MARINES 	

{"lv40k_mp_call_sms_droppod_marines_tactical"
	{on spawn
		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/sm_announcer/callins/generic_call"}
	}
	{On "SC_MP_CLL_Call_Activated_Use" overload sync
		{Delay 8.0
			{if tagged "Deathwatch"
				("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(ums_droppod_dw) where(spawn_point) args())
			else
				("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(ums_droppod) where(spawn_point) args())
			}
			{Delay 5.0
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point1) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point2) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point3) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point4) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point5) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point6) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point7) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point8) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point9) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
				("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(spawn_point10) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
				
				{delay 0.1 
					{bone cut "spawn_point1"}{bone cut "spawn_point2"}{bone cut "spawn_point3"}{bone cut "spawn_point4"}{bone cut "spawn_point5"}
					{bone cut "spawn_point6"}{bone cut "spawn_point7"}{bone cut "spawn_point8"}{bone cut "spawn_point9"}{bone cut "spawn_point10"}
					{Delete}
				}
			}
		}
	}
}

; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SUPPLY 	

{"lv40k_mp_call_sms_droppod_ammo"
	{on spawn
		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/sm_announcer/callins/generic_call"}
	}
	{On "SC_MP_CLL_Call_Activated_Use" overload sync
		{Delay 8.0
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(ums_droppod_ammo) where(spawn_point) args())
			{delay 0.1 {delete}}
		}
	}
}

; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~DREADNOUGHTS 	

{"lv40k_mp_call_sms_droppod_dreadnought"
	{on spawn
		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/sm_announcer/callins/dreadnought"}
	}
	{On "SC_MP_CLL_Call_Activated_Use" overload sync
		{Delay 8.0
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(ums_droppod_dreadnought) where(spawn_point) args())
			{Delay 5.0
				("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(ums_dread_STD_assaultcannon) where(spawn_point_dread) args())
				{Delay 0.1 {delete}}
			}
		}
	}
}
