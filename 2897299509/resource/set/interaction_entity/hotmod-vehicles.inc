;/*=========== Hotmod Specifics Begin  ===========*/
;/*=========== Hotmod Specifics Begin  ===========*/
{"vehicle"
	{on spawn
		{add_view   "recoilless_shot"			"flashbarrelsmall"	"fxshot"}
	}
}
;//special defines ordos+++++++++

(define "t80_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t-80_start_01"}
		{link_sound "engine_stop"		"vehicle/engine/t80/T80u_engine_Off"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t-80_idle_01"}
		{link_sound "engine_full"		"vehicle/engine/t80/T80u_engine2"}
		{link_sound "exhaust"			"vehicle/engine/t80/T80u_engine"}
		{link_sound "move"				"vehicle/tracks/T72_Tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}

	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("DShK38")
		("DT")
	}

)

(define "t72_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/T72_Tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("DShK38")
		("DT")
	}

)

(define "t64_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t64/t64_start"}
		{link_sound "engine_stop"		"vehicle/engine/t64/t64_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t64/t64_idle"}
		{link_sound "engine_full"		"vehicle/engine/t64/t64_high"}
		{link_sound "exhaust"			"vehicle/engine/t64/t64_ext"}
		{link_sound "move"				"vehicle/tracks/T72_Tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("DShK38")
		("DT")
	}

)

(define "t55_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("DShK38")
		("DT")
	}
)

(define "t62_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/T62MD_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/T62MD_engine_off"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/T62MD_engine"}
		{link_sound "exhaust"			"vehicle/engine/T62MD_engine_start"}
		{link_sound "move"				"vehicle/tracks/T62MD_loaded_rpm"}
		{link_sound "rotate_turret"		"vehicle/turret/T55_turret"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
		("DT")
	}
)

(define "wiesel_sound"
		{on "add_movement_sound" overload
			{link_sound "move"			"vehicle/tracks/wiesel_tracks"}
			{link_sound "engine_full"		"vehicle/engine/wiesel_work"}
			{link_sound "engine_start"		"vehicle/engine/wiesel_start"}
			{link_sound "rotate_turret" 		"vehicle/turret/light_m1"}
			{link_sound "engine_idle"		"vehicle/engine/sdkfz251/idle"}
			{link_sound "exhaust"		"vehicle/engine/wiesel_start"}
			{link_sound "engine_stop"		"vehicle/engine/wiesel_stop"}
		}
)

(define "tpz_sound"
		{on "add_movement_sound" overload
			{link_sound "move"			"vehicle/wheels/4WD_Loop"}
			{link_sound "engine_full"		"vehicle/engine/tpz_fuchs_work"}
			{link_sound "engine_start"		"vehicle/engine/tpz_fuchs_start"}
			{link_sound "rotate_turret" 		"vehicle/turret/M1A1_turret"}
			{link_sound "engine_idle"		"vehicle/engine/blitz/idle"}
			{link_sound "exhaust"		"vehicle/engine/tpz_fuchs_start"}
			{link_sound "engine_end"		"vehicle/engine/tpz_fuchs_stop"}
		}
)



