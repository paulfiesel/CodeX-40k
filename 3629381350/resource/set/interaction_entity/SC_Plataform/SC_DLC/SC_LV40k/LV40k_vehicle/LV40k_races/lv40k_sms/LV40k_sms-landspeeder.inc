
;	<<<< ------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - SM Landspeeder ===============] >>
;	<<<<-------------------------------------------------------------------------------------->>>>			 

{"sm_Landspeeder"
	{on spawn 
		{add_view "sm_jet_engine_start"	"exhaust" "fxsmoke1"}
		{add_view "sm_jet_engine_idle"	"exhaust2" "fxsmoke1"}
		{add_view "sm_jet_engine_start"	"exhaust" "fxsmoke2"}
		{add_view "sm_jet_engine_idle"	"exhaust2" "fxsmoke2"}
		
		; ################# // TYPHON LAUNCHER
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "rocketpods"
			{add_view "fx_ls_red_small"	"SC_vh_lights_crew" "fxlight_ml_r"}
			{add_view "fx_ls_red_small"	"SC_vh_lights_crew" "fxlight_ml_l"}
		}
		
		; ################# // MAIN WEAPON
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "main_AS2"
			{Call "sc_stuff_call_add_loop_fire_sound_acc_ring"}
			{Call "sc_stuff_call_add_loop_fire_sound_acc_fire"}
			{Call "sc_stuff_call_add_weapon_fx_main_as2"}
		}
		{if tagged "main_HFF"
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights"	"Foresight_Flamer"} 
			{add_view "flamer_fire_barrel_blue"	"SC_vh_lights"	"FX_heavy_flamer"} 
			
			{Call "sc_stuff_call_add_loop_fire_sound_main_HFF"}
			{Call "sc_stuff_call_add_weapon_fx_main_HFF"}
		}
		{if tagged "main_MM"
			{Call "sc_stuff_call_add_weapon_fx_main_mm"}
		}
		
		; ################# // PINTLE WEAPON
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "aux_HB"
			{Call "sc_stuff_call_add_weapon_fx_aux_HB"}
		}
		{if tagged "aux_MM"
			{Call "sc_stuff_call_add_weapon_fx_aux_MM"}
		}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/grav_1/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/grav_1/stop2"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/grav_1/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/grav_1/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/grav_1/exhaust"}
		{link_sound "move"				"vehicle/wheels/"}
		{link_sound "brake"				"vehicle/wheels/"}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Main Weapon	===================	>>>>
	
	; // Assault Cannon
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(acc_fire) tag(acc_fire) snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(acc_ring) tag(acc_ring) snd(SC_DLC_LV40k/smallarms/lp_assault_cannon_ring_v3) stop_delay(2.0))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(main_as2) d1(0.2) fx1(flash_hb) b1(foresight_AS2) d2(0.1) fx2(shell_heavystabber)	b2(fxshell_AS2))
	
	; // Heavy Flamer
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(main_HFF) d1(0.2) fx1(ch_vehicle_start) b1(foresight_Flamer) d2(0.2) fx2(flamer_fire) b2(foresight_Flamer))
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(main_HFF) tag(main_HFF) snd(SC_DLC_LV40k/smallarms/lp_flamer_heavy_v1) stop_delay(0.2))

	; // Multi-Melta
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(main_MM) d1(0.2) fx1(flash_gun_melta_x2) b1(foresight_Melta))
	
	{on fire "Gun"
		{if tagged "main_AS2"
			{call "sc_stuff_call_fire_weapon_fx_main_As2"}
			{call "sc_stuff_call_fire_Play_loop_sound_acc_ring"}
			{call "sc_stuff_call_fire_Play_loop_sound_acc_fire"}
			
			("SC_Misc_Define_Gun_Rev_Animation" args as2)
			
		else tagged "main_HFF"
			{call "sc_stuff_call_fire_Play_loop_sound_main_HFF"}	{call "sc_stuff_call_fire_weapon_fx_main_HFF"}
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_Heavy) where(foresight_Flamer) distance_m(40) gravity(1.0) spread(2.5)) 
		
		else tagged "main_MM"
			{call "sc_stuff_call_fire_weapon_fx_main_MM"}
			{spawn "fx_melta_cone_mul" "foresight_melta" x}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Weapon	Pintle ===================	>>>>
	
	; // Pintle Heavy Bolter
	("SC_Misc_Define_Add_Weapon_Muzzle"	gun_name(aux_HB) d1(0.2) fx1(flash_hb) b1(Foresight_Pintle_HB) d2(0.1) fx2(shell_heavybolter) b2(fxshell_Pintle_HB))
	
	; // Pintle Multimelta
	("SC_Misc_Define_Add_Weapon_Muzzle"	gun_name(aux_MM)d1(0.2) fx1(flash_gun_melta_x2)	b1(Foresight_Pintle_MM))
	
	{on fire "Mgun"
		{if tagged "Aux_HB"
			{call "sc_stuff_call_fire_weapon_fx_aux_HB"}
		else tagged "Aux_MM"
			{call "sc_stuff_call_fire_weapon_fx_aux_MM"}
			{spawn "fx_melta_cone_mul" "Foresight_Pintle_MM" x}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Typhon Rocket Launcher ===================	>>>>
	
	{On fire "gun1"
		{if name "00" {spawn "bazooka_shot_small" "barrel_ml_l00" x}
		else name "01" {spawn "bazooka_shot_small" "barrel_ml_l01" x}
		else name "02" {spawn "bazooka_shot_small" "barrel_ml_l02" x}
		else name "03" {spawn "bazooka_shot_small" "barrel_ml_l03" x}
		else name "04" {spawn "bazooka_shot_small" "barrel_ml_l04" x}
		else name "05" {spawn "bazooka_shot_small" "barrel_ml_l05" x}
		}	
	}
	{On fire "gun2"
		{if name "00" {spawn "bazooka_shot_small" "barrel_ml_r00" x}
		else name "01" {spawn "bazooka_shot_small" "barrel_ml_r01" x}
		else name "02" {spawn "bazooka_shot_small" "barrel_ml_r02" x}
		else name "03" {spawn "bazooka_shot_small" "barrel_ml_r03" x}
		else name "04" {spawn "bazooka_shot_small" "barrel_ml_r04" x}
		else name "05" {spawn "bazooka_shot_small" "barrel_ml_r05" x}
		}	
	}
}