
;	<<<< ------------------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Space Marines Rhino and All Variants ===============] >>
;	<<<<-------------------------------------------------------------------------------------------------------------->>>>			 

{"SM_damocles"
	{on spawn 
		{Call "sc_stuff_call_add_cannon_fx_main_Damocles"}
		
		{add_view "eyes_b"					"SC_vh_lights_crew"		"fx_damocles0"}
		{add_view "fx_ant_flsah_blu_01"		"SC_vh_lights_crew"		"fx_damocles0"}
		{add_view "fx_ls_red_med"			"SC_vh_lights_crew"		"fx_damocles4"}
		{add_view "fx_glow_red_med"			"SC_vh_lights_crew"		"fx_damocles1"}
		{add_view "fx_glow_red_med"			"SC_vh_lights_crew"		"fx_damocles2"}
		{add_view "fx_glow_red_small"		"SC_vh_lights_crew"		"fx_damocles3"}
		{add_view "fx_glow_red_small"		"SC_vh_lights_crew"		"fx_damocles5"}
	}
	
	; <<<<	===================	SM Damocles : Main Weaponry 	===================	>>>>

	
	{on fire "gun"
		; [...]
	}
}