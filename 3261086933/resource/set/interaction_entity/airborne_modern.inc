{"il-76td"

	{on spawn
		{delay 0
			{tags add "_lua_mi"}
			
		}

		{delay 1

				{if altitude 15

					{call "takeoff"}
					{tags add "para_altitude_keeper"}
					{tags add "wait_para_player_set"}
					{ani_wind "cargo_open" begin}
					
					
				}

		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}
	}
	{on "link_flare_fx" overload}
	{on "link_engine_effects" overload
		{add_view	"turbovent_exhaust"	"enginea_exhaust"		"enginea_exhaust1"	}
		{add_view	"turbovent_exhaust"	"engineb_exhaust"		"engineb_exhaust1"	}
		{add_view	"turbovent_exhaust"	"enginec_exhaust"		"enginec_exhaust1"	}
		{add_view	"turbovent_exhaust"	"engined_exhaust"		"engined_exhaust1"	}
		{add_view	"turbovent_overburn"		"enginea_overburn"		"enginea_exhaust1"	}
		{add_view	"turbovent_overburn"		"engineb_overburn" 		"engineb_exhaust1"	}
		{add_view	"turbovent_overburn"		"enginec_overburn" 		"enginec_exhaust1"	}
		{add_view	"turbovent_overburn"		"engined_overburn" 		"engined_exhaust1"	}
		{add_view	"turbovent_exhaust"	"enginea_exhaust"		"enginea_exhaust2"	}
		{add_view	"turbovent_exhaust"	"engineb_exhaust"		"engineb_exhaust2"	}
		{add_view	"turbovent_exhaust"	"enginec_exhaust"		"enginec_exhaust2"	}
		{add_view	"turbovent_exhaust"	"engined_exhaust"		"engined_exhaust2"	}
		{add_view	"turbovent_overburn"		"enginea_overburn"		"enginea_exhaust2"	}
		{add_view	"turbovent_overburn"		"engineb_overburn" 		"engineb_exhaust2"	}
		{add_view	"turbovent_overburn"		"enginec_overburn" 		"enginec_exhaust2"	}
		{add_view	"turbovent_overburn"		"engined_overburn" 		"engined_exhaust2"	}
	}
	{on "eject_all" overload}
	{on engine off
		{if tagged "air_brake_ground" {ani_play "air_brake_ground" -1} {tags remove "air_brake_ground"}}
	}
	{on brake on
		{if not tagged "air_brake_ground" {ani_play "air_brake_ground"} {tags add "air_brake_ground"}}
	}
	{on brake off
		{if tagged "air_brake_ground" {ani_play "air_brake_ground" -1} {tags remove "air_brake_ground"}}
	}
	{on "takeoff"
		{if tagged "air_brake_ground" {ani_play "air_brake_ground" -1} {tags remove "air_brake_ground"}}
	}
	{on "tear_part" 
		{if volume "part7" {components "enginea" destroy} {components "Hydrosystem_tank" destroy}
		else volume "part8" {components "engineb" destroy} {components "antifire" destroy}
		else volume "part9" {components "enginec" destroy} {components "antifire" destroy}
		else volume "part10" {components "engined" destroy} {components "Hydrosystem_tank" destroy}
		}
	}
	
	{on overlap begin	
		{if tagged "rampa_open"
			{if effector "can_paradrop_il-76td"
				("load_vehicle")
				{tags add "ordos_debug!!!!!load_vehicle"}
			}	
		}	
	}	
	{on "emit_desant1"	
		{if tagged "place1_busy"
			{delay 0.1 {with_linked_entity "seat00"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat01"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat02"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat03"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat04"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat05"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat06"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat07"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat08"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat09"	{unlink}}}		
			{delay 0.1 {with_linked_entity "seat10"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat11"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat12"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat13"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat14"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat15"	{unlink}}}
			{tags add "plane_test_to_exit"}
		}
	}
	{on "emit_desant2"
		{if tagged "place2_busy"
			{delay 0.1 {with_linked_entity "seat16"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat17"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat18"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat19"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat20"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat21"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat22"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat23"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat24"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat25"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat26"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat27"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat28"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat29"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat30"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat31"	{unlink}}}	
			{tags add "plane_test_to_exit"}
		}
	}
	{on "emit_desant3"	
		{if tagged "place3_busy"	
			{delay 0.1 {with_linked_entity "seat32"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat33"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat34"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat35"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat36"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat37"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat38"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat39"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat40"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat41"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat42"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat43"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat44"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat45"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat46"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat47"	{unlink}}}
			{tags add "plane_test_to_exit"}			
		}	
	}
	{on "drop_desant1"
		{tags add "ordos_debug_il76_droping!!!drop_desant1"}
		{delay 0.1 {with_linked_entity "seat00"	{unlink}}}	
		{delay 0.3 {with_linked_entity "seat01"	{unlink}}}	
		{delay 0.5 {with_linked_entity "seat02"	{unlink}}}	
		{delay 0.7 {with_linked_entity "seat03"	{unlink}}}	
		{delay 0.9 {with_linked_entity "seat04"	{unlink}}}	
		{delay 1.1 {with_linked_entity "seat05"	{unlink}}}	
		{delay 1.3 {with_linked_entity "seat06"	{unlink}}}	
		{delay 1.5 {with_linked_entity "seat07"	{unlink}}}	
		{delay 1.7 {with_linked_entity "seat08"	{unlink}}}	
		{delay 1.9 {with_linked_entity "seat09"	{unlink}}}	
		{delay 2.1 {with_linked_entity "seat10"	{unlink}}}	
		{delay 2.3 {with_linked_entity "seat11"	{unlink}}}	
		{delay 2.5 {with_linked_entity "seat12"	{unlink}}}	
		{delay 2.7 {with_linked_entity "seat13"	{unlink}}}	
		{delay 2.9 {with_linked_entity "seat14"	{unlink}}}	
		{delay 3.1 {with_linked_entity "seat15"	{unlink}}}	
		{tags add "plane_test_to_exit"}
	}
	{on "drop_desant2"
		
		{delay 0.1 {with_linked_entity "seat16"	{unlink}}}	
		{delay 0.3 {with_linked_entity "seat17"	{unlink}}}	
		{delay 0.5 {with_linked_entity "seat18"	{unlink}}}	
		{delay 0.7 {with_linked_entity "seat19"	{unlink}}}		
		{delay 0.9 {with_linked_entity "seat20"	{unlink}}}		
		{delay 1.1 {with_linked_entity "seat21"	{unlink}}}	
		{delay 1.3 {with_linked_entity "seat22"	{unlink}}}	
		{delay 1.5 {with_linked_entity "seat23"	{unlink}}}		
		{delay 1.7 {with_linked_entity "seat24"	{unlink}}}	
		{delay 1.9 {with_linked_entity "seat25"	{unlink}}}	
		{delay 2.1 {with_linked_entity "seat26"	{unlink}}}	
		{delay 2.3 {with_linked_entity "seat27"	{unlink}}}	
		{delay 2.5 {with_linked_entity "seat28"	{unlink}}}	
		{delay 2.7 {with_linked_entity "seat29"	{unlink}}}	
		{delay 2.9 {with_linked_entity "seat30"	{unlink}}}	
		{delay 3.1 {with_linked_entity "seat31"	{unlink}}}	
		{tags add "plane_test_to_exit"}
	}
	{on "drop_desant3"
		{tags add "ordos_debug_il76_droping!!!drop_desant3"}
		{delay 0.1 {with_linked_entity "seat32"	{unlink}}}
		{delay 0.3 {with_linked_entity "seat33"	{unlink}}}	
		{delay 0.5 {with_linked_entity "seat34"	{unlink}}}	
		{delay 0.7 {with_linked_entity "seat35"	{unlink}}}	
		{delay 0.9 {with_linked_entity "seat36"	{unlink}}}	
		{delay 1.1 {with_linked_entity "seat37"	{unlink}}}	
		{delay 1.3 {with_linked_entity "seat38"	{unlink}}}	
		{delay 1.5 {with_linked_entity "seat39"	{unlink}}}	
		{delay 1.7 {with_linked_entity "seat40"	{unlink}}}	
		{delay 1.9 {with_linked_entity "seat41"	{unlink}}}	
		{delay 2.1 {with_linked_entity "seat42"	{unlink}}}	
		{delay 2.3 {with_linked_entity "seat43"	{unlink}}}	
		{delay 2.5 {with_linked_entity "seat44"	{unlink}}}	
		{delay 2.7 {with_linked_entity "seat45"	{unlink}}}	
		{delay 2.9 {with_linked_entity "seat46"	{unlink}}}	
		{delay 3.1 {with_linked_entity "seat47"	{unlink}}}	
		{tags add "plane_test_to_exit"}
	}	
	
	
}


{"a-10c"
	{on "link_engine_effects" overload
		{add_view	"turbovent_exhaust"	"engine1_exhaust"		"engine1_exhaust"	}
		{add_view	"turbovent_exhaust"	"engine2_exhaust" 		"engine2_exhaust"	}
		{add_view	"turbovent_overburn"		"engine1_overburn"		"engine1_exhaust"	}
		{add_view	"turbovent_overburn"		"engine2_overburn" 		"engine2_exhaust"	}
		("link_damage_sound_usa")
		("link_gau8_sounds")
	}

	{on "tear_part" 
		{if volume "part9" {components "engine1" destroy}
		else volume "part10" {components "engine2" destroy}}
		{if component "elevator_l" {components "ECM" destroy}}
	}

	{on "u_w_hydrosystem_damaged"	
		{weapon_work "gun" 0}	
	}
	{on "u_w_Laser_TD_damaged"	
		{weapon_work "ptur" 0}	
		{weapon_work "ptur1" 0}	
		{weapon_work "ptur2" 0}	
	}	

	{on "u_w_electronics_damaged"
		{weapon_work "ptur" 0}
		{weapon_work "ptur1" 0}	
		{weapon_work "ptur2" 0}	
	}

	{on fire "gun"	
		{spawn "tank_canon_fire_small" "foresight1" x}	
		{stop_sound "mid"}
		{stop_sound "far"}
		{stop_sound "action_recoil"}
		{kill_delay "stop_playing_fire"} ; 每次开火时都会打断结束开火音效计时器
		{if not tagged "played_fire_start" ; 播放初始开火音效
			{tags add "played_fire_start"}
			{if rand 0.38 ; (1-x)^2=x, x≈0.38
				{play_sound "3stepfs_start1"}
			else rand 0.38
				{play_sound "3stepfs_start2"}
			else
				{play_sound "3stepfs_start3"}
			} ; 初始开火音效随机3选一
		}
		{if not tagged "fire_loop_begin1" ; 第一发开火不播放循环开火音效
			{tags add "fire_loop_begin1"}
		else not tagged "fire_loop_begin2" ; 第二发开火不播放循环开火音效
			{tags add "fire_loop_begin2"}
		else not tagged "fire_loop_begin3" ; 第三发开火不播放循环开火音效
			{tags add "fire_loop_begin3"}
		else
			{if not tagged "playing_fire_loop" ; 播放循环开火音效
				{tags add "playing_fire_loop"}
				{delay 0.1 ; 等待上面的初始音效播放结束，再播放循环开火音效
					{play_sound "3stepfs_loop" 1}
				}
			}
		}
		{delay 0.2 "stop_playing_fire" ; 结束开火音效计时器，不被打断的话，0.2秒后播放结束开火音效
			{stop_sound "3stepfs_loop"}
			{if rand 0.38 ; (1-x)^2=x, x≈0.38
				{play_sound "3stepfs_stop1"}
			else rand 0.38
				{play_sound "3stepfs_stop2"}
			else
				{play_sound "3stepfs_stop3"}
			} ; 结束开火音效随机3选一
			{tags remove "played_fire_start"}
			{tags remove "fire_loop_begin1"}
			{tags remove "fire_loop_begin2"}
			{tags remove "fire_loop_begin3"}
			{tags remove "playing_fire_loop"}
		}
	}
	


}

{"a-10c_support"
	{on spawn
		{add_view	"flash_cannon_big"		"flashbarrel4"			"Foresight4"}	
		{add_view	"flash_cannon_big"		"flashbarrel3"			"Foresight3"}	
		{add_view	"flash_cannon_big"		"flashbarrel5"			"aim-9l_shooter"}
		{add_view 	"rok_tail" 		"rok_tail00" 		"shooter00"}	
		{add_view 	"rok_tail" 		"rok_tail01" 		"shooter01"}	
		{add_view 	"rok_tail" 		"rok_tail02" 		"shooter02"}	
		{add_view 	"rok_tail" 		"rok_tail03" 		"shooter03"}	
		{add_view 	"rok_tail" 		"rok_tail04" 		"shooter04"}	
		{add_view 	"rok_tail" 		"rok_tail05" 		"shooter05"}	
		{add_view 	"rok_tail" 		"rok_tail06" 		"shooter06"}	
		{add_view 	"rok_tail" 		"rok_tail07" 		"shooter07"}	
		{add_view 	"rok_tail" 		"rok_tail08" 		"shooter08"}	
		{add_view 	"rok_tail" 		"rok_tail09" 		"shooter09"}	
		{add_view 	"rok_tail" 		"rok_tail10" 		"shooter10"}	
		{add_view 	"rok_tail" 		"rok_tail11" 		"shooter11"}	
		{add_view 	"rok_tail" 		"rok_tail12" 		"shooter12"}	
		{add_view 	"rok_tail" 		"rok_tail13" 		"shooter13"}	
		{add_view 	"rok_tail" 		"rok_tail14" 		"shooter14"}	
		{add_view 	"rok_tail" 		"rok_tail15" 		"shooter15"}	
		{add_view 	"rok_tail" 		"rok_tail16" 		"shooter16"}	
		{add_view 	"rok_tail" 		"rok_tail17" 		"shooter17"}	
		{add_view 	"rok_tail" 		"rok_tail18" 		"shooter18"}	
	}

	{on "u_w_Laser_TD_damaged"
		{weapon_work "bomber" 0}
	}
	{on "u_w_electronics_damaged"
		{weapon_work "bomber" 0}	
	}	

	("air_compact_launcher" weapon(ptur1) missile(agm-65g) foresight(Foresight3) flashbarrel(flashbarrel3))	
	("air_compact_launcher" weapon(ptur2) missile(agm-65d) foresight(Foresight4) flashbarrel(flashbarrel4))	
	("air_compact_launcher" weapon(ptur3) missile(aim-9l) foresight(aim-9l_shooter) flashbarrel(flashbarrel5))
	("air_nar_launcher" weapon(nar1) flashbarrel(rok_tail))
}



{"a-10c_support_ai"
	{on spawn
		{add_view	"flash_cannon_big"		"flashbarrel4"			"Foresight4"}	
		{add_view	"flash_cannon_big"		"flashbarrel3"			"Foresight3"}	
		{add_view	"flash_cannon_big"		"flashbarrel5"			"aim-9l_shooter"}
		{add_view 	"rok_tail" 		"rok_tail00" 		"shooter00"}	
		{add_view 	"rok_tail" 		"rok_tail01" 		"shooter01"}	
		{add_view 	"rok_tail" 		"rok_tail02" 		"shooter02"}	
		{add_view 	"rok_tail" 		"rok_tail03" 		"shooter03"}	
		{add_view 	"rok_tail" 		"rok_tail04" 		"shooter04"}	
		{add_view 	"rok_tail" 		"rok_tail05" 		"shooter05"}	
		{add_view 	"rok_tail" 		"rok_tail06" 		"shooter06"}	
		{add_view 	"rok_tail" 		"rok_tail07" 		"shooter07"}	
		{add_view 	"rok_tail" 		"rok_tail08" 		"shooter08"}	
		{add_view 	"rok_tail" 		"rok_tail09" 		"shooter09"}	
		{add_view 	"rok_tail" 		"rok_tail10" 		"shooter10"}	
		{add_view 	"rok_tail" 		"rok_tail11" 		"shooter11"}	
		{add_view 	"rok_tail" 		"rok_tail12" 		"shooter12"}	
		{add_view 	"rok_tail" 		"rok_tail13" 		"shooter13"}	
		{add_view 	"rok_tail" 		"rok_tail14" 		"shooter14"}	
		{add_view 	"rok_tail" 		"rok_tail15" 		"shooter15"}	
		{add_view 	"rok_tail" 		"rok_tail16" 		"shooter16"}	
		{add_view 	"rok_tail" 		"rok_tail17" 		"shooter17"}	
		{add_view 	"rok_tail" 		"rok_tail18" 		"shooter18"}

{delay 0
	{tags add "_lua_mi"}
			
}
		{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
			
		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5 

			{tags add "ai_cas"}
			
		}

		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}
	}

	{on "u_w_Laser_TD_damaged"
		{weapon_work "bomber" 0}
	}
	{on "u_w_electronics_damaged"
		{weapon_work "bomber" 0}	
	}	

	("air_compact_launcher" weapon(ptur1) missile(agm-65g) foresight(Foresight3) flashbarrel(flashbarrel3))	
	("air_compact_launcher" weapon(ptur2) missile(agm-65d) foresight(Foresight4) flashbarrel(flashbarrel4))	
	("air_compact_launcher" weapon(ptur3) missile(aim-9l) foresight(aim-9l_shooter) flashbarrel(flashbarrel5))
	("air_nar_launcher" weapon(nar1) flashbarrel(rok_tail))
}



{"a-10c_at"	
	{on spawn
		{add_view	"flash_cannon_big"		"flashbarrel4"			"Foresight4"}
		{add_view	"flash_cannon_big"		"flashbarrel3"			"Foresight3"}	
		{add_view	"flash_cannon_big"		"flashbarrel5"			"aim-9l_shooter"}
		{delay 0
	{tags add "_lua_mi"}
			
}
	}
	{on "u_w_Laser_TD_damaged"			{weapon_work "bomber" 0}		}
	{on "u_w_electronics_damaged"			{weapon_work "bomber" 0}		}
	("air_gliding_bomber" weapon(bomber1) bomb(cbu-97_impactor) bomber(bomber1_) speed(28) gravity(0.3) spread(5))
	("air_compact_launcher" weapon(ptur1) missile(agm-65d) foresight(foresight3) flashbarrel(flashbarrel3))	
	("air_compact_launcher" weapon(ptur2) missile(agm-65d) foresight(foresight4) flashbarrel(flashbarrel4))	
	("air_compact_launcher" weapon(ptur3) missile(aim-9l) foresight(aim-9l_shooter) flashbarrel(flashbarrel5))
}

{"a-10c_at_ai"	
	{on spawn
		{add_view	"flash_cannon_big"		"flashbarrel4"			"Foresight4"}
		{add_view	"flash_cannon_big"		"flashbarrel3"			"Foresight3"}	
		{add_view	"flash_cannon_big"		"flashbarrel5"			"aim-9l_shooter"}
		
		{delay 0
	{tags add "_lua_mi"}
			
}
		{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5 

			{tags add "ai_cas"}
			
		}

		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}
	}
	{on "u_w_Laser_TD_damaged"			{weapon_work "bomber" 0}		}
	{on "u_w_electronics_damaged"			{weapon_work "bomber" 0}		}
	("air_gliding_bomber" weapon(bomber1) bomb(cbu-97_impactor) bomber(bomber1_) speed(28) gravity(0.3) spread(5))
	("air_compact_launcher" weapon(ptur1) missile(agm-65d) foresight(foresight3) flashbarrel(flashbarrel3))	
	("air_compact_launcher" weapon(ptur2) missile(agm-65d) foresight(foresight4) flashbarrel(flashbarrel4))	
	("air_compact_launcher" weapon(ptur3) missile(aim-9l) foresight(aim-9l_shooter) flashbarrel(flashbarrel5))

	
}


{"a-10c_bomber"

	{on spawn
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}
	}



}

{"a-10c_bomber_ai"

	{on spawn
		{delay 0
	{tags add "_lua_mi"}
			
}
		{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5

			{tags add "ai_cas"}
			
		}
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}

		
	}

	{on "flyout_timer" overload


			{delay 150

				{tags add "plane_test_to_exit"}


			}


		}



}

{"player_control"
	
	{on spawn
		{delay 0.1
			{tags add "plane_fuel_check"}
		}
		{delay 0.1
			{tags add "switch_to_user"}
		}
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}
		{delay 3
			{able select 1}
			
		}

	}
}


{"ai_control"
	
	{on spawn

		{delay 0.5 

			{tags add "switch_to_ai"}
			
		}

		{delay 0.5 

			{tags add "ai_cas"}
			{tags add "altitude_keeper"}
		}
		
		

		{delay 0.5 

			{call "flyout_timer"}
		}
	}
}

{"su-25sm"	
	{on spawn 	
		{add_view "flash_gun_big" "flashbarrel1" "foresight1"}
		{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}	
		{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
	}
	{on "link_engine_effects" overload	
		{add_view	"airstream_exhaust"	"engine1_exhaust"		"engine1_exhaust"	}	
		{add_view	"airstream_exhaust"	"engine2_exhaust" 		"engine2_exhaust"	}	
		{add_view	"turbovent_overburn"		"engine1_overburn"		"engine1_exhaust"	}
		{add_view	"turbovent_overburn"		"engine2_overburn" 		"engine2_exhaust"	}
		("link_damage_sound_rus")
	}

	
	{on "fall"	
		{volumes "fuel_tank_internal_b_vol" disable all}
		{volumes "fuel_tank_internal_c_vol" disable all}	
	}
	{on "scripted_fillipov"	
		{spawn "tank_die_particle"}
		{burn volume "engine2" fx "smoke_black" fake}
		("stop_damage_sound")	
		{play_sound "engine2_damage"}
		{view start "engine2_smoke"}	
		{delay 2	
		{add_view "smoke_dead_norm" "burn_fire2" "engine2_exhaust"}
		{add_view "smoke_black" "burn_fire2" "engine2_exhaust"}	
		{view start "burn_fire2"}		
		{play_sound "flame" 1}	
	}	
	{delay 7
		{play_sound "engine1_damage"}	
		{view start "engine1_smoke"}	
		{burn volume "engine1" fx "smoke_black" fake}	
		{add_view "smoke_dead_norm" "burn_fire1" "engine1_exhaust"}
		{add_view "smoke_black" "burn_fire1" "engine1_exhaust"}		
		{view start "burn_fire1"}	
		{play_sound "flame" 1}	
		}	
	}
}	



{"su-25sm_support"	
	{on "u_w_Laser_TD_damaged"
	{weapon_work "ptur1" 0}		
	{tags add "no_missile_control"}	
	}	
	{on "u_w_electronics_damaged"	
	{weapon_work "ptur1" 0}		
	{weapon_work "ptur2" 0}	
	}	
	("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
	("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
	("air_nar_launcher" weapon(nar1) flashbarrel(B8shooter_))	
	("air_gliding_bomber" weapon(bomber) bomb(rbk_250_impactor) bomber(RBK250_) speed(35) spread(5))
	}


{"su-25sm_support_ai"	

	{on spawn
		{delay 0
	{tags add "_lua_mi"}
			
}
		{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5

			{tags add "ai_cas"}
			
		}
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}

		
	}
	{on "u_w_Laser_TD_damaged"
	{weapon_work "ptur1" 0}		
	{tags add "no_missile_control"}	
	}	
	{on "u_w_electronics_damaged"	
	{weapon_work "ptur1" 0}		
	{weapon_work "ptur2" 0}	
	}	
	("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
	("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
	("air_nar_launcher" weapon(nar1) flashbarrel(B8shooter_))	
	("air_gliding_bomber" weapon(bomber) bomb(rbk_250_impactor) bomber(RBK250_) speed(35) spread(5))
	}


{"su-25sm_support_light"	
	("air_multibarrel_launcher" weapon(ptur2) shooter(Shooter_r73rvvsd_) missile(r-73) flashbarrel(Shooter_r73rvvsd_))
	("air_nar_launcher" weapon(nar1) flashbarrel(B8shooter_))	
	{on fire "nar1_s13"	
		("low_speed_bullet")	
		(define "fire_barrel"	
		name "%0"		
		{view start "tailL%0"}	
		{delay 0.42		
		{view pause "tailL%0"}		
		}		
		)	
		{spawn "startsmoke" inv_normal}		
		{if    ("fire_barrel" args 00)		
		else ("fire_barrel" args 01)		
		else ("fire_barrel" args 02)		
		else ("fire_barrel" args 03)		
		else ("fire_barrel" args 04)		
		}	
	}	
	{on fire "nar2_s13"	
		("low_speed_bullet")		
		(define "fire_barrel"		
		name "%0"			
		{view start "tailR%0"}		
		{delay 0.42			
		{view pause "tailR%0"}		
		}		
		)		
		{spawn "startsmoke" inv_normal}		
		{if    ("fire_barrel" args 00)		
		else ("fire_barrel" args 01)		
		else ("fire_barrel" args 02)		
		else ("fire_barrel" args 03)		
		else ("fire_barrel" args 04)		
		}		
	}	

}

{"su-25sm_support_light_ai"	


	{on spawn
		{delay 0
	{tags add "_lua_mi"}
			
}
		{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5 

			{tags add "ai_cas"}
			
		}
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}

		
	}
	("air_multibarrel_launcher" weapon(ptur2) shooter(Shooter_r73rvvsd_) missile(r-73) flashbarrel(Shooter_r73rvvsd_))
	("air_nar_launcher" weapon(nar1) flashbarrel(B8shooter_))	
	{on fire "nar1_s13"	
		("low_speed_bullet")	
		(define "fire_barrel"	
		name "%0"		
		{view start "tailL%0"}	
		{delay 0.42		
		{view pause "tailL%0"}		
		}		
		)	
		{spawn "startsmoke" inv_normal}		
		{if    ("fire_barrel" args 00)		
		else ("fire_barrel" args 01)		
		else ("fire_barrel" args 02)		
		else ("fire_barrel" args 03)		
		else ("fire_barrel" args 04)		
		}	
	}	
	{on fire "nar2_s13"	
		("low_speed_bullet")		
		(define "fire_barrel"		
		name "%0"			
		{view start "tailR%0"}		
		{delay 0.42			
		{view pause "tailR%0"}		
		}		
		)		
		{spawn "startsmoke" inv_normal}		
		{if    ("fire_barrel" args 00)		
		else ("fire_barrel" args 01)		
		else ("fire_barrel" args 02)		
		else ("fire_barrel" args 03)		
		else ("fire_barrel" args 04)		
		}		
	}	

}




{"su-25sm_accurate"
{on spawn 		
{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{add_view	"flash_cannon_big"		"X-25_shooter_00"			"X-25_shooter_00"}	
{add_view	"flash_cannon_big"		"X-25_shooter_01"			"X-25_shooter_01"}	
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}		
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
}	
{on "u_w_Laser_TD_damaged"	
{weapon_work "ptur1" 0}		
{weapon_work "nar1" 0}		
{tags add "no_missile_control"}	
}	
{on "u_w_electronics_damaged"	
{weapon_work "ptur1" 0}		
{weapon_work "ptur2" 0}		
{weapon_work "nar1" 0}	
}	
("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))
{on fire "nar1"	
("low_speed_bullet")	
(define "fire_barrel"		
name "%0"			
{spawn "startsmoke" "C-25_shooter_%0" x}	
{spawn "startsmoke" "C-25_tail_%0" x}		
)	
{if 
("fire_barrel" args 00)
else ("fire_barrel" args 01)
else ("fire_barrel" args 02)
else ("fire_barrel" args 03)
else ("fire_barrel" args 04)
else ("fire_barrel" args 05)	
}	
}
}


{"su-25sm_accurate_ai"
{on spawn 		
{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{add_view	"flash_cannon_big"		"X-25_shooter_00"			"X-25_shooter_00"}	
{add_view	"flash_cannon_big"		"X-25_shooter_01"			"X-25_shooter_01"}	
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}		
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}

{delay 0
	{tags add "_lua_mi"}
			
}

{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5 

			{tags add "ai_cas"}
			
		}
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}

		

}	
{on "u_w_Laser_TD_damaged"	
{weapon_work "ptur1" 0}		
{weapon_work "nar1" 0}		
{tags add "no_missile_control"}	
}	
{on "u_w_electronics_damaged"	
{weapon_work "ptur1" 0}		
{weapon_work "ptur2" 0}		
{weapon_work "nar1" 0}	
}	
("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))
{on fire "nar1"	
("low_speed_bullet")	
(define "fire_barrel"		
name "%0"			
{spawn "startsmoke" "C-25_shooter_%0" x}	
{spawn "startsmoke" "C-25_tail_%0" x}		
)	
{if 
("fire_barrel" args 00)
else ("fire_barrel" args 01)
else ("fire_barrel" args 02)
else ("fire_barrel" args 03)
else ("fire_barrel" args 04)
else ("fire_barrel" args 05)	
}	
}
}


{"su-25sm_miner"
{on spawn 		
{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{link_sound "kmgu_shoot"	"weapon/shot/reactive/Flare"}	
{link_sound "kmgu_open"	"vehicle/turret/light_m2"}	
}	
{on fire "bomber"	
(define "drop_mine_AT"	
{spawn "ptm-1" "kmgu_n%1_%0" x
{impulse up -2 1 forward 20 rnd_dir 10 com}	
{delay 1 {impulse forward 15 com}}		
{delay 0.5 {impulse forward 15 com}}		
}	
)	
(define "drop_mine_AP"		
{spawn "pfm-1" "kmgu_n%1_%0" x	
{impulse up -2 1 forward 20 rnd_dir 10 com}
{delay 1 {impulse forward 15 com}}		
{delay 0.5 {impulse forward 15 com}}		
}		
)		
(define "fire_barrel"		
{play_sound "kmgu_open"}		
{ani_play "kmgu%0"}		
{delay 0.2 ("drop_mine_AT" args %0 0) ("drop_mine_AT" args %0 0) ("drop_mine_AT" args %0 0) {play_sound "kmgu_shoot"}}	
{delay 0.4 ("drop_mine_AT" args %0 1) ("drop_mine_AT" args %0 1) ("drop_mine_AT" args %0 1) {play_sound "kmgu_shoot"}}	
{delay 0.6 ("drop_mine_AT" args %0 2) ("drop_mine_AT" args %0 2) ("drop_mine_AT" args %0 2) {play_sound "kmgu_shoot"}}	
{delay 0.3 ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)		
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) {play_sound "kmgu_shoot"}				
}			
{delay 0.5 ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) {play_sound "kmgu_shoot"}		
}	
{delay 0.7 ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) {play_sound "kmgu_shoot"}			
}
)	
{if not tagged "su-25_drop_all_mines"	
{if    name "00" ("fire_barrel" args 00)
else name "01" ("fire_barrel" args 01)	
else name "02" ("fire_barrel" args 02)		
else name "03" ("fire_barrel" args 03)		
else name "04" ("fire_barrel" args 04)	
else name "05" ("fire_barrel" args 05)	
else name "06" ("fire_barrel" args 06)	
else name "07" ("fire_barrel" args 07)	
}	
else		
("fire_barrel" args 00)	
("fire_barrel" args 01)		
{delay 0.5 ("fire_barrel" args 02)}
{delay 0.5 ("fire_barrel" args 03)}
{delay 1 ("fire_barrel" args 04)}	
{delay 1 ("fire_barrel" args 05)}	
{delay 1.5 ("fire_barrel" args 06)}	
{delay 1.5 ("fire_barrel" args 07)}
}	
}
}	
{"su-25sm_strike"	
{on spawn 			
{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}
{add_view	"flash_cannon_big"		"X-25_shooter_00"			"X-25_shooter_00"}
{add_view	"flash_cannon_big"		"X-25_shooter_01"			"X-25_shooter_01"}
{add_view	"flash_cannon_big"		"X-25_shooter_02"			"X-25_shooter_02"}
{add_view	"flash_cannon_big"		"X-25_shooter_03"			"X-25_shooter_03"}
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}		
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
}	
{on "u_w_Laser_TD_damaged"	
{weapon_work "ptur1" 0}			
{tags add "no_missile_control"}	
}	
{on "u_w_electronics_damaged"	
{weapon_work "ptur1" 0}			
{weapon_work "ptur2" 0}	
}	
("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
("air_gliding_bomber" weapon(bomber) bomb(odab_500_impactor) bomber(bomber_) speed(35) spread(5))	}	

{"su-25sm_AT"
{on spawn 			{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}	
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
{add_view "flash_zenit"			"sppu00"	"sppu_shooter_00"}		
{add_view "flash_zenit"			"sppu01"	"sppu_shooter_01"}	
{add_view "flash_zenit"			"sppu02"	"sppu_shooter_02"}	
{add_view "flash_zenit"			"sppu03"	"sppu_shooter_03"}	
{bone hide "Gun_sppu_break_00"}			{bone hide "Gun_sppu_break_01"}	
}	
{on "u_w_Laser_TD_damaged"		
{weapon_work "nar1" 0}		
{tags add "no_missile_control"}	
}
{on "u_w_electronics_damaged"		
{weapon_work "nar1" 0}			
{weapon_work "ptur2" 0}		
{weapon_work "mgun" 0}
}	
{on fire "nar1"		
("low_speed_bullet")	
(define "fire_barrel"	
name "%0"		
{spawn "startsmoke" "C-25_shooter_%0" x}			
{spawn "startsmoke" "C-25_tail_%0" x}	
)		

{if    ("fire_barrel" args 00) else ("fire_barrel" args 01) }		}
("air_gliding_bomber" weapon(bomber) bomb(rbk_500_impactor) bomber(bomber1_) speed(35) spread(5))
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
{on fire "mgun" overload	
{if name "00"			
{view start "sppu00"}	{delay 0.42	{view pause "sppu00"}}		
else  name "01"				{view start "sppu01"}	{delay 0.42	{view pause "sppu01"}}	
else  name "02"				{view start "sppu02"}	{delay 0.42	{view pause "sppu02"}}	
else  name "03"				{view start "sppu03"}	{delay 0.42	{view pause "sppu03"}}	
}	
}	
{on "tear_wingl1"		
{bone cut "Gun_sppu_00"}	
{bone show "Gun_sppu_break_00"}	
}	
{on "tear_wingr1"	
{bone cut "Gun_sppu_01"}		
{bone show "Gun_sppu_break_01"}	
}	
}

{"su-25sm_AT_ai"
{on spawn 			{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}	
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
{add_view "flash_zenit"			"sppu00"	"sppu_shooter_00"}		
{add_view "flash_zenit"			"sppu01"	"sppu_shooter_01"}	
{add_view "flash_zenit"			"sppu02"	"sppu_shooter_02"}	
{add_view "flash_zenit"			"sppu03"	"sppu_shooter_03"}	
{bone hide "Gun_sppu_break_00"}			{bone hide "Gun_sppu_break_01"}	

{delay 0
	{tags add "_lua_mi"}
			
}

{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5 

			{tags add "ai_cas"}
			
		}
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}

		
}	
{on "u_w_Laser_TD_damaged"		
{weapon_work "nar1" 0}		
{tags add "no_missile_control"}	
}
{on "u_w_electronics_damaged"		
{weapon_work "nar1" 0}			
{weapon_work "ptur2" 0}		
{weapon_work "mgun" 0}
}	
{on fire "nar1"		
("low_speed_bullet")	
(define "fire_barrel"	
name "%0"		
{spawn "startsmoke" "C-25_shooter_%0" x}			
{spawn "startsmoke" "C-25_tail_%0" x}	
)		

{if    ("fire_barrel" args 00) else ("fire_barrel" args 01) }		}
("air_gliding_bomber" weapon(bomber) bomb(rbk_500_impactor) bomber(bomber1_) speed(35) spread(5))
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
{on fire "mgun" overload	
{if name "00"			
{view start "sppu00"}	{delay 0.42	{view pause "sppu00"}}		
else  name "01"				{view start "sppu01"}	{delay 0.42	{view pause "sppu01"}}	
else  name "02"				{view start "sppu02"}	{delay 0.42	{view pause "sppu02"}}	
else  name "03"				{view start "sppu03"}	{delay 0.42	{view pause "sppu03"}}	
}	
}	
{on "tear_wingl1"		
{bone cut "Gun_sppu_00"}	
{bone show "Gun_sppu_break_00"}	
}	
{on "tear_wingr1"	
{bone cut "Gun_sppu_01"}		
{bone show "Gun_sppu_break_01"}	
}	
}





{"jh-7a"
	{on spawn
		{add_view "flash_gun_big" "flashbarrel1" "foresight1"}
		{add_view	"flash_cannon_big"		"Shooter_pl5_00"			"Shooter_pl5_00"}
		{add_view	"flash_cannon_big"		"Shooter_pl5_01"			"Shooter_pl5_01"}
		{add_view	"flash_cannon_big"		"Shooter_pl8_00"			"Shooter_pl8_00"}
		{add_view	"flash_cannon_big"		"Shooter_pl8_01"			"Shooter_pl8_01"}
		{add_view	"flash_cannon_big"		"Shooter_main_00"			"Shooter_main_00"}
		{add_view	"flash_cannon_big"		"Shooter_main_01"			"Shooter_main_01"}
		{add_view	"flash_cannon_big"		"Shooter_main_02"			"Shooter_main_02"}
		{add_view	"flash_cannon_big"		"Shooter_main_03"			"Shooter_main_03"}

		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}
	}

	{on "u_w_hydrosystem_damaged"		}
	{on "u_w_radarX_damaged"		}	
	{on "u_w_electronics_damaged"
		{call "fall"}	
	}

	{on "u_w_Laser_TD_damaged"
		{weapon_work "nar" 0}
	}
	{on "u_w_radar_TD_damaged"
		{weapon_work "ptur2" 0}	
	}
	("air_multibarrel_launcher" weapon(ptur) shooter(Shooter_pl5_) missile(pl5e2) flashbarrel(Shooter_pl5_))
	("air_multibarrel_launcher" weapon(ptur1) shooter(Shooter_pl8_) missile(pl8b) flashbarrel(Shooter_pl8_))
	{on fire "bomber" {with_linked_entity "driver"	{volumes "body_c" disable bullet} {delay 1 {volumes "body_c" enable bullet}}} }	
	{on fire "bomber1" {with_linked_entity "driver"	{volumes "body_c" disable bullet} {delay 1 {volumes "body_c" enable bullet}}} }
}

{"il-76td_sprutsd"

	{on spawn
			;{tags add "il76td_para"}
			;{tags add "place1_busy"}
			;{tags add "wait_para_player_set"}
					
			
	}
	
	{on "crew_transport" overload
			{tags add "target_plane"}
			{delay 0 {with_linked_entity "vdv_crewman1"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman2"
					{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman3"
				{tags add "transport_crew"}
			}}
			{delay 0.1 {with_linked_entity "vehicle1"
			{tags add "target_vehicle"}
			}}
		
	}
	
	{on "start_paradrop_process"
			{damage_report "body" "component/cargobay_opened"}
				{delay 1
					{call "open_cargo"}
				}
		
	}
	
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}

	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "start_paradrop_process"}
			}
		}
	}
	
	



}


