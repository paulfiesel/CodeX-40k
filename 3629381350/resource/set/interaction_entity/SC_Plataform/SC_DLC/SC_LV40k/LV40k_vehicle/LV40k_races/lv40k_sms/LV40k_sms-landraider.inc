
;	<<<< ------------------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Space Marines Rhino and All Variants ===============] >>
;	<<<<-------------------------------------------------------------------------------------------------------------->>>>			 

{"sm_Landraider"
	{on spawn 	
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke1"}
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke2"}
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke3"}
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke4"}
		{add_view "sm_vehicle_start"	"exhaust2" "fxsmoke1"}
		{add_view "sm_vehicle_start"	"exhaust2" "fxsmoke2"}
		{add_view "sm_vehicle_start"	"exhaust2" "fxsmoke3"}
		{add_view "sm_vehicle_start"	"exhaust2" "fxsmoke4"}
		
		{add_view "fx_glow_red_big"	"SC_vh_lights_crew"	"BacklightR"}
		{add_view "fx_glow_red_big"	"SC_vh_lights_crew"	"BacklightL"}
		
		{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred1"}
		{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred2"}
		{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred3"}
		{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred4"}
		
		{add_view "fx_glow_green_med"	"SC_vh_lights_crew"	"fxlightgreen1"}
		{add_view "fx_glow_green_med"	"SC_vh_lights_crew"	"fxlightgreen2"}
	
		{Delay 0.1	{if crew_in_place "gunner"	{ani_play "hatch1_open"}}}
		
		; ################# // PRESETS - ROLE DETAILS
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sm_LR_prometheus"
			{add_view "fx_glow_green_small"	"SC_vh_lights_crew"	"fxlightgreen1_P"}
			{add_view "fx_glow_green_med"	"SC_vh_lights_crew"	"fxlightgreen2_P"}
			{add_view "fx_glow_red_med"		"SC_vh_lights_crew"	"fxlightred1_P"}
			{add_view "fx_glow_red_med"		"SC_vh_lights_crew"	"fxlightred2_P"}
			{add_view "fx_glow_red_big"		"SC_vh_lights_crew"	"fxlightred3_P"}

			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred1_W"}
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fxlightred2_W"}
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fxlightred3_W"}
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred4_W"}
			
		else tagged "sm_LR_terminus"
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fxlightred1_WT"}
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fxlightred2_WT"}
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fxlightred3_WT"}
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred4_WT"}
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred5_WT"}
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fxlightred6_WT"}
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fx_T_LC"}
		
		else tagged "sm_LR_standard"
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred1_W"}
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fxlightred2_W"}
			{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fxlightred3_W"}
			{add_view "fx_glow_red_med"	"SC_vh_lights_crew"	"fxlightred4_W"}
		}
		
		; ################# // WEAPONRY - AUXILIARY
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "aux_pintle"
			{call "sc_stuff_call_add_weapon_fx_aux_Stormbolter"}
			{call "sc_stuff_call_add_loop_fire_sound_aux_Stormbolter"}
		else
			{bone hide "pintle_lr"}
		}
		
		{if tagged "aux_hkm"
			; [...]
		else
			{bone hide "hkm_rot"}
			{bone show "LR_radar"}
		}
		
		; ################# // WEAPONRY - MAIN
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "main_as2"
			{Call "sc_stuff_call_add_loop_fire_sound_main_as2_fire"}
			{Call "sc_stuff_call_add_loop_fire_sound_main_as2_ring"}
			{Call "sc_stuff_call_add_weapon_fx_main_as2_00"}
			{Call "sc_stuff_call_add_weapon_fx_main_as2_01"}
		
		else tagged "main_hbb"
			{Call "sc_stuff_call_add_loop_fire_sound_main_HBB"}
			{Call "sc_stuff_call_add_weapon_fx_main_hbb00"}
			{Call "sc_stuff_call_add_weapon_fx_main_hbb01"}
		}
		
		; ################# // WEAPONRY - SPONSONS LEFT
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_L_flamestorm"	
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights_crew"	"Fx_WL_HFF"} 
			{Call "sc_stuff_call_add_loop_fire_sound_sponson_L_flamestorm"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_L_flamestorm00"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_L_flamestorm01"}
		}
		{if tagged "sponson_L_quadbolter"
			{Call "sc_stuff_call_add_loop_fire_sound_sponson_L_quadbolter"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_L_quadbolter00"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_L_quadbolter01"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_L_quadbolter02"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_L_quadbolter03"}
		}
		
		; ################# // WEAPONRY - SPONSONS RIGHT
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "sponson_R_flamestorm"	
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights_crew"	"Fx_WR_HFF"} 
			{Call "sc_stuff_call_add_loop_fire_sound_sponson_R_flamestorm"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_R_flamestorm00"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_R_flamestorm01"}
		}
		{if tagged "sponson_R_quadbolter"
			{Call "sc_stuff_call_add_loop_fire_sound_sponson_R_quadbolter"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_R_quadbolter00"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_R_quadbolter01"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_R_quadbolter02"}
			{Call "sc_stuff_call_add_weapon_fx_sponson_R_quadbolter03"}
		}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ig_baneblade/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_landraider/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ig_baneblade/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/sm_landraider/exhaust"}
		{link_sound "move"				"SC_DLC_LV40k/W40k_vehicles/tracks/tread_vehicles_04"}
	}
	{on "smoke_screen"
		("SC_smoke_shot" args "nbk39" smoke_shot1 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" smoke_shot2 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" smoke_shot3 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" smoke_shot4 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" smoke_shot5 12 0.5 0 20)
		("SC_smoke_shot" args "nbk39" smoke_shot6 12 0.5 0 20)
	}
	{on animation_event "open_door"  {Start_sound "SC_Plataform/SC_fx/sc_misc_s3/vehicle_door" use_position}}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Aux Weaponry 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(aux_Stormbolter) tag(aux_Stormbolter) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(aux_Stormbolter)
		d1(0.2)	fx1(flash_hb) b1(foresight_pintle) 
		d2(0.05) fx2(shell_heavybolter) b2(fxshell_pintle1)
		d3(0.05) fx3(shell_heavybolter) b3(fxshell_pintle2)
	)
	
	; // Pintle Mount
	{on fire "mgun"
		{call "sc_stuff_call_fire_weapon_fx_aux_Stormbolter"}
		{Call "sc_stuff_call_fire_Play_loop_sound_aux_Stormbolter"}
	}
	
	; // HKM
	{on fire "mgun1"
	}

	; <<<<	===================	LV40k Vehicle Behaviour: Main Gun 	===================	>>>>
	
	; // TWIN HEAVY-BOLTERS
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(main_HBB) tag(main_HBB) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(main_HBB00)d1(0.2) fx1(flash_hb) b1(Barrel_T_HB00) d2(0.2) fx2(shell_heavybolter) b2(FXshell_T_HB00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(main_HBB01)d1(0.2) fx1(flash_hb) b1(Barrel_T_HB01) d2(0.2) fx2(shell_heavybolter) b2(FXshell_T_HB01))
	
	; // ASSAULT CANNON
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(main_AS2_fire) tag(main_AS2_fire) snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_v2) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(main_AS2_ring) tag(main_AS2_ring) snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_ring_v3) stop_delay(2.0))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(main_AS2_00) d1(0.2) fx1(flash_hb) b1(Barrel_T_AS2_00) d2(0.3) fx2(shell_ac_10)	b2(FXshell_T_AS2_00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(main_AS2_01) d1(0.2) fx1(flash_hb) b1(Barrel_T_AS2_01) d2(0.3) fx2(shell_ac_10)	b2(FXshell_T_AS2_01))
	
	{on fire "gun"
		{if tagged "main_HBB"
			{call "sc_stuff_call_fire_Play_loop_sound_main_HBB"}
			{If name "00"	{call "sc_stuff_call_fire_weapon_fx_main_HBB00"}
			else			{call "sc_stuff_call_fire_weapon_fx_main_HBB01"}}
			
		else tagged "main_AS2"
			("SC_Misc_Define_Gun_Rev_Animation" args as2)
			{call "sc_stuff_call_fire_Play_loop_sound_main_AS2_ring"}
			{call "sc_stuff_call_fire_Play_loop_sound_main_AS2_fire"}
			{If name "00"	{call "sc_stuff_call_fire_weapon_fx_main_AS2_00"}
			else			{call "sc_stuff_call_fire_weapon_fx_main_AS2_01"}}
		
		else tagged "main_Lascannon"
			{if name "00"	{spawn "flash_lascannon_big" "Barrel_T_LC00" x}
			else 			{spawn "flash_lascannon_big" "Barrel_T_LC01" x}}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Sponson Left 	===================	>>>>
	
	; // Flamestorm Flamer
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(sponson_L_flamestorm) tag(sponson_L_flamestorm) snd(SC_DLC_LV40k/smallarms/lp_flamer_heavy_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_L_flamestorm00) d1(0.2) fx1(fx_arcflamer_01) b1(Barrel_WL_HFF00) d2(0.2) fx2(flamer_fire) b2(Barrel_WL_HFF00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_L_flamestorm01) d1(0.2) fx1(fx_arcflamer_01) b1(Barrel_WL_HFF01) d2(0.2) fx2(flamer_fire) b2(Barrel_WL_HFF01))
	
	; // QUAD HEAVY-BOLTERS
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(sponson_L_quadbolter) tag(sponson_L_quadbolter) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v2) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_L_quadbolter00) d1(0.2) fx1(flash_hb) b1(Barrel_WL_HB00) d2(0.1) fx2(shell_heavybolter) b2(Fxshell_WL_HB00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_L_quadbolter01) d1(0.2) fx1(flash_hb) b1(Barrel_WL_HB01) d2(0.1) fx2(shell_heavybolter) b2(Fxshell_WL_HB01))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_L_quadbolter02) d1(0.2) fx1(flash_hb) b1(Barrel_WL_HB02) d2(0.1) fx2(shell_heavybolter) b2(Fxshell_WL_HB02))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_L_quadbolter03) d1(0.2) fx1(flash_hb) b1(Barrel_WL_HB03) d2(0.1) fx2(shell_heavybolter) b2(Fxshell_WL_HB03))
	
	{on fire "gun1"
		{if tagged "sponson_L_lascannon"
			{if name "00"	{spawn "flash_lascannon_big" "barrel_wl_lc00" x}
			else 			{spawn "flash_lascannon_big" "barrel_wl_lc01" x}}
			
		else tagged "sponson_L_quadbolter"
			{call "sc_stuff_call_fire_Play_loop_sound_sponson_L_quadbolter"}
			{If name "00"	{call "sc_stuff_call_fire_weapon_fx_sponson_L_quadbolter00"}
			else name "01"	{call "sc_stuff_call_fire_weapon_fx_sponson_L_quadbolter01"}
			else name "02"	{call "sc_stuff_call_fire_weapon_fx_sponson_L_quadbolter02"}
			else name "03"	{call "sc_stuff_call_fire_weapon_fx_sponson_L_quadbolter03"}}
			
		else tagged "sponson_L_flamestorm"
			{call "sc_stuff_call_fire_Play_loop_sound_sponson_l_flamestorm"}
			{call "sc_stuff_call_fire_weapon_fx_sponson_l_flamestorm00"}
			{call "sc_stuff_call_fire_weapon_fx_sponson_l_flamestorm01"}
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_inferno) where(Barrel_WL_HFF00) distance_m(40) gravity(1.0) spread(2.5)) 
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_inferno) where(Barrel_WL_HFF01) distance_m(40) gravity(1.0) spread(2.5)) 
			
		else tagged "sponson_L1_lascannon"		; Terminus Ultra
			{spawn "flash_lascannon_big" "Foresight_WTL1_LC" x}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Sponson Right ===================	>>>>
	
	; // Flamestorm Flamer
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(sponson_R_flamestorm) tag(sponson_R_flamestorm) snd(SC_DLC_LV40k/smallarms/lp_flamer_heavy_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_R_flamestorm00) d1(0.2) fx1(fx_arcflamer_01) b1(Barrel_WR_HFF00) d2(0.2) fx2(flamer_fire) b2(Barrel_WR_HFF00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_R_flamestorm01) d1(0.2) fx1(fx_arcflamer_01) b1(Barrel_WR_HFF01) d2(0.2) fx2(flamer_fire) b2(Barrel_WR_HFF01))
	
	; // QUAD HEAVY-BOLTERS
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(sponson_R_quadbolter) tag(sponson_R_quadbolter) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v2) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_R_quadbolter00) d1(0.2) fx1(flash_hb) b1(Barrel_WR_HB00) d2(0.1) fx2(shell_heavybolter) b2(Fxshell_WR_HB00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_R_quadbolter01) d1(0.2) fx1(flash_hb) b1(Barrel_WR_HB01) d2(0.1) fx2(shell_heavybolter) b2(Fxshell_WR_HB01))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_R_quadbolter02) d1(0.2) fx1(flash_hb) b1(Barrel_WR_HB02) d2(0.1) fx2(shell_heavybolter) b2(Fxshell_WR_HB02))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(sponson_R_quadbolter03) d1(0.2) fx1(flash_hb) b1(Barrel_WR_HB03) d2(0.1) fx2(shell_heavybolter) b2(Fxshell_WR_HB03))
	
	{on fire "gun2"
		{if tagged "sponson_R_lascannon"
			{if name "00"	{spawn "flash_lascannon_big" "barrel_wr_lc00" x}
			else 			{spawn "flash_lascannon_big" "barrel_wr_lc01" x}}
		
		else tagged "sponson_R_quadbolter"
			{call "sc_stuff_call_fire_Play_loop_sound_sponson_R_quadbolter"}
			{If name "00"	{call "sc_stuff_call_fire_weapon_fx_sponson_R_quadbolter00"}
			else name "01"	{call "sc_stuff_call_fire_weapon_fx_sponson_R_quadbolter01"}
			else name "02"	{call "sc_stuff_call_fire_weapon_fx_sponson_R_quadbolter02"}
			else name "03"	{call "sc_stuff_call_fire_weapon_fx_sponson_R_quadbolter03"}}
			
		else tagged "sponson_R_flamestorm"
			{call "sc_stuff_call_fire_Play_loop_sound_sponson_R_flamestorm"}	
			{call "sc_stuff_call_fire_weapon_fx_sponson_R_flamestorm00"}
			{call "sc_stuff_call_fire_weapon_fx_sponson_R_flamestorm01"}
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_inferno) where(Barrel_WR_HFF00) distance_m(40) gravity(1.0) spread(2.5)) 
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_inferno) where(Barrel_WR_HFF01) distance_m(40) gravity(1.0) spread(2.5)) 
			
		else tagged "sponson_R1_lascannon"		; Terminus Ultra
			{spawn "flash_lascannon_big" "Foresight_WTR1_LC" x}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Sponsons Extra 	===================	>>>>
	
	{on fire "gun3"
		{if tagged "sponson_L2_lascannon"		; Terminus Ultra
			{if name "00"	{spawn "flash_lascannon_big" "Barrel_WTL2_LC00" x}
			else 			{spawn "flash_lascannon_big" "Barrel_WTL2_LC01" x}}
		}
	}
	
	{on fire "gun4"
		{if tagged "sponson_R2_lascannon"		; Terminus Ultra
			{if name "00"	{spawn "flash_lascannon_big" "Barrel_WTR2_LC00" x}
			else 			{spawn "flash_lascannon_big" "Barrel_WTR2_LC01" x}}
		}
	}
}