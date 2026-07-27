;/*=========== Ukraine Vehicles Begin ===========*/

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


;/*=========== Ukraine Vehicles Ends ===========*/



;/*=========== French Vehicles Begin ===========*/
(define "char_b1_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/char_b1/start"}
		{link_sound "engine_stop"		"vehicle/engine/char_b1/stop"}
		{link_sound "engine_idle"		"vehicle/engine/char_b1/idle"}
		{link_sound "engine_full"		"vehicle/engine/char_b1/full"}
		{link_sound "exhaust"			"vehicle/engine/char_b1/exhaust"}
		{link_sound "move"				"vehicle/tracks/char_b1/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "panhard_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/panhard/start"}
		{link_sound "engine_full"		"vehicle/engine/panhard/full"}
		{link_sound "engine_stop"		"vehicle/engine/panhard/stop"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
		{link_sound "exhaust"			"vehicle/engine/panhard/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/panhard/idle"}
		{link_sound "brake"				"vehicle/wheels/brake"}

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
(define "somua_s35_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/somua_s35/start"}
		{link_sound "engine_stop"		"vehicle/engine/somua_s35/stop"}
		{link_sound "engine_idle"		"vehicle/engine/somua_s35/idle"}
		{link_sound "engine_full"		"vehicle/engine/somua_s35/full"}
		{link_sound "exhaust"			"vehicle/engine/somua_s35/exhaust"}
		{link_sound "move"				"vehicle/tracks/somua_s35/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

;/*=========== French Vehicles End ===========*/

;/*=========== German Vehicles Begin ===========*/

(define "kubel_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/kubel/start"}
		{link_sound "engine_stop"		"vehicle/engine/kubel/stop"}
		{link_sound "engine_idle"		"vehicle/engine/kubel/idle"}
		{link_sound "engine_full"		"vehicle/engine/kubel/full"}
		{link_sound "exhaust"			"vehicle/engine/kubel/exhaust"}
		{link_sound "move"				"vehicle/wheels/car"}
		{link_sound "brake"				"vehicle/wheels/brake"}
	}
)
(define "kfz13_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/kubel/start"}
		{link_sound "engine_stop"		"vehicle/engine/kubel/stop"}
		{link_sound "engine_idle"		"vehicle/engine/kubel/idle"}
		{link_sound "engine_full"		"vehicle/engine/kubel/full"}
		{link_sound "exhaust"			"vehicle/engine/kubel/exhaust"}
		{link_sound "move"				"vehicle/wheels/car"}
		{link_sound "brake"				"vehicle/wheels/brake"}

		{link_sound "open"				"vehicle/doors/car/open"}
		{link_sound "close"				"vehicle/doors/car/close"}

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

(define "r12_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/r12/start"}
		{link_sound "engine_stop"		"vehicle/engine/r12/stop"}
		{link_sound "engine_idle"		"vehicle/engine/r12/idle"}
		{link_sound "engine_full"		"vehicle/engine/r12/full"}
		{link_sound "exhaust"			"vehicle/engine/r12/exhaust"}
		{link_sound "move"				"vehicle/wheels/bike"}
	}
)

(define "kettenkrad_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/r12/start"}
		{link_sound "engine_stop"		"vehicle/engine/r12/stop"}
		{link_sound "engine_idle"		"vehicle/engine/r12/idle"}
		{link_sound "engine_full"		"vehicle/engine/r12/full"}
		{link_sound "exhaust"			"vehicle/engine/r12/exhaust"}
		{link_sound "move"				"vehicle/wheels/halftrack"}

		{link_sound "wheel_ground"  			"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_sand"				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_grass" 				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_water" 				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_puddle" 				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_mud" 				"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_snow" 				"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_road" 				"vehicle/tracks/overlay/track_overlay_road"}
		{link_sound "wheel_rock" 				"vehicle/tracks/overlay/track_overlay_rock"}
		{link_sound "wheel_wood" 				"vehicle/tracks/overlay/track_overlay_wood"}
	}
)

(define "opel_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/blitz/start"}
		{link_sound "engine_stop"		"vehicle/engine/blitz/stop"}
		{link_sound "engine_idle"		"vehicle/engine/blitz/idle"}
		{link_sound "engine_full"		"vehicle/engine/blitz/full"}
		{link_sound "exhaust"			"vehicle/engine/blitz/exhaust"}
		{link_sound "move"				"vehicle/wheels/truck"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
		{link_sound "open_radio"		"vehicle/doors/blitz/open_radio"}
	}
)