{"il-76td_bmd2"


	{on spawn
			;{tags add "il76td_para"}
			;{tags add "place1_busy"}
			;{tags add "wait_para_player_set"}
					
		
	}
	
	{on "crew_transport" overload
			{tags add "target_plane"}
			{delay 0 {with_linked_entity "vdv_crewman1"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman2"
					{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman3"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman4"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman5"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman6"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman7"
				{tags add "transport_crew"}
			}}
			{delay 0.1 {with_linked_entity "vehicle1"
			{tags add "target_vehicle"}
			}}
		
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "start_paradrop_process"
			{damage_report "body" "component/cargobay_opened"}
				{delay 1
					{call "open_cargo"}
				}
	}

	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "start_paradrop_process"}
			}
		}
	}


}

{"il-76td_humvee"


	{on spawn
			;{tags add "il76td_para"}
			;{tags add "place1_busy"}
			;{tags add "wait_para_player_set"}
					
		
	}
	
	{on "crew_transport" overload
			{tags add "target_plane"}
			{delay 0 {with_linked_entity "vdv_crewman1"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman2"
					{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman3"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman4"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman5"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman6"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman7"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman8"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman9"
				{tags add "transport_crew"}
			}}			
			{delay 0.1 {with_linked_entity "vehicle1"
			{tags add "target_vehicle"}
			}}
			{delay 0.1 {with_linked_entity "vehicle2"
			{tags add "target_vehicle"}
			}}
			{delay 0.1 {with_linked_entity "vehicle3"
			{tags add "target_vehicle"}
			}}			
		
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "start_paradrop_process"
			{damage_report "body" "component/cargobay_opened"}
				{delay 1
					{call "open_cargo"}
				}
	}

	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "start_paradrop_process"}
			}
		}
	}


}



