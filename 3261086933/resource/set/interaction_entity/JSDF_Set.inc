(define "type90_sound" 
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/leo2/leo2_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/leo2/leo2_engine_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/leo2/leo2_engine_work"}
		{link_sound "exhaust"			"vehicle/engine/leo2/leo2_engine_start"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
	}
)

(define "skw_sound" 
	{on "add_movement_sound" overload 
		{link_sound "move"			"vehicle/tracks/4WD_Loop"}
		;{link_sound "engine_start"		"vehicle/engine/ural4320_start"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz251/start"}
		{link_sound "engine_full"			"vehicle/engine/ural4320_work"}
		{link_sound "engine_idle"		"vehicle/engine/lav25/A0059_PLA_car_idle"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz251/idle"}
		{link_sound "rotate_turret" 		"vehicle/turret/china_turret_engine_move"}
		{link_sound "exhaust"			"vehicle/engine/ural4320_start"}
		{link_sound "engine_stop"		"vehicle/engine/ural4320_stop"}
	}
)

(define "ctwv_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/lav25/ve_large_accelerate"}
		{link_sound "engine_stop"		"vehicle/engine/lav25/ve_large_shutdown"}
		{link_sound "engine_idle"		"vehicle/engine/lav25/A0059_PLA_car_idle"}
		{link_sound "engine_full"		"vehicle/engine/lav25/ve_large_drive_wheel"}
		{link_sound "exhaust"			"vehicle/engine/lav25/ve_large_accelerate"}
		{link_sound "move"				"vehicle/engine/lav25/ve_large_drive_wheel"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
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

{"type87_shell_eject"
	{on fire "gun"
		{spawn "shell_cannon_auto" "fx_invers1" x scale 0.01 {impulse up 0.01 0.01 dir 2.0 2.0 cz 1.2 1.1 forward 1.5 1.5 com}}
		{spawn "shell_cannon_auto" "fx_invers2" x scale 0.01 {impulse up 0.01 0.01 dir 2.0 2.0 cz 1.2 1.1 forward 1.5 1.5 com}}
	}
}

{"type87_Radar"
	{on operatable on
		{ani_play "radar" loop}
	}

	{on operatable off
		{ani_stop "radar"}
	}
}

{"64atm"
	{on fire "gun"
		{bone hide "rocket00"}
		{delay 12.5
			{bone show "rocket00"}
		}
	}

	{on fire "gun1"
		{bone hide "rocket01"}
		{delay 12.5
			{bone show "rocket01"}
		}
	}
}

{"plss"
	{on "engine_on"
		{ani_play "engine_start"}
	}

	{on "engine_off"
		{ani_play "engine_start" -1}
	}
}

{"startanime"
	{on "engine_on"
		{ani_play "atgm"}
	}

	{on "engine_off"
		{ani_play "atgm" -1}
	}
}


{"engine_start"
	{on operatable on
		{ani_play "engine_on"}
	}

	{on operatable off
		{ani_play "engine_on" -1}
	}
}

{"cannon_deploy"
	{on engine on
		{ani_play "deploy" -1}
	}

	{on engine off
		{ani_play "deploy"}
	}
}

{"commanderhatch"
	{on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"gunner_on"
	{on operatable on
		{ani_play "gunner_on"}
	}

	{on operatable off
		{ani_stop "gunner_on"}
	}
}

{"type90"
	("type90_sound")
}

{"type93sam"
	("car_sound")
}

{"type73_v16_87"
	("car_sound")
}

{"type73_v16_79"
	("car_sound")
}

{"type73_v16_atm"
	("car_sound")
}

{"type73_v16_m2"
	("car_sound")
}

{"type73_v16"
	("car_sound")
}

{"type89j"
	("m2a2_sound")
}

{"type73(skw475)"
	("skw_sound")
}

{"type87"
	("bmp_sound")
}

{"type74g"
	("challenger2_sound")
}

{"type74c"
	("challenger2_sound")
}

{"type74_batra"
	("challenger2_sound")
}

{"type74d"
	("challenger2_sound")
}

{"type74e"
	("challenger2_sound")
}

{"type74f"
	("challenger2_sound")
}

{"type73_j24"
	("car_sound")
}

{"type73_j25"
	("car_sound")
}

{"type73_m2"
	("car_sound")
}

{"type73_64mat"
	("car_sound")
}

{"type73_sprg"
	("car_sound")
}

{"type73_skw464"
	("skw_sound" )
}

{"type81_sam_1"
	("skw_sound" )
}

{"m44_jsdf"
	("m5a1_stuart_sound")
}

{"type75_mlrs"
	("pz3_sound")
}

{"type89j"
	("m2a2_sound")
}

{"type73(skw475)"
	("skw_sound")
}

{"type87"
	("bmp_sound")
}

{"type75_sph"
	("m5a1_stuart_sound")
}

{"m24_jsdf"
	("m24_chaffee_sound")
}

{"ctwv_rcv_p"
	("ctwv_sound")
}

{"ctwv_icv_p"
	("ctwv_sound")
}

{"type73_spaa"
	("aavp7_sound")
}

{"type73_apc"
	("aavp7_sound")
}

{"type73_apc_1"
	("aavp7_sound")
}

{"type60_apc"
	("m5a1_stuart_sound")
}

{"m36b2_jsdf"
	("m4_sherman_sound")
}