(define "opel_maultier_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/blitz/start"}
		{link_sound "engine_stop"		"vehicle/engine/blitz/stop"}
		{link_sound "engine_idle"		"vehicle/engine/blitz/idle"}
		{link_sound "engine_full"		"vehicle/engine/blitz/full"}
		{link_sound "exhaust"			"vehicle/engine/blitz/exhaust"}
		{link_sound "move"				"vehicle/wheels/halftrack"}
		{link_sound "brake"				"vehicle/wheels/brake"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
	}
)

(define "Kfz70_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/Kfz70/start"}
		{link_sound "engine_stop"		"vehicle/engine/Kfz70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/Kfz70/idle"}
		{link_sound "engine_full"		"vehicle/engine/Kfz70/full"}
		{link_sound "exhaust"			"vehicle/engine/Kfz70/exhaust"}
		{link_sound "move"				"vehicle/wheels/truck"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
		{link_sound "open_radio"		"vehicle/doors/blitz/open_radio"}
	}
)

(define "hanomag_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/sdkfz251/start"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz251/stop"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz251/idle"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz251/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz251/exhaust"}
		{link_sound "move"				"vehicle/tracks/sdkfz251/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
)

(define "sdkfz222_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/sdkfz222/start"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz222/stop"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz222/idle"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz222/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz222/exhaust"}
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}

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

(define "sdkfz232_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/sdkfz232/start"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz232/stop"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz232/idle"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz232/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz232/exhaust"}
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}

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

(define "sdkfz234_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz234/start"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz234/full"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz234/stop"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz234/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz234/idle"}
		{link_sound "brake"				"vehicle/wheels/brake"}

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
(define "sdkfz302_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz302"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz302/start"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz302/full"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz302/stop"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz302/exhaust"}
		;{link_sound "engine_idle"		"vehicle/engine/sdkfz302/idle"}

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
	{on "add_overlay_sound" overload}
)

(define "sdkfz303_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz302"}
		{link_sound "engine_start"		"vehicle/engine/sdkfz303/start"}
		{link_sound "engine_full"		"vehicle/engine/sdkfz303/full"}
		{link_sound "engine_stop"		"vehicle/engine/sdkfz303/stop"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz303/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/sdkfz303/idle"}

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
	{on "add_overlay_sound" overload}
)

(define "pz1_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz1/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz1/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz1/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz1/full"}
		{link_sound "exhaust"			"vehicle/engine/pz1/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz1/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "pz2_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz2/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz2/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz2/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz2/full"}
		{link_sound "exhaust"			"vehicle/engine/pz2/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz2/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "pz38_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/hetzer/start"}
		{link_sound "engine_stop"		"vehicle/engine/hetzer/stop"}
		{link_sound "engine_idle"		"vehicle/engine/hetzer/idle"}
		{link_sound "engine_full"		"vehicle/engine/hetzer/full"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"				"vehicle/tracks/hetzer/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "pz3_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz3/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "pz4_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz4/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "pz5_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz5/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz5/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz5/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz5/full"}
		{link_sound "exhaust"			"vehicle/engine/pz5/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz5/"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_heavy"}
	}
)

(define "pzb2_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz3/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz3/full"}
		{link_sound "exhaust"			"vehicle/engine/pz3/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz6/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "pz6_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz6/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz6/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz6/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz6/full"}
		{link_sound "exhaust"			"vehicle/engine/pz6/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz6/"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_heavy"}
	}
)

(define "ferdinand_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/ferdinand/start"}
		{link_sound "engine_stop"		"vehicle/engine/ferdinand/stop"}
		{link_sound "engine_idle"		"vehicle/engine/ferdinand/idle"}
		{link_sound "engine_full"		"vehicle/engine/ferdinand/full"}
		{link_sound "exhaust"			"vehicle/engine/ferdinand/exhaust"}
		{link_sound "move"				"vehicle/tracks/ferdinand/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
)

(define "pz6b_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz6b/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz6b/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz6b/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz6b/full"}
		{link_sound "exhaust"			"vehicle/engine/pz6b/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz6b/"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_heavy"}
	}
)

;/*=========== German Vehicles End ===========*/

;/*=========== Soviet Vehicles Begin ===========*/

(define "s60_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/s60/start"}
		{link_sound "engine_stop"		"vehicle/engine/s60/stop"}
		{link_sound "engine_idle"		"vehicle/engine/s60/idle"}
		{link_sound "engine_full"		"vehicle/engine/s60/full"}
		{link_sound "exhaust"			"vehicle/engine/s60/exhaust"}
		{link_sound "move"				"vehicle/tracks/s60/"}
	}
)

