{"uav"
	{inflammation_time 25}
	{on spawn	
		;{add_view "smoke_black"					"smoke_engine" 				"FXfire1"}
		{add_view "smoke_black"					"light_green" 				"FXlight1"}
		{add_view "smoke_black"					"light_green" 				"FXlight2"}
		{add_view "smoke_black"					"light_green" 				"FXlight3"}
		{add_view "smoke_black"					"light_green" 				"FXlight4"}
		
		{link_sound "holster"	"human/holster/big"}

		{link_sound "engine_start"			"vehicle/engine/uav/start"}
		{link_sound "engine_idle"			"vehicle/engine/uav/idle"}
		{link_sound "engine_full"			"vehicle/engine/uav/idle"}
		{link_sound "engine_accelerate"		"vehicle/engine/uav/accelerate"}
		{link_sound "engine_decelerate"		"vehicle/engine/uav/decelerate"}
		{link_sound "engine_stop"			"vehicle/engine/uav/stop"}
		{link_sound "gear_work"				"vehicle/engine/uav/gear_work"}
		{link_sound "bkg_plane"				"vehicle/engine/uav/bkg_uav"}

		{call "altitude_checker"}
	}
	
	{on "altitude_checker"
		{if altitude 0.5
			{tags add ">0.5"}
			{delay 0.5 "altitude_checker"
				{call "altitude_checker"}
			}
		else
			{tags remove ">0.5"}
			{spawn "spheredust_tiny_landing" "basis"}
			{delay 0.5 "altitude_checker"
				{call "altitude_checker"}
			}
		}
	}	

	{on "engine_count"
		{tags add "engine_count_1"}
	}

	{on "add_trace" ;// adds fx during engine toggle on and landing
		{if not rain
			;{add_view	"dustrun_min"			"on_grass"			"basis"}
			;{add_view	"dustrun_sand_min"		"on_sand"			"basis"}
			;{add_view	"dustrun_snow_min"		"on_snow"			"basis"}
			;{add_view	"dustrun_min"			"on_country_road"	"basis"}
			;{add_view	"dustrun_min"			"on_ground"			"basis"}
			;{add_view	"drops_water"			"on_water"			"basis"}
			;{add_view	"tank_grit_small"		"on_mud"			"basis"}
			;{add_view	"drops_water_moto"		"on_puddle"			"basis"}
			;{add_view	"tank_grit_small_w"		"on_puddle"			"basis"}

			;{add_view 	"disc_dustrun_big"		"dust"				"basis"}
			;{add_view 	"disc_dustrun_big_sand"	"dust_sand"			"basis"}
			;{add_view 	"disc_dustrun_big_sand"	"dust_snow"			"basis"}
		}
	}

	(define "fx_base"
		{delay 1 0.25
			{view %action "%fx"}
		}
	)
	(define "fx_dust"
		("fx_base" action(%action) fx(dust))
	)
	(define "fx_sand"
		("fx_base" action(%action) fx(dust_sand))
	)
	(define "fx_snow"
		("fx_base" action(%action) fx(dust_snow))
	)

	{on "stop_trace"					;// stops wheel & all engine fx on takeoff.
		{view stop "on_ground"}
		{view stop "on_country_road"}
		{view stop "on_sand"}
		{view stop "on_snow"}
		{view stop "on_grass"}
		{view stop "on_water"}
		{view stop "on_mud"}
		{view stop "on_puddle"}
		("fx_dust" action(stop))
		("fx_sand" action(stop))
		("fx_snow" action(stop))
	}

	(define "stop_trace_engine"				;// stops engine fx when engine is turned off or broken while on the ground
		("fx_base" action(stop) fx(dust))
		("fx_base" action(stop) fx(dust_sand))
		("fx_base" action(stop) fx(dust_snow))
	)

	(define "play_trace"					;// starts fx wheel and engine dust fx after landing
		{if terrain_fx "ground"
			{view start "on_ground"}
			("fx_base" action(start) fx(dust_sand))
		else terrain_fx "country_road"
			{view start "on_country_road"}
			("fx_base" action(start) fx(dust_sand))
		else terrain_fx "sand"
			{view start "on_sand"}
			("fx_base" action(start) fx(dust_sand))
		else terrain_fx "snow"
			{view start "on_snow"}
			("fx_base" action(start) fx(dust_snow))
		else terrain_fx "grass"
			{view start "on_grass"}
			("fx_base" action(start) fx(dust))
		else terrain_fx "water"
			{view start "on_water"}
			("fx_dust" action(stop))
			("fx_sand" action(stop))
			("fx_snow" action(stop))
		else terrain_fx "mud"
			{view start "on_mud"}
			("fx_base" action(start) fx(dust))
		else terrain_fx "puddle"
			{view start "on_puddle"}
			("fx_base" action(start) fx(dust))
		else terrain_fx "road"
			("fx_base" action(start) fx(dust))
		}
	)

	(define "prop_blast"		;// starts fx engine dust fx after engine starts
		{if terrain_fx "ground"
			{view start "dust_sand"}
		else terrain_fx "country_road"
			{view start "dust_sand"}
		else terrain_fx "sand"
			{view start "dust_sand"}
		else terrain_fx "snow"
			{view start "dust_snow"}
		else terrain_fx "grass"
			{view start "dust"}
		else terrain_fx "mud"
			{view start "dust"}
		else terrain_fx "puddle"
			{view start "dust"}
		else terrain_fx "road"
			{view start "dust"}
		else terrain_fx "water"
			("fx_dust" action(stop))
			("fx_sand" action(stop))
			("fx_snow" action(stop))
		}
	)

	(define "stop_smoke_fx"
		{view pause "light_body_smoke"}
	)

	{on "takeoff"
		{if not dead
			{if operatable
				{ani_play "wheels" 0.2}
				{play_sound "gear_work"}
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

	{on "engine_full"
		{delay 2.5 "engine_full"			;// delay for accelerate sound
			{if not destroyed "engine"
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
		}
	}

	{on "takeoff_load" 					;// plane spawns in chassis "helicopter"
		{ani_wind "wheels" end}			;// retracts wheels
		{call "gear_disable"}
	}

	{on "landing"
		{set "landing" 1}
		{kill_delay "engine_full"}
		{play_sound "gear_work"}
		{stop_sound "bkg_plane"}
		{stop_sound "engine_accelerate"}
		{stop_sound "engine_full"}
		{play_sound "engine_decelerate"}
		{call "engine_idle_delay"}
		{call "altitude_checker"}
	}

	{on "engine_idle_delay"				;// delay for decelerate sound
		{delay 2 "engine_idle"
			{if not destroyed "engine"
				{play_sound "engine_idle" 1}
			}
		}
	}

	{on "engine_toggle" overload			;// UI button to toggle engine on/off
		{if operatable
			{if tagged "engine_count_1"
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
	}

	{on "engine_switch"
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
		{if not chassis "helicopter"
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

	{on "engine_accel"						;//delay for accelerate sound
		{delay 3.8 "engine_accel"
			{if not destroyed "engine"
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
			{stop_sound "engine_accelerate"}
		}
	}

	{on move off overload ;// vehicle not moving forward or reverse
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

	{on "engine_decel"					;//delay for decelerate sound
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
		{if chassis "helicopter"
			{call "engine_on"}		;// turns on engine, for airborne chassis planes when given move order
		else
			{if "landing"
				{call "add_trace"}
				("stop_smoke_fx" args body)
				("stop_smoke_fx" args engine)
			}
			{if "engine_start"
				("play_trace" number(1))
			}
		}
	}

	{on engine off overload} ;// stops extra interaction calls from vehicle.inc

	(define "blade"		;// individual engine: disables volumes for each individual propeller blade and enables cylinder volume for spinning blades
		{volumes "blade%number" disable all}
		{volumes "blade%number" enable contact contact_ground touch}
	)
	(define "propeller"	;// individual engine: disables cylinder volume for spinning blades and enables volumes for each individual propeller blade
		{volumes "propeller%number" enable contact bullet blast touch}
		{volumes "propeller%number" disable all}
	)
	(define "rotor"	;// individual engine:
		{volumes "rotor%number" disable all}
		{volumes "rotor%number" disable all}
	)

	{on animation_end "engine_start"
		{ani_play "engine_work" loop}
		{if not chassis "helicopter"
			{call "engine_start"}
		else chassis "helicopter"
			{stop_sound "engine_start"}
			{play_sound "engine_full" 1}
			{play_sound "bkg_plane" 1}
		}
	}

	{on "engine_start"						;// delay for start sound
		{delay 4.5
			{stop_sound "engine_start"}
		}
	}

	{on "engine_on" overload				;// settings for engine when switched on
		{if not "engine_on"
			{if not chassis "wheel"
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
				{call "props_spin"}
			}
		}
	}

	{on "engine_startup_timer"				;// delay for switching from startup to idle state
		(define "engine_startup_timer"
			{delay 5.9 "engine_startup"
				{call "engine_idle"}
			}
		)
	}

	{on "engine_start_sequence"				;// start sequence for 1st engine
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
						("blade" number(1))
					}
				}
				("engine_startup_timer" number(1))		;// allows for overload/modified time for each aircrafts complete startup sequence before switching to idle state
			}
		}
	}

	{on "engine_off" overload				;// engine toggled off
		{kill_delay "engine_startup"}		;// stops engine startup sequence
		{if not chassis "wheel"			;// engines can only be toggled when on ground not airborne
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

	{on "engine_stop_sequence"				;// engine 1 shutdown sequence
		{stop_sound "engine_accelerate"}
		{stop_sound "engine_decelerate"}
		{stop_sound "engine_start"}
		{stop_sound "bkg_plane"}
		{stop_sound "engine1_full"}
		{stop_sound "engine1_idle"}
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
			{if "engine1_start"
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
			
			{if not chassis "helicopter"
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
		{if chassis "helicopter"
			{call "check_work_mover"}
		}
		{inherited}
	}

	{on "check_work_mover" overload
		{if tagged "engine_count_1"
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
	}

	{on operatable off
		{if not tagged "engine_turned_off" ;// stops engine off sequence from occuring if engine is already turned off.
			{if not chassis "helicopter"
				{call "engine_off"}
			}
		}
	}

	{on "check_speed" overload} ;// disabled calls to check speed for dust fx. Planes only have 1 fx

	{on "propeller_stop"		;// called on explosion and ground_hit
		{bone hide "propeller1_work"}
		{bone hide "propeller2_work"}
	}

	{on "engine_not_run"		;// instantly stops engines. Called on collosiions, ground_hit, crash and sink.
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
			("stop_trace_engine" number(1))
			("stop_trace_engine" number(2))
			{if not tagged "destroyed"
				{ani_play "engine_stop"}
			}
			{delay 0.01
				{ani_stop "engine_stop"}
			}
		}
	}

	{on "engine stop view" overload}

	;/*=========== Plane Damage Begin  ===========*/

	(define "cut_part"
		{if rand %1
			{delay_ex 0
				{tear "piece_big_airborne_wing" bone %0
					{impulse up 2 1 dir 2 1}
				}
			}
		}
	)

	(define "cut_part_delete"
		{delay_ex 0
			{tear "piece_big_airborne_wing" bone %0
				{delete}
			}
		}
	)
	
	{on pierce sync
		{vehicle_health_damage_pierce}
	}

	{on break overload							;// component breaks
		{if not tagged "destroyed"
			{call "update_moveable"}
		}
		{if chassis "helicopter"
			{if component "body"
				{view start "light_body_smoke"}

			else component "body_back"

			else component "engine"
				{view start "medium_engine1_smoke"}

			else component "propeller"

			else component "blade1"
				{burn fx "smoke_aero_small" fake}

			else component "blade2"
				{burn fx "smoke_aero_small" fake}

			else component "blade3"
				{burn fx "smoke_aero_small" fake}

			else component "blade4"
				{burn fx "smoke_aero_small" fake}

			else component "rotor1"
				{burn fx "smoke_aero_small" fake}

			else component "rotor2"
				{burn fx "smoke_aero_small" fake}

			else component "rotor3"
				{burn fx "smoke_aero_small" fake}

			else component "rotor4"
				{burn fx "smoke_aero_small" fake}

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
			{if chassis "helicopter"
				{if component "body"
					{call "stat_break"}
					{start_sound "detonation/grenade/"}
					{start_sound "detonation/grenade/bkg/"}
					{if chassis "helicopter"
						{call "fall"}
						{view start "heavy_body_smoke"}
					else
						{call "disable_all_seats"}
					}

				else component "engine"
					{view start "heavy_engine1_smoke"}
					{delay 1 {view pause "medium_engine1_smoke"}}
					{if tagged "engine_count_1"
						{if chassis "helicopter"
							{call "fall"}
							(mod not "mp")
						else
							{call "engine_off"}
						}
					}
				else component "propeller"

				else component "blade1"
					{call "tear_part"}

				else component "blade2"
					{call "tear_part"}

				else component "blade3"
					{call "tear_part"}

				else component "blade4"
					{call "tear_part"}

				else component "rotor1"
					{call "tear_part"}

				else component "rotor2"
					{call "tear_part"}

				else component "rotor3"
					{call "tear_part"}
				
				else component "rotor4"
					{call "tear_part"}

				else component "wheel"
					{if "engine_on"
						{chassis_work 1} ;// fixes wheel break's "up impluse" from disabling movement on ground
					}
				}
			}
			{if component "engine"
				{if not tagged "grounded"
					{spawn "spheredust_small"}
				}
			}
			{if component "part"
				{call "tear_part"}
			}
		}
	}

	{on "fall"
		{if chassis "helicopter"
			{if not "fall"
				{call "stat_break"}
				{stop_sound "bounds"}
				{call "fall_fx"}
				{set "fall" 1}
				{drop_orders}
				(mod "mp"
					{call "bail_out"}
					{impulse up 0.01 forward 0.001}
					{explosive 1}
					{call "fall_sound"}
					{components "body" destroy}
				)
				(mod not "mp"
					{delay 1.25 0.25
						{call "bail_out"}
					}
					{delay 4 3 "fall_impulse"
						{impulse up 0.01 forward 0.001}
						{explosive 1}
						{call "fall_sound"}
						{components "body" destroy}
					}
				)
			}
		}
	}

	{on "fall_sound"
		{if chassis "helicopter"
			{if not tagged "shotdown"
				{tags add "shotdown"}
			}
		}
	}

	{on "fall_fx"
		{if not under_water
			{delay 0.01
				{view start "fire"}
				{delay 30
					{view stop "fire"}
				}
				{burn volume "body" fx "smoke_broken_engine" time 30 fake}
				{delay 30.1
					{burn volume "body" fx "smoke_broken_engine" time 40 25 fake}
				}
				{delay 35
				}
			}
		}
	}

	{on ground_hit sync
		{if chassis "helicopter"
			{component destroy}
			{if not tagged "grounded"					;// stops from being called multiple times on crash with ground.
				{tags add "grounded"}
				;{call "collide"}
				{start_sound "detonation/explosion_fiery/"}
				{start_sound "detonation/50kg_bomb/bkg/"}
				{delay 0.2 "ground_explosion"
					{call "crash_explosion"}
					{call "engine_not_run"}
					{stop_sound "fall"}
					{kill_crew}
				}
			}
			{if volume "blade1"
				{delay 0.02
					{tags add "grounded"}
					{call "crash_explosion"}
					{call "engine_not_run"}
					{stop_sound "fall"}
					{kill_crew}
					{kill_delay "ground_explosion"}
				}
			}
			{if volume "blade2"
				{delay 0.02
					{tags add "grounded"}
					{call "crash_explosion"}
					{call "engine_not_run"}
					{stop_sound "fall"}
					{kill_crew}
					{kill_delay "ground_explosion"}
				}
			}
			{if volume "blade3"
				{delay 0.02
					{tags add "grounded"}
					{call "crash_explosion"}
					{call "engine_not_run"}
					{stop_sound "fall"}
					{kill_crew}
					{kill_delay "ground_explosion"}
				}
			}
			{if volume "blade4"
				{delay 0.02
					{tags add "grounded"}
					{call "crash_explosion"}
					{call "engine_not_run"}
					{stop_sound "fall"}
					{kill_crew}
					{kill_delay "ground_explosion"}
				}
			}
			{if volume "body"
				{tags add "grounded"}
				{call "crash_explosion"}
				{call "engine_not_run"}
				{stop_sound "fall"}
				{kill_crew}
				{kill_delay "ground_explosion"}
			}
			{if volume "rotor1"
				{set "engine_start" 0}
				{components "rotor1" destroy}
				{call "engine1_broken"}
				{tags add "ground_hit_spin1"}
			}
			{if volume "rotor2"
				{set "engine_start" 0}
				{components "rotor2" destroy}
				{call "engine2_broken"}
				{tags add "ground_hit_spin2"}
			}
			{if volume "wheell"
				("cut_part" args "gear_l" 1)
			}
			{if volume "wheelr"
				("cut_part" args "gear_r" 1)
			}

		else
			{if volume "part"
				{call "tear_part"}
			}
			{if volume "spin1"
				{set "engine_start" 0}
				{components "propeller1" destroy}
				{call "engine_broken"}
				{tags add "ground_hit_spin1"}
			}
			{if volume "spin2"
				{set "engine_start" 0}
				{components "propeller2" destroy}
				{call "engine2_broken"}
				{tags add "ground_hit_spin2"}
			}
		}
	}

	{on "engine_broken"
		{components "engine1" break}
		{ani_stop "engine_start"}
		{ani_stop "engine_work"}
		{ani_play "engine_stop"}
		{if work "engine"
			{stop_sound "engine_accelerate"}
			{stop_sound "engine_decelerate"}
		}
		{kill_delay "engine_accel"}
		{kill_delay "engine_decel"}
		("stop_trace_engine" number(1))
		{delay 0.01
			{ani_stop "engine_stop"}
		}
	}

	{on contact overload sync
		{if not impregnable
			{if chassis "helicopter"
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
			else not chassis "helicopter"
				{if volume "blade1"
					{if "engine_on"
						{components "engine" break}
					}
					{components "blade1" break}
				else volume "blade2"
					{if "engine_on"
						{components "engine" break}
					}
					{components "blade2" break}
				else volume "blade3"
					{if "engine_on"
						{components "engine" break}
					}
					{components "blade3" break}
				else volume "blade4"
					{if "engine_on"
						{components "engine" break}
					}
					{components "blade4" break}
				}
				{if volume "part"
					{if velocity 40 
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

	{on "crash_explosion"
		{if not tagged "destroyed"
			{if chassis "helicopter"
				{call "_explosion"}
			}
		}
	}

	{on "collide"
		{if volume "body"
			{call "crash_explosion"}
			{call "engine_not_run"}
			{kill_crew}
		else volume "blade"
			{call "crash_explosion"}
			{call "engine_not_run"}
			{kill_crew}
		else volume "part"
			{if min_speed 30
				{call "tear_part"}
			}
		}
		{delay 20 {if under_water {delete}}}
	}

	{on "tear_part"
		{if not tagged "destroyed"
			{if rand 0.3
				{spawn "aero_die_particle"}
			}
			{if tagged "mid_air_collision"
				{call "bail_out"}
				{tags remove "mid_air_collision"}
			}
			{volume disable contact contact_ground}
			{if volume "blade1"
				{call "crash"}
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone "blade1"
						{impulse up 2 1 forward 5 dir 2 1}
					}
				}
			else volume "blade2"
				{call "crash"}
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone "blade2"
						{impulse up 2 1 forward 5 dir 2 1}
					}
				}
			else volume "blade3"
				{call "crash"}
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone "blade3"
						{impulse up 2 1 forward 5 dir 2 1}
					}
				}
			else volume "blade4"
				{call "crash"}
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone "blade4"
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
		}
	}

	{on "wrecked_gear"
		{if not chassis "helicopter"
			{impulse up 0.01 forward 0.01}
		}
	}

	{on "crash"
		{if not tagged "destroyed"
			{call "stat_break"}
			{if chassis "helicopter"
				{stop_sound "bounds"}
				{impulse up 0.01 forward 0.01}
				{call "fall_sound"}
			else not chassis "helicopter"
				{able select 0}
				{able repaired 0}
				{reset_manual_control}
				{delay 2
					{chassis_work 0}
					{crew_emit}
					{call "emit_crew"}						;// generic crew emit from vehicle.inc
				}
			}
			{delay 0.5
				{tags add "shotdown"}
			}
		}
	}

	{on "check_burn_emit"
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

	{on "die"
		{kill_delay "fall_impulse"}
		{chassis_work 0}
		{drop_orders}
		{explosive 0}
		{components destroy}
		{stop_sound "engine_stop"}
		{burn stop}
		{delay 10 {delete}}
	}

	{on "_explosion" overload
		{tags add "destroyed"}
		{tags remove "air"}
		;{able "exploded" 1}
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
		{if not under_water
			{add_view "smoke_poo" "fire" "body"}
			{add_view "match" "fire2" "body"}
			{view start "fire"}
			{view start "fire2"}
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
			("cut_part" args "blade"		1)
			("cut_part" args "blade1"		1)
			("cut_part" args "blade2"		1)
			("cut_part" args "blade3"		1)
			("cut_part" args "blade4"		1)
			("cut_part" args "body_back"	1)
			("cut_part" args "rotor"		0.75)
			("cut_part" args "rotor1"		0.75)
			("cut_part" args "rotor2"		0.75)
			("cut_part" args "rotor3"		0.75)
			("cut_part" args "rotor4"		0.75)
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

	{on "spawn_shellhole"			;// called on "_explosion"
		{spawn "circledust_norm" "basis" random_orientation}
	}

	{on "area_disable"
		{area disable}
	}

	{on "area_enable"
		{area enable}
	}

	{on "air_attack"}

	{on "init_gun"
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel00"	"barrel00"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel01"	"barrel01"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel02"	"barrel02"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel03"	"barrel03"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel04"	"barrel04"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel05"	"barrel05"}
		{add_view "flash_gun_small"	"flashbarrel_mg00"	"barrel_mg00"}
		{add_view "flash_gun_small"	"flashbarrel_mg01"	"barrel_mg01"}
		{add_view "flash_gun_small"	"flashbarrel_mg02"	"barrel_mg02"}
		{add_view "flash_gun_small"	"flashbarrel_mg03"	"barrel_mg03"}
		{add_view "flash_gun_small"	"flashbarrel_mg04"	"barrel_mg04"}
		{add_view "flash_gun_small"	"flashbarrel_mg05"	"barrel_mg05"}
		{add_view "flash_gun_small"	"flashbarrel_mg06"	"barrel_mg06"}
		{add_view "flash_gun_small"	"flashbarrel_mg07"	"barrel_mg07"}
		{add_view "flash_gun_small"	"flashbarrel_rear" "foresight6"}
		{add_view "flash_gun_small"	"flashbarrel_main" "foresight1"}
	}

	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{view start "flashbarrel%0"}
				{delay 0.42
					{view pause "flashbarrel%0"}
				}
		)

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

	{on fire "mgun2"
		(define "fire_barrel_mg"
			name "%0"
				{view start "flashbarrel_mg%0"}
				{delay 0.42
					{view pause "flashbarrel_mg%0"}
				}
		)
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}

		{if    ("fire_barrel_mg" args 00)
		  else ("fire_barrel_mg" args 01)
		  else ("fire_barrel_mg" args 02)
		  else ("fire_barrel_mg" args 03)
		  else ("fire_barrel_mg" args 04)
		  else ("fire_barrel_mg" args 05)
		  else ("fire_barrel_mg" args 06)
		  else ("fire_barrel_mg" args 07)

		}
	}

	{on fire "mgun3"
		(define "fire_barrel"
			name "%0"
				{view start "flashbarrel%0"}
				{delay 0.42
					{view pause "flashbarrel%0"}
				}
		)

		{if		("fire_barrel" args 00)
			else	("fire_barrel" args 01)
			else	("fire_barrel" args 02)
			else	("fire_barrel" args 03)
			else	("fire_barrel" args 04)
			else	("fire_barrel" args 05)
		}
	}

	{on fire "mgun4"
		{view start "flashbarrel_rear"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.42
			{view pause "flashbarrel_rear"}
		}
	}

	{on "splash_fx"
		{if not tagged "splash"
			{if chassis "helicopter"
				{spawn "ex_size3_water"}
			else not chassis "helicopter"
			}
		}
		{tags add "splash"}
	}


	{on "check_water_level" overload
		{if water_level 5
			{if tagged "splash" {delete}}
			{able "sinking" 1}
			{tags add "no_scavenge"}

		else water_level -0.75
			{able "sinking" 1}
			{tags add "no_scavenge"}
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

;/*=========== UAV End  ===========*/
