{"airborne_helicopter"
	{on spawn overload
		{link_sound "fall"				"vehicle/airborne/fw_deep"}
		{link_sound "bounds"			"world/plane/bounds_warning"}
		{link_sound "false_start"		"vehicle/airborne/false_start"}
		{link_sound "bkg_plane"			"vehicle/airborne/bkgheli/"}
		{link_sound "bkg_gun"			"weapon/shot/bkg/auto/"}
		{link_sound "bkg_mgun"			"weapon/shot/bkg/gun/mg/"}

		{link_sound "engine_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "fly"					"vehicle/airborne/uh1h_move"}
		{link_sound "engine_work"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_stop"			"vehicle/airborne/uh1h_stop"}
		{link_sound "attack"				"vehicle/airborne/uh1h_move"}

		{add_view	"exhaust_dark_big"	"engine_exhaust"		"engine"	}

		{add_view "aircraft_damage_big"		"heavy_body_smoke"	"body"}
		{add_view "aircraft_damage_medium"	"medium_body_smoke"	"body"}
		{add_view "aircraft_damage_small"	"light_body_smoke"	"body"}

		{add_view "aircraft_damage_big"		"heavy_engine_smoke"	"engine"}
		{add_view "aircraft_damage_medium"	"medium_engine_smoke"	"engine"}
		{add_view "aircraft_damage_small"	"light_engine_smoke"	"engine"}

		{add_view "aircraft_damage_big"		"heavy_rotor_smoke"		"rotor"}
		{add_view "aircraft_damage_medium"	"medium_rotor_smoke"	"rotor"}
		{add_view "aircraft_damage_small"	"light_rotor_smoke"		"rotor"}

		{add_view "aircraft_damage_big"		"heavy_rotorb_smoke"	"rotor_b"}
		{add_view "aircraft_damage_medium"	"medium_rotorb_smoke"	"rotor_b"}
		{add_view "aircraft_damage_small"	"light_rotorb_smoke"	"rotor_b"}

		{add_view "exhaust_dark_small2_diesel" "smoke_engine1" 		"fxsmoke1"}
		{add_view "exhaust_dark_small2_diesel" "smoke_engine2" 		"fxsmoke2"}

		{add_view "spheredust_heli" 		"ground_dust" 			"basis"}

		{call "init_gun"}

		;(mod "mp" {call "engine_on"})
	}

	{##on "wheels_fx" overload
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}

	{on "add_trace" overload ;// adds fx during engine toggle on and landing
		{if not rain
		}
		{add_view	"spheredust_heli"	"dust_heli"			"basis"}
	}

	{on "stop_trace" overload					;// stops wheel & all engine fx on takeoff.
		{view stop "dust_heli"}
	}

	(define "play_trace"					;// starts fx wheel and engine dust fx after landing
		{view start "dust_heli"}
	)

	(define "prop_blast"		;// starts fx engine dust fx after engine starts
		{view start "dust_heli"}
	)

	(define "stop_smoke_fx"
		{view pause "heavy_%0_smoke"}
		{view pause "medium_%0_smoke"}
		{view pause "light_%0_smoke"}
	)

	{on "takeoff"
		{if not dead
			{if operatable
				{call "stop_trace"}
				{if "landing"
					{set "landing" 0}
					{kill_delay "engine_idle"}
					{play_sound "engine_accelerate"}
					{stop_sound "engine_idle"}
					{stop_sound "engine_decelerate"}
					{call "engine_full"}
				}
				{delay 3.5 {call "gear_disable"}}
			}
		}
	}

	{on "engine_full" overload
		{delay 2.5 "engine_full"			;// delay for accelerate sound
			{if not destroyed "engine"
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
		}
	}

	{on "takeoff_load" 	overload	 			;// plane spawns in chassis "airborne"
		{ani_wind "wheels" end}			;// retracts wheels
		{call "gear_disable"}
	}

	{on "gear_disable" overload					;// disables landing gear from being damaged when retracted in plane.
		{volumes "gear" disable blast bullet}
	}

	{on "landing" overload
		{set "landing" 1}
		{ani_play "wheels" -0.2}
		{kill_delay "engine_full"}
		{play_sound "gear_work"}
		{stop_sound "bkg_plane"}
		{stop_sound "engine_accelerate"}
		{stop_sound "engine_full"}
		{play_sound "engine_decelerate"}
		{call "engine_idle_delay"}
		{volumes "gear" enable blast bullet}	;// enables landing gear to be damaged when deployed
	}

	{on "engine_idle_delay"	overload			;// delay for decelerate sound
		{delay 2 "engine_idle"
			{if not destroyed "engine"
				{play_sound "engine_idle" 1}
			}
		}
	}

	{on "engine_toggle" overload			;// UI button to toggle engine on/off
		{if operatable
			{if not work "engine"
				{if "engine_on"
					{call "engine_switch"}
				else
					{play_sound "false_start"}
				}
			else
				{call "engine_switch"}
			}
		}
	}

	{on "engine_switch" overload
		{if "toggle_delay"
			{play_sound "false_start"}
		else "engine_on"
			{call "engine_off"}
		else
			{call "engine_on"}
		}
	}

	{on accelerate on overload} ;// stops extra interaction calls from vehicle.inc

	{on accelerate off overload} ;// stops extra interaction calls from vehicle.inc

	{on move on overload ;// vehicle moves forward or reverse
		{ani_play "accel_tilt"}
		{if not chassis "airborne"
			{if not "landing"
				{kill_delay "engine_decel"}
				{stop_sound "engine_idle"}
				{stop_sound "engine_decelerate"}
				{if "engine_on"
					{play_sound "engine_accelerate"}
					{call "engine_accel"}
				}
			}
		else
			{call "water_check"}		;//checks water level if spawning in air over water
		}
	}

	{on "engine_accel" overload	 					;//delay for accelerate sound
		{delay 3.8 "engine_accel"
			{if not destroyed "engine"
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
			{stop_sound "engine_accelerate"}
		}
	}

	{on move off overload ;// vehicle not moving forward or reverse
		{ani_play "decel_tilt"}
		{if not "landing"
			{kill_delay "engine_accel"}
			{stop_sound "bkg_plane"}
			{stop_sound "engine_full"}
			{stop_sound "engine_accelerate"}
			{if "engine_on"
				{play_sound "engine_decelerate"}
				{call "engine_decel"}
			}
		else
			{set "landing" 0}
		}
	}

	{on "engine_decel" overload					;//delay for decelerate sound
		{delay 3.5 "engine_decel"
			{if "engine_on"
				{if not destroyed "engine"
					{play_sound "engine_idle" 1}
				}
				{stop_sound "engine_decelerate"}
			}
		}
	}

	{on engine on overload			;// any vehicle moves forward, reverse or preforming neutral turn
		{if chassis "airborne"
			{call "engine_on"}		;// turns on engine, for airborne chassis planes when given move order
		else
			{if "landing"
				{call "add_trace"}
				("stop_smoke_fx" args body)
				("stop_smoke_fx" args engine)
				("stop_smoke_fx" args rotor)
				("stop_smoke_fx" args rotorb)
			}
			{if "engine_start"
				("play_trace")
			}
		}
	}

	{on engine off overload} ;// stops extra interaction calls from vehicle.inc

	{on animation_end "engine_start" overload
		{ani_play "engine_work" loop}
		;//{if "engine_on" {stop_sound "engine_stop"}} ;// checks to make sure engine has not been toggled off
		{if not chassis "airborne"
			{call "engine_start"}
		else chassis "airborne"
			{stop_sound "engine_start"}
			{play_sound "bkg_plane" 1}
		}
	}

	{on "engine_start" overload						;// delay for start sound
		{delay 4.5
			{stop_sound "engine_start"}
		}
	}

	{on "engine_on" overload				;// settings for engine when switched on
		{if not "engine_on"
			{if not chassis "airborne"
				{chassis_work 0}
				{set "engine_on" 1}
				{call "engine_start_sequence"}
				{set "toggle_delay" 1}			;// stops accidental double click of UI button
				{delay 5 {set "toggle_delay" 0}}
			else
				{chassis_work 1}
				{set "engine_on" 1}
				{tags remove "splash"}
				{tags remove "engine_turned_off"}
				{ani_play "engine_work" loop}
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
		}
	}

	{on "engine_startup_timer" overload				;// delay for switching from startup to idle state
		(define "engine_startup_timer"
			{delay 5.9 "engine_startup"
				{call "engine_idle"}
			}
		)
	}

	{on "engine_start_sequence" overload				;// start sequence for 1st engine
		{if work "engine"
			{if "engine_on"
				{call "add_trace"}
				{tags remove "engine_turned_off"}
				{tags remove "splash"}
				{ani_play "engine_start" 0.85 callback}
				{view start "engine_exhaust"}
				{play_sound "engine_start"}
				{set "engine_start" 1}
				{delay 1 "engine_startup"
					{view pause "engine_exhaust"}
					{delay 1.5 "engine_startup"
						("prop_blast" number(1))
					}
				}
				("engine_startup_timer" number(1))		;// allows for overload/modified time for each aircrafts complete startup sequence before switching to idle state
			}
		}
	}

	{on "engine_off" overload				;// engine toggled off
		{kill_delay "engine_startup"}		;// stops engine startup sequence
		{if not chassis "airborne"			;// engines can only be toggled when on ground not airborne
			{if "engine_on"
				{if operatable
					;{tags add "engine_turned_off"}
				}
				{set "engine_on" 0}
				{call "engine_stop_sequence"}
				{set "toggle_delay" 1}			;// stops accidental double click of UI button
				{delay 5 {set "toggle_delay" 0}}
				{delay 0.6
					{chassis_work 0}
				}
			}
		}
	}

	{on "engine_stop_sequence" overload				;// engine 1 shutdown sequence
		{stop_sound "engine_accelerate"}
		{stop_sound "engine_decelerate"}
		{stop_sound "engine_start"}
		{stop_sound "bkg_plane"}
		{stop_sound "engine_full"}
		{stop_sound "engine_idle"}
		{kill_delay "engine_accel"}
		{kill_delay "engine_decel"}
		{kill_delay "engine_idle"}
		{if "engine_start"
			{play_sound "engine_stop"}
		}
		{delay 0.6
			{kill_delay "engine_startup"}
			("stop_trace_engine" number(1))
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{if "engine_start"
				{ani_play "engine_stop"}
			}
			{set "engine_start" 0}
		}
	}

	{on "engine_idle" overload ;// settings for engine if it should be on immediately after spawning
		{if work "engine"
			{set "engine_on" 1}
			{set "engine_start" 1}
			{ani_play "engine_work" loop} ;//causes issues with start animation transisiton, but needed for spawns w/ Engine on
			{if not chassis "airborne"
				{play_sound "engine_idle" 1}
				{call "add_trace"}
			else
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
		}
		{if "engine_on"
			{chassis_work 1}
		else
			{chassis_work 0}
		}
	}

	{on "update_moveable" overload
		{tags add "update_move"}
			{delay 5 {tags remove "update_move"}}
		{if chassis "airborne"
			{call "check_work_mover"}
		}
		{inherited}
	}

	{on "check_work_mover" overload
		{if broken "engine"
			{movement_limit slow}
			{tags add "move_slow"}
		else broken "body"
			{movement_limit normal}
			{tags add "move_norm1"}
		else
			{movement_limit fast}
			{tags add "move_fast"}
		}
	}

	{on operatable off overload
		{if not tagged "engine_turned_off" ;// stops engine off sequence from occuring if engine is already turned off.
			{if not chassis "airborne"
				{call "engine_off"}
			}
		}
	}

	{on "check_speed" overload} ;// disabled calls to check speed for dust fx. Planes only have 1 fx

	{on "propeller_stop" overload		;// called on exlosion and ground_hit
		{bone hide "engine_work"}
		{bone hide "rotor_work"}
	}

	{on "engine_not_run" overload		;// instantly stops engines. Called on collosiions, ground_hit, crash and sink.
		{if "engine_on"
			{set "engine_on" 0}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{stop_sound "bkg_plane"}
			{stop_sound "engine_idle"}
			{stop_sound "engine_full"}
			{stop_sound "engine_accelerate"}
			{stop_sound "engine_decelerate"}
			{kill_delay "engine_accel"}
			{kill_delay "engine_decel"}
			{if not tagged "destroyed"
				{ani_play "engine_stop"}
			}
			{delay 0.01
				{ani_stop "engine_stop"}
			}
		}
	}

	{on "engine stop view" overload
		;{call "engine_off"}
	}

	;/*=========== Plane Damage Begin  ===========*/

	{on pierce sync
		{vehicle_health_damage_pierce}
	}

	{on break overload							;// component breaks
		{if not tagged "destroyed"
			{call "update_moveable"}
		}
		{if chassis "airborne"
			{if component "body"
				{view start "light_body_smoke"}

			else component "engine"
				{view start "light_engine_smoke"}

			else component "rotor"
				{view start "light_rotor_smoke"}
			else component "rotor_b"
				{view start "light_rotorb_smoke"}
			else component "wheel"
				{if "engine_on"
					{chassis_work 1} ;// fixes wheel break's "up impluse" from disabling movement on ground
				}
			}
		else
		}
	}

	{on destroy overload				;// component destroyed
		{if not tagged "destroyed"
			{if chassis "airborne"
				{if component "body"
					{call "stat_break"}
					{start_sound "detonation/grenade/"}
					{start_sound "detonation/grenade/bkg/"}
					{if chassis "airborne"
						{call "fall"}
						{view start "heavy_body_smoke"}
					else
						{call "emit_crew"}						;// generic crew emit from vehicle.inc
					}
				else component "engine"
					{view start "heavy_engine_smoke"}
					{delay 1 {view pause "heavy_engine_smoke"}}
					{if chassis "airborne"
						{call "fall"}
					else
						{call "engine_off"}
					}
				else component "rotor"
					{view start "heavy_rotor_smoke"}
					{delay 1 {view pause "heavy_rotor_smoke"}}
					{if chassis "airborne"
						{call "fall"}
					else
						{call "engine_off"}
					}

				else component "rotor_b"
					{view start "heavy_rotorb_smoke"}
					{delay 1 {view pause "heavy_rotorb_smoke"}}
					{if chassis "airborne"
						{call "fall"}
					else
						{call "engine_off"}
					}
					{call "tear_part"}
					;// TODO: Add spinning out of control
				else component "wheel"
					{if "engine_on"
						{chassis_work 1} ;// fixes wheel break's "up impluse" from disabling movement on ground
					}
				}
			}
			{if component "engine"
				{if not tagged "grounded"
					{spawn "aero_die_particle"}
				}
			}
			{if component "part"
				{call "tear_part"}
			}
		}
	}

	{on "fall" overload
		{if chassis "airborne"
			{if not "fall"
				{set "fall" 1}
				{impulse up 0.1 com}
				{explosive 1}
				{play_sound "fall"}
				{view stop "smoke_engine1"}
				{view stop "smoke_engine2"}
				{delay 0.1 
					{weapon_work "gun" 0}
					{weapon_work "mgun" 0}
					{weapon_work "gun2" 0}
					{weapon_work "mgun2" 0}
					{weapon_work "nar1" 0}
					{weapon_work "ptur1" 0}
					{weapon_work "ptur2" 0}
				}
				("stop_damage_sound")
				{call "fall_fx"}
			}
		}
	}

	{on "fall_sound" overload
		{if chassis "airborne"
			{if not tagged "shotdown"
				{play_sound "fall"}
				{tags add "shotdown"}
			}
		}
	}

	{on "fall_fx" overload
		{if not under_water
			{delay 2
				{add_view "smoke_aero_dead_big" "fire" "body"}
				{tags add "heli_fall_fx!!!ordos_debug1111"}
				{view start "fire"}
				{weapon_work "gun2" 0}
				{weapon_work "gun1" 0}
				{weapon_work "gun" 0}
				{delay 10
					{view stop "fire"}
				}
				{burn volume "body" fx "smoke_aero_big" time 10 fake}
				{burn volume "engine" fx "smoke_aero_big" time 10 fake}
				{delay 10.1
					{burn volume "body" fx "smoke_black" time 40 10 fake}
				}
			}
		}
	}

	{on ground_hit overload sync
		{if chassis "airborne"
			{call "collide"}
			{delay 0.5
				{call "_explosion"}
			}
		else
			{if volume "part"
				{call "tear_part"}
			}
			{if volume "rotor"
				{set "engine_start" 0}
				{components "rotor" destroy}
				{call "engine_broken"}
				{tags add "ground_hit_rotor"}
			}
		}
	}

	{on "engine_broken" overload
		{components "engine" break}
		{ani_stop "engine_start"}
		{ani_stop "engine_work"}
		{ani_play "engine_stop"}
		{kill_delay "engine_accel"}
		{kill_delay "engine_decel"}
		{delay 0.01
			{ani_stop "engine_stop"}
		}
	}

	{on contact overload sync
		{if not impregnable
			{if chassis "airborne"
				{if effector "airborne"
					{call "collide"}
					{tags add "mid_air_collision"}
				else effector "vehicle"
					{call "collide"}
				else effector "construction"
					{call "collide"}
				else effector "tree"
					{call "collide"}
				else effector "fence"
					{if volume "part"
						{call "tear_part"}
					}
				}
			else not chassis "airborne"
				{if volume "rotor"
					{if "engine_on"
						{components "engine" break}
					}
					{components "rotor" break}
				else volume "rotor_b"
					{if "engine_on"
						{components "engine" break}
					}
					{components "rotor_b" break}
				}
				{if volume "part"
					{if velocity 40
						{##if effector "vehicle" ;// can't remember why specifics were added
							{call "tear_part"}
						else effector "construction"
							{call "tear_part"}
						else effector "tree"
							{call "tear_part"}
						else effector "fence"
							{call "tear_part"}
						}
						{call "tear_part"}
					}
				}
				{delay 0.5
					{if "engine_on"
						{if work "body"
							{chassis_work 1}
						}
					}
				}
			}
		}
	}

	{on "crash_explosion" overload
		{if not tagged "destroyed"
			{if chassis "airborne"
				{call "_explosion"}
			}
		}
	}

	{on "collide" overload
		{if  volume "body"
			{call "explosion"}
		else volume "part"
			{call "tear_part"}
		}
		{delay 20 {if under_water {delete}}}
	}


	{on "tear_part" overload
		{if not tagged "destroyed"
			;{spawn "spheredust_big_short"}
			{if rand 0.3
				{spawn "aero_die_particle"}
			}
			{if tagged "mid_air_collision"
				{call "bail_out"}
				{tags remove "mid_air_collision"}
			}
			{volume disable contact contact_ground}
			{if volume "wingl1"
				{call "crash"}
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone "wingl2"
						{impulse up 2 1 forward 5 dir 2 1}
					}
				}
			else volume "wingr1"
				{call "crash"}
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone "wingr2"
						{impulse up 2 1 forward 5 dir 2 1}
					}
				}
			else
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone from_volume
						{impulse up 2 1 forward 5 dir 2 1}
					}
				}
			}
			{if volume "gear_r"
				{call "wrecked_gear"}
				{call "crash"}
			else volume "gear_l"
				{call "wrecked_gear"}
				{call "crash"}
			else volume "wingl2"
				{call "crash"}
			else volume "wingr2"
				{call "crash"}
			}
		}
	}

	{on "wrecked_gear" overload
		{if not chassis "airborne"
			{impulse up 0.01 forward 0.01}
		}
	}

	{on "crash" overload
		{if not tagged "destroyed"
			{call "stat_break"}
			{if chassis "airborne"
				{stop_sound "bounds"}
				{impulse up 0.01 forward 0.01}
				{call "fall_sound"}
			else not chassis "airborne"
				{able select 0}
				{able repaired 0}
				{reset_manual_control}
				{delay 2
					{chassis_work 0}
					{crew_emit}
				}
			}
			{delay 0.5
				{tags add "shotdown"}
			}
		}
	}

	{on "check_burn_emit" overload
		{call "burn_emit"}
	}

	(define "burn_part"
		{on "burn_%0_start"
			{add_view "smoke_aero_big"		"fire%0" "fx_fire%0_1"}
			{add_view "smoke_aero_big"		"fire%0" "fx_fire%0_2"}
			{add_view "smoke_aero_big"		"fire%0" "fx_fire%0_3"}
			{add_view "smoke_aero_small"	"fire%0" "fx_smoke%0_1"}
			{add_view "smoke_aero_small"	"fire%0" "fx_smoke%0_2"}
			{add_view "smoke_aero_small"	"fire%0" "fx_smoke%0_3"}
			{view start "fire%0"}
		}
		{on "burn_%0_stop"
			{view stop "fire%0"}
		}
	)
	("burn_part" args 1)
	("burn_part" args 2)
	("burn_part" args 3)
	("burn_part" args 4)

	{on "engine_stop"  overload      ;//immediately kill engine, such as on death
		{kill_delay "engine_stopped"}
		{set "engine_on" 0}
		{ani_stop "engine_start"}
		{ani_stop "engine_work"}
		{ani_play "engine_stop"}
		{stop_sound "engine_start"}
		{stop_sound "uh1h_engine_idle"}
		{stop_sound "uh1h_engine_full"}
		{stop_sound "engine_work"}
		{stop_sound "fly"}
	}

	{on "die" overload
		{chassis_work 0}
		{drop_orders}
		{components destroy}
		{call "engine_stop"}
		{stop_sound "fall"}
		{stop_sound "engine_stop"}
		{explosive 0}
		{burn stop}
		{bone hide "engine_work"}
		{bone hide "propeller_work"}
		{bone hide "propeller_work1"}
		{delay 10
			{blastwave c4 10 r0 10 r1 15}
			{spawn "train_die" "basis"}
			{delay 0.5 {delete}}
		}
	}

	(define "cut_part"
		{if rand %1
			{tear "piece_big_airborne_wing" bone %0
				{impulse up 2 1 dir 2 1}
			}
		}
	)

	{on "_explosion" overload
		{tags add "destroyed"}
		{tags add "ordos_debug_heli"}
		{tags remove "air"}
		{able "exploded" 1}
		{stop_sound "fall"}
		{stop_sound "bounds"}
		{kill_crew}
		{able select 0}
		{able repaired 0}
		{clear_inventory}
		{call "die"}
		{call "propeller_stop"}
		("stop_smoke_fx" args body)
		("stop_smoke_fx" args engine)
		("stop_smoke_fx" args rotor)
		("stop_smoke_fx" args rotorb)
		{if not under_water
			;{add_view "aero_die" "fire" "body"}
			{add_view "aero_die_fire" "fire" "body"}
			{add_view "aero_fire" "fire2" "body"}
			{view start "fire"}
			{view start "fire2"}
			{spawn "aero_die_particle"}
			{spawn "aero_die_particle"}
			{spawn "aero_die_particle"}
		}
		{if not terrain_fx "bridge"
			{if not terrain_fx "bridge_wood"
				{if not under_water
					{call "spawn_shellhole"}
				}
			}
		}


		{impulse up 0.1 com}
		{delay 0.1
			;("cut_part" args "wingr1"		0)
			;("cut_part" args "wingl1"		0)
			("cut_part" args "wingr2"		1)
			("cut_part" args "wingl2"		1)
			("cut_part" args "body_back"	1)
			("cut_part" args "rudder"		0.5)
			("cut_part" args "rudder1"		0.5)
			("cut_part" args "rudder2"		0.5)
			("cut_part" args "elevator1"	0.5)
			("cut_part" args "elevator2"	0.5)
			("cut_part" args "wheelback"	0.5)
			("cut_part" args "gear_l"		0.5)
			("cut_part" args "gear_r"		0.5)
			("cut_part" args "propeller"	0.5)
			("cut_part" args "propeller1"	0.5)
			("cut_part" args "propeller2"	0.5)
			("cut_part" args "propeller3"	0.5)
			("cut_part" args "propeller4"	0.5)
			{volumes "body" enable obstacle}
			{area rebuild}
		}
		{blastwave c4 3 r0 5 r1 15}
	}

	{on "spawn_shellhole" overload	 		;// called on "_explosion"
		{spawn "shellhole_dead_tank2" "basis" random_orientation}
	}

	{on "area_disable" overload
		{area disable}
	}

	{on "area_enable" overload
		{area enable}
	}

	{on "air_attack" overload
		{start_sound "vehicle/other/helicopter/low_pass" ambient}	
		{call "drop_flares"}
		{delay 2
			{call "drop_flares"}
		}
		{delay 4
			{call "drop_flares"}
		}
		{tags add "air_attacking"}
		{delay 5 {tags remove "air_attacking"}}	
	}

	{on "splash_fx" overload
		{if not tagged "splash"
			{if chassis "airborne"
				{spawn "ex_size3_water"}
			else not chassis "airborne"
			}
		}
		{tags add "splash"}
	}

	{on "bail_out" overload
		{delay 0.4 0.15
			(mod not "mp" {crew_emit})
		}
	}

	{on "check_water_level" overload
		{if water_level 5
			{if tagged "splash" {delete}}
			{able "sinking" 1}

		else water_level -0.75
			{able "sinking" 1}
			{reset_manual_control}
			{call "engine_not_run"}
			{call "splash_fx"}
			{delay 1
				{view stop "fire"}
				{stop_sound "flame"}
				{crew_emit}
			}
		else
			{able "sinking" 0}
		}
	}
}

