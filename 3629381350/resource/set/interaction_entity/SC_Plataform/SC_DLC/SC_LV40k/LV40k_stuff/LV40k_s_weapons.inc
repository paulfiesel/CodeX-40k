
;	<<<< ---------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Stuff Weapons ===============] >>
;	<<<<----------------------------------------------------------------------------->>>>			 


; ============================================================================================================================================ ;
; // LV40k Weapons General Configurations
; ============================================================================================================================================ ;


{"stuff weapon LV40k_weapon" 
}


; ============================================================================================================================================ ;
; // Link Weapon VFX 
; ============================================================================================================================================ ;


; // BURNAS --------------------------------------------------------------------------------------------------- ;

;...

; // DEFFGUNS --------------------------------------------------------------------------------------------------- ;


; -------- [LOOTA DEFFGUN DAKKA] ----------

; // BUZZ: deffguns FX like muzzle and shell casings are linked directly in the human.inc file.

("SC_Stuff_Define_Weapon_Loop_Fire_Sound"
	tag(lv40k_deffgun_dakka)
	snd(SC_DLC_LV40k/smallarms/lp_dakka_deffgun_v1)  
	stop_delay(0.2)
)

; -------- [LOOTA DEFFGUN BEAMY] ----------

; @@@@

; // SHOOTAS --------------------------------------------------------------------------------------------------- ;

; -------- [KUSTOM SHOOTA] ----------

("SC_Stuff_Define_Weapon_Loop_Fire_Sound"
	tag(lv40k_shoota_kustom)
	snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1)
	stop_delay(0.2)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_shoota_kustom)
	shell_fx(shell_shoota)
	flash_fx(flash_bg)
	foresight(3)
	stop_delay(0.2)
)

; -------- [SPECHUL SHOOTA] ----------

; // disabled
; // ("SC_Stuff_Define_Weapon_Shotgun_x8" flash(flash_shotgun_lv40k) tag(lv40k_spechul_shoota) tier(tier1) foresight(3))

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_spechul_shoota)
	shell_fx(shell_heavybolter) 
	flash_fx(flash_shotgun_lv40k)
	foresight(3)
	stop_delay(0.2)
)

; -------- [SHOOTA MK.II] ----------

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_shoota_common)
	shell_fx(shell_shoota)
	flash_fx(tank_canon_fire_20_25_auto)
	foresight(3)
	stop_delay(0.05)
)

; -------- [BIG SHOOTA] ----------

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_big_shoota_common)
	shell_fx(shell_shoota_big)
	flash_fx(flash_gun_hmg_m2hb)
	foresight(3)
	stop_delay(0.05)
)

; // GROT BLUNDERBUSS  --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_grot_blunderbuss)
	shell_fx() 
	flash_fx(flash_shotgun_lv40k)
	foresight(3)
	stop_delay(0.3)
)

; // SLUGGA --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_slugga_common)
	shell_fx(shell_smg)
	flash_fx(tank_canon_fire_20_25_auto)
	foresight(3)
	stop_delay(0.2)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_grot_blasta)
	shell_fx(shell_smg)
	flash_fx(tank_canon_fire_20_25_auto)
	foresight(3)
	stop_delay(0.2)
)

; // FLASHGITZ SNAZZGUN --------------------------------------------------------------------------------------------------- ;

{"stuff weapon SC_weapon lv40k_gitz_snazzgun" 
	{on spawn
		{add_view "fx_glow_blue_med" "sc_fx_all_time" "fxlight1"}
		{add_view "fx_glow_red_small" "sc_fx_all_time" "fxlight2"}
		{add_view "fx_glow_blue_med" "sc_fx_all_time" "fxlight3"}
		{add_view "fx_glow_green_med" "sc_fx_all_time" "fxlight4"}
		
		; // Plasma snazzgun
		{if prop "_3"
			{add_view "fx_glow_blue_med" "sc_fx_all_time" "fxlight5"}
			{add_view "fx_glow_blue_big" "sc_fx_all_time" "fxlight6"}
		}
	}
}

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_gitz_snazzgun _1)
	shell_fx(shell_shoota)
	flash_fx(flash_ork)
	foresight(3)
	stop_delay(0.2)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_gitz_snazzgun _2)
	shell_fx(shell_ac_20)
	flash_fx(flash_bg)
	foresight(3)
	stop_delay(0.3)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_gitz_snazzgun _3)
	shell_fx()
	flash_fx(flash_plasma_purpur)
	foresight(3)
	stop_delay(0.6)
)

