
; ============================================================================================================================================================ ;
; // SM - Terminators
; ============================================================================================================================================================ ;

{"lv40k_mp_call_sms_terminators"
	{on spawn
		{add_view "fx_call-in_sms_1_idle_ally"		"marker_idle_ally_fx" "basis"}
		{add_view "fx_call-in_sms_1_active_ally"	"marker_active_ally_fx" "basis"}
		{add_view "fx_call-in_sms_1_active_foe"		"marker_active_enemy_fx" "basis"}
		{add_view "fx_call-in_sms_1_idle_foe"		"marker_active_enemy_fx" "basis"}
		
		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/sm_announcer/callins/terminator"}
	}
	{On "SC_MP_CLL_Call_Activated_Use" overload sync
		{Delay 10.0
			{if prop "lv40k_mp_call_sms_terminators_assault"	
				{delay 0.1 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_thunderhammer_UMS_1) where(spawn_point1) args())}
				{delay 0.2 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_thunderhammer_UMS_1) where(spawn_point2) args())}
				{delay 0.4 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_thunderhammer_UMS_1) where(spawn_point4) args())}
				{delay 0.6 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_thunderhammer_UMS_1) where(spawn_point5) args())}
				{delay 0.8 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_thunderhammer_UMS_2) where(spawn_point7) args())}
				
			else prop "lv40k_mp_call_sms_terminators_heavyflamer"	
				{delay 0.1 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_heavyflamer_UMS_1) where(spawn_point1) args())}
				{delay 0.2 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_heavyflamer_UMS_1) where(spawn_point2) args())}
				{delay 0.4 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_heavyflamer_UMS_1) where(spawn_point3) args())}
				{delay 0.6 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_heavyflamer_UMS_1) where(spawn_point5) args())}
				{delay 0.8 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_heavyflamer_UMS_2) where(spawn_point7) args())}
				
			else prop "lv40k_mp_call_sms_terminators_tactical"	
				{delay 0.1 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_stormbolter_UMS_1) where(spawn_point1) args())}
				{delay 0.2 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_stormbolter_UMS_1) where(spawn_point2) args())}
				{delay 0.4 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_stormbolter_UMS_1) where(spawn_point3) args())}
				{delay 0.6 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_term_stormbolter_UMS_1) where(spawn_point4) args())}
				{delay 0.8 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_term_assaultcannon_ums_2) where(spawn_point7) args())}
			}
			{delay 2.0 {delete}}
		}
	}
}