(define "leopard_sound"
		{on "add_movement_sound" overload
			{link_sound "engine_start"		"vehicle/engine/pz3/start"}
			{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
			{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
			{link_sound "engine_full"		"vehicle/engine/leopard1_work"}
			{link_sound "exhaust"			"vehicle/engine/leopard1_start"}
			{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
			{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
			{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
		}
		{on "add_weapon_sound" overload
			("Cannon_105to130mm")
			("MG42")
		}
)

(define "mtlb_sound"

		{on "add_movement_sound" overload
			{link_sound "move"			"vehicle/tracks/T55_Tracks"}
			{link_sound "engine_full"		"vehicle/engine/mtlb_work"}
			{link_sound "engine_start"		"vehicle/engine/mtlb_start"}
			{link_sound "rotate_turret" 		"vehicle/turret/light_m1"}
			{link_sound "exhaust"		"vehicle/engine/mtlb_start"}
			{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
			{link_sound "engine_stop"		"vehicle/engine/mtlb_stop"}
		}

)

(define "paladin_sound"

		{on "add_movement_sound" overload
			{link_sound "move"			"vehicle/tracks/1_Abrams_move"}
			{link_sound "engine_full"		"vehicle/engine/paladin_work"}
			{link_sound "engine_start"		"vehicle/engine/paladin_start"}
			{link_sound "rotate_turret" 		"vehicle/turret/M1A1_turret"}
			{link_sound "exhaust"		"vehicle/engine/paladin_start"}
			{link_sound "engine_idle"		"vehicle/engine/ferdinand/idle"}
			{link_sound "engine_stop"		"vehicle/engine/paladin_stop"}
			{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
		}
		{on "add_weapon_sound" overload
			("Cannon_150to210mm")
			("M2HB")
		}
)

(define "aavp7_sound"
		{on "add_movement_sound" overload
			{link_sound "move"			"vehicle/tracks/1_Abrams_move"}
			{link_sound "engine_full"		"vehicle/engine/AAVP_working"}
			{link_sound "engine_start"		"vehicle/engine/AAVP_start"}
			{link_sound "rotate_turret" 		"vehicle/turret/M1A1_turret"}
			{link_sound "exhaust"		"vehicle/engine/AAVP_start"}
			{link_sound "engine_idle"		"vehicle/engine/sdkfz251/idle"}
			{link_sound "engine_stop"		"vehicle/engine/AAVP_off"}
		}
)


(define "autocannon"
	{on fire "gun"
		{delay 0.05 {call "spawn_shell"}}
		("cw_check_shooting" weap_id(gun))
	}
)

(define "zsl92_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/4WD_Loop"}
		;{link_sound "engine_start"		"vehicle/engine/lav25/ve_large_accelerate"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz251/start"}
		{link_sound "engine_full"			"vehicle/engine/zsl_work"}
		;{link_sound "engine_idle"		"vehicle/engine/lav25/A0059_PLA_car_idle"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz251/idle"}
		{link_sound "rotate_turret" 		"vehicle/turret/china_turret_engine_move"}
		{link_sound "exhaust"			"vehicle/engine/zsl_start"}
		{link_sound "engine_stop"		"vehicle/engine/zsl_stop"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
)


(define "zbd04_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/ZBD04A_tracks"}
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_full"		"vehicle/engine/ZBD04A_work"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "exhaust"		"vehicle/engine/bmp3_start"}
		{link_sound "engine_stop"		"vehicle/engine/ZBD04A_stop"}
		{link_sound "rotate_turret" 		"vehicle/turret/china_turret_engine_move"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
			("Autocannon_s1")
	}
)

;(define "sam_radar_add_marker"
;	{"sam_radar_%type"
;		{on "spawn_antirad_point_resrve"
;			{tags add "vdv_link_place9"}
;			{spawn "proj_point_%type_antirad_spawner"
;				{tags add "vdv_link_to_place9"}
;				{delay 0.7 {tags remove "vdv_link_to_place9"}}
;			}
;			{delay 0.3
;				{call "update_antiradar"}
;				{tags remove "vdv_link_place9"}
;			}
;		}
;		{on "spawn_antirad_point_rand"
;			{if not tagged "antirad_linked"
;				{if rand 0.1
;					{call "spawn_antirad_point"}
;				else
;					{delay 0.5 0.1
;						{call "spawn_antirad_point_rand"}
;					}
;				}
;			}
;		}
;		{on operatable on
;			{with_linked_entity "vehicle9" {delete}}
;			{delay 1
;				{call "spawn_antirad_point_rand"}
;			}
;			{delay 0.1
;				{tags remove "vdv_link_place9"}
;			}
;			{delay 11 2
;				{if not tagged "antirad_linked"
;					{call "spawn_antirad_point"}
;				}
;			}
;			{delay 20
;				{call "spawn_antirad_point_resrve"}
;			}
;		}
;		{on "antirad_linked"
;			{if not linked
;				{tags add "antirad_linked"}
;			}
;		}
;		{on "spawn_antirad_point"
;			{if not linked
;				{if not tagged "radar_off"
;					{tags add "vdv_link_place9"}
;					{spawn "proj_point_%type_antirad_spawner"
;						{tags add "vdv_link_to_place9"}
;						{delay 0.7
;							{tags remove "vdv_link_to_place9"}
;						}
;					}
;					{delay 0.3
;						{call "update_antiradar"}
;						{tags remove "vdv_link_place9"}
;					}
;				}
;			}
;			{delay 3 2
;				{if not tagged "antirad_linked"
;					{call "spawn_antirad_point"}
;				}
;			}
;		}
;	}
;)
;("sam_radar_add_marker" type(rus))
;("sam_radar_add_marker" type(usa))
;("sam_radar_add_marker" type(rus_large))
;("sam_radar_add_marker" type(usa_large))

{"sam_radar"
	{on move off
		{if not linked
			{if not tagged "radar_off"
				{delay 1 {spawn "radar_minimap"}}
			}
		}
	}

	{on "switch_radar" ;;"leave_unit"
		{if operatable
			{call "cwsh_switch_hatch"}
		}
	}
	{on operatable on
		{if not tagged "radar_off"
			{call "cwsh_radar_on"}
		}
	}
	{on "engine_off"
	     {delay 3
		{call "update_antiradar"}
	     }

	}

	{on "engine_on"
	     {delay 3
	     	{tags remove "radar_off"}
		{call "update_antiradar"}
	     }

	}

	{on operatable off
		{call "cwsh_radar_off"}
	}
	{on "update_antiradar"
		{if  tagged "radar_off"
			{call "cwsh_radar_off"}
		else not operatable
			{call "cwsh_radar_off"}
		else tagged "no_power"
			{call "cwsh_radar_off"}
		else
			{call "cwsh_radar_on"}
		}
	}
	;{on "mp_destroy"
	;{ on "hull_destroyed"
	;	{with_linked_entity "vehicle9"
	;		{volumes disable all}
	;		{volumes enable nolook}
	;		{bone hide "root"}
	;		{inactive 1}
	;		{delay 5
	;			{delete}
	;		}
;
	;	}
	;}
	;}
	;{on "mp_destroy"

	;	{with_linked_entity "vehicle9"
	;		{volumes disable all}
	;		{volumes enable nolook}
	;		{bone hide "root"}
	;		{inactive 1}
	;		{delay 5
	;			{delete}
	;		}
;
	;	}
	;}
	{on "cwsh_switch_hatch"
		{if tagged "cwsh_passive"
			{damage_report "body" "component/radar_turns_on"}
			{tags remove "cwsh_passive"}
			{tags remove "cwsh_careful"}
			{tags remove "cwsh_tempdisable_radar"}
			{delay 5.0 "cwsh_radar_on"
				{call "cwsh_radar_on"}
				{damage_report "body" "component/radar_enabled"}
			}
		else
			{kill_delay "cwsh_radar_on"}
			{tags remove "cwsh_careful"}
			{tags add "cwsh_passive"}
			{tags remove "cwsh_tempdisable_radar"}
			{call "cwsh_disable_zpu"}
			{call "cwsh_radar_off"}
			{tags remove "antirad_linked"}
			{damage_report "body" "component/radar_disabled"}
		}
	}
	{on "cwsh_radar_on"
		{tags remove "radar_off"}
		{components "zpu_indicator" repair}
		{call "update_weaponry"}
		{delay 1 {spawn "radar_minimap"}}
	}
	{on "cwsh_radar_off"
		{tags add "radar_off"}
		{if not tagged "cwsh_tempdisable_radar"
			{components "zpu_indicator" break}
		}
		{call "update_weaponry"}
		{blastwave c4 0.001 r0 0.1 r1 1}
	}
}

(define "Shilka_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/shilka_start"}
		{link_sound "engine_stop"		"vehicle/engine/Shilka_shut_off"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/shilka_work"}
		{link_sound "exhaust"			"vehicle/engine/shilka_start"}
		{link_sound "move"				"vehicle/tracks/Shilka_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/light_m2"}
	}
)

(define "atgm_single_launcher"
	{on "init_%weapon"
		{add_view	"rok_tail"	"rok_tail_%weapon"	"%tail"}
	}
	{on fire "%weapon" overload
		("low_speed_bullet")
		{view start "rok_tail_%weapon"}
		{spawn "startsmoke" "%foresight" x}
		{spawn "startsmoke" "%tail" x}
		{spawn "proj_probe" "%foresight" x {tags add "%foresight"}}
		{delay 0.4 {view pause "rok_tail_%weapon"}}
		("cw_check_shooting" weap_id(%weapon))
		{delay 0.2 {call "spawn_shell"}}
	}
)

(define "custom_sh_multi_launcher"
	{on "init_%weapon"
		{add_view 	"rok_tail"		"%tail00"			"%tail00"}
		{add_view 	"rok_tail"		"%tail01"			"%tail01"}
		{add_view 	"rok_tail"		"%tail02"			"%tail02"}
		{add_view 	"rok_tail"		"%tail03"			"%tail03"}
		{add_view 	"rok_tail"		"%tail04"			"%tail04"}
		{add_view 	"rok_tail"		"%tail05"			"%tail05"}
		{add_view 	"rok_tail"		"%tail06"			"%tail06"}
		{add_view 	"rok_tail"		"%tail07"			"%tail07"}
	}
	{on fire "%weapon" overload
		("low_speed_bullet")
	   (define "fire_barrel"
	   	name "%0"
	   	{view start "%tail%0"}
	   	{spawn "startsmoke" "%shooter%0" x}
	   	{spawn "startsmoke" "%tail%0" x}
	   	;{spawn "proj_probe" "%foresight" x  {tags add "%shooter%0"}}
	   	{spawn "proj_probe_extra_big" "%foresight" x  {tags add "%shooter%0"}}
	   	{delay 0.4
	   		{view pause "%tail%0"}
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
	   ("cw_check_shooting" weap_id(%weapon))
	  }
)


(define "small_multibarrel_gun"
	{on "init_gun"
		{add_view "flash_zenit"	"flashbarrel00"	"%shooter00"}
		{add_view "flash_zenit"	"flashbarrel01"	"%shooter01"}
		{add_view "flash_zenit"	"flashbarrel02"	"%shooter02"}
		{add_view "flash_zenit"	"flashbarrel03"	"%shooter03"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrela00"	"%shooter00"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrela01"	"%shooter01"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrela02"	"%shooter02"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrela03"	"%shooter03"}
		;{add_view "autocannon_gilz"	"gilz00" "%fxshell00"}
		;{add_view "autocannon_gilz"	"gilz01" "%fxshell01"}
		;{add_view "autocannon_gilz"	"gilz02" "%fxshell02"}
		;{add_view "autocannon_gilz"	"gilz03" "%fxshell03"}
	}

	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
			{view start "flashbarrel%0"}
			{view start "flashbarrela%0"}
			{play_sound "Cannon_Mid"}
			{play_sound "Cannon_Far"}
			{delay 0.42 {view pause "flashbarrel%0"}{view pause "flashbarrela%0"}}
			{ani_play "fire%0"}
			;{view start	"gilz%0"}
			;{view show	"gilz%0"}
			;{delay 0.2 {view pause	"gilz%0"}}
			{delay 0.2
				{spawn "gilza_20mm" "fxshell%0" x scale 1.5
					{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}
				}
			}
		)

		{if    ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		}
		("cw_check_shooting" weap_id(gun))
	}
)


(define "custom_multi_launcher"
	{on "init_%weapon"
		{add_view 	"rok_tail"		"%tail00"			"%tail00"}
		{add_view 	"rok_tail"		"%tail01"			"%tail01"}
		{add_view 	"rok_tail"		"%tail02"			"%tail02"}
		{add_view 	"rok_tail"		"%tail03"			"%tail03"}
		{add_view 	"rok_tail"		"%tail04"			"%tail04"}
		{add_view 	"rok_tail"		"%tail05"			"%tail05"}
		{add_view 	"rok_tail"		"%tail06"			"%tail06"}
		{add_view 	"rok_tail"		"%tail07"			"%tail07"}
	}
	{on fire "%weapon" overload
		(define "fire_barrel"
			name "%0"
			{delay 0.1 {spawn "%missile_carrier" "%shooter%0"   x}}
			{view start "%tail%0"}
			{spawn "startsmoke" "%shooter%0" x}
			{spawn "startsmoke" "%tail%0" x}
			{delay 0.4
				{view pause "%tail%0"}
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
		("cw_check_shooting" weap_id(%weapon))
	}
)

{"3_barrels_smoke"
	{on "west81_smokegun" overload
		{if operatable
			{if not tagged "smoke_reload"
				("hksmoke" foresight(16))
				("hksmoke" foresight(17))
				("hksmoke" foresight(18))
				("hksmoke" foresight(19))
				("hksmoke" foresight(20))
				("hksmoke" foresight(21))
				("hksmoke" foresight(22))
				("hksmoke" foresight(23))
				("hksmoke" foresight(24))
				{if tagged "1smoke"
					{tags add "2smoke"}
					{tags remove "1smoke"}
				else tagged "2smoke"
					{tags add "smoke_reload"}
					{tags remove "2smoke"}
					{damage_report "basis" "component/smoke_reloading"}
					{delay 120 {tags remove "smoke_reload"} {damage_report "basis" "component/smoke_reloaded"}}
				else {tags add "1smoke"}
			}
			else
			{damage_report "basis" "component/smoke_reloading"}
			}
		}
	}
}

{"2_barrels_smoke"
	{on "west81_smokegun" overload
		{if operatable
			{if not tagged "smoke_reload"
				("hksmoke" foresight(16))
				("hksmoke" foresight(17))
				("hksmoke" foresight(18))
				("hksmoke" foresight(19))
				("hksmoke" foresight(20))
				("hksmoke" foresight(21))
				("hksmoke" foresight(22))
				("hksmoke" foresight(23))
				("hksmoke" foresight(24))
			{if tagged "1smoke"
				{tags add "smoke_reload"}
				{tags remove "1smoke"}
				{damage_report "basis" "component/smoke_reloading"}
				{delay 120 {tags remove "smoke_reload"} {damage_report "basis" "component/smoke_reloaded"}}
			else {tags add "1smoke"}
			}
			else
				{damage_report "basis" "component/smoke_reloading"}
			}
		}
	}
}

{"4_barrels_smoke"
	{on "west81_smokegun" overload
		{if operatable
			{if not tagged "smoke_reload"
				("hksmoke" foresight(16))
				("hksmoke" foresight(17))
				("hksmoke" foresight(18))
				("hksmoke" foresight(19))
				("hksmoke" foresight(20))
				("hksmoke" foresight(21))
				("hksmoke" foresight(22))
				("hksmoke" foresight(23))
				("hksmoke" foresight(24))
				{if tagged "1smoke"
					{tags add "2smoke"}
					{tags remove "1smoke"}
				else tagged "2smoke"
					{tags add "3smoke"}
					{tags remove "2smoke"}
				else tagged "3smoke"
					{tags add "smoke_reload"}
					{tags remove "3smoke"}
					{damage_report "basis" "component/smoke_reloading"}
					{delay 120 {tags remove "smoke_reload"} {damage_report "basis" "component/smoke_reloaded"}}
				else {tags add "1smoke"}
			}
			else
				{damage_report "basis" "component/smoke_reloading"}
			}
		}
	}
}


{"6_barrels_smoke"
	{on "west81_smokegun" overload
		{if operatable
			{if not tagged "smoke_reload"
				("hksmoke" foresight(16))
				("hksmoke" foresight(17))
				("hksmoke" foresight(18))
				("hksmoke" foresight(19))
				("hksmoke" foresight(20))
				("hksmoke" foresight(21))
				("hksmoke" foresight(22))
				("hksmoke" foresight(23))
				("hksmoke" foresight(24))
				{if tagged "1smoke"
					{tags add "2smoke"}
					{tags remove "1smoke"}
				else tagged "2smoke"
					{tags add "3smoke"}
					{tags remove "2smoke"}
				else tagged "3smoke"
					{tags add "4smoke"}
					{tags remove "3smoke"}
				else tagged "4smoke"
					{tags add "5smoke"}
					{tags remove "4smoke"}
				else tagged "5smoke"
					{tags add "smoke_reload"}
					{tags remove "5smoke"}
					{damage_report "basis" "component/smoke_reloading"}
					{delay 120 {tags remove "smoke_reload"} {damage_report "basis" "component/smoke_reloaded"}}
				else {tags add "1smoke"}
				}
			else
				{damage_report "basis" "component/smoke_reloading"}
			}
		}
	}
}






;{on "add_movement_sound" overload
;		{link_sound "engine_start"		"vehicle/engine/m1_abrams_new/start"}
;		{link_sound "engine_stop"		"vehicle/engine/m1_abrams_new/stop"}
;		{link_sound "engine_idle"		"vehicle/engine/m1_abrams_new/idle"}
;		{link_sound "engine_full"		"vehicle/engine/m1_abrams_new/full"}
;		{link_sound "exhaust"			"vehicle/engine/m1_abrams_new/exhaust"}
;		;{link_sound "move"				"vehicle/tracks/M1A1_tracks"}
;		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
;}








(define "Abrams_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m1abrams/M1A2_Start"}
		{link_sound "engine_stop"		"vehicle/engine/m1abrams/M1A2_Stop"}
		{link_sound "engine_idle"		"vehicle/engine/m1abrams/M1A2_Idle"}
		{link_sound "engine_full"		"vehicle/engine/m1abrams/M1A2_High"}
		{link_sound "exhaust"			"vehicle/engine/m1abrams/Abrams_Engine"}
		{link_sound "move"				"vehicle/tracks/M1A1_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("M2HB")
		("M1919A4")
	}

)

(define "atgm_multi_launcher"
	;{on "init_%weapon"
	;	{add_view 	"rocket_smoke_bm13"		"%tail00"			"%tail00"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail01"			"%tail01"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail02"			"%tail02"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail03"			"%tail03"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail04"			"%tail04"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail05"			"%tail05"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail06"			"%tail06"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail07"			"%tail07"}
	;}
	{on fire "%weapon" overload
		("low_speed_bullet")
		{spawn "proj_probe" "%foresight" x  {tags add "%foresight"}}


		(define "fire_barrel"
			name "%0"
			{view start "%tail%0"}
			{spawn "startsmoke" "%foresight" x}
			{spawn "startsmoke" "%tail%0" x}
			{delay 0.4
				{view pause "%tail%0"}
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
		("cw_check_shooting" weap_id(%weapon))
	}
)

{"with_adjustable_suspension"

    {on "suspension_down"


	{ani_play "suspension_down" 1.0}
	{set "animated" 1}


    }

    {on "suspension_up"


	{ani_play "suspension_up" 1.0}
	{set "animated" 0}


    }

}

{"tank with_adjustable_suspension"



	{on "hm68_switch_suspension"
		{if tagged "suspension_active"
			{tags remove "suspension_active"}
			{tags add "suspension_down"}
			;{ani_play "suspension_down" 1.0}
			{call "suspension_down"}

			{damage_report "body" "component/suspension_active"}


		else
			{tags add "suspension_active"}
			{tags remove "suspension_down"}
			;{ani_play "suspension_up" 1.0}
			{call "suspension_up"}
			{damage_report "body" "component/suspension_deactive"}
		}
	}

}

{"heavy_supply"
	{on "_explosion"
		{tags add "ordos_debug_heavy__explosion!!!"}
		{spawn "hm_explosion_5000kg" "basis" x}

	}
	{on "blast_body"
		{tags add "ordos_debug_heavy__explosion22222!!!"}
		{call "explosion"}

	}
}


{"shell"   ; compatible WTmod
	{on "spawn_shell" overload
		{tags add "gun_fired"}
		{call "spawn_shell_delay_auto"}
		(define "shell_eject_delay_auto"
			{delay_ex %0
				{spawn "shell_cannon_auto" "fx_invers1" x scale 0.01
					{impulse forward 2.5 0.25 up 0.4 0.2 fx 0.7 0.2 cx -1 com}
				}
				{spawn "shell_cannon_auto""fx_invers2" x scale 0.01
					{impulse forward 2.5 0.25 up 0.4 0.2 fx 0.7 0.2 cx -1 com}
				}
				{spawn "shell_cannon_auto""fx_invers3" x scale 0.01
					{impulse forward 2.5 0.25 up 0.4 0.2 fx 0.7 0.2 cx -1 com}
				}
			}
		)
	}
	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0)
	}
	{on "reload" overload
		{call "magazine_delay"}
	}
	(define "magazine"
		{on "magazine_delay" %override
			{delay %cut
				{tear "piece_small_steel" bone "magazine" copy
					%impulse
				}
				{delay 0
					{view hide "magazine"}
					{delay %show
						{view show "magazine"}
					}
				}
			}
		}
	)
	("magazine" cut(0) show(1.8) override() impulse({impulse up -0.01 com}))
}



(define "bredly_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/bredly/Bradley_Start"}
		{link_sound "engine_stop"		"vehicle/engine/bredly/Bradley_Stop"}
		{link_sound "engine_idle"		"vehicle/engine/bredly/Bradley_Idle"}
		{link_sound "engine_full"		"vehicle/engine/bredly/Bradley_High"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"				"vehicle/tracks/1_Abrams_move"}
		{link_sound "rotate_turret"		"vehicle/turret/light_m2"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}

)

(define "challenger_2_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/challenger/challenger2_engine_work"}
		{link_sound "engine_stop"		"vehicle/engine/challenger/challenger2_engine_stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/challenger/challenger2_engine_work"}
		{link_sound "exhaust"			"vehicle/engine/challenger/challenger2_engine_start"}
		{link_sound "move"				"vehicle/tracks/tracks_chellanger2"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}

	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("M1919A4")
	}
)

(define "mlrs_m270"
	{on spawn
		{add_view 	"startsmoke_big" 		"rok_tail00" 		"shooter00"}
		{add_view 	"startsmoke_big" 		"rok_tail01" 		"shooter01"}
		{add_view 	"startsmoke_big" 		"rok_tail02" 		"shooter02"}
		{add_view 	"startsmoke_big" 		"rok_tail03" 		"shooter03"}
		{add_view 	"startsmoke_big" 		"rok_tail04" 		"shooter04"}
		{add_view 	"startsmoke_big" 		"rok_tail05" 		"shooter05"}
		{add_view 	"startsmoke_big" 		"rok_tail06" 		"shooter06"}
		{add_view 	"startsmoke_big" 		"rok_tail07" 		"shooter07"}
		{add_view 	"startsmoke_big" 		"rok_tail08" 		"shooter08"}
		{add_view 	"startsmoke_big" 		"rok_tail09" 		"shooter09"}
		{add_view 	"startsmoke_big" 		"rok_tail10" 		"shooter10"}
		{add_view 	"startsmoke_big" 		"rok_tail11" 		"shooter11"}
	}

	("bredly_sound")
	{on ik begin "turret"			{play_sound "rotate_turret" 1}		}
	{on ik end "turret"			{stop_sound "rotate_turret"}		}
	{on fire "mgun1" overload
		{view start "flashbarrel3"}
		("cw_check_shooting" weap_id(mgun1))
	}

	{on fire "gun"
		{spawn "startsmoke_big"}
		{spawn "dust_shot_big_2" "basis"}
		{ani_play "fire"}
		{view start "flashbarrel_gun"}
		{view start "smoke_add"}
		{spawn "proj_probe_extra_big"  "foresight" x}
		{delay 0.16 "shell_off"
			{view pause "smoke_add"}
			{view pause "flashbarrel_gun"}
		}
		(define "fire_barrel"	name "%0"
			{view start "rok_tail%0"}
			{delay 0.42
				{view pause "rok_tail%0"}
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
	}

	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}

	{on "explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}


	{on "spawn_shellhole"
		{if "big_explosion"
			{spawn "crater_extra_big" "basis" terrain_texmod}
			{spawn "shellhole_big_dead" "basis"}
		}
	}
)
(define "bmp3_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t55_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
)

(define "bmp1_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/BMP_rus_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/bmp_end"}
		{link_sound "move"			"vehicle/tracks/bmp2_Tracks"}
		{link_sound "engine_full"		"vehicle/engine/BMP_rus_engine"}
		{link_sound "exhaust"		"vehicle/engine/BMP_rus_engine_start"}
		{link_sound "rotate_turret" 		"vehicle/turret/light_m1"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
)

{"bmp3_common"

	("bmp3_sound")
	;("100mm_2a70")
	;("90-105mm_gilza")
	;("30mm_2a42_gun1")
	{on "spawn_shell" overload
		{spawn "shell_cannon_auto" "fxshell_canon" x scale 0.012
			{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}
		}
	}

	{on "spawn_shell_maingun"
		{delay_ex 0
				{play_sound "breech_open"}


				{delay_ex 2
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view pause "smoke_shell"}
					}
					{spawn "poddon_cannon_2a70" "fx_invers" x scale 0.0095
						{impulse forward 4 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
						{add_view "smoke_empty_shell" "smoke_shell" "fx_shellsmoke"}
						{view start "smoke_shell"}
						{delay_effect 3 1 "stop"}
						{##delay 3 0.5
							{hide 3}
						}
					}
				}
			}

	}
	{on "gunner_hatch_open" overload}

}



;/*===========  Command Vehicle Props  ===========*/

{"radio"
	(define "update_radio"
		{if crew_in_place "commander"
			{tags add "radio_on"}
			{tags remove "radio_off"}
		else
			{tags remove "radio_on"}
			{tags add "radio_off"}
		}
	)
	(define "update_radio_event"
		{on %event
			{call "update_radio"}
		}
	)
	("update_radio_event" event(operatable on))
	("update_radio_event" event(operatable off))
	("update_radio_event" event(crew in))
	("update_radio_event" event(crew out))
}

{"hatch"
;/*===========  Hatch Animation Begin  ===========*/

	{on "spawn_no_crew"
		{ani_wind "open" begin}
		{ani_wind "open1" begin}
	}
	{on "spawn_with_crew"
		{ani_wind "open" begin}
	}

	{on "event_no_crew"
		{ani_play "open" +1.0 resume}
		{ani_play "open1" +1.0 resume}
	}
	{on "event_with_crew"
		{ani_play "open" -1.0 resume}
		{ani_play "open1" -1.0 resume}
	}

	{on "gunner2_hatch_open"
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner2_hatch_close"
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on "gunner3_hatch_open"}
	{on "gunner3_hatch_close"}
	{on "gunner4_hatch_open"}
	{on "gunner4_hatch_close"}
	{on "commander_hatch_open"}
	{on "commander_hatch_close"}
	{on "charger_hatch_open"}
	{on "charger_hatch_close"}

	(define "places"
		{if has_place "%0"
			{if crew_in_place "%0"
			    {if  tagged "cwsh_zpu_off"

			    else {call "%0_hatch_open"}
			    }
			else
				{call "%0_hatch_close"}
			}
		}
	)
	(define "update_hatch"

		{if not operatable

			{if %wind

				{call "spawn_no_crew"}
			else

				{call "event_no_crew"}
			}
		else
			{if %wind

				{call "spawn_with_crew"}

			else

				{call "event_with_crew"}


			}
			("places" args gunner2)
			("places" args gunner3)
			("places" args gunner4)
			("places" args commander)
			("places" args charger)
		}
	)




	{on "update_hatch_on_spawn"
		("update_hatch" wind(true))
		{tags remove "cw_panorama_work"}
		{call "update_cw_panorama"}
		{call "update_weaponry"}
	}
	(define "update_hatch_event"
		{on %event
			("update_hatch" wind(false))
			{call "update_zpu"}
			{tags remove "cw_panorama_work"}
			{call "update_cw_panorama"}
		}
	)
	("update_hatch_event" event(operatable on))
	("update_hatch_event" event(operatable off))
	("update_hatch_event" event(crew in))
	("update_hatch_event" event(crew out))

	;/*=========== Hatch Animation End ===========*/
}
	;/*=========== ESS Smoke Instructions ===========*/

{"smoke ess"					;// Emergency Smoke System - Soviet method for creating smokescreens by injecting diesel fuel into hot exhausts
	{on spawn
		{add_view "exhaust_dark_big_diesel"			"smoke_ess1"			"fxsmoke1"}
		{add_view "smoke_cover-up_big"				"smoke_ess1_cover" 		"fxsmoke1"}

		(define "spawn_volume"
			{spawn "smoke_volume_%0" offset %1 %2 0
				{delay %3 {hide 1}}
			}
		)

	}
	{on "smoke_screen"
		{view start "smoke_ess1"}
		{delay 3
			{view start "smoke_ess1_cover"}
			("spawn_volume" args cylinder 110 0 84)
			("spawn_volume" args cylinder -110 0 84)
			("spawn_volume" args cylinder 0 110 84)
			("spawn_volume" args cylinder 0 -110 84)
			("spawn_volume" args cylinder 110 110 84)
			("spawn_volume" args cylinder -110 -110 84)
			("spawn_volume" args cylinder -110 110 84)
			("spawn_volume" args cylinder 110 -110 84)
		}
		{delay 5
			("spawn_volume" args cylinder_sm 220 0 82)
			("spawn_volume" args cylinder_sm -220 0 82)
			("spawn_volume" args cylinder_sm 0 220 82)
			("spawn_volume" args cylinder_sm 0 -220 82)
		}
		{delay 60
			{view stop "smoke_ess1_cover"}
		}
		{delay 60
			{view stop "smoke_ess1"}
		}
	}
}

{"smoke autoshot"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		{call "west81_smokegun"}
	}
}

{"smoke 8shot"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		("smoke_shot" args "nbk39" smoke_shot1 -17 0.5 0 20)
		("smoke_shot" args "nbk39" smoke_shot4 -17 0.5 0.1 20)
		("smoke_shot" args "nbk39" smoke_shot2 -17 0.5 0.2 20)
		("smoke_shot" args "nbk39" smoke_shot5 -17 0.5 0.3 20)
		("smoke_shot" args "nbk39" smoke_shot3 -17 0.5 0.4 20)
		("smoke_shot" args "nbk39" smoke_shot6 -17 0.5 0.5 20)
		("smoke_shot" args "nbk39" smoke_shot7 -17 0.5 0.6 20)
		("smoke_shot" args "nbk39" smoke_shot8 -17 0.5 0.7 20)
	}
}

{"smoke 8shot_m1"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		("smoke_shot" args "nbk39" smoke_shot1 17 0.5 0 20)
		("smoke_shot" args "nbk39" smoke_shot4 17 0.5 0.1 20)
		("smoke_shot" args "nbk39" smoke_shot2 17 0.5 0.2 20)
		("smoke_shot" args "nbk39" smoke_shot5 17 0.5 0.3 20)
		("smoke_shot" args "nbk39" smoke_shot3 17 0.5 0.4 20)
		("smoke_shot" args "nbk39" smoke_shot6 17 0.5 0.5 20)
		("smoke_shot" args "nbk39" smoke_shot7 17 0.5 0.6 20)
		("smoke_shot" args "nbk39" smoke_shot8 17 0.5 0.7 20)
	}
}

{"smoke 8shot_m1a1"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		("smoke_shot" args "nbk39" foresight20 17 0.5 0 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.1 20)
		("smoke_shot" args "nbk39" foresight20 17 0.5 0.2 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.3 20)
		("smoke_shot" args "nbk39" foresight20 17 0.5 0.4 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.5 20)
		("smoke_shot" args "nbk39" foresight20 17 0.5 0.6 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.7 20)
	}
}

{"smoke 4shot_bredly"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		("smoke_shot" args "nbk39" foresight20 17 0.5 0 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.1 20)
		("smoke_shot" args "nbk39" foresight20 17 0.5 0.2 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.3 20)

	}
}

{"smoke 2shotbmp3"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		("smoke_shot" args "nbk39" foresight20 17 0.5 0 20)
		;("smoke_shot" args "nbk39" foresight20 17 0.5 0.1 20)
		;("smoke_shot" args "nbk39" foresight20 17 0.5 0.2 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.3 20)
		;("smoke_shot" args "nbk39" foresight20 17 0.5 0.4 20)
		;("smoke_shot" args "nbk39" foresight21 17 0.5 0.5 20)
		;("smoke_shot" args "nbk39" foresight21 17 0.5 0.6 20)
		;("smoke_shot" args "nbk39" foresight21 17 0.5 0.7 20)
	}
}


{"smoke 2shotbtrd"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		("smoke_shot" args "nbk39" foresight17 17 0.5 0 20)

		;("smoke_shot" args "nbk39" foresight17 17 0.5 0.2 20)


		;("smoke_shot" args "nbk39" foresight18 17 0.5 0.6 20)
		("smoke_shot" args "nbk39" foresight18 17 0.5 0.7 20)
	}
}

{"smoke 6shotbmp"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		("smoke_shot" args "nbk39" foresight20 17 0.5 0 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.1 20)
		("smoke_shot" args "nbk39" foresight20 17 0.5 0.3 20)
		;("smoke_shot" args "nbk39" foresight21 17 0.5 0.3 20)
		;("smoke_shot" args "nbk39" foresight20 17 0.5 0.4 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.5 20)
		("smoke_shot" args "nbk39" foresight20 17 0.5 0.6 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.7 20)
	}
}

