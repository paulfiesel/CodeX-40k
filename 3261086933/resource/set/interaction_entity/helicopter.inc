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

{"helicopter"
	{on spawn
		{link_sound	"fall" "vehicle/airborne/fw_deep"}
		{link_sound "false_start"		"vehicle/airborne/false_start"}
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view "smoke_black" "smoke_engine" 		"FXfire1"}
		{add_view "smoke_black" "smoke_rotor" 		"FXfire2"}
		{add_view "smoke_black" "smoke_rotor_back" 	"FXfire3"}
		{add_view "spheredust_heli_test" "heli_dust" 	"basis"}
		{add_view "aero_die" "hit_fx" 	"body"}
		{add_view "flash_gun_small"	"flashbarrel_main1" "foresight14"} ;ordos_debug
		{add_view "flash_gun_small"	"flashbarrel_main2" "foresight1"}
		{add_view "tank_canon_fire_20_25_auto"	"firebarrel01"	"shooter_upk_00"};ordos_debug
		{add_view "tank_canon_fire_20_25_auto"	"firebarrel02"	"shooter_upk_01"}
		{add_view "tank_canon_fire_20_25_auto"	"firebarrel03"	"shooter_upk_02"}
		{add_view "tank_canon_fire_20_25_auto"	"firebarrel04"	"shooter_upk_03"}
		{add_view "exhaust_dark_small2_diesel" "smoke_engine1" 		"fxsmoke1"}
		{add_view "exhaust_dark_small2_diesel" "smoke_engine2" 		"fxsmoke2"}
		{add_view "exhaust_dark_small2_diesel" "smoke_engineah1" 		"fxsmoke2"}
		{add_view "flash_gun_small"	"flashbarrel_ah1" "foresight1"}
		{add_view	"rok_tail"		"flare_left"			"flare1_shooter"}
		{add_view	"rok_tail"		"flare_right"			"flare2_shooter"}
		{add_view	"_chaff_fly"	"chaff_left"			"chaff1_shooter"}
		{add_view	"_chaff_fly"	"chaff_right"			"chaff2_shooter"}
		;{call "update_power"}
		{components "flare_fly_l" break}
		{components "flare_fly_r" break}
		{components "chaff_fly_l" break}
		{components "chaff_fly_r" break}
		;{add_view "rocket_smoke_norm"	"firebarrelah1"	"shooter_r01"}
		;{add_view "rocket_smoke_norm"	"firebarrelah2"	"shooter_r00"}
		;{add_view "tank_canon_fire_20_25_auto"	"flashbarrel01"	"barrel00"};ordos_debug
		{call "link_flare_fx"}
		{call "init_gun"}
		{call "altitude_checker"}

	}

	{on "link_flare_fx"			{link_sound "flare"	"weapon/shot/reactive/Flare"}		}

	{on "add_movement_sound"
		{link_sound "fly"			"vehicle/airborne/helicopter/helicopter_work2" 	}
		{link_sound "engine_start"	"vehicle/airborne/helicopter/helicopter_start" 	}
		{link_sound "engine_work"	"vehicle/airborne/helicopter/helicopter_work2" 	}
		{link_sound "engine_stop"	"vehicle/airborne/helicopter/helicopter_stop" 	}
	}

	{on engine on overload
		{if chassis "helicopter"
			{call "engine_on"}
		else chassis "airborne"
			{call "engine_on"}
		}
	}

	{on "engine_idle" overload ;// settings for engine if it should be on immediately after spawning
		{set "engine_on" 1}
		{set "engine1_start" 1}
		{ani_play "engine_work" loop} ;//causes issues with start animation transisiton, but needed for spawns w/ Engine on
		{play_sound "engine_work" 1}
		{if "engine_on"
			{chassis_work 1}
		else
			{chassis_work 0}
		}
	}

	{on engine off overload
		{call "engine_off"}
	}
	;(include "flares_and_chaff.inc")

	{on bullet_hit
		{if stuff "rus_radar_beam ammo"
			{tags add "rus_target_radar"}
			{delay 0.7
				{tags remove "rus_target_radar"}
			}
		else stuff "usa_radar_beam ammo"
			{tags add "usa_target_radar"}
			{delay 0.7
				{tags remove "usa_target_radar"}
			}
		else stuff "rus_IR_ff_beam ammo"
			{tags add "rus_target_IR_ff"}
			{delay 10
				{tags remove "rus_target_IR_ff"}
			}
		else stuff "usa_IR_ff_beam ammo"
			{tags add "usa_target_IR_ff"}
			{delay 10
				{tags remove "usa_target_IR_ff"}
			}
		}
		{if stuff "proj_pointer"
			{call "check_proj_type"}
			else volume "LampL" {if work "LampL" {spawn "glass_hit"} {components "LampL" break}}
			else  volume "LampR" {if work "LampR" {spawn "glass_hit"} {components "LampR" break}}
			else  volume "LampT" {if work "LampT" {spawn "glass_hit"} {components "LampT" break}}
			else  volume "LampT1" {if work "LampT1" {spawn "glass_hit"} {components "LampT1" break}}
			else  volume "LampT2" {if work "LampT2" {spawn "glass_hit"} {components "LampT2" break}}
		}
		{if stuff "hesh_type_dmg" {spawn "cw_cumulative_frestrict" inv_normal}
		else stuff "cm_type_dmg cm" {spawn "rpg_restrictor" inv_normal}}
	}

	{on "insertion"			;// UI button to toggle insertion
		{chassis_work 0}
		{able select 0}
		{ani_play "lower" callback}
	}

	{on crew out
		{if not tagged "destroyed"
			{tags add "ordos_debug_crew_leave"}
			{ani_play "open" -1}
		     {if altitude 5
			{if chassis "helicopter"
				{delay 0.2
					{if not crew_in_place "driver"
						{if not crew_in_place "gunner"
							{if not crew_in_place "commander"
								{if not crew_in_place "driver1"
									{call "fall"}
								}
							}
						}
					}
				}
			}
		    }
		}
	}



	{on "altitude_checker"

	      {if not tagged "destroyed"

		      	{if rain
		      	     {if not tagged "Wiper_worked"
		      	     	{tags add "Wiper_worked"}
				{ani_play "rain" loop}
			      else
			     }

			else
				{tags remove "Wiper_worked"}
				{ani_stop "rain"}
			}


		{if velocity 20
		 	{if tagged "heli_in_flight"
				{if not tagged "cwhs_nose_down"
		 			{ani_play "cwhs_nose_down"}
		 			{tags add "cwhs_nose_down"}
		 			{tags remove "cwhs_nose_up"}
		 		}
		 	}
		 else tagged "w81_landing"
			 	{if tagged "cwhs_nose_up"
			 		{ani_play "cwhs_nose_up" -1}
					{tags remove "cwhs_nose_down"}
			 		{tags remove "cwhs_nose_up"}
			 	else tagged "cwhs_nose_down"
					{ani_play "cwhs_nose_down" -1}
			 		{tags remove "cwhs_nose_down"}
			 		{tags remove "cwhs_nose_up"}
			 	}
		 else tagged "cwhs_nose_down"
			 	{if not velocity 20
					{ani_play "cwhs_nose_down" -1}
					{tags remove "cwhs_nose_down"}
			 		{tags remove "cwhs_nose_up"}
				}
		 else tagged "cwhs_nose_up"
				{if not velocity 20
					{ani_play "cwhs_nose_up" -1}
					{tags remove "cwhs_nose_down"}
					{tags remove "cwhs_nose_up"}
				}

	       }
		{if altitude 5


			    	 {tags remove "wheel_pullout"}
				 {if not tagged "wheel_pullback"
				   	{tags add "wheel_pullback"}

						{ani_play "wheels" 1 }
						{ani_play "cwhs_hover" loop}
						{play_sound "gear_work"}
						{tags add "heli_in_flight"}
						{tags remove "w81_landing"}
						{view pause "heli_dust"}
						{delay 0.5 "altitude_checker"
							{call "altitude_checker"}
						}


				  else  {delay 0.5 "altitude_checker"  ;//already wheeled,do nothing
							{call "altitude_checker"}
						}
				 }


			else
				{tags remove "wheel_pullback"}
				{if not tagged "wheel_pullout"
					{tags add "wheel_pullout"}
						;{view start "heli_dust"}
						{ani_play "wheels" -1}
						{ani_stop "cwhs_hover"}
						{play_sound "gear_work"}
						{if "engine_on"
							{view start "heli_dust"}
						}
						{tags add "w81_landing"}
						{tags remove "heli_in_flight"}

							{delay 0.5 "altitude_checker"
								{call "altitude_checker"}
							}

				   else  {delay 0.5 "altitude_checker"
							{call "altitude_checker"}
					}
				}


			}
		else {kill_delay "altitude_checker"}
		}

	}

