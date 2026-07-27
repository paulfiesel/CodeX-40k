
;	<<<< ---------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Ork Cannons ===============] >>
;	<<<<----------------------------------------------------------------------------------->>>>			 

{"ork_mekgun"
	{On spawn
		{add_view "fx_glow_blue_big" "SC_vh_lights_crew" "fxlight1"}
		{add_view "fx_glow_blue_big" "SC_vh_lights_crew" "fxlight2"}
		{add_view "fx_ork_weirdboy_brain_waves" "SC_vh_lights_crew" "fxlight3"}
		{add_view "fx_ork_weirdboy_brain_waves" "SC_vh_lights_crew" "fxlight4"}
		{add_view "fx_ork_weirdboy_brain_waves" "SC_vh_lights_crew" "fxlight6"}
		{add_view "fx_glow_red_med" "SC_vh_lights_crew" "fxlight7"}
		{add_view "fx_glow_green_med" "SC_vh_lights_crew" "fxlight8"}
	}
	{On fire "gun"
		{ani_play "fire"}
		{spawn "fx_ork_zzap_flash" "foresight1" x}
	}
}

{"temp_ork_flak_20mm_flakvierling38"
	{On spawn
		{Call "sc_stuff_call_add_weapon_fx_flakk00"}
		{Call "sc_stuff_call_add_weapon_fx_flakk01"}
		{Call "sc_stuff_call_add_weapon_fx_flakk02"}
		{Call "sc_stuff_call_add_weapon_fx_flakk03"}
	}

	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(flakk00)		d1(0.3) fx1(tank_canon_fire_37_40_auto)	b1(shooter00) 	b2(shooter00))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(flakk01)		d1(0.3) fx1(tank_canon_fire_37_40_auto)	b1(shooter01) 	b2(shooter01))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(flakk02)		d1(0.3) fx1(tank_canon_fire_37_40_auto)	b1(shooter02) 	b2(shooter02))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(flakk03)		d1(0.3) fx1(tank_canon_fire_37_40_auto)	b1(shooter03) 	b2(shooter03))

	(define "fire_barrel_anm"
		name "%0"
			{call "sc_stuff_call_fire_weapon_fx_%1%0"}
			{ani_play "fire%0"}
	)
	{on fire "gun"
		{if	 ("fire_barrel_anm" args 00 flakk)
		else ("fire_barrel_anm" args 01 flakk)
		else ("fire_barrel_anm" args 02 flakk)
		else ("fire_barrel_anm" args 03 flakk)
		}
	}
}

{"ork_grot_sentry_turret"
	{On spawn
		{add_view "fx_glow_red_small"	"SC_vh_lights" "fx_eyes1"}
		{add_view "fx_glow_red_small"	"SC_vh_lights" "fx_eyes2"}
		{add_view "fx_glow_red_small"	"SC_vh_lights" "fx_eyes3"}
		{add_view "fx_glow_red_small"	"SC_vh_lights" "fx_eyes4"}
		
		{add_view "ch_vehicle_idle"		"SC_vh_lights" "fxsmoke1"}
		{add_view "fx_ork_polution"		"SC_vh_lights" "basis"}
		
		{if work "body"
			{tags remove "talkin"}
			
			{spawn "fx_ork_teleport_gold" "basis" x}
			{spawn "ex_ap_size2_dust" "basis" x}
			
			{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/idle"}
			{play_sound "engine_idle" 1}
			{ani_play "idle" 1.8 loop}
		}
		
		; ===================== SHOOTAS 
		{Call "sc_stuff_call_add_weapon_fx_mgun"}
		{Call "sc_stuff_call_add_loop_fire_sound_mgun"}
	}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(mgun)	d1(0.4) fx1(flash_ork)	b1(foresight3) d2(0.2) fx2(shell_shoota)	b2(fxshell))
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(mgun)
		tag(mgun)
		snd(SC_DLC_LV40k/smallarms/lp_dakka_deffgun_v1)
		stop_delay(0.2)
	)
	{On fire "mgun1"
		{call "sc_stuff_call_fire_weapon_fx_mgun"}
		{call "sc_stuff_call_fire_Play_loop_sound_mgun"}
		{if not tagged "talkin"
			{tags add "talkin"} {delay 3.0 {tags remove "talkin"}}
			{If rand 0.01	{start_sound "talk/human/lv40k_ork_grot/in_combat_comms/v1/403560"}
			else rand 0.01	{start_sound "talk/human/lv40k_ork_grot/in_combat_comms/v1/403455"}
			else rand 0.01	{start_sound "talk/human/lv40k_ork_grot/in_combat_comms/v1/403452"}
			}
		}
	}
	{on bullet_hit
		{if not tagged "exploded"
			{if not tagged "talkin"
				{tags add "talkin"} {delay 3.0 {tags remove "talkin"}}
				{If rand 0.04 	{start_sound "talk/human/lv40k_ork_grot/in_combat_comms/v1/403552"}
				else rand 0.04	{start_sound "talk/human/lv40k_ork_grot/in_combat_comms/v1/403530"}
				else rand 0.04	{start_sound "talk/human/lv40k_ork_grot/in_combat_comms/v1/403532"}
				}
			}
		}
	}
	{On break
		{Stop_Sound "engine_idle"}	{Ani_Stop "Idle"}
		
		; // death screams
		{Start_Sound "talk\human\lv40k_ork_grot\death_cry\v1"}
		{Delay 0.3 {Start_Sound "talk\human\lv40k_ork_grot\death_cry\v1"}}
	}
}
