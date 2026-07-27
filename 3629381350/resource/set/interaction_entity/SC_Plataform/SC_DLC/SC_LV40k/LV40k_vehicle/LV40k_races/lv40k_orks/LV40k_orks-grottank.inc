
{"ork_grottank"
	{on spawn 
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke1"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke2"}
		{add_view "ch_vehicle_start"	"exhaust"	"fxsmoke3"}
		
		{view hide "exhaust2"}
		
		{delay 0.1 {if crew_in_place "commander" {ani_play "hatch_open"}}}
		
		{if tagged "main_rokkit"
			{bone show "rokkitlauncha_platform"}
			{bone show "rocket_1"}
			{bone show "rocket_2"}
			{bone show "rocket_3"}
			{bone show "rocket_4"}
		
		else tagged "main_kannon"
			{Call "sc_stuff_call_add_cannon_fx_main_kannon"}
		
		else tagged "main_shoota"
			{Call "sc_stuff_call_add_weapon_fx_main_shoota"}
			{Call "sc_stuff_call_add_loop_fire_sound_main_shoota"}
		}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/exhaust"}
		{link_sound "move"				"SC_DLC_LV40k/W40k_vehicles/tracks/tread_vehicles_02"}
	}
		
	; <<<<	===================	Ork Grottank: Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Cannon_Muzzle" size(minimum)	gun_name(main_kannon) d1(0.6) fx1(tank_canon_fire_37_47) b1(foresight_kannon))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(main_shoota) d1(0.3) fx1(flash_ork) b1(foresight_shoota))
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(main_shoota) tag(main_shoota) snd(SC_DLC_LV40k/smallarms/lp_dakka_deffgun_v1) stop_delay(0.2))
	
	{on fire "gun"
		{if tagged "main_shoota"
			{call "sc_stuff_call_fire_weapon_fx_main_shoota"}
			{call "sc_stuff_call_fire_Play_loop_sound_main_shoota"}
			{ani_play "fire_shoota"}
			
		else tagged "main_kannon"
			{call "sc_stuff_call_fire_Cannon_fx_main_kannon"}	
			{ani_play "fire_kannon"}
			{ani_play "hit"}
		
		else tagged "main_rokkit"
			{if name "00"	{spawn "recoilless_shot_forward" "barrels_mlrs00" x} {bone hide "rocket_0"}
			else name "01"	{spawn "recoilless_shot_forward" "barrels_mlrs01" x} {bone hide "rocket_1"}
			else name "02"	{spawn "recoilless_shot_forward" "barrels_mlrs02" x} {bone hide "rocket_2"}
			else name "03"	{spawn "recoilless_shot_forward" "barrels_mlrs03" x} {bone hide "rocket_3"}
			else name "04"	{spawn "recoilless_shot_forward" "barrels_mlrs04" x} {bone hide "rocket_4"}
			}
		}
	}
	{on "reload"
		{if tagged "main_rokkit"	
			{delay 6.0
				{bone show "rocket_0"}
				{bone show "rocket_1"}
				{bone show "rocket_2"}
				{bone show "rocket_3"}
				{bone show "rocket_4"}
			}
		}
	}
}