;/*=========== Airborne End  ===========*/

;/*=========== Other Plane Props Begin  ===========*/

;/*============west81 props===============*/
(define "link_damage_sound_rus"
	{link_sound "engine1_damage"	"vehicle/Helicopter_damage/rus/engine1"}
	{link_sound "engine2_damage"	"vehicle/Helicopter_damage/rus/engine2"}
	{link_sound "fuel_tank_damage"	"vehicle/Helicopter_damage/rus/fuel_tank"}
	{link_sound "main_reductor_damage"	"vehicle/Helicopter_damage/rus/main_reductor"}
	{link_sound "propeller_damage"	"vehicle/Helicopter_damage/rus/propeller"}
	{link_sound "tail_shaft_damage"	"vehicle/Helicopter_damage/rus/tail_shaft"}
	{link_sound "apu_damage"	"vehicle/Helicopter_damage/rus/apu"}
	{link_sound "ecm_damage"	"vehicle/Helicopter_damage/rus/ecm"}
	{link_sound "electronics_damage"	"vehicle/Helicopter_damage/rus/electronics"}
	{link_sound "gun_damage"	"vehicle/Helicopter_damage/rus/gun"}
	{link_sound "hydrosystem_damage"	"vehicle/Helicopter_damage/rus/hydrosystem"}
	{link_sound "ols_damage"	"vehicle/Helicopter_damage/rus/ols"}
	{link_sound "prpnk_damage"	"vehicle/Helicopter_damage/rus/prpnk"}
	{link_sound "radar_damage"	"vehicle/Helicopter_damage/rus/radar"}
	{link_sound "spo"	"vehicle/other/Helicopter_damage/rus/spo"}
)

