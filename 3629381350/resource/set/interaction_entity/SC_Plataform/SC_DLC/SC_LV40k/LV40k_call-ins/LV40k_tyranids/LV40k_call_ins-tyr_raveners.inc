
; ============================================================================================================================================================ ;
; // TYRANIDS - RAVENERS
; ============================================================================================================================================================ ;

{"lv40k_mp_call_tyr_ravener_emerge_1"
	{on spawn
		{add_view "fx_call-in_tyr_1_idle_ally"		"marker_idle_ally_fx" "body"}
		{add_view "fx_call-in_tyr_1_active_ally"	"marker_active_ally_fx" "body"}
		{add_view "fx_call-in_tyr_1_active_foe"		"marker_active_enemy_fx" "body"}
		{add_view "fx_call-in_tyr_1_idle_foe"		"marker_active_enemy_fx" "body"}
		
		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/tyr_announcer/Tyr_player_reinf_raveners"}
	}
	{On "SC_MP_CLL_Call_Activated_Use" overload sync
		{Spawn "conquest_spawn_indicator" "body" x {Delay 12.0 {Delete}}}
	
		{delay 10
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(ravener1) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(ravener2) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(ravener3) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(ravener4) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(ravener5) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(ravener6) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(ravener7) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(ravener8) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Ravener_Emerge"}))
			
			{delay 0.1
				{bone cut "ravener1"}{bone cut "ravener2"}{bone cut "ravener3"}{bone cut "ravener4"}
				{bone cut "ravener5"}{bone cut "ravener6"}{bone cut "ravener7"}{bone cut "ravener8"}
				{Delete}
			}
		}
	}
}
