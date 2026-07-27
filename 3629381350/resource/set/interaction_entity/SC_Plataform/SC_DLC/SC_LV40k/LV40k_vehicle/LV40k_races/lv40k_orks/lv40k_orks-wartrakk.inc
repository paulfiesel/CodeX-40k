
;	<<<< ------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Ork Wartrakk ===============] >>
;	<<<<-------------------------------------------------------------------------------------->>>>			 

{"ork_Wartrakk"
	{on spawn 
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke00"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke00"}
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke01"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke01"}
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke02"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke02"}
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke03"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke03"}
		
		; ===================== BOMB CHUKKA
		{Call "sc_stuff_call_add_cannon_fx_gun"}
		
		; ===================== SHOOTAS 
		{Call "sc_stuff_call_add_weapon_fx_shootas_c00"}
		{Call "sc_stuff_call_add_weapon_fx_shootas_c01"}
		{Call "sc_stuff_call_add_loop_fire_sound_shootas_c"}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/exhaust"}
		{link_sound "move"				"SC_DLC_LV40k/W40k_vehicles/tracks/tread_vehicles_04"}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Weapons Sounds and FX 	===================	>>>>
	
	("SC_Misc_Define_Add_Cannon_Muzzle" 
		size(maximum)
		gun_name(gun)
		d1(0.6) fx1(tank_canon_fire_50_57_sides)	b1(foresight2)
	)
	{on fire "gun"
		{call "sc_stuff_call_fire_Cannon_fx_gun"}
		{ani_play "hit"}
	}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shootas_c00)	d1(0.3) fx1(flash_ork)	b1(barrel00) d2(0.2) fx2(shell_shoota)	b2(fxshell00))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shootas_c01)	d1(0.3) fx1(flash_ork)	b1(barrel01) d2(0.2) fx2(shell_shoota)	b2(fxshell01))
	
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
		gun_name(shootas_c)
		tag(lv40k_shoota_kustom)
		snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1)
		stop_delay(0.2)
	)
	{on fire "mgun"
		{if	 ("fire_barrel" args 00 shootas_c)
		else ("fire_barrel" args 01 shootas_c)
		}
		{call "sc_stuff_call_fire_Play_loop_sound_shootas_c"}
	}
}