{"smoke 4shott72"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		;("smoke_shot" args "nbk39" foresight20 17 0.5 0 20)
		;("smoke_shot" args "nbk39" foresight20 17 0.5 0.1 20)
		;("smoke_shot" args "nbk39" foresight20 17 0.5 0.2 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.3 20)
		;("smoke_shot" args "nbk39" foresight20 17 0.5 0.4 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.5 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.6 20)
		("smoke_shot" args "nbk39" foresight21 17 0.5 0.7 20)
	}
}

{"smoke bdsh"					;// Soviet droppable smoke bombs
	{on spawn
		{add_view "exhaust_dark_big_diesel"			"smoke_bdsh"			"root"}
		{add_view "smoke_cover-up_big"				"smoke_bdsh_cover" 		"root"}
		{tags add "smoke0"}
	}


	{on "smoke_screen"
		{if tagged "smoke0"
			{tags add "smoke1"}
			{tags remove "smoke0"}
			{tear "piece_large_steel" bone "smokebomb1"
				{impulse up -1 dir -5 forward -2}
				{add_view "exhaust_dark_big_diesel"			"smoke_bdsh"			"root"}
				{add_view "smoke_cover-up_big"				"smoke_bdsh_cover" 		"root"}
				{view start "smoke_bdsh"}
				{view start "smoke_bdsh_cover"}
				{delay 60
					{view stop "smoke_bdsh"}
					{view stop "smoke_bdsh_cover"}
				}
			}
		else tagged "smoke1"
			{tags add "smoke2"}
			{tags remove "smoke1"}
			{tear "piece_large_steel" bone "smokebomb2"
				{impulse up -1 dir -5 forward -2}
				{add_view "exhaust_dark_big_diesel"			"smoke_bdsh"			"root"}
				{add_view "smoke_cover-up_big"				"smoke_bdsh_cover" 		"root"}
				{view start "smoke_bdsh"}
				{view start "smoke_bdsh_cover"}
				{delay 60
					{view stop "smoke_bdsh"}
					{view stop "smoke_bdsh_cover"}
				}
			}
		else ;//do nothing
		}
	}

	(define "drop_bdsh"
		{on "smokebomb"
			{if tagged "smoke0"
				{tags add "smoke1"}
				{tags remove "smoke0"}
				{tear "piece_large_steel" bone "smokebomb1"
					{impulse up -1 dir -5 forward -2}
					{view start "smoke_bdsh"}
					{view start "smoke_bdsh_cover"}
					{delay 60
						{view stop "smoke_bdsh"}
						{view stop "smoke_bdsh_cover"}
					}
				}
			else tagged "smoke1"
				{tags add "smoke2"}
				{tags remove "smoke1"}
				{tear "piece_large_steel" bone "smokebomb2"
					{impulse up -1 dir -5 forward -2}
					{view start "smoke_bdsh"}
					{view start "smoke_bdsh_cover"}
					{delay 60
						{view stop "smoke_bdsh"}
						{view stop "smoke_bdsh_cover"}
					}
				}
			else ;//do nothing
			}
		}
	)

		{on "smokebomb2"
			{tear "piece_large_steel" bone "smokebomb2"
				{impulse up -1 dir -5 forward -2}
				{view start "smoke_bdsh"}
				{view start "smoke_bdsh_cover"}
				{delay 60
					{view stop "smoke_bdsh"}
					{view stop "smoke_bdsh_cover"}
				}
			}
		}
	)
}



{"mg_turret"
	{on spawn
		{call "update_mg_turret"}
	}
	{on break
		{if not tagged "exploded"
		   {if component "turret_mg"
			{call "update_mg_turret"}
			{damage_report "turret_mg" "/armored/mg_turret_broken"}
		   }
		}
	}
	{on "update_mg_turret"
		{if not tagged "destroyed"
			{if work "body"
				{if work "turret_mg"
					{weapon_work "mgun"  1}
				 else
					{weapon_work "mgun"  0}
				}
				{call "update_cw_panorama"}
			else
				{ik_enable "turret_mg" 0}
				{weapon_work "mgun"  0}

				{delay 0.1
					   {call "update_cw_panorama"}
				}
			}
		}
	}
	{on repair
		{if component "turret_mg"
			{damage_report "turret_mg" "/armored/mg_turret_repaired"}
			{call "update_mg_turret"}
		  }

	}

	{on ik begin "turret_mg"				;// basis bone rotates
		 {tags add "human_in_use"}
		 {call "update_cw_panorama"}
	}
	{on ik end "turret_mg"					;// basis stops rotation

		{delay 5 {tags remove "human_in_use"}
			 {call "update_cw_panorama"}

		}
	}
}

;/*=========== spawn_shell script for vehicles? ===========*/

{"moto shell_eject"
	{on fire "gun"
		{call "spawn_shell"}
	}
	{on "spawn_shell"
		{tags add "gun_fired"}
		{call "spawn_shell_delay"}
		(define "shell_eject_delay"
			{delay_ex %0
				{ani_play "shell_eject" 1}			;// door/hatch animation for tank to open and shell is thrown out
				{ani_play "shell_hatch" 1}
				{delay_ex %1
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view pause "smoke_shell"}
					}
					{spawn "shell_cannon" "fx_invers" x scale 0.014
						{impulse forward 4 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
						{add_view "smoke_empty_shell" "smoke_shell" "fx_shellsmoke"}
						{view start "smoke_shell"}
						{delay_effect 3 1 "stop"}
						{##delay 3 0.5
							{hide 3}
						}
					}
				}
			}
		)
	}

	{on "spawn_shell_delay"
		("shell_eject_delay" args 0 0)
	}

	{on "reload"
		{call "reload_delay"}
		(define "reload_delay"
			{if tagged "gun_fired"
				{delay %0 ;4.5
					{tags remove "gun_fired"}
					{ani_play "shell_eject" -1.0}
					{ani_play "shell_hatch" -1.0}
				}
			else
				{delay %1 ;0.5
					{ani_play "shell_eject" 1.0}
				}
				{delay %2 ;5
					{ani_play "shell_eject" -1.0}
				}
			}
		)
	}

	{on "reload_delay"
		("reload_delay" args 4.5 0.5 5)
	}
}

;/// Added from Valour mod
(define "m4a3_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4a3/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4a3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4a3/idle"}
		{link_sound "engine_full"		"vehicle/engine/m4a3/full"}
		{link_sound "exhaust"			"vehicle/engine/m4a3/exhaust"}
		{link_sound "move"				"vehicle/tracks/m4a2"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "m24_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m24/start"}
		{link_sound "engine_stop"		"vehicle/engine/m24/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m24/idle"}
		{link_sound "engine_full"		"vehicle/engine/m24/full"}
		{link_sound "exhaust"			"vehicle/engine/m24/exhaust"}
		{link_sound "move"				"vehicle/tracks/m24"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
	}
)
(define "us_halftrack_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/us_halftrack/start"}
		{link_sound "engine_stop"		"vehicle/engine/us_halftrack/stop"}
		{link_sound "engine_idle"		"vehicle/engine/us_halftrack/idle"}
		{link_sound "engine_full"		"vehicle/engine/us_halftrack/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz251/exhaust"}
		{link_sound "move"				"vehicle/tracks/m3a1"}
		{link_sound "rotate_turret" 	"vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
	}
)
(define "m10_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4/idle"}
		{link_sound "engine_full"		"vehicle/engine/m4/full"}
		{link_sound "exhaust"			"vehicle/engine/m4/exhaust"}
		{link_sound "move"				"vehicle/tracks/m4"}
		{link_sound "rotate_turret" 	"vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
	}
)
(define "m26_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m26/start"}
		{link_sound "engine_stop"		"vehicle/engine/m26/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m26/idle"}
		{link_sound "engine_full"		"vehicle/engine/m26/full"}
		{link_sound "exhaust"			"vehicle/engine/m26/exhaust"}
		{link_sound "move"				"vehicle/tracks/m26"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
	}
)
(define "humvee_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/humvee/offroad_01_start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/humvee/offroad_01_shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/humvee/hmmwv_01_idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/humvee/hmmwv_01_HIGH_EXT"}
		{link_sound "exhaust"			"vehicle/engine/humvee/exhaust"}
		{link_sound "move"			"vehicle/tracks/Big_Wheels_Roll"}
		{link_sound "rotate_turret"		"vehicle/turret/manualtrav"}

	}
)

;/*=========== SOVIET Vehicles  ===========*/

{"pt-76 tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"pt-76b tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}


{"btr-50p tank"
	("t70_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"btr-50pvmf tank"
	("t70_sound")
	("triplezpu_params"
		gunner(gunner2) zpu_mgun(mgun1) anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2)
		secgunner(gunner3) seczpu_mgun(mgun2) secanim(hm_hatch_cover_sit) secpose(seat_isu152_gunner2)
		triplegunner(gunner4) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit) trippose(seat_isu152_gunner2)
	)
}

{"btr-50_zis2 tank"
	("t70_sound")
}

{"btr-50_zis3 tank"
	("t70_sound")
}

{"btr-50_d44 tank"
	("t70_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1)
	}

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"btr-50pk tank"
	("t70_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open_hatches" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open_hatches" -1.0 resume}
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"btr-50pu tank"
	("t70_sound")
}

{"asu-85 tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"asu-85_late tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
	{on "commander_hatch_open" overload
		{ani_play "open" +1.0 resume}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"asu-85_para tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"leopord_1 tank"
	("pz5_sound")
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}
{"centurion3 tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}



{"obj906 tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}



{"t-34-85m tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"su100m tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"zsu-23-4 tank"
	("t70_sound")

	{on "gunner_hatch_open"
		{if not tagged "sight_open"
			{ani_play "sight_cover" +1.0 resume}
			{tags add "sight_open"}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_cover" -1.0 resume}
		{tags remove "sight_open"}
	}

	{on "commander_hatch_open"
		{if not tagged "radar_up"
			{ani_play "radar_up" +1.0 resume}
			{tags add "radar_up"}
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		else tagged "radar_up"
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		}
	}

	{on "commander_hatch_close"

		{ani_play "radar_up" -1.0 resume}
		{delay 3
			{ani_stop "radar_spin"}
		}
	}

	{on "init_gun" overload
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel01"	"shooter01"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel02"	"shooter02"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel03"	"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
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

{"zsu-23-4b tank"
	("t70_sound")

	{on "gunner_hatch_open"
		{if not tagged "sight_open"
			{ani_play "sight_cover" +1.0 resume}
			{tags add "sight_open"}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_cover" -1.0 resume}
		{tags remove "sight_open"}
	}

	{on "commander_hatch_open"
		{if not tagged "radar_up"
			{ani_play "radar_up" +1.0 resume}
			{tags add "radar_up"}
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		else tagged "radar_up"
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		}
	}

	{on "commander_hatch_close"

		{ani_play "radar_up" -1.0 resume}
		{delay 3
			{ani_stop "radar_spin"}
		}
	}

	{on "init_gun" overload
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel01"	"shooter01"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel02"	"shooter02"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel03"	"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
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

{"zsu-23-4m tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	{on "gunner_hatch_open"
		{if not tagged "sight_open"
			{ani_play "sight_cover" +1.0 resume}
			{tags add "sight_open"}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_cover" -1.0 resume}
		{tags remove "sight_open"}
	}

	{on operatable on
		{if not "radar_up"
			{set "radar_up" 1}
			{ani_play "radar_up"}
		}
	}

	{on "init_gun" overload
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel01"	"shooter01"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel02"	"shooter02"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel03"	"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
		{call "update_gun"}
	}
	{on fire "gun" overload
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
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	("radar_params" triplex(commander_triplex) visor(visor1) anim_rotate(radar_spin) marker(antirad_generator_rus))
}

{"gaz-51 car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"gaz-51_ammo car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"gaz-51_eng car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"zil-130 car"
	("zis5_sound")
}

{"zil-130_eng car"
	("zis5_sound")
}

{"zil-130_ammo car"
	("zis5_sound")
}

{"zil-157 car"
	("zis5_sound")
}

{"zil-157_ammo car"
	("zis5_sound")
}

{"zil-157_eng car"
	("zis5_sound")
}

{"zil-157_fuel car"
	("zis5_sound")
}

{"zil131 car"
	("zis5_sound")
}

{"zil131_ammo car"
	("zis5_sound")
}

{"gaz66 car"
	("studebaker_sound")
}

{"ural375 car"
	("zis5_sound")
}

{"ural375_ammo car"
	("zis5_sound")
}

{"kraz-255 car"
	("opel_maultier_sound")
}

{"kraz-255_ammo car"
	("opel_maultier_sound")
}

{"bm-21_grad car"
	("zis5_sound")
}

{"bm-14-16 car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"bm-13-17m car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"bm-31m car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"btr-152"
	("zis5_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2))
}

{"btr-152u"
	("zis5_sound")
}

{"btr-60p"
	("sdkfz234_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2))
}

{"btr-60pvmf"
	("sdkfz234_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2))
}

{"btr-60pa"
	("sdkfz234_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"btr-60pb"
	("sdkfz234_sound")
	{on "add_weapon_sound" overload
		("DShK38")
		("DT")
	}
}

{"btr-80"    ;//add by ordos
	("sdkfz234_sound")
	{on "add_weapon_sound" overload
		("DShK38")
		("DT")
	}
}

{"btr80a"    ;//add by ordos
	("sdkfz234_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("DT")
	}
	("25-50mm_gilza" fxshell(fx_invers1))
	{on fire "gun"
		{delay 0.05 {call "spawn_shell"}}

	}
}

{"asu57"
	("s60_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"asu57_para"
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
	}
	("s60_sound")
}

{"bmd1_para"
	("bt_sound")
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}

	{on fire "gun2"
		{spawn "proj_probe" "foresight6" x}
	}
}

{"t-44 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"t-44100 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"t-54a tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))


}

{"t-54b tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t-55 tank"
	("t55_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"t-55a tank"
	("t55_sound")
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"t55a tank"
	("t55_sound")
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"t55amd1 tank"
	("t55_sound")


	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner))
}

{"t55am tank"
	("t55_sound")


	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner))
}


{"t55amv tank"
	("t55_sound")


	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner))
}


{"t-54-1951 tank"
	("t55_sound")
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"t-55k tank"
	("t55_sound")
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}



{"t72b tank"

	("t72_sound")
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("has_fixed_loading" args "reload_up" 0.4)

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
		;{call "cw_panorama_instant_off"}
		;{call "update_cw_panorama"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
		;{call "update_cw_panorama"}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy) com_optic(spot))


}



{"t72b_1989year tank"
	("t72_sound")
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("has_fixed_loading" args "reload_up" 0.4)

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy) com_optic(spot))


}

{"t-64bv tank"
	("t64_sound")
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("has_fixed_loading" args "reload_up" 0.5)

	{on "commander_hatch_open" overload
		{ani_play "open" -1.0}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" 1.0}
	}

	{on "gunner_hatch_open" overload
		{ani_play "open1" -1}
	}
	{on "gunner_hatch_close" overload
		{ani_play "open1" 1}
	}


}

{"t64a tank"
	("t64_sound")

{on "rand_barrel_fire" overload
	{if tagged "gun_brake"
		{view start "cooking_barrel_aftersmoke2"}
	else
		{view start "cooking_barrel_aftersmoke"}
	}
	{tags add "barrel_fire"}
}

{on "pre_smoke_cookoff"	 overload	;// pre-smoke delayed normal cookoff path
	{if not tagged "pre_smoke_cookoff"
		{tags add "pre_smoke_cookoff"}
		{view start "cooking_presmoke_1"}
		{start_sound "detonation/cook_off/internal_explosions"}
		{delay 3
			{call "burn_emit"}
		}

		;// build up of smoke to cookoff
		{delay 8 6 "cookoff4"
			{if not able "exploded"
				{view stop "cooking_presmoke_1"}
				{view start "cooking_presmoke_2"}
				{start_sound "detonation/cook_off/internal_explosions"}

				{if rand 0.3
					{call_synced "rand_barrel_fire"}
				}

				{delay 1.5 0.5 "cookoff5"
					{if tagged "barrel_fire"
						{if tagged "gun_brake"
							{view pause "cooking_barrel_aftersmoke2"}
							{view start "cooking_barrel_smoke2"}
						 else
							{view pause "cooking_barrel_aftersmoke"}
							{view start "cooking_barrel_smoke"}
						}
					}
					{view stop "cooking_presmoke_2"}
					{view start "cooking_presmoke_3"}
					{start_sound "detonation/cook_off/internal_explosions"}

					{delay 0.4 0.2
						{start_sound "detonation/cook_off/internal_explosions"}
					}
					{delay 0.8 0.2
						{start_sound "detonation/cook_off/internal_explosions"}
					}
					{delay 1.5 0.5 "cookoff6"
						{view stop "cooking_presmoke_3"}
						{call "normal_cookoff"}
					}
				}
			}
		}
	}
}

{on "normal_cookoff" overload	;//normal cookoff, instant
	{if not able "exploded"
		{if not tagged "ammo_cooked2"
		{if rand 0.5
			{call_synced "rand_hatch_explosion"}
		}
		{if rand 0.4
			{call_synced "turret_ring_fire"}
		}
		{if tagged "barrel_fire"					;// barrel smoke turns into fire
			{if tagged "gun_brake"
				{view stop "cooking_barrel_smoke2"}
				{view start "cooking_barrel_fire2"}
			else
				{view stop "cooking_barrel_smoke"}
				{view start "cooking_barrel_fire"}
			}
		}

		{fire radius 4 time 4 heating 0.5}
		{kill_crew}
		{clear_inventory}
		{delay 2
				{kick_entity_manager}
				{tags add "destroyed"}
		}
		{delay 0.1
			{spawn "black_target_remover" "missile_aim_point_bone" x}
		}
		{link_sound "hatch_fire" "fire/loops/big"}
		{view show "cooking_high"}
		{view start "cooking_high"}
		{ani_wind "open" end}
		{ani_wind "open1" end}
		{ani_wind "open2" end}
		{play_sound "cook_off" 1}
		{play_sound "burnup_ammo" 1}

		{delay 10 2 "cookoff7"
			{view show "cooking_high_2"}
			{view start "cooking_high_2"}
			{view start "cooking_turret_smoke"}
			{view stop "cooking_high"}
			{view hide "cooking_high"}
			{view stop "cooking_turret_fire"}
			{stop_sound "burnup_ammo"}
			{start_sound "detonation/cook_off/transition"}

			{delay 4 2 "cookoff8"
				{stop_sound "cook_off"}
				{start_sound "detonation/cook_off/transition"}
				{view show "cooking_hatch_fire"}
				{view start "cooking_hatch_fire"}
				{play_sound "hatch_fire" 1}
				{view hide "cooking_high_2"}
				{view stop "cooking_high_2"}
				{call_synced "tags_add_ammo_cooked2"}
				{if tagged "barrel_fire"
					{if tagged "gun_brake"
						{view start "cooking_barrel_aftersmoke2"}
						{view stop "cooking_barrel_fire2"}
					else
						{view start "cooking_barrel_aftersmoke"}
						{view stop "cooking_barrel_fire"}
					}
				}
				{delay 60 10 "cookoff9"
					{view start "cooking_hatch_smoke"}
					{view hide "cooking_hatch_fire"}
					{view stop "cooking_hatch_fire"}
					{stop_sound "hatch_fire"}
				}
			}
		}
	}
    }
}

	{on "gunner_hatch_open" overload
		{if crew_in_place "charger"
			{ani_play "open1" 0.5 }
		else
			{ani_play "open1" 0.5 }
		}

		;{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner_hatch_close" overload
		{if crew_in_place "charger"
			{ani_play "open1" -0.5 }
		else
			{ani_play "open1" -0.5 }
		}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("has_fixed_loading" args "reload_up2" 0.5)


}

{"t80b tank"


	("t80_sound")




	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on "gunner_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "gunner_hatch_close" overload

		{ani_play "open1" -1.0 resume}

	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("has_fixed_loading" args "reload_up" 0.5)

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80b_mgunner) com_optic(spot))

	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_instant_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}






}

{"t80bv tank"



	("t80_sound")



	{on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on "gunner_hatch_open" overload
		{ani_play "open1" 2.0 resume}
	}
	{on "gunner_hatch_close" overload

		{ani_play "open1" -2.0 resume}

	}

	("has_fixed_loading" args "reload_up" 0.5)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80b_mgunner) com_optic(spot))


}

{"t80u tank"
	{on spawn

		{weapon_work "mgun3"  0}

	}

	("t80_sound")

	{on "spawn_no_crew" overload
		{ani_wind "open" end}
		{ani_wind "open1" end}
	}

	{on fire "mgun"
			{if effector "stuff weapon"
				{with_effector
					{call "fire"}
				}
			else
				{play_sound  "action_recoil_HMG"}
				{play_sound "HMG_Mid"}
				{play_sound "HMG_Far"}
				{view start "flashbarrel3"}
				{delay 0.2
					{view pause "flashbarrel3"}
				}
			}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on "gunner_hatch_open" overload
		{ani_play "open1" 2.0 resume}
	}
	{on "gunner_hatch_close" overload

		{ani_play "open1" -2.0 resume}

	}


	("has_fixed_loading" args "reload_up2" 0.5)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner) com_optic(spot))

	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_instant_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}

}