{"il-76td_bmd4"


	{on spawn
			;{tags add "il76td_para"}
			;{tags add "place1_busy"}
			;{tags add "wait_para_player_set"}
					
		
	}
	
	{on "crew_transport" overload
			{tags add "target_plane"}
			{delay 0 {with_linked_entity "vdv_crewman1"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman2"
					{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman3"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman4"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman5"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman6"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman7"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman8"
				{tags add "transport_crew"}
			}}	
			{delay 0 {with_linked_entity "vdv_crewman9"
				{tags add "transport_crew"}
			}}				
			{delay 0.1 {with_linked_entity "vehicle1"
			{tags add "target_vehicle"}
			}}
		
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "start_paradrop_process"
			{damage_report "body" "component/cargobay_opened"}
				{delay 1
					{call "open_cargo"}
				}
	}

	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "start_paradrop_process"}
			}
		}
	}


}

{"il-76td_btrd_zu"


	{on spawn
			;{tags add "il76td_para"}
			;{tags add "place1_busy"}
			;{tags add "wait_para_player_set"}
					
		
	}
	
	{on "crew_transport" overload
			{tags add "target_plane"}
			{delay 0 {with_linked_entity "vdv_crewman1"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman2"
					{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman3"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman4"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman5"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman6"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman7"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman8"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman9"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman10"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman11"
				{tags add "transport_crew"}
			}}			
			{delay 0.1 {with_linked_entity "vehicle1"
			{tags add "target_vehicle"}
			}}
		
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "start_paradrop_process"
			{damage_report "body" "component/cargobay_opened"}
				{delay 1
					{call "open_cargo"}
				}
	}

	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "start_paradrop_process"}
			}
		}
	}


}