(define "link_damage_sound_usa"
	{link_sound "engine1_damage"	"vehicle/Helicopter_damage/usa/engine1"}
	{link_sound "engine2_damage"	"vehicle/Helicopter_damage/usa/engine2"}
	{link_sound "ecm_damage"	"vehicle/Helicopter_damage/usa/ecm"}
	{link_sound "electronics_damage"	"vehicle/Helicopter_damage/usa/electronics"}
	{link_sound "hydrosystem_damage"	"vehicle/Helicopter_damage/usa/hydrosystem"}
	{link_sound "ols_damage"	"vehicle/Helicopter_damage/usa/ols"}
	{link_sound "radar_damage"	"vehicle/Helicopter_damage/usa/radar"}
	{link_sound "spo"	"vehicle/other/Helicopter_damage/usa/spo"}
)

(define "stop_damage_sound"
	{stop_sound "engine1_damage"	}
	{stop_sound "engine2_damage"	}
	{stop_sound "fuel_tank_damage"	}
	{stop_sound "main_reductor_damage"	}
	{stop_sound "propeller_damage"	}
	{stop_sound "tail_shaft_damage"	}
	{stop_sound "apu_damage"	}
	{stop_sound "ecm_damage"	}
	{stop_sound "electronics_damage"	}
	{stop_sound "gun_damage"	}
	{stop_sound "hydrosystem_damage"	}
	{stop_sound "ols_damage"	}
	{stop_sound "prpnk_damage"	}
	{stop_sound "radar_damage"	}
	{stop_sound "spo"	}
)