{on "bugout" ;// Bugout button is pressed
		{tags add "bugging_out"}
		{drop_orders}
		{able select 0}
		{ani_play "bug_out_ground"}
		{delay 8 {delete}}
	}
	
	
	{on "heli_unsling"			;// heli_unsling button is pressed
		{if tagged "heli_sling"
			{chassis_work 0}
			{able select 0}
			{ani_play "lower" callback}
		else
		;//nothing
		}
	}


	{on animation_end "lower"
		{delay 0.5
			{with_linked_entity "attach"
				{unlink}
				{impulse up 0.1 com}
			}
			{tags remove "heli_sling"}
			{delay 1
				{ani_play "pause" callback}
			}

		}
	}

	{on animation_end "pause"
		{ani_play "lower" -1}
		{delay 1.5
			{chassis_work 1}
			{able select 1}
		}

	}

	{on animation_end "bug_out"
		{delete}
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

	{on "engine_on" overload
		{if not "engine_on"
			{if altitude 0.5   ;// check altitude
				{chassis_work 1}
				{set "engine_on" 1}
				{tags remove "engine_turned_off"}
				{ani_play "engine_work" loop}
				{play_sound "engine_work" 1}
				{view start "smoke_engine1"}
				{view start "smoke_engine2"}

			else
				{chassis_work 0}
				{set "engine_on" 1}
				;{ani_play "wheels" 1}
				{ani_stop "engine_stop"}
				{stop_sound "engine_stop"}
				{play_sound "engine_start"}
				{view start "smoke_engine1"}
				{view start "smoke_engine2"}
				{view start "heli_dust"}
				{ani_play "engine_start" callback}
				{set "toggle_delay" 1}
				{delay 5 {set "toggle_delay" 0}}
			}
		}
	}

	{on "engine_off" overload				;// engine toggled off
		{if altitude 0.5		;// if altitude above 0.5, do nothing
			{tags add "altitude"}
		else                    ;// if altitude lower than 0.5, turn engine off as normal
			{if "engine_on"
				{if operatable
					;{tags add "engine_turned_off"}
				}
				{tags remove "altitude"}
				{set "engine_on" 0}
				{ani_stop "engine_work"}
				{ani_play "engine_stop"}
				{ani_play "wheels" -1}
				{stop_sound "engine_work"}
				{stop_sound "fly"}
				{play_sound "engine_stop"}
				{view pause "smoke_engine1"}
				{view pause "smoke_engine2"}
				{view pause "heli_dust"}
				{set "toggle_delay" 1}			;// stops accidental double click of UI button
				{delay 5 {set "toggle_delay" 0}}
				{delay 0.6
					{chassis_work 0}
				}
			}
		}
	}

	{on "engine_stop"            ;//immediately kill engine, such as on death
		{kill_delay "engine_stopped"}
		{if "engine_on"
			{set "engine_on" 0}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{ani_play "engine_stop"}
			{view pause "heli_dust"}
			{stop_sound "engine_start"}
			{stop_sound "uh1h_engine_idle"}
			{stop_sound "uh1h_engine_full"}
			{stop_sound "engine_work"}
			{stop_sound "fly"}
		}
	}

	{on move on overload                  ;//vehicle moves forward or reverse
		{if not chassis "helicopter"
			{if not "landing"
				{if "engine_on"
				}
			}
		else
			{call "water_check"}		;//checks water level if spawning in air over water
			;{play_sound "engine_work" 1}
		}
	}

	{on animation_end "engine_start"
		{chassis_work 1}
		{ani_play "engine_work" loop}
		{play_sound "engine_work" 1}
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
			else broken "rotor"
				{movement_limit slow}
				{tags add "move_slow"}
			else broken "rotor_b"
				{movement_limit slow}
				{tags add "move_slow"}
			else broken "body"
				{movement_limit normal}
				{tags add "move_norma1"}
			else
				{movement_limit fast}
				{tags add "move_fast"}
			}
	}

	{on operatable off
		{if not tagged "engine_turned_off" ;// stops engine off sequence from occuring if engine is already turned off.
			{if not chassis "helicopter"
				{call "engine_off"}
			}
		}
	}

	{on pierce sync
		{vehicle_health_damage_pierce}
		{if component "radar"
			{if not tagged "radar_break"
				("stop_damage_sound")
				{play_sound "radar_damage"}
				{damage_report "radar" "component/airborne_M/radar_damaged"}
				{tear "piece_medium_steel" bone "Visor_radar"
					{impulse up 2 1 dir 2 1}
				}
				{spawn "metal_hit_bul"}
			}
		}
	}

	{on blast sync
		{vehicle_health_damage_blast}
	}

	{on blast_hit

		{if min_energy 8
			{call "fall"}
			{tags add "min_energy>=8!!!!"}
			{if volume "part"
				{tags add "hit_part!!!!1111"}
				{call "tear_part"}
			}
		else min_energy 4
			{if rand 0.5
				{tags add "min_energy>=4!!!!"}
				{call "fall"}
			}
			{if volume "part"
				{tags add "hit_part!!!!22222"}
				{call "tear_part"}
			}
		else min_energy 3
			{if rand 0.5
				{tags add "min_energy>=3!!!!"}
				{call "fall"}
			}
			{if volume "part"
				{tags add "hit_part!!!!22222"}
				{call "tear_part"}
			}
		else min_energy 2
			{if rand 0.5
				{tags add "min_energy>=2!!!!"}
				{call "fall"}
			}
			{if volume "part"
				{call "tear_part"}
			}
		}


	}



	{on "fall"
		{tags add "heli_fall!!!ordos_debug1111"}
		{if not "fall"
			{set "fall" 1}
			{impulse up 0.1 com}
			{explosive 1}
			{play_sound "fall"}
			{view stop "smoke_engine1"}
			{view stop "smoke_engine2"}
			("stop_damage_sound")
			{tags add "heli_fall!!!ordos_debug2222"}
			{call "fall_fx"}
		}
	}

	{on "fall_fx"
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

	{on ground_hit sync
		{tags add "heli_ground_hit!!!ordos_debug1111"}
		{call "collide"}
		{delay 0.5
			{tags add "heli_explosion!!!ordos_debug1111"}
			{call "_explosion"}
		}
	}

	{on "break_glass"
		{volume disable bullet contact}
		{spawn "glass_hit2" volume x}
		{delay_ex 0.1 uniq
			{bone cut}
		}
	}

	{on break overload
		{if not tagged "destroyed"
			{call "update_moveable"}
		}
		{if component "body"
			{spawn "car_die_particle"}
		else component "engine"
			{tags add "engine_brake"}
			{spawn "car_die_particle"}
			{view start "smoke2"}
			{call "fall"}
			{delay 40 {view stop "smoke2"}}
			{view start "steam"}
			{delay 2  {view stop "steam"}}
		else component "glass"
			{call "break_glass"}
		}
	}

	{on contact overload sync
		{if not impregnable
			{if effector "small"				;do not crash on small entities
				{if effector "no_slices"		;but crash on x/xx entities
					{call "collide"}
				}
			else effector "construction"
				{if not effector "straw"
					{call "collide"}
				}
			else effector "tree"
				;{if not effector "bush"			;do not crash on bush-like trees with prop "bush"
				;	{call "collide"}
				;}
			else velocity 50					;if moving fast itself, crash on every vehicle
				{if effector "vehicle"
					{call "collide"}
				}
			else effector "armored_car"			;crash on fast moving armored cars
				{if effector_velocity 20
					{call "collide"}
				}
			else effector "car"					;do not crash on cars
				;do nothing
			else effector "tank"				;crash on moving tanks
				{if effector_velocity 10
					{call "collide"}
				}
			else effector "vehicle"				;(failsafe) crash on fast moving vehicles
				{if effector_velocity 20
					{call "collide"}
				}
			}
		}
	}

	{on "collide"
		{if  volume "body"
			{call "explosion"}
		else volume "part"
			{call "tear_part"}
		}
	}

	{on "tear_part"
		{spawn "spheredust_big_short"}
		{component destroy}
		{components "engine" destroy}
		{volume disable contact contact_ground}
		{chassis_work 0}
		{tear "piece_big_airborne_wing" bone from_volume
			{impulse up 2 1 dir 2 1}
		}
		{impulse up 0.1 com}
		{if volume "part6" {bone cut "shooter_upk_00"} {bone cut "shooter_upk_01"}
		else volume "WingL1" {bone cut "shooter_upk_00"} {bone cut "shooter_upk_01"}
		else volume "part7" {bone cut "shooter_upk_02"} {bone cut "shooter_upk_03"}
		else volume "WingR1" {bone cut "shooter_upk_02"} {bone cut "shooter_upk_03"}
		else volume "Part8" {bone cut "Anten_L"}
		else volume "Part9" {bone cut "Anten_R"}
		}
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

	{on "leave_unit" overload
		{if work "body"
			{if not tagged "abandoned"
				{reset_manual_control}

				{if not tagged "emit_label"
					{damage_report "body" "component/leave_unit"}
					{tags add "emit_label"}
					{crew_emit}
				}

				{delay 2 {crew_emit}}
				{delay 8 {if operatable {tags remove "emit_label"}}}
				{delay 15
					{tags add "abandoned"}
					{set "broken" 1}
					{able select 0}
					{able repaired 0}
					{explosive 1}
					{stat_notify leave}
					{player -1}
					{kick_entity_manager}
					{explosive 1}
					{damage_report "body" "component/empty"}
					{damage_report "rotor" "component/empty"}
					{damage_report "gun" "component/empty"}
					{damage_report "engine" "component/empty"}

					{delay 3 1
						{explosive 0}
						{tags add "destroyed"}
						{call "explosion"}
					}
				}
			}
		}
	}

	{on "_explosion" overload
		{kill_crew}
		{with_linked_entity "attach"
			{unlink}
			{impulse up 0.1 com}
		}
		{ani_stop "lower"}
		{ani_stop "pause"}
		{ani_stop "bug_out"}
		{able select 0}
		{clear_inventory}
		{call "die"}
		{add_view "aero_die" "fire" "body"}
		{add_view "aero_die_fire" "fire" "body"}
		{view start "fire"}
		{spawn "aero_die_particle"}
		{start_sound "crush/big/airborne"}
		{tags add "destroyed"}
		{tags remove "air"}

		{impulse up 0.1 com}
		{delay 0.1
			(define "cut_part"
				{if rand %1
					{tear "piece_big_airborne_wing" bone %0
						{impulse up 2 1 dir 2 1}
					}
				}
			)
			("cut_part" args "propeller"	0.5)
			("cut_part" args "propeller1"	0.5)
			("cut_part" args "propeller2"	0.5)
			("cut_part" args "propeller3"	0.5)
			("cut_part" args "propeller4"	0.5)
			("cut_part" args "propeller_b"	0.3)
			("cut_part" args "propeller_b1"	0.3)
			("cut_part" args "propeller_b2"	0.3)
			("cut_part" args "propeller_b3"	0.3)
		}
		{blastwave c4 7 r0 5 r1 8}
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
	{on "deploy_smoke"

		{call "smoke_screen"}						
	}

	{on "smoke_screen"
		{call "drop_flares"}

	}
}

{"helicopter no_explosion"
	{on ground_hit sync
		{call "die"}
		{impulse up 0.1 com}
	}
	{on "_explosion" overload
		{call "die"}
		{impulse up 0.1 com}
		("cut_part" args "propeller"	0.5)
		("cut_part" args "propeller1"	0.5)
		("cut_part" args "propeller2"	0.5)
		("cut_part" args "propeller3"	0.5)
		("cut_part" args "propeller4"	0.5)
		("cut_part" args "propeller_b"	0.3)
		("cut_part" args "propeller_b1"	0.3)
		("cut_part" args "propeller_b2"	0.3)
		("cut_part" args "propeller_b3"	0.3)
	}
	{on "fall_fx" overload
	}
}

{"air_part"
	{on spawn
		{delay 0.1
			{volumes enable contact contact_ground}
		}
		{view stop ""}
		{add_view "smoke_black" "smoke" "root"}
		{view start "smoke"}
		{delay 180 30
			{view stop "smoke"}
		}
	}
	{on ground_hit
		{if min_speed 5
			{spawn "spheredust_big_short"}
		}
	}
}

(define "helicopter2_sound"
	{on "add_movement_sound"
		{link_sound "fly"			"vehicle/airborne/helicopter/helicopter_work1" 	}
		{link_sound "engine_start"	"vehicle/airborne/helicopter/helicopter_start" 	}
		{link_sound "engine_work"	"vehicle/airborne/helicopter/helicopter_work1" 	}
		{link_sound "engine_stop"	"vehicle/airborne/helicopter/helicopter_stop" 	}
	}
)

{"uh-1b"

}

{"ah-1g"
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

{"uh-1b_m22"

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

{"uh-1b_maxwell"

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

{"mil_mi4_heavy"

	{ on spawn
		;("link_damage_sound_rus")
		;{call "altitude_checker"}
		;{view start "smoke_engine1"}
		;{view start "smoke_engine2"}

	}
	{on fire "gun2"

		{spawn "proj_probe_extra_big" "foresight3" x}

	}

}











{"ah-64_apache_heavy"
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

{"uh-60m_blackhawk_mg"
	{on spawn
		;{bone hide "detail_hellfire_l"}
		;{bone hide "detail_hellfire_r"}
		("link_damage_sound_usa")
		;{call "altitude_checker"}
		{view start "smoke_engine1"}
		{view start "smoke_engine2"}
	}


}

{"ah1"
	{on spawn
		;{call "altitude_checker"}
		{view start "smoke_engine1"}
		("link_damage_sound_usa")
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


{"mi-24v"

	("helicopter2_sound")
	{ on spawn
		("link_damage_sound_rus")
		{call "init_gun"}




	}


	{on fire "mgun" overload
		{view start "flashbarrel_main1"}
		{ani_play "fire" loop resume}
		{delay 2
			{ani_stop "fire"}
		}
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


	{on crew in {ani_play "open" 1}}

	{on fire "ptur1" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		(define "fire_barrel"
			name "%0"
			{view start "taill_%0"}
			{delay 0.42
				{view pause "taill_%0"}
			}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
	}
	{on fire "ptur2" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		(define "fire_barrel"
		name "%0"
		{view start "ptur2tail_%0"}
		{delay 0.42
		{view pause "ptur2tail_%0"}
		}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
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
	else ("fire_barrel" args 39)
	}
	}

}

{"mi-24v2"

	("helicopter2_sound")
	{ on spawn
		("link_damage_sound_rus")
		;{call "altitude_checker"}


	}

	{on fire "mgun" overload
		{view start "flashbarrel_main2"}
		{ani_play "fire" loop resume}
		{delay 2
			{ani_stop "fire"}
		}
		{delay 0.42
			{view pause "flashbarrel_main2"}
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"

			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}

	{on fire "ptur1" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		(define "fire_barrel"
			name "%0"
			{view start "taill_%0"}
			{delay 0.42
				{view pause "taill_%0"}
			}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"

			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}
	{on fire "ptur2" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		(define "fire_barrel"
		name "%0"
		{view start "ptur2tail_%0"}
		{delay 0.42
		{view pause "ptur2tail_%0"}
		}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"

			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
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
	else ("fire_barrel" args 39)
	}

	{if tagged "ai_heli"

		   {if not tagged "para_droped"

			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}
}







{"mi28ub"
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
		{add_view 	"rok_tail" 		"taill_00" 		"taill_00"}
		{add_view 	"rok_tail" 		"taill_01" 		"taill_01"}
		{add_view 	"rok_tail" 		"taill_02" 		"taill_02"}
		{add_view 	"rok_tail" 		"taill_03" 		"taill_03"}
		{add_view 	"rok_tail" 		"taill_04" 		"taill_04"}
		{add_view 	"rok_tail" 		"taill_05" 		"taill_05"}
		{add_view 	"rok_tail" 		"taill_06" 		"taill_06"}
		{add_view 	"rok_tail" 		"taill_07" 		"taill_07"}
		{add_view 	"rok_tail" 		"ptur2tail_00" 		"ptur2tail_00"}
		{add_view 	"rok_tail" 		"ptur2tail_01" 		"ptur2tail_01"}
		{add_view 	"rok_tail" 		"ptur2tail_02" 		"ptur2tail_02"}
		{add_view 	"rok_tail" 		"ptur2tail_03" 		"ptur2tail_03"}
		{add_view 	"rok_tail" 		"ptur2tail_04" 		"ptur2tail_04"}
		{add_view 	"rok_tail" 		"ptur2tail_05" 		"ptur2tail_05"}
		{add_view 	"rok_tail" 		"ptur2tail_06" 		"ptur2tail_06"}
		{add_view 	"rok_tail" 		"ptur2tail_07" 		"ptur2tail_07"}
		{add_view 	"flash_cannon_big" 		"taill_00" 		"ptur1shooter_00"}
		{add_view 	"flash_cannon_big" 		"taill_01" 		"ptur1shooter_01"}
		{add_view 	"flash_cannon_big" 		"taill_02" 		"ptur1shooter_02"}
		{add_view 	"flash_cannon_big" 		"taill_03" 		"ptur1shooter_03"}
		{add_view 	"flash_cannon_big" 		"taill_04" 		"ptur1shooter_04"}
		{add_view 	"flash_cannon_big" 		"taill_05" 		"ptur1shooter_05"}
		{add_view 	"flash_cannon_big" 		"taill_06" 		"ptur1shooter_06"}
		{add_view 	"flash_cannon_big" 		"taill_07" 		"ptur1shooter_07"}
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
		;{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight3" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight3"  x}}
		{spawn "cw_cumshassist_spawner_2gen" "Foresight3" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight3"  x}}
		(define "fire_barrel"	name "%0"	{view start "taill_%0"}
			{delay 0.42
				{view pause "taill_%0"}
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
		;{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight4" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight4"  x}}
		{spawn "cw_cumshassist_spawner_2gen" "Foresight4" x}
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
	
    {on fire "gun" overload
		{view start "flashbarrel1"}
		{delay 0.42 {view pause "flashbarrel1"}}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fxshell" x scale 0.05
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}
		}
		("cw_check_shooting" weap_id(gun))
	}
	
	{on "check_pilot_existance" overload
		{if not tagged "destroyed"
			{if chassis "helicopter"
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


{"ah1s"	                                                              		
	{on spawn			
		;{add_view	"flash_zenit"		"flashbarrel1"			"Foresight1"}	
		{add_view	"tank_canon_fire_20_25_auto"		"flashbarrel1"			"Foresight1"}		
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}						
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}			
		{add_view 	"smoke_zenit" 	"zenite_smoke" 		"foresight1"}	                                                                                         									
		{add_view	"flash_cannon_big"		"flashbarrell_00"			"tow_shooterl_00"}			
		{add_view	"flash_cannon_big"		"flashbarrell_01"			"tow_shooterl_01"}	
		{add_view	"flash_cannon_big"		"flashbarrell_02"			"tow_shooterl_02"}			
		{add_view	"flash_cannon_big"		"flashbarrell_03"			"tow_shooterl_03"}	
		{add_view	"flash_cannon_big"		"flashbarrelr_00"			"tow_shooterr_00"}			
		{add_view	"flash_cannon_big"		"flashbarrelr_01"			"tow_shooterr_01"}	
		{add_view	"flash_cannon_big"		"flashbarrelr_02"			"tow_shooterr_02"}			
		{add_view	"flash_cannon_big"		"flashbarrelr_03"			"tow_shooterr_03"}	
					
		("link_damage_sound_usa")	    	
	}	
	{on "add_movement_sound" overload			
		{link_sound "fly"			"vehicle/other/helicopter/AH-1Zengine"			}			
		{link_sound "engine_start"		"vehicle/other/helicopter/AH-1Zen_start"				}			
		{link_sound "engine_work"		"vehicle/other/helicopter/en_work"				}			
		{link_sound "engine_stop"		"vehicle/other/helicopter/AH-1Zen_stop"				}	
	}		
	{on fire "nar1" overload							                  					
		{view start "rok_tail00"}					
		{delay 0.42						
			{view pause "rok_tail00"}					
		}				
		{spawn "startsmoke" inv_normal}						
		{if name "00"				
			{call "fire_gun_common"}			
		}		
	}		
	{on fire "nar2" overload			
		{view start "rok_tail01"}					
		{delay 0.42						
			{view pause "rok_tail01"}					
		}			
		{spawn "startsmoke" inv_normal}						
		{if name "00"				
			{call "fire_gun_common"}			
		}		
	}	                                         		                                              		
	{on fire "ptura" overload			
		("low_speed_bullet")		
		(define "fire_barrell2"	name "%0"	
			;{spawn "proj_probe" "foresighttow" x  
			;	{tags add "tow_shooterl_%0"}
			;}	
			{spawn "cw_cumshassist_spawner_2gen" "foresighttow" x}
			{view start "flashbarrel_%0"}		
			{delay 0.42						
				{view pause "flashbarrel_%0"}					
			}			
		)		
		{if    ("fire_barrell2" args 00)				  
		else ("fire_barrell2" args 01)				  
		else ("fire_barrell2" args 02)				
		else ("fire_barrell2" args 03)
		}	
	}		
	{on fire "pturb" overload			
		("low_speed_bullet")		
		(define "fire_barrelr2"	name "%0"	
			;{spawn "proj_probe" "foresighttow" x  
			;	{tags add "tow_shooterr_%0"}
			;}	
			{spawn "cw_cumshassist_spawner_2gen" "foresighttow" x}
			{view start "flashbarrel_%0"}		
			{delay 0.42						
				{view pause "flashbarrel_%0"}					
			}			
		)		
		{if    ("fire_barrelr2" args 00)				  
		else ("fire_barrelr2" args 01)				  
		else ("fire_barrelr2" args 02)				
		else ("fire_barrelr2" args 03)
		}	
	}	
	{on fire "pturl" overload			
		("low_speed_bullet")		
		(define "fire_barrell"	name "%0"	
			;{spawn "proj_probe" "foresighttow" x  
			;	{tags add "tow_shooterl_%0"}
			;}	
			{spawn "cw_cumshassist_spawner_2gen" "foresighttow" x}			
			{view start "flashbarrell_%0"}							
			{delay 0.42						
				{view pause "flashbarrell_%0"}					
			}			
		)		
		{if    ("fire_barrell" args 00)				  
		else ("fire_barrell" args 01)				  
		else ("fire_barrell" args 02)				
		else ("fire_barrell" args 03)
		}	
	}	
	{on fire "pturr" overload			
		("low_speed_bullet")		
		(define "fire_barrelr"	name "%0"		
			;{spawn "proj_probe" "foresighttow" x  
			;	{tags add "tow_shooterr_%0"}
			;}	
			{spawn "cw_cumshassist_spawner_2gen" "foresighttow" x}			
			{view start "flashbarrelr_%0"}		
			
			{delay 0.42						
				{view pause "flashbarrelr_%0"}					
			}			
		)		
		{if    ("fire_barrelr" args 00)				  
		else ("fire_barrelr" args 01)				  
		else ("fire_barrelr" args 02)				
		else ("fire_barrelr" args 03)
		}	
	}	
	;{on "tear_propeller_up" overload			
	;	{spawn "propeller_hit2" "propeller" x}			
	;	{inherited}		
	;}	
}	



{"allouette_atgm"

	{on fire "gun"

		{spawn "proj_probe_extra_big" "foresight1" x}

	}

}


{"sa342m_pla"

	{on fire "gun2"

		{spawn "proj_probe_extra_big" "foresight3" x}

	}

}



{"para_form_air"

	{on "w81_para"
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


	}

}
{"helicopter heli_sling"
	{on spawn
		{tags add "heli_sling"}
	}
}

{"mi17"
;-------------------------------------------------------------
	{on spawn
;========================================================================================
		{add_view 	"rok_tail" 		"rok_tail1" 		"Rok_tail01"}
		{add_view 	"rok_tail" 		"rok_tail2" 		"Rok_tail02"}
		{add_view 	"rok_tail" 		"rok_tail3" 		"Rok_tail03"}
		{add_view 	"rok_tail" 		"rok_tail4" 		"Rok_tail04"}
		{add_view 	"rok_tail" 		"rok_tail5" 		"Rok_tail05"}
		{add_view 	"rok_tail" 		"rok_tail6" 		"Rok_tail06"}
		("link_damage_sound_rus")
    	}
	{on "link_flare_fx" overload}

	{on fire "nar1" overload
		("low_speed_bullet")
			{view start "rok_tail1"}
			{spawn "startsmoke" inv_normal}
			{delay 0.42
				{view pause "rok_tail1"}
			}
	}
	{on fire "nar2" overload
		("low_speed_bullet")
			{view start "rok_tail2"}
			{spawn "startsmoke" inv_normal}
			{delay 0.42
				{view pause "rok_tail2"}
			}
	}
	{on fire "nar3" overload
		("low_speed_bullet")
			{view start "rok_tail3"}
			{spawn "startsmoke" inv_normal}
			{delay 0.42
				{view pause "rok_tail3"}
			}
	}
	{on fire "nar4" overload
		("low_speed_bullet")
			{view start "rok_tail4"}
			{spawn "startsmoke" inv_normal}
			{delay 0.42
				{view pause "rok_tail4"}
			}
	}
	{on fire "nar5" overload
		("low_speed_bullet")
			{view start "rok_tail5"}
			{spawn "startsmoke" inv_normal}
			{delay 0.42
				{view pause "rok_tail5"}
			}
	}
	{on fire "nar6" overload
		("low_speed_bullet")
			{view start "rok_tail6"}
			{spawn "startsmoke" inv_normal}
			{delay 0.42
				{view pause "rok_tail6"}
			}
	}
;----------------------------------------
	{on "tear_propeller_up" overload
		{spawn "propeller_hit2" "propeller" x}
		{spawn "propeller_hit2" "propeller" x}
		{inherited}
	}
}





{"mi28n"
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
		{add_view 	"rok_tail" 		"taill_00" 		"taill_00"}
		{add_view 	"rok_tail" 		"taill_01" 		"taill_01"}
		{add_view 	"rok_tail" 		"taill_02" 		"taill_02"}
		{add_view 	"rok_tail" 		"taill_03" 		"taill_03"}
		{add_view 	"rok_tail" 		"taill_04" 		"taill_04"}
		{add_view 	"rok_tail" 		"taill_05" 		"taill_05"}
		{add_view 	"rok_tail" 		"taill_06" 		"taill_06"}
		{add_view 	"rok_tail" 		"taill_07" 		"taill_07"}
		{add_view 	"rok_tail" 		"ptur2tail_00" 		"ptur2tail_00"}
		{add_view 	"rok_tail" 		"ptur2tail_01" 		"ptur2tail_01"}
		{add_view 	"rok_tail" 		"ptur2tail_02" 		"ptur2tail_02"}
		{add_view 	"rok_tail" 		"ptur2tail_03" 		"ptur2tail_03"}
		{add_view 	"rok_tail" 		"ptur2tail_04" 		"ptur2tail_04"}
		{add_view 	"rok_tail" 		"ptur2tail_05" 		"ptur2tail_05"}
		{add_view 	"rok_tail" 		"ptur2tail_06" 		"ptur2tail_06"}
		{add_view 	"rok_tail" 		"ptur2tail_07" 		"ptur2tail_07"}
		{add_view 	"flash_cannon_big" 		"taill_00" 		"ptur1shooter_00"}
		{add_view 	"flash_cannon_big" 		"taill_01" 		"ptur1shooter_01"}
		{add_view 	"flash_cannon_big" 		"taill_02" 		"ptur1shooter_02"}
		{add_view 	"flash_cannon_big" 		"taill_03" 		"ptur1shooter_03"}
		{add_view 	"flash_cannon_big" 		"taill_04" 		"ptur1shooter_04"}
		{add_view 	"flash_cannon_big" 		"taill_05" 		"ptur1shooter_05"}
		{add_view 	"flash_cannon_big" 		"taill_06" 		"ptur1shooter_06"}
		{add_view 	"flash_cannon_big" 		"taill_07" 		"ptur1shooter_07"}
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
		;{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight3" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight3"  x}}
		{spawn "cw_cumshassist_spawner_2gen" "Foresight3" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight3"  x}}
		(define "fire_barrel"	name "%0"	{view start "taill_%0"}
			{delay 0.42
				{view pause "taill_%0"}
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
		;{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight4" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight4"  x}}
		{spawn "cw_cumshassist_spawner_2gen" "Foresight4" x}
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
			{if chassis "helicopter"
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

{"ka52k"
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
		{add_view 	"rok_tail" 		"taill_00" 		"taill_00"}
		{add_view 	"rok_tail" 		"taill_01" 		"taill_01"}
		{add_view 	"rok_tail" 		"taill_02" 		"taill_02"}
		{add_view 	"rok_tail" 		"taill_03" 		"taill_03"}
		{add_view 	"rok_tail" 		"taill_04" 		"taill_04"}
		{add_view 	"rok_tail" 		"taill_05" 		"taill_05"}
		{add_view 	"rok_tail" 		"taill_06" 		"taill_06"}
		{add_view 	"rok_tail" 		"taill_07" 		"taill_07"}
		{add_view 	"rok_tail" 		"ptur2tail_00" 		"ptur2tail_00"}
		{add_view 	"rok_tail" 		"ptur2tail_01" 		"ptur2tail_01"}
		{add_view 	"rok_tail" 		"ptur2tail_02" 		"ptur2tail_02"}
		{add_view 	"rok_tail" 		"ptur2tail_03" 		"ptur2tail_03"}
		{add_view 	"rok_tail" 		"ptur2tail_04" 		"ptur2tail_04"}
		{add_view 	"rok_tail" 		"ptur2tail_05" 		"ptur2tail_05"}
		{add_view 	"rok_tail" 		"ptur2tail_06" 		"ptur2tail_06"}
		{add_view 	"rok_tail" 		"ptur2tail_07" 		"ptur2tail_07"}
		{add_view 	"flash_cannon_big" 		"taill_00" 		"shooter_atakal_00"}
		{add_view 	"flash_cannon_big" 		"taill_01" 		"shooter_atakal_01"}
		{add_view 	"flash_cannon_big" 		"taill_02" 		"shooter_atakal_02"}
		{add_view 	"flash_cannon_big" 		"taill_03" 		"shooter_atakal_03"}
		{add_view 	"flash_cannon_big" 		"taill_04" 		"shooter_atakal_04"}
		{add_view 	"flash_cannon_big" 		"taill_05" 		"shooter_atakal_05"}
		{add_view 	"flash_cannon_big" 		"taill_06" 		"shooter_atakal_06"}
		{add_view 	"flash_cannon_big" 		"taill_07" 		"shooter_atakal_07"}
		{add_view 	"flash_cannon_big" 		"tailr_00" 		"shooter_atakar_00"}
		{add_view 	"flash_cannon_big" 		"tailr_01" 		"shooter_atakar_01"}
		{add_view 	"flash_cannon_big" 		"tailr_02" 		"shooter_atakar_02"}
		{add_view 	"flash_cannon_big" 		"tailr_03" 		"shooter_atakar_03"}
		{add_view 	"flash_cannon_big" 		"tailr_04" 		"shooter_atakar_04"}
		{add_view 	"flash_cannon_big" 		"tailr_05" 		"shooter_atakar_05"}
		{add_view 	"flash_cannon_big" 		"tailr_06" 		"shooter_atakar_06"}
		{add_view 	"flash_cannon_big" 		"tailr_07" 		"shooter_atakar_07"}
		("link_damage_sound_rus")

	}

	{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/other/helicopter/MI-28engine"}
		{link_sound "engine_start"		"vehicle/other/helicopter/MI-8en_start"}
		{link_sound "engine_work"		"vehicle/other/helicopter/en_work"}
		{link_sound "engine_stop"		"vehicle/other/helicopter/MI-8en_stop"}
	}

	{on fire "ptur4" overload
		("low_speed_bullet")
		{weapon_work "ptur2" 0} 
		{delay 3 {weapon_work "ptur2" 1}}		
		;{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight3" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight3"  x}}
		{spawn "cw_cumshassist_spawner_2gen" "Foresight3" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight3"  x}}
		(define "fire_barrel"	name "%0"	{view start "taill_%0"}
			{delay 0.42
				{view pause "taill_%0"}
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
	{on fire "ptur3" overload
		("low_speed_bullet")
		{weapon_work "ptur1" 0} 
		{delay 3 {weapon_work "ptur1" 1}}		
		;{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight4" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight4"  x}}
		{spawn "cw_cumshassist_spawner_2gen" "Foresight4" x}
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
	{on fire "nar3" overload
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
    {on fire "gun" overload
		{view start "flashbarrel1"}
		{delay 0.42 {view pause "flashbarrel1"}}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fx_shell" x scale 0.05
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}
		}
		("cw_check_shooting" weap_id(gun))
	}
	
	{on "check_pilot_existance" overload
		{if not tagged "destroyed"
			{if chassis "helicopter"
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


{"ka52"
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
		{add_view 	"rok_tail" 		"taill_00" 		"taill_00"}
		{add_view 	"rok_tail" 		"taill_01" 		"taill_01"}
		{add_view 	"rok_tail" 		"taill_02" 		"taill_02"}
		{add_view 	"rok_tail" 		"taill_03" 		"taill_03"}
		{add_view 	"rok_tail" 		"taill_04" 		"taill_04"}
		{add_view 	"rok_tail" 		"taill_05" 		"taill_05"}
		{add_view 	"rok_tail" 		"taill_06" 		"taill_06"}
		{add_view 	"rok_tail" 		"taill_07" 		"taill_07"}
		{add_view 	"rok_tail" 		"ptur2tail_00" 		"ptur2tail_00"}
		{add_view 	"rok_tail" 		"ptur2tail_01" 		"ptur2tail_01"}
		{add_view 	"rok_tail" 		"ptur2tail_02" 		"ptur2tail_02"}
		{add_view 	"rok_tail" 		"ptur2tail_03" 		"ptur2tail_03"}
		{add_view 	"rok_tail" 		"ptur2tail_04" 		"ptur2tail_04"}
		{add_view 	"rok_tail" 		"ptur2tail_05" 		"ptur2tail_05"}
		{add_view 	"rok_tail" 		"ptur2tail_06" 		"ptur2tail_06"}
		{add_view 	"rok_tail" 		"ptur2tail_07" 		"ptur2tail_07"}
		{add_view 	"flash_cannon_big" 		"taill_00" 		"ptur1shooter_00"}
		{add_view 	"flash_cannon_big" 		"taill_01" 		"ptur1shooter_01"}
		{add_view 	"flash_cannon_big" 		"taill_02" 		"ptur1shooter_02"}
		{add_view 	"flash_cannon_big" 		"taill_03" 		"ptur1shooter_03"}
		{add_view 	"flash_cannon_big" 		"taill_04" 		"ptur1shooter_04"}
		{add_view 	"flash_cannon_big" 		"taill_05" 		"ptur1shooter_05"}
		{add_view 	"flash_cannon_big" 		"taill_06" 		"ptur1shooter_06"}
		{add_view 	"flash_cannon_big" 		"taill_07" 		"ptur1shooter_07"}
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
		{weapon_work "ptur2" 0} 
		{delay 3 {weapon_work "ptur2" 1}}		
		;{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight3" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight3"  x}}
		{spawn "cw_cumshassist_spawner_2gen" "Foresight3" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight3"  x}}
		(define "fire_barrel"	name "%0"	{view start "taill_%0"}
			{delay 0.42
				{view pause "taill_%0"}
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
		{weapon_work "ptur1" 0} 
		{delay 3 {weapon_work "ptur1" 1}}		
		;{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		;{spawn "cw_cumshassist_spawner_1gen" "Foresight4" x}
		;{delay 0.03 {spawn "w81_shtoraassist_spawner_2gen" "Foresight4"  x}}
		{spawn "cw_cumshassist_spawner_2gen" "Foresight4" x}
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
    {on fire "gun" overload
		{view start "flashbarrel1"}
		{delay 0.42 {view pause "flashbarrel1"}}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fx_shell" x scale 0.05
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}
		}
		("cw_check_shooting" weap_id(gun))
	}
	{on "check_pilot_existance" overload
		{if not tagged "destroyed"
			{if chassis "helicopter"
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

{"mi24vm_rus"

	("helicopter2_sound")
	{ on spawn
		("link_damage_sound_rus")
		;{call "altitude_checker"}
		

	}

	{on fire "mgun" overload
		{view start "flashbarrel_main2"}
		{ani_play "fire" loop resume}
		{delay 2
			{ani_stop "fire"}
		}
		{delay 0.42
			{view pause "flashbarrel_main2"}
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}

	{on fire "ptur1" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		(define "fire_barrel"
			name "%0"
			{view start "taill_%0"}
			{delay 0.42
				{view pause "taill_%0"}
			}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}
	{on fire "ptur2" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		(define "fire_barrel"
		name "%0"
		{view start "ptur2tail_%0"}
		{delay 0.42
		{view pause "ptur2tail_%0"}
		}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
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
	else ("fire_barrel" args 39)
	}

	{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}
}


{"mi-24p_2"

	("helicopter2_sound")
	{ on spawn
		("link_damage_sound_rus")
		;{call "altitude_checker"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel00"	"shooterg00"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel01"	"shooterg01"}

	}
	{on fire "gun" 
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelminimum"}
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel_main2"}
		{ani_play "fire" loop resume}
		{delay 2
			{ani_stop "fire"}
		}
		{delay 0.42
			{view pause "flashbarrel_main2"}
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}

	{on fire "ptur1" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		(define "fire_barrel"
			name "%0"
			{view start "taill_%0"}
			{delay 0.42
				{view pause "taill_%0"}
			}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}
	{on fire "ptur2" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		(define "fire_barrel"
		name "%0"
		{view start "ptur2tail_%0"}
		{delay 0.42
		{view pause "ptur2tail_%0"}
		}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
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
	else ("fire_barrel" args 39)
	}

	{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}
}


{"mi-24p_3"
	{on spawn
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
		{add_view 	"rok_tail" 		"rok_tailR00" 		"shooterR00"}
		{add_view 	"rok_tail" 		"rok_tailR01" 		"shooterR01"}
		{add_view 	"rok_tail" 		"rok_tailR02" 		"shooterR02"}
		{add_view 	"rok_tail" 		"rok_tailR03" 		"shooterR03"}
		{add_view 	"rok_tail" 		"rok_tailR04" 		"shooterR04"}
		{add_view 	"rok_tail" 		"rok_tailR05" 		"shooterR05"}
		{add_view 	"rok_tail" 		"rok_tailR06" 		"shooterR06"}
		{add_view 	"rok_tail" 		"rok_tailL00" 		"shooterL00"}
		{add_view 	"rok_tail" 		"rok_tailL01" 		"shooterL01"}
		{add_view 	"rok_tail" 		"rok_tailL02" 		"shooterL02"}
		{add_view 	"rok_tail" 		"rok_tailL03" 		"shooterL03"}
		{add_view 	"rok_tail" 		"rok_tailL04" 		"shooterL04"}
		{add_view 	"rok_tail" 		"rok_tailL05" 		"shooterL05"}
		{add_view 	"rok_tail" 		"rok_tailL06" 		"shooterL06"}
	}
	{on fire "nar1" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tailL%0"}
				{delay 0.42
					{view pause "rok_tailL%0"}
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
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on "tear_propeller_up" overload
		{spawn "propeller_hit2" "propeller" x}
		{inherited}
	}
}


{"mi24vm_ukr"

	("helicopter2_sound")
	{ on spawn
		("link_damage_sound_rus")
		;{call "altitude_checker"}
		{if terrain_fx "ice"
				{tex_mod "ukr"}
			else terrain_fx "snow"
				{tex_mod "ukr"}
			else
				{tex_mod "ukr"}
		}			

	}

	{on fire "mgun" overload
		{view start "flashbarrel_main2"}
		{ani_play "fire" loop resume}
		{delay 2
			{ani_stop "fire"}
		}
		{delay 0.42
			{view pause "flashbarrel_main2"}
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}

	{on fire "ptur1" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		(define "fire_barrel"
			name "%0"
			{view start "taill_%0"}
			{delay 0.42
				{view pause "taill_%0"}
			}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}
	{on fire "ptur2" overload
		("low_speed_bullet")
		{spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		(define "fire_barrel"
		name "%0"
		{view start "ptur2tail_%0"}
		{delay 0.42
		{view pause "ptur2tail_%0"}
		}
		)
		{spawn "startsmoke" inv_normal}
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
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
	else ("fire_barrel" args 39)
	}

	{if tagged "ai_heli"

		   {if not tagged "para_droped"
		
			{call "w81_para"}
			{tags add "para_droped"}
		   }
		}
	}
}

{"allouette_atgm"

	{on fire "gun"

		{spawn "proj_probe_extra_big" "foresight1" x}

	}

}

{"uh1y"
	{on spawn
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
		{add_view 	"rok_tail" 		"rok_tailR00" 		"shooterR00"}
		{add_view 	"rok_tail" 		"rok_tailR01" 		"shooterR01"}
		{add_view 	"rok_tail" 		"rok_tailR02" 		"shooterR02"}
		{add_view 	"rok_tail" 		"rok_tailR03" 		"shooterR03"}
		{add_view 	"rok_tail" 		"rok_tailR04" 		"shooterR04"}
		{add_view 	"rok_tail" 		"rok_tailR05" 		"shooterR05"}
		{add_view 	"rok_tail" 		"rok_tailR06" 		"shooterR06"}
		{add_view 	"rok_tail" 		"rok_tailL00" 		"shooterL00"}
		{add_view 	"rok_tail" 		"rok_tailL01" 		"shooterL01"}
		{add_view 	"rok_tail" 		"rok_tailL02" 		"shooterL02"}
		{add_view 	"rok_tail" 		"rok_tailL03" 		"shooterL03"}
		{add_view 	"rok_tail" 		"rok_tailL04" 		"shooterL04"}
		{add_view 	"rok_tail" 		"rok_tailL05" 		"shooterL05"}
		{add_view 	"rok_tail" 		"rok_tailL06" 		"shooterL06"}
	}
	{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/helicopter/UH-1engine"			}
		{link_sound "engine_start"		"vehicle/helicopter/UH-1en_start"				}
		{link_sound "engine_work"		"vehicle/helicopter/en_work"				}
		{link_sound "engine_stop"		"vehicle/helicopter/UH-1en_stop"				}
	}
	{on fire "nar1" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tailL%0"}
				{delay 0.42
					{view pause "rok_tailL%0"}
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
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on fire "nar2" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tailR%0"}
				{delay 0.42
					{view pause "rok_tailR%0"}
				}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)
			  else ("fire_barrel" args 01)
			  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03)
			  else ("fire_barrel" args 04)
			 else ("fire_barrel" args 25)
			else ("fire_barrel" args 06)
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on "tear_propeller_up" overload
		{spawn "propeller_hit2" "propeller" x}
		{inherited}
	}
}


{"ah6_support_2"
	{on spawn
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
		{add_view 	"rok_tail" 		"rok_tailR00" 		"shooterR00"}
		{add_view 	"rok_tail" 		"rok_tailR01" 		"shooterR01"}
		{add_view 	"rok_tail" 		"rok_tailR02" 		"shooterR02"}
		{add_view 	"rok_tail" 		"rok_tailR03" 		"shooterR03"}
		{add_view 	"rok_tail" 		"rok_tailR04" 		"shooterR04"}
		{add_view 	"rok_tail" 		"rok_tailR05" 		"shooterR05"}
		{add_view 	"rok_tail" 		"rok_tailR06" 		"shooterR06"}
		{add_view 	"rok_tail" 		"rok_tailL00" 		"shooterL00"}
		{add_view 	"rok_tail" 		"rok_tailL01" 		"shooterL01"}
		{add_view 	"rok_tail" 		"rok_tailL02" 		"shooterL02"}
		{add_view 	"rok_tail" 		"rok_tailL03" 		"shooterL03"}
		{add_view 	"rok_tail" 		"rok_tailL04" 		"shooterL04"}
		{add_view 	"rok_tail" 		"rok_tailL05" 		"shooterL05"}
		{add_view 	"rok_tail" 		"rok_tailL06" 		"shooterL06"}
	}
	{on fire "nar1" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tailL%0"}
				{delay 0.42
					{view pause "rok_tailL%0"}
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
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on fire "nar2" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tailR%0"}
				{delay 0.42
					{view pause "rok_tailR%0"}
				}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)
			  else ("fire_barrel" args 01)
			  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03)
			  else ("fire_barrel" args 04)
			 else ("fire_barrel" args 25)
			else ("fire_barrel" args 06)
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on "tear_propeller_up" overload
		{spawn "propeller_hit2" "propeller" x}
		{inherited}
	}
}

{"ah_6m_m134"
	{on spawn
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
		{add_view 	"rok_tail" 		"rok_tailR00" 		"shooterR00"}
		{add_view 	"rok_tail" 		"rok_tailR01" 		"shooterR01"}
		{add_view 	"rok_tail" 		"rok_tailR02" 		"shooterR02"}
		{add_view 	"rok_tail" 		"rok_tailR03" 		"shooterR03"}
		{add_view 	"rok_tail" 		"rok_tailR04" 		"shooterR04"}
		{add_view 	"rok_tail" 		"rok_tailR05" 		"shooterR05"}
		{add_view 	"rok_tail" 		"rok_tailR06" 		"shooterR06"}
		{add_view 	"rok_tail" 		"rok_tailR07" 		"shooterR07"}
		{add_view 	"rok_tail" 		"rok_tailR08" 		"shooterR08"}
		{add_view 	"rok_tail" 		"rok_tailR09" 		"shooterR09"}
		{add_view 	"rok_tail" 		"rok_tailR10" 		"shooterR10"}
		{add_view 	"rok_tail" 		"rok_tailR11" 		"shooterR11"}
		{add_view 	"rok_tail" 		"rok_tailR12" 		"shooterR12"}
		{add_view 	"rok_tail" 		"rok_tailR13" 		"shooterR13"}				
		{add_view 	"rok_tail" 		"rok_tailR14" 		"shooterR14"}
		{add_view 	"rok_tail" 		"rok_tailR15" 		"shooterR15"}
		{add_view 	"rok_tail" 		"rok_tailR24" 		"shooterR24"}
		{add_view 	"rok_tail" 		"rok_tailR25" 		"shooterR25"}
		{add_view 	"rok_tail" 		"rok_tailR26" 		"shooterR26"}
		{add_view 	"rok_tail" 		"rok_tailR27" 		"shooterR27"}
		{add_view 	"rok_tail" 		"rok_tailR28" 		"shooterR28"}
		{add_view 	"rok_tail" 		"rok_tailR29" 		"shooterR29"}
		{add_view 	"rok_tail" 		"rok_tailR30" 		"shooterR30"}
		{add_view 	"rok_tail" 		"rok_tailR31" 		"shooterR31"}
		{add_view 	"rok_tail" 		"rok_tailR35" 		"shooterR35"}
		{add_view 	"rok_tail" 		"rok_tailR36" 		"shooterR36"}
		{add_view 	"rok_tail" 		"rok_tailR37" 		"shooterR37"}


		
		{add_view 	"rok_tail" 		"rok_tailL00" 		"shooterL00"}
		{add_view 	"rok_tail" 		"rok_tailL01" 		"shooterL01"}
		{add_view 	"rok_tail" 		"rok_tailL02" 		"shooterL02"}
		{add_view 	"rok_tail" 		"rok_tailL03" 		"shooterL03"}
		{add_view 	"rok_tail" 		"rok_tailL04" 		"shooterL04"}
		{add_view 	"rok_tail" 		"rok_tailL05" 		"shooterL05"}
		{add_view 	"rok_tail" 		"rok_tailL06" 		"shooterL06"}
		{add_view 	"flash_gun_big" 		"flashbarrel00" 		"shooter00"}		
		{add_view 	"flash_gun_big" 		"flashbarrel01" 		"shooter01"}
	}
	{on fire "nar1" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tailL%0"}
				{delay 0.42
					{view pause "rok_tailL%0"}
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
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on fire "nar2" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tailR%0"}
				{delay 0.42
					{view pause "rok_tailR%0"}
				}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)
			  else ("fire_barrel" args 01)
			  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03)
			  else ("fire_barrel" args 04)
			 else ("fire_barrel" args 25)
			else ("fire_barrel" args 06)
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on fire "mgun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{ani_play "fire1"}		
		{play_sound "mid"}
		{play_sound "far"}
	}		
	{on "tear_propeller_up" overload
		{spawn "propeller_hit2" "propeller" x}
		{inherited}
	}
}




{"uh1y1"
	{on spawn
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
		{add_view 	"rok_tail" 		"rok_tailR00" 		"shooterR00"}
		{add_view 	"rok_tail" 		"rok_tailR01" 		"shooterR01"}
		{add_view 	"rok_tail" 		"rok_tailR02" 		"shooterR02"}
		{add_view 	"rok_tail" 		"rok_tailR03" 		"shooterR03"}
		{add_view 	"rok_tail" 		"rok_tailR04" 		"shooterR04"}
		{add_view 	"rok_tail" 		"rok_tailR05" 		"shooterR05"}
		{add_view 	"rok_tail" 		"rok_tailR06" 		"shooterR06"}
		{add_view 	"rok_tail" 		"rok_tailL00" 		"shooterL00"}
		{add_view 	"rok_tail" 		"rok_tailL01" 		"shooterL01"}
		{add_view 	"rok_tail" 		"rok_tailL02" 		"shooterL02"}
		{add_view 	"rok_tail" 		"rok_tailL03" 		"shooterL03"}
		{add_view 	"rok_tail" 		"rok_tailL04" 		"shooterL04"}
		{add_view 	"rok_tail" 		"rok_tailL05" 		"shooterL05"}
		{add_view 	"rok_tail" 		"rok_tailL06" 		"shooterL06"}
	}
	{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/helicopter/UH-1engine"			}
		{link_sound "engine_start"		"vehicle/helicopter/UH-1en_start"				}
		{link_sound "engine_work"		"vehicle/helicopter/en_work"				}
		{link_sound "engine_stop"		"vehicle/helicopter/UH-1en_stop"				}
	}
	{on fire "nar1" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tailL%0"}
				{delay 0.42
					{view pause "rok_tailL%0"}
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
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on fire "nar2" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tailR%0"}
				{delay 0.42
					{view pause "rok_tailR%0"}
				}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)
			  else ("fire_barrel" args 01)
			  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03)
			  else ("fire_barrel" args 04)
			 else ("fire_barrel" args 25)
			else ("fire_barrel" args 06)
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on "tear_propeller_up" overload
		{spawn "propeller_hit2" "propeller" x}
		{inherited}
	}
}


{"Apache"
;-------------------------------------------------------------
	{on spawn
		{add_view	"flash_zenit"		"flashbarrel1"			"Foresight1"}
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
		{add_view       "autocannon_gilz"		"shell"	"fx_shell"}		
		{add_view 	"smoke_zenit" 	"zenite_smoke" 		"foresight1"}
;========================================================================================
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
;--------------------------------------------------------------------------------------------
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
		{add_view	"flash_cannon_big"		"flashbarrel2"			"Foresight2"}
		{add_view	"flash_cannon_big"		"flashbarrel3"			"Foresight3"}
		{add_view	"flash_cannon_big"		"flashbarrel7"			"Foresight7"}
		{add_view	"flash_cannon_big"		"flashbarrel8"			"Foresight8"}
			("link_damage_sound_usa")
    	}
{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/helicopter/ah-64engine"			}
		{link_sound "engine_start"		"vehicle/helicopter/ah-64en_start"				}
		{link_sound "engine_work"		"vehicle/helicopter/en_work"				}
		{link_sound "engine_stop"		"vehicle/helicopter/ah-64en_stop"				}
}
	{on fire "nar1" overload
		(define "fire_barrel"
			name "%0"
				;{ani_play "fire"}
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
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on fire "nar2" overload
		(define "fire_barrel"
			name "%0"
				;{ani_play "fire"}
				{view start "rok_tail_%0"}
				{delay 0.42
					{view pause "rok_tail_%0"}
				}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)
			  else ("fire_barrel" args 01)
			  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03)
			  else ("fire_barrel" args 04)
			 else ("fire_barrel" args 25)
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
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
;----------------------------------------
	{on "die"
		{bone hide "rocketR00"}
		{bone hide "rocketR01"}
		{bone hide "rocketR02"}
		{bone hide "rocketR03"}
		{bone hide "rocketL00"}
		{bone hide "rocketL01"}
		{bone hide "rocketL02"}
		{bone hide "rocketL03"}
	}
;-------------------------------------------------
	{on fire "ptur1" overload
		("low_speed_bullet")
		{view start "flashbarrel3"}
;		{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		{set "ptur1"}{call "proj_probe"}
		{delay 0.42
			{view pause "flashbarrel3"}
		}
	}
	{on fire "ptur2" overload
		("low_speed_bullet")
		{view start "flashbarrel2"}
;		{spawn "proj_probe" "Foresight2" x  {tags add "Foresight2"}}
		{set "ptur2"}{call "proj_probe"}
		{delay 0.42
			{view pause "flashbarrel2"}
		}
	}
	{on fire "ptur3" overload
		{view start "flashbarrel7"}
		{delay 0.1 {spawn "aim-9l_carrier" "aim-9l_l"  x}}
		{delay 0.42
			{view pause "flashbarrel7"}
		}
	}
	{on fire "ptur4" overload
		{view start "flashbarrel8"}
		{delay 0.1 {spawn "aim-9l_carrier" "aim-9l_r"  x}}
		{delay 0.42
			{view pause "flashbarrel8"}
		}
	}
	{on "tear_propeller_tail"
		{spawn "propeller_hit3" "propeller2" x}
		{spawn "propeller_hit3" "propeller2" x}
		{spawn "propeller_hit3" "propeller2" x}
	}
	{on "tear_propeller_tail1"
			{bone cut "propeller2"}
	}
	{on "tear_propeller_up" overload
		{spawn "propeller_hit2" "propeller" x}
		{inherited}
	}
}

{"Apache_spike"
;-------------------------------------------------------------
	{on spawn
		{add_view	"flash_zenit"		"flashbarrel1"			"Foresight1"}
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
		{add_view       "autocannon_gilz"		"shell"	"fx_shell"}		
		{add_view 	"smoke_zenit" 	"zenite_smoke" 		"foresight1"}
;========================================================================================
		{add_view	 "flash_gun_big"	"shooter_r00"	"shooter_r00"}
		{add_view	 "flash_gun_big"	"shooter_r01"	"shooter_r01"}
		{add_view	 "flash_gun_big"	"shooter_r02"	"shooter_r02"}
		{add_view	 "flash_gun_big"	"shooter_r03"	"shooter_r03"}
		{add_view	 "startsmoke_big"	"shooter_r00"	"tail_r00"}
		{add_view	 "startsmoke_big"	"shooter_r01"	"tail_r01"}
		{add_view	 "startsmoke_big"	"shooter_r02"	"tail_r02"}
		{add_view	 "startsmoke_big"	"shooter_r03"	"tail_r03"}
		{add_view	 "flash_gun_big"	"shooter_l00"	"shooter_l00"}
		{add_view	 "flash_gun_big"	"shooter_l01"	"shooter_l01"}
		{add_view	 "flash_gun_big"	"shooter_l02"	"shooter_l02"}
		{add_view	 "flash_gun_big"	"shooter_l03"	"shooter_l03"}
		{add_view	 "startsmoke_big"	"shooter_l00"	"tail_l00"}
		{add_view	 "startsmoke_big"	"shooter_l01"	"tail_l01"}
		{add_view	 "startsmoke_big"	"shooter_l02"	"tail_l02"}
		{add_view	 "startsmoke_big"	"shooter_l03"	"tail_l03"}
			("link_damage_sound_usa")
    	}
{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/helicopter/ah-64engine"			}
		{link_sound "engine_start"		"vehicle/helicopter/ah-64en_start"				}
		{link_sound "engine_work"		"vehicle/helicopter/en_work"				}
		{link_sound "engine_stop"		"vehicle/helicopter/ah-64en_stop"				}
}
;----------------------------------------
	{on "die"
		{bone hide "rocketR00"}
		{bone hide "rocketR01"}
		{bone hide "rocketR02"}
		{bone hide "rocketR03"}
		{bone hide "rocketL00"}
		{bone hide "rocketL01"}
		{bone hide "rocketL02"}
		{bone hide "rocketL03"}
	}
;-------------------------------------------------
	{on fire "ptur1" overload 
		(define "fire_barrel"
			name "%0"
				{spawn "startsmoke" "shooter_l%0"   x}
;				{spawn "proj_probe" "foresight3"   x {tags add "shooter_l%0"}}
				{set "ptur1"}{call "proj_probe"}
				{view start "shooter_l%0"}
				{delay 0.42
					{view pause "shooter_l%0"}
				}
		)
		{if    ("fire_barrel" args 00)
			  else ("fire_barrel" args 01)
			  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03)
		}
	}
	{on fire "ptur2" overload 
		(define "fire_barrel"
			name "%0"
				{spawn "startsmoke" "shooter_r%0"   x}
;				{spawn "proj_probe" "foresight2"   x {tags add "shooter_r%0"}}
				{set "ptur2"}{call "proj_probe"}
				{view start "shooter_r%0"}
				{delay 0.42
					{view pause "shooter_r%0"}
				}
		)
		{if    ("fire_barrel" args 00)
			  else ("fire_barrel" args 01)
			  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03)
		}
	}
	{on "tear_propeller_tail"
		{spawn "propeller_hit3" "propeller2" x}
		{spawn "propeller_hit3" "propeller2" x}
		{spawn "propeller_hit3" "propeller2" x}
	}
	{on "tear_propeller_tail1"
			{bone cut "propeller2"}
	}
	{on "tear_propeller_up" overload
		{spawn "propeller_hit2" "propeller" x}
		{inherited}
	}
}

{"ah1z"
;-------------------------------------------------------------		
	{on spawn
		{add_view	"tank_canon_fire_20_25_auto"		"flashbarrel1"			"Foresight1"}
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
;========================================================================================
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
;--------------------------------------------------------------------------------------------
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
		{add_view	"flash_cannon_big"		"flashbarrel2"			"Foresight2"}
		{add_view	"flash_cannon_big"		"flashbarrel3"			"Foresight3"}
		{add_view	"flash_cannon_big"		"flashbarrel7"			"Foresight7"}
		{add_view	"flash_cannon_big"		"flashbarrel8"			"Foresight8"}
			("link_damage_sound_usa")
    	}
{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/helicopter/ah-1zengine"			}
		{link_sound "engine_start"		"vehicle/helicopter/ah-1zen_start"				}
		{link_sound "engine_work"		"vehicle/helicopter/en_work"				}
		{link_sound "engine_stop"		"vehicle/helicopter/ah-1zen_stop"				}
}
	{on fire "nar1" overload
		(define "fire_barrel"
			name "%0"
				;{ani_play "fire"}
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
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
	{on fire "nar2" overload
		(define "fire_barrel"
			name "%0"
				;{ani_play "fire"}
				{view start "rok_tail_%0"}
				{delay 0.42
					{view pause "rok_tail_%0"}
				}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)
			  else ("fire_barrel" args 01)
			  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03)
			  else ("fire_barrel" args 04)
			 else ("fire_barrel" args 25)
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
			}
		{if name "00"
			{call "fire_gun_common"}
		}
	}
;----------------------------------------
	{on "die"
		{bone hide "rocketR00"}
		{bone hide "rocketR01"}
		{bone hide "rocketR02"}
		{bone hide "rocketR03"}
		{bone hide "rocketL00"}
		{bone hide "rocketL01"}
		{bone hide "rocketL02"}
		{bone hide "rocketL03"}
	}
;-------------------------------------------------
	{on fire "ptur1" overload
		{weapon_work "ptur2" 0} 
		{delay 3 {weapon_work "ptur2" 1}}
		("low_speed_bullet")
		{view start "flashbarrel3"}
;		{spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		{set "ptur1"}{call "proj_probe"}
		{delay 0.42
			{view pause "flashbarrel3"}
		}
	}
	{on fire "ptur2" overload
		{weapon_work "ptur1" 0} 
		{delay 3 {weapon_work "ptur1" 1}}	
		("low_speed_bullet")
		{view start "flashbarrel2"}
;		{spawn "proj_probe" "Foresight2" x  {tags add "Foresight2"}}
		{set "ptur2"}{call "proj_probe"}
		{delay 0.42
			{view pause "flashbarrel2"}
		}
	}
	{on fire "ptur3" overload
		{view start "flashbarrel7"}
		{delay 0.1 {spawn "aim-9l_carrier" "aim-9l_l"  x}}
		{delay 0.42
			{view pause "flashbarrel7"}
		}
	}
	{on fire "ptur4" overload
		{view start "flashbarrel8"}
		{delay 0.1 {spawn "aim-9l_carrier" "aim-9l_r"  x}}
		{delay 0.42
			{view pause "flashbarrel8"}
		}
	}
	{on "tear_propeller_up" overload
		{spawn "propeller_hit2" "propeller" x}
		{inherited}
	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{delay 0.01
				{spawn "shell_case" "fx_shell" x scale 0.4
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}{delay 180 0.5{hide 3}}
			}
		}
		{delay 5{view pause "zenite_smoke"}}		
	}	
}







{"wildcat_ah11_support"
;-------------------------------------------------------------		
	{on spawn
		{add_view	"tank_canon_fire_20_25_auto"		"flashbarrel1"			"Foresight1"}
		{add_view	"exhaust_dark"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark"	"engine_steam2" "FXsmoke2"}
			("link_damage_sound_usa")
    	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{delay 5{view pause "zenite_smoke"}}		
	}	
}



{"tiger_heavy"
;-------------------------------------------------------------
	{on spawn
		{add_view	"flash_zenit"		"flashbarrel1"			"Foresight1"}
		{add_view	"exhaust_dark_heli"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark_heli"	"engine_steam2" "FXsmoke2"}
		{add_view       "autocannon_gilz"		"shell"	"fx_shell"}		
		{add_view 	"smoke_zenit" 	"zenite_smoke" 		"foresight1"}
;========================================================================================
		{add_view 	"rok_tail" 		"rok_tail_a01" 		"shooter_a01"}
		{add_view 	"rok_tail" 		"rok_tail_a03" 		"shooter_a03"}
		{add_view 	"rok_tail" 		"rok_tail_a05" 		"shooter_a05"}
		{add_view 	"rok_tail" 		"rok_tail_a07" 		"shooter_a07"}
		{add_view 	"rok_tail" 		"rok_tail_a09" 		"shooter_a09"}
		{add_view 	"rok_tail" 		"rok_tail_a11" 		"shooter_a11"}
		{add_view 	"rok_tail" 		"rok_tail_a13" 		"shooter_a13"}
		{add_view 	"rok_tail" 		"rok_tail_a15" 		"shooter_a15"}
		{add_view 	"rok_tail" 		"rok_tail_a17" 		"shooter_a17"}
		{add_view 	"rok_tail" 		"rok_tail_a19" 		"shooter_a19"}
		{add_view 	"rok_tail" 		"rok_tail_a21" 		"shooter_a21"}
{add_view 	"rok_tail" 		"rok_tail_a23" 		"shooter_a23"}
{add_view 	"rok_tail" 		"rok_tail_a25" 		"shooter_a25"}
{add_view 	"rok_tail" 		"rok_tail_a27" 		"shooter_a27"}
{add_view 	"rok_tail" 		"rok_tail_a29" 		"shooter_a29"}
{add_view 	"rok_tail" 		"rok_tail_a31" 		"shooter_a31"}
{add_view 	"rok_tail" 		"rok_tail_a33" 		"shooter_a33"}
{add_view 	"rok_tail" 		"rok_tail_a35" 		"shooter_a35"}
{add_view 	"rok_tail" 		"rok_tail_a37" 		"shooter_a37"}
{add_view 	"rok_tail" 		"rok_tail_a00" 		"shooter_a00"}
{add_view 	"rok_tail" 		"rok_tail_a02" 		"shooter_a02"}
{add_view 	"rok_tail" 		"rok_tail_a04" 		"shooter_a04"}
{add_view 	"rok_tail" 		"rok_tail_a06" 		"shooter_a06"}
{add_view 	"rok_tail" 		"rok_tail_a08" 		"shooter_a08"}
{add_view 	"rok_tail" 		"rok_tail_a10" 		"shooter_a10"}
{add_view 	"rok_tail" 		"rok_tail_a12" 		"shooter_a12"}
{add_view 	"rok_tail" 		"rok_tail_a14" 		"shooter_a14"}
{add_view 	"rok_tail" 		"rok_tail_a16" 		"shooter_a16"}
{add_view 	"rok_tail" 		"rok_tail_a18" 		"shooter_a18"}
{add_view 	"rok_tail" 		"rok_tail_a20" 		"shooter_a20"}
{add_view 	"rok_tail" 		"rok_tail_a22" 		"shooter_a22"}
{add_view 	"rok_tail" 		"rok_tail_a24" 		"shooter_a24"}
{add_view 	"rok_tail" 		"rok_tail_a26" 		"shooter_a26"}
{add_view 	"rok_tail" 		"rok_tail_a28" 		"shooter_a28"}
{add_view 	"rok_tail" 		"rok_tail_a30" 		"shooter_a30"}
{add_view 	"rok_tail" 		"rok_tail_a32" 		"shooter_a32"}
{add_view 	"rok_tail" 		"rok_tail_a34" 		"shooter_a34"}

		{add_view 	"rok_tail" 		"rok_tail_b01" 		"shooter_b01"}
		{add_view 	"rok_tail" 		"rok_tail_b03" 		"shooter_b03"}
		{add_view 	"rok_tail" 		"rok_tail_b05" 		"shooter_b05"}
		{add_view 	"rok_tail" 		"rok_tail_b07" 		"shooter_b07"}
		{add_view 	"rok_tail" 		"rok_tail_b09" 		"shooter_b09"}
		{add_view 	"rok_tail" 		"rok_tail_b11" 		"shooter_b11"}
		{add_view 	"rok_tail" 		"rok_tail_b13" 		"shooter_b13"}
		{add_view 	"rok_tail" 		"rok_tail_b15" 		"shooter_b15"}
		{add_view 	"rok_tail" 		"rok_tail_b17" 		"shooter_b17"}
		{add_view 	"rok_tail" 		"rok_tail_b19" 		"shooter_b19"}
		{add_view 	"rok_tail" 		"rok_tail_b21" 		"shooter_b21"}
{add_view 	"rok_tail" 		"rok_tail_b23" 		"shooter_b23"}
{add_view 	"rok_tail" 		"rok_tail_b25" 		"shooter_b25"}
{add_view 	"rok_tail" 		"rok_tail_b27" 		"shooter_b27"}
{add_view 	"rok_tail" 		"rok_tail_b29" 		"shooter_b29"}
{add_view 	"rok_tail" 		"rok_tail_b31" 		"shooter_b31"}
{add_view 	"rok_tail" 		"rok_tail_b33" 		"shooter_b33"}
{add_view 	"rok_tail" 		"rok_tail_b35" 		"shooter_b35"}
{add_view 	"rok_tail" 		"rok_tail_b37" 		"shooter_b37"}
{add_view 	"rok_tail" 		"rok_tail_b00" 		"shooter_b00"}
{add_view 	"rok_tail" 		"rok_tail_b02" 		"shooter_b02"}
{add_view 	"rok_tail" 		"rok_tail_b04" 		"shooter_b04"}
{add_view 	"rok_tail" 		"rok_tail_b06" 		"shooter_b06"}
{add_view 	"rok_tail" 		"rok_tail_b08" 		"shooter_b08"}
{add_view 	"rok_tail" 		"rok_tail_b10" 		"shooter_b10"}
{add_view 	"rok_tail" 		"rok_tail_b12" 		"shooter_b12"}
{add_view 	"rok_tail" 		"rok_tail_b14" 		"shooter_b14"}
{add_view 	"rok_tail" 		"rok_tail_b16" 		"shooter_b16"}
{add_view 	"rok_tail" 		"rok_tail_b18" 		"shooter_b18"}
{add_view 	"rok_tail" 		"rok_tail_b20" 		"shooter_b20"}
{add_view 	"rok_tail" 		"rok_tail_b22" 		"shooter_b22"}
{add_view 	"rok_tail" 		"rok_tail_b24" 		"shooter_b24"}
{add_view 	"rok_tail" 		"rok_tail_b26" 		"shooter_b26"}
{add_view 	"rok_tail" 		"rok_tail_b28" 		"shooter_b28"}
{add_view 	"rok_tail" 		"rok_tail_b30" 		"shooter_b30"}
{add_view 	"rok_tail" 		"rok_tail_b32" 		"shooter_b32"}
{add_view 	"rok_tail" 		"rok_tail_b34" 		"shooter_b34"}		

;--------------------------------------------------------------------------------------------
		{add_view	"flash_cannon_big"		"flashbarrel2"			"shooter_r00"}
		{add_view	"flash_cannon_big"		"flashbarrel3"			"shooter_r01"}
		{add_view	"flash_cannon_big"		"flashbarrel7"			"shooter_r02"}
		{add_view	"flash_cannon_big"		"flashbarrel8"			"shooter_r03"}
		{add_view	"flash_cannon_big"		"flashbarrer2"			"shooter_l00"}
		{add_view	"flash_cannon_big"		"flashbarrer3"			"shooter_l01"}
		{add_view	"flash_cannon_big"		"flashbarrer7"			"shooter_l02"}
		{add_view	"flash_cannon_big"		"flashbarrer8"			"shooter_l03"}	
			("link_damage_sound_usa")
    	}
{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/helicopter/tiger_engine"			}
		{link_sound "engine_start"		"vehicle/helicopter/tiger_start"				}
		{link_sound "engine_work"		"vehicle/helicopter/en_work"				}
		{link_sound "engine_stop"		"vehicle/helicopter/tiger_stop"				}
}
	{on fire "nar1" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tail_a%0"}
				{delay 0.42	{view pause "rok_tail_a%0"}}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)  else ("fire_barrel" args 01)  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03) else ("fire_barrel" args 04) else ("fire_barrel" args 05)
			else ("fire_barrel" args 06) else ("fire_barrel" args 07) else ("fire_barrel" args 08)
			else ("fire_barrel" args 09) else ("fire_barrel" args 10) else ("fire_barrel" args 11)	
			 else ("fire_barrel" args 12) else ("fire_barrel" args 13) else ("fire_barrel" args 14)
			 else ("fire_barrel" args 15) else ("fire_barrel" args 16) else ("fire_barrel" args 17)
			else ("fire_barrel" args 18) else ("fire_barrel" args 19) else ("fire_barrel" args 20)
			else ("fire_barrel" args 21)
			}
	}
	{on fire "nar2" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tail_b%0"}
				{delay 0.42	{view pause "rok_tail_b%0"}}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)  else ("fire_barrel" args 01)  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03) else ("fire_barrel" args 04) else ("fire_barrel" args 05)
			else ("fire_barrel" args 06) else ("fire_barrel" args 07) else ("fire_barrel" args 08)
			else ("fire_barrel" args 09) else ("fire_barrel" args 10) else ("fire_barrel" args 11)	
			 else ("fire_barrel" args 12) else ("fire_barrel" args 13) else ("fire_barrel" args 14)
			 else ("fire_barrel" args 15) else ("fire_barrel" args 16) else ("fire_barrel" args 17)
			else ("fire_barrel" args 18) else ("fire_barrel" args 19) else ("fire_barrel" args 20)
			else ("fire_barrel" args 21)
			}
	}	
	{on fire "nar3" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tail_c%0"}
				{delay 0.42	{view pause "rok_tail_c%0"}}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)  else ("fire_barrel" args 01)  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03) else ("fire_barrel" args 04) else ("fire_barrel" args 05)
			else ("fire_barrel" args 06) else ("fire_barrel" args 07) else ("fire_barrel" args 08)
			else ("fire_barrel" args 09) else ("fire_barrel" args 10) else ("fire_barrel" args 11)
			}
	}
	{on fire "nar4" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tail_d%0"}
				{delay 0.42	{view pause "rok_tail_d%0"}}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)  else ("fire_barrel" args 01)  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03) else ("fire_barrel" args 04) else ("fire_barrel" args 05)
			else ("fire_barrel" args 06) else ("fire_barrel" args 07) else ("fire_barrel" args 08)
			else ("fire_barrel" args 09) else ("fire_barrel" args 10) else ("fire_barrel" args 11)
			}
	}
;-------------------------------------------------
	{on fire "ptur1" overload
		("low_speed_bullet")
		{view start "flashbarrel3"}
        {spawn "proj_probe" "Foresight3" x  {tags add "Foresight3"}}
		{delay 0.42
			{view pause "flashbarrel3"}
		}
	}
	{on fire "ptur2" overload
		("low_speed_bullet")
		{view start "flashbarrer2"}
        {spawn "proj_probe" "Foresight4" x  {tags add "Foresight4"}}
		{delay 0.42
			{view pause "flashbarrer2"}
		}
	}
	{on fire "ptur3" overload
		{view start "flashbarrel7"}
		{if name "00" {delay 0.1 {spawn "mistral_missile_carrier" "mistral_l_00"  x}}
		else name "01"  {delay 0.1 {spawn "mistral_missile_carrier" "mistral_l_01"  x}}
		}
		{delay 0.42
			{view pause "flashbarrel7"}
		}
	}
	{on fire "ptur4" overload
		{view start "flashbarrel8"}
		{if name "00" {delay 0.1 {spawn "mistral_missile_carrier" "mistral_r_00"  x}}
		else name "01"  {delay 0.1 {spawn "mistral_missile_carrier" "mistral_r_01"  x}}
		}
		{delay 0.42
			{view pause "flashbarrel8"}
		}
	}
}



{"z-10"
;-------------------------------------------------------------
	{on spawn
		{add_view	"tank_canon_fire_20_25_auto"		"flashbarrel1"			"Foresight1"}
		{add_view	"exhaust_dark_heli"	"engine_steam1" "FXsmoke1"}			
		{add_view	"exhaust_dark_heli"	"engine_steam2" "FXsmoke2"}
		{add_view 	"smoke_zenit" 	"zenite_smoke" 		"foresight1"}
;========================================================================================
{add_view 	"rok_tail" 		"rok_tail_a00" 		"tailnar_00"}
{add_view 	"rok_tail" 		"rok_tail_a01" 		"tailnar_01"}
{add_view 	"rok_tail" 		"rok_tail_a02" 		"tailnar_02"}
{add_view 	"rok_tail" 		"rok_tail_a03" 		"tailnar_03"}
{add_view 	"rok_tail" 		"rok_tail_a04" 		"tailnar_04"}
{add_view 	"rok_tail" 		"rok_tail_a05" 		"tailnar_05"}
{add_view 	"rok_tail" 		"rok_tail_a06" 		"tailnar_06"}
{add_view 	"rok_tail" 		"rok_tail_a07" 		"tailnar_07"}
{add_view 	"rok_tail" 		"rok_tail_a08" 		"tailnar_08"}
{add_view 	"rok_tail" 		"rok_tail_a09" 		"tailnar_09"}
{add_view 	"rok_tail" 		"rok_tail_a10" 		"tailnar_10"}
{add_view 	"rok_tail" 		"rok_tail_a11" 		"tailnar_11"}
{add_view 	"rok_tail" 		"rok_tail_a12" 		"tailnar_12"}
{add_view 	"rok_tail" 		"rok_tail_a13" 		"tailnar_13"}
{add_view 	"rok_tail" 		"rok_tail_a14" 		"tailnar_14"}
{add_view 	"rok_tail" 		"rok_tail_a15" 		"tailnar_15"}
{add_view 	"rok_tail" 		"rok_tail_a16" 		"tailnar_16"}
{add_view 	"rok_tail" 		"rok_tail_a17" 		"tailnar_17"}
{add_view 	"rok_tail" 		"rok_tail_a18" 		"tailnar_18"}
{add_view 	"rok_tail" 		"rok_tail_a19" 		"tailnar_19"}
{add_view 	"rok_tail" 		"rok_tail_a20" 		"tailnar_20"}
{add_view 	"rok_tail" 		"rok_tail_a21" 		"tailnar_21"}
{add_view 	"rok_tail" 		"rok_tail_a22" 		"tailnar_22"}
{add_view 	"rok_tail" 		"rok_tail_a23" 		"tailnar_23"}
{add_view 	"rok_tail" 		"rok_tail_a24" 		"tailnar_24"}
{add_view 	"rok_tail" 		"rok_tail_a25" 		"tailnar_25"}
{add_view 	"rok_tail" 		"rok_tail_a26" 		"tailnar_26"}
{add_view 	"rok_tail" 		"rok_tail_a27" 		"tailnar_27"}

;--------------------------------------------------------------------------------------------
		{add_view	"flash_cannon_big"		"flashbarrel2"			"Foresight2"}
		{add_view	"flash_cannon_big"		"flashbarrel3"			"Foresight3"}
    	}
{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/helicopter/wz10_engine"			}
		{link_sound "engine_start"		"vehicle/helicopter/tiger_start"				}
		{link_sound "engine_work"		"vehicle/helicopter/wz10_rotor"				}
		{link_sound "engine_stop"		"vehicle/helicopter/tiger_stop"				}
}
	{on fire "nar" overload
		(define "fire_barrel"
			name "%0"
				{view start "rok_tail_a%0"}
				{delay 0.42	{view pause "rok_tail_a%0"}}
		)
		{spawn "startsmoke" inv_normal}
			{if    ("fire_barrel" args 00)  else ("fire_barrel" args 01)  else ("fire_barrel" args 02)
			else ("fire_barrel" args 03) else ("fire_barrel" args 04) else ("fire_barrel" args 05)
			else ("fire_barrel" args 06) else ("fire_barrel" args 06) else ("fire_barrel" args 07) else ("fire_barrel" args 08)
else ("fire_barrel" args 09) else ("fire_barrel" args 10) else ("fire_barrel" args 11)
else ("fire_barrel" args 12) else ("fire_barrel" args 13) else ("fire_barrel" args 14)
else ("fire_barrel" args 15) else ("fire_barrel" args 16) else ("fire_barrel" args 17)
else ("fire_barrel" args 18) else ("fire_barrel" args 19) else ("fire_barrel" args 20)
else ("fire_barrel" args 21) else ("fire_barrel" args 22) else ("fire_barrel" args 23)
else ("fire_barrel" args 24) else ("fire_barrel" args 25) else ("fire_barrel" args 26)
else ("fire_barrel" args 27) 
			}
	}
	{on fire "ptur1" overload
		("low_speed_bullet")
		{view start "flashbarrel3"}
		{delay 0.42
			{view pause "flashbarrel3"}
		}
	}
	{on fire "ptur2" overload
		("low_speed_bullet")
		{view start "flashbarrel2"}
		{delay 0.42
			{view pause "flashbarrel2"}
		}
	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{delay 0.01
				{spawn "gilza_20mm" "fx_shell" x scale 1.3
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}{delay 180 0.5{hide 3}}
			}
		}
		{delay 5{view pause "zenite_smoke"}}		
	}	
}