{"il-76td_2s9"

	{on spawn
			;{tags add "il76td_para"}
			;{tags add "place1_busy"}
			;{tags add "wait_para_player_set"}
					
			
	}
	
	{on "crew_transport" overload
			{tags add "target_plane"}
			{delay 0 {with_linked_entity "vdv_crewman1"
				{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman2"
					{tags add "transport_crew"}
			}}
			{delay 0 {with_linked_entity "vdv_crewman3"
				{tags add "transport_crew"}
			}}
			{delay 0.1 {with_linked_entity "vehicle1"
			{tags add "target_vehicle"}
			}}
		
	}
	
	{on "start_paradrop_process"
			{damage_report "body" "component/cargobay_opened"}
				{delay 1
					{call "open_cargo"}
				}
		
	}
	
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}

	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "start_paradrop_process"}
			}
		}
	}
	
	



}



{"il-76td_para"

	{on spawn
			;{tags add "para_action_keeper"}
			{tags remove "place1_busy"}
			;{tags add "wait_para_player_set"}
					
	}
	
	{on "drop_paratrooper"
		
		{damage_report "body" "component/cargobay_opened"}
		{delay 0.1
			{call "open_cargo"}
		}
		
	}
	
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "crew_transport" overload
												 
		{delay 0.1											
			{for_each_link
					{tags add "transport_crew"}
			}
		}		

		{delay 2											
			{for_each_link
					{tags remove "transport_crew"}
			}
		}	
	}
	
	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "drop_paratrooper"}
			}
		}
	}


}


{"il-76td_para_ai"
	
	{on spawn
		
		;{delay 5
			{tags add "airborne_ai_para"}
			
		;}
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "drop_paratrooper"
		
		{damage_report "body" "component/cargobay_opened"}
		{tags remove "place1_busy"}
		{delay 0.1
			{call "open_cargo"}
		}
		
	}

}



