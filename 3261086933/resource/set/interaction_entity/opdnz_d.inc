;/*=========== Modern Defines ==================*/
;/*=========== add by ordos End ===========*/


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


(define "t72_sound"
	{on "add_movement_sound"
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}

)

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

(define "btr_sound"
	{on "add_movement_sound" overload	
		{link_sound "move"			"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/btr/btr_start"}
		{link_sound "engine_full"	        "vehicle/engine/btr/btr_high"}
		{link_sound "engine_idle"		"vehicle/engine/btr/btr_idle"}
		{link_sound "rotate_turret" 		"vehicle/turret/china_turret_engine_move"}
		{link_sound "exhaust"			"vehicle/engine/btr/btr_ext"}
		{link_sound "engine_stop"		"vehicle/engine/btr/btr_stop"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
)



(define "bmp_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/bmp/bmp_start"}
		{link_sound "engine_stop"		"vehicle/engine/bmp/bmp_stop"}
		{link_sound "engine_idle"		"vehicle/engine/bmp/bmp_idle"}
		{link_sound "engine_full"		"vehicle/engine/bmp/bmp_high"}
		{link_sound "exhaust"			"vehicle/engine/bmp/bmp_ext"}
		{link_sound "move"			"vehicle/tracks/t55_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "ztz_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/ztz99/ztz99_start"}
		{link_sound "engine_stop"		"vehicle/engine/ztz99/ztz99_stop"}
		{link_sound "engine_idle"		"vehicle/engine/ztz99/ztz99_idle"}
		{link_sound "engine_full"		"vehicle/engine/ztz99/ztz99_high"}
		{link_sound "exhaust"			"vehicle/engine/ztz99/ztz99_ext"}
		{link_sound "move"			"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "ztz88_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/ztz88/ztz88_start"}
		{link_sound "engine_stop"		"vehicle/engine/ztz88/ztz88_stop"}
		{link_sound "engine_idle"		"vehicle/engine/ztz88/ztz88_idle"}
		{link_sound "engine_full"		"vehicle/engine/ztz88/ztz88_high"}
		{link_sound "exhaust"			"vehicle/engine/ztz88/ztz88_ext"}
		{link_sound "move"			"vehicle/tracks/t55_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "m2a2_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m2a2/m2a2_start"}
		{link_sound "engine_stop"		"vehicle/engine/m2a2/m2a2_stop"}
		{link_sound "engine_idle"		"vehicle/engine/m2a2/m2a2_idle"}
		{link_sound "engine_full"		"vehicle/engine/m2a2/m2a2_high"}
		{link_sound "exhaust"			"vehicle/engine/m2a2/m2a2_ext"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
) 

(define "t55_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t55/t55_start"}
		{link_sound "engine_stop"		"vehicle/engine/t55/t55_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t55/t55_idle"}
		{link_sound "engine_full"		"vehicle/engine/t55/t55_high"}
		{link_sound "exhaust"			"vehicle/engine/t55/t55_ext"}
		{link_sound "move"			"vehicle/tracks/t55_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "bmd_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/bmd/bmd_start"}
		{link_sound "engine_stop"		"vehicle/engine/bmd/bmd_stop"}
		{link_sound "engine_idle"		"vehicle/engine/bmd/bmd_idle"}
		{link_sound "engine_full"		"vehicle/engine/bmd/bmd_high"}
		{link_sound "exhaust"			"vehicle/engine/bmd/bmd_ext"}
		{link_sound "move"			"vehicle/tracks/t55_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "leopard2_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/leo2/leopard2_start"}
		{link_sound "engine_stop"		"vehicle/engine/leo2/leopard2_stop"}
		{link_sound "engine_idle"		"vehicle/engine/leo2/leopard2_idle"}
		{link_sound "engine_full"		"vehicle/engine/leo2/leopard2_high"}
		{link_sound "exhaust"			"vehicle/engine/leo2/leopard2_ext"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "leopard1_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/leo1/leo1_start"}
		{link_sound "engine_stop"		"vehicle/engine/leo1/leo1_stop"}
		{link_sound "engine_idle"		"vehicle/engine/leo1/leo1_idle"}
		{link_sound "engine_full"		"vehicle/engine/leo1/leo1_high"}
		{link_sound "exhaust"			"vehicle/engine/leo1/leo1_ext"}

		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "apc_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/apc/apc_start"}
		{link_sound "engine_stop"		"vehicle/engine/apc/apc_stop"}
		{link_sound "engine_idle"		"vehicle/engine/apc/apc_idle"}
		{link_sound "engine_full"		"vehicle/engine/apc/apc_high"}
		{link_sound "exhaust"			"vehicle/engine/apc/apc_ext"}
		{link_sound "move"			"vehicle/wheels/armored_car"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
)

(define "challenger2_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/cg2/cg2_start"}
		{link_sound "engine_stop"		"vehicle/engine/cg2/cg2_stop"}
		{link_sound "engine_idle"		"vehicle/engine/cg2/cg2_idle"}
		{link_sound "engine_full"		"vehicle/engine/cg2/cg2_high"}
		{link_sound "exhaust"			"vehicle/engine/cg2/cg2_ext"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

	}

)

(define "leclerc_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/lec/lec_start"}
		{link_sound "engine_stop"		"vehicle/engine/lec/lec_stop"}
		{link_sound "engine_idle"		"vehicle/engine/lec/lec_idle"}
		{link_sound "engine_full"		"vehicle/engine/lec/lec_high"}
		{link_sound "exhaust"			"vehicle/engine/lec/lec_ext"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

	}

)


(define "turck_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/turck/turck_start"}
		{link_sound "engine_stop"		"vehicle/engine/turck/turck_stop"}
		{link_sound "engine_idle"		"vehicle/engine/turck/turck_idle"}
		{link_sound "engine_full"		"vehicle/engine/turck/turck_high"}
		{link_sound "move"			"vehicle/wheels/armored_car"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
)

(define "turck1_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/turck/turck_start"}
		{link_sound "engine_stop"		"vehicle/engine/turck/turck_stop"}
		{link_sound "engine_idle"		"vehicle/engine/turck1/turck1_idle"}
		{link_sound "engine_full"		"vehicle/engine/turck1/turck1_high"}
		{link_sound "move"			"vehicle/wheels/armored_car"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
)

(define "car_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/car/car_start"}
		{link_sound "engine_stop"		"vehicle/engine/car/car_stop"}
		{link_sound "engine_idle"		"vehicle/engine/car/car_idle"}
		{link_sound "engine_full"		"vehicle/engine/car/car_high"}
		{link_sound "exhaust"			"vehicle/engine/car/car_ext"}
		{link_sound "move"			"vehicle/wheels/armored_car"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
)

(define "car2_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/car2/car2_start"}
		{link_sound "engine_stop"		"vehicle/engine/car2/car2_stop"}
		{link_sound "engine_idle"		"vehicle/engine/car2/car2_idle"}
		{link_sound "engine_full"		"vehicle/engine/car2/car2_high"}
		{link_sound "exhaust"			"vehicle/engine/car2/car2_ext"}
		{link_sound "move"			"vehicle/wheels/armored_car"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
)

(define "car3_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/car3/car3_start"}
		{link_sound "engine_stop"		"vehicle/engine/car3/car3_stop"}
		{link_sound "engine_idle"		"vehicle/engine/car3/car3_idle"}
		{link_sound "engine_full"		"vehicle/engine/car3/car3_high"}
		{link_sound "exhaust"			"vehicle/engine/car3/car3_ext"}
		{link_sound "move"			"vehicle/wheels/armored_car"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
)

(define "t80_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

	}
)

(define "t64_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t64/t64_start"}
		{link_sound "engine_stop"		"vehicle/engine/t64/t64_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t64/t64_idle"}
		{link_sound "engine_full"		"vehicle/engine/t64/t64_high"}
		{link_sound "exhaust"			"vehicle/engine/t64/t64_ext"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

	}
)

(define "ifv_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/ifv/ifv_start"}
		{link_sound "engine_stop"		"vehicle/engine/ifv/ifv_stop"}
		{link_sound "engine_idle"		"vehicle/engine/ifv/ifv_idle"}
		{link_sound "engine_full"		"vehicle/engine/ifv/ifv_high"}
		{link_sound "exhaust"		        "vehicle/engine/ifv/ifv_ext"}
		{link_sound "move"			"vehicle/tracks/ifv_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

	}
)

(define "m1_sound"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m1/m1_start"}
		{link_sound "engine_stop"		"vehicle/engine/m1/m1_stop"}
		{link_sound "engine_idle"		"vehicle/engine/m1/m1_idle"}
		{link_sound "engine_full"		"vehicle/engine/m1/m1_high"}
		;{link_sound "exhaust"			"vehicle/engine/m1/m1_ext"}
		{link_sound "move"			"vehicle/tracks/m1_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

	}
)



(define "mlrs_m270_west"
	{on spawn
		{link_sound 	"bkg_rocket" 			"weapon/shot/bkg/rocket/"}
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

	("m2a2_sound")
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

(define "auto_gren_launcher"
    	{on fire "%mgun" overload
		;{spawn "startsmoke" inv_normal}
		("cw_check_shooting" weap_id(%mgun))
	}
)


(define "mlrs_east"
	{on spawn
		{add_view 	"startsmoke_big" 		"tail00" 		"tail00"}
		{add_view 	"startsmoke_big" 		"tail01" 		"tail01"}
		{add_view 	"startsmoke_big" 		"tail02" 		"tail02"}
		{add_view 	"startsmoke_big" 		"tail03" 		"tail03"}
		{add_view 	"startsmoke_big" 		"tail04" 		"tail04"}
		{add_view 	"startsmoke_big" 		"tail05" 		"tail05"}
		{add_view 	"startsmoke_big" 		"tail06" 		"tail06"}
		{add_view 	"startsmoke_big" 		"tail07" 		"tail07"}
		{add_view 	"startsmoke_big" 		"tail08" 		"tail08"}
		{add_view 	"startsmoke_big" 		"tail09" 		"tail09"}
		{add_view 	"startsmoke_big" 		"tail10" 		"tail10"}
		{add_view 	"startsmoke_big" 		"tail11" 		"tail11"}
		{link_sound 	"bkg_rocket" 			"weapon/shot/bkg/rocket/"}
	}
	{on fire "gun" 
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{play_sound "bkg_rocket"}	
		{ani_play "fire"}
		{view start "flashbarrel_gun"}
		{view start "smoke_add"}
		{delay 0.16 "shell_off"
			{view pause "smoke_add"}
			{view pause "flashbarrel_gun"}
		}
		(define "fire_barrel"
			name "%0"
				{view start "tail%0"}
				{delay 0.4
					{view pause "tail%0"}
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
			}
	}
)
(define "atgm_multi_launcher"
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
	
(define "atgm_multi_launcher_west"
	{on "init_%weapon"
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/USA/Western_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/USA/Western_ATGM/"}
	}
	{on fire "%weapon" overload
		("low_speed_bullet")
		{play_sound "action_recoil_Cannon"}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
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

(define "atgm_single_launcher_bmp"
	{on "init_%weapon"
		{add_view	"rok_tail"	"rok_tail_%weapon"	"%tail"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
	}
	{on fire "%weapon" overload
		("low_speed_bullet")
		{play_sound "action_recoil_Cannon"}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		{view start "rok_tail_%weapon"}
		{spawn "startsmoke" "%foresight" x}
		{spawn "startsmoke" "%tail" x}
		{spawn "proj_probe" "%foresight" x {tags add "%foresight"}}
		{delay 0.4 {view pause "rok_tail_%weapon"}}
		("cw_check_shooting" weap_id(%weapon))
		{delay 0.2 {call "spawn_shell"}}
	}
)

(define "atgm_single_launcher_west"
	{on "init_%weapon"
		{add_view	"rok_tail"	"rok_tail_%weapon"	"%tail"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/USA/Western_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/USA/Western_ATGM/"}
	}
	{on fire "%weapon" overload
		("low_speed_bullet")
		{play_sound "action_recoil_Cannon"}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		{view start "rok_tail_%weapon"}
		{spawn "startsmoke" "%foresight" x}
		{spawn "startsmoke" "%tail" x}
		{spawn "proj_probe" "%foresight" x {tags add "%foresight"}}
		{delay 0.4 {view pause "rok_tail_%weapon"}}
		("cw_check_shooting" weap_id(%weapon))
		{delay 0.2 {call "spawn_shell"}}
	}
)

(define "custom_multi_launcher_west"	;cпавн на шутере без выбора боеприпаса
	{on "init_%weapon"
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/USA/Western_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/USA/Western_ATGM/"}
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
		{play_sound "action_recoil_Cannon"}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
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

(define "custom_multi_launcher"	;cпавн на шутере без выбора боеприпаса
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

(define "custom_sh_multi_launcher_east"
	{on "init_%weapon"
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
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
		{play_sound "action_recoil_Cannon"}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
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
	   	{spawn "proj_probe" "%foresight" x  {tags add "%shooter%0"}}
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

	{on fire "gun"
		(define "fire_barrel"
			name "%0"
			{view start "flashbarrel%0"}
			{view start "flashbarrela%0"}
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

(define "tank_gun"
	{view start "flashbarrel_gun"}
	{view start "smoke_add"}
	{delay 0.16 "shell_off"
		{view start "zenite_smoke"}
		{view pause "smoke_add"}
		{view pause "flashbarrel_gun"}
		{delay 1	{call "spawn_shell"}}
		{delay 2	{view pause "zenite_smoke"}}
	}
)

(define "90-105mm_gun_with_cm"
	{on "init_burnout"
	      {if rand 0.3
			{add_view "fire_ammo_burnout_barr1" "ammo_burnout1" "Foresight1"}
			{add_view "fire_ammo_burnout_barr2" "ammo_burnout2" "Foresight1"}
			{add_view "fire_ammo_burnout_barr3" "ammo_burnout3" "Foresight1"}
			{add_view "fire_ammo_burnout_barr4" "ammo_burnout4" "Foresight1"}
	       }
	}
	{on "init1_gun"
		{add_view	"tank_canon_fire_3_link"		"flashbarrel1"			"Foresight1"}
	}
   {on fire "gun" 
		("tank_gun")
		{set "gun"}{call "proj_probe"}
		{spawn "dust_shot_normal" "basis"}
;    	{spawn "tank_canon_fire_3" "Foresight1" x}
		{spawn "cw_human_tankgun_contusion" "Foresight1"}
	}
)

(define "105mm_gun_with_cm"
	{on "init_burnout"
	      {if rand 0.3
			{add_view "fire_ammo_burnout_barr1" "ammo_burnout1" "Foresight1"}
			{add_view "fire_ammo_burnout_barr2" "ammo_burnout2" "Foresight1"}
			{add_view "fire_ammo_burnout_barr3" "ammo_burnout3" "Foresight1"}
			{add_view "fire_ammo_burnout_barr4" "ammo_burnout4" "Foresight1"}
	       }
	}
	{on "init1_gun"
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		{add_view	"tank_canon_fire_3_link"		"flashbarrel1"			"Foresight1"}
	}
   {on fire "gun" 
		("tank_gun")
		{set "gun"}{call "proj_probe"}
		{spawn "dust_shot_normal" "basis"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "cw_human_tankgun_contusion" "Foresight1"}
	}
)

(define "90-105mm_gilza_back"
	{on "spawn_shell"
		{spawn "shell_cannon" "turret_systems" x scale 1.0
			{impulse up 0.1 0.1 forward 2 0.5 com}
			{add_view "smoke_zenit" "smoke_shell" "fx_shellsmoke"}
			{view start "smoke_shell"}
			{delay_effect 6 2 "stop"}
			{delay 6 2.5 {hide 3}}
		}
	}
)

(define "autocannon"
	{on fire "gun"
		{delay 0.05 {call "spawn_shell"}}
		("cw_check_shooting" weap_id(gun))
	}
)

{"startanime"
	{on "engine_on"
		{ani_play "engine_on"}
	}

	{on "engine_off"
		{ani_play "engine_on" -1}
	}
}

{"firer"
	{on engine on
		{ani_play "firer"}
	}

	{on engine off
		{ani_play "firer" -1}
	}
}

{"set"
        {on move on
		{if not water_level 1.6
			{ani_play "set" -0.5}
		}
	}
	{on move off
		{if not water_level 1.6
			{ani_play "set" 0.5}
		}
	}
}

{"v22a"

	{on spawn
		{ani_play "back_open1"}
	}
	
	{on move on
		{ani_play "wheels"}
	}

	{on move off
		{ani_play "wheels" -1}
	}
}

;/*=========== Modern Defines ==================*/

;/*=========== Ukraine Vehicles Begin ==================*/


{"d21_11_crew"		;开关门
	{on spawn
		{if tagged "door_open"
			{ani_wind "open_back" end}
		}
	}
	{on animation_event "board"
		{if not tagged "door_open"
			{ani_play "open_back" 1}
			{tags add "door_open"}
			{call "open"}
		}
	}
	{on animation_event "out"
		{if tagged "door_open"
			{kill_delay "boardout"}
			{delay 3 "boardout"
				{ani_play "close_back" 1}
				{tags remove "door_open"}
				{call "close"}
			}
		}
	}
}

{"d21_11_mgun"				;载具名
	{on spawn
		{add_view "shell_hmgun" "shells" "fx_inver"}
	}
	{on "add_weapon_sound" overload			;开火音效
		("DShK38_int")
	}
	{on fire "mgun1"
		{ani_play "fire" resume}
		{view start "shells"}
	}
}

{"d21_21_mgun"				;载具名
	{on spawn
		{add_view "shell_hmgun" "shells" "fx_inver"}
	}
	{on "add_weapon_sound" overload			;开火音效
		("DShK38_int")
	}
	{on fire "mgun1"
		{ani_play "fire" resume}
		{view start "shells"}
	}
}






{"9p149 tank"
	("bmp_sound")
	{on spawn
		{bone hide "turret_main001"}
	}

}
{"side_fire_9p149"

	{on spawn
		{volumes "gun_recoil" disable blast}
		{volumes "gun_nanopex" disable blast}
		{tags add "ordos_fire_debug001"}
	}

	{on "nanopex_test"
 		{delay 0.1 "loop_nanopex"
			{spawn "turret_nanopex_detector""gun_nanopex"{stuff_detonate}}
			{tags add "nanopex_test"}
			{call "nanopex_test"}
		}

	}
	{on fire "gun"
		{tags add "ordos_fire_debug002"}
		{ik_enable "turret" 0}
		{volumes "gun_recoil" enable blast}
		{volumes "gun_nanopex" enable blast}
		{spawn "turret_dir_detector" "gun_recoil" {stuff_detonate}}
		{call "nanopex_test"}
		{delay 0.5
			{tags add "ordos_fire_debug003"}
			{volumes "gun_recoil" disable blast}

		}
		{delay 4.5
			{tags add "nanopex_fire_debug003"}
			{volumes "gun_nanopex" disable blast}
		}
	}

	{on blast_hit
			{if stuff "turret_dir_detector"

				{if  volume "recoil_gun_left" {ani_play "fire_left" 1.0}  {tags add "ordos_fire_left"}

				else volume "recoil_gun_right" {ani_play "fire_right" 1.0}  {tags add "ordos_fire_right"}

				;else volume "recoil_gun_central"

				}
			}
			{if stuff "turret_nanopex_detector"

				{if volume "nanopex_stop_right_ani"  
					{ani_stop "fire_right" } 
					{delay 0.25 
						{spawn "shell_missile" "shell_drop" x 
							;{impulse forward 1 0.15 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
							{impulse up 0.2 0.1 dir 0.2 0.1 cz 0.2 0.1 forward 0.7 0.2 com}
						}
						{bone hide "rocket_gun"}
					}
					{delay 0.5	
						{bone hide "turret_main"}
						{bone show "turret_main001"}	
						{bone hide "rocket_gun001"}
					}
					{delay 0.75
						{ani_play "reload_wyh"} 
					}
					{delay 3
						{bone show "rocket_gun001"}	
					}
					{delay 7
						{bone hide "turret_main001"}
						{bone show "turret_main"}	
						{bone show "rocket_gun"}	
						{ani_play "fire_right" -1 resume} 
					}
					{delay 7.1
						{ik_enable "turret" 1}
					}
					{kill_delay "loop_nanopex"}

				else  volume "nanopex_stop_left_ani"  
					{ani_stop "fire_left" } 
					{delay 0.25 
						{spawn "shell_missile" "shell_drop" x 
							;{impulse forward 1 0.15 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
							{impulse up 0.2 0.1 dir 0.2 0.1 cz 0.2 0.1 forward 0.7 0.2 com}
						}
						{bone hide "rocket_gun"}
					}
					{delay 0.5	
						{bone hide "turret_main"}
						{bone show "turret_main001"}	
						{bone hide "rocket_gun001"}
					}
					{delay 0.75
						{ani_play "reload_wyh"} 
					}
					{delay 3
						{bone show "rocket_gun001"}	
					}
					{delay 7
						{bone hide "turret_main001"}
						{bone show "turret_main"}	
						{bone show "rocket_gun"}	
						{ani_play "fire_left" -1 resume} 
					}
					{delay 7.1
						{ik_enable "turret" 1}
					}
					{kill_delay "loop_nanopex"}

				}
			}
	}
}

{"m113a3 tank"
	("m2a2_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight1"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(gunner) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"ypr_765 tank"
	("m2a2_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight1"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(gunner) zpu_mgun(mgun) anim(into_hatch_car) pose(t80y_mgunner) com_optic(mgun3))	
}


{"m113_vsu tank"
	("m2a2_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(gunner) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m1126_mk19"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{if terrain_fx "ice"
				{tex_mod "ua_1"}
			else terrain_fx "snow"
				{tex_mod "ua_1"}
			else
				{tex_mod "ua_1"}
		}			
	}	
	{on fire "mgun"
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
    {on "add_weapon_sound" overload
		("AGS_CodeX")
	}
}

{"m1126_mk19_n"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}	
	{on fire "mgun"
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}		
{on "add_weapon_sound" overload
		("AGS_CodeX")
	}
}

{"m1126_jav"
	("apc_sound")
	{on spawn
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{add_view	 	"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight1"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		;{add_view 	"rok_tail"		"tail00"			"tail00"}
		;{add_view 	"rok_tail"		"tail01"			"tail01"}
		;{view hide "tail00"}
		;{view hide "tail01"}
		{call "check_speed2"}
		{if terrain_fx "ice"
				{tex_mod "ua_1"}
			else terrain_fx "snow"
				{tex_mod "ua_1"}
			else
				{tex_mod "ua_1"}
		}			

	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
		("ATGMWest")
	}

	{on fire "mgun"	overload
		 
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel3"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}		
	}
	
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight2))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					;{ani_play "misslerack" 1}
					;{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						;{ani_play "open" -1}
						;{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

		}



	}
} 

{"m1126_jav_n"
	("apc_sound")
	{on spawn
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{add_view	 	"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight1"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		;{add_view 	"rok_tail"		"tail00"			"tail00"}
		;{add_view 	"rok_tail"		"tail01"			"tail01"}
		;{view hide "tail00"}
		;{view hide "tail01"}
		{call "check_speed2"}

	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
		("ATGMWest")
	}

	{on fire "mgun"	overload
		 
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel3"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}		
	}
	
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight2))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					;{ani_play "open" 1}
					;{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						;{ani_play "open" -1}
						;{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

		}



	}
} 

{"humvee_kpvt_ukr"	
	("car3_sound")
	{on spawn
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/KPVT/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/KPVT/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("KPVT_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_m2hb_ukr"
	("car3_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(gun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_mk19_ukr"
	("car3_sound")
	{on spawn
		{add_view		"flash_gun_small"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/AGS_Systems/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/AGS_Systems/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("AGS_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_m134_ukr"
	("car3_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/M134/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/M134/"}
	}
	{on fire "mgun"	overload
		 
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel3"}
	}
	{on "add_weapon_sound" overload
	("M134_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_m240_ukr"
	("car3_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/M240/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M240_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_m240_usa"
	("car3_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/M240/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M240_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_m2hb_usa"
	("car3_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(gun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_mk19_usa"
	("car3_sound")
	{on spawn
		{add_view		"flash_gun_small"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/AGS_Systems/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/AGS_Systems/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("AGS_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_m134_usa"
	("car3_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/M134/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/M134/"}
	}
	{on fire "mgun"	overload
		 
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel3"}
	}
	{on "add_weapon_sound" overload
	("M134_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"humvee_tow1"
	("car3_sound")
	{on spawn
		{call "check_speed2"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/USA/Western_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/USA/Western_ATGM/"}
	}

	{on "add_weapon_sound" overload
	("ATGMWest")
	}
	("atgm_single_launcher" weapon(gun2) tail(tail) foresight(foresight))
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

		}	}
}

{"dongfeng_mengshi_hj8"
	("car3_sound")
	{on spawn
		{call "check_speed2"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/USA/Western_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/USA/Western_ATGM/"}
	}

	{on "add_weapon_sound" overload
	("ATGMWest")
	}
	("atgm_single_launcher" weapon(gun) tail(tail) foresight(foresight))
	("zpu_params" gunner(gunner) zpu_mgun(gun) anim(into_hatch_common) pose(seat_gunner_stand))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

		}	}
}

{"dongfeng__mengshi_sk131"
	("car3_sound")
	{on spawn
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}	}
		{on fire "mgun" 
		{play_sound "mid"}
		{play_sound "far"}
	}
	{on "add_weapon_sound" overload
		("Kord_CodeX")	
	}
	("zpu_params" gunner(gunner) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

(define "atgm_single_launcher_novator"
	{on "init_%weapon"
		{add_view	"rok_tail"	"rok_tail_%weapon"	"%tail"}
	}
	{on fire "%weapon" overload
		("low_speed_bullet")
		{view start "rok_tail_%weapon"}
		{spawn "startsmoke" "%foresight" x}
		{spawn "startsmoke" "%tail" x}
		{delay 0.4 {view pause "rok_tail_%weapon"}}
		("cw_check_shooting" weap_id(%weapon))
		{delay 0.2 {call "spawn_shell"}}
	}
)



{"novator_stugna-p"
	("car_sound")
	{on spawn
		{call "check_speed2"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		{add_view 	"rok_tail"		"tail00"			"foresight1"}
	}

	{on "add_weapon_sound" overload
	("ATGMEast")
	}
	
	("atgm_single_launcher_novator" weapon(gun) tail(tail00) foresight(foresight1))
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

		}	}
}

{"novator"  
	("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}



{"stryker_m2hb"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}


{"gtk_boxer_m2hb"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}

{"kozak5_mgun"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}

{"kozak2_mgun"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/KPVT/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/KPVT/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("KPVT_CodeX")
	}
}

{"maxxpro"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}

{"varta"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" 
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}

{"cougar-oh"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight2"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" 
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	
	("zpu_params" gunner(gunner) zpu_mgun(mgun) anim(into_hatch_car) pose(t80y_mgunner) com_optic(mgun3))		
}

{"m1134"
	("apc_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/USA/Western_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/USA/Western_ATGM/"}
	}
	("atgm_multi_launcher_west" weapon(gun) tail(tail) foresight(foresight1))
	{on "add_weapon_sound" overload
		("ATGMWest")
	}
}
{"m-1129"
	("apc_sound")
	{on "add_weapon_sound" overload
		("Mortar_12cm_codex")
		("AGS_CodeX")
	}
	("auto_gren_launcher" mgun(mgun))
}

{"m1126"
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight1"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{if terrain_fx "ice"
				{tex_mod "ua_3"}
			else terrain_fx "snow"
				{tex_mod "ua_3"}
			else
				{tex_mod "ua_3"}
		}			
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}

;//Russian Gaz Tigr Variants

{"gaz2975_spg car"
	("car_sound")
	{on spawn
		{add_view		"tank_canon_fire_75_76_round"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP1_73mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP1_73mm/"}
	}
	{on fire "gun"
		{view start "flashbarrel3"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("BMP73mm_CodeX")
	}
	
}

{"gaz2975_mod car"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_small"	"flashbarrel3"		"Foresight3"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/AGS30/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/AGS30/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("AGS30_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_car) pose(t80y_mgunner) com_optic(mgun3))	
}

{"gaz2975a_nsvt car"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg"		"flashbarrel3"		"Foresight14"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("Kord_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner) com_optic(mgun3))	
}

{"gaz2975a_pk car"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight14"}
		 
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("PKT_CodeX")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner) com_optic(mgun3))	
}

;//Russian Gaz Tigr Variants End

{"ampv"
	("m2a2_sound")
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight5"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
}

{"ampv_m1283"
	("m2a2_sound")
	{on "add_weapon_sound" overload
		("M240_CodeX")
	}
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight3"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(pose_mgun_sherman))	
}

{"ampv_m1283_era"
	("m2a2_sound")
	{on "add_weapon_sound" overload
		("M240_CodeX")
	}
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight3"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(pose_mgun_sherman))	
}

{"ampv_m1283_m2"
	("m2a2_sound")
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight3"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(pose_mgun_sherman))	
}

{"ampv_m1283_m2_era"
	("m2a2_sound")
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight3"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" 1.0 resume}
	}	
	("zpu_params" gunner(gunner) zpu_mgun(mgun) anim(into_hatch_abrams) pose(pose_mgun_sherman))	
}

{"ampv_m1283_mk19"
	("m2a2_sound")
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(pose_mgun_sherman))	
}

{"ampv_m1283_mk19_era"
	("m2a2_sound")
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_abrams) pose(pose_mgun_sherman))	
}

{"ampv_mcv"
	("m2a2_sound")
	{on spawn
		{call "check_speed2"}
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "mortar_work" 1}
					{weapon_work "gun" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "mortar_work" -1}
						{weapon_work "gun" 1}

				   else
				}

		}

	}

}

{"ampv_rws"
	("m2a2_sound")
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight3"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"ampv_cuas tank"
	("m2a2_sound")
	{on spawn
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight3"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}

	}
	{on "add_weapon_sound" 
		("Bradley25mm")
		("ATGMWest")
		("M240_CodeX")
	}
		{on fire "gun2"
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

	("autocannon")

	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}

}


{"kwm_ampv"
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on "add_weapon_sound" overload
	("M2HB_CodeX")
	{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
	}
	("car3_sound")
}

{"matv_open_kord"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on spawn
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/Kord/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("Kord_CodeX")
	}
}

{"matv_open_m2hb"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}

{"matv_open_m240"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/M240/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M240_CodeX")
	}
}

{"matv_open_mk19"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on spawn
		{add_view		"flash_gun_small"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/AGS_Systems/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/AGS_Systems/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("AGS_CodeX")
	}
}

{"matv_m2hb"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}

{"matv_m240"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/M240/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M240_CodeX")
	}
}

{"matv_mk19"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on spawn
		{add_view		"flash_gun_small"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/AGS_Systems/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/AGS_Systems/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("AGS_CodeX")
	}
}

{"kipri1"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on spawn
		{add_view		"flash_gun_small"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/AGS_Systems/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/AGS_Systems/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("AGS_CodeX")
	}
}

{"kipri2"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
}

{"hawkeye_105_mws"
	("car_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
	}
	{on operatable off
		{unlink_trailer}
		{tags add "_abandoned"}			;// check for "leave_unit" / self destruction
		{delay 12 
			{tags remove "_abandoned"}
		}
		{if cannon_state "move"
			{ani_wind "move" end}
		}
	}
	{on "add_weapon_sound" overload
		("Hawkeye_105_MGS")
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 2.0 {ani_play "shell"}
			{delay 0.1 
				{spawn "shell_cannon" "fx_invers" x scale 1.3 {impulse up 0.2 0.3 dir 0.2 0.7 cz 0.2 0.1 forward 3 0.5 com}}
			}
		}
	}
}

{"fennek"
	("car_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on "uprise_anten"	
	       {if not tagged "radar_up" 		
			{tags add "radar_up"}
		{ani_play "close_anten" -0.3}	
		{set "radar_up" 1}
	        }
	}
	{on "lower_anten"	
	       {if not tagged "radar_up" 		
			{tags add "radar_down"}
		{ani_play "close_anten" 0.3}
		{set "radar_up" 0}
	       }
	}
	{on move on	{kill_delay "anten"}			{call "lower_anten"}}
	{on move off	{delay 2 "anten"			{call "uprise_anten"}}}
	{on operatable off	{kill_delay "anten"}			{call "lower_anten"}}
	{on operatable on	{call "uprise_anten"}}
}

{"m777"
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.1 {ani_play "shell"}
			{delay 0.1 
				{spawn "shell_cannon" "fx_invers" x scale 1.3 {impulse up 0.2 0.3 dir 0.2 0.7 cz 0.2 0.1 forward 3 0.5 com}}
			}
		}
	}
}
{"m777a1"
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.1 {ani_play "shell"}
			{delay 0.1 
				{spawn "shell_cannon" "fx_invers" x scale 1.3 {impulse up 0.2 0.3 dir 0.2 0.7 cz 0.2 0.1 forward 3 0.5 com}}
			}
		}
	}
}

{"hawkeye_105_mws_n"
	("car_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
	}
	{on operatable off
		{unlink_trailer}
		{tags add "_abandoned"}			;// check for "leave_unit" / self destruction
		{delay 12 
			{tags remove "_abandoned"}
		}
		{if cannon_state "move"
			{ani_wind "move" end}
		}
	}
	{on "add_weapon_sound" overload
		("Hawkeye_105_MGS")
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 2.0 {ani_play "shell"}
			{delay 0.1 
				{spawn "shell_cannon" "fx_invers" x scale 1.3 {impulse up 0.2 0.3 dir 0.2 0.7 cz 0.2 0.1 forward 3 0.5 com}}
			}
		}
	}
}

;///////////////// BTR Series Begins

{"gaz3937_vodnik_hmg car"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg_dshk"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight5"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		("check_fire")
	}
	{on "add_weapon_sound" overload
		("Kord_CodeX")
		("PKT_CodeX")
		("ATGMEast")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 20
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

{"gaz3937_vodnik_30mm car"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight5"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP_2A42/"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("PKT_CodeX")
	}
}

{"btr90"  
	("btr_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight5"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP_2A42/"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("PKT_CodeX")
	}
}

{"btr90b"
	("btr_sound")
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight5"}
		{add_view		"flash_gun_small"	"flashbarrel3"		"ag30"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/AGS30/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/AGS30/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		("check_fire")
	}
	{on fire "ag30" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("ATGMEast")
		("AGS30_CodeX")
		("PKT_CodeX")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 25
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

{"btr90r"
	("btr_sound")
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight5"}
		{add_view		"flash_gun_small"	"flashbarrel3"		"ag30"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		("check_fire")
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("ATGMEast")
		("PKT_CodeX")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 18
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

{"btr80_rus"  
	("btr_sound")
	{on spawn
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight1"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound			"HMG_Mid"			"weapon/shot/small-arms/s4/d2/KPVT/"}
		{link_sound			"HMG_Far"			"weapon/shot/small-arms/s4/d3/KPVT/"}
	}
	{on fire "gun"
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("KPVT_CodeX")
		("PKT_CodeX")
	}
}


{"btr80_ukr"  
	("btr_sound")
	{on spawn
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight1"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound			"HMG_Mid"			"weapon/shot/small-arms/s4/d2/KPVT/"}
		{link_sound			"HMG_Far"			"weapon/shot/small-arms/s4/d3/KPVT/"}
	}
	{on fire "gun"
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("KPVT_CodeX")
		("PKT_CodeX")
	}
}

{"btr80m_ukr"  
	("btr_sound")
	{on spawn
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight1"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound			"HMG_Mid"			"weapon/shot/small-arms/s4/d2/KPVT/"}
		{link_sound			"HMG_Far"			"weapon/shot/small-arms/s4/d3/KPVT/"}
	}
	{on fire "gun"
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("KPVT_CodeX")
		("PKT_CodeX")
	}
}

{"btr80m_rus"  
	("btr_sound")
	{on spawn
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight1"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight14"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound			"HMG_Mid"			"weapon/shot/small-arms/s4/d2/KPVT/"}
		{link_sound			"HMG_Far"			"weapon/shot/small-arms/s4/d3/KPVT/"}
	}
	{on fire "gun"
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("KPVT_CodeX")
		("PKT_CodeX")
	}
}

{"btr80a_rus"  
	("btr_sound")	
	{on spawn
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}	
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}			
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" 
		{play_sound "mid"}
		{play_sound "far"}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"btr80a_ukr"  
	("btr_sound")

	{on spawn
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}	
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}			
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}		
	}
	{on fire "mgun2" 
		{play_sound "mid"}
		{play_sound "far"}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}



{"btr-82at"  
	("btr_sound")	
	
	{on spawn
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}	
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
	}
	("atgm_single_launcher_novator" weapon(gun2) tail(tail00) foresight(foresight6))	
	{on fire "gun"
		{spawn "gilza_20mm" "gilzi" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}			
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" 
		{play_sound "mid"}
		{play_sound "far"}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"btr80a_ukr"  
	("btr_sound")

	{on spawn
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}	
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}			
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}		
	}
	{on fire "mgun2" 
		{play_sound "mid"}
		{play_sound "far"}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"btr_82a_mod"    
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/btr/btr_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/btr/btr_engine_stop"}
		{link_sound "engine_idle"		"vehicle/engine/btr/btr_idle"}
		{link_sound "engine_full"		"vehicle/engine/btr/btr_high"}
		{link_sound "exhaust"			"vehicle/engine/btr/btr_ext"}
		{link_sound "move"			"vehicle/wheels/armored_car"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight14"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}


{"btr-82a_rus"    
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/btr/btr_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/btr/btr_engine_stop"}
		{link_sound "engine_idle"		"vehicle/engine/btr/btr_idle"}
		{link_sound "engine_full"		"vehicle/engine/btr/btr_high"}
		{link_sound "exhaust"			"vehicle/engine/btr/btr_ext"}
		{link_sound "move"			"vehicle/wheels/armored_car"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

		{link_sound "wheel_ground"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
	}
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight14"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"typhoon_vdv"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}
{"typhoon_ads"
	("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel4"		"Foresight5"}	

		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
			("Kord_CodeX")
	}
	("zpu_params" gunner(gunner) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy))
}
;///////////////// Bradley IFV Start

{"m2a2_ods_bradley_arat tank"
	("m2a2_sound")
	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight5"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{call "check_speed2"}
	}
	{on "add_weapon_sound" overload
		("Bradley25mm")
		("ATGMWest")
		("M240_CodeX")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))

	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "missle_rack" -1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "missle_rack" 1}
						{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

		}



	}
	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}

}


{"m2a2 tank"
	("m2a2_sound")

	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight2"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{call "check_speed2"}

	}
	{on "add_weapon_sound" overload
		("Bradley25mm")
		("ATGMWest")
		("M240_CodeX")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))

	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "misslerack" -1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "misslerack" 1}
						{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

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


{"m2a2_brat tank"
	("m2a2_sound")

	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight2"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{call "check_speed2"}

	}
	{on "add_weapon_sound" overload
		("Bradley25mm")
		("ATGMWest")
		("M240_CodeX")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))

	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "missle_rack" -1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "missle_rack" 1}
						{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

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


{"kraz_fiona_bm3m"
	("car_sound")
	
	{on spawn
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight4"}

		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		
		{view hide "tail00"}
		{view hide "tail01"}
		
		{call "check_speed2"}

	}
	
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))

	
	{on "add_weapon_sound" overload
		("Bradley25mm")
		("ATGMWest")
		("PKT_CodeX")
	}


	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "open" 1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "open" -1}
						{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

		}



	}
	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}

}




