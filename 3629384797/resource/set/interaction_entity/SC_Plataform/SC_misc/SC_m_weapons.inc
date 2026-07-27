
;	<<<<----------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: Misc Defines - Weapons ===============] >>
;	<<<<----------------------------------------------------------------------------------------->>>>			 

; ============================================================================================================================================ ;
; // Weapon Definitions
; ============================================================================================================================================ ;

(define "SC_Misc_Define_Add_Weapon_Loop_Sound"
	{on "sc_stuff_call_add_loop_fire_sound_%gun_name"
		{link_sound "SC_fire_loop_d1_%gun_name"			"weapon/shot/%snd/d1/loop"}
	}
	{on "sc_stuff_call_fire_Play_loop_sound_%gun_name" 
		{if not tagged "SC_Stuff_Tag_Loop_Sound_Started_%gun_name"
			{tags add "SC_Stuff_Tag_Loop_Sound_Started_%gun_name"}
			{start_sound "weapon/shot/%snd/d1/in" use_position}
		}
		{if not tagged "SC_Stuff_Tag_Loop_Sound_On_%gun_name"
			{tags add "SC_Stuff_Tag_Loop_Sound_On_%gun_name"}
			{play_sound "SC_fire_loop_d1_%gun_name" 1}
		}
		{kill_delay "delay_stop_%tag"}			; <_ causing issues
		{delay %stop_delay "delay_stop_%tag"
;//			{delay 0.05 "delay_stop_%tag"
				{stop_sound "SC_fire_loop_d1_%gun_name"}
;//			}
			{kill_delay "delay_loop_%tag"}
			{kill_delay "delay_mask"}
			{tags remove "SC_Stuff_Tag_Loop_Sound_On_%gun_name"}
			{tags remove "SC_Stuff_Tag_Loop_Sound_Started_%gun_name"}
			{start_sound "weapon/shot/%snd/d1/out" use_position}
		}
	}
)

;("SC_Misc_Define_Add_Weapon_Loop_Sound"
;	gun_name()
;	tag()
;	snd()
;	stop_delay()
;)

; --------------------------------------------------------------------------------------------------- ;

(Define "SC_Misc_Define_Add_Weapon_Muzzle"
	{on "sc_stuff_call_add_weapon_fx_%gun_name"
		{add_view	"%fx1"		"SC_muzzle_fx_fire1_%gun_name"	"%b1"}
		{add_view	"%fx2"		"SC_muzzle_fx_fire2_%gun_name"	"%b2"}
		{add_view	"%fx3"		"SC_muzzle_fx_fire3_%gun_name"	"%b3"}
		{add_view	"%fx4"		"SC_muzzle_fx_fire4_%gun_name"	"%b4"}
		{add_view	"%fx5"		"SC_muzzle_fx_fire5_%gun_name"	"%b5"}
	}	
	{on "sc_stuff_call_fire_weapon_fx_%gun_name"
		{view start "SC_muzzle_fx_fire1_%gun_name"}
		{delay %d1	{view pause "SC_muzzle_fx_fire1_%gun_name"}}
		
		{view start "SC_muzzle_fx_fire2_%gun_name"}
		{delay %d2	{view pause "SC_muzzle_fx_fire2_%gun_name"}}
		
		{view start "SC_muzzle_fx_fire3_%gun_name"}
		{delay %d3	{view pause "SC_muzzle_fx_fire3_%gun_name"}}
		
		{view start "SC_muzzle_fx_fire4_%gun_name"}
		{delay %d4	{view pause "SC_muzzle_fx_fire4_%gun_name"}}
		
		{view start "SC_muzzle_fx_fire5_%gun_name"}
		{delay %d5	{view pause "SC_muzzle_fx_fire5_%gun_name"}}
	}
)