(define "universal2_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/universal2/start"}
		{link_sound "engine_stop"		"vehicle/engine/universal2/stop"}
		{link_sound "engine_idle"		"vehicle/engine/universal2/idle"}
		{link_sound "engine_full"		"vehicle/engine/universal2/full"}
		{link_sound "exhaust"			"vehicle/engine/s60/exhaust"}
		{link_sound "move"				"vehicle/wheels/truck/"}
	}
)

(define "zis5_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/zis5/start"}
		{link_sound "engine_stop"		"vehicle/engine/zis5/stop"}
		{link_sound "engine_idle"		"vehicle/engine/zis5/idle"}
		{link_sound "engine_full"		"vehicle/engine/zis5/full"}
		{link_sound "exhaust"			"vehicle/engine/zis5/exhaust"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "move"				"vehicle/wheels/truck"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
	}
)

(define "yag10_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/zis5/start"}
		{link_sound "engine_stop"		"vehicle/engine/zis5/stop"}
		{link_sound "engine_idle"		"vehicle/engine/zis5/idle"}
		{link_sound "engine_full"		"vehicle/engine/zis5/full"}
		{link_sound "exhaust"			"vehicle/engine/zis5/exhaust"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "move"				"vehicle/wheels/truck"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
	}
)

(define "gaz_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/gaz/start"}
		{link_sound "engine_stop"		"vehicle/engine/gaz/stop"}
		{link_sound "engine_idle"		"vehicle/engine/gaz/idle"}
		{link_sound "engine_full"		"vehicle/engine/gaz/full"}
		{link_sound "exhaust"			"vehicle/engine/gaz/exhaust"}
		{link_sound "move"				"vehicle/wheels/car/"}
	}
)

(define "ba_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/ba/start"}
		{link_sound "engine_stop"		"vehicle/engine/ba/stop"}
		{link_sound "engine_idle"		"vehicle/engine/ba/idle"}
		{link_sound "engine_full"		"vehicle/engine/ba/full"}
		{link_sound "exhaust"			"vehicle/engine/ba/exhaust"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "brake"				"vehicle/wheels/brake"}

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