{"m2a2_ods_bradley_arat_rus tank"
	("m2a2_sound")
	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight5"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{call "check_speed2"}

	}
	{on "add_weapon_sound" overload
		("Bradley25mm")
		("ATGMWest")
		("M240_CodeX")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))

	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "misslerack" -1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "misslerack" 1}
						{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

		}



	}
	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}

}

{"m2a2_ods_bradley tank"
	("m2a2_sound")
	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight5"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{call "check_speed2"}

	}
	{on "add_weapon_sound" 
		("Bradley25mm")
		("ATGMWest")
		("M240_CodeX")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))

	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "misslerack" -1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "misslerack" 1}
						{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

		}



	}
	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}

}

{"m2a3 tank"
	("m2a2_sound")
	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight2"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{call "check_speed2"}

	}
	{on "add_weapon_sound" overload
		("Bradley25mm")
		("ATGMWest")
		("M240_CodeX")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))

	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "open" 1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "open" -1}
						{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

		}



	}

	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}

}

{"m2a3_brat tank"
	("m2a2_sound")
	{on spawn
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight2"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{call "check_speed2"}

	}
	{on "add_weapon_sound" 
		("Bradley25mm")
		("ATGMWest")
		("M240_CodeX")
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))


	("autocannon")
	("25-50mm_gilza" fxshell(fxshell))

	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "open" 1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "open" -1}
						{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

		}



	}

	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}

}

