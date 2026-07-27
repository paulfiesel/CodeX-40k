
;	<<<< ---------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Ork Trukk ===============] >>
;	<<<<----------------------------------------------------------------------------------->>>>			 

{"ork_Wartrukk"
	{on spawn 
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke1"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke1"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke2"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke3"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke4"}
		
		; ===================== BIG SHOOTA VARIANT
		{Call "sc_stuff_call_add_weapon_fx_mgun"}
		{Call "sc_stuff_call_add_loop_fire_sound_mgun"}
		
		; ===================== BURNA VARIANT
		{add_view "fx_flamer_barrel_drops"	"fire"	"foresight_burna"} 
		{Call "sc_stuff_call_add_weapon_fx_burna"}
		{Call "sc_stuff_call_add_loop_fire_sound_burna"}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/exhaust"}
		{link_sound "move"				"vehicle/wheels/truck"}
		{link_sound "brake"				"vehicle/wheels/brake"}
	}
	
	; <<<<	===================	LV40k Vehicle: Weaponry - Burna 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(burna)
		d1(0.2) fx1(ch_vehicle_start)			b1(foresight_burna)
		d2(0.2) fx2(flamer_fire)				b2(foresight_burna)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(burna)
		tag(burna)
		snd(SC_DLC_LV40k/smallarms/lp_flamer_v1)  
		stop_delay(0.2)
	)
	{on fire "mgun1"
		{call "sc_stuff_call_fire_Play_loop_sound_burna"}
		{call "sc_stuff_call_fire_weapon_fx_burna"}
		("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight_burna) distance_m(40) gravity(1.0) spread(1.0)) 
		("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight_burna) distance_m(40) gravity(1.0) spread(3.0)) 
	}
	
	; <<<<	===================	LV40k Vehicle: Big Shoota 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(mgun)
		d1(0.2) fx1(flash_ork)			b1(foresight_big_shoota)
		d2(0.1) fx2(shell_shoota_big)	b2(fxshell_big_shoota)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(mgun)
		tag(lv40k_big_shoota)
		snd(SC_DLC_LV40k/smallarms/lp_Big_Shoota_v1)
		stop_delay(0.2)
	)
	{on fire "mgun"
		{call "sc_stuff_call_fire_weapon_fx_mgun"}
		{call "sc_stuff_call_fire_Play_loop_sound_mgun"}
			
		; // BUZZ: makes AI only drop it's troops when near combat...	
		(Mod "mp" 
			{If not user_control
				{able emit_on_attack 1}
				{able emit_passangers_on_enemy 1}
			}
		)
	}
	
	; <<<<	===================	LV40k Vehicle: Explosion 	===================	>>>>
	
	{on "explosion"
		{Delay 0.5 
			(define "cut_part"
				{if rand %1
					{tear "piece_medium_steel" bone %0
						{impulse up 4 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 6 no_position}
						{delay_effect 20 5 "stop"}
					}
				}
			)
			("cut_part" args "wheel1l" 0.5)
			("cut_part" args "wheel2l" 0.5)
			("cut_part" args "wheel3l" 0.5)
			("cut_part" args "wheel1r" 0.5)
			("cut_part" args "wheel2r" 0.5)
			("cut_part" args "wheel3r" 0.5)
			
			("cut_part" args "parts1" 0.5)
			("cut_part" args "parts2" 0.5)
			("cut_part" args "parts3" 0.5)
			("cut_part" args "parts4" 0.5)
			("cut_part" args "parts5" 0.5)
			("cut_part" args "parts6" 0.5)
			("cut_part" args "parts7" 0.5)
			("cut_part" args "parts8" 0.5)
			("cut_part" args "parts9" 0.5)
			("cut_part" args "parts10" 0.5)
			("cut_part" args "parts11" 0.5)
			
			("cut_part" args "Ammo_Trukk_Details5" 0.5)
			("cut_part" args "Ammo_Trukk_Details1" 0.5)
			("cut_part" args "Ammo_Trukk_Details3" 0.5)
			("cut_part" args "Ammo_Trukk_Details2" 0.5)
			
			{Bone hide "Ammo_Trukk_Details4"}
		}
	}
}