(define "t26_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t26/start"}
		{link_sound "engine_stop"		"vehicle/engine/t26/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t26/idle"}
		{link_sound "engine_full"		"vehicle/engine/t26/full"}
		{link_sound "exhaust"			"vehicle/engine/t26/exhaust"}
		{link_sound "move"				"vehicle/tracks/t26/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "t27_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t27/start"}
		{link_sound "engine_stop"		"vehicle/engine/t27/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t27/idle"}
		{link_sound "engine_full"		"vehicle/engine/t27/full"}
		{link_sound "exhaust"			"vehicle/engine/t27/exhaust"}
		{link_sound "move"				"vehicle/tracks/t27/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "t28_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t28/start"}
		{link_sound "engine_stop"		"vehicle/engine/t28/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t28/idle"}
		{link_sound "engine_full"		"vehicle/engine/t28/full"}
		{link_sound "exhaust"			"vehicle/engine/t28/exhaust"}
		{link_sound "move"				"vehicle/tracks/t28/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "bt_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/bt/start"}
		{link_sound "engine_stop"		"vehicle/engine/bt/stop"}
		{link_sound "engine_idle"		"vehicle/engine/bt/idle"}
		{link_sound "engine_full"		"vehicle/engine/bt/full"}
		{link_sound "exhaust"			"vehicle/engine/bt/exhaust"}
		{link_sound "move"				"vehicle/tracks/bt/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "t70_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t70/start"}
		{link_sound "engine_stop"		"vehicle/engine/t70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
		{link_sound "engine_full"		"vehicle/engine/t70/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t70/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "t34_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "su85_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
)

(define "t34_85_45_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "kv_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/kv/start"}
		{link_sound "engine_stop"		"vehicle/engine/kv/stop"}
		{link_sound "engine_idle"		"vehicle/engine/kv/idle"}
		{link_sound "engine_full"		"vehicle/engine/kv/full"}
		{link_sound "exhaust"			"vehicle/engine/kv/exhaust"}
		{link_sound "move"				"vehicle/tracks/kv/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
	}
)

(define "is_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
	}
)

(define "nkl_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/nkl/start"}
		{link_sound "engine_stop"		"vehicle/engine/nkl/stop"}
		{link_sound "engine_idle"		"vehicle/engine/nkl/idle"}
		{link_sound "engine_full"		"vehicle/engine/nkl/full"}
		{link_sound "engine_accelerate"	"vehicle/engine/nkl/accelerate"}
		{link_sound "engine_decelerate"	"vehicle/engine/nkl/decelerate"}
		{link_sound "move"				"vehicle/wheels/car/"}
		{link_sound "brake"				"vehicle/wheels/snow_skis/brake/"}

		{link_sound "wheel_ground"		"vehicle/wheels/snow_skis/overlay/ski_overlay_rock"}
		{link_sound "wheel_sand"		"vehicle/wheels/snow_skis/overlay/ski_overlay_snow"}
		{link_sound "wheel_grass"		"vehicle/wheels/snow_skis/overlay/ski_overlay_rock"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/snow_skis/overlay/ski_overlay_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/snow_skis/overlay/ski_overlay_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/snow_skis/overlay/ski_overlay_rock"}
		{link_sound "wheel_rock"		"vehicle/wheels/snow_skis/overlay/ski_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/snow_skis/overlay/ski_overlay_rock"}
	}
)

;/*=========== Soviet Vehicles End ===========*/

;/*=========== United States Vehicles Begin ===========*/

(define "m3_halftrack_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M3_Halftrack/start"}
		{link_sound "engine_stop"		"vehicle/engine/M3_Halftrack/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M3_Halftrack/idle"}
		{link_sound "engine_full"		"vehicle/engine/M3_Halftrack/full"}
		{link_sound "exhaust"			"vehicle/engine/M3_Halftrack/exhaust"}
		{link_sound "move"				"vehicle/tracks/M3_Halftrack/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
	}
)
(define "m3_stuart_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m5a1_stuart/start"}
		{link_sound "engine_stop"		"vehicle/engine/m5a1_stuart/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m5a1_stuart/idle"}
		{link_sound "engine_full"		"vehicle/engine/m5a1_stuart/full"}
		{link_sound "exhaust"			"vehicle/engine/m5a1_stuart/exhaust"}
		{link_sound "move"				"vehicle/tracks/m5a1_stuart/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)
(define "m8_greyhound_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/M8_Greyhound/start"}
		{link_sound "engine_full"		"vehicle/engine/M8_Greyhound/full"}
		{link_sound "engine_stop"		"vehicle/engine/M8_Greyhound/stop"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
		{link_sound "exhaust"			"vehicle/engine/M8_Greyhound/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/M8_Greyhound/idle"}
		{link_sound "brake"				"vehicle/wheels/brake"}

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
(define "m5a1_stuart_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m5a1_stuart/start"}
		{link_sound "engine_stop"		"vehicle/engine/m5a1_stuart/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m5a1_stuart/idle"}
		{link_sound "engine_full"		"vehicle/engine/m5a1_stuart/full"}
		{link_sound "exhaust"			"vehicle/engine/m5a1_stuart/exhaust"}
		{link_sound "move"				"vehicle/tracks/m5a1_stuart/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "m24_chaffee_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M24_Chaffee/start"}
		{link_sound "engine_stop"		"vehicle/engine/M24_Chaffee/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M24_Chaffee/idle"}
		{link_sound "engine_full"		"vehicle/engine/M24_Chaffee/full"}
		{link_sound "exhaust"			"vehicle/engine/M24_Chaffee/exhaust"}
		{link_sound "move"				"vehicle/tracks/M24_Chaffee/"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_light"}
	}
)
(define "m3_lee_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4_Sherman/exhaust"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
		{link_sound "rotate_turret1"	"vehicle/turret/handcrank/handcrank_light"}
		{link_sound "rotate_turret2"	""}
	}
)
(define "m4_sherman_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4_Sherman/exhaust"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "m4_105_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4_Sherman/exhaust"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_heavy"}
	}
)
(define "m4a2_sherman_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4a2_sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4a2_sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4a2_sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/m4a2_sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/m4a2_sherman/exhaust"}
		{link_sound "move"				"vehicle/tracks/m4a2_sherman/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "m10_gmc_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4a2_sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4a2_sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4a2_sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/m4a2_sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/m4a2_sherman/exhaust"}
		{link_sound "move"				"vehicle/tracks/M4_Sherman/Rubber/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_heavy"}
	}
)
(define "m4a3_sherman_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4A3_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4A3_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4A3_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4A3_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4A3_Sherman/exhaust"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "m4a3_105_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M4A3_Sherman/start"}
		{link_sound "engine_stop"		"vehicle/engine/M4A3_Sherman/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M4A3_Sherman/idle"}
		{link_sound "engine_full"		"vehicle/engine/M4A3_Sherman/full"}
		{link_sound "exhaust"			"vehicle/engine/M4A3_Sherman/exhaust"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_heavy"}
	}
)
(define "m4_radial_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4_radial/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4_radial/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4_radial/idle"}
		{link_sound "engine_full"		"vehicle/engine/m4_radial/full"}
		{link_sound "exhaust"			"vehicle/engine/m4_radial/exhaust"}
		{link_sound "move"				"vehicle/tracks/m4_radial/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "m26_pershing_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M26_Pershing/start"}
		{link_sound "engine_stop"		"vehicle/engine/M26_Pershing/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M26_Pershing/idle"}
		{link_sound "engine_full"		"vehicle/engine/M26_Pershing/full"}
		{link_sound "exhaust"			"vehicle/engine/M26_Pershing/exhaust"}
		{link_sound "move"				"vehicle/tracks/M26_Pershing/"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_heavy"}
		{link_sound "move"				"vehicle/tracks/M4_Sherman/Steel/"}
	}
)
(define "m4_ford_v8_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4_ford_v8/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4_ford_v8/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4_ford_v8/idle"}
		{link_sound "engine_full"		"vehicle/engine/m4_ford_v8/full"}
		{link_sound "exhaust"			"vehicle/engine/m4_ford_v8/exhaust"}
		{link_sound "move"				"vehicle/tracks/m4_ford_v8/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "willys_mb_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/Willys_MB/start"}
		{link_sound "engine_stop"		"vehicle/engine/Willys_MB/stop"}
		{link_sound "engine_idle"		"vehicle/engine/Willys_MB/idle"}
		{link_sound "engine_full"		"vehicle/engine/Willys_MB/full"}
		{link_sound "exhaust"			"vehicle/engine/Willys_MB/exhaust"}
		{link_sound "move"				"vehicle/wheels/car"}
		{link_sound "brake"				"vehicle/wheels/brake"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
	}
)
(define "wc51_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/WC51/start"}
		{link_sound "engine_stop"		"vehicle/engine/WC51/stop"}
		{link_sound "engine_idle"		"vehicle/engine/WC51/idle"}
		{link_sound "engine_full"		"vehicle/engine/WC51/full"}
		{link_sound "exhaust"			"vehicle/engine/WC51/exhaust"}
		{link_sound "move"				"vehicle/wheels/car"}
		{link_sound "brake"				"vehicle/wheels/brake"}
	}
)
(define "cckw_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/WC51/start"}
		{link_sound "engine_stop"		"vehicle/engine/WC51/stop"}
		{link_sound "engine_idle"		"vehicle/engine/WC51/idle"}
		{link_sound "engine_full"		"vehicle/engine/WC51/full"}
		{link_sound "exhaust"			"vehicle/engine/WC51/exhaust"}
		{link_sound "move"				"vehicle/wheels/car"}
		{link_sound "brake"				"vehicle/wheels/brake"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
	}
)