;/////////////////Bradley IFV End

;/////////////////BMP1 Start

{"bmp1p_rus"
	("bmp_sound")
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP1_73mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP1_73mm/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight2" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		("check_fire")
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_play "open" 1}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 }
	}
	{on "add_weapon_sound" overload
		("BMP73mm_CodeX")
		("ATGMEast")
	}
	("zpu_params" gunner(commander) zpu_mgun(gun2) anim(hm_hatch_cover) pose(seat_commander_hatch))
	
		{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

		}	}
}

{"bmp1p_vsu"
	("bmp_sound")
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP1_73mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP1_73mm/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight2" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		("check_fire")
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_play "open" 1}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 }
	}
	{on "add_weapon_sound" overload
		("BMP73mm_CodeX")
		("ATGMEast")
	}
	("zpu_params" gunner(commander) zpu_mgun(gun2) anim(hm_hatch_cover) pose(seat_commander_hatch))
	
		{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

		}	}
}

{"bmp-1_rus"
	("bmp_sound")
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP1_73mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP1_73mm/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight6" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		("check_fire")
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_play "open" 1}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 }
	}
	{on "add_weapon_sound" overload
		("BMP73mm_CodeX")
		("ATGMEast")
	}
	("zpu_params" gunner(commander) zpu_mgun(gun2) anim(hm_hatch_cover) pose(seat_commander_hatch))
	
		{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

		}	}
}

{"bmp-1_vsu"
	("bmp_sound")
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP1_73mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP1_73mm/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}

	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "gun2"
		{spawn "proj_probe" "foresight6" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		("check_fire")
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_play "open" 1}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 }
	}
	{on "add_weapon_sound" overload
		("BMP73mm_CodeX")
		("ATGMEast")
	}
	("zpu_params" gunner(commander) zpu_mgun(gun2) anim(hm_hatch_cover) pose(seat_commander_hatch))
	
		{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

		}	}
}

;/////////////////BMP1 End
;/////////////////BMP2 Start

{"bmp2_ukr"
	("bmp_sound")
	("atgm_single_launcher_bmp" weapon(gun2) tail(tail00) foresight(foresight6))
		
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight5"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
			{add_view 	"rok_tail"		"tail00"			"foresight6"}		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("PKT_CodeX")
		("ATGMEast")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}


{"bmp-1am"
	("bmp_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight5"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
			{add_view 	"rok_tail"		"tail00"			"foresight6"}		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{spawn "gilza_20mm" "gilzi" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}			
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("PKT_CodeX")
		("ATGMEast")
	}
}