{"an-12"
		{on "link_engine_effects" overload
			{add_view	"exhaust_dark_big"		"enginea_exhaust"		"enginea_exhaust"	}
			{add_view	"exhaust_dark_big"		"engineb_exhaust" 		"engineb_exhaust"	}
			{add_view	"exhaust_dark_big"		"enginec_exhaust"		"enginec_exhaust"	}
			{add_view	"exhaust_dark_big"		"engined_exhaust" 		"engined_exhaust"	}
		}
		{on "link_flare_fx" overload}
		{on "add_movement_sound" overload
			{link_sound "engine_start"		"vehicle/airborne/C47/vehicle_airborne_C47_start_01"	}
			{link_sound "engine_work"		"vehicle/airborne/C47/vehicle_airborne_C47_full_01"	}
			{link_sound "engine_stop"		"vehicle/airborne/C47/vehicle_airborne_C47_stop"	}
			{link_sound "fly"			"vehicle/airborn/bkg/C47_bkg"			}
			{link_sound "overburn"		"vehicle/airborne/vehicle_airborne_C47_accelerate"			}
		}
		{on "fall"
			{bone hide "Anten"}
		}
		{on fire "gun"
			{spawn "tank_canon_fire_small" inv_normal}
		}
		{on overlap begin
			{if tagged "rampa_open"
				{if effector "can_paradrop_an-12"
					("load_vehicle")
				}
			}
		}
		{on "eject_all" overload}
		{on "emit_desant1"
			{if tagged "place1_busy"
				{delay 0.1 {with_linked_entity "seat00"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat01"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat02"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat03"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat04"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat05"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat06"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat07"	{unlink}	}}
				{tags add "plane_test_to_exit"}
		    }
		}
		{on "emit_desant2"
			{if tagged "place2_busy"
				{delay 0.1 {with_linked_entity "seat08"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat09"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat10"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat11"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat12"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat13"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat14"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat15"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat16"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat17"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat18"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat19"	{unlink}	}}
				{tags add "plane_test_to_exit"}				
			}
		}
		{on "drop_desant1"
			{delay 0.1 {with_linked_entity "seat00"	{unlink}	}}	
			{delay 0.3 {with_linked_entity "seat01"	{unlink}	}}	
			{delay 0.5 {with_linked_entity "seat02"	{unlink}	}}	
			{delay 0.7 {with_linked_entity "seat03"	{unlink}	}}	
			{delay 0.9 {with_linked_entity "seat04"	{unlink}	}}	
			{delay 1.1 {with_linked_entity "seat05"	{unlink}	}}	
			{delay 1.3 {with_linked_entity "seat06"	{unlink}	}}	
			{delay 1.5 {with_linked_entity "seat07"	{unlink}	}}	
			{tags add "plane_test_to_exit"}
		}
		{on "drop_desant2"
			{delay 0.1 {with_linked_entity "seat08"	{unlink}	}}
			{delay 0.3 {with_linked_entity "seat09"	{unlink}	}}
			{delay 0.5 {with_linked_entity "seat10"	{unlink}	}}	
			{delay 0.7 {with_linked_entity "seat11"	{unlink}	}}	
			{delay 0.9 {with_linked_entity "seat12"	{unlink}	}}	
			{delay 1.1 {with_linked_entity "seat13"	{unlink}	}}	
			{delay 1.3 {with_linked_entity "seat14"	{unlink}	}}	
			{delay 1.5 {with_linked_entity "seat15"	{unlink}	}}	
			{delay 1.7 {with_linked_entity "seat16"	{unlink}	}}	
			{delay 1.9 {with_linked_entity "seat17"	{unlink}	}}	
			{delay 2.1 {with_linked_entity "seat18"	{unlink}	}}	
			{delay 2.3 {with_linked_entity "seat19"	{unlink}	}}
			{tags add "plane_test_to_exit"}
		}
	}


	{"an-12_mp"
		{on spawn	
			{tags add "place1_busy"}
			{ani_wind "vehicle1_in" end}
			{bone show "platform1"}
			{tags add "place2_busy"}
			{ani_wind "vehicle2_in" end}
			{bone show "platform2"}
		}
	}
	{"an-12bk"	
		{on "emit_desant1"	
			{if tagged "place1_busy"
				{delay 0.1 {with_linked_entity "seat00"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat01"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat02"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat03"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat04"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat05"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat06"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat07"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat08"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat09"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat10"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat11"	{unlink}	}}	
			}
		}	
		{on "emit_desant2"	
			{if tagged "place2_busy"
				{delay 0.1 {with_linked_entity "seat12"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat13"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat14"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat15"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat16"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat17"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat18"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat19"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat20"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat21"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat22"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat23"	{unlink}	}}
				{delay 0.1 {with_linked_entity "seat24"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat25"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat26"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat27"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat28"	{unlink}	}}	
				{delay 0.1 {with_linked_entity "seat29"	{unlink}	}}	
			}	
		}
		{on "drop_desant1"	
			{delay 0.1 {with_linked_entity "seat00"	{unlink}	}}	
			{delay 0.3 {with_linked_entity "seat01"	{unlink}	}}	
			{delay 0.5 {with_linked_entity "seat02"	{unlink}	}}	
			{delay 0.7 {with_linked_entity "seat03"	{unlink}	}}	
			{delay 0.9 {with_linked_entity "seat04"	{unlink}	}}	
			{delay 1.1 {with_linked_entity "seat05"	{unlink}	}}	
			{delay 1.3 {with_linked_entity "seat06"	{unlink}	}}	
			{delay 1.5 {with_linked_entity "seat07"	{unlink}	}}	
			{delay 1.7 {with_linked_entity "seat08"	{unlink}	}}	
			{delay 1.9 {with_linked_entity "seat09"	{unlink}	}}	
			{delay 2.2 {with_linked_entity "seat10"	{unlink}	}}	
			{delay 2.4 {with_linked_entity "seat11"	{unlink}	}}	
		}
		{on "drop_desant2"	
			{delay 0.1 {with_linked_entity "seat12"	{unlink}	}}	
			{delay 0.3 {with_linked_entity "seat13"	{unlink}	}}	
			{delay 0.5 {with_linked_entity "seat14"	{unlink}	}}	
			{delay 0.7 {with_linked_entity "seat15"	{unlink}	}}	
			{delay 0.9 {with_linked_entity "seat16"	{unlink}	}}	
			{delay 1.1 {with_linked_entity "seat17"	{unlink}	}}	
			{delay 1.3 {with_linked_entity "seat18"	{unlink}	}}	
			{delay 1.5 {with_linked_entity "seat19"	{unlink}	}}	
			{delay 1.7 {with_linked_entity "seat20"	{unlink}	}}	
			{delay 1.9 {with_linked_entity "seat21"	{unlink}	}}	
			{delay 2.1 {with_linked_entity "seat22"	{unlink}	}}	
			{delay 2.3 {with_linked_entity "seat23"	{unlink}	}}	
			{delay 2.5 {with_linked_entity "seat24"	{unlink}	}}	
			{delay 2.7 {with_linked_entity "seat25"	{unlink}	}}	
			{delay 2.9 {with_linked_entity "seat26"	{unlink}	}}	
			{delay 3.1 {with_linked_entity "seat27"	{unlink}	}}	
			{delay 3.3 {with_linked_entity "seat28"	{unlink}	}}	
			{delay 3.5 {with_linked_entity "seat29"	{unlink}	}}	
		}
		{on "check_vdvstate"
			{if tagged "place1_busy"
				{ani_wind "vehicle1_in" end}
				{if not tagged "dont_drop"
					{bone show "platform1"}
				}
			}	
		}
	}
	
	
	{"c130"		
	{on spawn
		{delay 0
			{tags add "_lua_mi"}
			
		}

		{delay 1

				{if altitude 15

					{call "takeoff"}
					{tags add "para_altitude_keeper"}
					{tags add "wait_para_player_set"}
					{ani_wind "cargo_open" begin}
					
				}

		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}
	}
	{on "emit_desant1"		      
		{if tagged "place1_busy"			
			{delay 0.1 {with_linked_entity "seat02"	{unlink}}}	
			{delay 0.1 {with_linked_entity "seat03"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat04"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat05"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat06"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat07"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat08"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat09"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat10"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat11"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat12"	{unlink}}}			
			{delay 0.1 {with_linked_entity "seat13"	{unlink}}}	
			{tags add "plane_test_to_exit"}
		}		
	}		
		{on "emit_desant2"		      
			{if tagged "place2_busy"			
			{delay 0.1 {with_linked_entity "seat14"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat15"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat16"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat17"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat18"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat19"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat20"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat21"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat22"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat23"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat24"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat25"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat26"	{unlink}	}}			
			{delay 0.1 {with_linked_entity "seat27"	{unlink}	}}
			{tags add "plane_test_to_exit"}
			}		
		}		
		{on "drop_desant1"						
			{delay 0.5 {with_linked_entity "seat02"	{unlink}	}}			
			{delay 0.7 {with_linked_entity "seat03"	{unlink}	}}			
			{delay 0.9 {with_linked_entity "seat04"	{unlink}	}}			
			{delay 1.1 {with_linked_entity "seat05"	{unlink}	}}			
			{delay 1.3 {with_linked_entity "seat06"	{unlink}	}}			
			{delay 1.5 {with_linked_entity "seat07"	{unlink}	}}			
			{delay 1.7 {with_linked_entity "seat08"	{unlink}	}}			
			{delay 1.9 {with_linked_entity "seat09"	{unlink}	}}			
			{delay 2.2 {with_linked_entity "seat10"	{unlink}	}}			
			{delay 2.4 {with_linked_entity "seat11"	{unlink}	}}
			{tags add "plane_test_to_exit"}
		}		
		{on "drop_desant2"			
			{delay 0.1 {with_linked_entity "seat12"	{unlink}	}}			
			{delay 0.3 {with_linked_entity "seat13"	{unlink}	}}			
			{delay 0.5 {with_linked_entity "seat14"	{unlink}	}}			
			{delay 0.7 {with_linked_entity "seat15"	{unlink}	}}			
			{delay 0.9 {with_linked_entity "seat16"	{unlink}	}}			
			{delay 1.1 {with_linked_entity "seat17"	{unlink}	}}			
			{delay 1.3 {with_linked_entity "seat18"	{unlink}	}}			
			{delay 1.5 {with_linked_entity "seat19"	{unlink}	}}			
			{delay 1.7 {with_linked_entity "seat20"	{unlink}	}}			
			{delay 1.9 {with_linked_entity "seat21"	{unlink}	}}			
			{delay 2.1 {with_linked_entity "seat22"	{unlink}	}}			
			{delay 2.3 {with_linked_entity "seat23"	{unlink}	}}			
			{delay 2.5 {with_linked_entity "seat24"	{unlink}	}}			
			{delay 2.7 {with_linked_entity "seat25"	{unlink}	}}			
			{delay 2.9 {with_linked_entity "seat26"	{unlink}	}}			
			{delay 3.1 {with_linked_entity "seat27"	{unlink}	}}
			{tags add "plane_test_to_exit"}
		}	
	{on "check_vdvstate"	      
		{if tagged "place1_busy" {ani_wind "vehicle1_in" end} {if not tagged "dont_drop" {bone show "platform1"}}}	                                                                                                                    
	}
}


{"c130_para"

	{on spawn
			;{tags add "il76td_para"}
			{tags remove "place1_busy"}
			;{tags add "wait_para_player_set"}
					
	}
	
	{on "drop_paratrooper"
		
		{damage_report "body" "component/cargobay_opened"}
		{delay 0.1
			{call "open_cargo"}
		}
		
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	
	{on "crew_transport" overload
												 
		{delay 0.1											
			{for_each_link
					{tags add "transport_crew"}
			}
		}		

		{delay 2											
			{for_each_link
					{tags remove "transport_crew"}
			}
		}	
	}
	
	{on blast_hit
		{if stuff "paratank_trigger"
				{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "drop_paratrooper"}
			}
		}
	}


}


{"c130_lav25"


	{on spawn
			;{tags add "il76td_para"}
			;{tags add "place1_busy"}
		
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "crew_transport" overload
			{delay 0.1											
			{for_each_link
					{tags add "transport_crew"}
			}
		}		

		{delay 2											
			{for_each_link
					{tags remove "transport_crew"}
			}
		}	
		
	}
	
	{on "start_paradrop_process"
			{damage_report "body" "component/cargobay_opened"}
				{delay 1
					{call "open_cargo"}
				}
	}

	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "start_paradrop_process"}
			}
		}
	}


}
	
{"c130_wiesel_tow"


	{on spawn
			;{tags add "il76td_para"}
			;{tags add "place1_busy"}
		
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "crew_transport" overload
			{delay 0.1											
			{for_each_link
					{tags add "transport_crew"}
			}
		}		

		{delay 2											
			{for_each_link
					{tags remove "transport_crew"}
			}
		}	
		
	}
	
	{on "start_paradrop_process"
			{damage_report "body" "component/cargobay_opened"}
				{delay 1
					{call "open_cargo"}
				}
	}

	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "start_paradrop_process"}
			}
		}
	}


}	

{"c130_wiesel_gun"


	{on spawn
			;{tags add "il76td_para"}
			;{tags add "place1_busy"}
		
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "crew_transport" overload
			{delay 0.1											
			{for_each_link
					{tags add "transport_crew"}
			}
		}		

		{delay 2											
			{for_each_link
					{tags remove "transport_crew"}
			}
		}	
		
	}
	
	{on "start_paradrop_process"
			{damage_report "body" "component/cargobay_opened"}
				{delay 1
					{call "open_cargo"}
				}
	}

	{on blast_hit
		{if stuff "paratank_trigger"
			{call "para_player_set"}
			{delay 0.5
				{call "crew_transport"}
			}
			{delay 1
				{call "start_paradrop_process"}
			}
		}
	}


}
			
{"c130_para_ai"
	
	{on spawn
		{tags add "airborne_ai_para"}
	}
	{on "flyout_timer" overload

			{delay 60

				{tags add "plane_test_to_exit"}
			}
	}
	{on "drop_paratrooper"
		
		{damage_report "body" "component/cargobay_opened"}
		{tags remove "place1_busy"}
		{delay 0.1
			{call "open_cargo"}
		}
		
	}

}
			
			
			
{"f-16c"
	{on spawn 
		{add_view "flash_gun_big" "flashbarrel1" "foresight1"}
		{add_view	"flash_cannon_big"		"AIM120C_shooter_00"			"AIM120C_shooter_00"}
		{add_view	"flash_cannon_big"		"AIM120C_shooter_01"			"AIM120C_shooter_01"}
		{add_view	"flash_cannon_big"		"AIM120C_shooter_02"			"AIM120C_shooter_02"}
		{add_view	"flash_cannon_big"		"AIM120C_shooter_03"			"AIM120C_shooter_03"}
		{add_view	"flash_cannon_big"		"AIM9M_shooter_00"			"AIM9M_shooter_00"}
		{add_view	"flash_cannon_big"		"AIM9M_shooter_01"			"AIM9M_shooter_01"}
		{add_view	"flash_cannon_big"		"AIM9M_shooter_02"			"AIM9M_shooter_02"}
		{add_view	"flash_cannon_big"		"AIM9M_shooter_03"			"AIM9M_shooter_03"}
		{add_view	"flash_cannon_big"		"AGM-86-88_shooter_00"			"AGM-86-88_shooter_00"}
		{add_view	"flash_cannon_big"		"AGM-86-88_shooter_01"			"AGM-86-88_shooter_01"}	
		{add_view	"flash_cannon_big"		"AGM-65G_shooter_00"			"AGM-65G_shooter_00"}	
		{add_view	"flash_cannon_big"		"AGM-65G_shooter_01"			"AGM-65G_shooter_01"}	
		{add_view	"flash_cannon_big"		"flashbarrel4"			"missile_r_rot1"}	
		{add_view	"flash_cannon_big"		"flashbarrel5"			"missile_l_rot1"}
		("link_damage_sound_usa")
	}

	{on "u_w_hydrosystem_damaged"	
		{weapon_work "ptur" 0}	
		{weapon_work "bomber" 0}
		{weapon_work "gun" 0}	
	}
	{on "u_w_radarX_damaged"
		{weapon_work "ptur" 0}	
		{weapon_work "ptur1" 0}	
		{weapon_work "ptur3" 0}	
		{weapon_work "ptur5" 0}	
	}
	{on "u_w_electronics_damaged"	
		{call "fall"}
	}
	("air_multibarrel_launcher" weapon(ptur) shooter(AIM120C_shooter_) missile(aim-120c7) flashbarrel(AIM120C_shooter_))
	("air_multibarrel_launcher" weapon(ptur1) shooter(AIM9M_shooter_) missile(aim-9l) flashbarrel(AIM9M_shooter_))	
	("air_compact_launcher" weapon(ptur2) missile(agm-65d) foresight(Foresight5) flashbarrel(flashbarrel5))	
	("air_compact_launcher" weapon(ptur3) missile(agm-65d) foresight(Foresight4) flashbarrel(flashbarrel4))	
	("air_multibarrel_launcher" weapon(ptur4) shooter(AGM-65G_shooter_) missile(agm-65g) flashbarrel(AGM-65G_shooter_))
	{on fire "bomber2"	
		{if name "00"	
			{delay 0.2 {spawn "agm-154_carrier" "bomberb_00" x}}
		else  name "01"	
			{delay 0.2 {spawn "agm-154_carrier" "bomberb_01" x}}
		}
	}
	{on "_burn" overload	
		{damage_report "engine" "component/burn_fire"}	
		{log "burn_volume"}	
		{if not burned		
			{log "burn_engine"}
			("burn_engine" engine(1) engine1(0) engine2(0) enginea(0) engineb(0) enginec(0) engined(0))	
		}
	}
	{on "antifire_work" overload
		{call "antifire_not_work"}
		{delay 10	
			{if volume "engine" {components "engine" break}}
		}	
	}
}	


{"f-16c_antirad"	
	("air_multibarrel_launcher" weapon(ptur5) shooter(AGM-86-88_shooter_) missile(agm88) flashbarrel(AGM-86-88_shooter_))
}			

{"su-34"
	{on spawn
		{add_view "flash_gun_big" "flashbarrel1" "foresight1"}
		{add_view	"flash_cannon_big"		"Shooter_r73rvvsd_00"			"Shooter_r73rvvsd_00"}
		{add_view	"flash_cannon_big"		"Shooter_r73rvvsd_01"			"Shooter_r73rvvsd_01"}
		{add_view	"flash_cannon_big"		"Shooter_r73rvvsd_02"			"Shooter_r73rvvsd_02"}
		{add_view	"flash_cannon_big"		"Shooter_r73rvvsd_03"			"Shooter_r73rvvsd_03"}
		{add_view	"flash_cannon_big"		"Shooter_r27_00"			"Shooter_r27_00"}
		{add_view	"flash_cannon_big"		"Shooter_r27_01"			"Shooter_r27_01"}
		{add_view	"flash_cannon_big"		"Shooter_r27_02"			"Shooter_r27_02"}
		{add_view	"flash_cannon_big"		"Shooter_r27_03"			"Shooter_r27_03"}
		{add_view	"flash_cannon_big"		"Shooter_r27_04"			"Shooter_r27_04"}
		{add_view	"flash_cannon_big"		"Shooter_r27_05"			"Shooter_r27_05"}
		{add_view	"flash_cannon_big"		"Shooter_r31_00"			"Shooter_r31_00"}
		{add_view	"flash_cannon_big"		"Shooter_r31_01"			"Shooter_r31_01"}
		{add_view	"flash_cannon_big"		"Shooter_r31_02"			"Shooter_r31_02"}
		{add_view	"flash_cannon_big"		"Shooter_r31_03"			"Shooter_r31_03"}
		{add_view	"flash_cannon_big"		"Shooter_r31_04"			"Shooter_r31_04"}
		{add_view	"flash_cannon_big"		"Shooter_r31_05"			"Shooter_r31_05"}
		{add_view	"flash_cannon_big"		"Shooter_r31a_00"			"Shooter_r31a_00"}
		{add_view	"flash_cannon_big"		"Shooter_r31a_01"			"Shooter_r31a_01"}
		{add_view	"flash_cannon_big"		"Shooter_r31a_02"			"Shooter_r31a_02"}
		{add_view	"flash_cannon_big"		"Shooter_x58_00"			"Shooter_x58_00"}
		{add_view	"flash_cannon_big"		"Shooter_x58_01"			"Shooter_x58_01"}
		{add_view	"flash_cannon_big"		"Shooter_x58_02"			"Shooter_x58_02"}
		{add_view	"flash_cannon_big"		"Shooter_x58_03"			"Shooter_x58_03"}
		{add_view	"flash_cannon_big"		"Shooter_x58_04"			"Shooter_x58_04"}
		{add_view	"flash_cannon_big"		"Shooter_x58_05"			"Shooter_x58_05"}
		{add_view	"flash_cannon_big"		"Shooter_x59_00"			"Shooter_x59_00"}
		{add_view	"flash_cannon_big"		"Shooter_x59_01"			"Shooter_x59_01"}
		{add_view	"flash_cannon_big"		"Shooter_x59_02"			"Shooter_x59_02"}
		("link_damage_sound_rus")
	}
	{on "u_w_radarX_damaged"
		{weapon_work "ptur1" 0}	
		{weapon_work "ptur3" 0}
		{weapon_work "ptur5" 0}	
	}
	{on "u_w_Radar_TD_damaged"
		{weapon_work "ptur6" 0}	
	}	
	{on "u_w_electronics_damaged"	  
		{weapon_work "ptur1" 0}	
		{weapon_work "ptur3" 0}	
		{weapon_work "ptur5" 0}	
		{weapon_work "ptur6" 0}	
	}
	("air_multibarrel_launcher" weapon(ptur) shooter(Shooter_r73rvvsd_) missile(r-73) flashbarrel(Shooter_r73rvvsd_))
	("air_multibarrel_launcher" weapon(ptur1) shooter(Shooter_r27_) missile(r_27er) flashbarrel(Shooter_r27_))
	("air_multibarrel_launcher" weapon(ptur2) shooter(Shooter_r31_) missile(x31p) flashbarrel(Shooter_r31_))
	("air_multibarrel_launcher" weapon(ptur3) shooter(Shooter_r73rvvsd_) missile(rvv-sd) flashbarrel(Shooter_r73rvvsd_))	
	("air_multibarrel_launcher" weapon(ptur5) shooter(Shooter_x58_) missile(x-38mte) flashbarrel(Shooter_x58_))	
	("air_multibarrel_launcher" weapon(ptur6) shooter(Shooter_x59_) missile(x59x) flashbarrel(Shooter_x59_))
	{on fire "bomber"
		{with_linked_entity "driver"
			{volumes "body_c" disable bullet}
			{delay 1
				{volumes "body_c" enable bullet}
			}
		}	
		{with_linked_entity "driver1"
			{volumes "body_c" disable bullet} 
			{delay 1 
				{volumes "body_c" enable bullet}
			}
		}
	}
	{on fire "bomber1"
		{with_linked_entity "driver"
			{volumes "body_c" disable bullet}
			{delay 1
				{volumes "body_c" enable bullet}
			}
		}
		{with_linked_entity "driver1"
			{volumes "body_c" disable bullet}
			{delay 1
				{volumes "body_c" enable bullet}
			}
		}
	}
	{on fire "bomber2" 
		{with_linked_entity "driver"
			{volumes "body_c" disable bullet}
			{delay 1
				{volumes "body_c" enable bullet}
			}
		}
		{with_linked_entity "driver1"
			{volumes "body_c" disable bullet} 
			{delay 1
				{volumes "body_c" enable bullet}
			}
		}
	}
}

{"su-25sm"	
	{on spawn 	
		{add_view "flash_gun_big" "flashbarrel1" "foresight1"}
		{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}	
		{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
	}
	{on "link_engine_effects" overload	
		{add_view	"airstream_exhaust"	"engine1_exhaust"		"engine1_exhaust"	}	
		{add_view	"airstream_exhaust"	"engine2_exhaust" 		"engine2_exhaust"	}	
		{add_view	"turbovent_overburn"		"engine1_overburn"		"engine1_exhaust"	}
		{add_view	"turbovent_overburn"		"engine2_overburn" 		"engine2_exhaust"	}
		("link_damage_sound_rus")
	}

	
	{on "fall"	
		{volumes "fuel_tank_internal_b_vol" disable all}
		{volumes "fuel_tank_internal_c_vol" disable all}	
	}
	{on "scripted_fillipov"	
		{spawn "tank_die_particle"}
		{burn volume "engine2" fx "smoke_black" fake}
		("stop_damage_sound")	
		{play_sound "engine2_damage"}
		{view start "engine2_smoke"}	
		{delay 2	
		{add_view "smoke_dead_norm" "burn_fire2" "engine2_exhaust"}
		{add_view "smoke_black" "burn_fire2" "engine2_exhaust"}	
		{view start "burn_fire2"}		
		{play_sound "flame" 1}	
	}	
	{delay 7
		{play_sound "engine1_damage"}	
		{view start "engine1_smoke"}	
		{burn volume "engine1" fx "smoke_black" fake}	
		{add_view "smoke_dead_norm" "burn_fire1" "engine1_exhaust"}
		{add_view "smoke_black" "burn_fire1" "engine1_exhaust"}		
		{view start "burn_fire1"}	
		{play_sound "flame" 1}	
		}	
	}
}	



{"su-25sm_support_ukr"	
	{on "u_w_Laser_TD_damaged"
	{weapon_work "ptur1" 0}		
	{tags add "no_missile_control"}	
	}	
	{on "u_w_electronics_damaged"	
	{weapon_work "ptur1" 0}		
	{weapon_work "ptur2" 0}	
	}	
	("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
	("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
	("air_nar_launcher" weapon(nar1) flashbarrel(B8shooter_))	
	("air_gliding_bomber" weapon(bomber) bomb(rbk_250_impactor) bomber(RBK250_) speed(35) spread(5))
	}


{"su-25sm_support_ukr_ai"	

	{on spawn
		{delay 0
	{tags add "_lua_mi"}
			
}
		{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5

			{tags add "ai_cas"}
			
		}
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}

		
	}
	{on "u_w_Laser_TD_damaged"
	{weapon_work "ptur1" 0}		
	{tags add "no_missile_control"}	
	}	
	{on "u_w_electronics_damaged"	
	{weapon_work "ptur1" 0}		
	{weapon_work "ptur2" 0}	
	}	
	("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
	("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
	("air_nar_launcher" weapon(nar1) flashbarrel(B8shooter_))	
	("air_gliding_bomber" weapon(bomber) bomb(rbk_250_impactor) bomber(RBK250_) speed(35) spread(5))
	}


{"su-25sm_support_light_ukr"	
	("air_multibarrel_launcher" weapon(ptur2) shooter(Shooter_r73rvvsd_) missile(r-73) flashbarrel(Shooter_r73rvvsd_))
	("air_nar_launcher" weapon(nar1) flashbarrel(B8shooter_))	
	{on fire "nar1_s13"	
		("low_speed_bullet")	
		(define "fire_barrel"	
		name "%0"		
		{view start "tailL%0"}	
		{delay 0.42		
		{view pause "tailL%0"}		
		}		
		)	
		{spawn "startsmoke" inv_normal}		
		{if    ("fire_barrel" args 00)		
		else ("fire_barrel" args 01)		
		else ("fire_barrel" args 02)		
		else ("fire_barrel" args 03)		
		else ("fire_barrel" args 04)		
		}	
	}	
	{on fire "nar2_s13"	
		("low_speed_bullet")		
		(define "fire_barrel"		
		name "%0"			
		{view start "tailR%0"}		
		{delay 0.42			
		{view pause "tailR%0"}		
		}		
		)		
		{spawn "startsmoke" inv_normal}		
		{if    ("fire_barrel" args 00)		
		else ("fire_barrel" args 01)		
		else ("fire_barrel" args 02)		
		else ("fire_barrel" args 03)		
		else ("fire_barrel" args 04)		
		}		
	}	

}

{"su-25sm_support_light_ukr_ai"	


	{on spawn
		{delay 0
	{tags add "_lua_mi"}
			
}
		{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5 

			{tags add "ai_cas"}
			
		}
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}

		
	}
	("air_multibarrel_launcher" weapon(ptur2) shooter(Shooter_r73rvvsd_) missile(r-73) flashbarrel(Shooter_r73rvvsd_))
	("air_nar_launcher" weapon(nar1) flashbarrel(B8shooter_))	
	{on fire "nar1_s13"	
		("low_speed_bullet")	
		(define "fire_barrel"	
		name "%0"		
		{view start "tailL%0"}	
		{delay 0.42		
		{view pause "tailL%0"}		
		}		
		)	
		{spawn "startsmoke" inv_normal}		
		{if    ("fire_barrel" args 00)		
		else ("fire_barrel" args 01)		
		else ("fire_barrel" args 02)		
		else ("fire_barrel" args 03)		
		else ("fire_barrel" args 04)		
		}	
	}	
	{on fire "nar2_s13"	
		("low_speed_bullet")		
		(define "fire_barrel"		
		name "%0"			
		{view start "tailR%0"}		
		{delay 0.42			
		{view pause "tailR%0"}		
		}		
		)		
		{spawn "startsmoke" inv_normal}		
		{if    ("fire_barrel" args 00)		
		else ("fire_barrel" args 01)		
		else ("fire_barrel" args 02)		
		else ("fire_barrel" args 03)		
		else ("fire_barrel" args 04)		
		}		
	}	

}




{"su-25sm_accurate_ukr"
{on spawn 		
{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{add_view	"flash_cannon_big"		"X-25_shooter_00"			"X-25_shooter_00"}	
{add_view	"flash_cannon_big"		"X-25_shooter_01"			"X-25_shooter_01"}	
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}		
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
}	
{on "u_w_Laser_TD_damaged"	
{weapon_work "ptur1" 0}		
{weapon_work "nar1" 0}		
{tags add "no_missile_control"}	
}	
{on "u_w_electronics_damaged"	
{weapon_work "ptur1" 0}		
{weapon_work "ptur2" 0}		
{weapon_work "nar1" 0}	
}	
("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))
{on fire "nar1"	
("low_speed_bullet")	
(define "fire_barrel"		
name "%0"			
{spawn "startsmoke" "C-25_shooter_%0" x}	
{spawn "startsmoke" "C-25_tail_%0" x}		
)	
{if 
("fire_barrel" args 00)
else ("fire_barrel" args 01)
else ("fire_barrel" args 02)
else ("fire_barrel" args 03)
else ("fire_barrel" args 04)
else ("fire_barrel" args 05)	
}	
}
}


{"su-25sm_accurate_ukr_ai"
{on spawn 		
{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{add_view	"flash_cannon_big"		"X-25_shooter_00"			"X-25_shooter_00"}	
{add_view	"flash_cannon_big"		"X-25_shooter_01"			"X-25_shooter_01"}	
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}		
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}

{delay 0
	{tags add "_lua_mi"}
			
}

{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5 

			{tags add "ai_cas"}
			
		}
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}

		

}	
{on "u_w_Laser_TD_damaged"	
{weapon_work "ptur1" 0}		
{weapon_work "nar1" 0}		
{tags add "no_missile_control"}	
}	
{on "u_w_electronics_damaged"	
{weapon_work "ptur1" 0}		
{weapon_work "ptur2" 0}		
{weapon_work "nar1" 0}	
}	
("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))
{on fire "nar1"	
("low_speed_bullet")	
(define "fire_barrel"		
name "%0"			
{spawn "startsmoke" "C-25_shooter_%0" x}	
{spawn "startsmoke" "C-25_tail_%0" x}		
)	
{if 
("fire_barrel" args 00)
else ("fire_barrel" args 01)
else ("fire_barrel" args 02)
else ("fire_barrel" args 03)
else ("fire_barrel" args 04)
else ("fire_barrel" args 05)	
}	
}
}


{"su-25sm_miner"
{on spawn 		
{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{link_sound "kmgu_shoot"	"weapon/shot/reactive/Flare"}	
{link_sound "kmgu_open"	"vehicle/turret/light_m2"}	
}	
{on fire "bomber"	
(define "drop_mine_AT"	
{spawn "ptm-1" "kmgu_n%1_%0" x
{impulse up -2 1 forward 20 rnd_dir 10 com}	
{delay 1 {impulse forward 15 com}}		
{delay 0.5 {impulse forward 15 com}}		
}	
)	
(define "drop_mine_AP"		
{spawn "pfm-1" "kmgu_n%1_%0" x	
{impulse up -2 1 forward 20 rnd_dir 10 com}
{delay 1 {impulse forward 15 com}}		
{delay 0.5 {impulse forward 15 com}}		
}		
)		
(define "fire_barrel"		
{play_sound "kmgu_open"}		
{ani_play "kmgu%0"}		
{delay 0.2 ("drop_mine_AT" args %0 0) ("drop_mine_AT" args %0 0) ("drop_mine_AT" args %0 0) {play_sound "kmgu_shoot"}}	
{delay 0.4 ("drop_mine_AT" args %0 1) ("drop_mine_AT" args %0 1) ("drop_mine_AT" args %0 1) {play_sound "kmgu_shoot"}}	
{delay 0.6 ("drop_mine_AT" args %0 2) ("drop_mine_AT" args %0 2) ("drop_mine_AT" args %0 2) {play_sound "kmgu_shoot"}}	
{delay 0.3 ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)		
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) {play_sound "kmgu_shoot"}				
}			
{delay 0.5 ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) {play_sound "kmgu_shoot"}		
}	
{delay 0.7 ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3) ("drop_mine_AP" args %0 3)	
("drop_mine_AP" args %0 3) {play_sound "kmgu_shoot"}			
}
)	
{if not tagged "su-25_drop_all_mines"	
{if    name "00" ("fire_barrel" args 00)
else name "01" ("fire_barrel" args 01)	
else name "02" ("fire_barrel" args 02)		
else name "03" ("fire_barrel" args 03)		
else name "04" ("fire_barrel" args 04)	
else name "05" ("fire_barrel" args 05)	
else name "06" ("fire_barrel" args 06)	
else name "07" ("fire_barrel" args 07)	
}	
else		
("fire_barrel" args 00)	
("fire_barrel" args 01)		
{delay 0.5 ("fire_barrel" args 02)}
{delay 0.5 ("fire_barrel" args 03)}
{delay 1 ("fire_barrel" args 04)}	
{delay 1 ("fire_barrel" args 05)}	
{delay 1.5 ("fire_barrel" args 06)}	
{delay 1.5 ("fire_barrel" args 07)}
}	
}
}	
{"su-25sm_strike"	
{on spawn 			
{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}
{add_view	"flash_cannon_big"		"X-25_shooter_00"			"X-25_shooter_00"}
{add_view	"flash_cannon_big"		"X-25_shooter_01"			"X-25_shooter_01"}
{add_view	"flash_cannon_big"		"X-25_shooter_02"			"X-25_shooter_02"}
{add_view	"flash_cannon_big"		"X-25_shooter_03"			"X-25_shooter_03"}
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}		
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
}	
{on "u_w_Laser_TD_damaged"	
{weapon_work "ptur1" 0}			
{tags add "no_missile_control"}	
}	
{on "u_w_electronics_damaged"	
{weapon_work "ptur1" 0}			
{weapon_work "ptur2" 0}	
}	
("air_multibarrel_launcher" weapon(ptur1) shooter(X-25_shooter_) missile(x_25ml_su25_ammo) flashbarrel(X-25_shooter_))	
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
("air_gliding_bomber" weapon(bomber) bomb(odab_500_impactor) bomber(bomber_) speed(35) spread(5))	}	

{"su-25sm_AT_ukr"
{on spawn 			{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}	
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
{add_view "flash_zenit"			"sppu00"	"sppu_shooter_00"}		
{add_view "flash_zenit"			"sppu01"	"sppu_shooter_01"}	
{add_view "flash_zenit"			"sppu02"	"sppu_shooter_02"}	
{add_view "flash_zenit"			"sppu03"	"sppu_shooter_03"}	
{bone hide "Gun_sppu_break_00"}			{bone hide "Gun_sppu_break_01"}	
}	
{on "u_w_Laser_TD_damaged"		
{weapon_work "nar1" 0}		
{tags add "no_missile_control"}	
}
{on "u_w_electronics_damaged"		
{weapon_work "nar1" 0}			
{weapon_work "ptur2" 0}		
{weapon_work "mgun" 0}
}	
{on fire "nar1"		
("low_speed_bullet")	
(define "fire_barrel"	
name "%0"		
{spawn "startsmoke" "C-25_shooter_%0" x}			
{spawn "startsmoke" "C-25_tail_%0" x}	
)		

{if    ("fire_barrel" args 00) else ("fire_barrel" args 01) }		}
("air_gliding_bomber" weapon(bomber) bomb(rbk_500_impactor) bomber(bomber1_) speed(35) spread(5))
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
{on fire "mgun" overload	
{if name "00"			
{view start "sppu00"}	{delay 0.42	{view pause "sppu00"}}		
else  name "01"				{view start "sppu01"}	{delay 0.42	{view pause "sppu01"}}	
else  name "02"				{view start "sppu02"}	{delay 0.42	{view pause "sppu02"}}	
else  name "03"				{view start "sppu03"}	{delay 0.42	{view pause "sppu03"}}	
}	
}	
{on "tear_wingl1"		
{bone cut "Gun_sppu_00"}	
{bone show "Gun_sppu_break_00"}	
}	
{on "tear_wingr1"	
{bone cut "Gun_sppu_01"}		
{bone show "Gun_sppu_break_01"}	
}	
}

{"su-25sm_AT_ukr_ai"
{on spawn 			{add_view	 	"BMP2_canon_fire"	"flashbarrel1"		"Foresight1"}	
{add_view	"flash_cannon_big"		"R60_00"			"R60_00"}	
{add_view	"flash_cannon_big"		"R60_01"			"R60_01"}	
{add_view "flash_zenit"			"sppu00"	"sppu_shooter_00"}		
{add_view "flash_zenit"			"sppu01"	"sppu_shooter_01"}	
{add_view "flash_zenit"			"sppu02"	"sppu_shooter_02"}	
{add_view "flash_zenit"			"sppu03"	"sppu_shooter_03"}	
{bone hide "Gun_sppu_break_00"}			{bone hide "Gun_sppu_break_01"}	

{delay 0
	{tags add "_lua_mi"}
			
}

{delay 0.5 

			{tags add "switch_to_ai"}
			{tags add "altitude_keeper"}
		}
		
		{delay 0.5 

			{call "flyout_timer"}
		}

		{delay 5 

			{tags add "ai_cas"}
			
		}
		
		{delay 2

			{if altitude 15

				{call "takeoff"}
			}

		}

		
}	
{on "u_w_Laser_TD_damaged"		
{weapon_work "nar1" 0}		
{tags add "no_missile_control"}	
}
{on "u_w_electronics_damaged"		
{weapon_work "nar1" 0}			
{weapon_work "ptur2" 0}		
{weapon_work "mgun" 0}
}	
{on fire "nar1"		
("low_speed_bullet")	
(define "fire_barrel"	
name "%0"		
{spawn "startsmoke" "C-25_shooter_%0" x}			
{spawn "startsmoke" "C-25_tail_%0" x}	
)		

{if    ("fire_barrel" args 00) else ("fire_barrel" args 01) }		}
("air_gliding_bomber" weapon(bomber) bomb(rbk_500_impactor) bomber(bomber1_) speed(35) spread(5))
("air_multibarrel_launcher" weapon(ptur2) shooter(R60_) missile(r60_su25) flashbarrel(R60_))	
{on fire "mgun" overload	
{if name "00"			
{view start "sppu00"}	{delay 0.42	{view pause "sppu00"}}		
else  name "01"				{view start "sppu01"}	{delay 0.42	{view pause "sppu01"}}	
else  name "02"				{view start "sppu02"}	{delay 0.42	{view pause "sppu02"}}	
else  name "03"				{view start "sppu03"}	{delay 0.42	{view pause "sppu03"}}	
}	
}	
{on "tear_wingl1"		
{bone cut "Gun_sppu_00"}	
{bone show "Gun_sppu_break_00"}	
}	
{on "tear_wingr1"	
{bone cut "Gun_sppu_01"}		
{bone show "Gun_sppu_break_01"}	
}	
}


{"tornado_gr1_carpet"
	{on fire "bomber2"
		{spawn "startsmoke"}
		{spawn "startsmoke" inv_normal}
		{spawn "kleinbombe-44_impactor" {impulse up -4 0.3 forward 2.5 0.4 rnd_dir 1.5}}
		{spawn "kleinbombe-44_impactor" {impulse up -4 0.3 forward 5 0.4 rnd_dir 1.5}}
		{spawn "kleinbombe-44_impactor" {impulse up -4 0.3 forward 7.5 0.4 rnd_dir 1.5}}
		{spawn "kleinbombe-44_impactor" {impulse up -4 0.3 forward 10 0.4 rnd_dir 1.5}}
		{spawn "kleinbombe-44_impactor" {impulse up -4 0.3 forward -2.5 0.4 rnd_dir 1.5}}
		{spawn "kleinbombe-44_impactor" {impulse up -4 0.3 forward -5 0.4 rnd_dir 1.5}}
		{spawn "kleinbombe-44_impactor" {impulse up -4 0.3 forward -7.5 0.4 rnd_dir 1.5}}
		{spawn "kleinbombe-44_impactor" {impulse up -4 0.3 forward -10 0.4 rnd_dir 1.5}}
	}
	;Сброс контейнеров перед посадкой не реализован, т. к. при неполной зарядке (и неполном сбросе)
	;все равно придется садиться с MW-1
}
{"tornado_gr1_bomber"
	("air_multibarrel_launcher" weapon(ptur2) shooter(alarm_shooter_) missile(alarm_missile) flashbarrel(alarm_shooter_))
	("air_compact_launcher" weapon(ptur1) missile(aim-9l) foresight(foresight5) flashbarrel(aim9m_shooter_))	
}
{"tornado_gr4_antirad"
	("air_multibarrel_launcher" weapon(ptur2) shooter(alarm_shooter_) missile(alarm_missile) flashbarrel(alarm_shooter_))
}
{"tornado_gr4_at"
	("air_multibarrel_launcher" weapon(ptur4) shooter(brimstone_shooter_) missile(brimstone) flashbarrel(brimstone_shooter_))
	("air_compact_launcher" weapon(ptur1) missile(aim-9l) foresight(foresight5) flashbarrel(aim9m_shooter_))	
}
{"tornado_gr4_strike"
	("air_multibarrel_launcher" weapon(ptur2) shooter(alarma_shooter_) missile(alarm_missile) flashbarrel(alarma_shooter_))
	("air_multibarrel_launcher" weapon(ptur3) shooter(taurus_shooter_) missile(taurus) flashbarrel(taurus_shooter_))
}
{"tornado_gr4_support"
	("air_multibarrel_launcher" weapon(ptur2) shooter(alarm_shooter_) missile(alarm_missile) flashbarrel(alarm_shooter_))
	("air_multibarrel_launcher" weapon(ptur4) shooter(brimstone_shooter_) missile(brimstone) flashbarrel(brimstone_shooter_))
	{on spawn
		{add_view 	"rok_tail" 		"rok_tail00" 		"shooter00"}
		{add_view 	"rok_tail" 		"rok_tail01" 		"shooter01"}
		{add_view 	"rok_tail" 		"rok_tail02" 		"shooter02"}
		{add_view 	"rok_tail" 		"rok_tail03" 		"shooter03"}
		{add_view 	"rok_tail" 		"rok_tail04" 		"shooter04"}
		{add_view 	"rok_tail" 		"rok_tail05" 		"shooter05"}
		{add_view 	"rok_tail" 		"rok_tail06" 		"shooter06"}
		{add_view 	"rok_tail" 		"rok_tail07" 		"shooter07"}
		{add_view 	"rok_tail" 		"rok_tail08" 		"shooter08"}
		{add_view 	"rok_tail" 		"rok_tail09" 		"shooter09"}
		{add_view 	"rok_tail" 		"rok_tail10" 		"shooter10"}
		{add_view 	"rok_tail" 		"rok_tail11" 		"shooter11"}
		{add_view 	"rok_tail" 		"rok_tail12" 		"shooter12"}
		{add_view 	"rok_tail" 		"rok_tail13" 		"shooter13"}
		{add_view 	"rok_tail" 		"rok_tail14" 		"shooter14"}
		{add_view 	"rok_tail" 		"rok_tail15" 		"shooter15"}
		{add_view 	"rok_tail" 		"rok_tail16" 		"shooter16"}
		{add_view 	"rok_tail" 		"rok_tail17" 		"shooter17"}
		{add_view 	"rok_tail" 		"rok_tail18" 		"shooter18"}
		{add_view 	"rok_tail" 		"rok_tail19" 		"shooter19"}
		{add_view 	"rok_tail" 		"rok_tail20" 		"shooter20"}
		{add_view 	"rok_tail" 		"rok_tail21" 		"shooter21"}
		{add_view 	"rok_tail" 		"rok_tail22" 		"shooter22"}
		{add_view 	"rok_tail" 		"rok_tail23" 		"shooter23"}
		{add_view 	"rok_tail" 		"rok_tail24" 		"shooter24"}
		{add_view 	"rok_tail" 		"rok_tail25" 		"shooter25"}
		{add_view 	"rok_tail" 		"rok_tail26" 		"shooter26"}
		{add_view 	"rok_tail" 		"rok_tail27" 		"shooter27"}
		{add_view 	"rok_tail" 		"rok_tail28" 		"shooter28"}
		{add_view 	"rok_tail" 		"rok_tail29" 		"shooter29"}
		{add_view 	"rok_tail" 		"rok_tail30" 		"shooter30"}
		{add_view 	"rok_tail" 		"rok_tail31" 		"shooter31"}
		{add_view 	"rok_tail" 		"rok_tail32" 		"shooter32"}
		{add_view 	"rok_tail" 		"rok_tail33" 		"shooter33"}
		{add_view 	"rok_tail" 		"rok_tail34" 		"shooter34"}
		{add_view 	"rok_tail" 		"rok_tail35" 		"shooter35"}
		{add_view 	"rok_tail" 		"rok_tail36" 		"shooter36"}
		{add_view 	"rok_tail" 		"rok_tail37" 		"shooter37"}
	}
	("air_nar_launcher" weapon(nar1) flashbarrel(rok_tail))
}
{"f-35b"
	{on "link_engine_effects"
		{add_view	"turbovent_exhaust"	"add_airstream"		"fx_exhaust1"}
		{add_view	"turbovent_exhaust"	"add_airstream"		"fx_exhaust2"}
		{add_view	"turbovent_exhaust"	"add_airstream"		"fx_exhaust3"}
	}
	{on "takeoff" {delay 3 {view pause "add_airstream"}}}
	{on "takeoff_load" {delay 3 {view pause "add_airstream"}}}
	{on "landing" {delay 2 {view start "add_airstream"}}}
	{on "engine_on"  {if not chassis "airborne" {view start "add_airstream"}}}
	{on engine off {view pause "add_airstream"}}
	{on "check_takeoff_speed" overload
	      {if not chassis "airborne"
			{if velocity 30
				{if terrain_pp "road"
				else terrain_pp "country_road"
				else 
					{components "wheel_back" break}
					{components "retract_wheelR" break}
					{components "retract_wheelL" break}
				}
			}
			{if work "aileron1"
				{if work "aileron2"
					{if velocity 20	("enough_takeoff_speed")	else	("not_enough_takeoff_speed")}
				else
					{if velocity 22	("enough_takeoff_speed")	else	("not_enough_takeoff_speed")}
				}
			else
				{if work "aileron2"
					{if velocity 22	("enough_takeoff_speed")	else	("not_enough_takeoff_speed")}
				else
					{if velocity 25	("enough_takeoff_speed")	else	("not_enough_takeoff_speed")}
				}
			}
	       }
		{delay 0.2
		   {if tagged "engine_started"
		        {if not chassis "airborne"
			{call "check_takeoff_speed"}
		         else  not tagged "takeoff_speed"
			{impulse forward 5 3 no_position}
			{chassis_work 0}
			{call "tear_wheelright"}
			{call "tear_wheelleft"}
			{call "tear_wheelfront"}
			{call "mp_destroy"}
		        }
		    }
		}
	}
}

{"f-35"
	{on spawn 
		{add_view "flash_gun_big" "flashbarrel1" "foresight1"}
;		{add_view	"flash_cannon_big"		"AIM120C_shooter_00"			"AIM120C_shooter_00"}
;		{add_view	"flash_cannon_big"		"AIM120C_shooter_01"			"AIM120C_shooter_01"}
;		{add_view	"flash_cannon_big"		"AIM120C_shooter_02"			"AIM120C_shooter_02"}
;		{add_view	"flash_cannon_big"		"AIM120C_shooter_03"			"AIM120C_shooter_03"}
;		{add_view	"flash_cannon_big"		"AIM120C_shooter_04"			"AIM120C_shooter_04"}
;		{add_view	"flash_cannon_big"		"AIM120C_shooter_05"			"AIM120C_shooter_05"}
;		{add_view	"flash_cannon_big"		"AIM120C_shooter_06"			"AIM120C_shooter_06"}
;		{add_view	"flash_cannon_big"		"AIM120C_shooter_07"			"AIM120C_shooter_07"}
;		{add_view	"flash_cannon_big"		"AIM9M_shooter_00"			"AIM9M_shooter_00"}
;		{add_view	"flash_cannon_big"		"AIM9M_shooter_01"			"AIM9M_shooter_01"}
		{add_view	"flash_cannon_big"		"jsm_shooter_00"				"jsm_shooter_00"}
		{add_view	"flash_cannon_big"		"jsm_shooter_01"				"jsm_shooter_01"}
		{add_view	"flash_cannon_big"		"jsm_shooter_02"				"jsm_shooter_02"}
		{add_view	"flash_cannon_big"		"jsm_shooter_03"				"jsm_shooter_03"}
			("link_damage_sound_usa")
	}
	{on "tear_part" 
		{if component "wingfront1" {components "ecm" destroy}
		else component "wingfront2" {components "ecm" destroy}
		else component "wingl1" {components "Hydrosystem_tank" destroy}
		else component "wingr1" {components "Hydrosystem_tank" destroy}
		else component "tail1" {components "fuel_tank_internal_c" destroy}
		else component "tail2" {components "fuel_tank_internal_d" destroy}
		else volume "part17" {components "ptur" destroy}
		else volume "part18" {components "ptur" destroy}
		else volume "part20" {components "gun" destroy}{components "ammo_storage_autocannon" destroy}
		}
	}
	{on "u_w_hydrosystem_damaged"
		{weapon_work "ptur" 0}
		{weapon_work "bomber" 0}
		{weapon_work "gun" 0}
	}
	{on "u_w_radarx_damaged"
		{weapon_work "ptur" 0}
	}
	{on "u_w_electronics_damaged"
		{call "fall"}
	}
	{on "u_w_weapon_on_off"
		{if tagged "aa_off" {weapon_work "ptur" 0}}
		{if tagged "glider_off" {weapon_work "bomber" 0} {weapon_work "bomber1" 0}}
		{if tagged "cruise_off" {weapon_work "bomber2" 0} {weapon_work "ptur2" 0}}
	}
	{on "_burn" overload
		{damage_report "engine" "burn_fire"}
		{log "burn_volume"}
		{if not burned
			{log "burn_engine"}				
			("burn_engine" engine(1) engine1(0) engine2(0) enginea(0) engineb(0) enginec(0) engined(0))
		}
	}
	(define "manage_bay"
		{ani_play "bay%0_open"}
	)
	{on fire "ptur"
		("low_speed_bullet")
		(define "fire_barrel_drop"
			name "%0"
				{delay 0.2 {spawn "aim-120c7_drop_carrier" "AIM120C_shooter_%0" x}}
				{view start "AIM120C_shooter_%0"}
				{delay 0.4
					{view pause "AIM120C_shooter_%0"}
				}
		)
		(define "fire_barrel"
			name "%0"
				{delay 0.2 {spawn "aim-120c7_carrier" "AIM120C_shooter_%0" x}}
				{view start "AIM120C_shooter_%0"}
				{delay 0.4
					{view pause "AIM120C_shooter_%0"}
				}
		)
		{if    ("fire_barrel_drop" args 00) ("manage_bay" args 2) 
		else ("fire_barrel_drop" args 01) ("manage_bay" args 1)
		else ("fire_barrel_drop" args 02) ("manage_bay" args 2) 
		else ("fire_barrel_drop" args 03) ("manage_bay" args 1) 
		else ("fire_barrel" args 04)
		else ("fire_barrel" args 05)
		else ("fire_barrel" args 06)
		else ("fire_barrel" args 07)}
	}
	{on fire "ptur1"
		("low_speed_bullet")
		(define "fire_barrel"
			name "%0"
				{delay 0.2 {spawn "aim-9l_carrier" "AIM9M_shooter_%0" x}}
				{view start "AIM9M_shooter_%0"}
				{delay 0.4
					{view pause "AIM9M_shooter_%0"}
				}
		)
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)}
	}
	{on fire "ptur2"
		("low_speed_bullet")
		(define "fire_barrel"
			name "%0"
				{delay 0.2 {spawn "jsm_carrier" "jsm_shooter_%0" x}}
				{view start "jsm_shooter_%0"}
				{delay 0.4
					{view pause "jsm_shooter_%0"}
				}
		)
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		else ("fire_barrel" args 04)
		else ("fire_barrel" args 05)}
	}
	{on fire "bomber"
		{if   name "00" ("manage_bay" args 2)
		else  name "01"  ("manage_bay" args 1)}
	}
	{on fire "bomber1"
	}
	{on fire "bomber2"
		{if name "00"
			{delay 0.2 {spawn "agm-154_carrier" "bomberb_00" x}}
		else  name "01"
			{delay 0.2 {spawn "agm-154_carrier" "bomberb_01" x}}
		}
	}
	("single_alt_control")
}

