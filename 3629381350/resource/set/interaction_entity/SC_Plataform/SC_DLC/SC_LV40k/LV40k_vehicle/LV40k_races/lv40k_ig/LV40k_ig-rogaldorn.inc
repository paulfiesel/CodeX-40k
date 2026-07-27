
;	<<<< -------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - IG Rogal Dorn ===============] >>
;	<<<<--------------------------------------------------------------------------------------->>>>			 

{"ig_Rogaldorn"
	{on spawn	;{}
		{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke1"}
		{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke2"}
		{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke3"}
		{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke4"}
		
		; ################# // MAIN WEAPON
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "main_Battlecannons"
			{Call "sc_stuff_call_add_cannon_fx_Battlecannon00"}
			{Call "sc_stuff_call_add_cannon_fx_Battlecannon01"}
		}
		{if tagged "main_Oppressor"
			{Call "sc_stuff_call_add_cannon_fx_Oppressor"}
			{Call "sc_stuff_call_add_weapon_fx_Oppressor_AC"}
			
			{add_view "fx_ls_red_small"		"fx_vehicle_light"	"fx_optic1"}
		}
		
		; ################# // SPONSON FRONTAL
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "hull_front_Pulverizer"
			{Call "sc_stuff_call_add_weapon_fx_hull_front_Pulverizer"}
		}
		{if tagged "hull_front_Minigun"
			{Call "sc_stuff_call_add_weapon_fx_hull_front_Minigun"}
			
			{Call "sc_stuff_call_add_loop_fire_sound_acc_ring"}
			{Call "sc_stuff_call_add_loop_fire_sound_acc_fire"}
		}
		
		; ################# // SPONSON RIGHT
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_right_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_right_hb"}
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_r_heavybolter"}
		}
		{if tagged "sponson_right_lascannon"
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_r_lascannon"}
		}
		
		; ################# // SPONSON LEFT
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_left_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_left_hb"}
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_l_heavybolter"}
		}
		{if tagged "sponson_left_lascannon"
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_l_lascannon"}
		}
	}	
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/KV/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ig_russ/stop2"}
		{link_sound "engine_idle"		"vehicle/engine/KV/idle"}
		{link_sound "engine_full"		"vehicle/engine/KV/full"}
		{link_sound "exhaust"			"vehicle/engine/KV/exhaust"}
		{link_sound "move"				"SC_DLC_LV40k/W40k_vehicles/tracks/tread_vehicles_04"}
	}
	{on crew in 	
		{view start "fx_vehicle_light"}
	}
	{on crew out	
		{if not crew_in_place "gunner"
			{if not crew_in_place "driver"
				{if not crew_in_place "commander"
					{view pause "fx_vehicle_light"}
				}
			}
		}
	}
	
	; <<<<	===================	Rogal Dorn : Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(oppressor) d1(0.6) fx1(tank_canon_fire_122_128) b1(foresight_Oppressor) d2(0.6) fx2(tank_canon_fire_122_128_sides) b2(foresight_Oppressor))
	
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(battlecannon00) d1(0.6) fx1(tank_canon_fire_85_93) b1(barrel_BC00) d2(0.6) fx2(tank_canon_fire_85_93_sides) b2(barrel_BC00))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(battlecannon01) d1(0.6) fx1(tank_canon_fire_85_93) b1(barrel_BC01) d2(0.6) fx2(tank_canon_fire_85_93_sides) b2(barrel_BC01))

	{on fire "gun"
		{if tagged "main_oppressor"	{call "sc_stuff_call_fire_Cannon_fx_Oppressor"}	{ani_play "hit"} {ani_play "fire_opressor"}}
		
		{if tagged "main_battlecannons"	{ani_play "hit"}
			{if name "00"
				{call "sc_stuff_call_fire_Cannon_fx_battlecannon00"}	
			else
				{call "sc_stuff_call_fire_Cannon_fx_battlecannon01"}	
			}
		}
	}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(oppressor_AC) d1(0.6) fx1(tank_canon_fire_20_25_auto) b1(foresight_AC))
	
	{on fire "mgun4"
		{if tagged "main_oppressor"	{call "sc_stuff_call_fire_weapon_fx_oppressor_AC"}}
	}
	
	; <<<<	===================	Rogal Dorn : Sponsons [FRONT] Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(hull_front_Minigun) 
		d1(0.2) fx1(flash_hb) b1(foresight_f_minigun)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(acc_fire)
		tag(acc_fire)
		snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_v1)
		stop_delay(0.2)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(acc_ring)
		tag(acc_ring)
		snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_ring_v2)
		stop_delay(2.1)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(hull_front_Pulverizer) 
		d1(0.6) fx1(tank_canon_fire_75_76) b1(foresight_f_Pulverizer)
	)
	
	{on fire "mgun1"
		{if tagged "hull_front_minigun"	
			{call "sc_stuff_call_fire_weapon_fx_hull_front_Minigun"}
			
			{call "sc_stuff_call_fire_Play_loop_sound_acc_ring"}
			{call "sc_stuff_call_fire_Play_loop_sound_acc_fire"}
			
			("SC_Misc_Define_Gun_Rev_Animation" args minigun)
		}
		{if tagged "hull_front_Pulverizer"
			{call "sc_stuff_call_fire_weapon_fx_hull_front_Pulverizer"}
		}
	}
	; <<<<	===================	Rogal Dorn : Sponsons [RIGHT] Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_right_hb) d1(0.2) fx1(flash_hb) b1(foresight_r_heavybolter))
	
	{on fire "mgun2"
		{if tagged "sponson_right_hb"				{call "sc_stuff_call_fire_weapon_fx_sponson_right_hb"}}
		{if tagged "sponson_right_lascannon"		{spawn "flash_lascannon" "foresight_r_lascannon" x}}
	}
	
	; <<<<	===================	Rogal Dorn : Sponsons [LEFT] Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_left_hb) d1(0.2) fx1(flash_hb) b1(foresight_l_heavybolter))
	
	{on fire "mgun3"
		{if tagged "sponson_left_hb"				{call "sc_stuff_call_fire_weapon_fx_sponson_left_hb"}}
		{if tagged "sponson_left_lascannon"			{spawn "flash_lascannon" "foresight_l_lascannon" x}}
	}
}