{"bmp2_rus"
	("bmp_sound")
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight5"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
			{add_view 	"rok_tail"		"tail00"			"foresight6"}		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	("atgm_single_launcher_bmp" weapon(gun2) tail(tail00) foresight(foresight6))
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("PKT_CodeX")
		("ATGMEast")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

{"bmp2_rus1"
	("bmp_sound")
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight5"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
			{add_view 	"rok_tail"		"tail00"			"foresight6"}		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	("atgm_single_launcher_bmp" weapon(gun2) tail(tail00) foresight(foresight6))
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("PKT_CodeX")
		("ATGMEast")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

{"bmp2_rus2"
	("bmp_sound")
	{on spawn
		{call "check_speed2"}
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight5"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
			{add_view 	"rok_tail"		"tail00"			"foresight6"}		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	("atgm_single_launcher_bmp" weapon(gun2) tail(tail00) foresight(foresight6))
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("PKT_CodeX")
		("ATGMEast")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

{"bmp_2m"
	("bmp_sound")
	{on spawn
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/AGS30/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/AGS30/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{spawn "gilza_20mm" "box01" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	("custom_sh_multi_launcher_east" weapon(gun2) foresight(foresight2) tail(tailr_) shooter(shooter))
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("ATGMEast")
		("AGS30_CodeX")
		("PKT_CodeX")
	}
}

;/////////////////BMP2 End
;/////////////////BMD Begin

{"btr-d_zu_rus"
	("bmd_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/ZU_23mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/ZU_23mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on "init_gun"
		{add_view "tank_canon_fire_37_47"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_37_47"			"flashbarrel01"	"shooter01"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
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
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelminimum"}
		{call "minimum_terrain_fx"}

		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
	{on fire "mgun1" overload
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel2"}
		{delay 0.2
					{view pause "flashbarrel2"}
		}

	}
	{on fire "mgun2" overload
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel1"}
		{delay 0.2
					{view pause "flashbarrel1"}
		}

	}


}

{"btr_mdm"
	("bmd_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/ZU_23mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/ZU_23mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on "init_gun"
		{add_view "tank_canon_fire_37_47"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_37_47"			"flashbarrel01"	"shooter01"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
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
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelminimum"}
		{call "minimum_terrain_fx"}

		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
	{on fire "mgun1" overload
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel2"}
		{delay 0.2
					{view pause "flashbarrel2"}
		}

	}
	{on fire "mgun2" overload
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel1"}
		{delay 0.2
					{view pause "flashbarrel1"}
		}

	}


}

{"btr-d_rus"
	("bmd_sound")
	{on spawn
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on "init_gun" overload

		{add_view "flash_gun_big"	"flashbarrel2"		"Foresight4"}
		{add_view "flash_gun_big"	"flashbarrel1"		"Foresight3"}
		{call "update_gun"}
	}

	{on fire "mgun1" overload
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel2"}
		{delay 0.2
					{view pause "flashbarrel2"}
		}

	}

	{on fire "mgun2" overload
		{play_sound "mid"}
		{play_sound "far"}
		{view start "flashbarrel1"}
		{delay 0.2
					{view pause "flashbarrel1"}
		}

	}




}

{"bmd2_rus"
	("bmd_sound")
	;("autocannon")
	("25-50mm_gilza" fxshell(fx_invers1))
	{on spawn
		{call "suspension_down"}
		{tags add "il76_para"}
		;{tags add "para_board"}
		{call "check_speed2"}	
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.05 {call "spawn_shell"}}
		("cw_check_shooting" weap_id(gun))
	}
	{on fire "gun2" overload
		{spawn "proj_probe" "foresight" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		("check_fire")
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("PKT_CodeX")
		("ATGMEast")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

		}
}		

	{on "gunner2_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(gunner2) zpu_mgun(gun2) anim(hm_hatch_cover) pose(seat_commander_hatch))

}

{"bmd2_ukr"
	("bmd_sound")
	;("autocannon")
	("25-50mm_gilza" fxshell(fx_invers1))
	{on spawn
		{call "suspension_down"}
		{tags add "il76_para"}
		;{tags add "para_board"}
		{call "check_speed2"}	
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight14"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.05 {call "spawn_shell"}}
		("cw_check_shooting" weap_id(gun))
	}
	{on fire "gun2" overload
		{spawn "proj_probe" "foresight" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		("check_fire")
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("PKT_CodeX")
		("ATGMEast")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

		}
}		

	{on "gunner2_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(gunner2) zpu_mgun(gun2) anim(hm_hatch_cover) pose(seat_commander_hatch))

}

;/////////////////BMD End
{"mtlb_vsu"    ;
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight3"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("PKT_CodeX")
	}
	("mtlb_sound")
}

{"mtlb_new_vsu"    ;
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight3"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("PKT_CodeX")
	}
	("mtlb_sound")
}

{"mtlb_rus"    ;
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight3"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("PKT_CodeX")
	}
	("mtlb_sound")
}

{"mtlb_new_rus"    ;
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight3"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("PKT_CodeX")
	}
	("mtlb_sound")
}

{"mtlb_6mb"    ;
	("mtlb_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"mtlb_mt12_rus"    ;
	("mtlb_sound")
	{on spawn
		{add_view		"tank_canon_fire_85_93_sides"	"flashbarrel3"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s3/d2/Shared/Cannon_75to76mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s3/d3/Shared/Cannon_75to76mm_HV/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{call "spawn_shell"}
		{view start "flashbarrel3"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("RUS_100HV_MT12")
	}
}


{"mtlb_mt12_ukr"    ;
	("mtlb_sound")
	{on spawn
		{add_view		"tank_canon_fire_85_93_sides"	"flashbarrel3"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s3/d2/Shared/Cannon_75to76mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s3/d3/Shared/Cannon_75to76mm_HV/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{call "spawn_shell"}
		{view start "flashbarrel3"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("RUS_100HV_MT12")
	}
}

{"mtlb_57s60 tank"
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s2/d2/Shared/Cannon_50to57mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s2/d3/Shared/Cannon_50to57mm_HV/"}
	}
	{on fire "gun"
		{ani_play "2b9_fire"}
		{delay 0.01
				{spawn "shell_cannon_auto" "fx_invers" x scale 0.5
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}{delay 180 0.5{hide 3}}
			}
		}
		{play_sound "shell_drop"}
	}
	{on "add_weapon_sound" overload
		("57mm_2A90_CodeX")
	}
}

;////MTLB END
;////BMP3 Begin

{"derivatsiya-2s38"
	("bmp_sound")
	{on spawn	
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s2/d2/Shared/Cannon_50to57mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s2/d3/Shared/Cannon_50to57mm_HV/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fxshell" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun1" 
		{play_sound "mid"}
		{play_sound "far"}
	}
}

{"BMP3_ukr tank"
	("bmp_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
	}
	{on fire "30mmgun" overload
		{ani_play "fire2"}
		{spawn "gilza_20mm" "fx_inversnanopex" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("100mm2A70_CodeX")
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"BMP3_rus tank"
	("bmp_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight5"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
	}
	{on fire "30mmgun" overload
		{ani_play "fire2"}
		{spawn "gilza_20mm" "fx_inversnanopex" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("100mm2A70_CodeX")
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"BMP-3_armor tank"
	("bmp_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		{ani_play "fire"}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
	}
	{on fire "gun2" overload
		{ani_play "fire1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fx_inversnanopex" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("100mm2A70_CodeX")
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"2s25m tank"
	("bmd_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("PKT_CodeX")
	}
}

{"bmd4 tank"
	("bmd_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight5"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
	}
	{on fire "30mmgun"
		{spawn "gilza_20mm" "fx_inversnanopex" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on "add_weapon_sound" overload
		("100mm2A70_CodeX")
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"zbd04_a tank"
	("bmd_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		{delay 1.0
			{ani_play "shell_eject"}
			{delay 0.5
				{spawn "poddon_cannon" "fx_invers" x scale 1.0
					{impulse forward 6 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
				}
			}
			{delay 1
				{ani_play "shell_eject" -1}
			}
		}		
	}
	{on fire "30mmgun"
		{spawn "gilza_20mm" "fx_inversnanopex" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on "add_weapon_sound" overload
		("100mm2A70_CodeX")
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"bmd_4m tank"
	("bmd_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight5"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}

	}
	{on fire "gun"
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
	}
	{on fire "30mmgun"
		{spawn "gilza_20mm" "fx_invers1" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("100mm2A70_CodeX")
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}


{"zbd04_a_gy tank"
	("bmd_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{if terrain_fx "ice"
				{tex_mod "desert"}
			else terrain_fx "snow"
				{tex_mod "desert"}
			else
				{tex_mod "desert"}
		}		
	}
	{on fire "gun"
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
		{delay 1.0
			{ani_play "shell_eject"}
			{delay 0.5
				{spawn "poddon_cannon" "fx_invers" x scale 1.0
					{impulse forward 6 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
				}
			}
			{delay 1
				{ani_play "shell_eject" -1}
			}
		}		
	}
	{on fire "30mmgun"
		{spawn "gilza_20mm" "fx_inversnanopex" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on "add_weapon_sound" overload
		("100mm2A70_CodeX")
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}

{"bmd_4m tank"
	("bmd_sound")
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight5"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BTR_2A72/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BTR_2A72/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "Atgm_Mid"}
		{play_sound "Atgm_Far"}
	}
	{on fire "30mmgun"
		{spawn "gilza_20mm" "fx_invers1" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("100mm2A70_CodeX")
		("30mm2A72_CodeX")
		("PKT_CodeX")
	}
}



;//////BMP/BMD4 END

{"btr3e"
	("btr_sound")
	{on spawn
		{call "check_speed2"}	
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight3"}		
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}	
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/30mm_Bushmaster/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/30mm_Bushmaster/"}
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/AGS30/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/AGS30/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}		
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("Bushmaster30mm_CodeX")
		("AGS_CodeX")
		("PKT_CodeX")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 25
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
	
}

{"btr4e"
	("btr_sound")
	{on spawn
		{add_view 	"rok_tail"		"tail_00"			"tail_00"}
		{add_view 	"rok_tail"		"tail_01"			"tail_01"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}		
		{view hide "tail_00"}
		{view hide "tail_01"}	
		{call "check_speed2"}
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}	
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/30mm_Bushmaster/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/30mm_Bushmaster/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/AGS30/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/AGS30/"}
		 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}		
	}
	("atgm_multi_launcher"	weapon(gun2) tail(tail) foresight(foresight6))
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("ATGMEast")
		("AGS30_CodeX")
		("PKT_CodeX")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 25
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

;////Nato Begin
{"wiesel1_gun"
	("wiesel_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/USA/Bradley_25mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/USA/Bradley_25mm/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("Bradley25mm")
	}	
}

{"marder_1a3"
	("m2a2_sound")
	{on spawn
		{call "check_speed2"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/USA/Bradley_25mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/USA/Bradley_25mm/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fx_invers" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	("atgm_single_launcher_west"	weapon(gun2) tail(rocket00) foresight(foresight2))
	{on "add_weapon_sound" overload
		("Bradley25mm")
		("ATGMWest")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

{"marder_1a5_mells"
	("m2a2_sound")
	{on spawn
		{call "check_speed2"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/USA/Bradley_25mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/USA/Bradley_25mm/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fx_invers" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	("atgm_single_launcher_west"	weapon(gun2) tail(rocket00) foresight(foresight2))
	{on "add_weapon_sound" overload
		("Bradley25mm")
		("ATGMWest")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

{"marder_1a5"
	("m2a2_sound")
	{on spawn
		{call "check_speed2"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/USA/Bradley_25mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/USA/Bradley_25mm/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fx_invers" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	("atgm_single_launcher_west"	weapon(gun2) tail(rocket00) foresight(foresight2))
	{on "add_weapon_sound" overload
		("Bradley25mm")
		("ATGMWest")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

{"amx10rc"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"tank_canon_fire_100_105_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/M240/"}	;placeholder
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/M240/"}	;placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Nato_100HV_MGS")
		("M240_CodeX")
	}
}

{"rosomak"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight5"}
		{add_view		"tank_canon_fire_37_40_auto_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}	;placeholder
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}	;placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/30mm_Bushmaster/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/30mm_Bushmaster/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Bushmaster30mm_CodeX")
		("PKT_CodeX")
	}
}

{"lav25_n tank"
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel2"		"Foresight14"}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"tank_canon_fire_37_40_auto_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"				"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"					"weapon/shot/cannon/s1/d2/USA/Bradley_25mm/"}
		{link_sound		"Cannon_Far"					"weapon/shot/cannon/s1/d3/USA/Bradley_25mm/"}
		{link_sound		"MG_Mid"					"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"					"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
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
	{on fire "gun"
		{ani_play "fire"}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
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
	{on "add_weapon_sound" overload
		("Bushmaster30mm_CodeX")
		("M240_CodeX")
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"boxer_mgs"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"tank_canon_fire_100_105_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"MG_Mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Nato_100HV_MGS")
		("M240_CodeX")
	}
}

{"m1128"
	{on spawn		
		{add_view "flash_gun_big" "flashbarrel3" "Foresight3"}	
		{add_view "flash_gun_hmg_m2hb" "flashbarrel4" "Foresight4"}
		{add_view "zenit_gilz"		"shells_we"	"fxshell"}
		{link_sound		"mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
	}
	{on "init_gun"
		{add_view 	"smoke_ejector" 	"zenite_smoke" 		"foresight1"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}	
	("zpu_params" gunner(gunner2) zpu_mgun(mgun1) anim(into_hatch_m1128) pose(seat_gunner_stand))
	("apc_sound")	
	("105mm_gun_with_cm")	
	("90-105mm_gilza_back")
}

;///////

{"puma"
	("leopard2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight4"}
		{add_view		"tank_canon_fire_50_57_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound			"MG_Mid"			"weapon/shot/smallarms/s3/d2/GER/MG34/"}
		{link_sound			"MG_Far"			"weapon/shot/smallarms/s3/d3/GER/MG34/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/40mm_Nato_Autocannon/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/40mm_Nato_Autocannon/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "box01" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Nato40mmAuto_CodeX")
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

{"puma_vjtf"
	("leopard2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight4"}
		{add_view		"tank_canon_fire_50_57_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound			"MG_Mid"			"weapon/shot/smallarms/s3/d2/GER/MG34/"}
		{link_sound			"MG_Far"			"weapon/shot/smallarms/s3/d3/GER/MG34/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/40mm_Nato_Autocannon/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/40mm_Nato_Autocannon/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "box01" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	("atgm_multi_launcher_west"	weapon(gun2) tail(tail) foresight(foresight2))		
	{on "add_weapon_sound" overload
		("Nato40mmAuto_CodeX")
		("ATGMWest")
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

{"cv_90_mk_iv"
	("ifv_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight4"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/30mm_Bushmaster/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/30mm_Bushmaster/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "box01" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	("atgm_multi_launcher_west"	weapon(gun2) tail(tail) foresight(foresight2))		
	{on "add_weapon_sound" overload
		("Bushmaster30mm_CodeX")
		("M240_CodeX")
		("ATGMWest")
	}
}

{"warrior tank"
	("m2a2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/30mm_Bushmaster/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/30mm_Bushmaster/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "box01" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	("atgm_single_launcher_west"	weapon(gun2) tail(shooter00) foresight(foresight6))		
	{on "add_weapon_sound" overload
		("Bushmaster30mm_CodeX")
		("M240_CodeX")
		("ATGMWest")
	}
}

{"vilkas"
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{link_sound		"MG_Mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/30mm_Bushmaster/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/30mm_Bushmaster/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fx_inver" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	("atgm_multi_launcher_west"	weapon(gun2) tail(tail) foresight(foresight2))			
	{on "add_weapon_sound" overload
		("Bushmaster30mm_CodeX")
		("M240_CodeX")
		("ATGMWest")
	}
}

{"freccia"
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{link_sound		"MG_Mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/30mm_Bushmaster/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/30mm_Bushmaster/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "box01" x scale 0.05 {impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	("custom_multi_launcher_west"	weapon(gun2) tail(tail) shooter(shooter) missile(spike-lr))			
	{on "add_weapon_sound" overload
		("Bushmaster30mm_CodeX")
		("M240_CodeX")
		("ATGMWest")
	}
}

{"fv432_mk2"
	("m2a2_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight3"}
		 
		{link_sound			"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound			"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		 
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}
	{on "update_hatch_on_spawn"
		("update_hatch" wind(true) place(gunner))
	}
	("update_hatch_event" event(operatable on) place(gunner))
	("update_hatch_event" event(operatable off) place(gunner))
	("update_hatch_event" event(crew in) place(gunner))
	("update_hatch_event" event(crew out) place(gunner))
	("commonzpu_params" gunner(gunner) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_m7_mgunner))
}

{"cv_9030"
	("ifv_sound")
	{on spawn
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/30mm_Bushmaster/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/30mm_Bushmaster/"}
	}
	{on fire "gun"
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}	
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		("cw_check_shooting" weap_id(gun))
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}		
	}
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("Bushmaster30mm_CodeX")
		("M240_CodeX")
	}
}

{"cv_9035"
	("ifv_sound")
	{on spawn
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/30mm_Bushmaster/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/30mm_Bushmaster/"}
	}
	{on fire "gun"
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}	
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		("cw_check_shooting" weap_id(gun))
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}		
	}
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("Bushmaster30mm_CodeX")
		("M240_CodeX")
	}
}

{"strf9040c"
	("ifv_sound")

	{on spawn
		{add_view		"tank_canon_fire_37_47"		"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight3"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/40mm_Nato_Autocannon/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/40mm_Nato_Autocannon/"}
	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{ani_play "fire"}
		{delay 0.01
				{spawn "gilza_20mm" "fxshell_canon" x scale 1.5
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}{delay 180 0.5{hide 3}}
			}
		}		
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.05 {call "spawn_shell"}}
		("cw_check_shooting" weap_id(gun))
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}	
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("Nato40mmAuto_CodeX")
		("PKT_CodeX")
	}
}

{"ajax"
	("ifv_sound")
	{on spawn
		{add_view		"tank_canon_fire_37_47"		"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight3"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/40mm_Nato_Autocannon/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/40mm_Nato_Autocannon/"}
	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{delay 0.01
				{spawn "gilza_20mm" "fxshell" x scale 1.5
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}{delay 180 0.5{hide 3}}
			}
		}		
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.05 {call "spawn_shell"}}
		("cw_check_shooting" weap_id(gun))
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}	
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("Nato40mmAuto_CodeX")
		("PKT_CodeX")
	}
}



{"strf9040c_n"
	("ifv_sound")
	("25-50mm_gilza" fxshell(fxshell_canon))
	{on spawn
		{add_view		"tank_canon_fire_37_47"		"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight3"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/40mm_Nato_Autocannon/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/40mm_Nato_Autocannon/"}
	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.05 {call "spawn_shell"}}
		("cw_check_shooting" weap_id(gun))
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}	
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("Nato40mmAuto_CodeX")
		("PKT_CodeX")
	}
}

{"strf9040c_rus"
	("ifv_sound")
	("25-50mm_gilza" fxshell(fxshell_canon))
	{on spawn
		{add_view		"tank_canon_fire_37_47"		"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight3"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/40mm_Nato_Autocannon/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/40mm_Nato_Autocannon/"}
	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.05 {call "spawn_shell"}}
		("cw_check_shooting" weap_id(gun))
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}	
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("Nato40mmAuto_CodeX")
		("PKT_CodeX")
	}
}

{"land_rover_atgm"
("car_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	("atgm_multi_launcher_west"	weapon(gun2) tail(tail01) foresight(foresight1))
	{on "add_weapon_sound" overload
		("ATGMWest")
		("M240_CodeX")
	}

	("commonzpu_params" gunner(gunner) zpu_mgun(gun2) anim(into_hatch_btr90) pose(seat_m7_mgunner))
}

{"land_rover_mgun"
("car_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_hmg_m2hb"		"flashbarrel14"		"Foresight14"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel14"}
		{play_sound "tails"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel14"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
		("M240_CodeX")
	}

	("commonzpu_params" gunner(gunner) zpu_mgun(gun2) anim(into_hatch_btr90) pose(seat_m7_mgunner))
}

{"mwwik_jackal2_gmg"
("car_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_small"		"flashbarrel3"		"Foresight3"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/AGS_Systems/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/AGS_Systems/"} ; Placeholder
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("AGS_CodeX")
		("M240_CodeX")
	}

	("commonzpu_params" gunner(gunner) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_m7_mgunner))
}

{"mwwik_jackal2_mgun"
("car_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
		("M240_CodeX")
	}

	("commonzpu_params" gunner(gunner) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_m7_mgunner))
}

{"jackal2"
("car_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
		("M240_CodeX")
	}

	("commonzpu_params" gunner(gunner) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_m7_mgunner))
}

{"man_sx44"
	("turck_sound")
}

{"atf_dingo_mg3"
("car_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight14"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("MG42")
	}

}

{"atf_dingo_m2hb"
("car_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"		"flashbarrel5"		"Foresight14"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		 
		{play_sound "tails"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on "add_weapon_sound" overload
		("M2HB_CodeX")
	}

}

{"aavp7"
		{on spawn
			{add_view	 	"flash_gun_big"	"flashbarrel4"		"Foresight4"}
			{add_view	 	"flash_gun_big"	"flashbarrel5"		"Foresight1"}			
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
			{on fire "mgun" overload
				{view start "flashbarrel5"}
				{play_sound "action_recoil_HMG"}
				{play_sound "HMG_Mid"}
				{play_sound "HMG_Far"}
				("cw_check_shooting" weap_id(mgun2))
				{delay 0.42 {view pause "flashbarrel5"}}
			}			
}

{"lav-atws"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/lav25/ve_large_accelerate"}
		{link_sound "engine_stop"		"vehicle/engine/lav25/ve_large_shutdown"}
		{link_sound "engine_idle"		"vehicle/engine/lav25/A0059_PLA_car_idle"}
		{link_sound "engine_full"		"vehicle/engine/lav25/ve_large_drive_wheel"}
		{link_sound "exhaust"			"vehicle/engine/lav25/ve_large_accelerate"}
		{link_sound "move"				"vehicle/engine/lav25/ve_large_drive_wheel"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	("atgm_multi_launcher_west"	weapon(gun) tail(tail) foresight(foresight1))
}

{"aaleo_n tank"
	("leopard1_sound")
	{on "event_no_crew"
		{ani_stop "radar"}
	}
	{on "event_with_crew"
		{ani_play "radar" loop resume}
	}
	{on "init_gun" ;overload
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/40mm_Nato_Autocannon/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/40mm_Nato_Autocannon/"}
		{add_view "tank_canon_fire_50_57_sides"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57_sides"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{call "update_gun"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
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

{"aaleo_ukr tank"
	("leopard1_sound")
	{on "event_no_crew"
		{ani_stop "radar"}
	}
	{on "event_with_crew"
		{ani_play "radar" loop resume}
	}
	{on "init_gun" ;overload
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/40mm_Nato_Autocannon/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/40mm_Nato_Autocannon/"}
		{add_view "tank_canon_fire_50_57_sides"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57_sides"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{call "update_gun"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
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

;;;/// Nato MBT Begin 

{"challenger2"
	("challenger2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun_turret" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M240_CodeX")
	}
}

{"challenger2_n"
	("challenger2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun_turret" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M240_CodeX")
	}
}

{"challenger2_tes"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/cg2/cg2_start"}
		{link_sound "engine_stop"		"vehicle/engine/cg2/cg2_stop"}
		{link_sound "engine_idle"		"vehicle/engine/cg2/cg2_idle"}
		{link_sound "engine_full"		"vehicle/engine/cg2/cg2_high"}
		{link_sound "exhaust"			"vehicle/engine/cg2/cg2_ext"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

	}
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun1" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M240_CodeX")
	}
}

{"challenger2f(ukr)"
	("challenger2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M240_CodeX")
	}

	{on "commander_hatch_open" overload
		{ani_wind "open" end}

	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}

	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"leopord_2a4"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "blow_panels1"

			{tear "piece_medium_steel" bone "part2" copy {impulse up 5 rnd_dir 2}}
			{view hide "part2"}

	}
	{on "%panels" overload
			;{view start "blow_burnout1"}
			{delay 1.4 0.4	{burn volume "120mm" fx "cooking_high_2" time 10 fake}}
			{delay 3 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 10 fake}}
			{delay 5 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 15 fake}}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"leopord_2a4_ger"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "blow_panels1"

			{tear "piece_medium_steel" bone "part2" copy {impulse up 5 rnd_dir 2}}
			{view hide "part2"}

	}
	{on "%panels" overload
			;{view start "blow_burnout1"}
			{delay 1.4 0.4	{burn volume "120mm" fx "cooking_high_2" time 10 fake}}
			{delay 3 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 10 fake}}
			{delay 5 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 15 fake}}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"leopard_2_pl"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight14"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "blow_panels1"

			{tear "piece_medium_steel" bone "part2" copy {impulse up 5 rnd_dir 2}}
			{view hide "part2"}

	}
	{on "%panels" overload
			;{view start "blow_burnout1"}
			{delay 1.4 0.4	{burn volume "120mm" fx "cooking_high_2" time 10 fake}}
			{delay 3 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 10 fake}}
			{delay 5 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 15 fake}}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"leopard_2a4_era"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "blow_panels1"

			{tear "piece_medium_steel" bone "part2" copy {impulse up 5 rnd_dir 2}}
			{view hide "part2"}

	}
	{on "%panels" overload
			;{view start "blow_burnout1"}
			{delay 1.4 0.4	{burn volume "120mm" fx "cooking_high_2" time 10 fake}}
			{delay 3 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 10 fake}}
			{delay 5 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 15 fake}}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"leopord_2a4m"
	("leopard2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}

}

{"leopord_2a6"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "blow_panels1"

			{tear "piece_medium_steel" bone "part2" copy {impulse up 5 rnd_dir 2}}
			{view hide "part2"}

	}
	{on "%panels" overload
			;{view start "blow_burnout1"}
			{delay 1.4 0.4	{burn volume "120mm" fx "cooking_high_2" time 10 fake}}
			{delay 3 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 10 fake}}
			{delay 5 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 15 fake}}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}
}

{"leopord_2a6_n"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "blow_panels1"

			{tear "piece_medium_steel" bone "part2" copy {impulse up 5 rnd_dir 2}}
			{view hide "part2"}

	}
	{on "%panels" overload
			;{view start "blow_burnout1"}
			{delay 1.4 0.4	{burn volume "120mm" fx "cooking_high_2" time 10 fake}}
			{delay 3 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 10 fake}}
			{delay 5 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 15 fake}}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"leopard-2a5"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "blow_panels1"

			{tear "piece_medium_steel" bone "part2" copy {impulse up 5 rnd_dir 2}}
			{view hide "part2"}

	}
	{on "%panels" overload
			;{view start "blow_burnout1"}
			{delay 1.4 0.4	{burn volume "120mm" fx "cooking_high_2" time 10 fake}}
			{delay 3 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 10 fake}}
			{delay 5 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 15 fake}}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"leopard2a6"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "blow_panels1"

			{tear "piece_medium_steel" bone "part2" copy {impulse up 5 rnd_dir 2}}
			{view hide "part2"}

	}
	{on "%panels" overload
			;{view start "blow_burnout1"}
			{delay 1.4 0.4	{burn volume "120mm" fx "cooking_high_2" time 10 fake}}
			{delay 3 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 10 fake}}
			{delay 5 1	{burn volume "120mm" fx "cooking_hatch_smoke" time 15 fake}}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}

	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"leopard_2a7+"
	("leopard2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight14"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("MG42")
	}
}

{"strv_122"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG34/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG34/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}
}

{"strv_122_era"
	("leopard2_sound")
	{on spawn
		{link_sound "burnup_ammo1" 			"detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" 			"fire/loops/big"}
		{link_sound "hatch_fire2" 			"fire/fire_hatch"}
		{ani_play "panorama" callback}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG34/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG34/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}
}

{"leopard_1a5_kontakt-1_era"    ;
	("leopard1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG34/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG34/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG34")
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"leopard_1a5_ukr"
	("leopard1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG34/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG34/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}
}

{"leopard_1a5_n"
	("leopard1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG34/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG34/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}
}

{"leopard_c2_mexas"
	("leopard1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M240_CodeX")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m1a1"
	("m1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	
}

{"m1a1_n"
	("m1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	
}

{"m1a1_sa"
	("m1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight4"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	("doublezpu_params" gunner(commander) zpu_mgun(mgun2) anim(into_hatch_abrams) pose(seat_gunner_stand) hatch_anim(open_commander)
			    secgunner(charger) seczpu_mgun(mgun) secanim(into_hatch_abrams) secpose(seat_gunner_stand) sechatch_anim(open_charger))				
}

{"m1a2_sep_armor"
	("m1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel6"		"Foresight6"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun3" overload
		{view start "flashbarrel6"}
		{play_sound "tails"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel6"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	
}

{"m1a2_sep_tusk3"
	("m1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel6"		"Foresight6"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel4"		"Foresight4"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun3" overload
		{view start "flashbarrel6"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel6"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	
}

{"m1a2-abrams"
	("m1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	
}

{"m1a2_sepv1"
	("m1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	
}

{"m1a2_sepv2"
	("m1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	
}

{"m1a2-abrams"
	("m1_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	
}

{"k2_batch_i"
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
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk1"}
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk2"}
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk3"}

	}  
	("leopard2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel2"		"Foresight2"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight3"}
		{link_sound "burnup_ammo1" "detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" "fire/loops/big"}
		{link_sound "hatch_fire2" "fire/fire_hatch"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel2"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	("commonzpu_params" gunner(commander) zpu_mgun(mgun1) anim(into_hatch_abrams) pose(M1a1_mgun1))		
     	("zpu_one_hatch" gunner(commander) hatch_anim(open))	

}


{"k2_batch_i_era"  
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
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk1"}
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk2"}
			{add_view "cooking_high_2" "blow_burnout2" "FXfire_bk3"}

	}  
	("leopard2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel2"		"Foresight2"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel3"		"Foresight3"}
		{link_sound "burnup_ammo1" "detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" "fire/loops/big"}
		{link_sound "hatch_fire2" "fire/fire_hatch"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel2"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
	("commonzpu_params" gunner(commander) zpu_mgun(mgun1) anim(into_hatch_abrams) pose(M1a1_mgun1))		
     	("zpu_one_hatch" gunner(commander) hatch_anim(open))	

}

{"leclerc"  
	("leclerc_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
	}
	
}

{"leclerc_sxxi"  
	("leclerc_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel4"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
	}
	
}

{"leclerc_azur"  
	("leclerc_sound")
	{on spawn
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight4"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
	}
	
}

{"c1_ariete_pso tank"

	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/c1/c1_start"}
		{link_sound "engine_stop"		"vehicle/engine/c1/c1_stop"}
		{link_sound "engine_idle"		"vehicle/engine/c1/c1_idle"}
		{link_sound "engine_full"		"vehicle/engine/c1/c1_high"}
		{link_sound "exhaust"			"vehicle/engine/leo1/leo1_ext"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_big"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/MG42/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("MG42")
	}
	
}

;/////T-64-T-90 Series

{"t-55a_mangal tank"
	("t55_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"ztz88a tank"
	("ztz88_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" 
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" 
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"t-55a_mangal1 tank"
	("t55_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"is3"
	("is_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
	}
}

{"t_55m_fin tank"
	("t55_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight4"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"t_62_rus tank"
	("t55_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"t62m1_ukr tank"
	("t55_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight4"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
}


{"t-62_rus tank"
	("t55_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight4"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t62m1_rus1 tank"
	("t55_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight4"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel3"		"Foresight3"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t72amt_mod2017 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy))
}


{"t72amt_mod2022 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy))
}

{"otomatic tank"
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s3/d2/Shared/Cannon_75to76mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s3/d3/Shared/Cannon_75to76mm_HV/"}	
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/of40/of40_start"}
		{link_sound "engine_stop"		"vehicle/engine/of40/of40_stop"}
		{link_sound "engine_idle"		"vehicle/engine/of40/of40_idle"}
		{link_sound "engine_full"		"vehicle/engine/of40/of40_high"}
		{link_sound "exhaust"			"vehicle/engine/leo1/leo1_ext"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "event_no_crew"
		{ani_stop "radar"}
	}
	{on "event_with_crew"
		{ani_play "radar" loop resume}
	}
{on fire "gun"
	{play_sound "action_recoil_Cannon"}
	{play_sound "Cannon_Mid"}
	{play_sound "Cannon_Far"}
	{spawn "proj_probe" "Foresight1" x}{spawn "dust_shot_big_3" "basis"}{spawn "tank_canon_fire_large" "Foresight1" x}{spawn "spbe_d_fire" "Foresight1" x}{view start "flashbarrel_gun"}
	{view start "smoke_add"}
	{delay 0.16 "shell_off"	{view start "zenite_smoke"}{view pause "smoke_add"}{view pause "flashbarrel_gun"}
	{delay 0.2 
	{spawn "shell_cannon_auto" "fx_invers" x scale 0.9 {impulse up 0 dir 0 0 cy 0 0 forward 6 0.5 com}{delay 10 0.5{hide 3}}
	{add_view "smoke_zenit" "smoke_shell" "fx_shellsmoke"}{view start "smoke_shell"}{delay_effect 5 1 "stop"}}}
	{delay 5 {view pause "zenite_smoke"}}}
	{delay 0.12 {view start "smoke00"}{delay 2 1 {view pause "smoke00"}}}
	{delay 0.12 {view start "smoke000"}{delay 6 1 {view pause "smoke000"}}}
	{delay 0.12 {view start "smokeA"}{delay 2 1 {view pause "smokeA"}}}

}
}

{"t_64_bv-turtletank"    
	("t64_sound")
	{on spawn
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"wheel_l"}
		{add_view "dustrun_sand_big"	"wheel_work_dust2"	"wheel_r"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on move on
		
		{view start "wheel_work_dust"}
		{view start "wheel_work_dust2"}
		
	}
	{on move off
		
		{view pause "wheel_work_dust"}
		{view pause "wheel_work_dust2"}
		
	}	
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("PKT_CodeX")
	}
}

{"t_64_bv-turtletank_ukr"    
	("t64_sound")
	{on spawn
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"wheel_l"}
		{add_view "dustrun_sand_big"	"wheel_work_dust2"	"wheel_r"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}
	{on move on
		
		{view start "wheel_work_dust"}
		{view start "wheel_work_dust2"}
		
	}
	{on move off
		
		{view pause "wheel_work_dust"}
		{view pause "wheel_work_dust2"}
		
	}	
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("PKT_CodeX")
	}
}

{"t84_120_yatagan"    
	("t64_sound")
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("PKT_CodeX")
		("M2HB_CodeX")
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

{"t84_oplot_m"    
	("t64_sound")
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("PKT_CodeX")
		("M2HB_CodeX")
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



{"t-64bv_ukr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t64/t64_start"}
		{link_sound "engine_stop"		"vehicle/engine/t64/t64_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t64/t64_idle"}
		{link_sound "engine_full"		"vehicle/engine/t64/t64_high"}
		{link_sound "exhaust"		"vehicle/engine/t64/t64_ext"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrelzenite2"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("Kord_CodeX")
		("PKT_CodeX")
	}
	{on ik begin "mgun_rot"				;// basis bone rotates
		 {tags add "human_in_use"}
		 {call "update_cw_panorama"}
	}
	{on ik end "mgun_rot"					;// basis stops rotation

		{delay 5 {tags remove "human_in_use"}
			 {call "update_cw_panorama"}

		}
	}

}

{"t-64bv_rus tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t64/t64_start"}
		{link_sound "engine_stop"		"vehicle/engine/t64/t64_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t64/t64_idle"}
		{link_sound "engine_full"		"vehicle/engine/t64/t64_high"}
		{link_sound "exhaust"		"vehicle/engine/t64/t64_ext"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrelzenite2"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("Kord_CodeX")
		("PKT_CodeX")
	}
	{on ik begin "mgun_rot"				;// basis bone rotates
		 {tags add "human_in_use"}
		 {call "update_cw_panorama"}
	}
	{on ik end "mgun_rot"					;// basis stops rotation

		{delay 5 {tags remove "human_in_use"}
			 {call "update_cw_panorama"}

		}
	}

}

{"t64bv2017 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t64/t64_start"}
		{link_sound "engine_stop"		"vehicle/engine/t64/t64_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t64/t64_idle"}
		{link_sound "engine_full"		"vehicle/engine/t64/t64_high"}
		{link_sound "exhaust"		"vehicle/engine/t64/t64_ext"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrelzenite2"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("Kord_CodeX")
		("PKT_CodeX")
	}
	{on ik begin "mgun_rot"				;// basis bone rotates
		 {tags add "human_in_use"}
		 {call "update_cw_panorama"}
	}
	{on ik end "mgun_rot"					;// basis stops rotation

		{delay 5 {tags remove "human_in_use"}
			 {call "update_cw_panorama"}

		}
	}
}

{"t64bv2022 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t64/t64_start"}
		{link_sound "engine_stop"		"vehicle/engine/t64/t64_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t64/t64_idle"}
		{link_sound "engine_full"		"vehicle/engine/t64/t64_high"}
		{link_sound "exhaust"		"vehicle/engine/t64/t64_ext"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrelzenite2"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("Kord_CodeX")
		("PKT_CodeX")
	}
	{on ik begin "mgun_rot"				;// basis bone rotates
		 {tags add "human_in_use"}
		 {call "update_cw_panorama"}
	}
	{on ik end "mgun_rot"					;// basis stops rotation

		{delay 5 {tags remove "human_in_use"}
			 {call "update_cw_panorama"}

		}
	}
}

{"t64bv2024 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t64/t64_start"}
		{link_sound "engine_stop"		"vehicle/engine/t64/t64_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t64/t64_idle"}
		{link_sound "engine_full"		"vehicle/engine/t64/t64_high"}
		{link_sound "exhaust"		"vehicle/engine/t64/t64_ext"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrelzenite2"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
		{view start "flashbarrel3"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("Kord_CodeX")
		("PKT_CodeX")
	}
	{on ik begin "mgun_rot"				;// basis bone rotates
		 {tags add "human_in_use"}
		 {call "update_cw_panorama"}
	}
	{on ik end "mgun_rot"					;// basis stops rotation

		{delay 5 {tags remove "human_in_use"}
			 {call "update_cw_panorama"}

		}
	}
}

{"t80uk tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{weapon_work "mgun3"  0}
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}

	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("Kord_CodeX")
		("PKT_CodeX")
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner) com_optic(mgun3))

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

{"centauro_105_ukr"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight4"}
		{add_view		"tank_canon_fire_100_105_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"MG_Mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Nato_100HV_MGS")
		("M240_CodeX")
	}
}

{"centauro_105_n"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight4"}
		{add_view		"tank_canon_fire_100_105_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"MG_Mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Nato_100HV_MGS")
		("M240_CodeX")
	}
}


{"centauro_rgo"  
	("apc_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"		"flashbarrel4"		"Foresight4"}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight5"}		
		{add_view		"tank_canon_fire_100_105_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"MG_Mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound		"MG_Far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_85to100mm_HV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_85to100mm_HV/"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}	
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}	
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "add_weapon_sound" overload
		("Nato_100HV_MGS")
		("M240_CodeX")
	}
}


{"t-80ue-1 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{weapon_work "mgun3"  0}
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}

}


{"t80u_ukr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{weapon_work "mgun3"  0}
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}

}


{"t80u_rus tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{weapon_work "mgun3"  0}
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}

}

{"t80b1 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80b_mgunner))

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


{"t80bv_rus tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelmaximum"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80b_mgunner))

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

{"t80bv_2023 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelmaximum"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"t80bv_ukr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelmaximum"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80b_mgunner))

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

{"t80bv_svo tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelmaximum"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80b_mgunner))

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

{"t80bv_wgn tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelmaximum"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80b_mgunner))

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

{"t80bv_als tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelmaximum"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80b_mgunner))

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

{"t80bv_2018 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{view start "flashbarrelmaximum"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
}



{"t80umd1 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"t80u_ukr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"t80bvm tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}

}
{"t80bvm2017 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
}


{"t80bvm1 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t80/t80_start"}
		{link_sound "engine_stop"		"vehicle/engine/t80/t80_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t80/t80_idle"}
		{link_sound "engine_full"		"vehicle/engine/t80/t80_high"}
		;{link_sound "exhaust"			"vehicle/engine/t80/M1A2_High_old"}
		{link_sound "move"				"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80b_mgunner))

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

{"m10_booker"
	("m2a2_sound")
	{on spawn
		{add_view		"flash_gun_big"		"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_hmg_m2hb"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/USA/M2HB/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/RUS/DShK38/"} ; Placeholder
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/M240/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/M240/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}

	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "tails"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("Tankgun120_125mm_CodeX")
		("M2HB_CodeX")
		("M240_CodeX")
	}
}


{"t72a_mod2025 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy))
}

{"t72a_mod2025_cope tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}


{"t72b1989 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"tank shell_eject1"
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
					{spawn "shell_cannon1" "fx_invers" x scale 0.014
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
		;("shell_eject_delay" args 0.5 0)
		("shell_eject_delay" args 1.2 0)
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


{"t_72b3_2011 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"t72b3_ubh tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"t72b3 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"ztz96_a"
	("t72_sound")

	{on spawn
		{link_sound "action_recoil_Cannon" "weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound "Cannon_Mid" "weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound "Cannon_Far" "weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound "MG_Mid" "weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound "MG_Far" "weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound "HMG_Mid" "weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound "HMG_Far" "weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound "tails" "weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}		
	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}

		{delay 1.0
			{ani_play "shell_eject"}
			{delay 0.5
				{spawn "poddon_cannon" "fx_invers" x scale 1.0
					{impulse forward 6 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
				}
			}
			{delay 1
				{ani_play "shell_eject" -1}
			}
		}
	}

	{on fire "mgun1" 
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
	}

	{on fire "mgun" 
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}		
	}
}

{"ztz96_a_gy"
	("t72_sound")

	{on spawn
		{link_sound "action_recoil_Cannon" "weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound "Cannon_Mid" "weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound "Cannon_Far" "weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound "MG_Mid" "weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound "MG_Far" "weapon/shot/small-arms/s4/d3/PKM/"}
		{link_sound "HMG_Mid" "weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound "HMG_Far" "weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound "tails" "weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{if terrain_fx "ice"
				{tex_mod "desert"}
			else terrain_fx "snow"
				{tex_mod "desert"}
			else
				{tex_mod "desert"}
		} 
	}

	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}

		{delay 1.0
			{ani_play "shell_eject"}
			{delay 0.5
				{spawn "poddon_cannon" "fx_invers" x scale 1.0
					{impulse forward 6 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
				}
			}
			{delay 1
				{ani_play "shell_eject" -1}
			}
		}
	}

	{on fire "mgun1" 
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
	}

	{on fire "mgun" 
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}		
	}

}

{"ztz96ap tank"  ; ordos_add

	{on spawn
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight4"}				
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 1.0 {ani_play "shell_eject"}
			{delay 0.5 
				{spawn "poddon_cannon" "fx_invers" x scale 1.0 {impulse forward 6 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}}
			}
			{delay 1
				{ani_play "shell_eject" -1}
			}			
		}		
	}
	{on fire "mgun1" 
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}		
	}
	{on fire "mgun" 
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
	}	
	
	("t72_sound")
	
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





{"ztz99a tank"
("ztz_sound")
	{on "event_with_crew"
		{ani_play "engine_fan" loop resume}
	}
	{on spawn
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 1.0 {ani_play "shell_eject"}
			{delay 0.5 
				{spawn "poddon_cannon" "fx_invers" x scale 1.0 {impulse forward 6 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}}
			}
			{delay 1
				{ani_play "shell_eject" -1}
			}			
		}		
	}
	{on fire "mgun" 
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}

	}
	{on fire "mgun1" 
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}	
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t80y_mgunner) com_optic(mgun3))	
}

{"t72b_rus tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"t72b_ukr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
}

{"t72a_ukr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy))
}



{"t72a_n tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
		{if terrain_fx "ice"
				{tex_mod "pl"}
			else terrain_fx "snow"
				{tex_mod "pl"}
			else
				{tex_mod "pl"}
		} 		
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy))
}

{"t72a tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight5"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}

	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(t72_zpy))
}

{"t90a_rus tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t90/t90_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/t90/t90_engine_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t90/t90_idle"}
		{link_sound "engine_full"		"vehicle/engine/t90/t90_high"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 1.7 {ani_play "shell_eject"}
			{delay 0.5 
				{spawn "poddon_cannon" "fx_invers" x scale 1.0 {impulse forward 6 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}}
			}
			{delay 1
				{ani_play "shell_eject" -1}
			}			
		}		
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
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

{"t90a_ukr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t90/t90_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/t90/t90_engine_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t90/t90_idle"}
		{link_sound "engine_full"		"vehicle/engine/t90/t90_high"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"flash_gun_hmg"	"flashbarrel3"		"Foresight3"}
		{add_view		"flash_gun_big"	"flashbarrel5"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun"
		("check_fire")
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 1.0 {ani_play "shell_eject"}
			{delay 0.5 
				{spawn "poddon_cannon" "fx_invers" x scale 1.0 {impulse forward 6 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}}
			}
			{delay 1
				{ani_play "shell_eject" -1}
			}			
		}		
	}
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
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

{"t90m tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t90/t90_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/t90/t90_engine_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t90/t90_idle"}
		{link_sound "engine_full"		"vehicle/engine/t90/t90_high"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{ani_play "panorama" callback}
		{link_sound "burnup_ammo1" "detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" "fire/loops/big"}
		{link_sound "hatch_fire2" "fire/fire_hatch"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"tank_canon_fire_122_128"	"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun" 
		("check_fire")
		{ani_play "fire"}
		{view start "flashbarrel1"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
}

{"t90m_ha tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t90/t90_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/t90/t90_engine_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t90/t90_idle"}
		{link_sound "engine_full"		"vehicle/engine/t90/t90_high"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{ani_play "panorama" callback}
		{link_sound "burnup_ammo1" "detonation/cook_off/burn_ammo"}
		{link_sound "hatch_fire1" "fire/loops/big"}
		{link_sound "hatch_fire2" "fire/fire_hatch"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{add_view		"tank_canon_fire_122_128"	"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_hmg_dshk"	"flashbarrel5"		"Foresight5"}
		{add_view		"flash_gun_big"	"flashbarrel4"		"Foresight4"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
	{on fire "gun" 
		("check_fire")
		{ani_play "fire"}
		{view start "flashbarrel1"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{call "maximum_terrain_fx"}
	}
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on fire "mgun1" overload
		{view start "flashbarrel4"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{play_sound "tails"}
		{delay 0.2
			{view pause "flashbarrel4"}
		}
	}
}

{"bmpt_72"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t90/t90_engine_start"}
		{link_sound "engine_stop"		"vehicle/engine/t90/t90_engine_stop"}
		{link_sound "engine_idle"		"vehicle/engine/t90/t90_idle"}
		{link_sound "engine_full"		"vehicle/engine/t90/t90_high"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"			"vehicle/tracks/leopard2_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view 	"tank_canon_fire_37_40_auto_sides" 	"flashbarrel1" 		"foresight1"}	
		{add_view 	"tank_canon_fire_37_40_auto_sides" 	"flashbarrel2" 		"foresight2"}
		{add_view	 "flash_gun_small"	"flashbarrel7"	"Foresight7"}
		{add_view "zenit_gilz"		"shells_we"	"fxshell"}
		{add_view		"flash_gun_small"	"flashbarrel5"		"foresight5"}
		{add_view		"flash_gun_small"	"flashbarrel6"		"foresight6"}		

		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/AGS30/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/AGS30/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}

		
    	}
	("custom_sh_multi_launcher_east" weapon(gun2) foresight(foresight3) tail(taill_) shooter(shooterl_))
	("custom_sh_multi_launcher_east" weapon(gun3) foresight(foresight4) tail(tailr_) shooter(shooterr_))
    {on fire "gun" overload
		{view start "flashbarrel1"}
		{delay 0.42 {view pause "flashbarrel1"}}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fxshell01" x scale 0.05
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}
		}
		("cw_check_shooting" weap_id(gun))
	}
    {on fire "gun1" overload
		{view start "flashbarrel2"}
		{delay 0.42 {view pause "flashbarrel2"}}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{spawn "gilza_20mm" "fxshell00" x scale 0.05
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}
		}
		("cw_check_shooting" weap_id(gun1))
	}
	{on fire "mgun" overload
		{view start "flashbarrel7"}
		{delay 0.2	{view pause	"flashbarrel7"}}
		("cw_check_shooting" weap_id(mgun))
	}
	{on fire "mgun1" overload
		{view start "flashbarrel5"}
		{delay 0.42 {view pause "flashbarrel5"}}
		("cw_check_shooting" weap_id(mgun1))
	}
	{on fire "mgun2" overload
		{view start "flashbarrel6"}
		{delay 0.42 {view pause "flashbarrel6"}}
		("cw_check_shooting" weap_id(mgun2))
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("ATGMEast")
		("AGS30_CodeX")
		("PKT_CodeX")
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

	{on break overload
		{if 	component "fuel_tank_internal_a"
		     {if not tagged "destroyed"
		       {damage_report "fuel_tank_external_a" "fuel:fuel_tank_damaged"}
		      {if rand 0.2
			{burn fx "smoke_dead_norm" fake}
			{fire radius 4 time 1 heating 3}
			{call "_burn"}
			{if rand 0.8 {spawn "ex_air_big"}}
			{delay 1		{crew_emit}}
			{delay 2		{crew_emit}}
			{delay 3		{crew_emit}}
		      }
		}
	else component "fuel_tank_internal_b"
		{if not tagged "destroyed"
			{damage_report "fuel_tank_external_b" "fuel:fuel_tank_damaged"}
		      {if rand 0.2
			{burn fx "smoke_dead_norm" fake}
			{fire radius 4 time 1 heating 3}
			{call "_burn"}
			{if rand 0.8 {spawn "ex_air_big"}}
			{delay 1		{crew_emit}}
			{delay 2		{crew_emit}}
			{delay 3		{crew_emit}}
		      }
		}
	else component "fuel_tank_internal_c"
		{if not tagged "destroyed"
			{damage_report "fuel_tank_external_c" "fuel:fuel_tank_damaged"}
		      {if rand 0.2
			{burn fx "smoke_dead_norm" fake}
			{fire radius 4 time 1 heating 3}
			{call "_burn"}
			{if rand 0.8 {spawn "ex_air_big"}}
			{delay 1		{crew_emit}}
			{delay 2		{crew_emit}}
			{delay 3		{crew_emit}}
		      }
		}
	else component "fuel_tank_internal_d"
		{if not tagged "destroyed"
			{damage_report "fuel_tank_external_d" "fuel:fuel_tank_damaged"}
		      {if rand 0.2
			{burn fx "smoke_dead_norm" fake}
			{fire radius 4 time 1 heating 3}
			{call "_burn"}
			{if rand 0.8 {spawn "ex_air_big"}}
			{delay 1		{crew_emit}}
			{delay 2		{crew_emit}}
			{delay 3		{crew_emit}}
		      }
		}
		else {inherited}
		}
	}
}

;////
{"muzzle_bmpt" 
	{on spawn
		{add_view "tank_canon_fire_37_40_auto_sides"				"flashbarrelzenite"	"foresight1"}
		{add_view "tank_canon_fire_37_40_auto_sides"		"flashbarrelzenite"		"shooter00"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		;{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on "init_gun"
		{add_view "tank_canon_fire_37_40_auto_sides"			"flashbarrel00"	"foresight1"}
		{add_view "tank_canon_fire_37_40_auto_sides"			"flashbarrel01"	"shooter00"}
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

{"muzzle_bmp3m" 
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight2"}
		{add_view "smoke_zenit"		"flashbarrelzenite1"		"foresight4"}
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view "smoke_zenit"		"flashbarrelzenite3"		"foresight6"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		;{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "gun"
		{tags add "100mm"}
		{spawn "artillery_warning_light" random_position 700}
		{spawn "bazzoka_snow" "foresight1" x}
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		{blastwave c4 1 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
		{delay 1 {tags remove "100mm"}}
	}
	{on fire "gun2"
		{view start "flashbarrelzenite"}
		{delay 0.01
				{spawn "shell_case" "box01" x scale 0.4
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}{delay 180 0.5{hide 3}}
			}
		}
		{play_sound "bkg_auto"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
		{ani_play "fire2"}
	}
	{on fire "mgun1"
		{view start "flashbarrelzenite1"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
	}
	{on fire "mgun2"
		{view start "flashbarrelzenite1"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
	}
	{on fire "mgun3"
		{view start "flashbarrelzenite1"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
	}
}

{"muzzle_bmp3" 
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1a"}
		{add_view "smoke_zenit"		"flashbarrelzenite1"		"foresight4"}
		{add_view "smoke_zenit"		"flashbarrelzenite2"		"foresight5"}
		{add_view "smoke_zenit"		"flashbarrelzenite3"		"foresight6"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		;{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "gun"
		{tags add "100mm"}
		{spawn "artillery_warning_light" random_position 700}
		{spawn "bazzoka_snow" "foresight1" x}
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		{blastwave c4 1 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
		{delay 1 {tags remove "100mm"}}
	}
	{on fire "30mmgun"
		{view start "flashbarrelzenite"}
		{play_sound "bkg_auto"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
		{ani_play "fire2"}
	}
	{on fire "mgun1"
		{view start "flashbarrelzenite1"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
	}
	{on fire "mgun2"
		{view start "flashbarrelzenite1"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
	}
	{on fire "mgun3"
		{view start "flashbarrelzenite1"}
		{delay 5{view pause "zenite_smoke"}}
		{call "zenite_terrain_fx"}
	}
}
;//// Arty Begin


{"2s19_msta"    ;
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"tank_canon_fire_150_155_sides"		"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_hmg"		"flashbarrel5"		"Foresight14"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"} ; Placeholder
	}
	{on fire "gun"
		{spawn "artillery_warning_heavy" random_position 1100}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 2
		{call "spawn_shell"}
         }		
	}
	{on "spawn_shell"
		{tags add "gun_fired"}
		{call "spawn_shell_delay"}
		(define "shell_eject_delay"
			{delay_ex %0
				{play_sound "breech_open"}
				{ani_play "shell_eject" 1}			;// door/hatch animation for tank to open and shell is thrown out
				{ani_play "shell_hatch" 1}
				{delay_ex %1
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view pause "smoke_shell"}
					}
					{spawn "shell_cannon" "fx_invers" x scale 1.1
						{impulse up 0 dir 0 0 cy 0 0 forward 7 0.5 com}{delay 10 0.5{hide 3}}
						{add_view "smoke_empty_shell" "smoke_shell" "fx_shellsmoke"}
						{view start "smoke_shell"}
						{delay_effect 3 1 "stop"}
					}
				}
				{delay 1
					{ani_play "shell_hatch" -1.0}
				}
			}
		)
	}

	{on "spawn_shell_delay"
		("shell_eject_delay" args 0.15 0.05)
	}

	{on "reload"
		{call "reload_delay"}
		{call "crew_reload_ani"}
		(define "reload_time"
			{if tagged "gun_fired"
				{delay (- %0 0.5) ;4.5
					{tags remove "gun_fired"}
					{call "tank_reloaded"}
				}
			else ;//switching ammo
				{delay 0.75
					{ani_play "shell_eject" 1.0}
					{talk "reload"}
					{play_sound "breech_open"}

				}
				{delay (- %0 0.5)
					{call "tank_reloaded"}
				}
			}
		)
		{delay 2
			{talk "reload"}
		}
	}

	{on "tank_reloaded"
		{ani_play "shell_eject" -1.0}
		{play_sound "breech_close"}
		{delay 0.5
			{talk "reloaded"}
		}
	}

	{on "reload_delay"
		("reload_time" args 4.5)	;// weapon reload time
	}
}






{"plz05"    ;
	("t55_sound")
	{on spawn
		{add_view		"tank_canon_fire_150_155_sides"		"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_hmg"		"flashbarrel5"		"Foresight4"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"} ; Placeholder
	}
	{on fire "gun"
		{spawn "artillery_warning_heavy" random_position 1100}	
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 1.0 {ani_play "shell_eject"}
			{delay 0.5 
				{spawn "shell_cannon" "fx_invers" x scale 1.0 {impulse up 0 dir 0 0 cy 0 0 forward 7 0.5 com}{delay 10 0.5{hide 3}}}
			}
			{delay 1
				{ani_play "shell_eject" -1}
			}			
		}		
    }	
	{on fire "mgun" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}	
}



{"2s19_msta_m2"    ;
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view		"tank_canon_fire_150_155_sides"		"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_hmg"		"flashbarrel5"		"Foresight14"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"} ; Placeholder
	}
	{on fire "gun"
		{spawn "artillery_warning_heavy" random_position 1100}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 2
		{call "spawn_shell"}
         }		
	}
	{on "spawn_shell"
		{tags add "gun_fired"}
		{call "spawn_shell_delay"}
		(define "shell_eject_delay"
			{delay_ex %0
				{play_sound "breech_open"}
				{ani_play "shell_eject" 1}			;// door/hatch animation for tank to open and shell is thrown out
				{ani_play "shell_hatch" 1}
				{delay_ex %1
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view pause "smoke_shell"}
					}
					{spawn "shell_cannon" "fx_invers" x scale 1.1
						{impulse up 0 dir 0 0 cy 0 0 forward 7 0.5 com}{delay 10 0.5{hide 3}}
						{add_view "smoke_empty_shell" "smoke_shell" "fx_shellsmoke"}
						{view start "smoke_shell"}
						{delay_effect 3 1 "stop"}
					}
				}
				{delay 1
					{ani_play "shell_hatch" -1.0}
				}
			}
		)
	}

	{on "spawn_shell_delay"
		("shell_eject_delay" args 0.15 0.05)
	}

	{on "reload"
		{call "reload_delay"}
		{call "crew_reload_ani"}
		(define "reload_time"
			{if tagged "gun_fired"
				{delay (- %0 0.5) ;4.5
					{tags remove "gun_fired"}
					{call "tank_reloaded"}
				}
			else ;//switching ammo
				{delay 0.75
					{ani_play "shell_eject" 1.0}
					{talk "reload"}
					{play_sound "breech_open"}

				}
				{delay (- %0 0.5)
					{call "tank_reloaded"}
				}
			}
		)
		{delay 2
			{talk "reload"}
		}
	}

	{on "tank_reloaded"
		{ani_play "shell_eject" -1.0}
		{play_sound "breech_close"}
		{delay 0.5
			{talk "reloaded"}
		}
	}

	{on "reload_delay"
		("reload_time" args 4.5)	;// weapon reload time
	}
}

{"2s6"
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/ZU_23mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/ZU_23mm/"}
	}		
	{on "init_gun"
		{add_view "tank_canon_fire_37_47"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_37_47"			"flashbarrel01"	"shooter01"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		{call "update_gun"}
	}
	("t55_sound")
	("radar_lifting90_params" triplex(additional_triplex) visor(visor3) anim_rotate(radar_loop) anim_lift(radar_lift) marker(antirad_generator_rus))
	{on fire "gun" overload
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}	
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
		{call "minimum_terrain_fx"}

		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
	
    ("custom_multi_launcher_west"	weapon(gun2) tail(tail) shooter(r_shooter) missile(9m311))
}

{"2s3m"    ;
	("t55_sound")
	{on spawn
		{add_view		"tank_canon_fire_150_155_sides"		"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_hmg"		"flashbarrel5"		"Foresight14"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"HMG_Mid"		"weapon/shot/small-arms/s4/d2/Kord/"}
		{link_sound		"HMG_Far"		"weapon/shot/small-arms/s4/d3/Kord/"} ; Placeholder
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}	
		{spawn "artillery_warning_heavy" random_position 1100}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 1.5
		{call "spawn_shell"}
         }		
	}
	{on "spawn_shell"
		{tags add "gun_fired"}
		{call "spawn_shell_delay"}
		(define "shell_eject_delay"
			{delay_ex %0
				{play_sound "breech_open"}
				{ani_play "shell_eject" 1}			;// door/hatch animation for tank to open and shell is thrown out
				{ani_play "shell_hatch" 1}
				{delay_ex %1
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view pause "smoke_shell"}
					}
					{spawn "shell_cannon" "fx_invers" x scale 1.1
						{impulse up 0 dir 0 0 cy 0 0 forward 7 0.5 com}{delay 10 0.5{hide 3}}
						{add_view "smoke_empty_shell" "smoke_shell" "fx_shellsmoke"}
						{view start "smoke_shell"}
						{delay_effect 3 1 "stop"}
					}
				}
				{delay 1
					{ani_play "shell_hatch" -1.0}
				}
			}
		)
	}

	{on "spawn_shell_delay"
		("shell_eject_delay" args 0.15 0.05)
	}

	{on "reload"
		{call "reload_delay"}
		{call "crew_reload_ani"}
		(define "reload_time"
			{if tagged "gun_fired"
				{delay (- %0 0.5) ;4.5
					{tags remove "gun_fired"}
					{call "tank_reloaded"}
				}
			else ;//switching ammo
				{delay 0.75
					{ani_play "shell_eject" 1.0}
					{talk "reload"}
					{play_sound "breech_open"}

				}
				{delay (- %0 0.5)
					{call "tank_reloaded"}
				}
			}
		)
		{delay 2
			{talk "reload"}
		}
	}

	{on "tank_reloaded"
		{ani_play "shell_eject" -1.0}
		{play_sound "breech_close"}
		{delay 0.5
			{talk "reloaded"}
		}
	}

	{on "reload_delay"
		("reload_time" args 4.5)	;// weapon reload time
	}
}


{"2s4_tulpan tank"
	("t55_sound")
	{on spawn
		{add_view		"tank_canon_fire_150_155_sides"		"flashbarrel1"		"Foresight1"}
		{add_view		"flash_gun_big"		"flashbarrel5"		"Foresight14"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
		{link_sound		"MG_Mid"		"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound		"MG_Far"		"weapon/shot/small-arms/s4/d3/PKM/"} ; Placeholder
	}
	{on fire "gun"
		{tags add "152mm"}
		{spawn "artillery_warning_heavy" random_position 1100}
		{delay 1 {tags remove "152mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel5"}
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
		{delay 0.2
			{view pause "flashbarrel5"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}


{"2s1_gvozdika_ukr tank"
	("t55_sound")
	{on spawn
		{add_view		"tank_canon_fire_122_128_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm_LV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm_LV/"}
	}
	{on fire "gun"
		{tags add "122mm"}
		{spawn "artillery_warning_medium" random_position 900}
		{delay 1 {tags remove "122mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("RUS_152mm_CodeX")
	}
}


{"plz-07a tank"
	("t55_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm_LV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm_LV/"}
		{if terrain_fx "ice"
				{tex_mod "desert"}
			else terrain_fx "snow"
				{tex_mod "desert"}
			else
				{tex_mod "desert"}
		}			
	}
	{on fire "gun"
		{tags add "122mm"}
		{spawn "artillery_warning_medium" random_position 900}
		{delay 1 {tags remove "122mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("RUS_152mm_CodeX")
	}
}

{"2s31"
	("bmp_sound")
	{on spawn
		{add_view		"tank_canon_fire_122_128_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm_LV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm_LV/"}
	}
	{on fire "gun"
		{tags add "122mm"}
		{spawn "artillery_warning_medium" random_position 900}
		{delay 1 {tags remove "122mm"}}
		{ani_play "fire"}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("RUS_152mm_CodeX")
	}
}


{"2s1_n tank"
	("t55_sound")
	{on spawn
		{add_view		"tank_canon_fire_122_128_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm_LV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm_LV/"}
	}
	{on fire "gun"
		{tags add "122mm"}
		{spawn "artillery_warning_medium" random_position 900}
		{delay 1 {tags remove "122mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("RUS_152mm_CodeX")
	}
}

{"2c9"
	("mtlb_sound")
	{on spawn
		{link_sound		"Recoil"		"weapon/shot/cannon/s3/recoil/Shared/Mortar/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s3/d2/Shared/Mortar/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s3/d3/Shared/Mortar/"}
	}
	{on fire "gun"
		{tags add "120mm"}
		{spawn "artillery_warning_medium" random_position 900}
		{delay 1 {tags remove "120mm"}}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("Mortar_12cm_codex")
	}
}

{"2s1_gvozdika_rus tank"
	("t70_sound")
	{on spawn
		{add_view		"tank_canon_fire_122_128_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s2/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s4/d2/Shared/Cannon_105to130mm_LV/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s4/d3/Shared/Cannon_105to130mm_LV/"}
	}
	{on fire "gun"
		{tags add "122mm"}
		{spawn "artillery_warning_medium" random_position 900}
		{delay 1 {tags remove "122mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("RUS_152mm_CodeX")
	}
}


{"maars"				;模型来源https://sketchfab.com/3d-models/maars-ground-drone-vehicle-d3f30b27d47541a8888e2381f6c583e9
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz302"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz302/start"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz302/full"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz302/stop"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz302/exhaust"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}

;		{link_sound "wheel_ground"  	"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
;		{link_sound "wheel_sand"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
;		{link_sound "wheel_grass" 		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_water" 		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_puddle" 		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
;		{link_sound "wheel_mud" 		"vehicle/cannon_roll/overlays/cannon_overlay_snow"}
;		{link_sound "wheel_snow" 		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
;		{link_sound "wheel_road" 		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
;		{link_sound "wheel_rock" 		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_wood" 		"vehicle/cannon_roll/overlays/cannon_overlay_wood"}
	}
	{on spawn
		{link_sound 	"action_recoil_Cannon"		"weapon/action/recoil/launcher/"}
		{link_sound	"tail_mid"			"weapon/shot/small-arms/s4/d2/Grenade_Launcher/"}
		{link_sound 	"tail_far"			"weapon/shot/small-arms/s4/d3/Grenade_Launcher/"}
	}
	{on ik begin "turret"			{play_sound "rotate_turret" 1}		}
	{on ik end "turret"			{stop_sound "rotate_turret"}		}
	{on "crew_stunned" overload}
	{on "crew_revive" overload}
	{on "driver_revive" overload}
	
	("multi_barrel_loop" flash(flash_grenade_launcher) smoke(grenade_tail) weapon(mgun2) head(0.02))
}

{"2s7m_malka_ukr"
	("mtlb_sound")
	{on spawn
		{add_view		"tank_canon_fire_170_210"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("Rus_203_Malka")
	}
}

{"2s7m_malka_rus"
	("mtlb_sound")
	{on spawn
		{add_view		"tank_canon_fire_170_210"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
	}
	{on fire "gun"
		{ani_play "fire"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("Rus_203_Malka")
	}
}

{"m109_paladin"
	("m5a1_stuart_sound")
	{on spawn
		{add_view		"tank_canon_fire_150_155_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
	}
	{on fire "gun"
		{tags add "155mm"}
		{spawn "artillery_warning_heavy" random_position 1100}
		{delay 1 {tags remove "155mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("Nato_155mm_CodeX")
	}
}

{"pzh2000_ukr"
	("leopard1_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
	}
	{on fire "gun"
		{tags add "155mm"}
		{spawn "artillery_warning_heavy" random_position 1100}
		{delay 1 {tags remove "155mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("Nato_155mm_CodeX")
	}
}

{"pzh2000_n"
	("leopard1_sound")
	{on spawn
		{add_view		"tank_canon_fire_150_155_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
	}
	{on fire "gun"
		{tags add "155mm"}
		{spawn "artillery_warning_heavy" random_position 1100}
		{delay 1 {tags remove "155mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("Nato_155mm_CodeX")
	}
}

{"as90"
	("m2a2_sound")
	{on spawn
		{add_view		"tank_canon_fire_150_155_sides"		"flashbarrel1"		"Foresight1"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
	}
	{on fire "gun"
		{tags add "155mm"}
		{spawn "artillery_warning_heavy" random_position 1100}
		{delay 1 {tags remove "155mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("Nato_155mm_CodeX")
	}
}

{"2s22_bohdana car"
	("turck_sound")
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
	}
	{on fire "gun"
		{tags add "155mm"}
		{spawn "artillery_warning_heavy" random_position 1100}
		{delay 1 {tags remove "155mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on "add_weapon_sound" overload
		("Nato_155mm_CodeX")
	}
}

{"vz_77_dana car"
	("turck_sound")
	{on spawn
		{add_view		"flash_gun_hmg_dshk"		"flashbarrel5"		"Foresight4"}
		{add_view		"tank_canon_fire_150_155_sides"		"flashbarrel1"		"Foresight1"}
		 
		{link_sound		"HMG_Mid"		"weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound		"HMG_Far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s3/recoil/Shared/Cannon/"}
	{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s5/d2/Shared/Cannon_150to210mm/"}
	{link_sound		"Cannon_Far"		"weapon/shot/cannon/s5/d3/Shared/Cannon_150to210mm/"}
	}
	{on fire "gun"
		{tags add "155mm"}
		{spawn "artillery_warning_heavy" random_position 1100}
		{delay 1 {tags remove "155mm"}}
		{ani_play "fire"}
		{spawn "proj_probe" "foresight1" x}
		{view start "flashbarrel1"}
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	;{on fire "mgun2" overload
	;	{view start "flashbarrel5"}
	;	{play_sound "HMG_Mid"}
	;	{play_sound "HMG_Far"}
	;	{delay 0.2
	;		{view pause "flashbarrel5"}
	;	}
	;}
	{on "add_weapon_sound" overload
		("Nato_155mm_CodeX")
		("DShK38_CodeX")
	}
}

;//Arty Cannon End


;/*=========== Others End ===========*/
;///Supply Trucks/Fuel With No Weapons
{"ural4320_fuel car"
	("turck_sound")
}

{"4310_fuel car"
	("turck_sound")
}

{"ural_ammo_vsu car"
	("turck_sound")
}

{"ural_vsu car"
	("turck_sound")
}

{"ural_ammo car"
	("turck_sound")
}

{"ural car"
	("turck_sound")
}

{"fmtv car"
	("turck_sound")
}

{"fmtv_ammo car"
	("turck_sound")
}
{"hamer_vsu car"
	("car2_sound")
}

{"hamer_n car"
	("car2_sound")
}

{"ford-f150shahid"
	("car_sound")
}

{"hamer_vsu"
	("car_sound")
}
{"kamaz_ammo car"
	("turck1_sound")
}

{"toyota_pardo"
	("car_sound")
}

{"toyota_hilux_mod"
	("car_sound")
}

{"2329_vaz"
	("car_sound")
}

{"31514_uaz"
	("gaz_sound")
}

{"ural_ammo__vsu car"
	("zis5_sound")
}

{"ural car"
	("zis5_sound")
}
;///Supply Trucks/Fuel With No Weapons END//
;// SPAA

{"roland"
	("turck_sound")
	("custom_multi_launcher_west"	weapon(gun2) tail(tail) shooter(r_shooter) missile(xmim-115avt1))
	("radar_params" triplex(additional_triplex) visor(visor3) anim_rotate(radar_loop) marker(antirad_generator_usa))
	
	("update_hatch_event" event(operatable on) place(gunner2))
	("update_hatch_event" event(operatable off) place(gunner2))
	("update_hatch_event" event(crew in) place(gunner2))
	("update_hatch_event" event(crew out) place(gunner2))

}

{"strela10"
	("mtlb_sound")

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
	("custom_sh_multi_launcher_east" weapon(gun2) foresight(foresight2) tail(tail_) shooter(shooter))
	{on bullet_hit
		{if volume "glass" {call "break_glass"}}
	}
	{on "break_glass"
		{volumes "glass" disable bullet contact}
		{spawn "glass_hit2" "glass" x}
		{delay 0.1 {bone cut "glass"}}
	}
}

{"9k35_strela-10_rus"
	("mtlb_sound")

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
	("custom_sh_multi_launcher_east" weapon(gun2) foresight(foresight2) tail(tail_) shooter(shooter))
	{on bullet_hit
		{if volume "glass" {call "break_glass"}}
	}
	{on "break_glass"
		{volumes "glass" disable bullet contact}
		{spawn "glass_hit2" "glass" x}
		{delay 0.1 {bone cut "glass"}}
	}
}

{"9k35_strela-10_ukr"
	("mtlb_sound")

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
	("custom_sh_multi_launcher_east" weapon(gun2) foresight(foresight2) tail(tail_) shooter(shooter))
	{on bullet_hit
		{if volume "glass" {call "break_glass"}}
	}
	{on "break_glass"
		{volumes "glass" disable bullet contact}
		{spawn "glass_hit2" "glass" x}
		{delay 0.1 {bone cut "glass"}}
	}
}

{"j10"
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
	("custom_sh_multi_launcher_east" weapon(gun) foresight(foresight1) tail(tail_) shooter(shooter))
	{on bullet_hit
		{if volume "glass" {call "break_glass"}}
	}
	{on "break_glass"
		{volumes "glass" disable bullet contact}
		{spawn "glass_hit2" "glass" x}
		{delay 0.1 {bone cut "glass"}}
	}
}

{"t72a_solntsepek"

	{on "add_movement_sound"
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
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
	{on fire "gun" 
			(define "fire_barrel"
			name "%0"
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
			  else ("fire_barrel" args 20)
			  else ("fire_barrel" args 21)
			  else ("fire_barrel" args 22)
			  else ("fire_barrel" args 23)
			}
;		{spawn "startsmoke_big" inv_normal}
;		 {if rand 0.5
;      			{spawn "dust_shot_big_2" "basis"}
;		}
		{ani_play "fire"}
		("cw_check_shooting" weap_id(gun))
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 400
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "explosion"
		{set "big_explosion" 0}
		{if explosive_amount 400
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
}

{"t72a_solntsepek_ukr"

	{on "add_movement_sound"
		{link_sound "engine_start"		"vehicle/engine/t72/T72_Start_ext"}
		{link_sound "engine_stop"		"vehicle/engine/t72/T72_Shut_ext"}
		{link_sound "engine_idle"		"vehicle/engine/t72/T72_Idle_ext"}
		{link_sound "engine_full"		"vehicle/engine/t72/T72_high_ext"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/t64_tracks"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
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
	{on fire "gun" 
			(define "fire_barrel"
			name "%0"
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
			  else ("fire_barrel" args 20)
			  else ("fire_barrel" args 21)
			  else ("fire_barrel" args 22)
			  else ("fire_barrel" args 23)
			}
;		{spawn "startsmoke_big" inv_normal}
;		 {if rand 0.5
;      			{spawn "dust_shot_big_2" "basis"}
;		}
		{ani_play "fire"}
		("cw_check_shooting" weap_id(gun))
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 400
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "explosion"
		{set "big_explosion" 0}
		{if explosive_amount 400
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
}




{"TOS-2"
	("turck_sound")
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
	{on fire "gun" 
			(define "fire_barrel"
			name "%0"
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
			  else ("fire_barrel" args 20)
			  else ("fire_barrel" args 21)
			  else ("fire_barrel" args 22)
			  else ("fire_barrel" args 23)
			}
;		{spawn "startsmoke_big" inv_normal}
;		 {if rand 0.5
;      			{spawn "dust_shot_big_2" "basis"}
;		}
		{ani_play "fire"}
		("cw_check_shooting" weap_id(gun))
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 400
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "explosion"
		{set "big_explosion" 0}
		{if explosive_amount 400
			{blastwave c4 25 r0 15 r1 35}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
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
	("custom_sh_multi_launcher_east" weapon(gun2) foresight(foresight1) tail(tail) shooter(shooter))
	("radar_params" triplex(commander_triplex) visor(visor1) anim_rotate(none) marker(antirad_generator_large_rus))
}


{"zsu-23-4m_rus"
	("t55_sound")
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
	{on spawn
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/ZU_23mm/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/ZU_23mm/"}
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
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{if  name "00"
			{ani_wind "fire00" end}
			{view start "flashbarrel00"}
			{play_sound "Cannon_Mid"}
			{play_sound "Cannon_Far"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		}
		{if  name "01"
			{ani_wind "fire01" end}
			{view start "flashbarrel01"}
			{play_sound "Cannon_Mid"}
			{play_sound "Cannon_Far"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
		{if  name "02"
			{ani_wind "fire02" end}
			{view start "flashbarrel02"}
			{play_sound "Cannon_Mid"}
			{play_sound "Cannon_Far"}
			{delay 0.2
				{view pause "flashbarrel02"}
			}
		}
		{if  name "03"
			{ani_wind "fire03" end}
			{view start "flashbarrel03"}
			{play_sound "Cannon_Mid"}
			{play_sound "Cannon_Far"}
			{delay 0.2
				{view pause "flashbarrel03"}
			}
		}
	}
	{on "add_weapon_sound" overload
		("ZU23mm_CodeX")
	}
}

;;////////

(define "autocannon_west"
	{on spawn
	{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
	{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/USA/Bradley_25mm/"}
	{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/USA/Bradley_25mm/"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		{delay 0.05 {call "spawn_shell"}}
		("cw_check_shooting" weap_id(gun))
	}
)

{"ugv_mine"
	("sdkfz302_sound")
	{on "crew_stunned" overload}
	{on "crew_revive" overload}
	{on "driver_revive" overload}			
    {on break
        {if not tagged "exploded"
            {if component "body"
                {start_sound "crush/medium/metal"}
                {spawn "car_die_particle"}
                {tags add "body_break"}
                {crew_enable group "crew" 0}
                {reset_manual_control}
                {able select 0}
                {unlink_trailer}
                {call "explosion_blastwave"}
            }
        }
    }

	{on "explosion_blastwave" overload
		{start_sound "detonation/he_size3/bkg/"}
		{blastwave c4 26.875 r0 7.3 r1 2.6}
		{blastwave c4 14.97 r0 12.575 r1 9.425}
		{blastwave c4 10.577 r0 14.36 r1 15.04}

		{spawn "shockwave_sphere"}
		{spawn "ex_he_size5"}

		{spawn "crater_small" "basis" x terrain_texmod}

		{if terrain_fx "snow"
			{spawn "tank_die_snow_light"}
		else terrain_fx "ice"
			{spawn "tank_die_snow_light"}
		else
			{spawn "tank_die_dust_light"}
		}
	}
}

{"ugv_sound"
	("sdkfz302_sound")
}

{"ugv"
    ("m2a2_sound")
    {on fire "gun"
	{play_sound "action_recoil_Cannon"}
	{play_sound "Cannon_Mid"}
	{play_sound "Cannon_Far"}
	{delay 0.05 {call "spawn_shell"}}
	("cw_check_shooting" weap_id(gun))
    }
    (define "laser_aps_mortar_turn_on"
    {if work "laser_aps_mortar"		  
            {tags add "laser_aps_mortar_working"}    	
            {volumes "kaz_hitzone_01" enable bullet}			
            {volumes "kaz_hitzone_02" enable bullet}			
            {volumes "kaz_hitzone_03" enable bullet}			
            {volumes "kaz_hitzone_04" enable bullet}		      	
            {volumes "kaz_hitzone_05" enable bullet}			
            {volumes "kaz_hitzone_06" enable bullet}			
            {volumes "kaz_hitzone_07" enable bullet}			
            {volumes "kaz_hitzone_08" enable bullet}	
            {volumes "kaz_hitzone_09" enable bullet}			
            {volumes "kaz_hitzone_10" enable bullet}			
            {volumes "kaz_hitzone_11" enable bullet}			
            {volumes "kaz_hitzone_12" enable bullet}	
            {volumes "kaz_hitzone_13" enable bullet}			
            {volumes "kaz_hitzone_14" enable bullet}			
            {volumes "kaz_hitzone_15" enable bullet}			
            {volumes "kaz_hitzone_16" enable bullet}		      	
            {volumes "kaz_hitzone_17" enable bullet}			
            {volumes "kaz_hitzone_18" enable bullet}			
            {volumes "kaz_hitzone_19" enable bullet}			
            {volumes "kaz_hitzone_20" enable bullet}	
            {volumes "kaz_hitzone_21" enable bullet}			
            {volumes "kaz_hitzone_22" enable bullet}			
            {volumes "kaz_hitzone_23" enable bullet}			
            {volumes "kaz_hitzone_24" enable bullet}	
    }	
    )

    (define "laser_aps_mortar_turn_off"						
        {tags remove "laser_aps_mortar_working"}			
        			
        {volumes "kaz_hitzone_01" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_02" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_03" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_04" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_05" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_06" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_07" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_08" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_09" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_10" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_11" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_12" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_13" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_14" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_15" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_16" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_17" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_18" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_19" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_20" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_21" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_22" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_23" disable bullet contact blast visible obstacle touch select}			
        {volumes "kaz_hitzone_24" disable bullet contact blast visible obstacle touch select}			
    )

{on spawn
    {link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
    {link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/USA/Bradley_25mm/"}
    {link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/USA/Bradley_25mm/"}
    {ani_play 		"radar_loop" loop}
    {add_view "laser_sight_light_green_large" "laser_sight_light_green_large" "Foresight_kaz_r"}
    {view hide "laser_sight_light_green_large"}
}

{on "body_break"
	{weapon_work "gun2" 0}
}

{on "link_weapon"
    {if name "mgun2"
        {if stuff "low_speed"
            {tags add "low_speed_weapon"}
         else
            {tags remove "low_speed_weapon"}
        }
        {if stuff "igla weapon" {tags add "igla_in_hand"} else {tags remove "igla_in_hand"}}
        {if stuff "stinger weapon" {tags add "stinger_in_hand"} else {tags remove "stinger_in_hand"}}
        {if stuff "fn6a weapon" {tags add "fn6a_in_hand"} else {tags remove "fn6a_in_hand"}}
        {if stuff "eryx weapon" {tags add "eryx_in_hand"} else {tags remove "eryx_in_hand"}}
        {if stuff "javelin weapon" {tags add "javelin_in_hand"} else {tags remove "javelin_in_hand"}}
        {if stuff "javelin_apc weapon" {tags add "javelin_in_hand"} else {tags remove "javelin_in_hand"}}
        {if stuff "hj12e_atgm weapon" {tags add "hj12e_in_hand"} else {tags remove "hj12e_in_hand"}}
        {if stuff "sraw weapon" {tags add "sraw_in_hand"} else {tags remove "sraw_in_hand"}}
        {if stuff "nlaw weapon" {tags add "nlaw_in_hand"} else {tags remove "nlaw_in_hand"}}
        {if stuff "spike-sr weapon" {tags add "spike_sr_in_hand"} else {tags remove "spike_sr_in_hand"}}
        {if stuff "rpg-30 weapon" {tags add "rpg30_in_hand"} else {tags remove "rpg30_in_hand"}}  
    }
       
}

{on fire "kaz_r"
	{view start "laser_sight_light_green_large"}
    {view show "laser_sight_light_green_large"}
    {delay 0.6
        {view hide "laser_sight_light_green_large"}{view pause "laser_sight_light_green_large"}}
}

{on fire "mgun2"
	{if tagged "igla_in_hand"
        {delay 0.01 {spawn "igla_s_carrier" "Foresight71"   x}}
    else tagged "stinger_in_hand"
        {delay 0.01 {spawn "fim-92a_carrier" "Foresight71"   x}}
    else tagged "fn6a_in_hand"
        {delay 0.01 {spawn "fn6a_ammo_carrier" "Foresight71"   x}}
    else tagged "eryx_in_hand"
        {delay 0.01 {spawn "eryx_rock_carrier" "Foresight71"   x}}
        {spawn "eryx_tubus" "link002" x
            {impulse up 2.5 0.7 dir 2.5 0.7 cz 0.2 0.1 forward -2 0.5 com}
        }
    else tagged "javelin_in_hand"
        {spawn "proj_probe" "Foresight71" x {tags add "Foresight71"}}
        {spawn "jav_tubus" "link002" x
            {impulse up 2.5 0.7 dir 2.5 0.7 cz 0.2 0.1 forward -2 0.5 com}
        }
    else tagged "hj12e_in_hand"
        {delay 0.03 
            {spawn "proj_actorprobe" "Foresight71"   x
                {spawn "red_arrow12_rock_carrier" "missile_point15"   x}
            }
        }
        {spawn "hj12e_gilza" "link002" x
            {impulse up 2.5 0.7 dir 2.5 0.7 cz 0.2 0.1 forward -2 0.5 com}
        }
    else tagged "sraw_in_hand"
        {delay 0.01 {spawn "sraw_rock_carrier" "Foresight71"   x}}
    else tagged "nlaw_in_hand"
        {delay 0.01 {spawn "nlaw_rocket_carrier" "Foresight71"   x}}
    else tagged "spike_sr_in_hand"
        {delay 0.01 {spawn "spike-sr_carrier" "Foresight71"   x}}
    else tagged "rpg30_in_hand"
        {delay 0.01 {spawn "pg-30_precursor" "Foresight71"   x {volumes disable all}}}
    }
}



    

		
        {on "kaz_enable" overload			
            (define "kaz_single_turn_on"{volumes "kaz_hitzone_%0" enable bullet contact} )			   
            				
                ("kaz_single_turn_on" args 01)					
                ("kaz_single_turn_on" args 02)					
                ("kaz_single_turn_on" args 03)					
                ("kaz_single_turn_on" args 04)				   
                ("kaz_single_turn_on" args 05)					
                ("kaz_single_turn_on" args 06)					
                ("kaz_single_turn_on" args 07)					
                ("kaz_single_turn_on" args 08)				
                ("kaz_single_turn_on" args 09)					
                ("kaz_single_turn_on" args 10)					
                ("kaz_single_turn_on" args 11)					
                ("kaz_single_turn_on" args 12)				   
                ("kaz_single_turn_on" args 13)					
                ("kaz_single_turn_on" args 14)					
                ("kaz_single_turn_on" args 15)					
                ("kaz_single_turn_on" args 16)	
                ("kaz_single_turn_on" args 17)					
                ("kaz_single_turn_on" args 18)					
                ("kaz_single_turn_on" args 19)					
                ("kaz_single_turn_on" args 20)				   
                ("kaz_single_turn_on" args 21)					
                ("kaz_single_turn_on" args 22)					
                ("kaz_single_turn_on" args 23)					
                ("kaz_single_turn_on" args 24)	   	   
        }			

    {on "kaz_work_on_ptur" overload}

}

;///Arty MLRS Begin

{"iskander"
	("turck_sound")
	{on spawn
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
		{Volumes "ammo_storage_main" enable contact bullet blast}
		{Volumes "ammo_storage_main1" enable contact bullet blast}
		{set "radar_up" 0}
	}

        {on fire "gun"
		{tags add "rocket"}
		{spawn "artillery_warning_heavy" random_position 1600}
		{delay 1 {tags remove "rocket"}} 
		{play_sound "bkg_rocket"}
      		{spawn "dust_shot_big_2" "basis"}
      		{spawn "dust_shot_big_2" "FXtraceL4"}
      		{spawn "dust_shot_big_2" "FXtraceR4"}
	}	
}



{"mrls_atacms_n"		("mlrs_m270_west")	}
{"mrls_atacms"		("mlrs_m270_west")	}
{"mrls_atacms1"		("mlrs_m270_west")	}
{"vilkha"	
       ("turck_sound")		
{on spawn
		{link_sound 	"bkg_rocket" 			"weapon/shot/bkg/rocket/"}
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

	{on ik begin "turret"			{play_sound "rotate_turret" 1}		}
	{on ik end "turret"			{stop_sound "rotate_turret"}		}
	{on fire "mgun1" overload
		{view start "flashbarrel3"}
		("cw_check_shooting" weap_id(mgun1))
	}

	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{play_sound "bkg_rocket"}
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
	}}
	
	
	{"vilkha_clu"	
       ("turck_sound")		
{on spawn
		{link_sound 	"bkg_rocket" 			"weapon/shot/bkg/rocket/"}
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

	{on ik begin "turret"			{play_sound "rotate_turret" 1}		}
	{on ik end "turret"			{stop_sound "rotate_turret"}		}
	{on fire "mgun1" overload
		{view start "flashbarrel3"}
		("cw_check_shooting" weap_id(mgun1))
	}

	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{play_sound "bkg_rocket"}
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
	}}

{"m270_ukr"    ;
        ("mlrs_m270_west")
}

{"mars"    ;
        ("mlrs_m270_west")
}



{"m270_n"    ;
        ("mlrs_m270_west")
}

{"m270_ukr_clu"    ;
        ("mlrs_m270_west")
}

{"m270_n_clu"    ;
        ("mlrs_m270_west")
}


{"m142_himars_atacams"  
	("turck_sound")
		{on spawn
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
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
	{on ik begin "turret"			{play_sound "rotate_turret" 1}		}
	{on ik end "turret"			{stop_sound "rotate_turret"}		}
	{on fire "mgun1" overload
		{view start "flashbarrel3"}
		("cw_check_shooting" weap_id(mgun1))
	}

	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{play_sound "bkg_rocket"}
		{spawn "startsmoke_big"}
		{spawn "dust_shot_big_2" "basis"}
		{ani_play "fire"}
		{view start "flashbarrel_gun"}
		{view start "smoke_add"}
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
}








{"lars2"  
	("turck_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}

{"tornado_g car"
	("turck_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}

{"zbl08"
	{on spawn
		{add_view	 	"flash_gun_big"	"flashbarrel2"		"Foresight3"}
		;{add_view	"rok_tail"	"rok_tail_gun2"	"tail00"}
		;{add_view	"rok_tail"	"rok_tail_gun3"	"tail01"}
		{add_view 	"rok_tail"		"tail00"			"tail00"}
		{add_view 	"rok_tail"		"tail01"			"tail01"}
		{view hide "tail00"}
		{view hide "tail01"}
		{call "check_speed2"}
	}
	{on "add_weapon_sound" overload
		("30mm2A72_CodeX")
		("ATGMEast")
		("PKT_CodeX")
	}
	
	("btr_sound")
    ("autocannon")
	("25-50mm_gilza" fxshell(fxshell))
	("custom_sh_multi_launcher_east" weapon(gun2) foresight(foresight5) tail(tail_) shooter(ShooterR_))

{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}

					{ani_play "missle_rack" -1}
					{play_sound "gear_work"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{ani_play "missle_rack" 1}
						{play_sound "gear_work"}
						{weapon_work "gun2" 1}

				   else
				}

		}



	}
	{on fire "mgun" overload
		{view start "flashbarrel2"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel2"}
		}
	}	
}

{"uragan_1m car"    ;
	("turck_sound")
	("mlrs_east")	
}

{"phl-03 car"    ;
	("turck_sound")
	("mlrs_east")	
}

{"uragan_1m_clu car"    ;
	("turck_sound")
	("mlrs_east")	
}

{"uragan_new car"    ;
	("turck_sound")
	("mlrs_east")	
}

{"uragan_ua car"    ;
	("turck_sound")
	("mlrs_east")	
}

{"uragan_new_clu car"    ;
	("turck_sound")
	("mlrs_east")	
}

{"uragan_ua_clu car"    ;
	("turck_sound")
	("mlrs_east")	
}

{"bm-21_grad_rus car"
	("turck_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}

{"bm-21_grad_rus_nplm car"
	("turck_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}


{"bm-21_grad_ukr"
	("turck1_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}

{"bm-21_grad_ukr_nplm"
	("turck1_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}



{"rm_70 car"
	("turck_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}

{"rm_70_ua car"
	("turck_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}


{"bm-21_grad_ukr car"
	("turck1_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}

{"rm_70_ukr car"
	("turck_sound")
	{on spawn
		;{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 1200}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}


{"technical_grad_reb"
	("car3_sound")
	{on spawn
		{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_heavy" random_position 800}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}


{"technical_s-8"  
	("car3_sound")
	{on spawn
		{add_view		"flash_cannon_small"		"flashbarrel4"		"Foresight2"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun"
		{tags add "mlrs"}
		{spawn "artillery_warning_light" random_position 800}
		{delay 1 {tags remove "mlrs"}} 
		{ani_play "fire"}
		;{view start "flashbarrel4"}
		{play_sound "bkg_rocket"}
	}
}
;///Arty MLRS End

{"spike_stan"
	("atgm_multi_launcher_west"	weapon(gun) tail(tail) foresight(foresight1))		
	{on "cut_parts" overload
		{add_view "smoke_dead_norm" "deathfx" "FXfire1"}
		{view start "deathfx"}
		(define "cut_part"
			{tear "piece_medium_steel" bone %0
				{impulse up 8 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 10 no_position}
				{call "check_delete_part"}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		{delay 14 {view stop "deathfx"}}
	}
}

{"atgm_rbs17"

	{on "cut_parts" overload
		{add_view "smoke_dead_norm" "deathfx" "FXfire1"}
		{view start "deathfx"}
		(define "cut_part"
			{tear "piece_medium_steel" bone %0
				{impulse up 8 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 10 no_position}
				{call "check_delete_part"}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		{delay 14 {view stop "deathfx"}}
	}
}

{"tl-4_stan"
	{on fire "gun" 
		{delay 0.1 {spawn "tl4_cm_carrier" "foresight1" x}}
	}
	{on "cut_parts" overload
		{add_view "smoke_dead_norm" "deathfx" "FXfire1"}
		{view start "deathfx"}
		(define "cut_part"
			{tear "piece_medium_steel" bone %0
				{impulse up 8 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 10 no_position}
				{call "check_delete_part"}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		("cut_part" args "part4")
		{delay 14 {view stop "deathfx"}}
	}
}


;========FPV DRONE======================================== ;made by misha,add by north

;=============================================================

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

{"drone_fpv"
    {on contact
			{spawn "rpg2_ammo" "basis" x {stuff_detonate}}
    }
    {on fire
        {if not tagged "exploded"
            {if component "body"
                {start_sound "crush/medium/metal"}
                {spawn "car_die_particle"}
                {tags add "body_break"}
                {crew_enable group "crew" 0}
                {reset_manual_control}
                {able select 0}
                {unlink_trailer}
                {call "explosion_blastwave"}
            else component "engine"
                {start_sound "crush/medium/metal"}
                {tags add "engine_brake"}
                {spawn "car_die_particle" "engine"}
                {view start "smoke1"}
                {delay 40 {view pause "smoke1"}}
                {view start "steam"}
                {delay 2  {view pause "steam"}}
            }
        }
    }
	{on "explosion_blastwave" overload
		{blastwave c4 6 r0 3 r1 3}
		{blastwave c4 8.325 r0 3 r1 2}
		{blastwave c4 1.476 r0 2 r1 2}

		{spawn "ex_heat_size2"}
		{spawn "crater_tiny" terrain_texmod}
	
		{spawn "shockwave_sphere"}
	}	
}

{"drone_fpv_bomb"
    {on contact 
			{spawn "bullet105_m1_heat" "basis" x {stuff_detonate}}
    }
    {on fire
        {if not tagged "exploded"
            {if component "body"
                {start_sound "crush/medium/metal"}
                {spawn "car_die_particle"}
                {tags add "body_break"}
                {crew_enable group "crew" 0}
                {reset_manual_control}
                {able select 0}
                {unlink_trailer}
                {call "explosion_blastwave"}
            else component "engine"
                {start_sound "crush/medium/metal"}
                {tags add "engine_brake"}
                {spawn "car_die_particle" "engine"}
                {view start "smoke1"}
                {delay 40 {view pause "smoke1"}}
                {view start "steam"}
                {delay 2  {view pause "steam"}}
            }
        }
    }
	{on "explosion_blastwave" overload
		{blastwave c4 6 r0 3 r1 3}
		{blastwave c4 8.325 r0 3 r1 2}
		{blastwave c4 1.476 r0 2 r1 2}

		{spawn "ex_he_size2"}
		{spawn "crater_tiny" terrain_texmod}
	
		{spawn "shockwave_sphere"}
	}	
}






{"fpv_ai"
    {on spawn
		{delay 0.1
			{if not tagged "drone_spawn"
				{tags add "drone_spawn"}
				{delay 0.1 "drone_state_switch"
			}
		}
    }
}
}

{"ugv_ai"
    {on "body_break"
		{delay 0.1
			{if not tagged "ugv_break"
				{tags add "ugv_break"}
				{delay 0.1 "ugv_state_switch"
			}
		}
    }
}
}

{"pgz_09 tank"
	("t55_sound")
	{on "event_no_crew"
		{ani_stop "radar"}
	}
	{on "event_with_crew"
		{ani_play "radar" loop resume}
	}
	{on "init_gun" ;overload
		{link_sound		"action_recoil_Cannon"	"weapon/shot/cannon/s1/recoil/Shared/Cannon/"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/Nato/40mm_Nato_Autocannon/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/Nato/40mm_Nato_Autocannon/"}
		{add_view "tank_canon_fire_50_57_sides"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57_sides"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{call "update_gun"}
	}
	{on fire "gun"
		{play_sound "action_recoil_Cannon"}
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{ani_play "spg_shell_eject" -1}				
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


{"t55_exp"

   ("t55_sound")
   
    {on break
        {if not tagged "exploded"
            {if component "body"
                {start_sound "crush/medium/metal"}
                {spawn "car_die_particle"}
                {tags add "body_break"}
                {crew_enable group "crew" 0}
                {reset_manual_control}
                {able select 0}
                {unlink_trailer}
                {call "explosion"}
                {call "explosion_extra"}
            else component "engine"
                {start_sound "crush/medium/metal"}
                {tags add "engine_brake"}
                {spawn "car_die_particle" "engine"}
                {view start "smoke1"}
                {delay 40 {view pause "smoke1"}}
                {view start "steam"}
                {delay 2  {view pause "steam"}}
            }
        }
    }
    {on "explosion"
        {spawn "fuel_die"}
        {blastwave c4 20 r0 18 r1 30}
        {fire radius 10 time 15 heating 15}
    }
    {on "explosion_extra"
        {blastwave c4 24 r0 16 r1 33 offset 0 0 35}
        {blastwave c4 10 r0 63 r1 68 offset 0 0 65}
        {if terrain_fx "snow"
			{spawn "ex_he_size7"}
			{spawn "shockwave_sphere"}
			{if rain
				{spawn "crater_massive" texmod "mud"}
			else
				{spawn "crater_massive" terrain_texmod}
			}
        else terrain_fx "ice"
			{spawn "ex_he_size7"}
			{spawn "shockwave_sphere"}
			{if rain
				{spawn "crater_massive" texmod "mud"}
			else
				{spawn "crater_massive" terrain_texmod}
			}
        else terrain_fx "water"
            {spawn "ex_size4_water" "basis"}
        else terrain_fx "shallow_water"
            {spawn "ex_size4_water" "basis"}
        else terrain_fx "deep_water"
            {spawn "ex_size4_water" "basis"}
        else
			{spawn "ex_he_size7"}
			{spawn "shockwave_sphere"}
			{if rain
			{spawn "crater_massive" texmod "mud"}
			else
				{spawn "crater_massive" terrain_texmod}
			}
        }
    }
}

(define "custom_sh_multi_launcher"	;—павн на шутере!
	{on "init_%weapon"
		{add_view 	"rok_tail"		"%tail00"			"%tail00"}
		{add_view 	"rok_tail"		"%tail01"			"%tail01"}
		{add_view 	"rok_tail"		"%tail02"			"%tail02"}
		{add_view 	"rok_tail"		"%tail03"			"%tail03"}
		{add_view 	"rok_tail"		"%tail04"			"%tail04"}
		{add_view 	"rok_tail"		"%tail05"			"%tail05"}
		{add_view 	"rok_tail"		"%tail06"			"%tail06"}
		{add_view 	"rok_tail"		"%tail07"			"%tail07"}
		{add_view 	"startsmoke_link"		"%tail00"			"%tail00"}
		{add_view 	"startsmoke_link"		"%tail01"			"%tail01"}
		{add_view 	"startsmoke_link"		"%tail02"			"%tail02"}
		{add_view 	"startsmoke_link"		"%tail03"			"%tail03"}
		{add_view 	"startsmoke_link"		"%tail04"			"%tail04"}
		{add_view 	"startsmoke_link"		"%tail05"			"%tail05"}
		{add_view 	"startsmoke_link"		"%tail06"			"%tail06"}
		{add_view 	"startsmoke_link"		"%tail07"			"%tail07"}
		{add_view	"startsmoke_link"	"%tail00"	"%shooter00"}
		{add_view	"startsmoke_link"	"%tail01"	"%shooter01"}
		{add_view	"startsmoke_link"	"%tail02"	"%shooter02"}
		{add_view	"startsmoke_link"	"%tail03"	"%shooter03"}
		{add_view	"startsmoke_link"	"%tail04"	"%shooter04"}
		{add_view	"startsmoke_link"	"%tail05"	"%shooter05"}
		{add_view	"startsmoke_link"	"%tail06"	"%shooter06"}
		{add_view	"startsmoke_link"	"%tail07"	"%shooter07"}
	}
	{on fire "%weapon" overload
		("low_speed_bullet")
		
		(define "fire_barrel"
			name "%0"
				{view start "%tail%0"}
;				{spawn "startsmoke" "%shooter%0" x}
;				{spawn "startsmoke" "%tail%0" x}
				{set "%weapon"}{call "proj_probe"}
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


{"aft-10"
	("bmd_sound")
	("custom_sh_multi_launcher_east" weapon(gun2) foresight(foresight5) tail(tail) shooter(shooter))
}


{"pgz-04"
	("t55_sound")
	("small_multibarrel_gun" shooter(shooter) fxshell(fxshell))
	("radar_lifting90_params" triplex(additional_triplex1) visor(visor4) anim_rotate(radar_loop) anim_lift(radar_lift) marker(antirad_generator_rus))
	("custom_multi_launcher"	weapon(gun2) tail(tail) shooter(R_shooter) missile(fn6a_ammo))
}


{"hq_7b"
	("car_sound")
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


{"aft-9"

	("car_sound")
	{on spawn
		{if terrain_fx "ice"
				{tex_mod "desert"}
			else terrain_fx "snow"
				{tex_mod "desert"}
			else
				{tex_mod "desert"}
		}		
	}
	
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
	("bmp_sound")
	("atgm_single_launcher" weapon(gun2) foresight(foresight5) tail(tail))
		
	{on spawn
		{call "check_speed2"}
		{link_sound		"Cannon_Mid"		"weapon/shot/cannon/s1/d2/RUS/BMP2_2A42/"}
		{link_sound		"Cannon_Far"		"weapon/shot/cannon/s1/d3/RUS/BMP2_2A42/"}
		{link_sound		"Atgm_Mid"		"weapon/shot/cannon/s1/d2/RUS/Eastern_ATGM/"}
		{link_sound		"Atgm_Far"		"weapon/shot/cannon/s1/d3/RUS/Eastern_ATGM/"}	 
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/PKM/"}
		{link_sound			"far"			"weapon/shot/small-arms/s4/d3/PKM/"}
		{if terrain_fx "ice"
				{tex_mod "desert"}
			else terrain_fx "snow"
				{tex_mod "desert"}
			else
				{tex_mod "desert"}
		}			
	}
	{on fire "gun"
		{play_sound "Cannon_Mid"}
		{play_sound "Cannon_Far"}
	}
	{on fire "mgun2" overload
		{view start "flashbarrel3"}
		{play_sound "mid"}
		{play_sound "far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on "add_weapon_sound" overload
		("30mm2A42_CodeX")
		("PKT_CodeX")
		("ATGMEast")
	}
	{on "check_speed2"
		{tags add "ordosdebug2"}
		{call "vehicle_velocity2"}
		{delay 0.5 "check_speed2"
			{call "check_speed2"}
		}
	}

	{on "vehicle_velocity2"

		{if velocity 14
			{tags remove "rocket_pullout"}
			{if not tagged "rocket_pullback"
				   	{tags add "rocket_pullback"}
					{weapon_work "gun2" 0}




				  else
			}



		else

			{tags remove "rocket_pullback"}
				{if not tagged "rocket_pullout"
					{tags add "rocket_pullout"}
						{weapon_work "gun2" 1}

				   else
				}

	}	}	
}

(define "gatling_gun"
 	{on spawn
		{add_view 	"tank_canon_fire_37_40_auto" 	"flashbarrel1" 		"foresight1"}	
    	}
    {on fire "gun" overload
		{view start "flashbarrel1"}
		{delay 0.42 {view pause "flashbarrel1"}}
		{ani_play "fire"}
		{spawn "gilza_20mm" "fx_shell" x scale 0.05
				{impulse up 0.01 0.01 dir 0.0 0.0 cz 1.2 1.1 forward 2 0.5 com}
		}
		("cw_check_shooting" weap_id(gun))
	}
)

{"lav-ad"
	("gatling_gun" FXshell(FX_shell))
	("custom_multi_launcher_west"	weapon(gun2) tail(tail) shooter(shooter) missile(fim-92a))
}



;========FPV STUFF========================================
	
{"drone_recon_b_ammo"		{on "change"			{spawn "drone_recon_ammo" "root" x}			{delete}		}	}


	
{"drone_recon_ammo"		{on "onThrow"	             				{spawn "drone_recon" "root" dir_velocity no_normal}				{delete}	    		}	}


{"drone_fpv_b_ammo"		{on "change"			{spawn "drone_fpv_ammo" "root" x}			{delete}		}	}


	
{"drone_fpv_ammo"		{on "onThrow"	             				{spawn "drone_fpv" "root" dir_velocity no_normal}				{delete}	    		}	}

{"fpv_at4_ammo"		{on "onThrow"	             				{spawn "fpv_at4" "root" dir_velocity no_normal}				{delete}	    		}	}

{"fpv_bomb_ammo"		{on "onThrow"	             				{spawn "fpv_ukr_bomb" "root" dir_velocity no_normal}				{delete}	    		}	}

{"uav_dji_air2s_ammo"		{on "onThrow"	             				{spawn "uav_dji_air2s" "root" dir_velocity no_normal}				{delete}	    		}	}

{"fpv_bomber_ammo"		{on "onThrow"	             				{spawn "fpv_bomber" "root" dir_velocity no_normal}				{delete}	    		}	}

{"fpv_rpg_ammo"		{on "onThrow"	             				{spawn "fpv_rpg" "root" dir_velocity no_normal}				{delete}	    		}	}
