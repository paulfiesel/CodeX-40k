
; ============================================================================================================================================================ ;
; // SM - Orbital
; ============================================================================================================================================================ ;

{"lv40k_mp_call_sms_orbital_strike"
	{on spawn
		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/sm_announcer/callins/orbital"}
		{link_sound "orbital" "SC_Plataform/SC_fx/sc_ability_s4/orbital"}
		
		{delay 0.1 
			{player -1}
		 
		;//	{add_view "fx_call-in_target_1_active_ally"		"marker_idle_ally_fx" "basis"}
		;//	{add_view "fx_call-in_sms_1_active_ally"		"marker_active_ally_fx" "basis"}
			{add_view "fx_call-in_target_1_active_foe"		"marker_active_enemy_fx" "basis"}
			{add_view "fx_call-in_target_1_active_foe"		"marker_idle_enemy_fx" "basis"}
			
			{auto_operatable 0}
			{call "use_this_shit"}
		}
	}
	{On "use_this_shit" overload sync
		{view start ally "marker_active_ally_fx"}
		{view start enemy "marker_active_enemy_fx"}
	
		{kill_delay "SC_MP_CLL_Delay_Restore_Failsafe"}	; <- EXP
		{tags add "SC_MP_CLL_Tag_Unit_Activated"}
		{play_sound "sfx"}	
		
		{delay 0.5 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		{delay 1.0 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		{delay 2.0 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		{delay 3.0 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		{delay 4.0 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		{delay 5.0 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		{delay 6.0 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		{delay 7.0 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		{delay 8.0 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		{delay 9.0 {spawn "lv40k_effects_SM_orbital_gravity" "spawn_point" x}}
		
		{Delay 4.0
			{spawn "a_orbital-3" "spawn_point" x} {play_sound "orbital"}
			{fire radius 5 time 30 heating 0.5}
			{delay 10.0
				{spawn "a_orbital-3_explosion" "spawn_point" x}
				{spawn "sm_orbital_strike_shell" "spawn_point" x {stuff_detonate}}
				{Delay 1.0 {hide 1}}
			}
		}
	}
}