{"MQ9"
	{on spawn 
		{add_view	"flash_cannon_big"		"flashbarrel00"			"hellfire_shooter_00"}
		{add_view	"flash_cannon_big"		"flashbarrel01"			"hellfire_shooter_01"}
		{add_view	"flash_cannon_big"		"flashbarrel02"			"hellfire_shooter_02"}
		{add_view	"flash_cannon_big"		"flashbarrel03"			"hellfire_shooter_03"}

	}
	{on "link_flare_fx" overload}
	{on "eject_all" overload}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/Helicopter/en_start"			}
		{link_sound "engine_work"		"vehicle/airborne/fw_work"			}
		{link_sound "engine_stop"		"vehicle/Helicopter/en_stop"			}
	}
	{on "landing" 
		{ani_stop "ols_work"}
	}
	{on "u_w_laser_td_damaged"
		{weapon_work "ptur" 0}
		{tags add "no_missile_control"}
	}
	{on "u_w_radarx_damaged"
		{weapon_work "bomber" 0}
	}
	{on "u_w_electronics_damaged"
		{weapon_work "ptur" 0}
		{call "fall"}
	}
	{on "u_w_weapon_on_off"
		{if tagged "glider_off" {weapon_work "bomber" 0}}
	}
	{on "engine_on"
		{if not tagged "engine_started"
			{set "engine_started" 1}
			{play_sound "engine_start"}
			{ani_play "engine_start" callback}
		}
	}
	{on animation_end "engine_start"
		{ani_play "engine_work" loop}
		{play_sound "engine_work" 1}
		{ani_play "ols_work" 0.3 loop}
	}
	{on engine off overload
		{call "engine_stop"}
		{play_sound "engine_stop"}
	}
	{on "engine_stop"
		{kill_delay "engine_stopped"}
		{if tagged "engine_started"
			{set "engine_started" 0}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{ani_play "engine_stop"}
			{stop_sound "engine_start"}
			{stop_sound "engine_work"}
			{stop_sound "fly"}
		}
	}
