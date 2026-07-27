
;	<<<< -------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - IG Leman Russ ===============] >>
;	<<<<--------------------------------------------------------------------------------------->>>>			 

{"ig_Lemanruss"
	{on spawn	;{}
	
		{if tagged "ork_russ"
		else
			{add_view "fx_glow_red_small"		"SC_vh_lights_crew"	"fx_optics01"}
			{add_view "fx_glow_green_small"		"SC_vh_lights_crew"	"fx_optics02"}
			{add_view "fx_glow_red_small"		"SC_vh_lights_crew"	"fx_optics03"}
			{add_view "fx_mark_red_03"			"SC_vh_lights_crew"	"fx_optics04"}
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
			
			{add_view "plasma_radiator_blue_big"	"SC_vh_lights_crew"	"fx_Executioner_01"}
			{add_view "plasma_radiator_blue_big"	"SC_vh_lights_crew"	"fx_Executioner_02"}
			{add_view "spark_light_b_big"			"SC_vh_lights_crew"	"fx_Executioner_01"}
			{add_view "spark_light_b_big"			"SC_vh_lights_crew"	"fx_Executioner_02"}
			{add_view "spark_light_b"				"SC_vh_lights_crew"	"fx_Executioner_03"}
			{add_view "spark_light_b"				"SC_vh_lights_crew"	"fx_Executioner_04"}
		}
		
		; ################# // SPONSON FRONTAL
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_front_Ork_Rokkit"
			; [...]
		}
		{if tagged "sponson_front_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_front_hb"}
			{add_view "fx_ls_red_small" "SC_vh_lights_crew" "fx_f_heavybolter"}
		}
		{if tagged "sponson_front_flamer"
			{Call "sc_stuff_call_add_weapon_fx_sponson_front_flamer"}
			{Call "sc_stuff_call_add_loop_fire_sound_sponson_front_flamer"}
		}
		{if tagged "sponson_front_melta"
			{add_view "fx_ls_red_small" "SC_vh_lights_crew" "fx_f_melta"}
		}
		{if tagged "sponson_front_lascannon"
			{add_view "fx_ls_red_small" "SC_vh_lights_crew" "fx_f_lascannon"}
		}
		
		; ################# // SPONSON RIGHT
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_right_ork_Shoota"
			{Call "sc_stuff_call_add_weapon_fx_sponson_right_ork_Shoota00"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_right_ork_Shoota01"}
			{Call "sc_stuff_call_add_loop_fire_sound_sponson_right_ork_Shoota"}
		}
		{if tagged "sponson_right_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_right_hb"}
			{add_view "fx_ls_red_small" "SC_vh_lights_crew" "fx_r_heavybolter"}
		}
		{if tagged "sponson_right_melta"
			{add_view "fx_ls_red_small" "SC_vh_lights_crew" "fx_r_melta"}
		}
		{if tagged "sponson_right_lascannon"
			{add_view "fx_ls_red_small" "SC_vh_lights_crew" "fx_r_lascannon"}
		}
		{if tagged "sponson_right_plasmacannon"
			{add_view "spark_light_b_big"			"SC_vh_lights_crew"	"fx_r_plasmacannon"}
			{add_view "plasma_radiator_blue_big"	"SC_vh_lights_crew"	"fx_r_plasmacannon"}
		}
		
		; ################# // SPONSON LEFT
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_left_ork_Shoota"
			{Call "sc_stuff_call_add_weapon_fx_sponson_left_ork_Shoota00"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_left_ork_Shoota01"}
			{Call "sc_stuff_call_add_loop_fire_sound_sponson_left_ork_Shoota"}
		}
		{if tagged "sponson_left_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_left_hb"}
			{add_view "fx_ls_red_small" "SC_vh_lights_crew" "fx_l_heavybolter"}
		}
		{if tagged "sponson_left_melta"
			{add_view "fx_ls_red_small" "SC_vh_lights_crew" "fx_l_melta"}
		}
		{if tagged "sponson_left_lascannon"
			{add_view "fx_ls_red_small" "SC_vh_lights_crew" "fx_l_lascannon"}
		}
		{if tagged "sponson_left_plasmacannon"
			{add_view "spark_light_b_big"			"SC_vh_lights_crew"	"fx_l_plasmacannon"}
			{add_view "plasma_radiator_blue_big"	"SC_vh_lights_crew"	"fx_l_plasmacannon"}
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
	
	; <<<<	===================	Leman Russ : Main Weaponry 	===================	>>>>

	{on "reload"
		{if name "gun"
			{if tagged "main_executioner"
				{view start "executioner_reload"}
				{delay 8.0 {view pause "executioner_reload"}}
			}
		}
		{if name "mgun1"
			{if tagged "sponson_front_Ork_Rokkit"
				{Delay 10
					{bone show "Ork_Ammo00"}
					{bone show "Ork_Ammo01"}
					{bone show "Ork_Ammo02"}	
					{tags remove "rokkit02"}	
					{tags remove "rokkit01"}
				}
			}
		}
	}
	
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(battlecannon) d1(0.6) fx1(tank_canon_fire_85_93) b1(foresight_battlecannon) d2(0.6) fx2(tank_canon_fire_85_93_sides) b2(foresight_battlecannon))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(vanquisher) d1(0.6) fx1(tank_canon_fire_122_128) b1(foresight_vanquisher) d2(0.6) fx2(tank_canon_fire_122_128_sides) b2(foresight_vanquisher))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(eradicator) d1(0.6) fx1(tank_canon_fire_150_155) b1(foresight_eradicator) d2(0.6) fx2(tank_canon_fire_150_155_sides) b2(foresight_eradicator))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(demolisher) d1(0.6) fx1(tank_canon_fire_150_155) b1(foresight_demolisher))

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
			
			("SC_Misc_Define_Gun_Rev_Animation" args punisher)
		}
	}

	; <<<<	===================	Leman Russ : Sponsons [LEFT] Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_left_hb) d1(0.2) fx1(flash_hb) b1(foresight_l_heavybolter))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_left_ork_Shoota00) d1(0.3) fx1(flash_hb) b1(barrel_l_Ork_deffgun00))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_left_ork_Shoota01) d1(0.3) fx1(flash_hb) b1(barrel_l_Ork_deffgun01))
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(sponson_left_ork_Shoota)
		tag(sponson_left_ork_Shoota)
		snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1)  
		stop_delay(0.2)
	)
	
	{on fire "mgun1"
		{if tagged "sponson_left_hb"				{call "sc_stuff_call_fire_weapon_fx_sponson_left_hb"}}
		{if tagged "sponson_left_plasmacannon"		{spawn "flash_plasmacannon" "foresight_l_plasmacannon" x}}
		{if tagged "sponson_left_lascannon"			{spawn "flash_lascannon" "foresight_l_lascannon" x}}
		
		{if tagged "sponson_left_ork_Shoota"
			{call "sc_stuff_call_fire_Play_loop_sound_sponson_left_ork_Shoota"}
			{if name "00"	{call "sc_stuff_call_fire_weapon_fx_sponson_left_ork_Shoota00"}
			else			{call "sc_stuff_call_fire_weapon_fx_sponson_left_ork_Shoota01"}
			}
		}
		{if tagged "sponson_left_melta"
			{spawn "flash_gun_melta_x2" "foresight_l_melta" x}
			{spawn "fx_melta_cone_mul" "foresight_l_melta" x}
		}
	}
	
	; <<<<	===================	Leman Russ : Sponsons [RIGHT] Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_right_hb) d1(0.2) fx1(flash_hb) b1(foresight_r_heavybolter))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_right_ork_Shoota00) d1(0.3) fx1(flash_hb) b1(barrel_r_Ork_deffgun00))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_right_ork_Shoota01) d1(0.3) fx1(flash_hb) b1(barrel_r_Ork_deffgun01))
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(sponson_right_ork_Shoota)
		tag(sponson_right_ork_Shoota)
		snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1)  
		stop_delay(0.2)
	)
	
	{on fire "mgun2"
		{if tagged "sponson_right_hb"				{call "sc_stuff_call_fire_weapon_fx_sponson_right_hb"}}
		{if tagged "sponson_right_plasmacannon"		{spawn "flash_plasmacannon" "foresight_r_plasmacannon" x}}
		{if tagged "sponson_right_lascannon"		{spawn "flash_lascannon" "foresight_r_lascannon" x}}
		
		{if tagged "sponson_right_ork_Shoota"
			{call "sc_stuff_call_fire_Play_loop_sound_sponson_right_ork_Shoota"}
			{if name "00"	{call "sc_stuff_call_fire_weapon_fx_sponson_right_ork_Shoota00"}
			else			{call "sc_stuff_call_fire_weapon_fx_sponson_right_ork_Shoota01"}
			}
		}
		{if tagged "sponson_right_melta"
			{spawn "flash_gun_melta_x2" "foresight_r_melta" x}
			{spawn "fx_melta_cone_mul" "foresight_r_melta" x}
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
	{on fire "mgun3"
		{if tagged "sponson_front_hb"			{call "sc_stuff_call_fire_weapon_fx_sponson_front_hb"}}
		{if tagged "sponson_front_lascannon"	{spawn "flash_lascannon" "foresight_f_lascannon" x}}
		
		{if tagged "sponson_front_melta"
			{spawn "fx_melta_cone_mul" "foresight_f_melta" x}
		}
		{if tagged "sponson_front_flamer"
			{call "sc_stuff_call_fire_Play_loop_sound_sponson_front_flamer"}
			{call "sc_stuff_call_fire_weapon_fx_sponson_front_flamer"}
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight_f_flamer) distance_m(40) gravity(1.0) spread(2.0)) 
		}
		{if tagged "sponson_front_Ork_Rokkit"
			{if tagged "rokkit02"	{spawn "bazooka_shot" "barrel_f_Ork_Rokkitlauncha02" x}	{bone hide "Ork_Ammo02"}
			else tagged "rokkit01"	{spawn "bazooka_shot" "barrel_f_Ork_Rokkitlauncha01" x}	{bone hide "Ork_Ammo01"}	{tags add "rokkit02"} {tags remove "rokkit01"}
			else					{spawn "bazooka_shot" "barrel_f_Ork_Rokkitlauncha00" x}	{bone hide "Ork_Ammo00"}	{tags add "rokkit01"}
			}
		}
	}
}