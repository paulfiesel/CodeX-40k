
;	<<<<----------------------------------------------------------->>>>		 
;	<< [=============== SC Slicers: Flamethrower ==================] >> 
;	<<<<----------------------------------------------------------->>>>			 

{"SC_plataform_prop_new_flamer"
	{on spawn
		{gravity 1}
		
		; // BUZZ: prevents the particle volume from instantly colliding with the caller when spawned.
		{volumes "body" disable contact} {delay 0.05 {volumes "body" enable contact}}

		{if prop "flames_size4"		{impulse forward 50 rnd_dir 0.04}	{gravity 2.1}	{linear_damping 0}	{delay 1.5		{call "air_end"}}	; // Inferno
		else prop "flames_size3"	{impulse forward 50 rnd_dir 0.03}	{gravity 2.1}	{linear_damping 0}	{delay 1.25		{call "air_end"}}	; // Heavy flamer t2
		else prop "flames_size2"	{impulse forward 45 rnd_dir 0.02}	{gravity 1.4}	{linear_damping 0}	{delay 1.0		{call "air_end"}}	; // Heavy flamer t1
		else prop "flames_size1"	{impulse forward 40 rnd_dir 0.01}	{gravity 0.8}	{linear_damping 0}	{delay 0.75		{call "air_end"}}	; // Regular flamer 
		}
		{delay 0.1
			{if prop "flames_size4"		{fire radius 2.25 time 1.5 heating 1.0 follow}
			else prop "flames_size3"	{fire radius 1.75 time 1.25 heating 0.9 follow}
			else prop "flames_size2"	{fire radius 1.25 time 1.0 heating 0.75 follow}
			else prop "flames_size1"	{fire radius 1 time 0.7 heating 0.65 follow}
			}
		}
		
		; // BUZZ: Add FX
		{delay 0.15 0.05
			{add_view "fire_flame_thrower_fly4" "fire1" "root"}	
			{view start "fire1"}	; // STAGE 1
		}
		{delay 0.3 0.05
			{add_view "fire_flame_thrower_fly4_1" "fire2" "root"}
			{view stop "fire1"}
			{view start "fire2"}	; // STAGE 2
		}
	}
	
	; <<<<	=================== Flamers: Contact	===================	>>>>
	
	{on contact
		{if not tagged "cooldown"
			{if prop "flames_size4"		{fire radius 2.25 time 1.5 heating 1.0 follow}
			else prop "flames_size3"	{fire radius 1.75 time 1.25 heating 0.9 follow}
			else prop "flames_size2"	{fire radius 1.25 time 1.0 heating 0.75 follow}
			else prop "flames_size1"	{fire radius 1 time 0.7 heating 0.65 follow}
			}
		}
		{if effector "human"
			{tags add "cooldown"} {delay 0.05 {tags remove "cooldown"} 	{volumes enable contact}}
		else effector "SC_plataform_prop_troopers_size1"
			{tags add "cooldown"} {delay 0.05 {tags remove "cooldown"} 	{volumes enable contact}}
		else effector "SC_plataform_prop_troopers_size2"
			{tags add "cooldown"} {delay 0.05 {tags remove "cooldown"} {volumes enable contact}}
		else
			{call "air_end"}
		}
		{if rand 0.1 {call_synced "spawn_hit_air"}}		; // BUZZ: <- small effect to signalize hit.
		{volumes disable contact} 
	}
	
	; <<<<	=================== Flamers: End	===================	>>>>
	
	{on grounded on			;// entity completely stopped moving on the ground and physics is disabled
		; [...]
	}
	{on ground_hit
		{call "ground_end"}
	}
	{on "ground_end"
		{if under_water
			; [...]
		else terrain_fx "water"
			; [...]
		else terrain_fx "shallow_water"
			; [...]
		else
			{spawn "fire_flame_thrower" dir_velocity}
			{if rand 0.1 {call_synced "spawn_hit_ground"}}
		}
		{call "air_end"}
	}
	{on "air_end"
		{view stop "fire1"}
		{view stop "fire2"}
		{delay 0.01	{delete}}
	}
	
	; <<<<	=================== Flamers: Hit FX	===================	>>>>
	
	{on "spawn_hit_air"
		{if prop "flames_size4"		{spawn "thermal_hit_big"}
		else prop "flames_size3"	{spawn "melta_hit_air_min"}
		else prop "flames_size2"	{spawn "pyro_hit_min_air"}
		else prop "flames_size1"	{spawn "pyro_hit_min_air"}
		}
	}
	{on "spawn_hit_ground"
		{if prop "flames_size4"		{fire radius 2.0 time 20 heating 1.0 follow}
		else prop "flames_size3"	{fire radius 1.8 time 20 heating 0.75 follow}
		else prop "flames_size2"	{fire radius 1.4 time 20 heating 0.5 follow}
		else prop "flames_size1"	{fire radius 1.2 time 20 heating 0.25 follow}
		}
		{spawn "fire_flame_thrower_ground" offset 0 0 -5}
		{spawn "burned_spot01" random_orientation}
	}
}

;	<<<<------------------------------------------------------------------------>>>>		 
;	<< [=============== SC Slicers: Gas/Poison/Toxic Clouds ==================] >> 
;	<<<<------------------------------------------------------------------------>>>>			 

{"SC_plataform_prop_new_gas"		
	{on spawn
		{gravity 0}
		
		; // BUZZ: prevents the particle volume from instantly colliding with the caller when spawned.
		{volumes "body" disable contact} {delay 0.05 {volumes "body" enable contact}}
		
		{if prop "@@@"
		else prop "lv40k_bullet_venomthrope" {impulse forward 36 rnd_dir 0.01 com} {gravity 1.0} {linear_damping 0} {delay 1.5 {call "air_end"}}
		}
		
		; // BUZZ: Add FX
		{delay 0.15 0.05
			{if prop "@@@"
			else prop "lv40k_bullet_venomthrope" {add_view "midges_pluge" "fire1" "root"}
			}
			{view start "fire1"}	; // STAGE 1
		}
		{delay 0.3 0.05
			{if prop "@@@"
			else prop "lv40k_bullet_venomthrope" {add_view "midges_pluge" "fire2" "root"}
			}
			{view stop "fire1"}
			{view start "fire2"}	; // STAGE 2
		}
	}
	
	; <<<<	=================== Gas: Contact	===================	>>>>
	
	{on contact
		{if effector "SC_prop_infantry_generic"
			; [...]
		else effector "vehicle"
			; [...]
		else
			{volumes disable contact}
			{call "air_end"}
		}
	}
	
	; <<<<	=================== Flamers: End	===================	>>>>
	
	{on grounded on			;// entity completely stopped moving on the ground and physics is disabled
		; [...]
	}
	{on ground_hit
		{call "ground_end"}
	}
	{on "ground_end"
		{Call "air_end"}
	}
	{on "air_end"
		{view stop "fire1"}
		{view stop "fire2"}
		{delay 0.01	{delete}}
	}
}
