
;	<<<< -------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - IG Leman Russ ===============] >>
;	<<<<--------------------------------------------------------------------------------------->>>>			 

{"ig_Lemanruss"
	{on spawn	;{}
	;	{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke1"}
	;	{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke2"}
	;	{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke3"}
		
	;	{add_view "ch_vehicle_start"		"exhaust2"	"fxsmoke1"}
	;	{add_view "ch_vehicle_start"		"exhaust2"	"fxsmoke2"}
	;	{add_view "ch_vehicle_start"		"exhaust2"	"fxsmoke3"}

		{if tagged "ork_russ"
		else
			{add_view "fx_glow_red_small"		"fx_vehicle_light"	"fx_optics01"}
			{add_view "fx_glow_green_small"		"fx_vehicle_light"	"fx_optics02"}
			{add_view "fx_glow_red_small"		"fx_vehicle_light"	"fx_optics03"}
			{add_view "fx_mark_red_03"			"fx_vehicle_light"	"fx_optics04"}
		}	
		
		; ################# // MAIN WEAPON
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "main_battlecannon"
			{Call "sc_stuff_call_add_cannon_fx_battlecannon"}
		}
		{if tagged "main_vanquisher"
			{Call "sc_stuff_call_add_cannon_fx_vanquisher"}
		}
		{if tagged "main_eradicator"
			{Call "sc_stuff_call_add_cannon_fx_eradicator"}
		}
		{if tagged "main_demolisher"
			{Call "sc_stuff_call_add_cannon_fx_demolisher"}
		}
		{if tagged "main_exterminator"
			{Call "sc_stuff_call_add_weapon_fx_exterminator00"}
			{Call "sc_stuff_call_add_weapon_fx_exterminator01"}
		}
		{if tagged "main_punisher"
			{Call "sc_stuff_call_add_weapon_fx_punisher"}
			
			{Call "sc_stuff_call_add_loop_fire_sound_acc_ring"}
			{Call "sc_stuff_call_add_loop_fire_sound_acc_fire"}
		}
		{if tagged "main_executioner"
			{bone show "Executioner_Turret"}
			
			{add_view "plasma_overheat_halo_blue"	"executioner_reload"	"foresight_executioner"}
			
			{add_view "plasma_radiator_blue_big"	"fx_vehicle_light"	"fx_Executioner_01"}
			{add_view "plasma_radiator_blue_big"	"fx_vehicle_light"	"fx_Executioner_02"}
			{add_view "spark_light_b_big"			"fx_vehicle_light"	"fx_Executioner_01"}
			{add_view "spark_light_b_big"			"fx_vehicle_light"	"fx_Executioner_02"}
			{add_view "spark_light_b"				"fx_vehicle_light"	"fx_Executioner_03"}
			{add_view "spark_light_b"				"fx_vehicle_light"	"fx_Executioner_04"}
		}
		
		; ################# // SPONSON FRONTAL
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_front_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_front_hb"}
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_f_heavybolter"}
		}
		{if tagged "sponson_front_flamer"
			{Call "sc_stuff_call_add_weapon_fx_sponson_front_flamer"}
			{Call "sc_stuff_call_add_loop_fire_sound_sponson_front_flamer"}
		}
		{if tagged "sponson_front_melta"
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_f_melta"}
		}
		{if tagged "sponson_front_lascannon"
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_f_lascannon"}
		}
		
		; ################# // SPONSON RIGHT
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_right_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_right_hb"}
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_r_heavybolter"}
		}
		{if tagged "sponson_right_melta"
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_r_melta"}
		}
		{if tagged "sponson_right_lascannon"
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_r_lascannon"}
		}
		{if tagged "sponson_right_plasmacannon"
			{add_view "spark_light_b_big"			"fx_vehicle_light"	"fx_r_plasmacannon"}
			{add_view "plasma_radiator_blue_big"	"fx_vehicle_light"	"fx_r_plasmacannon"}
		}
		
		; ################# // SPONSON LEFT
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_left_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_left_hb"}
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_l_heavybolter"}
		}
		{if tagged "sponson_left_melta"
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_l_melta"}
		}
		{if tagged "sponson_left_lascannon"
			{add_view "fx_ls_red_small" "fx_vehicle_light" "fx_l_lascannon"}
		}
		{if tagged "sponson_left_plasmacannon"
			{add_view "spark_light_b_big"			"fx_vehicle_light"	"fx_l_plasmacannon"}
			{add_view "plasma_radiator_blue_big"	"fx_vehicle_light"	"fx_l_plasmacannon"}
		}
	}	
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz5/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ig_russ/stop2"}
		{link_sound "engine_idle"		"vehicle/engine/pz5/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ig_russ/full"}
		{link_sound "exhaust"			"vehicle/engine/pz5/exhaust"}
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
	
	; <<<<	===================	Leman Russ : Main Weaponry 	===================	>>>>

	{on "reload"
		{if name "gun"
			{if tagged "main_executioner"
				{view start "executioner_reload"}
				{delay 8.0 {view pause "executioner_reload"}}
			}
		}
	}
	
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(battlecannon) d1(0.6) fx1(tank_canon_fire_85_93) b1(foresight_battlecannon) d2(0.6) fx2(tank_canon_fire_85_93_sides) b2(foresight_battlecannon))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(vanquisher) d1(0.6) fx1(tank_canon_fire_122_128) b1(foresight_vanquisher) d2(0.6) fx2(tank_canon_fire_122_128_sides) b2(foresight_vanquisher))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(demolisher) d1(0.6) fx1(tank_canon_fire_150_155) b1(foresight_demolisher) d2(0.6) fx2(tank_canon_fire_150_155_sides) b2(foresight_demolisher))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(eradicator) d1(0.6) fx1(tank_canon_fire_150_155) b1(foresight_eradicator) d2(0.6) fx2(tank_canon_fire_150_155_sides) b2(foresight_eradicator))

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(punisher) 
		d1(0.2) fx1(flash_hb) b1(foresight_punisher)
		d2(5.0) fx2(fx_sc_punisher_overheat) b2(foresight_punisher)
		d3(8.0) fx3(gun_smoke_steam) b3(foresight_punisher)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(acc_fire)
		tag(acc_fire)
		snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_v2)
		stop_delay(0.2)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(acc_ring)
		tag(acc_ring)
		snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_ring_v2)
		stop_delay(2.1)
	)
	{on fire "gun"
		{if tagged "main_battlecannon"	{call "sc_stuff_call_fire_Cannon_fx_battlecannon"}	{ani_play "hit"}}
		{if tagged "main_vanquisher"	{call "sc_stuff_call_fire_Cannon_fx_vanquisher"}	{ani_play "hit"}}
		{if tagged "main_demolisher"	{call "sc_stuff_call_fire_Cannon_fx_demolisher"}	{ani_play "hit"}}
		{if tagged "main_eradicator"	{call "sc_stuff_call_fire_Cannon_fx_eradicator"}	{ani_play "hit"}}
		{if tagged "main_executioner"	{spawn "flash_plasmacannon" "foresight_executioner" x}}
		
		{if tagged "main_exterminator"
			{if name "00"	{spawn "tank_canon_fire_20_25_auto" "Barrel_Ext00" x} {ani_play "fire_ext1"}
			else			{spawn "tank_canon_fire_20_25_auto" "Barrel_Ext01" x} {ani_play "fire_ext2"}}
		}
		{if tagged "main_annihilator"
			{if name "00"	{spawn "flash_lascannon_big" "Barrel_Las00" x}
			else			{spawn "flash_lascannon_big" "Barrel_Las01" x}}
		}
		{if tagged "main_punisher"	
			{call "sc_stuff_call_fire_weapon_fx_punisher"}
			
			{call "sc_stuff_call_fire_Play_loop_sound_acc_ring"}
			{call "sc_stuff_call_fire_Play_loop_sound_acc_fire"}
			
			{ani_stop "punisher_rev_fast"}
			{ani_stop "punisher_stop"}
			
			{if not tagged "punisher_spinning" 	{tags add "punisher_spinning"} {ani_play "punisher_rev_slow" loop}}
			{delay 0.5 {tags remove "punisher_spinning"} {ani_stop "punisher_rev_slow"} {ani_play "punisher_stop"}}
		}
	}
	
	; <<<<	===================	Leman Russ : Sponsons [FRONT] Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_front_hb) d1(0.2) fx1(flash_hb) b1(foresight_f_heavybolter))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_front_melta) d1(0.2) fx1(flash_gun_melta_x2) b1(foresight_f_melta))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(sponson_front_flamer)
		d1(0.2) fx1(ch_vehicle_start)			b1(foresight_f_flamer)
		d2(0.2) fx2(flamer_fire)				b2(foresight_f_flamer)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(sponson_front_flamer)
		tag(sponson_front_flamer)
		snd(SC_DLC_LV40k/smallarms/lp_flamer_v1)  
		stop_delay(0.2)
	)
	{on fire "mgun1"
		{if tagged "sponson_front_hb"			{call "sc_stuff_call_fire_weapon_fx_sponson_front_hb"}}
		{if tagged "sponson_front_lascannon"	{spawn "flash_lascannon" "foresight_f_lascannon" x}}
		
		{if tagged "sponson_front_melta"
			{spawn "fx_melta_cone_mul" "foresight_f_melta" x}
			{spawn "lv40k_bullet_multimelta_s1" "foresight_f_melta" x	{impulse forward 30 rnd_dir 0.01 com} {linear_damping 0}}
		}
		
		{if tagged "sponson_front_flamer"
			{call "sc_stuff_call_fire_Play_loop_sound_sponson_front_flamer"}
			{call "sc_stuff_call_fire_weapon_fx_sponson_front_flamer"}
			
			{spawn "fx_piece_flame_heavy_40" "foresight_f_flamer" x
				{impulse forward 45 rnd_dir 0.01 com}
				{gravity 0.8}
				{linear_damping 0}
			}
		}
	}
	; <<<<	===================	Leman Russ : Sponsons [RIGHT] Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_right_hb) d1(0.2) fx1(flash_hb) b1(foresight_r_heavybolter))
	
	{on fire "mgun2"
		{if tagged "sponson_right_hb"				{call "sc_stuff_call_fire_weapon_fx_sponson_right_hb"}}
		{if tagged "sponson_right_plasmacannon"		{spawn "flash_plasmacannon" "foresight_r_plasmacannon" x}}
		{if tagged "sponson_right_lascannon"		{spawn "flash_lascannon" "foresight_r_lascannon" x}}
		
		{if tagged "sponson_right_melta"
			{spawn "flash_gun_melta_x2" "foresight_r_melta" x}
			{spawn "fx_melta_cone_mul" "foresight_r_melta" x}
			{spawn "lv40k_bullet_multimelta_s1" "foresight_r_melta" x	{impulse forward 30 rnd_dir 0.01 com} {linear_damping 0}}
		}
	}
	
	; <<<<	===================	Leman Russ : Sponsons [LEFT] Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_left_hb) d1(0.2) fx1(flash_hb) b1(foresight_l_heavybolter))
	
	{on fire "mgun3"
		{if tagged "sponson_left_hb"				{call "sc_stuff_call_fire_weapon_fx_sponson_left_hb"}}
		{if tagged "sponson_left_plasmacannon"		{spawn "flash_plasmacannon" "foresight_l_plasmacannon" x}}
		{if tagged "sponson_left_lascannon"			{spawn "flash_lascannon" "foresight_l_lascannon" x}}
		
		{if tagged "sponson_left_melta"
			{spawn "flash_gun_melta_x2" "foresight_l_melta" x}
			{spawn "fx_melta_cone_mul" "foresight_l_melta" x}
			{spawn "lv40k_bullet_multimelta_s1" "foresight_l_melta" x	{impulse forward 30 rnd_dir 0.01 com} {linear_damping 0}}
		}
	}
	
}