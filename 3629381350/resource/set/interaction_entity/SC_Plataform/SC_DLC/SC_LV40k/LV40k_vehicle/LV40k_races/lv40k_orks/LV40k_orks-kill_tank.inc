
{"Ork_Kill_Tank"
	{on spawn 
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke00"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke01"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke02"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke03"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke04"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke05"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke06"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke07"}
		
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke00"}
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke01"}
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke02"}
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke03"}
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke04"}
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke05"}
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke06"}
		{add_view "ch_vehicle_idle"		"exhaust2"	"fxsmoke07"}
		
	; //	{view hide "exhaust2"}
		
		; ===================== BURSTA KANNON
		{Call "sc_stuff_call_add_cannon_fx_bursta_kannon"}
		
		; ===================== AUX TURRETS
		{Call "sc_stuff_call_add_weapon_fx_shoota_1_00"}
		{Call "sc_stuff_call_add_weapon_fx_shoota_1_01"}
		{Call "sc_stuff_call_add_weapon_fx_shoota_2_00"}
		{Call "sc_stuff_call_add_weapon_fx_shoota_2_01"}
		
		{Call "sc_stuff_call_add_loop_fire_sound_shoota_1"}
		{Call "sc_stuff_call_add_loop_fire_sound_shoota_2"}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ig_baneblade/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ig_baneblade/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/sm_landraider/exhaust"}
		{link_sound "move"				"SC_DLC_LV40k/W40k_vehicles/tracks/tread_vehicles_02"}
	}
	
	; <<<<	===================	Ork Gunwagon: Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Cannon_Muzzle" 
		size(maximum)
		gun_name(bursta_kannon)
		d1(0.6) fx1(tank_canon_fire_150_155_sides)		b1(foresight3)
	)
	{on fire "gun"
		{call "sc_stuff_call_fire_Cannon_fx_bursta_kannon"}
		{ani_play "hit"}
	}
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(shoota_1)
		tag(lv40k_shoota_kustom_1)
		snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1)
		stop_delay(0.2)
	)
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(shoota_2)
		tag(lv40k_shoota_kustom_2)
		snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1)
		stop_delay(0.2)
	)
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shoota_1_00)	d1(0.3) fx1(flash_ork)	b1(barrel1_00) d2(0.2) fx2(shell_shoota)	b2(fxshell1))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shoota_1_01)	d1(0.3) fx1(flash_ork)	b1(barrel1_01) d2(0.2) fx2(shell_shoota)	b2(fxshell1))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shoota_2_00)	d1(0.3) fx1(flash_ork)	b1(barrel2_00) d2(0.2) fx2(shell_shoota)	b2(fxshell2))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shoota_2_01)	d1(0.3) fx1(flash_ork)	b1(barrel2_01) d2(0.2) fx2(shell_shoota)	b2(fxshell2))
	
	(define "fire_barrel"
		name "%0"
			{call "sc_stuff_call_fire_weapon_fx_%1%0"}
	)	
	
	{on fire "mgun1"
		{if	 ("fire_barrel" args 00 shoota_1_)
		else ("fire_barrel" args 01 shoota_1_)
		}
		{call "sc_stuff_call_fire_Play_loop_sound_shoota_1"}
	}
	{on fire "mgun2"
		{if	 ("fire_barrel" args 00 shoota_2_)
		else ("fire_barrel" args 01 shoota_2_)
		}
		{call "sc_stuff_call_fire_Play_loop_sound_shoota_2"}
	}
}
