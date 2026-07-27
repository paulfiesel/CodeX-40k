
;	<<<< ------------------------------------------------------------------------------------------------>>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Rhino: Razorback Variant ===============] >>
;	<<<<------------------------------------------------------------------------------------------------->>>>			 

{"sm_Razorback"
	{on spawn 
		{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fx_razorback1"}
		
		{if tagged "razorback_HB"
			{call "sc_stuff_call_add_weapon_fx_razorback_HB00"}
			{call "sc_stuff_call_add_weapon_fx_razorback_HB01"}
			{call "sc_stuff_call_add_loop_fire_sound_razorback_HB"}
		}
		{if tagged "razorback_LC"
			{call "sc_stuff_call_add_weapon_fx_razorback_LC00"}
			{call "sc_stuff_call_add_weapon_fx_razorback_LC01"}
		}
		{if tagged "razorback_Flamer"
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights_crew"	"barrel_flamer00"} 
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights_crew"	"barrel_flamer01"} 
			{add_view "flamer_fire_barrel_blue"	"SC_vh_lights_crew"	"fx_flamer00"} 
			{add_view "flamer_fire_barrel_blue"	"SC_vh_lights_crew"	"fx_flamer01"} 
			
			{Call "sc_stuff_call_add_loop_fire_sound_razorback_Flamer"}
			{Call "sc_stuff_call_add_weapon_fx_razorback_flamer00"}
			{Call "sc_stuff_call_add_weapon_fx_razorback_flamer01"}
		}
	}
	
	; <<<<	===================	SM Razorback : Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(razorback_HB) tag(razorback_HB) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v2) stop_delay(0.2))
	
	; // Heavy Bolters
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(razorback_HB00) d1(0.2) fx1(flash_hb) b1(barrel_hb00) d2(0.05) fx2(shell_bolter) b2(fxshell_hb00))
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(razorback_HB01) d1(0.2) fx1(flash_hb) b1(barrel_hb01) d2(0.05) fx2(shell_bolter) b2(fxshell_hb01))
	
	; // Heavy Flamer
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(razorback_flamer) tag(razorback_flamer) snd(SC_DLC_LV40k/smallarms/lp_flamer_heavy_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(razorback_flamer00) d1(0.2) fx1(fx_arcflamer_01) b1(barrel_flamer00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(razorback_flamer01) d1(0.2) fx1(fx_arcflamer_01) b1(barrel_flamer01))
	
	{on fire "gun"
		{if tagged "razorback_HB"
			{call "sc_stuff_call_fire_Play_loop_sound_razorback_HB"}
				
			{if name "00"	{call "sc_stuff_call_fire_weapon_fx_razorback_HB00"}
			else name "01"	{call "sc_stuff_call_fire_weapon_fx_razorback_HB01"}
			}
		}
		{if tagged "razorback_Flamer"
			{call "sc_stuff_call_fire_Play_loop_sound_razorback_flamer"}
				
			{if name "00"	{call "sc_stuff_call_fire_weapon_fx_razorback_flamer00"} ("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(barrel_flamer00) distance_m(40) gravity(1.0) spread(2.5)) 
			else name "01"	{call "sc_stuff_call_fire_weapon_fx_razorback_flamer01"} ("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(barrel_flamer01) distance_m(40) gravity(1.0) spread(2.5)) 
			}
		}
		{if tagged "razorback_LC"
			{if name "00"	{spawn "flash_lascannon_big" "barrel_lsc00" x}
			else name "01"	{spawn "flash_lascannon_big" "barrel_lsc01" x}
			}
		}
	}
}