;	("air_multibarrel_launcher" weapon(ptur) shooter(hellfire_shooter_) missile(hellfire) flashbarrel(flashbarrel))

	{on fire "ptur"
		("low_speed_bullet")
		(define "fire_barrel"
			name "%0"
				{spawn "startsmoke" "hellfire_shooter_%0" x}
;				{spawn "proj_probe" "foresight3" x  {tags add "hellfire_shooter_%0"}}
				{set "ptur"}{call "proj_probe"}
				{view start "flashbarrel%0"}
				{delay 0.4
					{view pause "flashbarrel%0"}
				}
		)
		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		}
	}
	{on ground_hit
		{if velocity 1
			{tear "piece_medium_steel" bone "body"
				{impulse up 2 1 dir 2 1}
			}
			{delay 40 {delete}}
		}
	}
	{on "antifire_work" overload
		{call "antifire_not_work"}
		{delay 10
			{if volume "engine" {components "engine" break}}
		}
	}
}
{"MQ9_nato"
	{on spawn 
		{add_view	"flash_cannon_big"		"flashbarrel00"			"brimstone_shooter_00"}
		{add_view	"flash_cannon_big"		"flashbarrel01"			"brimstone_shooter_01"}
		{add_view	"flash_cannon_big"		"flashbarrel02"			"brimstone_shooter_02"}
		{add_view	"flash_cannon_big"		"flashbarrel03"			"brimstone_shooter_03"}
		{add_view "laser_sight_light" "laser_designator" "visor_OLS"}
		{view hide "laser_designator"}
		{tags add "cannon_proj"}		

	}
		{on fire "gun"
			{view show "laser_designator"}
			{delay 0.6
				{view hide "laser_designator"}
			}
		}	
	{on "link_flare_fx" overload}
	{on "eject_all" overload}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/Helicopter/en_start"			}
		{link_sound "engine_work"		"vehicle/airborne/fw_work"			}
		{link_sound "engine_stop"		"vehicle/Helicopter/en_stop"			}
	}
	{on "landing" 
		{ani_stop "ols_work"}
	}
	{on "u_w_laser_td_damaged"
		{weapon_work "ptur" 0}
		{tags add "no_missile_control"}
	}
	{on "u_w_radarx_damaged"
		{weapon_work "bomber" 0}
	}
	{on "u_w_electronics_damaged"
		{weapon_work "ptur" 0}
		{call "fall"}
	}
	{on "engine_on"
		{if not tagged "engine_started"
			{set "engine_started" 1}
			{play_sound "engine_start"}
			{ani_play "engine_start" callback}
		}
	}
	{on animation_end "engine_start"
		{ani_play "engine_work" loop}
		{play_sound "engine_work" 1}
		{ani_play "ols_work" 0.3 loop}
	}
	{on engine off overload
		{call "engine_stop"}
		{play_sound "engine_stop"}
	}
	{on "engine_stop"
		{kill_delay "engine_stopped"}
		{if tagged "engine_started"
			{set "engine_started" 0}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{ani_play "engine_stop"}
			{stop_sound "engine_start"}
			{stop_sound "engine_work"}
			{stop_sound "fly"}
		}
	}
	("air_multibarrel_launcher" weapon(ptur) shooter(brimstone_shooter_) missile(brimstone) flashbarrel(brimstone_shooter_))
	{on ground_hit
		{if velocity 1
			{tear "piece_medium_steel" bone "body"
				{impulse up 2 1 dir 2 1}
			}
			{delay 40 {delete}}
		}
	}
	{on "antifire_work" overload
		{call "antifire_not_work"}
		{delay 10
			{if volume "engine" {components "engine" break}}
		}
	}
}

