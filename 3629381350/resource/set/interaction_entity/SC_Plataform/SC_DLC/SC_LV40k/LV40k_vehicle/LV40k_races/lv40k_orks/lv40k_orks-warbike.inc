
;	<<<< ------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Ork Warbike ===============] >>
;	<<<<-------------------------------------------------------------------------------------->>>>			 

{"ork_Warbike"
	{on spawn 
		{physics_work 0}
		
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke1"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke2"}
		
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke1"}
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke2"}
		
		; ===================== SHOOTAS 
		{Call "sc_stuff_call_add_weapon_fx_shootas_r00"}
		{Call "sc_stuff_call_add_weapon_fx_shootas_r01"}
		{Call "sc_stuff_call_add_weapon_fx_shootas_l00"}
		{Call "sc_stuff_call_add_weapon_fx_shootas_l01"}
	}
	{on destroy
		{if component "body" {physics_work 1}}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/r12/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Warbike/stop"}
		{link_sound "engine_idle"		"vehicle/engine/s60/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Warbike/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/exhaust"}
		{link_sound "move"				"vehicle/wheels/car"}
		{link_sound "brake"				"vehicle/wheels/brake"}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Weapons Sounds and FX 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shootas_r00)	d1(0.3) fx1(flash_ork)	b1(barrel_R00) d2(0.2) fx2(shell_shoota)	b2(fxshell_R))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shootas_r01)	d1(0.3) fx1(flash_ork)	b1(barrel_R01) d2(0.2) fx2(shell_shoota)	b2(fxshell_R))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shootas_l00)	d1(0.3) fx1(flash_ork)	b1(barrel_l00) d2(0.2) fx2(shell_shoota)	b2(fxshell_l))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shootas_l01)	d1(0.3) fx1(flash_ork)	b1(barrel_l01) d2(0.2) fx2(shell_shoota)	b2(fxshell_l))
	
	{on fire "mgun1"
		{if	 name "00" 	{call "sc_stuff_call_fire_weapon_fx_shootas_r00"}}
		{if	 name "01" 	{call "sc_stuff_call_fire_weapon_fx_shootas_r01"}}
	}
	{on fire "mgun2"
		{if	 name "00" 	{call "sc_stuff_call_fire_weapon_fx_shootas_l00"}}
		{if	 name "01" 	{call "sc_stuff_call_fire_weapon_fx_shootas_l01"}}
	}
}