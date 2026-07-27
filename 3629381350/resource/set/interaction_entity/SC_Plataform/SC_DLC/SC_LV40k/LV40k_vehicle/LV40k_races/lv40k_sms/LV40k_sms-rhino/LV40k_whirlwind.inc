
;	<<<< ------------------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Space Marines Rhino and All Variants ===============] >>
;	<<<<-------------------------------------------------------------------------------------------------------------->>>>			 

{"sm_Whirlwind"
	{on spawn 
		{if tagged "whirlwind_Stalker"
			{Call "sc_stuff_call_add_weapon_fx_stalker_1"}
			{Call "sc_stuff_call_add_weapon_fx_stalker_2"}
			
			{add_view "fx_ant_flsah_blu_01"		"SC_vh_lights_crew"	"fx_Radar"}
			
			{add_view "fx_ls_red_med"		"SC_vh_lights_crew"	"fx_stalker5"}
			{add_view "fx_ls_red_med"		"SC_vh_lights_crew"	"fx_stalker1"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_stalker2"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_stalker3"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_stalker4"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_stalker6"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_stalker7"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_stalker8"}
			
		else tagged "whirlwind_Artillery"
			{Call "sc_stuff_call_add_cannon_fx_main_whirlwhind"}
			
			{add_view "fx_ls_red_med"		"SC_vh_lights_crew"	"fx_whirlwind2"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_whirlwind3"}
			{add_view "fx_glow_green_small"	"SC_vh_lights_crew"	"fx_whirlwind1"}
		
		else tagged "whirlwind_Hunter"
			{Call "sc_stuff_call_add_cannon_fx_main_hunter"}
			
			{add_view "fx_ls_red_med"		"SC_vh_lights_crew"	"fx_hunter1"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_hunter2"}
			{add_view "fx_glow_red_small"	"SC_vh_lights_crew"	"fx_hunter3"}
		}
	}
	
	; <<<<	===================	SM Whirlwind : Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_whirlwhind) d1(1.0) fx1() b1())
	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_hunter) d1(1.0) fx1(tank_canon_fire_85_93) b1(foresight_hunter))
	
	; // Stalker
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(stalker_1) d1(0.2) fx1(flash_hb) b1(Foresight_L))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(stalker_2) d1(0.2) fx1(flash_hb) b1(Foresight_R))
	
	{on fire "gun"
		{if tagged "whirlwind_Hunter"
			{call "sc_stuff_call_fire_Cannon_fx_main_Hunter"}
			{Ani_play "hit"}
			{Ani_play "fire_hunter"}

		else tagged "whirlwind_Artillery"
			{call "sc_stuff_call_fire_Cannon_fx_main_whirlwhind"}
			{Ani_play "hit"}

			{if name "00" 	{spawn "bazooka_shot" "barrel_ww00" x}
			else name "01"	{spawn "bazooka_shot" "barrel_ww01" x}
			else name "02"	{spawn "bazooka_shot" "barrel_ww02" x}
			else name "03"	{spawn "bazooka_shot" "barrel_ww03" x}
			else name "04"	{spawn "bazooka_shot" "barrel_ww04" x}
			else name "05"	{spawn "bazooka_shot" "barrel_ww05" x}
			}
		}
	}
	{on fire "gun1"
		{if tagged "whirlwind_Stalker"
			("SC_Misc_Define_Gun_Rev_Animation" args stalker_1)	{call "sc_stuff_call_fire_weapon_fx_stalker_1"}
		}
	}
	{on fire "gun2"
		{if tagged "whirlwind_Stalker"
			("SC_Misc_Define_Gun_Rev_Animation" args stalker_2)	{call "sc_stuff_call_fire_weapon_fx_stalker_2"}
		}
	}
}