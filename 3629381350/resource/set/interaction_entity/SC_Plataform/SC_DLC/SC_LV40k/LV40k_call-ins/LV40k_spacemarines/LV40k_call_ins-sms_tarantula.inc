
; ============================================================================================================================================================ ;
; // SM - Tarantula
; ============================================================================================================================================================ ;

{"lv40k_mp_call_sms_tarantula"
	{on spawn
		{add_view "fx_call-in_sms_1_idle_ally"		"marker_idle_ally_fx" "basis"}
		{add_view "fx_call-in_sms_1_active_ally"	"marker_active_ally_fx" "basis"}
		{add_view "fx_call-in_sms_1_active_foe"		"marker_active_enemy_fx" "basis"}
		{add_view "fx_call-in_sms_1_idle_foe"		"marker_active_enemy_fx" "basis"}
		
;//		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/sm_announcer/callins/generic_call"}
	}
	{On "SC_MP_CLL_Call_Activated_Use" overload sync
		{Delay 6.0
			{if prop "lv40k_mp_call_sms_tarantula_Beacon"	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(ums_tarantula_beacon) where(spawn_point) args())
			else prop "lv40k_mp_call_sms_tarantula_ML"		("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(ums_tarantula_ML) where(spawn_point) args())
			else prop "lv40k_mp_call_sms_tarantula_HB"		("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(ums_tarantula_hb) where(spawn_point) args())
			}
			{delay 0.1 {delete}}
		}
	}
}
