
;	<<<< ----------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - IG Cannons ===============] >>
;	<<<<------------------------------------------------------------------------------------>>>>			 

{"ig_Cannons"
	{on spawn	;{}

		{add_view "fx_ls_red_small"	"fx_vehicle_light"	"fx_emp"}
		{view start "fx_vehicle_light"}
		
		{if prop "igc_emp_heavybolter"
			{Call "sc_stuff_call_add_weapon_fx_heavybolter"}
		}
		{if prop "igc_emp_lascannon"
			{Call "sc_stuff_call_add_weapon_fx_lascannon"}
		}
		{if prop "igc_emp_missile"
			{Call "sc_stuff_call_add_weapon_fx_missile"}
		}
		{if prop "igc_emp_autocannon"
			{Call "sc_stuff_call_add_weapon_fx_autocannon"}
		}
	}
	
	; <<<<	===================	Emplacement : Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(heavybolter) d1(0.2) fx1(flash_hb) b1(foresight_hb) d2(0.2) fx2(shell_heavybolter) b2(fxshell_hb))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(autocannon) d1(0.4) fx1(tank_canon_fire_20_25_auto) b1(foresight_ac) d2(0.2) fx2(shell_ac_hydra) b2(fxshell_ac))

	{on fire "mgun"		; {}
	
		{if prop "igc_emp_heavybolter"
			{call "sc_stuff_call_fire_weapon_fx_heavybolter"}
			{ani_play "fire_hb"}
		}
		{if prop "igc_emp_autocannon"
			{call "sc_stuff_call_fire_weapon_fx_autocannon"}
			{ani_play "fire_ac"}
		}
		{if prop "igc_emp_lascannon"
			{spawn "flash_lascannon_big" "foresight_las" x}
		}
	}
}