;/*=======================================*/

{"airborne no_explosion"
	{on contact
;		{components "wingleft" destroy}
;		{components "wingright" destroy}
	}
	{on ground_hit sync
		{call "die"}
		{impulse up 0.1 com}
		{call "propeller_stop"}
	}
	{on "_explosion" overload
		{call "die"}
		{call "propeller_stop"}
		{impulse up 0.1 com}
		("cut_part" args "wingr2"		0.5)
		("cut_part" args "wingl2"		0.5)
	}
	{on "fall_fx" overload}
}

{"air_part"
	{on spawn
		{delay 0.1
			{volumes enable contact contact_ground}
		}
		{view stop ""}
		{add_view "smoke_black" "smoke" "root"}
		;{view start "smoke"}
		{delay 30 5
			{view stop "smoke"}
		}
		{delay 20 {if under_water {delete}}}
	}
	{on ground_hit
		{if min_speed 5
			;{spawn "spheredust_big_short"}
		}
	}
}

;/*=========== Other Plane Props End  ===========*/

{"para_form_air"

	{on "w81_para"
		{ani_play "doorback"}
		{ani_play "para"}
		{delay 1
			{delay 0.5
				{with_linked_entity "seat00"
					{delay 0.1
						{unlink}
					}
				}
			   {delay 0.5
				{with_linked_entity "seat01"
					{delay 0.1
						{unlink}
					}
				}

					{delay 0.5
						{with_linked_entity "seat02"
							{delay 0.1
								{unlink}
							}
						}

						{delay 0.5
							{with_linked_entity "seat03"
								{delay 0.1
								{unlink}
								}
							}

							{delay 0.5
								{with_linked_entity "seat04"
									{delay 0.1
									{unlink}
									}
								}

								{delay 0.5
									{with_linked_entity "seat05"
										
										{delay 0.1
										{unlink}
										}
									}

									{delay 0.5
										{with_linked_entity "seat06"
											
											{delay 0.1
											{unlink}
											}
										}

										{delay 0.5
											{with_linked_entity "seat07"
												
												{delay 0.1
												{unlink}
												}
											}

											{delay 0.5
												{with_linked_entity "seat08"
													
													{delay 0.1
													{unlink}
													}
												}
												  {delay 0.5
													{with_linked_entity "seat09"
														
														{delay 0.1
														{unlink}
														}
													}
												     {delay 0.5
														{with_linked_entity "seat10"
															
															{delay 0.1
															{unlink}
															}
														}
													  {delay 0.5
														{with_linked_entity "seat11"
															
															{delay 0.1
															{unlink}
															}
														}
														{delay 0.5
														{with_linked_entity "seat12"
															
															{delay 0.1
															{unlink}
															}
														}
													   }
													}
												   }
												}
											}
										}
									}
								}
							}
						}
					}
				    }
				}


		}
		{delay 20

			{ani_play "doorback" -1}
			{ani_play "para" -1}

		}

	}

}

