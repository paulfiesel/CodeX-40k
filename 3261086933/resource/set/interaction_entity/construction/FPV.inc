{"fpv"
	{inflammation_time 25}
	{on spawn	
		;{add_view "smoke_black"					"smoke_engine" 				"FXfire1"}
		{add_view "smoke_black"					"light_green" 				"FXlight1"}
		{add_view "smoke_black"					"light_green" 				"FXlight2"}
		{add_view "smoke_black"					"light_green" 				"FXlight3"}
		{add_view "smoke_black"					"light_green" 				"FXlight4"}
		
		{link_sound "holster"	"human/holster/big"}

		{link_sound "fly"				"vehicle/airborne/fpv/fly"}
		{link_sound "engine_start"		"vehicle/airborne/fpv/engine_start"}
		{link_sound "engine_work"		"vehicle/airborne/fpv/engine_work"}
		{link_sound "engine_stop"		"vehicle/airborne/fpv/engine_stop"}

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

	;////////////////////////////////////// Engine ///////////////////////////////////////////////////////////
	
	{on operatable on
		{call "repaired_engine_check"} 		;// calls check to restart engine after body repair and crew re-enters vehicle
		{delay_ex 1 {call "check_water_level"}} ;// delay required to stop vehicles from drowning in Conquest sometimes if map coordinate 000 is underwater
	}

	{on "engine_idle" overload ;// settings for engine if it should be on immediately after spawning
		{set "engine_on" 1}
		{set "engine1_start" 1}
		{ani_play "engine_work" loop} ;//causes issues with start animation transisiton, but needed for spawns w/ Engine on
		{if "engine_on"
			{chassis_work 1}
			{play_sound "engine_work" 1}
			{play_sound "fly" 1}
		else
			{chassis_work 0}
		}
	}

	{on "engine_toggle" overload			;// UI button to toggle engine on/off
		{if operatable
			{if not work "engine"
				{if "engine_on"
					{call "engine_switch"}
				}
			else
				{call "engine_switch"}
			}
		}
	}

	{on "engine_switch"
		{if "toggle_delay"
			
		else "engine_on"
			{call "engine_off"}
		else
			{call "engine_on"}
		}
	}

	{on accelerate on overload} ;// stops extra interaction calls from vehicle.inc
	{on accelerate off overload} ;// stops extra interaction calls from vehicle.inc
	
	(define "propeller_work_hide"
		{bone hide "propeller_work1"}
		{bone hide "propeller_work2"}
		{bone hide "propeller_work3"}
		{bone hide "propeller_work4"}
		{bone hide "propeller_work5"}
		{bone hide "propeller_work6"}
		{bone hide "propeller_work7"}
		{bone hide "propeller_work8"}
	)
	(define "propeller_work_show"
		{bone show "propeller_work1"}
		{bone show "propeller_work2"}
		{bone show "propeller_work3"}
		{bone show "propeller_work4"}
		{bone show "propeller_work5"}
		{bone show "propeller_work6"}
		{bone show "propeller_work7"}
		{bone show "propeller_work8"}
	)

	{on engine on overload
		{if chassis "helicopter"
			{call "engine_on"}
		else chassis "airborne"
			{call "engine_on"}
		}
	}

	{on "engine_on" overload
		{if not "engine_on"
			{if altitude 0.5   ;// check altitude
				{chassis_work 1}
				{set "engine_on" 1}
				{tags remove "engine_turned_off"}
				{ani_play "engine_work" loop}
			else
				{chassis_work 0}
				{set "engine_on" 1}
				{ani_stop "engine_stop"}
				{ani_play "engine_start" callback}
				{set "toggle_delay" 0}
				{play_sound "engine_start"}
				{delay 1.8 {call "altitude_checker"}}
			}
		}
	}
	
	{on animation_end "engine_start"
		{chassis_work 1}
		{ani_play "engine_work" loop}
		("propeller_work_show")
		{delay 1 {play_sound "engine_work" 1}{play_sound "fly" 1}}
	}

	{on engine off overload
		{call "engine_off"}
	}

	{on "engine_off" overload				;// engine toggled off
		{if altitude 0.5		;// if altitude above 0.5, do nothing
			{tags add "altitude"}
		else                    ;// if altitude lower than 0.5, turn engine off as normal
			{if "engine_on"
				{tags remove "altitude"}
				{stop_sound "fly"}
				{stop_sound "engine_work"}
				{set "engine_on" 0}
				{delay_ex 0
					{ani_stop "engine_work"}
					{ani_play "engine_stop"}
					{play_sound "engine_stop"}
					("propeller_work_hide")
					{kill_delay "altitude_checker"}
					{set "toggle_delay" 0}			;// stops accidental double click of UI button
					{delay 1.2
						{chassis_work 0}
					}
				}
			}
		}
	}

	{on "engine_stop"            ;//immediately kill engine, such as on death
		{kill_delay "engine_stopped"}
		{if "engine_on"
			{set "engine_on" 0}
			{stop_sound "engine_start"}
			{stop_sound "engine_work"}
			{stop_sound "fly"}
			{delay_ex 0
				{ani_stop "engine_start"}
				{ani_stop "engine_work"}
				{ani_play "engine_stop"}
			}
		}
	}
	
	;////////////////////////////////////// Move ///////////////////////////////////////////////////////////

	{on move on overload                  ;//vehicle moves forward or reverse
		{if not chassis "helicopter"
			{if not "landing"
				{if "engine_on"
				}
			}
		else
			{call "water_check"}		;//checks water level if spawning in air over water
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

	{on operatable off
		{if not tagged "engine_turned_off" ;// stops engine off sequence from occuring if engine is already turned off.
			{if not chassis "helicopter"
				{call "engine_off"}
			}
		}
	}
	
	{on "link_human"
		{chassis_work 0}
	}
	{on "unlink_human"
		{call "engine_on"}
	}

	{on repair
		(define "repair_propeller"
			{if component "%component"
				{bone show "%component%c"}
				{volumes "%component" enable visible bullet blast contact contact_ground}
				{call "check_wheel_torn"}
			}
		)
		("repair_propeller" component(propeller) c())
		("repair_propeller" component(propeller) c(1))
		("repair_propeller" component(propeller) c(2))
		("repair_propeller" component(propeller) c(3))
		("repair_propeller" component(propeller) c(4))
		("repair_propeller" component(propeller) c(5))
		("repair_propeller" component(propeller) c(6))
		("repair_propeller" component(propeller) c(7))
		("repair_propeller" component(propeller) c(8))
	}

	;////////////////////////////////////// HIT ///////////////////////////////////////////////////////////
	
	{on contact overload sync
		{if not impregnable
			{if effector "small"				;do not crash on small entities
				{call "collide"}
			else effector "construction"
				{if not effector "straw"
					{call "collide"}
				}
			else effector "tree"

			else effector "armored_car"			;crash on fast moving armored cars
				{if effector_velocity 14
					{call "collide"}
				}
			else effector "car"					;do not crash on cars
				{if effector_velocity 12
					{call "collide"}
				}
			else effector "tank"				;crash on moving tanks
				{if effector_velocity 15
					{call "collide"}
				}
			else effector "vehicle"				;(failsafe) crash on fast moving vehicles
				{if effector_velocity 10
					{call "collide"}
				}
			}
		}
	}

	{on pierce sync
		{vehicle_health_damage_pierce}
	}
	{on blast sync
		{vehicle_health_damage_blast}
	}
	{on bullet_hit overload
		{if stuff "shell"
			{call "dead"}
		}
	}

	{on blast_hit
		{if min_energy 10
			{call "_explosion"}
		else min_energy 4
			{if rand 0.5
				{call "fall"}
			}
		else min_energy 3
			{if rand 0.5
				{call "fall"}
			}
		else min_energy 2
			{if rand 0.5
				{call "fall"}
			}
		}
	}

	{on ground_hit sync
		{call "collide"}
		{component destroy}
		{start_sound "vehicle/airborne/fpv/hit_ground"}
		(define "part_cut"
			{if rand %1
				{tear "piece_small_steel" bone %0
					{impulse up 2 1 dir 2 1}
				}
			}
		)
		("part_cut" args "propeller"	0.8)
		("part_cut" args "propeller1"	0.8)
		("part_cut" args "propeller2"	0.8)
		("part_cut" args "propeller3"	0.8)
		("part_cut" args "propeller4"	0.8)
		("part_cut" args "propeller5"	0.8)
		("part_cut" args "propeller6"	0.8)
		("part_cut" args "propeller7"	0.8)
		("part_cut" args "propeller8"	0.8)
	}
	
	;////////////////////////////////////// Break ///////////////////////////////////////////////////////////
	
	{on break overload
		{if not tagged "destroyed"
			{call "update_moveable"}
		}
		{if component "body"
			{tags add "body_brake"}
			{spawn "aero_die_particle"}
			{call "fall"}
		else component "turret"
			{ik_enable "turret" 0}
			{ik_enable "turret_rot" 0}
		else component "engine"
			{tags add "engine_brake"}
			{spawn "aero_die_particle"}
			{view start "steam"}
			{call "_burn"}
		else component "propeller"
			{if not linked
				{call "fall"}
			}
		else component "ammo"
			{tags add "ammo_brake"}
			{call "ammo_explosion"}
		}
	}
	
	{on "fall"
		{if not "fall"
			{set "fall" 1}
			{auto_operatable 0}
			{weapon_work "gun" 0}
			{play_sound "fall"}
			{reset_manual_control}
			{stat_notify leave}
			{kick_entity_manager}
			
			{impulse up 0.1 com}
			{kill_delay "altitude_checker"}
			{ani_stop "engine_work"}
			{bone hide "engine_work"}
			{delay 5  {call "dead"}}
		}
	}

	{on "_burn" overload
		{auto_operatable 1}
		{add_view "cooking_barrel_aftersmoke" "fire" "engine"}
		
		{if not tagged "burned"
			{if not able "exploded"
				{burn time 12}
				{view start "fire"}
				{tags add "burned"}
				{set "burn_fire" 1}
				{delay 8 2
					{if not tagged "engine_brake"
						{components "engine" break}
						{call "fall"}
					}
					{delay 100
						{set "burn_fire" 0}
						{able "burning" 0}
						{delay 2
							{view stop "fire"}
						}
					}
				}
			}
		}
		{delay 20
			{view stop "fire"}
			{call "_explosion"}
		}
	}

	{on "collide"
		{if  volume "body"
			{call "fall"}
		else volume "part"
			{call "tear_part"}
		}
		{delay 20 {if under_water {delete}}}
	}

	{on "tear_part"
		{spawn "spheredust_small"}
		{component destroy}
		{components "engine" destroy}
		{volume disable contact contact_ground}
		{chassis_work 0}
		{impulse up 0.1 com}
	}

	{on "_explosion" overload
		{kill_crew}
		{able select 0}
		{able repaired 0}
		{clear_inventory}

		{tags add "destroyed"}
		{tags remove "air"}
		{impulse up 0.1 com}

		{delay 5
			{call "dead"}
		}
	}
	
	{on "ammo_explosion"
		{able select 0}
		{clear_inventory}
		{explosive 1}
		{chassis_work 0}
		{reset_manual_control}
		{delay 0.5
			{spawn "ex_air_norm"}
			{blastwave c4 1.25 r0 2 r1 10}
			{delete}
		}
	}

	{on "dead"
		{if not tagged "destroyed"
			{tags add "destroyed"}
			{burn stop}
			{drop_orders}
			{player -1}
			{explosive 0}
			{chassis_work 0}
			{reset_manual_control}
			{stat_notify leave}
			{kick_entity_manager}

			{delay 0.5
				{spawn "ex_air_small"}
				{blastwave c4 0.35 r0 2 r1 8}
				{delete}
			}
		}
	}

	{on "check_water_level" overload
		{if water_level 5
			{if tagged "splash" {delete}}
			{able "sinking" 1}
			{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered

		else water_level -0.75
			{able "sinking" 1}
			{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
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

{"fpv contacting"
	{on fire "gun"
		{bone hide "basis"}
		{stop_sound "engine_work"}
		{stop_sound "fly"}
		{able select 0}
		{able minimap 0}
		{auto_operatable 0}
		{delay 10 {delete}}
	}
}