(define "air_multibomb_launcher"
	{on fire "%weapon"
		("low_speed_bullet")
		(define "fire_barrel"
			name "%0"
				{tags remove "launch_00"}
				{tags remove "launch_01"}
				{tags remove "launch_02"}
				{tags remove "launch_03"}
				{tags remove "launch_04"}
				{tags remove "launch_05"}
				{tags remove "launch_06"}
				{tags remove "launch_07"}
				{tags remove "launch_08"}
				{tags remove "launch_09"}
				{tags remove "launch_10"}
				{tags remove "launch_11"}
				{tags remove "launch_12"}
				{tags remove "launch_13"}
				{tags remove "launch_14"}
				{tags remove "launch_15"}
				{tags add "launch_%0"}
				{delay 0.1 {spawn "%missile_%0" "%shooter%0" x}}
				{delay 2.0 {tags remove "launch_%0"}}
		)
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
		}
		("cw_check_shooting" weap_id(%weapon))	;for single
	}
)


{"wingloong_ii"
	{on spawn 
		{add_view	"flash_cannon_big"		"flashbarrel00"			"hellfire_shooter_00"}
		{add_view	"flash_cannon_big"		"flashbarrel01"			"hellfire_shooter_01"}
		{add_view	"flash_cannon_big"		"flashbarrel02"			"hellfire_shooter_02"}
		{add_view	"flash_cannon_big"		"flashbarrel03"			"hellfire_shooter_03"}
		{add_view	"flash_cannon_big"		"flashbarrel04"			"hellfire_shooter_04"}
		{add_view	"flash_cannon_big"		"flashbarrel05"			"hellfire_shooter_05"}
		{add_view	"flash_cannon_big"		"flashbarrel06"			"hellfire_shooter_06"}
		{add_view	"flash_cannon_big"		"flashbarrel07"			"hellfire_shooter_07"}
	}
	{on "link_flare_fx" overload}
	{on "eject_all" overload}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/helicopter/en_start"			}
		{link_sound "engine_work"		"vehicle/airborne/fw_work"			}
		{link_sound "engine_stop"		"vehicle/helicopter/en_stop"			}
	}	
	{on "landing" 
		{ani_stop "ols_work"}
	}
	{on "u_w_laser_td_damaged"
		{weapon_work "ptur" 0}
		{tags add "no_missile_control"}
	}
	{on "u_w_electronics_damaged"
		{weapon_work "ptur" 0}
		{call "fall"}
	}
	{on "u_w_weapon_on_off"
		{if tagged "glider_off" {weapon_work "bomber" 0}}
	}
	{on "engine_on"
		{if not tagged "engine_started"
			{set "engine_started" 1}
			{play_sound "engine_start"}
			{ani_play "engine_start" callback}
		}
	}
	{on animation_end "engine_start"
		{ani_play "engine_work" loop}
		{play_sound "engine_work" 1}
		{ani_play "ols_work" 0.3 loop}
	}
	{on engine off overload
		{call "engine_stop"}
		{play_sound "engine_stop"}
	}
	{on "engine_stop"
		{kill_delay "engine_stopped"}
		{if tagged "engine_started"
			{set "engine_started" 0}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{ani_play "engine_stop"}
			{stop_sound "engine_start"}
			{stop_sound "engine_work"}
			{stop_sound "fly"}
		}
	}
	{on ground_hit
		{if velocity 1
			{tear "piece_medium_steel" bone "body"
				{impulse up 2 1 dir 2 1}
			}
			{delay 40 {delete}}
		}
	}
	{on "antifire_work" overload
		{call "antifire_not_work"}
		{delay 10
			{if volume "engine" {components "engine" break}}
		}
	}
}

	