{"ah-1g_airborne"
	{on spawn
		{add_view "flash_gun_hmg_m2hb"			"grenflash"	"foresight1"}
	}
	{on fire "mgun"
		{ani_play "recoil_mini" loop resume}
		{delay 2
			{ani_stop "recoil_mini"}
		}
	}
	{on fire "mgun2"
		{view start "grenflash"}
		{ani_play "recoil_grenade"}
		{delay 0.2
			{view pause "grenflash"}
		}
	}
}

{"uh-1b_m22_airborne"

	{ on spawn
		;("link_damage_sound_rus")
		;{call "altitude_checker"}
		;{view start "smoke_engine1"}
		;{view start "smoke_engine2"}

	}

	{on fire "gun"

		{spawn "proj_probe_extra_big" "foresight1" x}

	}

}

{"uh-1b_maxwell_airborne"

	{ on spawn
		;("link_damage_sound_rus")
		;{call "altitude_checker"}
		;{view start "smoke_engine1"}
		;{view start "smoke_engine2"}

	}

	{on fire "gun"

		{spawn "proj_probe_extra_big" "foresight1" x}

	}

}

{"mil_mi4_heavy_airborne"

	{ on spawn
		;("link_damage_sound_rus")
		;{call "altitude_checker"}
		;{view start "smoke_engine1"}
		;{view start "smoke_engine2"}

	}

	{on fire "gun2"

		{spawn "proj_probe_extra_big" "foresight3" x}
		;{spawn "detector_extra_big" "shooter02" x}

	}

}

