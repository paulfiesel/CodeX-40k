
;	<<<< ---------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - IG Chimera & Variants ===============] >>
;	<<<<----------------------------------------------------------------------------------------------->>>>			 

{"ig_Chimera"
	{on spawn	;{}
		
		; ################# // HULL MOUNT
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "hull_mount_hb"
			{Call "sc_stuff_call_add_weapon_fx_hull_mount_hb"}
		}
		{if tagged "hull_mount_flamer"
			{Call "sc_stuff_call_add_weapon_fx_hull_mount_flamer"}
			{Call "sc_stuff_call_add_loop_fire_sound_hull_mount_flamer"}
			
			{add_view "fx_ls_red_small"	"SC_vh_lights_crew"	"fx_f_flamer"}
		}
		{if tagged "hull_mount_hkm"
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fx_hkm"}
		}
		
		; ################# // CHIMERA
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "chimera_lasguns"
			{Call "sc_stuff_call_add_weapon_fx_chimera_lsg_l1"}
			{Call "sc_stuff_call_add_weapon_fx_chimera_lsg_l2"}
			{Call "sc_stuff_call_add_weapon_fx_chimera_lsg_l3"}
			{Call "sc_stuff_call_add_weapon_fx_chimera_lsg_r1"}
			{Call "sc_stuff_call_add_weapon_fx_chimera_lsg_r2"}
			{Call "sc_stuff_call_add_weapon_fx_chimera_lsg_r3"}
		}
		{if tagged "main_multilaser"
			{Call "sc_stuff_call_add_weapon_fx_main_multilaser"}
		}
		{if tagged "main_lascannon"
			; ...
		}
		{if tagged "main_heavybolter"
			{Call "sc_stuff_call_add_weapon_fx_main_hb00"}
			{Call "sc_stuff_call_add_weapon_fx_main_hb01"}
			
			{Call "sc_stuff_call_add_loop_fire_sound_main_heavybolter"}
		}
		{if tagged "main_exterminator"
			{Call "sc_stuff_call_add_weapon_fx_main_ext00"}
			{Call "sc_stuff_call_add_weapon_fx_main_ext01"}
		}
		
		; ################# // BASILISK
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "main_earthshaker"
			{Call "sc_stuff_call_add_cannon_fx_main_earthshaker"}
		}
		
		; ################# // HYDRA
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "main_hydra"
			{add_view "fx_glow_green_big"	"SC_vh_lights_crew"	"fx_optic1"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_optic2"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_optic3"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_optic4"}
			{add_view "fx_glow_blue_med"	"SC_vh_lights_crew"	"fx_optic5"}
			{add_view "fx_ls_red_small"		"SC_vh_lights_crew"	"fx_optic6"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_optic7"}
		}
		
		; ################# // HELLHOUND - BANEWOLF - DEVILDOG
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		; ...
		
		; ################# // WYVERN
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		; ...
		
		; ################# // MANTICORE
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		; ...
		
		; ################# // MANTICORE
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		; ...
	}	
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"SC_DLC_LV40k/W40k_vehicles/tracks/tread_vehicles_01"}
	}
	
	; <<<<	===================	Chimera : Lasguns 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(chimera_lsg_l1) d1(0.3) fx1(flash_lasgun_red) b1(foresight_lasl1))
	{on fire "mgun1"	{call "sc_stuff_call_fire_weapon_fx_chimera_lsg_l1"}}
		
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(chimera_lsg_l2) d1(0.3) fx1(flash_lasgun_red) b1(foresight_lasl2))
	{on fire "mgun2"	{call "sc_stuff_call_fire_weapon_fx_chimera_lsg_l2"}}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(chimera_lsg_l3) d1(0.3) fx1(flash_lasgun_red) b1(foresight_lasl3))
	{on fire "mgun3"	{call "sc_stuff_call_fire_weapon_fx_chimera_lsg_l3"}}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(chimera_lsg_r1) d1(0.3) fx1(flash_lasgun_red) b1(foresight_lasr1))
	{on fire "mgun4"	{call "sc_stuff_call_fire_weapon_fx_chimera_lsg_r1"}}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(chimera_lsg_r2) d1(0.3) fx1(flash_lasgun_red) b1(foresight_lasr2))
	{on fire "mgun5"	{call "sc_stuff_call_fire_weapon_fx_chimera_lsg_r2"}}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(chimera_lsg_r3) d1(0.3) fx1(flash_lasgun_red) b1(foresight_lasr3))
	{on fire "mgun6"	{call "sc_stuff_call_fire_weapon_fx_chimera_lsg_r3"}}
	
	; <<<<	===================	Chimera & Variants : Hull Mount 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(hull_mount_hb) d1(0.2) fx1(flash_hb) b1(foresight_f_hb))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(hull_mount_flamer)
		d1(0.2) fx1(ch_vehicle_start)			b1(foresight_f_FL)
		d2(0.2) fx2(flamer_fire)				b2(foresight_f_FL)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(hull_mount_flamer)
		tag(sponson_front_flamer)
		snd(SC_DLC_LV40k/smallarms/lp_flamer_v1)  
		stop_delay(0.2)
	)
	{on fire "mgun"
		{if tagged "hull_mount_hb"			{call "sc_stuff_call_fire_weapon_fx_hull_mount_hb"}}
		
		{if tagged "hull_mount_flamer"
			{call "sc_stuff_call_fire_Play_loop_sound_hull_mount_flamer"}
			{call "sc_stuff_call_fire_weapon_fx_hull_mount_flamer"}
			
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight_f_FL) distance_m(40) gravity(1.0) spread(2.0)) 
		}
	}
	
	; <<<<	===================	Chimera : Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_earthshaker) d1(1.2) fx1(tank_canon_fire_170_210) b1(foresight3))

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(main_multilaser) d1(0.4) fx1(flash_multilaser) b1(foresight_Multilaser))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(main_hb00) d1(0.2) fx1(flash_hb) b1(barrel_HB00))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(main_hb01) d1(0.2) fx1(flash_hb) b1(barrel_HB01))
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(main_heavybolter)
		tag(sponson_front_flamer)
		snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v2)  
		stop_delay(0.2)
	)
	
	{on fire "gun"		; {}
	
		; // Chimera
		{if tagged "main_multilaser"	{call "sc_stuff_call_fire_weapon_fx_main_multilaser"}}
		{if tagged "main_lascannon"		{spawn "flash_lascannon_big" "foresight_Lascannon" x}}
		{if tagged "main_exterminator"
			{if name "00"	{spawn "tank_canon_fire_20_25_auto" "barrel_ac00" x} {ani_play "fire_ac1"}
			else			{spawn "tank_canon_fire_20_25_auto" "barrel_ac01" x} {ani_play "fire_ac2"}}
		}
		{if tagged "main_heavybolter"
			{call "sc_stuff_call_fire_Play_loop_sound_main_heavybolter"}
			{if name "00"	{call "sc_stuff_call_fire_weapon_fx_main_hb00"}
			else			{call "sc_stuff_call_fire_weapon_fx_main_hb01"}}
		}
		
		; // Basilisk
		{if tagged "main_earthshaker"	
			{call "sc_stuff_call_fire_cannon_fx_main_earthshaker"} {ani_play "hit"} {ani_play "fire"}
		}
		
		; // Hydra
		{if tagged "main_hydra"
			{if name "00"		{spawn "tank_canon_fire_37_40_auto" "barrel00" x} {ani_play "fire00"}
			else name "01"		{spawn "tank_canon_fire_37_40_auto" "barrel01" x} {ani_play "fire01"}
			else name "02"		{spawn "tank_canon_fire_37_40_auto" "barrel02" x} {ani_play "fire02"}
			else name "03"		{spawn "tank_canon_fire_37_40_auto" "barrel03" x} {ani_play "fire03"}
			}
		}
	}
}