; // WEIRDBOY STAFF --------------------------------------------------------------------------------------------------- ;

{"stuff weapon SC_weapon lv40k_weirdboy_staff" 
	{on spawn
		{add_view "plasma_smoke_gre" "sc_fx_link_human" "foresight3"}
	}
}

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_weirdboy_staff)
	shell_fx() 
	flash_fx(flash_gun_big_orange)
	foresight(3)
	stop_delay(0.4)
)

; // ASTARTES SHOTGUN --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_sm_shotgun)
	shell_fx(shell_heavybolter) 
	flash_fx(flash_shotgun_lv40k)
	foresight(3)
	stop_delay(0.2)
)

; // AUTOGUNS --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_autogun)
	shell_fx(shell_smg)
	flash_fx(flash_gun_big)
	foresight(3)
	stop_delay(0.2)
)

; // VOLKITE --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Loop_Fire_Sound"
	tag(lv40k_volkite_caliver)
	snd(SC_DLC_LV40k/smallarms/lp_volkite_v1)  
	stop_delay(0.2)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_volkite_caliver)
	shell_fx(plasma_overheat_halo_red) 
	flash_fx(flash_volkite3)
	foresight(3)
	stop_delay(0.32)
)


{"stuff weapon SC_weapon lv40k_volkite_caliver" 
	{on spawn 	
		{add_view "plasma_smoke_inf" "LV40k_weapon_reload_VFX" "fxlight"}
		{add_view "plasma_overheat_halo_red" "LV40k_weapon_reload_VFX" "fxlight"}
	}
	{on "weapon_reload"	
		{view start "LV40k_weapon_reload_VFX"}
		{Delay 4.0 {view pause "LV40k_weapon_reload_VFX"}}
		{spawn "fx_plasmatic_min_red" "foresight3" x}
	}
}

; // LASGUNS --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_lasgun_common)
	shell_fx() 
	flash_fx(flash_lasgun_red)
	foresight(3)
	stop_delay(0.2)
)

; // LASPISTOL --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_pistol)
	shell_fx() 
	flash_fx(flash_lasgun_red)
	foresight(3)
	stop_delay(0.2)
)

; // HELLGUNS --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_hellgun_common)
	shell_fx() 
	flash_fx(flash_hellgun)
	foresight(3)
	stop_delay(0.2)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_hotshot_common)
	shell_fx() 
	flash_fx(flash_lasgun_orange2)
	foresight(3)
	stop_delay(0.2)
)


; // ASSAULT CANNON --------------------------------------------------------------------------------------------------- ;

; // PLAY SOUND WITHIN CALLER EFFECTOR!
 
("SC_Stuff_Define_Weapon_Interaction" 
	tag(LV40k_assault_cannon)
	shell_fx(shell_ac_30) 
	flash_fx(flash_hb)
	foresight(3)
	stop_delay(0.2)
)

; // ASTARTES SNIPER RIFLE --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_sm_Sniper_rifle)
	shell_fx(shell_heavybolter) 
	flash_fx(tank_canon_fire_20_25_auto)
	foresight(3)
	stop_delay(0.2)
)

; // BOLTERS --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_bolter_storm)
	shell_fx(shell_bolter) 
	flash_fx(flash_bg)
	foresight(3)
	stop_delay(0.2)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_bolter_pistol)
	shell_fx(shell_bolter) 
	flash_fx(tank_canon_fire_20_25_auto)
	foresight(3)
	stop_delay(0.2)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_bolter_stalker)
	shell_fx(shell_bolter) 
	flash_fx(tank_canon_fire_20_25_auto)
	foresight(3)
	stop_delay(0.4)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_bolter_rifle)
	shell_fx(shell_bolter) 
	flash_fx(tank_canon_fire_20_25_auto)
	foresight(3)
	stop_delay(0.2)
)

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_bolter_common)
	shell_fx(shell_bolter) 
	flash_fx(tank_canon_fire_20_25_auto)
	foresight(3)
	stop_delay(0.2)
)