{"ah-64_apache_heavy_airborne"

	{on spawn
		{add_view	"tank_canon_fire_20_25_auto"		"flashbarrel1"			"Foresight1"}
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
		{add_view 	"rok_tail" 		"rok_tail00" 		"smoke_a00"}
		{add_view 	"rok_tail" 		"rok_tail01" 		"smoke_a01"}
		{add_view 	"rok_tail" 		"rok_tail02" 		"smoke_a02"}
		{add_view 	"rok_tail" 		"rok_tail03" 		"smoke_a03"}
		{add_view 	"rok_tail" 		"rok_tail04" 		"smoke_a04"}
		{add_view 	"rok_tail" 		"rok_tail05" 		"smoke_a05"}
		{add_view 	"rok_tail" 		"rok_tail06" 		"smoke_a06"}
		{add_view 	"rok_tail" 		"rok_tail07" 		"smoke_a07"}
		{add_view 	"rok_tail" 		"rok_tail08" 		"smoke_a08"}
		{add_view 	"rok_tail" 		"rok_tail09" 		"smoke_a09"}
		{add_view 	"rok_tail" 		"rok_tail10" 		"smoke_a10"}
		{add_view 	"rok_tail" 		"rok_tail11" 		"smoke_a11"}
		{add_view 	"rok_tail" 		"rok_tail12" 		"smoke_a12"}
		{add_view 	"rok_tail" 		"rok_tail13" 		"smoke_a13"}
		{add_view 	"rok_tail" 		"rok_tail14" 		"smoke_a14"}
		{add_view 	"rok_tail" 		"rok_tail15" 		"smoke_a15"}
		{add_view 	"rok_tail" 		"rok_tail16" 		"smoke_a16"}
		{add_view 	"rok_tail" 		"rok_tail17" 		"smoke_a17"}
		{add_view 	"rok_tail" 		"rok_tail18" 		"smoke_a18"}
		{add_view 	"rok_tail" 		"rok_tail19" 		"smoke_a19"}
		{add_view 	"rok_tail" 		"rok_tail20" 		"smoke_a20"}
		{add_view 	"rok_tail" 		"rok_tail21" 		"smoke_a21"}
		{add_view 	"rok_tail" 		"rok_tail22" 		"smoke_a22"}
		{add_view 	"rok_tail" 		"rok_tail23" 		"smoke_a23"}
		{add_view 	"rok_tail" 		"rok_tail24" 		"smoke_a24"}
		{add_view 	"rok_tail" 		"rok_tail25" 		"smoke_a25"}
		{add_view 	"rok_tail" 		"rok_tail26" 		"smoke_a26"}
		{add_view 	"rok_tail" 		"rok_tail27" 		"smoke_a27"}
		{add_view 	"rok_tail" 		"rok_tail28" 		"smoke_a28"}
		{add_view 	"rok_tail" 		"rok_tail29" 		"smoke_a29"}
		{add_view 	"rok_tail" 		"rok_tail30" 		"smoke_a30"}
		{add_view 	"rok_tail" 		"rok_tail31" 		"smoke_a31"}
		{add_view 	"rok_tail" 		"rok_tail32" 		"smoke_a32"}
		{add_view 	"rok_tail" 		"rok_tail33" 		"smoke_a33"}
		{add_view 	"rok_tail" 		"rok_tail34" 		"smoke_a34"}
		{add_view 	"rok_tail" 		"rok_tail35" 		"smoke_a35"}
		{add_view 	"rok_tail" 		"rok_tail36" 		"smoke_a36"}
		{add_view 	"rok_tail" 		"rok_tail37" 		"smoke_a37"}
		{add_view 	"rok_tail" 		"rok_tail38" 		"smoke_a38"}

		("link_damage_sound_usa")
		;{call "altitude_checker"}
	}

	{on fire "ptur1" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}


	}

	{on fire "ptur2" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}


	}

	{on fire "nar1" overload
	("low_speed_bullet")
	(define "fire_barrel"
	name "%0"
	{view start "rok_tail%0"}
	{delay 0.42
	{view pause "rok_tail%0"}
	}
	)
	{spawn "startsmoke" inv_normal}
	{if    ("fire_barrel" args 00)
	else ("fire_barrel" args 01)
	else ("fire_barrel" args 02)
	else ("fire_barrel" args 03)
	else ("fire_barrel" args 04)
	else ("fire_barrel" args 05)
	else ("fire_barrel" args 06)
	else ("fire_barrel" args 07)
	else ("fire_barrel" args 08)
	else ("fire_barrel" args 09)
	else ("fire_barrel" args 10)
	else ("fire_barrel" args 11)
	else ("fire_barrel" args 12)
	else ("fire_barrel" args 13)
	else ("fire_barrel" args 14)
	else ("fire_barrel" args 15)
	else ("fire_barrel" args 16)
	else ("fire_barrel" args 17)
	else ("fire_barrel" args 18)
	else ("fire_barrel" args 19)
	else ("fire_barrel" args 20)
	else ("fire_barrel" args 21)
	else ("fire_barrel" args 22)
	else ("fire_barrel" args 23)
	else ("fire_barrel" args 24)
	else ("fire_barrel" args 25)
	else ("fire_barrel" args 26)
	else ("fire_barrel" args 27)
	else ("fire_barrel" args 28)
	else ("fire_barrel" args 29)
	else ("fire_barrel" args 30)
	else ("fire_barrel" args 31)
	else ("fire_barrel" args 32)
	else ("fire_barrel" args 33)
	else ("fire_barrel" args 34)
	else ("fire_barrel" args 35)
	else ("fire_barrel" args 36)
	else ("fire_barrel" args 37)
	else ("fire_barrel" args 38)
	}
	}


	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

}

{"mi-24v_airborne"

	{ on spawn
		("link_damage_sound_rus")
		{call "init_gun"}
		{tags add "ai_heli"}
		{view start "smoke_engine1"}
		{view start "smoke_engine2"}
		(define "ai_airborne_solider"
			{with_linked_entity "seat%0"
					{tags add "ai_airborne"}
			}
		)
			{delay 0.1 ("ai_airborne_solider" args 00)}
			{delay 0.1 ("ai_airborne_solider" args 01)}
			{delay 0.1 ("ai_airborne_solider" args 02)}
			{delay 0.1 ("ai_airborne_solider" args 03)}
			{delay 0.1 ("ai_airborne_solider" args 04)}
			{delay 0.1 ("ai_airborne_solider" args 05)}
			{delay 0.1 ("ai_airborne_solider" args 06)}
			{delay 0.1 ("ai_airborne_solider" args 07)}
			

	}

	{on fire "ptur2"

		{spawn "proj_probe_extra_big" "foresight4" x}

	}

	{on fire "ptur1"

		{spawn "proj_probe_extra_big" "foresight3" x}

	}
	{on fire "mgun" overload
		{view start "flashbarrel_main1"}
		{delay 0.42
			{view pause "flashbarrel_main1"}
		}
	}
	{on fire "gun" overload

		{view start "firebarrel01"}
		{view start "firebarrel02"}
		{view start "firebarrel03"}
		{view start "firebarrel04"}
		{delay 0.42
			{view pause "firebarrel01"}
			{view pause "firebarrel02"}
			{view pause "firebarrel03"}
			{view pause "firebarrel04"}
		}

	}


}