{"t80yk tank"
	{on spawn

		{weapon_work "mgun3"  0}
		{add_view "flash_gun_big" "flashbarrel3" "Foresight3"}
	}

	("t80_sound")

	{on "init_gun" overload

		{add_view	"flash_gun_big"	"flashbarrel4"	"Foresight4"}
		{add_view	"flash_gun_big"	"flashbarrel5"	"Foresight5"}
		{link_sound "bkg"	"weapon/shot/bkg/gun/mg"}
	}

	{on fire "mgun"

				{play_sound  "action_recoil_HMG"}
				{play_sound "HMG_Mid"}
				{play_sound "HMG_Far"}
				{view start "flashbarrel3"}
				{delay 0.2
					{view pause "flashbarrel3"}
				}

	}
	("on_fire_mgun" args mgun2 flashbarrel5)

	{on "spawn_no_crew" overload
		{ani_wind "open" end}
		{ani_wind "open1" end}
	}

	{on "event_no_crew" overload
		{ani_play "open" 1}
		{ani_play "open1" 1}
	}

	{on "event_with_crew" overload
		{ani_play "open" -1}
		{ani_play "open1" -1}
	}


	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0}
	}

	{on "gunner_hatch_open" overload
		{ani_play "open1" 1.0}
	}
	{on "gunner_hatch_close" overload

		{ani_play "open1" -1.0}

	}

	("has_fixed_loading" args "reload_up2" 0.5)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner) com_optic(spot))

	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_instant_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}

	{on "shtora_active"
		(define "drop_optic_target"
			{if rand 0.5
				{if rand 0.5
					{if bone "shtora1"
					{delay 0.1 {spawn "decoy_optic_target"  "shtora1" x	{impulse up 5 2  rnd_dir 20 com} {gravity 0.5} {kill_delay "normal_hide" }}}
					}
				else
					{if bone "shtora2"
					{delay 0.1 {spawn "decoy_optic_target"  "shtora2" x	{impulse up 5 2  rnd_dir 20 com} {gravity 0.5} {kill_delay "normal_hide" }}}
					}
				}
			}
		)
	 	    {if operatable
			{if work "Shtora"
				{if not tagged "no_power"
					{kill_delay "launching_decoy"}
					{view show "shtora"}
					{view start "shtora"}
					{call "shtora_warn"}
					{delay 7 "launching_decoy"	{view hide "shtora"}}
					{delay 0.1 "launching_decoy" ("drop_optic_target")}
					{delay 0.5 "launching_decoy" ("drop_optic_target")}
					{delay 1 "launching_decoy" ("drop_optic_target" )}
					{delay 1.1 "launching_decoy" ("drop_optic_target" )}
					{delay 1.5 "launching_decoy" ("drop_optic_target" )}
					{delay 2 "launching_decoy" ("drop_optic_target" )}
					{delay 2.1 "launching_decoy" ("drop_optic_target" )}
					{delay 2.5 "launching_decoy" ("drop_optic_target" )}
					{delay 3 "launching_decoy" ("drop_optic_target")}
				}
			}
		   }
	}

}

{"9p149_shturm-s tank"

	("t70_sound")

	{on "init_gun"
		{set "radar_up" 0}

	}

	{on fire "gun2" overload
		{tags add "cw_check_shooting"}
		{delay 0.5 {ik_enable "turret" 0} {set "radar_up" 1}}
		{delay 14.5 {set "radar_up" 0}{call "update_turret"}}
		{ani_play "fire" }
		{spawn "proj_probe" "foresight1" x}
		("cw_check_shooting" weap_id(gun2))
		{delay 0.1 {call "spawn_shell"}}

	}

	{on "spawn_shell" ;ordos_debug
		{tags add "ordosdebug_spawnshell"}
		{spawn "tpk_shturm_s" "shell_up" x
			{impulse up 0.3 0.1 dir 0.2 0.1 cz 0.2 0.1 forward 0.7 0.2 com}
			;{impulse forward 4 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
			{delay 6 2.5 {hide 3}}
		}
	}

	{on repair
		{if component "body"
			{set "radar_up" 1}
		}
	}

	{on "update_cw_panorama" overload
		{if operatable
				{if not tagged "contusion"
						{if crew_in_place "gunner"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_instant_off"}}
					else {call "cw_panorama_off"}}


		else {call "cw_panorama_instant_off"}}
	}


}

{"mtlb"

	("mtlb_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
}

{"mtlb_vm"

	("mtlb_sound")
	{on fire "mgun"
			{if effector "stuff weapon"
				{with_effector
					{call "fire"}
				}
			else
				{play_sound  "action_recoil_HMG"}
				{play_sound "HMG_Mid"}
				{play_sound "HMG_Far"}
				{view start "flashbarrel4"}
				{delay 0.2
					{view pause "flashbarrel4"}
				}
			}
	}
	{on "add_weapon_sound" overload
		("DShK38")
	}
}

{"mtlb_rbu6000"

	("mtlb_sound")
	{on "_explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "spawn_shellhole"
		{if "big_explosion"
			{spawn "crater_massive" "basis" terrain_texmod}
			{spawn "shellhole_big_dead" "basis"}
		}
	}
	{on "ammo_break" overload
		{delay 1
			{call_synced "ammo_explosion"}
		}
	}


}

{"mtlb_new"

	("mtlb_sound")

}

{"t62 tank"
	("t62_sound")

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.5)
	}
	("has_fixed_loading" args "reload_up" 0.2)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	{on "commander_hatch_open" overload
		{ani_play "open" -1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" 1.0 resume}
	}

	{on "charger_hatch_open" overload
		{ani_play "open" -1.0 resume}

	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume }

	}


}

{"t62m1 tank"
	("t62_sound")

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 4.0)
	}
	("has_fixed_loading" args "reload_up" 0.2)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open1" end}

	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume }

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))

}

{"bmp-2 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/bmp2/BMP-2_Start"}
		{link_sound "engine_stop"		"vehicle/engine/bmp2/BMP-2_Stop"}
		{link_sound "engine_idle"		"vehicle/engine/bmp2/BMP-2_Idle"}
		{link_sound "engine_full"		"vehicle/engine/bmp2/BMP-2_High"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t70"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}

	{on fire "gun2"
		{spawn "proj_probe" "foresight" x}
	}

}

{"bmp2 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/bmp2/BMP-2_Start"}
		{link_sound "engine_stop"		"vehicle/engine/bmp2/BMP-2_Stop"}
		{link_sound "engine_idle"		"vehicle/engine/bmp2/BMP-2_Idle"}
		{link_sound "engine_full"		"vehicle/engine/bmp2/BMP-2_High"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t70"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("DS39")
	}
	("25-50mm_gilza" fxshell(fx_invers1))
	("atgm_single_launcher" weapon(gun2) foresight(foresight6) tail(shooter00))
	{on fire "gun"
		{delay 0.05 {call "spawn_shell"}}

	}
}

{"bmp2_gdr"

	{on spawn

	   {delay 0.5

		{if terrain_fx "ice"
				{tex_mod "winter"}
			else terrain_fx "snow"
				{tex_mod "winter"}
			else
				{tex_mod "ddr"}
		}
	   }


	}

}

{"t55am2b"

	{on spawn

		{delay 0.5

		{if terrain_fx "ice"
				{tex_mod "winter"}
			else terrain_fx "snow"
				{tex_mod "winter"}
			else
				{tex_mod "ddr"}
		}
	   }


	}

}

{"kpz_t72m"

	{on spawn

		{delay 0.5

		{if terrain_fx "ice"
				{tex_mod "winter"}
			else terrain_fx "snow"
				{tex_mod "winter"}
			else
				{tex_mod "ddr"}
		}
	   }


	}

}

{"bmp3_2"
	{on "add_weapon_sound" overload

		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound		"auto_Cannon_Mid"		"weapon/shot/cannon/s1/d2/Shared/Autocannon_20to30mm/"}
		{link_sound		"auto_Cannon_Far"		"weapon/shot/cannon/s1/d3/Shared/Autocannon_20to30mm/"}
		;{link_sound		"auto_Cannon_Mid"		"weapon/shot/cannon/s1/d2/Shared/Autocannon_37to40mm/"}
		;{link_sound		"auto_Cannon_Far"		"weapon/shot/cannon/s1/d3/Shared/Autocannon_37to40mm/"}
		("DS39")
	}

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{call "spawn_shell_maingun"}
	}

	{on fire "gun1"
		{ani_play "fire2"}
		{call "spawn_shell"}
	}
}


{"sprutsd"
	("bmp3_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("DT")
	}
	{on spawn
		;{tags add "il76_para"}
		;{tags add "para_board"}

	}

	("has_fixed_loading" args "reload_up" 0.4)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	{on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

}


{"ot-55"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "flamer_fire_tank" "flame" "foresight3"}
	}
	{on operatable on
		{view start "fire"}
	}
	{on operatable off
		{view stop "fire"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args mgun2 160 3 40)

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
}

{"is2m tank"
	("is_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}



{"isu-122m tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_right" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_right" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}
{"isu-152m tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_right" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_right" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"zsu572 tank"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "init_gun"
		{add_view "tank_canon_fire_50_57"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel01"	"shooter01"}
		{call "update_gun"}
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
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}

		{call "spawn_shell"}
	}


}

{"zsu-57-2 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "init_gun"
		{add_view "tank_canon_fire_50_57"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel01"	"shooter01"}
		{call "update_gun"}
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
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
}

{"t-62_1972 tank"
	("t62_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	{on fire "gun"
		("check_fire")
		{spawn "proj_probe" "foresight1" x}
		{delay 1.5
			{ani_play "eject"}
		}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}

	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t-62_1967 tank"
	("t62_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	{on fire "gun"

		{spawn "proj_probe" "foresight1" x}
		{delay 1.5
			{ani_play "eject"}
		}
	}
}
{"t72a tank"  ; compatible WTmod
	("t72_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("has_fixed_loading" args "reload_up" 0.4)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand) com_optic(spot))

	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_instant_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}

}


{"t-64_obj432 tank"
	("kv_sound")

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		{delay 1.2
			{ani_play "eject"}
		}
	}
}

{"t-62_1960 tank"
	("t62_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		{delay 1.5
			{ani_play "eject"}
		}
	}
}

{"t-62k tank"
	("t62_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		{delay 1.5
			{ani_play "eject"}
		}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_commander_hatch))
}


{"2s3 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4A3_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4A3_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4A3_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4A3_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4A3_Sherman/exhaust"}
		{link_sound "move"				"vehicle/tracks/t55_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
	}

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"plz83"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4A3_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4A3_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4A3_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4A3_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4A3_Sherman/exhaust"}
		{link_sound "move"				"vehicle/tracks/t55_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("DShK38")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	{on fire "mgun"
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"ptz89"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4A3_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4A3_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4A3_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4A3_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4A3_Sherman/exhaust"}
		{link_sound "move"				"vehicle/tracks/t55_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("DShK38")
	}
	
	{on fire "mgun"
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"it-1 tank"
	("t28_sound")
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	{on spawn
		{ani_play "fire1" +1.0 resume}
	}
}

{"t-10m tank"
	("is_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}
	{on fire "mgun"
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
	}
	{on fire "mgun2"
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_commander_hatch))
}



{"t-10m_1957 tank"
	("is_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	{on fire "mgun"
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
	}
	{on fire "mgun2"
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}

{"su-122-54 tank"

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
	}
	{on fire "mgun"
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
	}
	{on fire "mgun2"
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
}

{"bmp-1"
	("bt_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DS39")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight6" x}
	}
}

{"bmp1p"
	("bt_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DS39")
	}
	("on_fire_mgun" args mgun2 flashbarrel4)
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	("atgm_single_launcher" weapon(gun2) foresight(foresight) tail(tail))

	("zpu_params" gunner(gunner2) zpu_mgun(gun2) anim(hm_hatch_cover) pose(seat_commander_hatch))

}

{"bmd-1"
	("bt_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DS39")
	}
	{on spawn
		{tags remove "suspension_down"}
		{tags remove "suspension_up"}
		{delay 0.5
			{call "suspension_down"}
			{tags add "suspension_down"}
		}
		;{tags add "il76_para"}
		;{tags add "para_board"}
	}
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight6" x}
	}
}

{"bmd2"
	("bt_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("DS39")
	}
	("autocannon")
	("25-50mm_gilza" fxshell(fx_invers1))
	{on spawn
		{tags remove "suspension_down"}
		{tags remove "suspension_up"}
		{delay 0.5
			{call "suspension_down"}
			{tags add "suspension_down"}
		}
		;{tags add "il76_para"}
		;{tags add "para_board"}

	}

	{on "gunner2_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	;{on fire "gun"
	;	("check_fire_bmd")
	;}

	{on fire "gun2"

		{spawn "proj_probe" "foresight" x}
	}

	("zpu_params" gunner(gunner2) zpu_mgun(gun2) anim(hm_hatch_cover) pose(seat_commander_hatch))


}