;/*=========== United States Vehicles End ===========*/



;/*=========== Lend-Lease Vehicles Begin ===========*/


(define "studebaker_sound" ;// Temp until it gets it's own sound
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/zis5/start"}
		{link_sound "engine_stop"		"vehicle/engine/zis5/stop"}
		{link_sound "engine_idle"		"vehicle/engine/zis5/idle"}
		{link_sound "engine_full"		"vehicle/engine/zis5/full"}
		{link_sound "exhaust"			"vehicle/engine/zis5/exhaust"}
		{link_sound "move"				"vehicle/wheels/truck"}
		{link_sound "brake"				"vehicle/wheels/brake"}
	}
)

(define "universal_carrier_sound" ;// Temp until it gets it's own sound
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t27/start"}
		{link_sound "engine_stop"		"vehicle/engine/t27/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t27/idle"}
		{link_sound "engine_full"		"vehicle/engine/t27/full"}
		{link_sound "exhaust"			"vehicle/engine/t27/exhaust"}
		{link_sound "move"				"vehicle/tracks/t27/"}
	}
)

(define "valentine_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/valentine/start"}
		{link_sound "engine_stop"		"vehicle/engine/valentine/stop"}
		{link_sound "engine_idle"		"vehicle/engine/valentine/idle"}
		{link_sound "engine_full"		"vehicle/engine/valentine/full"}
		{link_sound "exhaust"			"vehicle/engine/valentine/exhaust"}
		{link_sound "move"				"vehicle/tracks/valentine/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "churchill_sound"	 ;// Temp until it gets it's own sound
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t28/start"}
		{link_sound "engine_stop"		"vehicle/engine/t28/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t28/idle"}
		{link_sound "engine_full"		"vehicle/engine/t28/full"}
		{link_sound "exhaust"			"vehicle/engine/t28/exhaust"}
		{link_sound "move"				"vehicle/tracks/t28/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
	}
)


