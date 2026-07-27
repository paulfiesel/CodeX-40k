
; ============================================================================================================================================================ ;
; // TYRANIDS - MYCETIC DROP POD
; ============================================================================================================================================================ ;

{"lv40k_mp_call_tyr_mycetic_drop"
	{on spawn
		{add_view "fx_call-in_tyr_1_idle_ally"		"marker_idle_ally_fx" "body"}
		{add_view "fx_call-in_tyr_1_active_ally"	"marker_active_ally_fx" "body"}
		{add_view "fx_call-in_tyr_1_active_foe"		"marker_active_enemy_fx" "body"}
		{add_view "fx_call-in_tyr_1_idle_foe"		"marker_active_enemy_fx" "body"}
		
		{link_sound "sfx" "sc_dlc_lv40k/w40k_announcer_mp/tyr_announcer/tyr_player_reinf_squad"}
	}
	{On "SC_MP_CLL_Call_Activated_Use"
		{Spawn "conquest_spawn_indicator" "body" x {Delay 12.0 {Delete}}}
		{delay 9.1	{Spawn "tyranids_mycetic_spore_big" "Basis" x}}
	}
}

{"lv40k_mp_call_tyr_mycetic_squad_1"
	{on "SC_MP_CLL_Call_Activated_Use"
		{delay 10
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid1) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid2) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid3) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid4) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid5) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid6) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid7) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid8) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid9) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid10) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid11) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid12) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid13) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid14) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid15) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid16) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid17) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid18) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid19) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid20) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid21) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid22) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid23) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid24) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid25) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid26) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid27) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid28) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid29) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid30) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			
			{delay 0.1
				{bone cut "tyranid1"}{bone cut "tyranid2"}{bone cut "tyranid3"}{bone cut "tyranid4"}{bone cut "tyranid5"}{bone cut "tyranid6"}{bone cut "tyranid7"}{bone cut "tyranid8"}{bone cut "tyranid9"}{bone cut "tyranid10"}
				{bone cut "tyranid11"}{bone cut "tyranid12"}{bone cut "tyranid13"}{bone cut "tyranid14"}{bone cut "tyranid15"}{bone cut "tyranid16"}{bone cut "tyranid17"}{bone cut "tyranid18"}{bone cut "tyranid19"}{bone cut "tyranid20"}
				{bone cut "tyranid21"}{bone cut "tyranid22"}{bone cut "tyranid23"}{bone cut "tyranid24"}{bone cut "tyranid25"}{bone cut "tyranid26"}{bone cut "tyranid27"}{bone cut "tyranid28"}{bone cut "tyranid29"}{bone cut "tyranid30"}
				{Delete}
			}
		}
	}
}

{"lv40k_mp_call_tyr_mycetic_gaunts_1"
	{on "SC_MP_CLL_Call_Activated_Use" 
		{delay 10
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid1) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid2) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid3) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid4) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid5) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid6) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid7) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid8) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			
			{delay 0.1
				{bone cut "tyranid1"}{bone cut "tyranid2"}{bone cut "tyranid3"}{bone cut "tyranid4"}
				{bone cut "tyranid5"}{bone cut "tyranid6"}{bone cut "tyranid7"}{bone cut "tyranid8"}
				{Delete}
			}
		}
	}
}

{"lv40k_mp_call_tyr_mycetic_warriors_1"
	{on "SC_MP_CLL_Call_Activated_Use"
		{delay 10
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid1) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid2) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid3) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid4) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid5) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid6) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"})) 
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid7) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			("SC_Allegiance_Define_Check_Linked_Entity_Tag" where(tyranid8) args({Call_Synced "SC_H_Request_Call_Anm_LV40k_Drop_pod_Unlink"}))
			
			{delay 0.1
				{bone cut "tyranid1"}{bone cut "tyranid2"}{bone cut "tyranid3"}{bone cut "tyranid4"}
				{bone cut "tyranid5"}{bone cut "tyranid6"}{bone cut "tyranid7"}{bone cut "tyranid8"}
				{Delete}
			}
		}
	}
}

{"lv40k_mp_call_tyr_mycetic_genestealers_1"
	{on "SC_MP_CLL_Call_Activated_Use"
		{delay 10
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_tyr_genestealer_leviathan_1) where(tyranid1) args())
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_tyr_genestealer_leviathan_1) where(tyranid2) args())
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_tyr_genestealer_leviathan_1) where(tyranid3) args())
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_tyr_genestealer_leviathan_1) where(tyranid4) args())
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_tyr_genestealer_leviathan_1) where(tyranid5) args())
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_tyr_genestealer_leviathan_1) where(tyranid6) args())
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_tyr_genestealer_leviathan_1) where(tyranid7) args())
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_tyr_genestealer_leviathan_1) where(tyranid8) args())
			{Delay 0.1 {Delete}}
		}
	}
}