; ("SC_Stuff_Define_Weapon_Add_Muzzle_FX" 
;	gun_name(mgun1)
;	d1(0.2) fx1(flash_ork)			b1(foresight_shoota_l)
;	d2(0.1) fx2(shell_shoota_big)	b2(fx_shell_shoota_left)

; --------------------------------------------------------------------------------------------------- ;

; size: // maximum, large, medium, small, minimum, zenite

(Define "SC_Misc_Define_Add_Cannon_Muzzle"
	{on "sc_stuff_call_add_cannon_fx_%gun_name"
		{add_view "tank_fire_%size_dust_ground_rain"	"%size_ground_r_fx"	"basis"}
		{add_view "tank_fire_%size_dust_ground"			"%size_ground_fx"	"basis"}
		{add_view "tank_fire_%size_dust_sand_rain"		"%size_sand_r_fx"	"basis"}
		{add_view "tank_fire_%size_dust_sand"			"%size_sand_fx"		"basis"}
		{add_view "tank_fire_%size_dust_snow"			"%size_snow_fx"		"basis"}
		
		{add_view	"%fx1"		"SC_muzzle_fx_fire1_%gun_name"	"%b1"}
		{add_view	"%fx2"		"SC_muzzle_fx_fire2_%gun_name"	"%b2"}
		{add_view	"%fx3"		"SC_muzzle_fx_fire3_%gun_name"	"%b3"}
		{add_view	"%fx4"		"SC_muzzle_fx_fire4_%gun_name"	"%b4"}
		{add_view	"%fx5"		"SC_muzzle_fx_fire5_%gun_name"	"%b5"}
	}	
	{on "sc_stuff_call_fire_cannon_fx_%gun_name"
		{call "%size_terrain_fx"}
	
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	
		;//{view start "flashbarrel1"}
		;//{view start "flashbarrel1smoke"}
		
		{view start "SC_muzzle_fx_fire1_%gun_name"}
		{delay %d1	{view pause "SC_muzzle_fx_fire1_%gun_name"}}
		
		{view start "SC_muzzle_fx_fire2_%gun_name"}
		{delay %d2	{view pause "SC_muzzle_fx_fire2_%gun_name"}}
		
		{view start "SC_muzzle_fx_fire3_%gun_name"}
		{delay %d3	{view pause "SC_muzzle_fx_fire3_%gun_name"}}
		
		{view start "SC_muzzle_fx_fire4_%gun_name"}
		{delay %d4	{view pause "SC_muzzle_fx_fire4_%gun_name"}}
		
		{view start "SC_muzzle_fx_fire5_%gun_name"}
		{delay %d5	{view pause "SC_muzzle_fx_fire5_%gun_name"}}
	}
)

; ("SC_Stuff_Define_Weapon_Add_Muzzle_FX" 
;	size(maximum)
;	gun_name(mgun1)
;	d1(0.2) fx1(flash_ork)			b1(foresight_shoota_l)
;	d2(0.1) fx2(shell_shoota_big)	b2(fx_shell_shoota_left)

; ============================================================================================================================================ ;
; // Bullet Slicer Spawner
; ============================================================================================================================================ ;

(Define "SC_Misc_Define_Spawn_Slicer"
	{spawn "%object" "%where" x
;		{impulse forward %distance_m rnd_dir %spread com}
;		{gravity (* %gravity 0.8)}
;		{linear_damping 0}
	}
)

; ("SC_Misc_Define_Spawn_Slicer" object() where(foresight3) distance_m(40) gravity(1.0) spread(0.01)) 

; ============================================================================================================================================ ;
; // Minigun-Like Rev Animator Helper Function
; ============================================================================================================================================ ;

(Define "SC_Misc_Define_Gun_Rev_Animation"
	{ani_stop "rev_stop_%0"}
	
	{if not tagged "rev_%0" 
		{tags add "rev_%0"}
		{ani_play "rev_loop_%0" loop}
	}
	{delay 1.2
		{tags remove "rev_%0"}
		{ani_stop "rev_loop_%0"}
	;	{ani_play "rev_stop_%0"}
	}
)

; ("SC_Misc_Define_Gun_Rev_Animation" args punisher)