{"stuff weapon SC_weapon lv40k_combi_bolter_plasma"
	{on spawn 
		{add_view "plasma_radiator_blue"		"sc_fx_all_time"		"fx_combi_plasma0"}
		
		{add_view "spark_light_b"		"sc_fx_all_time"		"fx_combi_plasma1"}
		{add_view "spark_light_b"		"sc_fx_all_time"		"fx_combi_plasma2"}
	
		{add_view "plasma_overheat_halo_blue"	"LV40k_weapon_reload_VFX"	"fx_combi_plasma0"}
		{add_view "smoke_plasma_big_blu" 		"LV40k_weapon_fire_VFX"		"fx_combi_plasma0"}
	}	
}

; // HEAVY BOLTER --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_heavy_Bolter)
	shell_fx(shell_heavybolter) 
	flash_fx(flash_gun_hmg_dshk)
	foresight(3)
	stop_delay(0.2)
)

; // SHOULDER LASCANNON --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_lascannon_shoulder)
	shell_fx() 
	flash_fx(flash_lascannon_red)
	foresight(3)
	stop_delay(0.4)
)

; // PLASMACANNON --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_plasmacannon)
	shell_fx() 
	flash_fx(flash_plasmacannon)
	foresight(3)
	stop_delay(0.35)
)

{"stuff weapon SC_weapon lv40k_plasmacannon" 
	{on spawn 	
		{add_view "plasma_radiator_blue"		"sc_fx_all_time"		"fxlights"}
		{add_view "fx_plasma_blu_rad_16"		"sc_fx_all_time"		"fx_rad_01"}
		{add_view "fx_plasma_blu_rad_16"		"sc_fx_all_time"		"fx_rad_02"}
		{add_view "fx_plasma_blu_rad_16_l"		"sc_fx_all_time" 		"fx_rad_03"}
		{add_view "fx_plasma_blu_rad_16"		"sc_fx_all_time"		"fx_rad_04"}
		{add_view "fx_plasma_blu_rad_16"		"sc_fx_all_time"		"fx_rad_05"}
		{add_view "fx_plasma_blu_rad_16_r"		"sc_fx_all_time"		"fx_rad_06"}
		
		{add_view "plasma_overheat_halo_blue"	"LV40k_weapon_reload_VFX"	"fxlights"}
		{add_view "smoke_plasma_big_blu" 		"LV40k_weapon_fire_VFX"	"fxshell"}
	}
	{on "weapon_reload"	
		{view start "LV40k_weapon_reload_VFX"}
		{Delay 5.0 {view pause "LV40k_weapon_reload_VFX"}}
	}
	{on "fire"
		{view start "LV40k_weapon_fire_VFX"}
		{kill_delay "LV40k_weapon_fire_delay_VFX"}
		{delay 2.4 "LV40k_weapon_fire_delay_VFX"
			{view pause "LV40k_weapon_fire_VFX"}
		}
	}
}

; // PLASMAGUN --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_plasmagun_common)
	shell_fx() 
	flash_fx(flash_plasma)
	foresight(3)
	stop_delay(0.2)
)

{"stuff weapon SC_weapon lv40k_plasmaweapon_fx" 
	{on spawn 	
		{add_view "plasma_radiator_blue"		"sc_fx_all_time"		"fxlights"}
		{add_view "fx_plasma_blu_rad_16"		"sc_fx_all_time"		"fx_rad_01"}
		{add_view "fx_plasma_blu_rad_16"		"sc_fx_all_time"		"fx_rad_02"}
		{add_view "fx_plasma_blu_rad_16_l"		"sc_fx_all_time" 		"fx_rad_03"}
		{add_view "fx_plasma_blu_rad_16"		"sc_fx_all_time"		"fx_rad_04"}
		{add_view "fx_plasma_blu_rad_16"		"sc_fx_all_time"		"fx_rad_05"}
		{add_view "fx_plasma_blu_rad_16_r"		"sc_fx_all_time"		"fx_rad_06"}
		
		{add_view "plasma_overheat_halo_blue"	"LV40k_weapon_reload_VFX"	"fxlights"}
		{add_view "smoke_plasma_min_blu" 		"LV40k_weapon_fire_VFX"	"fxshell"}
	}
	{on "weapon_reload"	
		{view start "LV40k_weapon_reload_VFX"}
		{Delay 5.0 {view pause "LV40k_weapon_reload_VFX"}}
	}
	{on "fire"
		{view start "LV40k_weapon_fire_VFX"}
		{kill_delay "LV40k_weapon_fire_delay_VFX"}
		{delay 1.2 "LV40k_weapon_fire_delay_VFX"
			{view pause "LV40k_weapon_fire_VFX"}
		}
	}
}

