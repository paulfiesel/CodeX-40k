
;	<<<< ---------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Ork Trukk ===============] >>
;	<<<<----------------------------------------------------------------------------------->>>>			 

{"ork_Battlewagon"
	{on spawn
		{add_view "fx_arcflamer_flash_01"	"exhaust"	"fxsmoke1"}
		{add_view "fx_arcflamer_flash_01"	"exhaust"	"fxsmoke2"}
		{add_view "fx_arcflamer_flash_01"	"exhaust"	"fxsmoke3"}
		{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke1"}
		{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke2"}
		{add_view "ch_vehicle_start"		"exhaust"	"fxsmoke3"}
		
		{add_view "ch_vehicle_start"		"exhaust2"	"fxsmoke1"}
		{add_view "ch_vehicle_start"		"exhaust2"	"fxsmoke2"}
		{add_view "ch_vehicle_start"		"exhaust2"	"fxsmoke3"}
		
		; ################# // WEAPONRY - Base
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		; // DRIVER MGUN
		{Call "sc_stuff_call_add_loop_fire_sound_mgun"}
		{Call "sc_stuff_call_add_weapon_fx_mgun"}
		
		; // AUX CHASSIS SHOOTAS 
		{Call "sc_stuff_call_add_loop_fire_sound_mgun1"}
		{Call "sc_stuff_call_add_weapon_fx_mgun1_00"}
		{Call "sc_stuff_call_add_weapon_fx_mgun1_01"}
		
		{Call "sc_stuff_call_add_loop_fire_sound_mgun2"}
		{Call "sc_stuff_call_add_weapon_fx_mgun2_00"}
		{Call "sc_stuff_call_add_weapon_fx_mgun2_01"}

		{If tagged "Aux_Deffrola"
			{Bone cut "Body_Front1"}
		else
			{Bone cut "Body_Front2"}
		}
		
		; ################# // WEAPONRY - AUX TURRET 1
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "Aux1_zzapgun"
			{add_view "fx_glow_orange_med" "SC_vh_lights_crew" "foresight2"}
		}
		
		; ################# // WEAPONRY - AUX TURRET 2
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "Aux2_shoota"
			{Call "sc_stuff_call_add_weapon_fx_aux2_shoota"}
			{Call "sc_stuff_call_add_loop_fire_sound_aux2_shoota"}
		}
		
		; ################# // WEAPONRY - AUX TURRET 3
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "Aux3_shoota"
			{Call "sc_stuff_call_add_weapon_fx_aux3_shoota"}
			{Call "sc_stuff_call_add_loop_fire_sound_aux3_shoota"}
		}
		
		; ################# // WEAPONRY - MAIN
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "Main_Kannon"
			{Call "sc_stuff_call_add_cannon_fx_main_kannon"}
			
		else tagged "main_Supakannon"
			{Call "sc_stuff_call_add_cannon_fx_main_supakannon"}
			
		else tagged "main_Liftadrop"
			{add_view "fx_glow_green_med"		"SC_vh_lights_crew"	"fxlight1"}
			{add_view "fx_glow_green_med"		"SC_vh_lights_crew"	"fxlight2"}
			{add_view "fx_glow_green_med"		"SC_vh_lights_crew"	"fxlight3"}
			{add_view "fx_glow_red_big"			"SC_vh_lights_crew"	"fxlight4"}
			
			{add_view "fx_rosarius_orks"		"SC_vh_lights_crew"	"foresight_lifta_droppa"}
			{add_view "fx_glow_green_big"		"SC_vh_lights_crew"	"foresight_lifta_droppa"}
			
			{add_view "fx_glow_green_med"					"SC_vh_lights_crew"	"grav_spin"}
			{add_view "fx_ork_lifta_drop_friction_spin"		"SC_vh_lights_crew"	"grav_spin"}
			
			{Call "sc_stuff_call_add_cannon_fx_main_liftadrop"}
		}
	}	
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz6/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz6/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz6/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz6/full"}
		{link_sound "exhaust"			"vehicle/engine/pz6/exhaust"}
		{link_sound "move"				"SC_DLC_LV40k/W40k_vehicles/tracks/tread_vehicles_01"}
	}
	
	; <<<<	===================	Ork Battlewagon : Deffrolla 	===================	>>>>

	; // BUZZ: this may cause crashes
	
	{on contact
		{if volume "wheelfront"
			{if velocity 6.0
				{with_effector
					{if prop "vehicle"
						{if work "body"
							{if prop "light"
								{components "body" destroy}
							else prop "medium"
								{components "body" destroy}
							else prop "armored_car"
								{components "body" destroy}
							}
						}
					}
				}
			}
		}
	}
	
	; <<<<	===================	Ork Battlewagon : Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_kannon) d1(0.8) fx1(tank_canon_fire_170_210) b1(foresight8))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_supakannon) d1(0.8) fx1(tank_canon_fire_170_210) b1(foresight3))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_liftadrop) d1(1.5) fx1(gravi_cannon_hit) b1(foresight_lifta_droppa))
	
	{on fire "gun"
		{ani_play "hit"}
		
		{if tagged "main_kannon"
			{call "sc_stuff_call_fire_Cannon_fx_main_kannon"}
			{ani_play "fire_kannon"}
			
		else tagged "main_supakannon"
			{call "sc_stuff_call_fire_Cannon_fx_main_supakannon"}
			{ani_play "fire_supakannon"}
			
		else tagged "main_liftadrop"
			{call "sc_stuff_call_fire_Cannon_fx_main_liftadrop"}
		}
	}
	
	; <<<<	===================	Ork Battlewagon : Aux1 	===================	>>>>
	
	{on fire "gun1"
		{if tagged "Aux1_zzapgun"
			{spawn "fx_ork_zzap_flash" "foresight2" x}
		}
	}
	
	; <<<<	===================	Ork Battlewagon : Aux2	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(aux2_shoota)
		tag(aux2_shoota)
		snd(SC_DLC_LV40k/smallarms/lp_shoota_v2)
		stop_delay(0.2)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle"	gun_name(aux2_shoota)	d1(0.3) fx1(flash_ork)	b1(foresight12))
	
	{on fire "gun2"
		{if tagged "Aux2_shoota"
			{call "sc_stuff_call_fire_weapon_fx_aux2_shoota"}
			{call "sc_stuff_call_fire_Play_loop_sound_aux2_shoota"}
		
		else tagged "Aux2_killsaw"
			{start_sound "SC_plataform/SC_fx/sc_ability_s1/orks_dread/saw" 1 use_position}
			
			{Kill_delay "aa"}
			{Ani_play "buzzsaw_spin" loop}
			
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_deff_dread) where(melee_contact))
			{Delay 0.2 "aa" ("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_deff_dread) where(melee_contact))}
			{Delay 0.5 "aa" ("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_deff_dread) where(melee_contact))}
			{Delay 0.8 "aa"	("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_deff_dread) where(melee_contact))}
			{Delay 2.0 "aa" {Ani_stop "buzzsaw_spin"}}
		}
	}
	{on animation_event "spark"
		{spawn "fx_sc_sparkles_s2" "melee_contact" x}
	}
	{on animation_event "spark_2"
		{spawn "spinner_hit" "grav_spin" x}	{spawn "flash_gravi_torsion" "foresight_lifta_droppa" x}
	}
	
	; <<<<	===================	Ork Battlewagon : Aux3 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(aux3_shoota)
		tag(mgun3)
		snd(SC_DLC_LV40k/smallarms/lp_shoota_v2)
		stop_delay(0.2)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle"	gun_name(aux3_shoota)	d1(0.3) fx1(flash_ork)	b1(foresight5))
	
	{on fire "gun3"
		{if tagged "Aux3_shoota"
			{call "sc_stuff_call_fire_weapon_fx_aux3_shoota"}
			{call "sc_stuff_call_fire_Play_loop_sound_aux3_shoota"}
		}
	}
	
	; <<<<	===================	Ork Battlewagon : Base Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(mgun) tag(mgun) snd(SC_DLC_LV40k/smallarms/lp_shoota_v2) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(mgun1) tag(mgun1) snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(mgun2) tag(mgun2) snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1) stop_delay(0.2))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(mgun)	d1(0.3) fx1(flash_ork)	b1(foresight1))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(mgun1_00)	d1(0.3) fx1(flash_ork)	b1(barrel_at4l_00) d2(0.2) fx2(shell_shoota)	b2(fxshell_at4l_00))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(mgun1_01)	d1(0.3) fx1(flash_ork)	b1(barrel_at4l_01) d2(0.2) fx2(shell_shoota)	b2(fxshell_at4l_01))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(mgun2_00)	d1(0.3) fx1(flash_ork)	b1(barrel_at5r_00) d2(0.2) fx2(shell_shoota)	b2(fxshell_at5r_00))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(mgun2_01)	d1(0.3) fx1(flash_ork)	b1(barrel_at5r_01) d2(0.2) fx2(shell_shoota)	b2(fxshell_at5r_01))
	
	{on fire "mgun" overload
		{call "sc_stuff_call_fire_weapon_fx_mgun"}
		{call "sc_stuff_call_fire_Play_loop_sound_mgun"}
	}
	{on fire "mgun1" overload
		{if name "00"	{call "sc_stuff_call_fire_weapon_fx_mgun1_00"}
		else name "01"	{call "sc_stuff_call_fire_weapon_fx_mgun1_01"}
		}
		{call "sc_stuff_call_fire_Play_loop_sound_mgun1"}
	}
	{on fire "mgun2" overload
		{if name "00"	{call "sc_stuff_call_fire_weapon_fx_mgun2_00"}
		else name "01"	{call "sc_stuff_call_fire_weapon_fx_mgun2_01"}
		}
		{call "sc_stuff_call_fire_Play_loop_sound_mgun2"}
	}
}