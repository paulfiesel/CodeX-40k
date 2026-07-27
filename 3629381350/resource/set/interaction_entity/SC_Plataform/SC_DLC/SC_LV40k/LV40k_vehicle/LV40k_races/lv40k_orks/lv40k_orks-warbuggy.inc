
;	<<<< ------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Ork Warbuggy ===============] >>
;	<<<<-------------------------------------------------------------------------------------->>>>			 

{"ork_Warbuggy"
	{on spawn 
		{add_view "ch_vehicle_start"	"exhaust" "fxsmoke1"}
		{add_view "ch_vehicle_start"	"exhaust2" "fxsmoke1"}
		
		; ===================== SHOOTAS VARIANT
		{If tagged "Shoota"
			{Call "sc_stuff_call_add_weapon_fx_shoota_c00"}
			{Call "sc_stuff_call_add_weapon_fx_shoota_c01"}
			{Call "sc_stuff_call_add_loop_fire_sound_shoota_c"}
		}
		
		; ===================== BURNAS VARIANT
		{If tagged "Burna"
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights_crew"	"barrel00"} 
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights_crew"	"barrel01"} 
			{Call "sc_stuff_call_add_weapon_fx_burna"}
			{Call "sc_stuff_call_add_loop_fire_sound_burna"}
		}
		
		; ===================== ZZAP VARIANT
		{If tagged "Zzap"
			{add_view "fx_glow_gold_med"	"SC_vh_lights_crew"	"fx_zzap01"} 
			{add_view "fx_glow_gold_med"	"SC_vh_lights_crew"	"fx_zzap02"} 
			{add_view "fx_glow_gold_small"	"SC_vh_lights_crew"	"fx_zzap03"} 
			{add_view "fx_glow_gold_small"	"SC_vh_lights_crew"	"fx_zzap04"} 
		}
	}
	{on destroy
		{if component "body" {physics_work 1}}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_warbuggy/stop"}
		{link_sound "engine_idle"		"vehicle/engine/s60/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_warbuggy/Full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Wartrukk/exhaust"}
		{link_sound "move"				"vehicle/wheels/car"}
		{link_sound "brake"				"vehicle/wheels/brake"}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Weapons Sounds and FX 	===================	>>>>
	
	{on "reload"
		{if tagged "rokkit"
			{Delay 5.0 	{bone show "Rokkit1"}	{bone show "Rokkit2"}	{bone show "Rokkit3"}}
		else tagged "zzap"
			{view start "reload_fx"} {delay 6.0 {view pause "reload_fx"}}
		}
	}
	
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shoota_c00)	d1(0.3) fx1(flash_ork)	b1(barrel00) d2(0.2) fx2(shell_shoota)	b2(fxshell00))
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(shoota_c01)	d1(0.3) fx1(flash_ork)	b1(barrel01) d2(0.2) fx2(shell_shoota)	b2(fxshell01))
	
	(define "fire_barrel"
		name "%0"
			{call "sc_stuff_call_fire_weapon_fx_%1%0"}
	)	
	(define "fire_barrel_anm"
		name "%0"
			{call "sc_stuff_call_fire_weapon_fx_%1%0"}
			{ani_play "%2_%0"}
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound" 
		gun_name(shoota_c)
		tag(lv40k_shoota_kustom)
		snd(SC_DLC_LV40k/smallarms/lp_kustom_Shoota_v1)
		stop_delay(0.2)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(burna)
		d1(0.2) fx1(ch_vehicle_start)			b1(foresight7)
		d2(0.2) fx2(flamer_fire)				b2(foresight7)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(burna)
		tag(burna)
		snd(SC_DLC_LV40k/smallarms/lp_flamer_v1)  
		stop_delay(0.2)
	)
	
	{on fire "mgun"
		{if tagged "zzap"
			{spawn "flash_lascannon_orks" "foresight_zzap" x}
		else tagged "burna"
			{call "sc_stuff_call_fire_Play_loop_sound_burna"}
			{call "sc_stuff_call_fire_weapon_fx_burna"}
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight7) distance_m(40) gravity(1.0) spread(1.0)) 
			("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight7) distance_m(40) gravity(1.0) spread(3.0)) 
			
		else tagged "shoota"
			{if	 ("fire_barrel" args 00 shoota_c)
			else ("fire_barrel" args 01 shoota_c)
			}
			{call "sc_stuff_call_fire_Play_loop_sound_shoota_c"}
		else tagged "rokkit"	
			{if tagged "fire_rokkit_02"		{tags remove "fire_rokkit_02"}		{bone hide "Rokkit3"}	{spawn "bazooka_shot_small" "foresight_rokkit" x}	
			else tagged "fire_rokkit_01"	{tags remove "fire_rokkit_01"}		{bone hide "Rokkit2"}	{spawn "bazooka_shot_small" "foresight_rokkit" x}	{tags add "fire_rokkit_02"}	
			else							{tags add "fire_rokkit_01"}			{bone hide "Rokkit1"}	{spawn "bazooka_shot_small" "foresight_rokkit" x}	
			}
		}
	}
}