;/*=========== Lend-Lease Vehicles End ===========*/

;/*=========== Generic Cannon Groups Begin ===========*/

(define "cannon_skis"
	{on "add_movement_sound" overload ;// split add movements into separate define and nest this one into it. separate so different turret/gun rotate sounds can be added.
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small"}
	}

	{on spawn
		{link_sound "wheel_ground"		"vehicle/cannon_roll/overlays/cannon_ski_overlay_rock"}
		{link_sound "wheel_sand"		"vehicle/cannon_roll/overlays/cannon_ski_overlay_snow"}
		{link_sound "wheel_grass"		"vehicle/cannon_roll/overlays/cannon_ski_overlay_rock"}
		{link_sound "wheel_water"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/cannon_roll/overlays/cannon_ski_overlay_rock"}
		{link_sound "wheel_snow"		"vehicle/cannon_roll/overlays/cannon_ski_overlay_snow"}
		{link_sound "wheel_road"		"vehicle/cannon_roll/overlays/cannon_ski_overlay_rock"}
		{link_sound "wheel_rock"		"vehicle/cannon_roll/overlays/cannon_ski_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/cannon_roll/overlays/cannon_ski_overlay_rock"}
	}
)

(define "cannon_small"
	{on "add_movement_sound" overload ;// split add movements into separate define and nest this one into it. separate so different turret/gun rotate sounds can be added.
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small"}
	}

	{on spawn
		{link_sound "wheel_ground"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_snow"		"vehicle/cannon_roll/overlays/cannon_overlay_snow"}
		{link_sound "wheel_road"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_rock"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_wood"		"vehicle/cannon_roll/overlays/cannon_overlay_wood"}
	}
)

(define "cannon_big"
	{on "add_movement_sound" overload ;// split add movements into separate define and nest this one into it. separate so different turret/gun rotate sounds can be added.
		{link_sound "rotate_turret"		"vehicle/turret/cannon/big"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/big"}
	}

	{on spawn
		{link_sound "wheel_ground"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/cannon_roll/overlays/cannon_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/cannon_roll/overlays/cannon_overlay_ground"}
		{link_sound "wheel_snow"		"vehicle/cannon_roll/overlays/cannon_overlay_snow"}
		{link_sound "wheel_road"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_rock"		"vehicle/cannon_roll/overlays/cannon_overlay_rock_road"}
		{link_sound "wheel_wood"		"vehicle/cannon_roll/overlays/cannon_overlay_wood"}
	}
)
;/*=========== Generic Cannon Groups End ===========*/

;/*=========== United Kingdom Vehicles Begin ===========*/
(define "bedford_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/Bedford_OY/start"}
		{link_sound "engine_stop"		"vehicle/engine/Bedford_OY/stop"}
		{link_sound "engine_idle"		"vehicle/engine/Bedford_OY/idle"}
		{link_sound "engine_full"		"vehicle/engine/Bedford_OY/full"}
		{link_sound "exhaust"			"vehicle/engine/Bedford_OY/exhaust"}
		{link_sound "move"				"vehicle/wheels/car"}
		{link_sound "brake"				"vehicle/wheels/brake"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
		{link_sound "open_rear"			"vehicle/doors/blitz/open_rear"}
		{link_sound "close_rear"		"vehicle/doors/blitz/close_rear"}
	}
)
(define "morris_car_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/Morris_C8/start"}
		{link_sound "engine_stop"		"vehicle/engine/Morris_C8/stop"}
		{link_sound "engine_idle"		"vehicle/engine/Morris_C8/idle"}
		{link_sound "engine_full"		"vehicle/engine/Morris_C8/full"}
		{link_sound "exhaust"			"vehicle/engine/Morris_C8/exhaust"}
		{link_sound "move"				"vehicle/wheels/car"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "rotate_turret" 	"vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}

		{link_sound "open_left"			"vehicle/doors/blitz/open_left"}
		{link_sound "open_right"		"vehicle/doors/blitz/open_right"}
	}
)
(define "aec_mkI_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/AEC_MkI/start"}
		{link_sound "engine_full"		"vehicle/engine/AEC_MkI/full"}
		{link_sound "engine_stop"		"vehicle/engine/AEC_MkI/stop"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
		{link_sound "exhaust"			"vehicle/engine/AEC_MkI/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/AEC_MkI/idle"}
		{link_sound "brake"				"vehicle/wheels/brake"}

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
(define "aec_mkII_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/AEC_MkII/start"}
		{link_sound "engine_full"		"vehicle/engine/AEC_MkII/full"}
		{link_sound "engine_stop"		"vehicle/engine/AEC_MkII/stop"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
		{link_sound "exhaust"			"vehicle/engine/AEC_MkII/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/AEC_MkII/idle"}
		{link_sound "brake"				"vehicle/wheels/brake"}

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
(define "daimler_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/Daimler_AC/start"}
		{link_sound "engine_full"		"vehicle/engine/Daimler_AC/full"}
		{link_sound "engine_stop"		"vehicle/engine/Daimler_AC/stop"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
		{link_sound "exhaust"			"vehicle/engine/Daimler_AC/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/Daimler_AC/idle"}
		{link_sound "brake"				"vehicle/wheels/brake"}

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
(define "humber_sound" ;// Temp until it gets it's own sound
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/AEC_MkII/start"}
		{link_sound "engine_full"		"vehicle/engine/AEC_MkII/full"}
		{link_sound "engine_stop"		"vehicle/engine/AEC_MkII/stop"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
		{link_sound "exhaust"			"vehicle/engine/AEC_MkII/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/AEC_MkII/idle"}
		{link_sound "brake"				"vehicle/wheels/brake"}

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
(define "morris_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/Morris_C8/start"}
		{link_sound "engine_stop"		"vehicle/engine/Morris_C8/stop"}
		{link_sound "engine_idle"		"vehicle/engine/Morris_C8/idle"}
		{link_sound "engine_full"		"vehicle/engine/Morris_C8/full"}
		{link_sound "exhaust"			"vehicle/engine/Morris_C8/exhaust"}
		{link_sound "brake"				"vehicle/wheels/brake"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small"}

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
(define "staghound_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "engine_start"		"vehicle/engine/T17E1_Staghound/start"}
		{link_sound "engine_full"		"vehicle/engine/T17E1_Staghound/full"}
		{link_sound "engine_stop"		"vehicle/engine/T17E1_Staghound/stop"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_light"}
		{link_sound "exhaust"			"vehicle/engine/T17E1_Staghound/exhaust"}
		{link_sound "engine_idle"		"vehicle/engine/T17E1_Staghound/idle"}
		{link_sound "brake"				"vehicle/wheels/brake"}

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
(define "universal_carrier_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/Universal_Carrier/start"}
		{link_sound "engine_stop"		"vehicle/engine/Universal_Carrier/stop"}
		{link_sound "engine_idle"		"vehicle/engine/Universal_Carrier/idle"}
		{link_sound "engine_full"		"vehicle/engine/Universal_Carrier/full"}
		{link_sound "exhaust"			"vehicle/engine/Universal_Carrier/exhaust"}
		{link_sound "move"				"vehicle/tracks/t27/"}
	}
)

(define "matilda_mk1_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A11_Matilda_I/start"}
		{link_sound "engine_stop"		"vehicle/engine/A11_Matilda_I/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A11_Matilda_I/idle"}
		{link_sound "engine_full"		"vehicle/engine/A11_Matilda_I/full"}
		{link_sound "exhaust"			"vehicle/engine/A11_Matilda_I/exhaust"}
		{link_sound "move"				"vehicle/tracks/valentine/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "light_mk_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A17_Tetrarch/start"}
		{link_sound "engine_stop"		"vehicle/engine/A17_Tetrarch/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A17_Tetrarch/idle"}
		{link_sound "engine_full"		"vehicle/engine/A17_Tetrarch/full"}
		{link_sound "exhaust"			"vehicle/engine/A17_Tetrarch/exhaust"}
		{link_sound "move"				"vehicle/tracks/valentine/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "tetrarch_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A17_Tetrarch/start"}
		{link_sound "engine_stop"		"vehicle/engine/A17_Tetrarch/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A17_Tetrarch/idle"}
		{link_sound "engine_full"		"vehicle/engine/A17_Tetrarch/full"}
		{link_sound "exhaust"			"vehicle/engine/A17_Tetrarch/exhaust"}
		{link_sound "move"				"vehicle/tracks/valentine/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)

(define "cruiser_mk1_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A9_Cruiser_MkI/start"}
		{link_sound "engine_stop"		"vehicle/engine/A9_Cruiser_MkI/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A9_Cruiser_MkI/idle"}
		{link_sound "engine_full"		"vehicle/engine/A9_Cruiser_MkI/full"}
		{link_sound "exhaust"			"vehicle/engine/A9_Cruiser_MkI/exhaust"}
		{link_sound "move"				"vehicle/tracks/valentine/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "cruiser_mk3_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A15_Crusader/start"}
		{link_sound "engine_stop"		"vehicle/engine/A15_Crusader/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A15_Crusader/idle"}
		{link_sound "engine_full"		"vehicle/engine/A15_Crusader/full"}
		{link_sound "exhaust"			"vehicle/engine/A15_Crusader/exhaust"}
		{link_sound "move"				"vehicle/tracks/valentine/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "matilda_mk2_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A12_Matilda_II/start"}
		{link_sound "engine_stop"		"vehicle/engine/A12_Matilda_II/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A12_Matilda_II/idle"}
		{link_sound "engine_full"		"vehicle/engine/A12_Matilda_II/full"}
		{link_sound "exhaust"			"vehicle/engine/A12_Matilda_II/exhaust"}
		{link_sound "move"			"vehicle/tracks/A12_Matilda_II/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "crusader_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A15_Crusader/start"}
		{link_sound "engine_stop"		"vehicle/engine/A15_Crusader/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A15_Crusader/idle"}
		{link_sound "engine_full"		"vehicle/engine/A15_Crusader/full"}
		{link_sound "exhaust"			"vehicle/engine/A15_Crusader/exhaust"}
		{link_sound "move"				"vehicle/tracks/valentine/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)

(define "crusader_aa_mk1_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A15_Crusader/start"}
		{link_sound "engine_stop"		"vehicle/engine/A15_Crusader/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A15_Crusader/idle"}
		{link_sound "engine_full"		"vehicle/engine/A15_Crusader/full"}
		{link_sound "exhaust"			"vehicle/engine/A15_Crusader/exhaust"}
		{link_sound "move"				"vehicle/tracks/valentine/"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small"}
	}
)
(define "churchill_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A22_Churchill/start"}
		{link_sound "engine_stop"		"vehicle/engine/A22_Churchill/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A22_Churchill/idle"}
		{link_sound "engine_full"		"vehicle/engine/A22_Churchill/full"}
		{link_sound "exhaust"			"vehicle/engine/A22_Churchill/exhaust"}
		{link_sound "move"			"vehicle/tracks/A27M_Cromwell/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
	}
)
(define "cromwell_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A27M_Cromwell/start"}
		{link_sound "engine_stop"		"vehicle/engine/A27M_Cromwell/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A27M_Cromwell/idle"}
		{link_sound "engine_full"		"vehicle/engine/A27M_Cromwell/full"}
		{link_sound "exhaust"			"vehicle/engine/A27M_Cromwell/exhaust"}
		{link_sound "move"				"vehicle/tracks/A27M_Cromwell/"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_heavy"}
	}
)

(define "challenger_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/A27M_Cromwell/start"}
		{link_sound "engine_stop"		"vehicle/engine/A27M_Cromwell/stop"}
		{link_sound "engine_idle"		"vehicle/engine/A27M_Cromwell/idle"}
		{link_sound "engine_full"		"vehicle/engine/A27M_Cromwell/full"}
		{link_sound "exhaust"			"vehicle/engine/A27M_Cromwell/exhaust"}
		{link_sound "move"				"vehicle/tracks/A27M_Cromwell/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_heavy"}
	}
)
(define "valentine_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/valentine/start"}
		{link_sound "engine_stop"		"vehicle/engine/valentine/stop"}
		{link_sound "engine_idle"		"vehicle/engine/valentine/idle"}
		{link_sound "engine_full"		"vehicle/engine/valentine/full"}
		{link_sound "exhaust"			"vehicle/engine/valentine/exhaust"}
		{link_sound "move"				"vehicle/tracks/valentine/"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "m22_locust_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/M22_Locust/start"}
		{link_sound "engine_stop"		"vehicle/engine/M22_Locust/stop"}
		{link_sound "engine_idle"		"vehicle/engine/M22_Locust/idle"}
		{link_sound "engine_full"		"vehicle/engine/M22_Locust/full"}
		{link_sound "exhaust"			"vehicle/engine/M22_Locust/exhaust"}
		{link_sound "move"				"vehicle/tracks/m5a1_stuart/"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
)
;/*=========== United Kingdom Vehicles End ===========*/