{"btr-d_zu"
	("bt_sound")

	{on "init_gun" overload
		{add_view "flash_gun_big"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_big"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
		{add_view "flash_gun_big"	"flashbarrel2"		"Foresight4"}
		{add_view "flash_gun_big"	"flashbarrel1"		"Foresight3"}
		{call "update_gun"}
	}
	("25-50mm_gilza" fxshell(fx_invers1))
	{on fire "gun" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{ani_play "fire00"}
			{view start "flashbarrel00"}
			{delay 0.2
				{call "spawn_shell"}
				{view pause "flashbarrel00"}
			}
		}
		{if  name "01"
			{ani_play "fire01"}
			{view start "flashbarrel01"}
			{delay 0.2
				{call "spawn_shell"}
				{view pause "flashbarrel01"}
			}
		}
	}


	{on fire "mgun1" overload

		{view start "flashbarrel2"}
		{delay 0.2
					{view pause "flashbarrel2"}
		}

	}

	{on fire "mgun2" overload

		{view start "flashbarrel1"}
		{delay 0.2
					{view pause "flashbarrel1"}
		}

	}


}

{"btr-d"
	("bt_sound")

	{on "init_gun" overload

		{add_view "flash_gun_big"	"flashbarrel2"		"Foresight4"}
		{add_view "flash_gun_big"	"flashbarrel1"		"Foresight3"}
		{call "update_gun"}
	}

	{on fire "mgun1" overload

		{view start "flashbarrel2"}
		{delay 0.2
					{view pause "flashbarrel2"}
		}

	}

	{on fire "mgun2" overload

		{view start "flashbarrel1"}
		{delay 0.2
					{view pause "flashbarrel1"}
		}

	}




}

{"2c9"
	("mtlb_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
	}
}

{"2c1"

	("mtlb_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
	}
	{on fire "gun"

		{spawn "proj_probe" "foresight1" x}

	}

}


{"2p27" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")

	{on spawn
		{tags add "weapon_up"}
	}

	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "proj_probe_big" "foresight1" x}
		;{spawn "proj_probe" "rocket2" x}
		;{spawn "proj_probe" "rocket3" x}
	}

	{on "reload"
		{tags add "reloading"}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{tags remove "weapon_up"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 30
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}

	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}

	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{tags add "weapon_up"}
						{delay 1
							{ik_enable "turret" 1}
						}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)


	{on "update_missilerack"
		("update_missilerack" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "gun_rot_h"))
	("update_rack_event" event(ik begin "gun_rot_v"))
}

{"9p110" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")

	{on spawn
		{tags add "weapon_up"}
	}

	{on "reload"
		{tags add "reloading"}
		;{weapon_work "gun" 0}
		{ani_play "turret_reset"}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 60
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}

	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}

	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{delay 1
							;{weapon_work "gun" 1}
						}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)


	{on "update_missilerack"
		("update_missilerack" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "turret"))
	("update_rack_event" event(ik begin "foresight1"))

	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "proj_probe_big" "foresight1" x}
	}
}

{"9p110_sam" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")

	{on spawn
		{tags add "weapon_down"}
	}

	{on "reload"
		{tags add "reloading"}
		{ik_enable "turret" 0}
		{ani_play "turret_reset"}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 60
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}

	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}

	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{ik_enable "turret" 1}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)


	{on "update_missilerack"
		("update_missilerack" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "proj_probe_big" "foresight1" x}

	}
}

{"9p122" ;// can't figure out how to reset turret to 0
	("ba_sound")

	{on spawn
		{tags add "weapon_down"}
	}

	{on "reload"
		{tags add "reloading"}
		{ik_enable "turret" 0}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 30
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}

	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}

	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{ik_enable "turret" 1}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)


	{on "update_missilerack"
		("update_missilerack" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "proj_probe_big" "foresight1" x}

	}
}

{"9p124" ;// can't figure out how to reset turret to 0
	("ba_sound")

	{on spawn
		{tags add "weapon_down"}
	}

	{on "reload"
		{tags add "reloading"}
		{ik_enable "turret" 0}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 40
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}

	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}

	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{ik_enable "turret" 1}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)


	{on "update_missilerack"
		("update_missilerack" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "proj_probe_big" "foresight1" x}

	}
}

{"btr-40"
	("sdkfz222_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
}

{"btr-40a" ;no suitable ani
	("sdkfz222_sound")
	{on "init_gun"
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell00"}
		{add_view "zenit_gilz"			"shell"			"FXshell01"}
		{call "update_gun"}
	}
	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
}

{"brdm-1"
	("sdkfz222_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
}

{"brdm-1u"
	("sdkfz222_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
}

{"brdm-2"
	("ba_sound")
	{on "add_weapon_sound" overload
		("DShK38")
	}
}

{"gaz-69"
	("gaz_sound")
}

{"gaz-69a"
	("gaz_sound")
}

{"gaz-69spz"
	("gaz_sound")
}

{"mil_mi4 helicopter"
	{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/airborne/helicopter/helicopter_work2" 	}
		{link_sound "engine_start"	"vehicle/airborne/helicopter/helicopter_start" 	}
		{link_sound "engine_work"	"vehicle/airborne/helicopter/helicopter_work2" 	}
		{link_sound "engine_stop"	"vehicle/airborne/helicopter/helicopter_stop" 	}
	}
}

;/*=========== AMERICAN Vehicles  ===========*/

{"bredly tank"
	("bredly_sound")

	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight3"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{tags remove "veh_moving"}
		{tags remove "rocket_pullback"}
		{tags remove "rocket_pullout"}
		{call "check_speed2"}
	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("M1919A4")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))
	{on move on
		{if move_forward

			{tags add "veh_moving"}
		else
			{tags add "veh_moving"}
		}
	}

	{on move off
	    {delay 2
		{tags remove "veh_moving"}
	    }

	}

	(define "vehicle_velocity2"
		{if not tagged "destroyed"
		   {if tagged "veh_moving"
			{if velocity 12
				{tags remove "rocket_pullout"}
				{if not tagged "rocket_pullback"
					{tags add "rocket_pullback"}
					{ani_play "open" 1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}
				}

			else
				{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
					{ani_play "open" -1}
					{play_sound "gear_work"}
					{call "update_gun"}

				}

			}
		}
	   }
	)


	{on "check_speed2"
	   {if not tagged "destroyed"
		("vehicle_velocity2")
		{delay 1.5 "delay_check"
			{call "check_speed2"}
		}
	   else {kill_delay "delay_check"}
	   }
	}

	{on fire "mgun" overload


		{view start "flashbarrel2"}
		{play_sound  "action_recoil"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
					{view pause "flashbarrel2"}
		}
		("cw_check_shooting" weap_id(mgun))
	}


}

{"m2a2ods tank"
	("bredly_sound")

	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight2"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{tags remove "veh_moving"}
		{tags remove "rocket_pullback"}
		{tags remove "rocket_pullout"}
		{call "check_speed2"}

	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("M1919A4")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))

	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on move on
		{if move_forward

			{tags add "veh_moving"}
		else
			{tags add "veh_moving"}
		}
	}

	{on move off
	    {delay 2
		{tags remove "veh_moving"}
	    }

	}

	(define "vehicle_velocity2"
		{if not tagged "destroyed"
		   {if tagged "veh_moving"
			{if velocity 12
				{tags remove "rocket_pullout"}
				{if not tagged "rocket_pullback"
					{tags add "rocket_pullback"}
					{ani_play "open" 1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}
				}

			else
				{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
					{ani_play "open" -1}
					{play_sound "gear_work"}
					{call "update_gun"}

				}

			}
		}
	   }
	)


	{on "check_speed2"
	   {if not tagged "destroyed"
		("vehicle_velocity2")
		{delay 1.5 "delay_check"
			{call "check_speed2"}
		}
	   else {kill_delay "delay_check"}
	   }
	}

	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound  "action_recoil"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
					{view pause "flashbarrel2"}
		}
		("cw_check_shooting" weap_id(mgun))
	}


}

{"m3a2 tank"
	("bredly_sound")

	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight2"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{tags remove "veh_moving"}
		{tags remove "rocket_pullback"}
		{tags remove "rocket_pullout"}
		{call "check_speed2"}

	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("M1919A4")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))

	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on move on
		{if move_forward

			{tags add "veh_moving"}
		else
			{tags add "veh_moving"}
		}
	}

	{on move off
	    {delay 2
		{tags remove "veh_moving"}
	    }

	}

	(define "vehicle_velocity2"
		{if not tagged "destroyed"
		   {if tagged "veh_moving"
			{if velocity 12
				{tags remove "rocket_pullout"}
				{if not tagged "rocket_pullback"
					{tags add "rocket_pullback"}
					{ani_play "open" 1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}
				}

			else
				{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
					{ani_play "open" -1}
					{play_sound "gear_work"}
					{call "update_gun"}

				}

			}
		}
	   }
	)


	{on "check_speed2"
	   {if not tagged "destroyed"
		("vehicle_velocity2")
		{delay 1.5 "delay_check"
			{call "check_speed2"}
		}
	   else {kill_delay "delay_check"}
	   }
	}

	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound  "action_recoil"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
					{view pause "flashbarrel2"}
		}
		("cw_check_shooting" weap_id(mgun))
	}


}


{"m60a3 tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("M2HB")
		("M1919A4")
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

	{on fire "mgun2"

		{play_sound  "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}

	}

}

{"m60a1_rise tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("M2HB")
		("M1919A4")
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

	{on fire "mgun2"

		{play_sound  "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}

	}

}


;////////////ordos add /////////////////////////


{"m1_abrams tank"



	{on "blow_burnout"

			{delay_ex 0.11
				{tear "piece_medium_steel" bone "plate1" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
				{tear "piece_medium_steel" bone "plate2" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}

				{tear "piece_medium_steel" bone "plate3" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
			}

			{delay 0.2
			{view hide "plate1"}
			{view hide "plate2"}
			{view hide "plate3"}

			}


		}



	("Abrams_sound")

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}

	{on spawn
		;{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{link_sound "burnup_ammo1" "detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" "fire/loops/big"}
		{link_sound "hatch_fire2" "fire/fire_hatch"}
		;{tags add "cwsh_active"}
	}

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}
		;("check_fire")

	}

	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}


	("doublezpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(seat_gunner_stand) hatch_anim(open)
			    secgunner(charger) seczpu_mgun(mgun1) secanim(into_hatch_abrams) secpose(seat_gunner_stand) sechatch_anim(open2))


}

{"m1ip_1 tank"

	{on "blow_burnout"

			{delay_ex 0.11
				{tear "piece_medium_steel" bone "part1" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
				{tear "piece_medium_steel" bone "part2" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
			}

			{delay 0.2
			{view hide "part1"}
			{view hide "ring1"}
			{view hide "part2"}
			{view hide "ring2"}
			}
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk3"}

		}

	("Abrams_sound")

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on "charger_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}
		;("check_fire")

	}

	("doublezpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(seat_gunner_stand) hatch_anim(open)
			    secgunner(charger) seczpu_mgun(mgun3) secanim(into_hatch_abrams) secpose(seat_gunner_stand) sechatch_anim(open2))
	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_instant_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}

}

{"m1a1_new tank"

	{on "blow_burnout"

			{delay_ex 0.11
				{tear "piece_medium_steel" bone "part1" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
				{tear "piece_medium_steel" bone "part2" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
			}

			{delay 0.2
			{view hide "part1"}
			{view hide "ring1"}
			{view hide "part2"}
			{view hide "ring2"}
			}
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk3"}

		}


	("Abrams_sound")

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}


	("on_fire_mgun" args mgun flashbarrel4)
	("on_fire_mgun" args mgun3 flashbarrel7)

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}
		;("check_fire")

	}

	("doublezpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(seat_gunner_stand) hatch_anim(open)
			    secgunner(charger) seczpu_mgun(mgun3) secanim(into_hatch_abrams) secpose(seat_gunner_stand) sechatch_anim(open2))
	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}

}


{"m1a1_fep tank"

	{on "blow_burnout"

			{delay_ex 0.11
				{tear "piece_medium_steel" bone "part1" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
				{tear "piece_medium_steel" bone "part2" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
			}

			{delay 0.2
			{view hide "part1"}
			{view hide "part2"}

			}
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk3"}

		}

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}

	{on spawn
		{bone hide "shtora1"}
	}
	("on_fire_mgun" args mgun flashbarrel4)
	("on_fire_mgun" args mgun3 flashbarrel7)

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}
		;("check_fire")

	}
	("Abrams_sound")
	("doublezpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(seat_gunner_stand) hatch_anim(open)
			    secgunner(charger) seczpu_mgun(mgun3) secanim(into_hatch_abrams) secpose(seat_gunner_stand) sechatch_anim(open2))
	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}

}

{"m1a2_sep tank"

	{on "blow_panels"

			{ani_wind "knockout" end}


	}

	{on "blow_burnout"

			{delay_ex 0.11
				{ani_wind "knockout" end}
			}
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk3"}

		}


	("Abrams_sound")

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}


	("on_fire_mgun" args mgun flashbarrel4)
	("on_fire_mgun" args mgun3 flashbarrel7)

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}
		;("check_fire")

	}
	("doublezpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(M1a1_mgun1) hatch_anim(open)
			    secgunner(charger) seczpu_mgun(mgun3) secanim(into_hatch_abrams) secpose(M1a2_mgun) sechatch_anim(open2))

	{on "update_cw_panorama" overload
		{if operatable

				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}

		else {call "cw_panorama_instant_off"}}
	}

}

{"m901_itv"


	("pz38_sound")
	{on spawn
		{ani_wind "open" end}

	}

	{on fire "gun"

		{spawn "proj_probe"  "foresight" x}

	}

	{on "normal_cookoff"

			{ani_wind "open_driver" end}

	}

}

