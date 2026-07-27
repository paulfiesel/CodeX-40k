
{"ork_gunwagon"
	{on spawn 
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke1"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke2"}
		
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke1"}
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke2"}
		
		{view hide "exhaust2"}
		
		; ===================== ZAP GUNWAGON
		{if tagged "zzapwagon"
			{add_view "fx_glow_orange_med"	"SC_vh_lights_crew"	"fx_light1"}
			{add_view "fx_glow_orange_med"	"SC_vh_lights_crew"	"fx_light2"}
			{add_view "fx_glow_orange_med"	"SC_vh_lights_crew"	"fx_light3"}
			{add_view "fx_glow_orange_med"	"SC_vh_lights_crew"	"fx_light4"}
			
			{add_view "fx_glow_orange_big"	"SC_vh_lights_crew"	"foresight3"}
			
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fx_light5"}
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fx_light6"}
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fx_light7"}
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fx_light8"}
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fx_light9"}
			
			{add_view "fx_ork_weirdboy_brain_waves"		"SC_vh_lights_crew"	"fx_light10"}
			{add_view "fx_glow_green_big"				"SC_vh_lights_crew"	"fx_light11"}
		}
		
		; ===================== CARRIER GUNWAGON
		{Call "sc_stuff_call_add_weapon_fx_shoota_c00"}
		{Call "sc_stuff_call_add_weapon_fx_shoota_c01"}
		{Call "sc_stuff_call_add_loop_fire_sound_shoota_c"}
		
		; ===================== KANNON GUNWAGON
		{Call "sc_stuff_call_add_cannon_fx_big_kannon"}
		
		; ===================== FLAKK GUNWAGON
		{Call "sc_stuff_call_add_weapon_fx_flakk00"}
		{Call "sc_stuff_call_add_weapon_fx_flakk01"}
		{Call "sc_stuff_call_add_weapon_fx_flakk02"}
		{Call "sc_stuff_call_add_weapon_fx_flakk03"}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/exhaust"}
		{link_sound "move"				"SC_DLC_LV40k/W40k_vehicles/tracks/tread_vehicles_03"}
	}
	
	; <<<<	===================	Ork Gunwagon: Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Cannon_Muzzle" 
		size(maximum)
		gun_name(big_zzap)
	;//	d1(0.8) fx1(fx_ork_zzap_flash)		b1(foresight3)
	)
	
	("SC_Misc_Define_Add_Cannon_Muzzle" 
		size(maximum)
		gun_name(big_kannon)
		d1(0.6) fx1(tank_canon_fire_122_128)		b1(foresight3)
	)
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(flakk00)		d1(0.3) fx1(tank_canon_fire_37_40_auto)	b1(shooter00) d2(0.2) fx2(shell_ac_hydra)	b2(fxshell00))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(flakk01)		d1(0.3) fx1(tank_canon_fire_37_40_auto)	b1(shooter01) d2(0.2) fx2(shell_ac_hydra)	b2(fxshell01))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(flakk02)		d1(0.3) fx1(tank_canon_fire_37_40_auto)	b1(shooter02) d2(0.2) fx2(shell_ac_hydra)	b2(fxshell02))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(flakk03)		d1(0.3) fx1(tank_canon_fire_37_40_auto)	b1(shooter03) d2(0.2) fx2(shell_ac_hydra)	b2(fxshell03))

	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shoota_c00)	d1(0.3) fx1(flash_ork)	b1(shooter00) d2(0.2) fx2(shell_shoota)	b2(fxshell00))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shoota_c01)	d1(0.3) fx1(flash_ork)	b1(shooter01) d2(0.2) fx2(shell_shoota)	b2(fxshell01))
	
	(define "fire_barrel"
		name "%0"
			{call "sc_stuff_call_fire_weapon_fx_%1%0"}
	)	
	(define "fire_barrel_anm"
		name "%0"
			{call "sc_stuff_call_fire_weapon_fx_%1%0"}
			{ani_play "%2_%0"}
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(shoota_c)
		tag(lv40k_shoota_kustom)
		snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1)
		stop_delay(0.2)
	)
	{on fire "gun"
		{if tagged "flakkadakkawagon"
			{if	 ("fire_barrel_anm" args 00 flakk fire_flakk)
			else ("fire_barrel_anm" args 01 flakk fire_flakk)
			else ("fire_barrel_anm" args 02 flakk fire_flakk)
			else ("fire_barrel_anm" args 03 flakk fire_flakk)
			}
			
		else tagged "transportwagon"
			{if	 ("fire_barrel" args 00 shoota_c)
			else ("fire_barrel" args 01 shoota_c)
			}
			{call "sc_stuff_call_fire_Play_loop_sound_shoota_c"}
		
		else tagged "zzapwagon"
			{ani_play "hit"}
			{spawn "fx_ork_zzap_flash" "foresight3" x}
			
		else
			{call "sc_stuff_call_fire_Cannon_fx_big_kannon"}
			{ani_play "hit"}
		}
	}
}