; // ROKKIT PISTOL --------------------------------------------------------------------------------------------------- ;

{"stuff weapon SC_weapon lv40k_rokkit_pistol" 
	{on "weapon_reload"	
		{delay 3.5
			{bone show "rokkit"}
		}
	}
	{on "fire"
		{bone hide "rokkit"}
	}
}

("SC_Stuff_Define_Weapon_Interaction" 
	tag(rokkit_pistol)
	shell_fx() 
	flash_fx(bazooka_shot_small)
	foresight(3)
	stop_delay(0.3)
)

; // Astartes Rocket Launcher --------------------------------------------------------------------------------------------------- ;

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_rokkit_launcha)
	shell_fx() 
	flash_fx(bazooka_shot_small)
	foresight(3)
	stop_delay(0.3)
)

; // ROKKIT LAUNCHA --------------------------------------------------------------------------------------------------- ;

{"stuff weapon SC_weapon lv40k_rokkit_launcha" 
	{on "weapon_reload"	
		{delay 4.0
			{tags remove "fire_4"}	{bone show "ammo4"}
			{tags remove "fire_3"}	{bone show "ammo3"}
			{tags remove "fire_2"}	{bone show "ammo2"}
			{tags remove "fire_1"}	{bone show "ammo1"}
		}
	}
	{on "fire"
		{if tagged "fire_3"		{tags remove "fire_3"} {tags add "fire_4"}	{bone hide "ammo4"}
		else tagged "fire_2"	{tags remove "fire_2"} {tags add "fire_3"}	{bone hide "ammo3"}
		else tagged "fire_1"	{tags remove "fire_1"} {tags add "fire_2"}	{bone hide "ammo2"}
		else					{tags add "fire_1"}	{bone hide "ammo1"}
		}
	}
}

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_rokkit_launcha)
	shell_fx() 
	flash_fx(bazooka_shot_small)
	foresight(3)
	stop_delay(0.3)
)

; // Meltagun

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_multi_melta)
	shell_fx()
	flash_fx(flash_gun_melta_x2)
	foresight(3)
	stop_delay(0.05)
)

{"stuff weapon SC_weapon lv40k_multi_melta" 
	{on "fire"
		{spawn "fx_melta_cone_mul" "foresight3" x}
	}
}


("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_meltagun)
	shell_fx()
	flash_fx(flash_gun_melta_x2)
	foresight(3)
	stop_delay(0.2)
)

{"stuff weapon SC_weapon lv40k_meltagun" 
	{on "fire"
		{spawn "fx_melta_cone" "foresight3" x}
	}
}

; // KOMBI SHOOTA --------------------------------------------------------------------------------------------------- ;

{"stuff weapon SC_weapon lv40k_kombi_shoota" 
	{on "weapon_reload"	
		{delay 3.5
			{tags remove "fire_4"}	{bone show "ammo4"}
			{tags remove "fire_3"}	{bone show "ammo3"}
			{tags remove "fire_2"}	{bone show "ammo2"}
			{tags remove "fire_1"}	{bone show "ammo1"}
		}
	}
	{on "fire"
		{if name "foresight4"
			{if tagged "fire_3"		{tags remove "fire_3"} {tags add "fire_4"}	{bone hide "ammo4"}
			else tagged "fire_2"	{tags remove "fire_2"} {tags add "fire_3"}	{bone hide "ammo3"}
			else tagged "fire_1"	{tags remove "fire_1"} {tags add "fire_2"}	{bone hide "ammo2"}
			else					{tags add "fire_1"}	{bone hide "ammo1"}
			}
		}
	}
}

("SC_Stuff_Define_Weapon_Interaction" 
	tag(lv40k_kombi_shoota)
	shell_fx() 
	flash_fx(bazooka_shot_small)
	foresight(3)
	stop_delay(0.3)
)