{"aaleo tank"
	{on "add_movement_sound" overload
			{link_sound "engine_start"		"vehicle/engine/pz3/start"}
			{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
			{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
			{link_sound "engine_full"		"vehicle/engine/leopard1_work"}
			{link_sound "exhaust"			"vehicle/engine/leopard1_start"}
			{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
			{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
			{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	("radar_params" triplex(additional_triplex) visor(visor3) anim_rotate(radar) marker(antirad_generator_usa))
	{on "init_gun" ;overload
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{call "update_gun"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{call "spawn_shell"}
	}
}

{"hsl tank"
	("pz3_sound")
	("25-50mm_gilza" fxshell(fx_invers3))
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("MG42")
	}
	{on "init_gun2"
		{add_view 	"rok_tail"		"tail"			"tail"}

	}
	{on fire "gun2" overload
		("low_speed_bullet")

	   	{view start "tail"}
	   	{spawn "startsmoke" "foresight6" x}
	   	{spawn "startsmoke" "tail" x}
	   	{spawn "proj_probe" "foresight6" x }
	   	{delay 0.4
	   		{view pause "tail"}
	   	}

	  }

	{on fire "gun"

		{delay 0.05 {call "spawn_shell"}}

	}

}

{"hsl1a1 tank"
	("pz3_sound")
	("25-50mm_gilza" fxshell(fx_invers3))
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("MG42")
	}
	{on fire "gun"

		{delay 0.05 {call "spawn_shell"}}

	}

}

{"lav25 tank"
	{on spawn
		{tags add "c130_para_veh"}
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/lav25/ve_large_accelerate"}
		{link_sound "engine_stop"		"vehicle/engine/lav25/ve_large_shutdown"}
		{link_sound "engine_idle"		"vehicle/engine/lav25/A0059_PLA_car_idle"}
		{link_sound "engine_full"		"vehicle/engine/lav25/ve_large_drive_wheel"}
		{link_sound "exhaust"			"vehicle/engine/lav25/ve_large_accelerate"}
		{link_sound "move"				"vehicle/engine/lav25/ve_large_drive_wheel"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	("25-50mm_gilza" fxshell(fx_invers1))
	{on fire "gun"
		{delay 0.05 {call "spawn_shell"}}
	}
	{on "add_weapon_sound" overload
		("Autocannon_s2")
		("M1919A4")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open2" end}
		;{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open2" -1.0 resume}
		;{ani_play "mgun_aa" -1.0 resume}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		;{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		;{ani_play "mgun_aa" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"mrls"

	("mlrs_m270")


}
{"challenger1"
	("challenger_2_sound")

	{on "commander_hatch_open" overload
		{ani_wind "open" end}

	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}

	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"chieftain5"
	("challenger_2_sound")

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}

	{on "commander_hatch_open" overload
		{ani_wind "open" end}

	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}

	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}



;////////////ordos add /////////////////////////

{"humvee_m2hb"
	("humvee_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_m240"
	("humvee_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_tow"
	("humvee_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(gun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_mk19"
	("humvee_sound")
	{on "add_weapon_sound" overload
		{link_sound		"MG_Mid"		"weapon/shot/reactive/mk19_shot"}
		{link_sound		"MG_Far"		"weapon/shot/reactive/mk19_shot"}
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"hmmwv_m998_tent"
	("humvee_sound")
}

{"m151"
	("willys_mb_sound")
}

{"m151_m2"
	("willys_mb_sound")
	{on "commander_hatch_open" overload
		{ani_play "mgun" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "mgun" -1.0 resume}
	}
}

{"m151_m40"
	{on fire "gun"
		{ani_play "fire"}
		{spawn "proj_probe"  "foresight1" x}
		{view start "flashbarrelsmall"}
		{call "spawn_shell"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1)
	}

}
{"m151_m40_airlift"
	("willys_mb_sound")
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

}
{"m151_prc77"
	("willys_mb_sound")
}

{"m35"
	("cckw_sound")
}

{"m35_ammo"
	("cckw_sound")
}

{"m35_guntruck"
	("cckw_sound")
	{on "init_gun"
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel01"	"shooter01"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel02"	"shooter02"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel03"	"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
		{call "update_gun"}
	}
	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		}
		{ani_play "recoil"}
		{call "spawn_shell"}
	}
}

{"cckw353_fuel"
	("cckw_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"dodge_m37"
	("wc51_sound")
}

{"dodge_m37_ammo"
	("wc51_sound")
}

{"dodge_m37_engi"
	("wc51_sound")
}

{"m16_mgmc tank"
	("m3_halftrack_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on "add_weapon_sound" overload
		("M2HB_M45_Mount")
	}

	("multi_barrel_loop" flash(flash_gun_big) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(mgun) head(0.070))

	{on "reload"
		{ani_play "reload_mgun" 1.0}
	}
	{on "reload_delay" overload
		("reload_time" args 30)	;// weapon reload time
	}
}

{"m41"
	("m24_chaffee_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M1919A4")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}



{"m42"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
	}
	{on "init_gun"
		{add_view "tank_canon_fire_37_47"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_37_47"			"flashbarrel01"	"shooter01"}
		{call "update_gun"}
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
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
}

{"m551"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M1919A4")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}



{"m551_airlift"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M1919A4")
		("M2HB")
	}
	{on spawn
		{tags add "para_board"}

	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m26_pershing tank"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
}

{"m46_patton tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
}

{"m47_patton tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(pose_mgun_pz6))
}

{"m48"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_gunner_stand))
}

{"m48a1"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

}

{"m48a3"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
}

{"m48a3_acav"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun" overload
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "action_recoil_HMG"}
	}
	{on "commander_hatch_open" overload
		{ani_play "open" +1.0 resume}
		{ani_play "aamg" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "aamg" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m103"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("M1919A4")
		("M2HB")
	}
		{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun2" overload
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
		{play_sound  "action_recoil"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}



{"m60_patton"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("M1919A4")
		("M2HB")
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

}

{"m60a1"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("M1919A4")
		("M2HB")
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

}

{"m60a1e2"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M1919A4")
		("M2HB")
	}

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

}

{"m728"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M2HB")
		("M1919A4")
	}
	{on spawn
		{link_sound "dozer" "vehicle/misc/dozer"}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}



}

{"m39_apc tank"
	("m4_sherman_sound")
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand))
}

{"m39_eng tank"
	("m4_sherman_sound")
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m39_ammo tank"
	("m4_sherman_sound")
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m114 tank"
	("m3_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_play "open" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "gunner4_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m114a1 tank"
	("m3_stuart_sound")
	{on "gunner4_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}

}

{"m114a2 tank"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	{on "gunner4_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}

}

{"m577"
	("m5a1_stuart_sound")
}

{"m113 tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m113a1 tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m163 tank"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	("radar_params" triplex(additional_triplex) visor(visor3) anim_rotate(none) marker(antirad_generator_usa))
}

{"m113_acav tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	{on "gunner3_hatch_open" overload
		{ani_play "open_top" resume}
	}
	{on "gunner3_hatch_close" overload
		{ani_play "open_top" -1.0 resume}
	}
	{on "gunner4_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_top" resume}
		else
			{ani_play "open_top" resume}
		}
	}
	{on "gunner4_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
		}
	}



	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(mgun2) secanim(hm_hatch_cover_sit_nooffset) secpose(seat_gunner_stand)
		triplegunner(gunner4) tripzpu_mgun(mgun3) tripleanim(hm_hatch_cover_sit_nooffset) trippose(seat_gunner_stand)
	)
}

{"m113_acav_m40 tank"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
	}
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	{on "gunner3_hatch_open" overload

		{ani_play "open_top" resume}

	}
	{on "gunner3_hatch_close" overload

		{ani_play "open_top" -1.0 resume}
	}
	{on "gunner4_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_top" resume}
		else
			{ani_play "open_top" resume}
		}
	}
	{on "gunner4_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
		}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun1) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(mgun2) secanim(hm_hatch_cover_sit_nooffset) secpose(seat_gunner_stand)
		triplegunner(gunner4) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(seat_gunner_stand)
	)
}
{"m113_m40 tank"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
	}
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	{on "gunner_hatch_open" overload

		{ani_play "open_top" resume}

	}
	{on "gunner_hatch_close" overload

		{ani_play "open_top" -1.0 resume}

	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner"
			{ani_play "open_top" resume}
		else
			{ani_play "open_top" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
		}
	}

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
	("doublezpu_params"
		gunner(commander) zpu_mgun(mgun1) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(seat_gunner_stand))
}


{"m150 tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	{on "gunner_hatch_open" overload

		{ani_play "open_top" resume}

	}
	{on "gunner_hatch_close" overload

		{ani_play "open_top" -1.0 resume}

	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner"
			{ani_play "open_top" resume}
		else
			{ani_play "open_top" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
		}
	}

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
	("doublezpu_params"
		gunner(commander) zpu_mgun(mgun1) anim(into_hatch_leo) pose(seat_gunner_stand)
		secgunner(gunner) seczpu_mgun(gun) secanim(into_hatch_leo) secpose(seat_gunner_stand))
}


{"m125"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Mortar_8cm")
	}
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload

		{ani_play "open_top" resume}

	}
	{on "gunner3_hatch_close" overload

		{ani_play "open_top" -1.0 resume}

	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_top" resume}
		else
			{ani_play "open_top" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"m106"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Mortar_12cm")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_turret" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload

		{ani_play "open_top" resume}
		{ani_play "weapon_up" resume}

	}
	{on "gunner3_hatch_close" overload

		{ani_play "open_top" -1.0 resume}
		{ani_play "weapon_down" resume}

	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" resume}
			{ani_play "weapon_up" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
			{ani_play "weapon_down" resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"m106_acav"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Mortar_12cm")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_turret" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload

		{ani_play "open_top" resume}
		{ani_play "weapon_up" resume}

	}
	{on "gunner3_hatch_close" overload

		{ani_play "open_top" -1.0 resume}
		{ani_play "weapon_down" resume}

	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" resume}
			{ani_play "weapon_up" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
			{ani_play "weapon_down" resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"m132_zippo"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("M1919A4")
	}
	{on spawn
		{add_view "flamer_fire_tank" "flame" "foresight1"}

	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 160 1 40)
	;("flame_weapon" args gun 1 40)
}

{"m67_zippo"
	("m26_pershing_sound")
	{on spawn
		{add_view "flamer_fire_tank" "flame" "foresight1"}

	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 160 1 40)
}

{"m50"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "init_gun"
		{add_view "tank_canon_fire_50_57"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel01"	"shooter01"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel02"	"shooter02"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel03"	"shooter03"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel04"	"shooter04"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel05"	"shooter05"}
		{call "update_gun"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{play_sound  "action_recoil_Cannon"}
				{play_sound "Cannon_Mid"}
				{play_sound "Cannon_Far"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		else ("fire_barrel" args 04)
		else ("fire_barrel" args 05)
		}
		{call "spawn_shell"}



		{spawn "proj_probe_extra_big"  "foresight" x}


	}

}

{"m50_airlift"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "init_gun"
		{add_view "tank_canon_fire_50_57"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel01"	"shooter01"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel02"	"shooter02"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel03"	"shooter03"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel04"	"shooter04"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel05"	"shooter05"}
		{call "update_gun"}
	}
	{on fire "gun" overload
		{spawn "proj_probe_extra_big"  "foresight" x}
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{play_sound  "action_recoil_Cannon"}
				{play_sound "Cannon_Mid"}
				{play_sound "Cannon_Far"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		else ("fire_barrel" args 04)
		else ("fire_barrel" args 05)
		}
		{call "spawn_shell"}
	}

}

{"m56"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}


}

{"m56_airlift"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

}

{"m56_para"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

}

{"m110"
	("m5a1_stuart_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 5)
	}

}

{"m109"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_play "open"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}


{"m108"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
	}
	{on "commander_hatch_open" overload
		{ani_play "open"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m36gmc tank"
	("m10_sound")
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}

}

{"m4a3e8 tank"
	("m4a3_sherman_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
}

{"m24_chaffee tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}

	{on fire "gun"

		{spawn "proj_probe"  "foresight1" x}

	}
}

;/*=========== FRG Vehicles BEGIN  ===========*/

{"munga"
	("kubel_sound")
}

{"munga8_m40"
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		{ani_play "fire"}
		{view start "flashbarrelsmall"}
		{call "spawn_shell"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.2)
	}
}

{"unimog404s car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"m16_frg tank"
	("m3_halftrack_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on "add_weapon_sound" overload
		("M2HB_M45_Mount")
	}

	("multi_barrel_loop" flash(flash_gun_big) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(mgun) head(0.070))

	{on "reload"
		{ani_play "reload_mgun" 1.0}
	}
	{on "reload_delay" overload
		("reload_time" args 30)	;// weapon reload time
	}
}

{"m39g_apc tank"
	("m4_sherman_sound")
}

{"m39g_eng tank"
	("m4_sherman_sound")
}

{"m39g_ammo tank"
	("m4_sherman_sound")
}

{"m113g tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m113g_early tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"spz_112"
	("pz1_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
}

{"rakjpz_1"
	("pz2_sound")

	{on "gunner_hatch_open"
		{ani_play "raise_sight" resume}
	}
	{on "gunner_hatch_close"
		{ani_play "lower_sight" resume}
	}

	{on spawn
		{tags add "missile_r"}
		{tags remove "missile_l"}
		{tags remove "reloading"}
	}

	{on fire "gun" overload

		{spawn "proj_probe_extra_big"  "foresight" x}
		(define "fire_missile"
			name "%0"
				{call "fire_missile%0"}
		)

		{if	("fire_missile" args 00)
			{bone hide "rocket_00"}
			{delay 1
				{ani_play "lower_launcher_r"}
				{tags add "reloading"}
				{tags remove "missile_r"}
				{tags remove "missile_r_up"}
				{tags add "missile_l"}
				{delay 3
					{ani_play "raise_launcher_l"}
					{tags add "missile_l_up"}
					{tags remove "reloading"}
				}
			}
		else ("fire_missile" args 01)
			{bone hide "rocket_01"}
			{delay 1
				{ani_play "lower_launcher_l"}
				{tags remove "missile_l"}
				{tags remove "missile_l_up"}
			}
		}
	}

	{on "reload"
		{tags add "reloading"}
		{tags remove "missile_r"}
		{tags remove "missile_r_up"}
		{tags remove "missile_l"}
		{tags remove "missile_l_up"}
		;{ik_enable "sight_pole" 0}
		{talk "reload"}
		{delay 1
			{call "update_missileracks"}
			{delay 3.5
				{tags remove "reloading"}
				{tags add "missile_r"}
				{talk "reloaded"}
				{call "update_missileracks"}
				{bone show "rocket_00"}
				{bone show "rocket_01"}
			}
		}
	}

	{on repair
		{if component "body"
			{call "update_missileracks"}
		}
	}

	(define "update_missileracks"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else tagged "missile_r_up"
				{delay 0.1}
			else tagged "missile_l_up"
				{delay 0.1}
			else tagged "missile_r"
				{ani_play "raise_launcher_r"}
				{bone show "rocket_00"}
				{tags add "missile_r_up"}
				{tags remove "missile_l"}
				{tags remove "reloading"}
				{ik_enable "sight_pole" 1}
			else tagged "missile_l"
				{ani_play "raise_launcher_l"}
				{bone show "rocket_01"}
				{tags add "missile_l_up"}
				{tags remove "missile_r"}
				{tags remove "reloading"}
				{ik_enable "sight_pole" 1}
			}
		else
			{delay 0.1}
		}

	)


	{on "update_missileracks"
		("update_missileracks" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missileracks"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "sight_pole"))

}

{"spz_123"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
}

{"spz_123_m40"
	("pz2_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound		"action_recoil_Cannon2"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid2"		"weapon/shot/cannon/s3/d2/Shared/Cannon_75to76mm/"}
		{link_sound		"Cannon_Far2"		"weapon/shot/cannon/s3/d3/Shared/Cannon_75to76mm/"}
	}
	{on spawn
		{add_view "flash_shotgun" 	"flashrcl"		"foresight1a"}
		{add_view "flash_shotgun" 	"backblast"		"fx_invers"}
		{add_view "flash_gun_hmg_m2hb" 		"flashbarrel" 	"foresight1"}
	}
	{on "gunner2_hatch_open" overload
		{if crew_in_place "charger"
			{ani_play "open_back" resume}
		else
			{ani_play "open_back" resume}
		}
	}
	{on "gunner2_hatch_close" overload
		{if crew_in_place "charger"
			;nothing
			{ani_play "open_back" -1.0 resume}
		else
			{ani_play "open_back" -1.0 resume}
		}
	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner2"
			{ani_play "open_back" resume}
		else
			{ani_play "open_back" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner2"
			;nothing
			{ani_play "open_back" -1.0 resume}
		else
			{ani_play "open_back" -1.0 resume}
		}
	}
	{on fire "gun"
		{ani_play "fire"}
		{view start "flashbarrel"}
		{delay 0.15
			{view pause "flashbarrel"}
		}
	}
	{on fire "gun1"
		{spawn "proj_probe"  "foresight1a" x}
		{ani_play "firer"}
		{view start "flashrcl"}
		{view start "backblast"}
		{delay 0.15
			{view pause "flashrcl"}
			{view pause "backblast"}
		}
		{call "spawn_shell"}
	}
	("doublezpu_params" gunner(gunner2) zpu_mgun(gun1) anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand)
			    secgunner(charger) seczpu_mgun(gun1) secanim(hm_hatch_cover_sit_nooffset) secpose(seat_gunner_stand))
}

{"spz_513"
	("pz2_sound")

	{on "commander_hatch_open" overload
		{ani_play "open_back" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_back" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload
		{ani_play "open_back" resume}
	}

	{on "gunner3_hatch_close" overload
		{ani_play "open_back" -1.0 resume}
	}

	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_back" resume}
		else
			{ani_play "open_back" resume}
		}
	}

	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_back" -1.0 resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"spz_523"
	("pz2_sound")

	{on "commander_hatch_open" overload
		{ani_play "open_back" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_back" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload
		{ani_play "open_back" resume}
	}

	{on "gunner3_hatch_close" overload
		{ani_play "open_back" -1.0 resume}
	}

	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_back" resume}
		else
			{ani_play "open_back" resume}
		}
	}

	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_back" -1.0 resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"kanjpz"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("MG42")
	}

	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"rakjpz_2"
	("pz3_sound")

	{on "gunner_hatch_open"
		{ani_play "sight_up" resume}
		{if not tagged "reloading"
			{ani_play "weapon_up" resume}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_down" resume}
		{if not tagged "reloading"
			{ani_play "weapon_down" resume}
		}
	}
{on fire "gun" overload

		{spawn "proj_probe_extra_big"  "foresight" x}
		(define "fire_missile"
			name "%0"
				{call "fire_missile%0"}
		)

		{if	("fire_missile" args 00)
			{bone hide "rocket_00"}
			{delay 1
				{ani_play "lower_launcher_r"}
				{tags add "reloading"}
				{tags remove "missile_r"}
				{tags remove "missile_r_up"}
				{tags add "missile_l"}
				{delay 3
					{ani_play "raise_launcher_l"}
					{tags add "missile_l_up"}
					{tags remove "reloading"}
				}
			}
		else ("fire_missile" args 01)
			{bone hide "rocket_01"}
			{delay 1
				{ani_play "lower_launcher_l"}
				{tags remove "missile_l"}
				{tags remove "missile_l_up"}
			}
		}
	}



	{on repair
		{if component "body"
			{call "update_missileracks"}
		}
	}

	(define "update_missileracks"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else tagged "missile_r_up"
				{delay 0.1}
			else tagged "missile_l_up"
				{delay 0.1}
			else tagged "missile_r"
				{ani_play "raise_launcher_r"}
				{bone show "rocket_00"}
				{tags add "missile_r_up"}
				{tags remove "missile_l"}
				{tags remove "reloading"}
				{ik_enable "sight_pole" 1}
			else tagged "missile_l"
				{ani_play "raise_launcher_l"}
				{bone show "rocket_01"}
				{tags add "missile_l_up"}
				{tags remove "missile_r"}
				{tags remove "reloading"}
				{ik_enable "sight_pole" 1}
			}
		else
			{delay 0.1}
		}

	)


	{on "update_missileracks"
		("update_missileracks" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missileracks"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "sight_pole"))
	{on "reload"
		{if name "gun"
			{tags add "reloading"}
			;{ik_enable "sight_pole" 0}
			{talk "reload"}
			{delay 1
				{ani_play "weapon_down"}
				{delay 9
					{tags remove "reloading"}
					{talk "reloaded"}
					{ani_play "weapon_up"}
				}
			}
		}
	}
}

{"m47frg tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(pose_mgun_pz6))
}

{"m47g tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(pose_mgun_pz6))
}

{"m48g"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}

	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}

}

{"m48a2c"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"leopard_1"
	("leopard_sound")
	{on "charger_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"leopard_1a1"
	("leopard_sound")
	{on "charger_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}


{"leopard_1a5 tank"
	("leopard_sound")

	{on "charger_hatch_open" overload
		{ani_wind "open1" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		("check_fire")

	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_leo) pose(M1a1_mgun2))

}

;---------ordos-----------
{"leopard_2a4"
	{on spawn
		{ani_play "panorama" callback}
	}

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/leo2/leo2_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/leo2/leo2_engine_stop"}
		{link_sound "engine_full"		"vehicle/engine/leo2/leo2_engine_work"}
		{link_sound "exhaust"			"vehicle/engine/leo2/leo2_engine_start"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
	}

	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("MG42")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on "blow_burnout"

			{delay_ex 0.11
				{tear "piece_medium_steel" bone "part2" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
			}

			{delay 0.2
			{view hide "part2"}
			}


		}



	("has_fixed_loading" args "reload_up" 0.4)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun1) anim(into_hatch_common) pose(seat_gunner_stand))

}

{"leopard_2a5"
	{on spawn
		{add_view "flash_gun_small" "flashbarrel3" "Foresight5"}
		{add_view "flash_gun_small" "flashbarrel4" "Foresight6"}
	}

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/leo2/leo2_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/leo2/leo2_engine_stop"}
		{link_sound "engine_full"		"vehicle/engine/leo2/leo2_engine_work"}
		{link_sound "exhaust"			"vehicle/engine/leo2/leo2_engine_start"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
	}

	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("MG42")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}


	{on "_explosion"
		{tear "piece_medium_steel" bone "part1" {impulse up 5 rnd_dir 2}}
		{tear "piece_medium_steel" bone "part2" {impulse up 5 rnd_dir 2}}
	}

	{on "blow_burnout"

			{delay_ex 0.11
				{tear "piece_medium_steel" bone "part1" copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
			}

			{delay 0.2
			{view hide "part1"}
			}


	}
	("has_fixed_loading" args "reload_up" 0.5)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun1) anim(into_hatch_leo) pose(M1a1_mgun2))

}

