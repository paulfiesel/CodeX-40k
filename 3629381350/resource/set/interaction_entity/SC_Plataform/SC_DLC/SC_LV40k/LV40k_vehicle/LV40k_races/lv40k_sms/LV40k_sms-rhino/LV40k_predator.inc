
;	<<<< ------------------------------------------------------------------------------------------------>>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Rhino: Predator Variant ===============] >>
;	<<<<------------------------------------------------------------------------------------------------->>>>			 

{"sm_Predator"
	{on spawn 		; {}	

		; ################# // MAIN - PREDATOR TANK
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if not tagged "ork_Rhino"
			{bone show "predator_light"}	
			{bone show "predator_smokelaunchers"}
		}
		{if tagged "pintle_predator"
			{call "sc_stuff_call_add_weapon_fx_pintle_predator"}
			{call "sc_stuff_call_add_loop_fire_sound_pintle_predator"}
		else tagged "hkm_predator"
			; [...]
		else
			; [...]
		}
		
		{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"Visor_SS_R"}
		{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"Visor_SS_L"}
		
		{if tagged "main_destructor"
			{Call "sc_stuff_call_add_cannon_fx_main_destructor"}
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fx_predator_AC"}
		}
		{if tagged "main_annihilator"
			; [...]
		}
		{if tagged "main_executioner"
			{bone hide "predator_light"}
			
			{add_view "spark_light_b_big"			"SC_vh_lights_crew"	"fx_pc_01"}
			{add_view "plasma_radiator_blue_big"	"SC_vh_lights_crew"	"fx_pc_01"}
			{add_view "spark_light_b_big"			"SC_vh_lights_crew"	"fx_pc_02"}
			{add_view "plasma_radiator_blue_big"	"SC_vh_lights_crew"	"fx_pc_02"}
			{add_view "spark_light_b_big"			"SC_vh_lights_crew"	"fx_pc_03"}
			{add_view "fx_ls_red_med"				"SC_vh_lights_crew"	"fx_laser_PC"}
		}
		{if tagged "main_ork_zzap"
			{add_view "fx_glow_orange_med"	"SC_vh_lights_crew"	"ork_zzap_barrel00"}
			{add_view "fx_glow_orange_med"	"SC_vh_lights_crew"	"ork_zzap_barrel01"}
		}
		{if tagged "main_ork_kannons"
			{Call "sc_stuff_call_add_cannon_fx_main_ork_kannons_1"}
			{Call "sc_stuff_call_add_cannon_fx_main_ork_kannons_2"}
		}
		
		; ################# // SPONSONS - PREDATOR TANK
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_left_lc"
			; [...]
		}
		{if tagged "sponson_right_lc"
			; [...]
		}
		{if tagged "sponson_left_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_left_hb"}
		}
		{if tagged "sponson_right_hb"
			{Call "sc_stuff_call_add_weapon_fx_sponson_right_hb"}
		}
		{if tagged "sponson_right_left"
			{add_view "fx_glow_orange_med"	"SC_vh_lights_crew"	"foresight_l_las"}
		}
		{if tagged "sponson_right_zzap"
			{add_view "fx_glow_orange_med"	"SC_vh_lights_crew"	"foresight_r_las"}
		}
	}
	{on "smoke_screen"
		("SC_smoke_shot" args "nbk39" predator_smoke_shot1 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" predator_smoke_shot2 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" predator_smoke_shot3 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" predator_smoke_shot4 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" predator_smoke_shot5 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" predator_smoke_shot6 12 0.5 0 20)
	}

	; <<<<	===================	SM Rhino : Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_destructor) d1(0.6) fx1(tank_canon_fire_75_76) b1(foresight_predator_destructor))
	
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_ork_kannons_1) d1(0.6) fx1(tank_canon_fire_75_76) b1(foresight_ork_k1))
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_ork_kannons_2) d1(0.6) fx1(tank_canon_fire_122_128) b1(foresight_ork_k2))
	
	{on fire "gun"
		{if tagged "main_ork_kannons"
			{call "sc_stuff_call_fire_Cannon_fx_main_ork_kannons_1"} {ani_play "hit"} {ani_play "fire_kannon1"}
		}
		{if tagged "main_ork_zzap"
			{if name "00"	{spawn "fx_ork_zzap_flash" "ork_zzap_barrel00" x}
			else name "01"	{spawn "fx_ork_zzap_flash" "ork_zzap_barrel01" x}}
		}
		{if tagged "main_executioner"
			{if name "00"	{spawn "flash_plasmacannon" "barrel_pc00" x}
			else name "01"	{spawn "flash_plasmacannon" "barrel_pc01" x}}
		}
		{if tagged "main_destructor"
			{call "sc_stuff_call_fire_Cannon_fx_main_destructor"} {ani_play "hit"} {ani_play "fire_autocannon"}
		}
		{if tagged "main_annihilator"
			{if name "00"	{spawn "flash_lascannon_big" "pred_las_barrel00" x}
			else name "01"	{spawn "flash_lascannon_big" "pred_las_barrel01" x}
			}
		}
	}
	{on fire "gun1"
		{If tagged "main_ork_kannons" {call "sc_stuff_call_fire_Cannon_fx_main_ork_kannons_2"} {ani_play "hit"} {ani_play "fire_kannon2"}} 
	}
	
	; <<<<	===================	SM Rhino : Predator Sponsons 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_left_hb) d1(0.2) fx1(flash_hb) b1(foresight_l_hb) d2(0.1) fx2(shell_heavybolter) b2(fxshell_l_hb))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(sponson_right_hb) d1(0.2) fx1(flash_hb) b1(foresight_r_hb) d2(0.1) fx2(shell_heavybolter) b2(fxshell_r_hb))
	
	{on fire "mgun1"
		{If tagged "sponson_left_hb"	{call "sc_stuff_call_fire_weapon_fx_sponson_left_hb"}}
		{If tagged "sponson_left_LC"	{spawn "flash_lascannon" "foresight_l_las" x}}
	}
	{on fire "mgun2"
		{If tagged "sponson_right_hb"	{call "sc_stuff_call_fire_weapon_fx_sponson_right_hb"}}
		{If tagged "sponson_right_LC"	{spawn "flash_lascannon" "foresight_r_las" x}}
	}
	
	; <<<<	===================	SM Rhino : Pintle Mounts 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(pintle_predator) tag(pintle_predator) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v1) stop_delay(0.2))

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(pintle_predator)
		d1(0.2)	fx1(flash_hb) b1(foresight_pintle) 
		d2(0.05) fx2(shell_heavybolter) b2(fxshell_pintle1)
		d3(0.05) fx3(shell_heavybolter) b3(fxshell_pintle2)
	)
	
	{on fire "mgun3"
		{if tagged "pintle_predator"
			{call "sc_stuff_call_fire_weapon_fx_pintle_predator"}
			{Call "sc_stuff_call_fire_Play_loop_sound_pintle_predator"}
		}
	}
}