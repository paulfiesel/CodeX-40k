
;	<<<< ------------------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Space Marines Rhino and All Variants ===============] >>
;	<<<<-------------------------------------------------------------------------------------------------------------->>>>			 

{"sm_Rhino"
	{on spawn 		
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke1"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke2"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke3"}
		{add_view "ch_vehicle_idle"		"exhaust2" "fxsmoke4"}
		
		{Delay 0.1
			{if crew_in_place "gunner1"
				{if not tagged "Ork_Rhino" {ani_play "predator_hatch_open"}}
			else crew_in_place "gunner"
				{if not tagged "Ork_Rhino" {ani_play "rhino_hatch_open"}}
			}
		}
		{If tagged "Ork_Rhino"
			{add_view "ch_vehicle_start"	"exhaust" "fx_ork_predator_smoke5"}
			{add_view "ch_vehicle_start"	"exhaust" "fx_ork_predator_smoke6"}
			{add_view "ch_vehicle_idle"		"exhaust2" "fx_ork_predator_smoke5"}
			{add_view "ch_vehicle_idle"		"exhaust2" "fx_ork_predator_smoke6"}

			{add_view "ch_vehicle_start"	"exhaust" "fxsmoke1"}
			{add_view "ch_vehicle_start"	"exhaust" "fxsmoke2"}
			{add_view "ch_vehicle_start"	"exhaust" "fxsmoke3"}
			{add_view "ch_vehicle_start"	"exhaust" "fxsmoke4"}
		
			; // Sponsons
			{Bone show "l_ss_ork_detail1"}
			{Bone show "r_ss_ork_detail1"}
			{Bone show "r_ss_ork_detail2"}
		else
			{add_view "sm_vehicle_start"	"exhaust" "fxsmoke1"}
			{add_view "sm_vehicle_start"	"exhaust" "fxsmoke2"}
			{add_view "sm_vehicle_start"	"exhaust" "fxsmoke3"}
			{add_view "sm_vehicle_start"	"exhaust" "fxsmoke4"}
		}
		
		{view hide "exhaust2"}
		
		{if tagged "rhino_smoke"
			{bone show "rhino_smokelaunchers"}
		}
		
		; ################# // VARIANT - RHINO [Gun-Rhino]
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		{if tagged "pintle_rhino"
			{call "sc_stuff_call_add_weapon_fx_pintle_rhino"}
			{call "sc_stuff_call_add_loop_fire_sound_pintle_rhino"}
		}
		{if tagged "rhino_HKM"
			; [...]
		}
		{if tagged "rhino_Stormbolter"
			{call "sc_stuff_call_add_weapon_fx_rhino_Stormbolter"}
			{call "sc_stuff_call_add_loop_fire_sound_rhino_Stormbolter"}
		}
	}
	{on "add_movement_sound" overload
		{If tagged "Ork_Rhino"
			{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/start"}
			{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/stop"}
			{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/idle"}
			{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/full"}
			{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/exhaust"}
		else
			{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/start"}
			{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_Predator/stop"}
			{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Looted_Tank/idle"}
			{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/sm_Predator/full"}
			{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/sm_Predator/exhaust"}
		}
	}
	{on "smoke_screen"
		{if tagged "rhino_smoke"
			("SC_smoke_shot" args "nbk39" rhino_smoke_shot1 12 0.5 0 20)
			("SC_smoke_shot" args "nbk39" rhino_smoke_shot2 12 0.5 0 20)
			("SC_smoke_shot" args "nbk39" rhino_smoke_shot3 12 0.5 0 20)
			("SC_smoke_shot" args "nbk39" rhino_smoke_shot4 12 0.5 0 20)
			("SC_smoke_shot" args "nbk39" rhino_smoke_shot5 12 0.5 0 20)
			("SC_smoke_shot" args "nbk39" rhino_smoke_shot6 12 0.5 0 20)
		}
	}

	; <<<<	===================	SM Rhino : Pintle Mounts 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(pintle_rhino) tag(pintle_rhino) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(pintle_rhino)
		d1(0.2)	fx1(flash_hb) b1(foresight_pintle) 
		d2(0.05) fx2(shell_heavybolter) b2(fxshell_pintle1)
		d3(0.05) fx3(shell_heavybolter) b3(fxshell_pintle2)
	)
	
	{on fire "mgun3"
		{If tagged "pintle_rhino"	
			{call "sc_stuff_call_fire_weapon_fx_pintle_rhino"}
			{Call "sc_stuff_call_fire_Play_loop_sound_pintle_rhino"}
		}
	}
	
	; <<<<	===================	SM Rhino : Remote Weaponry 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(rhino_Stormbolter) tag(rhino_Stormbolter) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(rhino_Stormbolter)
		d1(0.2)	fx1(flash_hb) b1(foresight_rhino_sb) 
		d2(0.05) fx2(shell_heavybolter) b2(fxshell_rhino_sb1)
		d3(0.05) fx3(shell_heavybolter) b3(fxshell_rhino_sb2)
	)
	
	{on fire "mgun"
		{If tagged "rhino_stormbolter"	
			{call "sc_stuff_call_fire_weapon_fx_rhino_Stormbolter"}
			{Call "sc_stuff_call_fire_Play_loop_sound_rhino_Stormbolter"}
		}
	}
}