;--------ordos------------

{"m110g"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 5)
	}
}

{"m109g"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m108g"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m41frg"
	("m24_chaffee_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M1919A4")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m41g"
	("m24_chaffee_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M1919A4")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m42g"
	("m24_chaffee_sound")
	{on "add_weapon_sound" overload
		("Cannon_45to47mm")
	}
	{on "init_gun"
		{add_view "tank_canon_fire_37_47"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_37_47"			"flashbarrel01"	"shooter01"}
		{call "update_gun"}
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
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
}


;/*=========== GDR Vehicles BEGIN  ===========*/

{"btr-40_gdr"
	("sdkfz222_sound")
}

{"brdm-1_gdr"
	("sdkfz222_sound")
}

{"btr-152_gdr"
	("zis5_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(seat_isu152_gunner2))
}

{"btr-152u_gdr"
	("zis5_sound")
}

{"btr-152a"
	("zis5_sound")
	{on "init_gun"
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell00"}
		{add_view "zenit_gilz"			"shell"			"FXshell01"}
		{call "update_gun"}
	}
	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
}

{"pt-76gdr tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"su100_gdr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"su85_gdr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"t-54ag tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}

}

{"t-55g tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"t-54g tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

;/*=========== PRC Vehicles BEGIN  ===========*/

{"gaz67_prc"
	("gaz_sound")
}

{"gaz67a_prc"
	("gaz_sound")
}

{"nj-130 car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"nj-130_ammo car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"ca-30 car"
	("zis5_sound")
}

{"ca-30_ammo car"
	("zis5_sound")
}

{"ca-30_eng car"
	("zis5_sound")
}

{"ca-30_fuel car"
	("zis5_sound")
}

{"bm-13-17m_prc car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"bm-31m_prc car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"ba64_prc"
	("ba_sound")
}

{"btr-40_type55"
	("sdkfz222_sound")
		("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"btr-40a_prc"
	("sdkfz222_sound")
	{on "init_gun"
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell00"}
		{add_view "zenit_gilz"			"shell"			"FXshell01"}
		{call "update_gun"}
	}
	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
}

{"yw531 tank"
	("bt_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
		{view hide "cover_commander"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1.0 resume}
		{view show "cover_commander"}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"yw531_sph"
	("bt_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
	}
	{on fire "gun"
		{ani_play "recoil"}
		{ani_play "recoil_body"}
		;{ani_play "shell_eject"}
		{call "spawn_shell"}
	}

}

{"yw531_mrl tank"
	("bt_sound")
	{on fire "gun"
		{ani_play "recoil"}
	}

	{on "_explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "spawn_shellhole"
		{if "big_explosion"
			{spawn "crater_massive" "basis" terrain_texmod}
			{spawn "shellhole_big_dead" "basis"}
		}
	}
	{on "ammo_break" overload
		{delay 1
			{call_synced "ammo_explosion"}
		}
	}
}

{"yw531_zu-23 tank"
	("bt_sound")

	{on "init_gun" overload
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{call "update_gun"}
	}
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		{link_sound "action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Autocannon_20to30mm/"}
	}
	{on fire "gun" overload
		{play_sound "action_recoil_Cannon"}
        {play_sound "Cannon_Mid"}
        {play_sound "Cannon_Far"}
		{if  name "00"
			{ani_wind "recoil" end}
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		}
		{if name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}

{"su76_prc tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t70/start"}
		{link_sound "engine_stop"		"vehicle/engine/t70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
		{link_sound "engine_full"		"vehicle/engine/t70/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t70"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"t-34-85_prc tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"type62_lt tank"
	("t55_sound")
	{on "charger_hatch_open" overload
		{ani_play "open2" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"type58_tank tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"su100_prc tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"type59 tank"
	("t55_sound")
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"ztz59"
	("t55_sound")
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"is2_prc tank"
	("is_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"isu-152_prc tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("DShK38")
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_right" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_right" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}
{"ztz88a tank"  ; ordos_add


	("t72_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" begin}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on "charger_hatch_open" overload
		{ani_wind "open1"  end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 0.8)
		("cut_part" args "part4" 0.8)
		("cut_part" args "part5" 0.8)
		("cut_part" args "part6" 0.8)
		("cut_part" args "part7" 0.8)
		("cut_part" args "part8" 0.8)
		("cut_part" args "part9" 0.8)

		{inherited}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"ztz853 tank"  ; ordos_add


	("t72_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1 resume}
	}

	{on "charger_hatch_open" overload

		{ani_wind "open" end}

	}
	{on "charger_hatch_close" overload

		{ani_play "open" -1 resume}

	}

	("has_fixed_loading" args "reload_up3" 0.4)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand) com_optic(spot))

	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_instant_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}


}

{"ztz96a tank"  ; ordos_add


	("t72_sound")

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1 resume}
	}

	("has_fixed_loading" args "reload_up" 0.4)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner) com_optic(spot))
}

{"ztz852 tank"  ; ordos_add


	("t72_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1 resume}
	}

	{on "charger_hatch_open" overload

		{ani_wind "open" end}

	}
	{on "charger_hatch_close" overload

		{ani_play "open" -1 resume}

	}


	("has_fixed_loading" args "reload_up3" 0.4)
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand) com_optic(spot))

	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_instant_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}




}

{"ztz79 tank"  ; ordos_add


	("t55_sound")

	{on "charger_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 0.8)
		("cut_part" args "part4" 0.8)
		("cut_part" args "part5" 0.8)
		("cut_part" args "part6" 0.8)
		("cut_part" args "part7" 0.8)
		("cut_part" args "part8" 0.8)
		("cut_part" args "part9" 0.8)

		{inherited}
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}
		("check_fire")

	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy))

	{on spawn

		;{tags add "cwsh_active"}

	}
}


{"zbd86"
	("bt_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DS39")
	}
	{on fire "gun2"
		{spawn "proj_probe"  "foresight6" x}

	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"type80 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
	}
	{on "init_gun"
		{add_view "tank_canon_fire_50_57"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel01"	"shooter01"}
		{call "update_gun"}
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
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
}

{"t80u_series"

      ("update_hatch_event" event(operatable on) place(commander))
      ("update_hatch_event" event(operatable off) place(commander))




}



;//ordos---------------------


;/*=========== POL Vehicles BEGIN  ===========*/

{"gaz-69_pol"
	("gaz_sound")
}

{"gaz-69_dshk_pol"
	("gaz_sound")
}

{"gaz-69_b10_pol"
	("gaz_sound")
	{on "init_gun"
		{add_view "tank_canon_fire_50_57"			"backblast"	"fxshot"}
	}
	{on fire "gun" overload
		{ani_play "recoil"}
		{spawn "detector" "foresight1" x}   ;ordos_debug
		{view start "backblast"}
		{call "spawn_shell"}
	}
	{on "commander_hatch_open" overload
		{ani_play "mgun" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "mgun" -1.0 resume}
	}
}

{"gaz-69_mortar_pol"
	("gaz_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_topright" +1.0 resume}
		{ani_play "mgun" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_topright" -1.0 resume}
		{ani_play "mgun" -1.0 resume}
	}
}
{"lublin-51 car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"lublin-51_ammo car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"lublin-51_eng car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"ural375_pol car"
	("zis5_sound")
}

{"ural375_pol_ammo car"
	("zis5_sound")
}

{"btr-40_pol"
	("sdkfz222_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
}

{"btr-152_pol"
	("zis5_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2))
}

{"btr-152u_pol"
	("zis5_sound")
}

{"topas tank"
	("t70_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_topright" +1.0 resume}
		{ani_play "mgun" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_topright" -1.0 resume}
		{ani_play "mgun" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand))
}

{"topas_2ap tank"
	("t70_sound")
}

{"skot-1"
	("sdkfz234_sound")
}

{"skot-1a"
	("sdkfz234_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open_gunner" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open_gunner" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand))
}

{"skot-2a"
	("sdkfz234_sound")
}

{"skot-2am"
	("sdkfz234_sound")
}

{"skot-2ap"
	("sdkfz234_sound")
}


{"brdm-1_pol"
	("sdkfz222_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
}

{"btr-40a_pol"
	("sdkfz222_sound")
	{on "init_gun"
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell00"}
		{add_view "zenit_gilz"			"shell"			"FXshell01"}
		{call "update_gun"}
	}
	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
}

{"brdm-2_pol"
	("ba_sound")
}

{"2p27_pol" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")

	{on spawn
		{tags add "weapon_up"}
	}

	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "detector_big" "foresight1" x}
		;{spawn "detector" "rocket2" x}
		;{spawn "detector" "rocket3" x}
	}

	{on "reload"
		{tags add "reloading"}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{tags remove "weapon_up"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 30
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}

	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}

	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{tags add "weapon_up"}
						{delay 1
							{ik_enable "turret" 1}
						}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)


	{on "update_missilerack"
		("update_missilerack" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "gun_rot_h"))
	("update_rack_event" event(ik begin "gun_rot_v"))
}

{"9p110_pol" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")

	{on spawn
		{tags add "weapon_up"}
	}

	{on "reload"
		{tags add "reloading"}
		;{weapon_work "gun" 0}
		{ani_play "turret_reset"}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 60
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}

	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}

	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{delay 1
							;{weapon_work "gun" 1}
						}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)


	{on "update_missilerack"
		("update_missilerack" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "turret"))
	("update_rack_event" event(ik begin "foresight1"))

	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "detector_big" "foresight1" x}
	}
}

{"t-34-85_pol tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"pt-76_pol tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"pt-76p tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on "charger_hatch_open" overload
		{ani_play "open1" +1.0 resume}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))

}

