
;	<<<< ------------------------------------------------------------------------------------------------>>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Space Marines Tarantula ===============] >>
;	<<<<------------------------------------------------------------------------------------------------->>>>			 

{"SM_tarantula"
	{On spawn
		{physics_work 0}
		
		{if work "body"
			{Auto_operatable 0}
			{able select 0}
			
			{link_sound "engine_idle"		"SC_Plataform\SC_fx\sc_misc_s2\halo_equipment\invincibility\invincibility_loop\invincibility\loop"}
			{play_sound "engine_idle" 1}
			
			{if tagged "Tarantula_HB"
				{add_view "fx_glow_green_med"		"SC_vh_lights"		"fx_tarantula"}
				{add_view "fx_ls_red_med"			"SC_vh_lights"		"fx_tarantula_hb1"}
				{Ani_play "tarantula_gun_drop" callback}
				
				{Call "sc_stuff_call_add_weapon_fx_tarantula_hb00"}
				{Call "sc_stuff_call_add_weapon_fx_tarantula_hb01"}
				{Call "sc_stuff_call_add_loop_fire_sound_tarantula_hb"}
			}
			{if tagged "Tarantula_ML"
				{add_view "fx_glow_green_med"		"SC_vh_lights"		"fx_tarantula"}
				{add_view "fx_glow_green_small"		"SC_vh_lights"		"fx_tarantula_ml1"}
				{add_view "fx_ls_red_med"			"SC_vh_lights"		"fx_tarantula_ml2"}
				{add_view "fx_ls_red_med"			"SC_vh_lights"		"fx_tarantula_ml3"}
				{Ani_play "tarantula_gun_drop" callback}
			}
			{if tagged "Tarantula_Beacon"
				{add_view "eyes_b"					"SC_vh_lights"		"fx_beacon6"}
				{add_view "fx_ant_flsah_blu_01"		"SC_vh_lights"		"fx_beacon7"}
				{add_view "fx_glow_red_small"		"SC_vh_lights"		"fx_beacon1"}
				{add_view "fx_glow_red_small"		"SC_vh_lights"		"fx_beacon2"}
				{add_view "fx_glow_green_small"		"SC_vh_lights"		"fx_beacon3"}
				{add_view "fx_glow_green_small"		"SC_vh_lights"		"fx_beacon4"}
				{add_view "fx_glow_red_med"			"SC_vh_lights"		"fx_beacon5"}
				{Ani_play "tarantula_beacon_drop" callback}
			}
			{Delay 0.1 {view pause "SC_vh_lights"}}
		}
	}
	{on animation_event "tarantula_hit_ground"
		{if terrain_fx "snow"
			{spawn "ex_ap_size2_snow" "basis" x}
		else terrain_fx "mud"
			{spawn "ex_ap_size2_mud" "basis" x}
		else terrain_fx "shallow_water"
			{spawn "ex_size1_water" "basis" x}
		else
			{spawn "ex_ap_size2_dust" "basis" x}
		}
	}
	{on animation_end "tarantula_beacon_drop"
		{if work "body"
			{Auto_operatable 1}	{able select 1} {view start "SC_vh_lights"}
			{ani_play "tarantula_beacon_idle" loop}
		}
	}
	{on animation_end "tarantula_gun_drop"
		{if work "body"
			{Auto_operatable 1}	{able select 1} {view start "SC_vh_lights"}
		}
	}
	{On break
		{physics_work 1}
		{Stop_Sound "engine_idle"}
		{Ani_Stop "tarantula_gun_drop"}
		{Ani_Stop "tarantula_beacon_drop"}
		{Ani_Stop "tarantula_beacon_idle"}
	}
	
	; <<<<	===================	SM Tarantula : Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(tarantula_hb00)	d1(0.3) fx1(flash_ork)	b1(barrel_hb00) d2(0.05) fx2(shell_heavybolter)	b2(fxshell_hb00))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(tarantula_hb01)	d1(0.3) fx1(flash_ork)	b1(barrel_hb01) d2(0.05) fx2(shell_heavybolter)	b2(fxshell_hb01))
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(tarantula_hb)
		tag(tarantula_hb)
		snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v1)
		stop_delay(0.2)
	)
	
	{On fire "gun"
		{if tagged "Tarantula_HB"
			{if name "00" {call "sc_stuff_call_fire_weapon_fx_tarantula_hb00"} else name "01" {call "sc_stuff_call_fire_weapon_fx_tarantula_hb01"}}
			{call "sc_stuff_call_fire_Play_loop_sound_tarantula_hb"}
			
		else tagged "Tarantula_ML"
			; [...]
		}
	}
}
