
;	<<<< ------------------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Space Marines Rhino and All Variants ===============] >>
;	<<<<-------------------------------------------------------------------------------------------------------------->>>>			 

{"sm_Vindicator"
	{on spawn 
		{if tagged "vindicator_Stormbolter"
			{call "sc_stuff_call_add_weapon_fx_vindicator_Stormbolter"}
			{call "sc_stuff_call_add_loop_fire_sound_vindicator_Stormbolter"}
		}
		{Call "sc_stuff_call_add_cannon_fx_main_vindicator"}
		
		{add_view "fx_ls_red_med"	"SC_vh_lights_crew"	"fx_vindicator"}
	}
	
	; <<<<	===================	SM Vindicator : Main Weaponry 	===================	>>>>

	("SC_Misc_Define_Add_Cannon_Muzzle" size(maximum) gun_name(main_vindicator) d1(1.0) fx1(tank_canon_fire_170_210) b1(Foresight_Demolisher))
	
	{on fire "gun"
		{Ani_play "hit"}
		{Ani_play "fire"}
		
		{call "sc_stuff_call_fire_Cannon_fx_main_vindicator"}
	}

	; <<<<	===================	SM Vindicator : Pintle Mounts 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound" gun_name(vindicator_Stormbolter) tag(vindicator_Stormbolter) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v1) stop_delay(0.2))
	
	("SC_Misc_Define_Add_Weapon_Muzzle" gun_name(vindicator_Stormbolter)
		d1(0.2)	fx1(flash_hb) b1(foresight_sb_vindicator) 
		d2(0.05) fx2(shell_heavybolter) b2(fxshell_vindicator_sb1)
		d3(0.05) fx3(shell_heavybolter) b3(fxshell_vindicator_sb2)
	)
	{on fire "mgun"
		{If tagged "vindicator_stormbolter"	
			{call "sc_stuff_call_fire_weapon_fx_vindicator_Stormbolter"}
			{Call "sc_stuff_call_fire_Play_loop_sound_vindicator_Stormbolter"}
		}
	}
}