{"asu-85_pol tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"asu-85_late_pol tank"
	("t70_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"asu-85_para_pol tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"t-54a_pol tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		("check_fire")
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"t-54am_pol tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		("check_fire")
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"t-54am1_pol tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		("check_fire")
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"t-54am2_pol tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		("check_fire")
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"t-54u_pol tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		("check_fire")
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"t-55_pol tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		("check_fire")
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t-55a_pol tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		("check_fire")
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"zsu-23-4_pol tank"
	("t70_sound")

	{on "gunner_hatch_open"
		{if not tagged "sight_open"
			{ani_play "sight_cover" +1.0 resume}
			{tags add "sight_open"}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_cover" -1.0 resume}
		{tags remove "sight_open"}
	}

	{on "commander_hatch_open"
		{if not tagged "radar_up"
			{ani_play "radar_up" +1.0 resume}
			{tags add "radar_up"}
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		else tagged "radar_up"
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		}
	}

	{on "commander_hatch_close"

		{ani_play "radar_up" -1.0 resume}
		{delay 3
			{ani_stop "radar_spin"}
		}
	}

	{on "init_gun" overload
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel01"	"shooter01"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel02"	"shooter02"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel03"	"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
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

{"strela10"
	("t70_sound")

	{on operatable on
		{if not "radar_up"
			{set "radar_up" 1}
			{ani_play "launcher_deploy"}
		}
	}
	{on repair
		{if component "body"
			{set "radar_up" 1}
			{ani_play "launcher_deploy"}
		}
	}
	{on ik begin "turret" {play_sound "rotate_turret" 1}}
	{on ik end "turret" {stop_sound "rotate_turret"}}
	("custom_sh_multi_launcher" weapon(gun2) foresight(foresight2) tail(tail_) shooter(shooter))
	{on bullet_hit
		{if volume "glass" {call "break_glass"}}
	}
	{on "break_glass" overload
		{volumes "glass" disable bullet contact}
		{spawn "glass_hit2" "glass" x}
		{delay 0.1 {bone cut "glass"}}
	}
}

{"brdm2_strela"
	;("brdm_sound")
	("ba_sound")
	{on ik begin "turret" {play_sound "rotate_turret" 1}}
	{on ik end "turret" {stop_sound "rotate_turret"}}
	{on fire "gun2"
		("low_speed_bullet")
		{if name "00"
			{delay 0.1
				{spawn "9k31_carrier" "shooter00"   x}
				{spawn "startsmoke" "shooter00" x}
			}
		else name "01"
			{delay 0.1
				{spawn "9k31_carrier" "shooter01"   x}
				{spawn "startsmoke" "shooter01" x}
			}
		else name "02"
			{delay 0.1
				{spawn "9k31_carrier" "shooter02"   x}
				{spawn "startsmoke" "shooter02" x}
			}
		else name "03"
			{delay 0.1
				{spawn "9k31_carrier" "shooter03"   x}
				{spawn "startsmoke" "shooter03" x}
			}
		}
		{ani_play "fire"}
	}
	{on bullet_hit
		{if volume "glass" {call "break_glass"}}
	}
	{on "break_glass" overload
		{volumes "glass" disable bullet contact}
		{spawn "glass_hit2" "glass" x}
		{delay 0.1 {bone cut "glass"}
		}
	}

	{on "commander_hatch_open" overload
		{ani_play "open" 1 callback}

	}
	;{on "commander_hatch_close" overload
	;	{ani_play "open" -1.0 }

	;}

	{on animation_end "open"
		{ani_wind "open1" begin}
	}
}


{"mpq46_hpir"
	("radar_params" triplex(commander_triplex) visor(visor1) anim_rotate(none) marker(antirad_generator_large_usa))
	{on "add_movement_sound"
		{link_sound "rotate_turret"		"vehicle/turret/pantsir_turret"}
	}

	{on "update_radar"
		{if tagged "radar_off" {weapon_work "radar" 0}
		else not work "commander_triplex" {weapon_work "radar" 0}
		else not work "body" {weapon_work "radar" 0}
		else not work "turret" {weapon_work "radar" 0}
		else not work "radar" {weapon_work "radar" 0}
		else {weapon_work "radar" 1}
		}
	}


}


{"buk_launcher"
	("Shilka_sound")
	{on move on
		{delay 0.1
			{call "update_radar"}
			{call "update_gun23"}
		}
	}

	{on move off
		{delay 0.1 {call "update_radar"}{call "update_gun23"}}}
	{on "update_gun23" overload
		{if work "gun2"
			{if work "stabilizer"
				{if work "gunner_panel"
					{if not tagged "no_power"
						{if not "specability"
							{if not velocity 0
								{weapon_work "gun2" 1}
								else {weapon_work "gun2" 0}}
								else {weapon_work "gun2" 0}}
								else {weapon_work "gun2" 0}}
								else {weapon_work "gun2" 0}}
								else {weapon_work "gun2" 0}}
								else {weapon_work "gun2" 0}}
								}
	{on "update_radar"
		{if tagged "radar_off" {weapon_work "radar" 0}
		else not work "commander_triplex" {weapon_work "radar" 0}
		else not work "body" {weapon_work "radar" 0}
		else not work "turret" {weapon_work "radar" 0}
		else not work "radar" {weapon_work "radar" 0}
		else tagged "no_power" {weapon_work "radar" 0}
		else velocity 0 {weapon_work "radar" 0}
		else {weapon_work "radar" 1}
	}
	}
	("custom_sh_multi_launcher" weapon(gun2) foresight(foresight1) tail(tail) shooter(shooter))
	("radar_params" triplex(commander_triplex) visor(visor1) anim_rotate(none) marker(antirad_generator_large_rus))
}

{"9s18_kupol"
	("Shilka_sound")

	{on "update_radar"
		{if tagged "radar_off" {weapon_work "radar" 0}
			else not work "commander_triplex" {weapon_work "radar" 0}
			else not work "body" {weapon_work "radar" 0}
			else not work "turret" {weapon_work "radar" 0}
			else not work "radar" {weapon_work "radar" 0}
			else tagged "no_power" {weapon_work "radar" 0}
			else {weapon_work "radar" 1}
		}
	}

	{on crew out
		{if crew_in_place "driver" {tags add "kupol_moves"}{call "update_antiradar"}}
	}
	{on crew in
		{if crew_in_place "commander" {delay 20 {call "update_antiradar"}}}
	}

	{on break
		{if component "commander_triplex" {call "update_antiradar"}}
	}

	{on repair
		{if component "commander_triplex" {call "update_antiradar"}}
	}

	{on "update_antiradar" overload
		{if crew_in_place "commander"
			{if not tagged "no_power"
				{if not tagged "cwsh_passive"
					{if work "commander_triplex"
						{if tagged "kupol_moves"
						{call "cwsh_radar_on"}
						else not tagged "radar_off"
						{call "cwsh_radar_on"}
						else
						{call "cwsh_radar_off"}
						}
						else
						{call "cwsh_radar_off"}
					}
					else
						{call "cwsh_radar_off"}
				}
				else
					{call "cwsh_radar_off"}
			}
			else
				{call "cwsh_radar_off"}
		}
	}
		{on animation_end "radar_loop"
			{if not tagged "kupol_moves"
				{if not "specability"
					{ani_play "radar_loop_front" callback}
				else
					{ani_play "radar_loop" callback}
				}
			}
		}

		{on animation_end "radar_loop_front"
			{if not tagged "kupol_moves"
				{if not "specability"
				{ani_play "radar_loop_front" callback}
				else
				{ani_play "radar_loop" callback}
				}
			}
		}
			{on "specability" overload
				{if not "specability"
					{set "specability" 1}
				else
					{set "specability" 0}
				}
			}

			{on ik begin "turret" overload
				{kill_delay "rotate_turret"}
				{ani_play "radar_loop"}
				{ani_stop "radar_loop"}
				{ani_stop "radar_loop_front"}
				{set "radar_up" 0}
			}

			{on ik end "turret"
				{delay 5 "rotate_turret"
					{call "update_antiradar"}
				}
			}
			{on fire "radar"
				{kill_delay "rotate_turret"}
				{ani_stop "radar_loop"}
				{ani_stop "radar_loop_front"}
				{set "radar_up" 0}
				{delay 5 "rotate_turret"
					{call "update_antiradar"}
				}
			}
			{on "cwsh_radar_on"
				{tags remove "kupol_moves"}
				{if work "commander_triplex"
					{if not "radar_up"
						{if not "specability"
							{ani_play "radar_loop_front" callback}
						else
							{ani_play "radar_loop" callback}
						}
						{set "radar_up" 1}
					}
					{delay 0.1 {ani_play "visor1" -1}}
					{with_linked_entity "vehicle9"
						{call "start"}
					}
				}
			}

			{on "cwsh_radar_off"
				{ani_stop "radar_loop"}
				{ani_stop "radar_loop_front"}
				{set "radar_up" 0}
				{delay 0.1 {ani_play "visor1"}}
				{with_linked_entity "vehicle9"
					{call "stop"}
				}
			}
}



{"zsl-92_series"
	("zsl92_sound")
}

{"zsl-92a"
	;("autocannon")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	("25-50mm_gilza" fxshell(fxshell))
}

{"zsl-92b"
	;("autocannon")
	("25-50mm_gilza" fxshell(fxshell))
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	("atgm_single_launcher" weapon(gun2) foresight(foresight5) tail(tail))
	;("smokegun_nospread" smokegun(mgun18))
	;("smokegun_nospread" smokegun(mgun19))
}

{"aft-9"
	{on operatable on
		{if not "radar_up"
			{set "radar_up" 1}
			{ani_play "launcher_deploy"}
		}
	}
	{on repair
		{if component "body"
			{set "radar_up" 1}
			{ani_play "launcher_deploy"}
		}
	}
	{on ik begin "turret" {play_sound "rotate_turret" 1}}
	{on ik end "turret" {stop_sound "rotate_turret"}}
	{on fire "gun2"
		("low_speed_bullet")
		{if name "00"
			{delay  {spawn "proj_probe" "shooter00"   x}
			{spawn "startsmoke" "shooter00" x}
			{spawn "startsmoke" "tail_00" x}}
		else name "01"
			{delay  {spawn "proj_probe" "shooter01"   x}
			{spawn "startsmoke" "shooter01" x}
			{spawn "startsmoke" "tail_01" x}}
		else name "02"
			{delay  {spawn "proj_probe" "shooter02"   x}
			{spawn "startsmoke" "shooter02" x}
			{spawn "startsmoke" "tail_02" x}}
		else name "03"
			{delay  {spawn "proj_probe" "shooter03"   x}
			{spawn "startsmoke" "shooter03" x}
			{spawn "startsmoke" "tail_03" x}}
		}
	}
}

{"zbd86a"
	("bmp1_sound")
	("autocannon")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("DS39")
	}
	("25-50mm_gilza" fxshell(fxshell))
	("atgm_single_launcher" weapon(gun2) foresight(foresight5) tail(tail))
}

{"zsl-92b"
	("autocannon")
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	("25-50mm_gilza" fxshell(fxshell))
	("atgm_single_launcher" weapon(gun2) foresight(foresight5) tail(tail))

}

{"zsl-92a"
	("autocannon")
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	("25-50mm_gilza" fxshell(fxshell))
}

{"ptl-02"

	("zpu_params" gunner(gunner2) zpu_mgun(mgun2) anim(into_hatch_high) pose(t72_zpy))
	("zsl92_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("DShK38")
		("DT")
	}
	{on "gunner2_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}


}

{"pgz-04"
	("zbd04_sound")
	("small_multibarrel_gun" shooter(shooter) fxshell(fxshell))
	("radar_lifting90_params" triplex(additional_triplex1) visor(visor4) anim_rotate(radar_loop) anim_lift(radar_lift) marker(antirad_generator_rus))
	("custom_multi_launcher"	weapon(gun2) tail(tail) shooter(R_shooter) missile(fn6a_ammo))
}


{"hq_7b"
	("zsl92_sound")
	("radar_params" triplex(commander_triplex) visor(visor1) anim_rotate(radar_loop) marker(antirad_generator_rus))
	("custom_multi_launcher"	weapon(gun2) tail(tail) shooter(shooter) missile(hq7b))
	{on "uprise_stand"
		{if not "started"
			{ani_play "stand" -0.3}
			{set "started" 1}
		}
	}
	{on "lower_stand"
		{if "started"
			{ani_play "stand" 0.3}
			{set "started" 0}
		}
	}

	{on move on
		{kill_delay "stand"}
		{call "uprise_stand"}
	}
	{on move off
		{delay 2 "stand"
			{call "lower_stand"}
		}
	}

	{on operatable off
		{kill_delay "anten"}
		{call "uprise_stand"}
	}

	{on operatable on
		{call "lower_stand"}
	}

	{on "update_gun23" overload
		{if work "gun2"
			{if work "stabilizer"
				{if work "gunner_panel"
					{if not tagged "no_power"
						{if not tagged "radar_off"
							{weapon_work "gun2" 1}
							else {weapon_work "gun2" 0}}
							else {weapon_work "gun2" 0}}
							else {weapon_work "gun2" 0}}
							else {weapon_work "gun2" 0}}
							else {weapon_work "gun2" 0}}
	}

	{on "update_radar"
		{if tagged "radar_off" {weapon_work "radar" 0}
		else not work "commander_triplex" {weapon_work "radar" 0}
		else not work "body" {weapon_work "radar" 0}
		else not work "turret" {weapon_work "radar" 0}
		else not work "radar" {weapon_work "radar" 0}
		else tagged "no_power" {weapon_work "radar" 0}
		else {weapon_work "radar" 1}
		}
	}
}

{"aavp7"
		{on spawn
			{add_view	 	"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		}
			("aavp7_sound")
		{on "add_weapon_sound" overload
			{link_sound		"MG_Mid"		"weapon/shot/reactive/mk19_shot"}
			{link_sound		"MG_Far"		"weapon/shot/reactive/mk19_shot"}
			("M2HB")
		}
			{on fire "mgun2" overload
				{view start "flashbarrel4"}
				{play_sound "action_recoil_HMG"}
				{play_sound "HMG_Mid"}
				{play_sound "HMG_Far"}
				("cw_check_shooting" weap_id(mgun2))
				{delay 0.42 {view pause "flashbarrel4"}}
			}
}


{"paladin"

	{on spawn
		{add_view "zenit_gilz"		"shell_m1"	"fxshell"}
		{add_view "flash_gun_big" "flashbarrel3" "Foresight4"}
	}
("paladin_sound")

{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

{on fire "mgun"
			{ani_play "fire_mgun"}
			{view start "shell_m1"}
			{play_sound "action_recoil_HMG"}
			{play_sound "HMG_Mid"}
			{play_sound "HMG_Far"}
			{kill_delay "shell_m1"}
			{delay 0.2 "shell_m1"
				{view pause "shell_m1"}
			}
}

{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_high) pose(seat_gunner_stand))

}



{"shaanxi"		("opel_sound")	}


{"wiesel1_gun"
	("wiesel_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))
}

{"wiesel1_tow"
	("wiesel_sound")
	("atgm_single_launcher" weapon(gun2) tail(tail) foresight(foresight6))
	("zpu_params" gunner(gunner2) zpu_mgun(gun2) anim(into_hatch_leo) pose(seat_m7_mgunner))
	{on "update_gun" overload
		{if work "gun2"
			{if tagged "cwsh_zpu_off"
				{weapon_work "gun2" 0}
			else {inherited}
			}
		}
	}
	{on operatable on
		{tags add "cwsh_active"}
		{if  tagged "cwsh_tempdisable_zpu"
			{call "cwsh_enable_zpu"}
			{tags remove "cwsh_tempdisable_zpu"}
		}
	}
}


{"tpz1a6"
	("tpz_sound")
	{on "add_weapon_sound" overload
		("MG42")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}


{"m1097_avenger"
		("humvee_sound")
		{on ik begin "turret"
			{play_sound "rotate_turret" 1}
		}
		{on ik end "turret"
			{stop_sound "rotate_turret"}
		}
		{on fire "gun"
			{spawn "startsmoke"}
			{if rand 0.5
				{spawn "dust_shot_big" "basis"}
			}
			{ani_play "fire"}

			{if name "00"
				{delay 0.1 {spawn "fim-92a_carrier" "shooter00"   x}}
			else name "01"
				{delay 0.1 {spawn "fim-92a_carrier" "shooter01"   x}}
			else name "02"
				{delay 0.1 {spawn "fim-92a_carrier" "shooter02"   x}}
			else name "03"
				{delay 0.1 {spawn "fim-92a_carrier" "shooter03"   x}}
			else name "04"
				{delay 0.1 {spawn "fim-92a_carrier" "shooter04"   x}}
			else name "05"
				{delay 0.1 {spawn "fim-92a_carrier" "shooter05"   x}}
			else name "06"
				{delay 0.1 {spawn "fim-92a_carrier" "shooter06"   x}}
			else name "07"
				{delay 0.1 {spawn "fim-92a_carrier" "shooter07"   x}}
			}
		}
		{on bullet_hit
			{if volume "glass"
				{call "break_glass"}
			else volume "body"
				{call "break_glass"}
			}
			{if volume "glass1"
				{volumes "glass1" disable bullet contact}
				{spawn "glass_hit2"}
				{delay 0.1
					{bone cut "glass1"}
				}
			}
			{if volume "glass2"
				{volumes "glass2" disable bullet contact}
				{spawn "glass_hit2"}
				{delay 0.1
					{bone cut "glass2"}
				}
			}
			{if volume "glass3"
				{volumes "glass3" disable bullet contact}
				{spawn "glass_hit2"}
				{delay 0.1
					{bone cut "glass3"}
				}
			}
			{if volume "glass4"
				{volumes "glass4" disable bullet contact}
				{spawn "glass_hit2"}
				{delay 0.1
					{bone cut "glass4"}
				}
			}
		}
		{on "break_glass" overload
			{volumes "glass" disable bullet contact}
			{spawn "glass_hit2" "glass" x}
			{delay 0.1
				{bone cut "glass"}
			}
		}
}



{"m1_abrams_mcb"

	{on spawn
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"fxtracel4"}
		{add_view "dustrun_sand_big"	"wheel_work_dust2"	"fxtracer4"}
	}
	{on move on

		{view start "wheel_work_dust"}
		{view start "wheel_work_dust2"}

	}
	{on move off

		{view pause "wheel_work_dust"}
		{view pause "wheel_work_dust2"}

	}


}

{"m60a1_mcb"

	{on spawn
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"fxtracel4"}
		{add_view "dustrun_sand_big"	"wheel_work_dust2"	"fxtracer4"}
	}
	{on move on

		{view start "wheel_work_dust"}
		{view start "wheel_work_dust2"}

	}
	{on move off

		{view pause "wheel_work_dust"}
		{view pause "wheel_work_dust2"}

	}


}

{"t72a_minesweeper"

	{on spawn
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"fxtracel5"}
		{add_view "dustrun_sand_big"	"wheel_work_dust2"	"fxtracer5"}
	}
	{on move on

		{view start "wheel_work_dust"}
		{view start "wheel_work_dust2"}

	}
	{on move off

		{view pause "wheel_work_dust"}
		{view pause "wheel_work_dust2"}

	}

}

{"t55a_minesweeper"

	{on spawn
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"fxtracel4"}
		{add_view "dustrun_sand_big"	"wheel_work_dust2"	"fxtracer4"}
	}
	{on move on

		{view start "wheel_work_dust"}
		{view start "wheel_work_dust2"}

	}
	{on move off

		{view pause "wheel_work_dust"}
		{view pause "wheel_work_dust2"}

	}


}

{"tos1"
	{on spawn
		{add_view 	"startsmoke_big" 		"rok_tail00" 		"tail_00"}
		{add_view 	"startsmoke_big" 		"rok_tail01" 		"tail_01"}
		{add_view 	"startsmoke_big" 		"rok_tail02" 		"tail_02"}
		{add_view 	"startsmoke_big" 		"rok_tail03" 		"tail_03"}
		{add_view 	"startsmoke_big" 		"rok_tail04" 		"tail_04"}
		{add_view 	"startsmoke_big" 		"rok_tail05" 		"tail_05"}
		{add_view 	"startsmoke_big" 		"rok_tail06" 		"tail_06"}
		{add_view 	"startsmoke_big" 		"rok_tail07" 		"tail_07"}
		{add_view 	"startsmoke_big" 		"rok_tail08" 		"tail_08"}
		{add_view 	"startsmoke_big" 		"rok_tail09" 		"tail_09"}
		{add_view 	"startsmoke_big" 		"rok_tail10" 		"tail_10"}
		{add_view 	"startsmoke_big" 		"rok_tail11" 		"tail_11"}
		{add_view 	"startsmoke_big" 		"rok_tail12" 		"tail_12"}
		{add_view 	"startsmoke_big" 		"rok_tail13" 		"tail_13"}
		{add_view 	"startsmoke_big" 		"rok_tail14" 		"tail_14"}
		{add_view 	"startsmoke_big" 		"rok_tail15" 		"tail_15"}
		{add_view 	"startsmoke_big" 		"rok_tail16" 		"tail_16"}
		{add_view 	"startsmoke_big" 		"rok_tail17" 		"tail_17"}
		{add_view 	"startsmoke_big" 		"rok_tail18" 		"tail_18"}
		{add_view 	"startsmoke_big" 		"rok_tail19" 		"tail_19"}
		{add_view 	"startsmoke_big" 		"rok_tail20" 		"tail_20"}
		{add_view 	"startsmoke_big" 		"rok_tail21" 		"tail_21"}
		{add_view 	"startsmoke_big" 		"rok_tail22" 		"tail_22"}
		{add_view 	"startsmoke_big" 		"rok_tail23" 		"tail_23"}
	}

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/T72_Tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/electric/electric_light"}
	}

	{on fire "gun"
		(define "fire_barrel"
			name "%0"
			{view start "rok_tail%0"}
			{delay 0.42
				{view pause "rok_tail%0"}
			}
		)
		{if
			("fire_barrel" args 00)
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
		}
		{spawn "startsmoke_big" inv_normal}
		{if rand 0.5
			{spawn "dust_shot_big" "basis"}
		}
		("cw_check_shooting" weap_id(gun))
	}
	{on "_explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "spawn_shellhole"
		{if "big_explosion"
			{spawn "crater_massive" "basis" terrain_texmod}
			{spawn "shellhole_big_dead" "basis"}
		}
	}

	{on "engine_check" overload 		;// turns engine on at spawn if crewed and not tagged engine off
		{set "engine_check" 1}
		{delay 0.1
			{if tagged "engine_turned_off"
				{chassis_work 0}
				{set "engine_on" 0}
				{call "update_power"}
				{call "update_turret"}
			else
				{if operatable
					{if tagged "hidden" 	;// mission script that hides unit
						{set "hidden" 1}
					else
						{if  cannon_state "fire" 	;// check for motorized cannons
							{call "engine_idle"}
						}
						{call "play_trace_engine"} 		;// plays dust fx for aero vehicles
						{call "update_lights"}
					}
				}
			}
			{set "engine_check" 0}
		}
	}

	{on "ammo_break" overload
	   	;{delay 0.1
		;	{call "stat_break"}
		;}
		{delay 1
			{call_synced "ammo_explosion"}
		}
	}
}


{"bomb_launcher"
	{on spawn
		{add_view 	"startsmoke_big" 		"rok_tail00" 		"tail00"}
		{add_view 	"startsmoke_big" 		"rok_tail01" 		"tail01"}
		{add_view 	"startsmoke_big" 		"rok_tail02" 		"tail02"}
		{add_view 	"startsmoke_big" 		"rok_tail03" 		"tail03"}
		{add_view 	"startsmoke_big" 		"rok_tail04" 		"tail04"}
		{add_view 	"startsmoke_big" 		"rok_tail05" 		"tail05"}
		{add_view 	"startsmoke_big" 		"rok_tail06" 		"tail06"}
		{add_view 	"startsmoke_big" 		"rok_tail07" 		"tail07"}
		{add_view 	"startsmoke_big" 		"rok_tail08" 		"tail08"}
		{add_view 	"startsmoke_big" 		"rok_tail09" 		"tail09"}
		{add_view 	"startsmoke_big" 		"rok_tail10" 		"tail10"}
		{add_view 	"startsmoke_big" 		"rok_tail11" 		"tail11"}
	}

	{on fire "gun"
		{spawn "startsmoke_big"}
		(define "fire_barrel"
			name "%0"
			{view start "rok_tail%0"}
			{delay 0.42
				{view pause "rok_tail%0"}
			}
		)
		{if
			("fire_barrel" args 00)
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
		}
	}
}


{"t-34-85_gdr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
	{on fire "gun"
		{spawn "proj_probe"  "foresight1" x}

	}
}

{"bmp-1_gdr"
	("bt_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DS39")
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight6" x}
	}
}

{"bm-21_gdr car"
	("zis5_sound")
	{on fire "gun"
		{spawn "proj_probe_extra_big"  "foresight" x}
	}
	
}
;/*=========== Hotmod Specifics End  ===========*/