{"mi-24v2_airborne"

	{ on spawn
		("link_damage_sound_rus")
		{tags add "ai_heli"}
		{view start "smoke_engine1"}
		{view start "smoke_engine2"}
		(define "ai_airborne_solider"
			{with_linked_entity "seat%0"
					{tags add "ai_airborne"}
			}
		)
			{delay 0.1 ("ai_airborne_solider" args 00)}
			{delay 0.1 ("ai_airborne_solider" args 01)}
			{delay 0.1 ("ai_airborne_solider" args 02)}
			{delay 0.1 ("ai_airborne_solider" args 03)}
			{delay 0.1 ("ai_airborne_solider" args 04)}
			{delay 0.1 ("ai_airborne_solider" args 05)}
			{delay 0.1 ("ai_airborne_solider" args 06)}
			{delay 0.1 ("ai_airborne_solider" args 07)}

	}
	{on fire "mgun" overload
	
		{tags add "mgun_fired"}
		{view start "flashbarrel_main2"}
		{delay 0.42
			{view pause "flashbarrel_main2"}
		}
		
		
		
	}
	{on fire "ptur2"

		{spawn "proj_probe_extra_big" "foresight4" x}
		

	}

	{on fire "ptur1"

		{spawn "proj_probe_extra_big" "foresight3" x}
		

	}

}

{"ah1_airborne"
	{on spawn
		;{call "altitude_checker"}
		{view start "smoke_engine1"}
		;("link_damage_sound_usa")
	}

	{on fire "mgun" overload
		{view start "flashbarrel_ah1"}
		{delay 0.42
			{view pause "flashbarrel_ah1"}
		}
	}

	{on fire "gun" overload
		;{add_view "rocket_smoke_norm"	"firebarrelah1"	"shooter_r01"}
		;{add_view "rocket_smoke_norm"	"firebarrelah2"	"shooter_r00"}
		{view start "firebarrelah1"}
		{view start "firebarrelah2"}

		{delay 0.42
			{view pause "firebarrelah1"}
			{view pause "firebarrelah2"}

		}

	}

}

