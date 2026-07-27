
;	<<<< ------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - SM Thunderfire ===============] >>
;	<<<<-------------------------------------------------------------------------------------->>>>			 

{"sm_Thunderfire"
	{on spawn 
		{add_view "fx_ls_red_small"	"SC_vh_lights" "fx_optic1"}
	
		{Call "sc_stuff_call_add_cannon_fx_main_thunderfire"}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/exhaust"}
		{link_sound "move"				"SC_DLC_LV40k/W40k_vehicles/tracks/tread_vehicles_01"}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Main Weapon	===================	>>>>
	
	("SC_Misc_Define_Add_Cannon_Muzzle" size(medium) gun_name(main_thunderfire) d1(0.8) fx1(tank_canon_fire_75_76) b1(foresight3))
	
	{On fire "gun"
		{call "sc_stuff_call_fire_Cannon_fx_main_thunderfire"}
	}
}