{"mi28n_airborne"
	{on spawn
		;{add_view	"flash_zenit"		"flashbarrel1"			"Foresight1"}
		{add_view	"tank_canon_fire_20_25_auto"		"flashbarrel1"			"Foresight1"}
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
		{add_view 	"rok_tail" 		"rok_tail00" 		"shooter_l00"}
		{add_view 	"rok_tail" 		"rok_tail01" 		"shooter_l01"}
		{add_view 	"rok_tail" 		"rok_tail02" 		"shooter_l02"}
		{add_view 	"rok_tail" 		"rok_tail03" 		"shooter_l03"}
		{add_view 	"rok_tail" 		"rok_tail04" 		"shooter_l04"}
		{add_view 	"rok_tail" 		"rok_tail05" 		"shooter_l05"}
		{add_view 	"rok_tail" 		"rok_tail06" 		"shooter_l06"}
		{add_view 	"rok_tail" 		"rok_tail07" 		"shooter_l07"}
		{add_view 	"rok_tail" 		"rok_tail08" 		"shooter_l08"}
		{add_view 	"rok_tail" 		"rok_tail09" 		"shooter_l09"}
		{add_view 	"rok_tail" 		"rok_tail10" 		"shooter_l10"}
		{add_view 	"rok_tail" 		"rok_tail11" 		"shooter_l11"}
		{add_view 	"rok_tail" 		"rok_tail12" 		"shooter_l12"}
		{add_view 	"rok_tail" 		"rok_tail13" 		"shooter_l13"}
		{add_view 	"rok_tail" 		"rok_tail14" 		"shooter_l14"}
		{add_view 	"rok_tail" 		"rok_tail15" 		"shooter_l15"}
		{add_view 	"rok_tail" 		"rok_tail16" 		"shooter_l16"}
		{add_view 	"rok_tail" 		"rok_tail17" 		"shooter_l17"}
		{add_view 	"rok_tail" 		"rok_tail18" 		"shooter_l18"}
		{add_view 	"rok_tail" 		"rok_tail19" 		"shooter_l19"}
		{add_view 	"rok_tail" 		"rok_tail_00" 		"shooter_r00"}
		{add_view 	"rok_tail" 		"rok_tail_01" 		"shooter_r01"}
		{add_view 	"rok_tail" 		"rok_tail_02" 		"shooter_r02"}
		{add_view 	"rok_tail" 		"rok_tail_03" 		"shooter_r03"}
		{add_view 	"rok_tail" 		"rok_tail_04" 		"shooter_r04"}
		{add_view 	"rok_tail" 		"rok_tail_05" 		"shooter_r05"}
		{add_view 	"rok_tail" 		"rok_tail_06" 		"shooter_r06"}
		{add_view 	"rok_tail" 		"rok_tail_07" 		"shooter_r07"}
		{add_view 	"rok_tail" 		"rok_tail_08" 		"shooter_r08"}
		{add_view 	"rok_tail" 		"rok_tail_09" 		"shooter_r09"}
		{add_view 	"rok_tail" 		"rok_tail_10" 		"shooter_r10"}
		{add_view 	"rok_tail" 		"rok_tail_11" 		"shooter_r11"}
		{add_view 	"rok_tail" 		"rok_tail_12" 		"shooter_r12"}
		{add_view 	"rok_tail" 		"rok_tail_13" 		"shooter_r13"}
		{add_view 	"rok_tail" 		"rok_tail_14" 		"shooter_r14"}
		{add_view 	"rok_tail" 		"rok_tail_15" 		"shooter_r15"}
		{add_view 	"rok_tail" 		"rok_tail_16" 		"shooter_r16"}
		{add_view 	"rok_tail" 		"rok_tail_17" 		"shooter_r17"}
		{add_view 	"rok_tail" 		"rok_tail_18" 		"shooter_r18"}
		{add_view 	"rok_tail" 		"rok_tail_19" 		"shooter_r19"}
		{add_view 	"rok_tail" 		"ptur1tail_00" 		"ptur1tail_00"}
		{add_view 	"rok_tail" 		"ptur1tail_01" 		"ptur1tail_01"}
		{add_view 	"rok_tail" 		"ptur1tail_02" 		"ptur1tail_02"}
		{add_view 	"rok_tail" 		"ptur1tail_03" 		"ptur1tail_03"}
		{add_view 	"rok_tail" 		"ptur1tail_04" 		"ptur1tail_04"}
		{add_view 	"rok_tail" 		"ptur1tail_05" 		"ptur1tail_05"}
		{add_view 	"rok_tail" 		"ptur1tail_06" 		"ptur1tail_06"}
		{add_view 	"rok_tail" 		"ptur1tail_07" 		"ptur1tail_07"}
		{add_view 	"rok_tail" 		"ptur2tail_00" 		"ptur2tail_00"}
		{add_view 	"rok_tail" 		"ptur2tail_01" 		"ptur2tail_01"}
		{add_view 	"rok_tail" 		"ptur2tail_02" 		"ptur2tail_02"}
		{add_view 	"rok_tail" 		"ptur2tail_03" 		"ptur2tail_03"}
		{add_view 	"rok_tail" 		"ptur2tail_04" 		"ptur2tail_04"}
		{add_view 	"rok_tail" 		"ptur2tail_05" 		"ptur2tail_05"}
		{add_view 	"rok_tail" 		"ptur2tail_06" 		"ptur2tail_06"}
		{add_view 	"rok_tail" 		"ptur2tail_07" 		"ptur2tail_07"}
		{add_view 	"flash_cannon_big" 		"ptur1tail_00" 		"ptur1shooter_00"}
		{add_view 	"flash_cannon_big" 		"ptur1tail_01" 		"ptur1shooter_01"}
		{add_view 	"flash_cannon_big" 		"ptur1tail_02" 		"ptur1shooter_02"}
		{add_view 	"flash_cannon_big" 		"ptur1tail_03" 		"ptur1shooter_03"}
		{add_view 	"flash_cannon_big" 		"ptur1tail_04" 		"ptur1shooter_04"}
		{add_view 	"flash_cannon_big" 		"ptur1tail_05" 		"ptur1shooter_05"}
		{add_view 	"flash_cannon_big" 		"ptur1tail_06" 		"ptur1shooter_06"}
		{add_view 	"flash_cannon_big" 		"ptur1tail_07" 		"ptur1shooter_07"}
		{add_view 	"flash_cannon_big" 		"ptur2tail_00" 		"ptur2shooter_00"}
		{add_view 	"flash_cannon_big" 		"ptur2tail_01" 		"ptur2shooter_01"}
		{add_view 	"flash_cannon_big" 		"ptur2tail_02" 		"ptur2shooter_02"}
		{add_view 	"flash_cannon_big" 		"ptur2tail_03" 		"ptur2shooter_03"}
		{add_view 	"flash_cannon_big" 		"ptur2tail_04" 		"ptur2shooter_04"}
		{add_view 	"flash_cannon_big" 		"ptur2tail_05" 		"ptur2shooter_05"}
		{add_view 	"flash_cannon_big" 		"ptur2tail_06" 		"ptur2shooter_06"}
		{add_view 	"flash_cannon_big" 		"ptur2tail_07" 		"ptur2shooter_07"}
		("link_damage_sound_rus")

	}

	{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/other/helicopter/MI-28engine"}
		{link_sound "engine_start"		"vehicle/other/helicopter/MI-8en_start"}
		{link_sound "engine_work"		"vehicle/other/helicopter/en_work"}
		{link_sound "engine_stop"		"vehicle/other/helicopter/MI-8en_stop"}
	}

	{on fire "ptur1" overload
		("low_speed_bullet")
		{spawn "cw_cumshassist_spawner_2gen" "Foresight3" x}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight3" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight3"  x}}
		(define "fire_barrel"	name "%0"	{view start "ptur1tail_%0"}
			{delay 0.42
				{view pause "ptur1tail_%0"}
			}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		else ("fire_barrel" args 04)
		else ("fire_barrel" args 05)
		else ("fire_barrel" args 06)
		else ("fire_barrel" args 07)
		}
	}
	{on fire "ptur2" overload
		("low_speed_bullet")
		{spawn "cw_cumshassist_spawner_2gen" "Foresight4" x}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight4" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight4"  x}}
		(define "fire_barrel"		name "%0"	{view start "ptur2tail_%0"}
			{delay 0.42
				{view pause "ptur2tail_%0"}
			}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		else ("fire_barrel" args 04)
		else ("fire_barrel" args 05)
		else ("fire_barrel" args 06)
		else ("fire_barrel" args 07)
		}
	}
	{on fire "nar1" overload
		("low_speed_bullet")
		{spawn "cw_cumshassist_spawner_1gen" "foresight5" x}
		(define "fire_barrel"		name "%0"	{view start "rok_tail%0"}
			{delay 0.42
				{view pause "rok_tail%0"}
			}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		else ("fire_barrel" args 04)
		else ("fire_barrel" args 05)
		else ("fire_barrel" args 06)
		else ("fire_barrel" args 07)
		else ("fire_barrel" args 08)
		else ("fire_barrel" args 09)
		else ("fire_barrel" args 10)
		else ("fire_barrel" args 11)
		else ("fire_barrel" args 12)
		else ("fire_barrel" args 13)
		else ("fire_barrel" args 14)
		else ("fire_barrel" args 15)
		else ("fire_barrel" args 16)
		else ("fire_barrel" args 17)
		else ("fire_barrel" args 18)
		else ("fire_barrel" args 19)
		else ("fire_barrel" args 20)
		else ("fire_barrel" args 21)
		else ("fire_barrel" args 22)
		else ("fire_barrel" args 23)
		else ("fire_barrel" args 24)
		else ("fire_barrel" args 25)
		else ("fire_barrel" args 26)
		else ("fire_barrel" args 27)
		else ("fire_barrel" args 28)
		else ("fire_barrel" args 29)
		else ("fire_barrel" args 30)
		else ("fire_barrel" args 31)
		else ("fire_barrel" args 32)
		else ("fire_barrel" args 33)
		else ("fire_barrel" args 34)
		else ("fire_barrel" args 35)
		else ("fire_barrel" args 36)
		else ("fire_barrel" args 37)
		else ("fire_barrel" args 38)
		else ("fire_barrel" args 39)
		}
	}
	{on "update_lights"
		{if rain {ani_play "rain" loop} else {ani_stop "rain"}}
		{if not sunlight {ani_play "lights"} else {ani_wind "lights" begin}}
	}
	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))
	{on "check_pilot_existance" overload
		{if not tagged "destroyed"
			{if chassis "airborne"
				{if crew_in_place "driver"
					{delay 0.2
						{if not crew_in_place "driver"
							{call "fall"}
						}
					}
				}
			}
		}
	}
	;{on crew out
	;	{if not tagged "destroyed"
	;		{if chassis "helicopter"
	;			{delay 0.2
	;				{if not crew_in_place "driver"
	;					{call "fall"}
	;				}
	;			}
	;		}
	;	}
	;}



}


{"alouette_ii_mg_frg"
	{on "init_gun" overload
		{add_view "flash_gun_big"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_big"			"flashbarrel01"	"shooter01"}
		{add_view "flash_gun_big"			"flashbarrel02"	"shooter02"}
		{add_view "flash_gun_big"			"flashbarrel03"	"shooter03"}
		{add_view "shell_mgun"			"shell"			"FXshell1"}
		{add_view "shell_mgun"			"shell"			"FXshell2"}
		{add_view "shell_mgun"			"shell"			"FXshell3"}
		{add_view "shell_mgun"			"shell"			"FXshell4"}
		{call "update_gun"}
	}
	{on fire "mgun" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{ani_wind "fire00" end}
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		}
		{if  name "01"
			{ani_wind "fire01" end}
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
		{if  name "02"
			{ani_wind "fire02" end}
			{view start "flashbarrel02"}
			{delay 0.2
				{view pause "flashbarrel02"}
			}
		}
		{if  name "03"
			{ani_wind "fire03" end}
			{view start "flashbarrel03"}
			{delay 0.2
				{view pause "flashbarrel03"}
			}
		}
	}
}

{"allouette_atgm"

	{on fire "gun"

		{spawn "proj_probe_extra_big" "foresight1" x}

	}

}