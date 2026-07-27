
{"tank"
	(include "\set\interaction_terrain\effects\effects-defines.inc")
	{on spawn
		{set "smoke1" 0}				;// used in burn_emit call
		{set "smoke2" 0}				;// used in burn_emit call
		{set "turret" 0}  				;// allows for extra code to applied to mantlet damage when tank has no turret
		;{call "shield_checker"}		;// randomizes shield bones
		{call "update_hatch_on_spawn"}	;// updates vehicle hatches
		{call "add_overlay_sound"}		;// adds terrain specific sounds to enhance the tank track sounds
		{call "crew_able"}				;// re-enables seats for conquest on unit respawn



		;/*=========== Sounds Begin ===========*/

		;//{example    "name used in code" 	    "sound file or folder"}
		{link_sound "flame"						"fire/metal"}
		{link_sound "flame_1"					"fire/metal"}
;		{link_sound "move"						"vehicle/tracks/trackclank"}
;		{link_sound "heavy_move"				"vehicle/tracks/heavy"}
		{link_sound "engine_idle"				"vehicle/engine/tank"}
		{link_sound "brake"						"vehicle/tracks/brake"}
		{link_sound "rotate_gun"				"vehicle/turret/gun/gun_vertical"}
		{link_sound "spo"	"vehicle/other/shtora"}       ;ordos++
		{stop_sound "spo"}                                    ;ordos++

		{link_sound "bkg_mg" "weapon/shot/bkg/gun/mg/"}
		{link_sound "contact" "fire/loops/big"}
		;/*=========== Sounds End ===========*/

		;/*=========== Track FX Begin ===========*/

	 ;//{example    "fx file"               "name used in code"   		"where fx plays (entity bone)"}
		{add_view	"dustrun_small"			"on_ground_slow"			"FXtraceR1"}
		{add_view	"dustrun_small"			"on_ground_slow"			"FXtraceL1"}
		{add_view	"tank_grit_small"		"on_grass_slow"				"FXtraceR1"}
		{add_view	"tank_grit_small"		"on_grass_slow"				"FXtraceL1"}
		{add_view	"dustrun_sand_small"	"on_sand_slow"				"FXtraceR1"}
		{add_view	"dustrun_sand_small"	"on_sand_slow"				"FXtraceL1"}
		{add_view	"dustrun_medium_grass2"	"on_snow_slow"				"FXtraceR1"}
		{add_view	"dustrun_medium_grass2"	"on_snow_slow"				"FXtraceL1"}
		{add_view	"dustrun_small"			"on_country_road_slow"		"FXtraceR1"}
		{add_view	"dustrun_small"			"on_country_road_slow"		"FXtraceL1"}

		{add_view	"dustrun_medium_grass"	"on_ground_medium"			"FXtraceR1"}
		{add_view	"dustrun_medium_grass"	"on_ground_medium"			"FXtraceL1"}
		{add_view	"dustrun_medium_grass"	"on_grass_medium"			"FXtraceR1"}
		{add_view	"dustrun_medium_grass"	"on_grass_medium"			"FXtraceL1"}
		{add_view	"dustrun_sand_medium"	"on_sand_medium"			"FXtraceR1"}
		{add_view	"dustrun_sand_medium"	"on_sand_medium"			"FXtraceL1"}
		{add_view	"dustrun_snow_medium"	"on_snow_medium"			"FXtraceR1"}
		{add_view	"dustrun_snow_medium"	"on_snow_medium"			"FXtraceL1"}
		{add_view	"dustrun_small"			"on_country_road_medium"	"FXtraceR1"}
		{add_view	"dustrun_small"			"on_country_road_medium"	"FXtraceL1"}

		{add_view	"dustrun_big"			"on_ground_fast"			"FXtraceR1"}
		{add_view	"dustrun_big"			"on_ground_fast"			"FXtraceL1"}
		{add_view	"dustrun_small"			"on_grass_fast"				"FXtraceR1"}
		{add_view	"dustrun_small"			"on_grass_fast"				"FXtraceL1"}
		{add_view	"dustrun_sand_big"		"on_sand_fast"				"FXtraceR1"}
		{add_view	"dustrun_sand_big"		"on_sand_fast"				"FXtraceL1"}
		{add_view	"dustrun_snow_big"		"on_snow_fast"				"FXtraceR1"}
		{add_view	"dustrun_snow_big"		"on_snow_fast"				"FXtraceL1"}
		{add_view	"dustrun_small"			"on_country_road_fast"		"FXtraceR1"}
		{add_view	"dustrun_small"			"on_country_road_fast"		"FXtraceL1"}

		{add_view	"disc_dustrun_big_sand"	"dust_sand"					"FXtraceM1"}
		{add_view	"disc_dustrun_big_snow"	"dust_snow"					"FXtraceM1"}
		{add_view	"disc_dustrun_big"		"dust"						"FXtraceM1"}

		{add_view	"tank_grit_small"		"on_ground"				"FXtraceR2"}
		{add_view	"tank_grit_small"		"on_ground"				"FXtraceL2"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXtraceR2"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXtraceL2"}
		{add_view	"tank_grit_small"		"on_grass"				"FXtraceR2"}
		{add_view	"tank_grit_small"		"on_grass"				"FXtraceL2"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXtraceR2"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXtraceL2"}
		{add_view	"drops_water"			"on_water"				"FXtraceR1"}
		{add_view	"drops_water"			"on_water"				"FXtraceL1"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXtraceR2"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXtraceL2"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXtraceR2"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXtraceL2"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXtraceR1"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXtraceL1"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXtraceR2"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXtraceL2"}

		;/*=========== Track FX End ===========*/

		;/*=========== Smoke/Fire FX Begin ===========*/

		{add_view	"smoke_white_steam"				"smoke1_1"				"FXfire1"} ;// engine

		{add_view	"smoke_black"					"smoke2"				 "turret"} ;// turret break smoke

		{add_view	"fire_cooking_aftersmoke"		"smoke3"				"FXfire3"} ;// burn out fx for mp destroy. turret hatch.
		{add_view	"fire_cooking_aftersmoke"		"smoke3"				"FXfire3_2"} ;// burn out fx for mp destroy. turret hatch.
		{add_view	"smoke_dead_norm"				"smoke3"				"FXfire5"} ;// burn out fx for mp destroy. open top vehicles.

		{add_view	"fire_vehicle_death_hatch"		"fire_vehicle_death"	"FXfire3"}
		{add_view	"fire_vehicle_death_hatch"		"fire_vehicle_death"	"FXfire3_2"}
		{add_view	"smoke_vehicle_death_hatch"		"smoke_vehicle_death"	"FXfire3"}
		{add_view	"smoke_vehicle_death_hatch"		"smoke_vehicle_death"	"FXfire3_2"}
		{add_view	"fire_vehicle_death"			"fire_vehicle_death"	"FXfire5"}
		{add_view	"smoke_vehicle_death"			"smoke_vehicle_death"	"FXfire5"}

		{add_view	"smoke_dead_small2"				"smoke3_1"				"FXfire3"}
		{add_view	"fire_cooking_smoke"			"smoke3_2"				"FXfire3"}
		{add_view	"fire_cooking_afterfire"		"smoke3_3"				"FXfire3"}
		{add_view	"fire_cooking_explosion_flames"	"smoke3_4"				"FXfire3"}
		{add_view	"fire_cooking_explosion"		"smoke3_5"				"FXfire3"}
		{add_view	"fire_cooking_explosion"		"smoke3_6"				"FXfire3"}
		{add_view	"fire_cooking_presmoke"			"smoke3_7"				"FXfire3"}
		{add_view	"fire_cooking_medium_1a"		"smoke3_8"				"FXfire3"}
		{add_view	"fire_cooking_medium_1b"		"smoke3_9"				"FXfire3"}
		{add_view	"fire_cooking_medium_1c"		"smoke3_10"				"FXfire3"}
		{add_view	"fire_cooking_high"				"smoke3_11"				"FXfire3"}
		{view hide "smoke3_11"}	;// fx has a glow that will show unless hidden until later called

		{add_view	"cooking_presmoke_1"		"cooking_presmoke_1"	"FXfire3"}
		{add_view	"cooking_presmoke_2"		"cooking_presmoke_2"	"FXfire3"}
		{add_view	"cooking_presmoke_3"		"cooking_presmoke_3"	"FXfire3"}
		{add_view	"cooking_high"				"cooking_high"			"FXfire3"}
		{view hide  "cooking_high"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_high_2"			"cooking_high_2"	"FXfire3"}
		{view hide  "cooking_high_2"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_hatch_fire"		"cooking_hatch_fire"	"FXfire3"}
		{view hide  "cooking_hatch_fire"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_hatch_smoke"		"cooking_hatch_smoke"	"FXfire3"}

		{add_view	"cooking_presmoke_1"		"cooking_presmoke_1"	"FXfire3_2"}
		{add_view	"cooking_presmoke_2"		"cooking_presmoke_2"	"FXfire3_2"}
		{add_view	"cooking_presmoke_3"		"cooking_presmoke_3"	"FXfire3_2"}
		{add_view	"cooking_high"				"cooking_high"			"FXfire3_2"}
		{view hide  "cooking_high"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_high_2"			"cooking_high_2"	"FXfire3_2"}
		{view hide  "cooking_high_2"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_hatch_fire"		"cooking_hatch_fire"	"FXfire3_2"}
		{view hide  "cooking_hatch_fire"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_hatch_smoke"		"cooking_hatch_smoke"	"FXfire3_2"}

		{add_view	"cooking_turret_ring"		"cooking_turret_fire"	"FXfire4"} ;// turret base
		{add_view	"cooking_turret_smoke"		"cooking_turret_smoke"	"FXfire4"}
		{add_view	"smoke_after_pen_hatch"		"smoke_after_pen_hatch"	"turret"}


		;{add_view	"smoke_dead_small2a"			"smoke3_12"				"FXfire3"}
		;{add_view	"smoke_dead_small2a"			"smoke3_13"				"FXfire3"}
		;{add_view	"smoke_dead_small2b"			"smoke3_14"				"FXfire3"}

		;{add_view	"fire_cooking_turret_smoke"		"smoke4"				"FXfire4"} ;// turret base
		;{add_view	"fire_cooking_turret_ring"		"smoke4_1"				"FXfire4"}
		;{add_view	"fire_cooking_turret_ring2"		"smoke4_2"				"FXfire4"}

		{add_view	"cooking_barrel"				"cooking_barrel_fire"	"Foresight1"}
		{add_view	"cooking_barrel_smoke"			"cooking_barrel_smoke" 	"Foresight1"}
		{add_view	"cooking_barrel_aftersmoke"		"cooking_barrel_aftersmoke" "Foresight1"}
		{add_view	"cooking_barrel"				"cooking_barrel_fire2"	"broken_gun"}
		{add_view	"cooking_barrel_smoke"			"cooking_barrel_smoke2" 	"broken_gun"}
		{add_view	"cooking_barrel_aftersmoke"		"cooking_barrel_aftersmoke2" "broken_gun"}

;//		{add_view	"smoke_fuel_fire_smoke"			"smoke_fuel"			 "engine"}
;//		{add_view	"smoke_fuel_fire"				"smoke_fuel_1"			 "engine"}

		{add_view	"smoke_tank_hull_dead"			"smoke_hull_crush"		   "body"} ;// call on body break
		{add_view	"smoke_tank_hull_dead_engine"	"smoke_hull_crush_2"	 "engine"} ;// call on body break

		{call "add_exhaustview"}
		;{call "explosive_amount_tag"}	;// tool to determine explosive amount in vehicles
		;/*=========== Smoke/Fire FX End ===========*/

		{call "update_power"}
	}
	;/*=========== Spawn End ===========*/

	{on "add_overlay_sound"
		{link_sound "wheel_ground"				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_sand"				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_grass"				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_water"				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_puddle"				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_mud"					"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_snow"				"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_road"				"vehicle/tracks/overlay/track_overlay_road"}
		{link_sound "wheel_rock"				"vehicle/tracks/overlay/track_overlay_rock"}
		{link_sound "wheel_wood"				"vehicle/tracks/overlay/track_overlay_wood"}
	}

	;/*=========== Generic Calls Begin ===========*/

	{on "add_exhaustview"
		{delay 0.1
			{if not tagged "add_exhaustview"
				{add_view	"exhaust_dark_big"				"exhaust"			   "FXsmoke1"} ;// engine exhaust
				{add_view	"exhaust_dark_big"				"exhaust"			   "FXsmoke2"} ;// engine exhaust
				{add_view	"exhaust_dark_big"				"exhaust"			   "FXsmoke3"} ;// engine exhaust
				{add_view	"exhaust_dark_big"				"exhaust"			   "FXsmoke4"} ;// engine exhaust
				{add_view	"exhaust_dark_small2"			"exhaust2"			   "FXsmoke1"} ;// idle exhaust
				{add_view	"exhaust_dark_small2"			"exhaust2"			   "FXsmoke2"} ;// idle exhaust
				{add_view	"exhaust_dark_small2"			"exhaust2"			   "FXsmoke3"} ;// idle exhaust
				{add_view	"exhaust_dark_small2"			"exhaust2"			   "FXsmoke4"} ;// idle exhaust
			else
				{tags remove "add_exhaustview"}
			}
		}
	}
	{on "upside_down"				;// when tank flips over
		{reset_manual_control}
		{unlink_trailer}
	}

	{on "_explosion"				;// adds additional code to generic "_explosion" defined in vehicle prop
		{call "kill_cookoff"}
		{set "ammo_cooked" 1}
	}

	{on "spawn_shellhole"			;// called on "_explosion" in vehicle prop
		{if tagged "ammo_broken"
			{spawn "shellhole_dead_tank2" "basis" random_orientation}
		else
			{spawn "shellhole_dead_moto2" "basis" random_orientation}
		}
	}

	{on "cut_parts"					;// called on "_explosion" in vehicle prop
		(define "cut_part"
			{if rand %1
				{if tagged "ammo_broken"
					{tear "piece_medium_steel" bone %0
						{impulse up 8 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 10 no_position}
						{delay_effect 20 5 "stop"}			;// calls {on "stop"} in dummy.inc
					}
				else
					{tear "piece_medium_steel" bone %0
						{impulse up 4 1 dir 2.5 1 cx 2.5 1 cy 2.5 1 rnd_dir 5 no_position}
						{delay_effect 20 5 "stop"}			;// calls {on "stop"} in dummy.inc
					}
				}
			}
		)
		("cut_part" args "part1" 0.6)
		("cut_part" args "part2" 0.6)
		("cut_part" args "part3" 0.6)
		("cut_part" args "part4" 0.6)
		("cut_part" args "part5" 0.6)
		("cut_part" args "part6" 0.6)
		("cut_part" args "part7" 0.6)
		("cut_part" args "part8" 0.6)
		("cut_part" args "part9" 0.6)
		("cut_part" args "part10" 0.6)
	}

	{on "check_burn_emit"								;// re-visit in future for efficiency
		{if not "burn_fire"
			{if not "smoke2"
				{if not "smoke1"
					{able "burning" 0}
				else
					{delay 5
						{call "burn_emit"}
					}
				}
			else
				{delay 5
					{call "burn_emit"}
				}
			}
		else
			{delay 5
				{call "burn_emit"}
			}
		}
	}

	{on fire "gun"
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{ani_play "fire"}
		{call "check_autoloader"}
		("cw_check_shooting" weap_id(gun))
	}

	{on fire "gun1"
		{view start "flashbarrel2s"}
		{ani_play "fire1"}
		("cw_check_shooting" weap_id(gun1))
	}

	{on fire "gun2"
		{view start "flashbarrel2s"}
		{ani_play "fire2"}
		("cw_check_shooting" weap_id(gun2))
	}

	{on fire "gun3"
		{view start "flashbarrel12"}
		{view start "flashbarrel12s"}
		{ani_play "fire3"}
		("cw_check_shooting" weap_id(gun3))
	}

	;/*=========== Generic Calls End ===========*/

	;/*=========== Damages Begin  ===========*/

	(define "cut_shield_part"
		{if component %0
			{delay_ex 0.11
				{tear "piece_medium_steel" bone %0 copy
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
				{bone hide %0}
			}
		}
	)

;------------------------------add by ordos-------ERA things--------------------

(include "era.inc")

;----------------------------add by ordos--------ERA things---------------------

	(define "shed_shield_part"		;// used for extra details on vehicles that are wood (ex. wood log on pz2f)
		{if component %0
			{delay_ex 0.11
				{spawn "wood_crush_big" %0 x}
				{bone hide %0}
				{volumes %0 disable all}
			}
		}
	)
	(define "era_shield_part"		;// used for extra details on vehicles that are wood (ex. wood log on pz2f)
		{if component %0
			{delay_ex 0.11
				{spawn "ex_air_norm" %0 x}
				{bone hide %0}
				{volumes %0 disable all}
			}
		}
	)	

	{on break_armor					;// volume breaks
		{if volume "cupola"
			{call "kill_commander"}
		else volume "mg_port"
			{call "kill_gunner3"}
		}
;---------add by ordos-------
		{if component "d_a"
			("blast_d_a" args "d_a1")("blast_d_a" args "d_a2")("blast_d_a" args "d_a3")("blast_d_a" args "d_a4")("blast_d_a" args "d_a5")
			("blast_d_a" args "d_a6")("blast_d_a" args "d_a7")("blast_d_a" args "d_a8")("blast_d_a" args "d_a9")("blast_d_a" args "d_a10")
			("blast_d_a" args "d_a01")("blast_d_a" args "d_a02")("blast_d_a" args "d_a03")("blast_d_a" args "d_a04")("blast_d_a" args "d_a05")
			("blast_d_a" args "d_a06")("blast_d_a" args "d_a07")("blast_d_a" args "d_a08")("blast_d_a" args "d_a09")			
			("blast_d_a" args "d_a11")("blast_d_a" args "d_a12")("blast_d_a" args "d_a13")("blast_d_a" args "d_a14")("blast_d_a" args "d_a15")
			("blast_d_a" args "d_a16")("blast_d_a" args "d_a17")("blast_d_a" args "d_a18")("blast_d_a" args "d_a19")("blast_d_a" args "d_a20")
			("blast_d_a" args "d_a21")("blast_d_a" args "d_a22")("blast_d_a" args "d_a23")("blast_d_a" args "d_a24")("blast_d_a" args "d_a25")
			("blast_d_a" args "d_a26")("blast_d_a" args "d_a27")("blast_d_a" args "d_a28")("blast_d_a" args "d_a29")("blast_d_a" args "d_a30")
			("blast_d_a" args "d_a31")("blast_d_a" args "d_a32")("blast_d_a" args "d_a33")("blast_d_a" args "d_a34")("blast_d_a" args "d_a35")
			("blast_d_a" args "d_a36")("blast_d_a" args "d_a37")("blast_d_a" args "d_a38")("blast_d_a" args "d_a39")("blast_d_a" args "d_a40")
			("blast_d_a" args "d_a41")("blast_d_a" args "d_a42")("blast_d_a" args "d_a43")("blast_d_a" args "d_a44")("blast_d_a" args "d_a45")
			("blast_d_a" args "d_a46")("blast_d_a" args "d_a47")("blast_d_a" args "d_a48")("blast_d_a" args "d_a49")("blast_d_a" args "d_a50")
			("blast_d_a" args "d_a51")("blast_d_a" args "d_a52")("blast_d_a" args "d_a53")("blast_d_a" args "d_a54")("blast_d_a" args "d_a55")
			("blast_d_a" args "d_a56")("blast_d_a" args "d_a57")("blast_d_a" args "d_a58")("blast_d_a" args "d_a59")("blast_d_a" args "d_a60")
			("blast_d_a" args "d_a61")("blast_d_a" args "d_a62")("blast_d_a" args "d_a63")("blast_d_a" args "d_a64")("blast_d_a" args "d_a65")
			("blast_d_a" args "d_a66")("blast_d_a" args "d_a67")("blast_d_a" args "d_a68")("blast_d_a" args "d_a69")("blast_d_a" args "d_a70")
			("blast_d_a" args "d_a71")("blast_d_a" args "d_a72")("blast_d_a" args "d_a73")("blast_d_a" args "d_a74")("blast_d_a" args "d_a75")
			("blast_d_a" args "d_a76")("blast_d_a" args "d_a77")("blast_d_a" args "d_a78")("blast_d_a" args "d_a79")("blast_d_a" args "d_a80")
			("blast_d_a" args "d_a81")("blast_d_a" args "d_a82")("blast_d_a" args "d_a83")("blast_d_a" args "d_a84")("blast_d_a" args "d_a85")
			("blast_d_a" args "d_a86")("blast_d_a" args "d_a87")("blast_d_a" args "d_a88")("blast_d_a" args "d_a89")("blast_d_a" args "d_a90")
			("blast_d_a" args "d_a91")("blast_d_a" args "d_a92")("blast_d_a" args "d_a93")("blast_d_a" args "d_a94")("blast_d_a" args "d_a95")
			("blast_d_a" args "d_a96")("blast_d_a" args "d_a97")("blast_d_a" args "d_a98")("blast_d_a" args "d_a99")("blast_d_a" args "d_a100")
			("blast_d_a" args "d_a101")("blast_d_a" args "d_a102")("blast_d_a" args "d_a103")("blast_d_a" args "d_a104")("blast_d_a" args "d_a105")
			("blast_d_a" args "d_a106")("blast_d_a" args "d_a107")("blast_d_a" args "d_a108")("blast_d_a" args "d_a109")("blast_d_a" args "d_a110")
			("blast_d_a" args "d_a111")("blast_d_a" args "d_a112")("blast_d_a" args "d_a113")("blast_d_a" args "d_a114")("blast_d_a" args "d_a115")
			("blast_d_a" args "d_a116")("blast_d_a" args "d_a117")("blast_d_a" args "d_a118")("blast_d_a" args "d_a119")("blast_d_a" args "d_a120")
			("blast_d_a" args "d_a121")("blast_d_a" args "d_a122")("blast_d_a" args "d_a123")("blast_d_a" args "d_a124")("blast_d_a" args "d_a125")
			("blast_d_a" args "d_a126")("blast_d_a" args "d_a127")("blast_d_a" args "d_a128")("blast_d_a" args "d_a129")("blast_d_a" args "d_a130")
			("cut_d_a_part" args "d_a130")
("cut_d_a_part" args "d_a131")
("cut_d_a_part" args "d_a132")
("cut_d_a_part" args "d_a133")
("cut_d_a_part" args "d_a134")
("cut_d_a_part" args "d_a135")
("cut_d_a_part" args "d_a136")
("cut_d_a_part" args "d_a137")
("cut_d_a_part" args "d_a138")
("cut_d_a_part" args "d_a139")
("cut_d_a_part" args "d_a140")
("cut_d_a_part" args "d_a141")
("cut_d_a_part" args "d_a142")
("cut_d_a_part" args "d_a143")
("cut_d_a_part" args "d_a144")
("cut_d_a_part" args "d_a145")
("cut_d_a_part" args "d_a146")
("cut_d_a_part" args "d_a147")
("cut_d_a_part" args "d_a148")
("cut_d_a_part" args "d_a149")
("cut_d_a_part" args "d_a150")
("cut_d_a_part" args "d_a151")
("cut_d_a_part" args "d_a152")
("cut_d_a_part" args "d_a153")
("cut_d_a_part" args "d_a154")
("cut_d_a_part" args "d_a155")
("cut_d_a_part" args "d_a156")
("cut_d_a_part" args "d_a157")
("cut_d_a_part" args "d_a158")
("cut_d_a_part" args "d_a159")
("cut_d_a_part" args "d_a160")
("cut_d_a_part" args "d_a161")
("cut_d_a_part" args "d_a162")
("cut_d_a_part" args "d_a163")
("cut_d_a_part" args "d_a164")
("cut_d_a_part" args "d_a165")
("cut_d_a_part" args "d_a166")
("cut_d_a_part" args "d_a167")
			{damage_report "body" "component/era_pierced"}
			{tags add "ordos_debug_era_armor_break"}
		 else component "nera"
		 	("blast_nera" args 1)("blast_nera" args 2)("blast_nera" args 3)("blast_nera" args 4)("blast_nera" args 7)
		 	("blast_nera" args 6)("blast_nera" args 10)("blast_nera" args 11)("blast_nera" args 12)("blast_nera" args 13)
		 	("blast_nera" args 14)("blast_nera" args 15)("blast_nera" args 16)("blast_nera" args 8)("blast_nera" args 9)
		 	("blast_nera" args 5)("blast_nera" args 17)("blast_nera" args 18)("blast_nera" args 19)("blast_nera" args 20)
		 	("blast_nera" args 21)("blast_nera" args 22)("blast_nera" args 23)("blast_nera" args 24)("blast_nera" args 25)
		 	("blast_nera" args 26)("blast_nera" args 27)("blast_nera" args 28)("blast_nera" args 29)("blast_nera" args 30)
		 	("blast_nera" args 31)("blast_nera" args 32)("blast_nera" args 33)("blast_nera" args 34)("blast_nera" args 35)
		 	("blast_nera" args 36)("blast_nera" args 37)("blast_nera" args 38)("blast_nera" args 39)("blast_nera" args 40)
		 	("blast_nera" args 41)("blast_nera" args 42)("blast_nera" args 43)("blast_nera" args 44)("blast_nera" args 45)
		 	("blast_nera" args 46)("blast_nera" args 47)("blast_nera" args 48)("blast_nera" args 49)("blast_nera" args 50)
		 	("blast_nera" args 51)("blast_nera" args 52)("blast_nera" args 53)("blast_nera" args 54)("blast_nera" args 55)
		 	("blast_nera" args 56)("blast_nera" args 57)("blast_nera" args 58)("blast_nera" args 59)("blast_nera" args 60)
		 	("blast_nera" args 61)("blast_nera" args 62)("blast_nera" args 63)("blast_nera" args 64)("blast_nera" args 65)
		 	("blast_nera" args 66)("blast_nera" args 67)("blast_nera" args 68)("blast_nera" args 69)("blast_nera" args 70)
		 	("blast_nera" args 71)("blast_nera" args 72)("blast_nera" args 73)("blast_nera" args 74)("blast_nera" args 75)
		 	("blast_nera" args 76)("blast_nera" args 77)("blast_nera" args 78)("blast_nera" args 79)("blast_nera" args 80)
		 	("blast_nera" args 81)("blast_nera" args 82)("blast_nera" args 83)("blast_nera" args 84)("blast_nera" args 85)
		 	("blast_nera" args 86)("blast_nera" args 87)("blast_nera" args 88)("blast_nera" args 89)("blast_nera" args 90)
		    	{tags add "ordos_debug_nera_break"}
		}
;------------------add by ordos---------
	}

	{on break_armor_again			;// volume is broken again before related component is repaired
		{if volume "cupola"
			{call "kill_commander"}
		else volume "mg_port"
			{call "kill_gunner3"}
		}
	}

	{on break						;// {on break} is for when components break
		{if not tagged "exploded"
			{start_sound "crush/medium/metal"}
			{if component "ammo"      ;ordos add
				{call "ammo_break"}
			}
			{if component "ammo_storage_main"
				{call "ammo_break"}
			}
			{if component "ammo_storage_autocannon"
				{spawn "ex_air_big"}
				{blastwave c4 3 r0 2 r1 6}
				{delay_ex 0.2 0.5
					{spawn "ex_air_big" inv_normal}
					{blastwave c4 3 r0 2 r1 6 position}
				}
				{delay_ex  0.6 1
					{spawn "ex_air_big" inv_normal}
					{blastwave c4 3 r0 2 r1 6 position}
				}
				{delay_ex 1 1.2
					{spawn "ex_air_big" inv_normal}
					{blastwave c4 3 r0 2 r1 6 position}
				}
				{delay_ex 1.3 1.5
					{spawn "ex_air_big" inv_normal}
					{blastwave c4 3 r0 2 r1 6 position}
				}
				{if rand 0.3
					{clear_inventory}
					{tags add "cwfs_set_fuel"}
				}
				{if rand 0.2
					{call "ammo_break"}
				}
			}
			{if component "ammo_storage_mgun"
				{spawn "ex_air_norm"}
				{blastwave c4 2 r0 1 r1 3 position}
				{delay_ex 0.2 0.5
					{spawn "ex_air_norm" inv_normal}
					{blastwave c4 2 r0 1 r1 3 position}
				}
				{delay_ex  0.6 1
					{spawn "ex_air_norm" inv_normal}
					{blastwave c4 2 r0 1 r1 3 position}
				}
				{delay_ex 1 1.2
					{spawn "ex_air_norm" inv_normal}
					{blastwave c4 2 r0 1 r1 3 position}
				}
				{delay_ex 1.3 1.5
					{spawn "ex_air_norm" inv_normal}
					{blastwave c4 2 r0 1 r1 3 position}
				}
			}
			(define "tank_fuel_burn_w81"

				{if rand 0.8
						{burn fx "smoke_dead_norm" fake}
						{tags add "fuel_tank_damaged"}
						{delay 49		{tags remove "fuel_tank_damaged"}}
						{if rand 0.1
							{spawn "ex_air_big"}
							{delay 1		{crew_emit}}
							{delay 2		{crew_emit}}
							{delay 3		{crew_emit}}

						}
						{if rand 0.1
							{able select 0}
							{tags add "burned"}
							{fire radius 4 time 4 heating 0.5}
							{play_sound "flame" 1}
							{spawn "fire_tank_fuel" "basis"}
							{call "burn_emit"}
							{tags add "no_scavenge"}

							{kick_entity_manager}
							{tags add "destroyed"}
							{stop_sound "engine_idle"}
							{delay 20
								{drop_orders}
								{reset_manual_control}
								{able repaired 0}
								{unlink_trailer}
								{clear_inventory}
								{spawn "burned_spot_round2" scale 1.4 random_orientation}
								{delay 0.1
									{spawn "black_target_remover" "missile_aim_point_bone" x}
								}
								{delay 1
									{set_skeleton "_xx" sync}

								}

							}

							{delay 49		{stop_sound "flame"}}

						}
				}


			)
{if component "body"
    {tags add "body_break"}
    {tags add "turret_stopped_by_body"}
    {spawn "tank_die_particle" "body"}
    {reset_manual_control}
    {able select 0}            ;// disables vehicle from being crewed until body is repaired
    {unlink_trailer}
    {delay 0.5
        {spawn "black_target_remover" "missile_aim_point_bone" x}
    }
else component "engine"
    {call "engine stop view"}
    {talk "broken_engine"}
    {tags add "engine_brake"}
    {spawn "tank_die_particle" "engine"}
    {spawn "piece_engine" "body"}
    {view start "smoke1_1"}
    {set "smoke1" 1}
    {call "update_power"}
    {delay 0.1 {call "update_turret"}}
    {delay 30
        {view pause "smoke1_1"}
        {set "smoke1" 0}
    }
    ; 修改为两次摧毁机制
    {if not tagged "crit_system_destroyed"
        {tags add "crit_system_destroyed"}
    else
        {components "body" break}    ; 第二次重要系统损坏就直接摧毁车身
    }
else component "turret"
    {tags add "turret_brake"}
    ; 修改为两次摧毁机制
    {if not tagged "crit_system_destroyed"
        {tags add "crit_system_destroyed"}
    else
        {components "body" break}    ; 第二次重要系统损坏就直接摧毁车身
    }
else component "tank_crit_component"
    {if not tagged "destroyed"
        {damage_report "tank_crit_component" "component/armored/driver_panel_damaged"}
    }
    {spawn "tank_die_particle" "Body"}
    {spawn "piece_driverpanel" "Body"}
    ;{chassis_work 0}
    {call "update_moveability"}
    {tags add "driver_panel_damaged"}
    ; 修改为两次摧毁机制
    {if not tagged "crit_system_destroyed"
        {tags add "crit_system_destroyed"}
    else
        {components "body" break}    ; 第二次重要系统损坏就直接摧毁车身
    }
else component "panel_engine_connector"
    {if not tagged "destroyed"
        {damage_report "panel_engine_connector" "component/armored/panel_engine_connectors_damaged"}
    }
    {spawn "tank_die_particle" "Body"}
    {spawn "piece_engineconnector" "Body"}
    ;{chassis_work 0}
    {call "update_moveability"}
    {tags add "panel_engine_connectors_damaged"}
    ; 修改为两次摧毁机制
    {if not tagged "crit_system_destroyed"
        {tags add "crit_system_destroyed"}
    else
        {components "body" break}    ; 第二次重要系统损坏就直接摧毁车身
    }
			else component "transmission"
				{spawn "tank_die_particle" "Body"}
				{if not tagged "destroyed"
					{damage_report "transmission" "component/armored/transmission_damaged"}
				}
				;{chassis_work 0}
				{call "update_moveability"}
				{tags add "transmission_damaged"}
				{spawn "piece_transmission" "Body"}
				{if not tagged "crit_system_destroyed"
					{tags add "crit_system_destroyed"}
				else
				{if not tagged "crit_system_destroyed2"
					{tags add "crit_system_destroyed2"}
				else
					{components "body" break}
				}
				}
				{if rand 0.15
					{call "_burn"}
				}
			else component "turret_ring"
				{burn fx "smoke_dead_tank2" fake}
				{components "turret" break}
				{spawn "piece_turretring" "Body"}
				{tags add "turret_ring_broken"}
			else component "turret_move_engine"
				{if not tagged "destroyed"
					{damage_report "turret_move_engine" "component/armored/turret_move_engine_damaged"}
				}
				{spawn "metal_hit_bul"}
				{spawn "piece_turretmoveengine" "Body"}
				{call "update_turret"}
				{tags add "turret_move_engine_damaged"}
			else component "autoloader"
				{if not tagged "destroyed"
					{damage_report "autoloader" "component/armored/autoloader_damaged"}
				}
				{spawn "piece_autoloader" "Body"}
				{spawn "tank_die_particle" "body"}
			else component "stabilizer"
				{if not tagged "destroyed"
					{damage_report "stabilizer" "component/armored/stabilizer_damaged"}
				}
				{spawn "metal_hit_bul"}
				;{weapon_work "gun" 0}
				{call "update_gun"}
				{if rand 0.15
					{call "_burn"}
				}
				{tags add "stabilizer_damaged"}
				{spawn "piece_stabilizer" "Body"}
				{if not tagged "crit_system_destroyed"
					{tags add "crit_system_destroyed"}
				else
					{if not tagged "crit_system_destroyed2"
						{tags add "crit_system_destroyed2"}
					else
						{components "body" break}
					}
	  			}
			else component "gunner_panel"
				{if not tagged "destroyed"
					{damage_report "gunner_panel" "component/armored/gunner_panel_damaged"}
				}
				{spawn "metal_hit_bul"}
				{spawn "piece_gunner_panel" "Body"}
				;{weapon_work "gun" 0}
				{call "update_gun"}
				{tags add "gunner_panel_damaged"}
			else component "turret_mg"
				{call "kill_commander"}
			else component "mantlet"
				{tags add "mantlet_brake"}
			else component "trackleft"
				{talk "broken_track"}
			else component "trackright"
				{talk "broken_track"}
			else component "fuel"
				{tags add "fuel_brake_ordosdebug"}
				{if not tagged "destroyed"
				  {delay 3
					{spawn "piece_fueltank" "Body"}
					{damage_report "fuel" "component/armored/fuel_tank_damaged"}
						("tank_fuel_burn_w81")
				  }
				}
			else component "fuel1"
				{tags add "fuel_brake_ordosdebug"}
				{if not tagged "destroyed"
					{delay 3
						{spawn "piece_fueltank" "Body"}
						{damage_report "fuel1" "component/armored/fuel_tank_damaged"}
							("tank_fuel_burn_w81")
					}
				}
			else component "fuel2"
				{tags add "fuel_brake_ordosdebug"}
				{if not tagged "destroyed"
					{delay 3
						{spawn "piece_fueltank" "Body"}
						{damage_report "fuel2" "component/armored/fuel_tank_damaged"}
							("tank_fuel_burn_w81")
					}
				}
			else component "fuel_tank_internal_a"
				{if not tagged "destroyed"
					{delay 3
						{spawn "piece_fueltank" "Body"}
						{damage_report "fuel_tank_internal_a" "component/armored/fuel_tank_damaged"}
							("tank_fuel_burn_w81")
					}
				}
			else component "fuel_tank_internal_b"
				{if not tagged "destroyed"
					{delay 3
						{spawn "piece_fueltank" "Body"}
						{damage_report "fuel_tank_internal_b" "component/armored/fuel_tank_damaged"}
							("tank_fuel_burn_w81")
					}
				}
			else component "fuel_tank_internal_c"
				{if not tagged "destroyed"
					{delay 3
						{spawn "piece_fueltank" "Body"}
							{damage_report "fuel_tank_internal_c" "component/armored/fuel_tank_damaged"}
							("tank_fuel_burn_w81")
					}
				}
			else component "fuel_tank_internal_d"
				{if not tagged "destroyed"
					{delay 3
						{spawn "piece_fueltank" "Body"}
							{damage_report "fuel_tank_internal_d" "component/armored/fuel_tank_damaged"}
							("tank_fuel_burn_w81")
					}
				}
			else component "fuel_tank_external"
				{if not tagged "destroyed"
				{spawn "piece_fueltank" "Body"}
					{damage_report "fuel_tank_external" "component/armored/fuel_tank_damaged"}
					{if rand 0.8
							{burn fx "smoke_dead_norm" fake}
							{tags add "fuel_tank_damaged"}
							{delay 49		{tags remove "fuel_tank_damaged"}}

					}
				}
			else component "apploque_inter"
				{if tagged "ammo_break_blow_pannel"
				  {if rand 0.9
					{call "stat_break"}
					{call_synced "pre_cookoff"}
				  }
				}
			else component "cut_part"
				;{if name "blast"} ;// does not work. Blast check comes to late code and is never triggered
				("cut_shield_part" args "shieldr1")
				("cut_shield_part" args "shieldr2")
				("cut_shield_part" args "shieldr3")
				("cut_shield_part" args "shieldr4")
				("cut_shield_part" args "shieldr5")
				("cut_shield_part" args "shieldr6")
				("cut_shield_part" args "shieldr7")
				("cut_shield_part" args "shieldr8")
				("cut_shield_part" args "shieldr9")

				("cut_shield_part" args "shieldl1")
				("cut_shield_part" args "shieldl2")
				("cut_shield_part" args "shieldl3")
				("cut_shield_part" args "shieldl4")
				("cut_shield_part" args "shieldl5")
				("cut_shield_part" args "shieldl6")
				("cut_shield_part" args "shieldl7")
				("cut_shield_part" args "shieldl8")
				("cut_shield_part" args "shieldl9")

				("cut_shield_part" args "shield1")
				("cut_shield_part" args "shield2")
				("cut_shield_part" args "shield3")
				("cut_shield_part" args "shield4")
				("cut_shield_part" args "shield5")
				("cut_shield_part" args "shield6")
				("cut_shield_part" args "shield7")
				("cut_shield_part" args "shield8")
				("cut_shield_part" args "shield9")
				("cut_shield_part" args "shield10")
				("cut_shield_part" args "shield11")
				("cut_shield_part" args "shield12")

				("cut_shield_part" args "shieldt11")
				("cut_shield_part" args "shieldt12")
				("cut_shield_part" args "shieldt13")

				("cut_shield_part" args "flapr1")
				("cut_shield_part" args "flapr2")
				("cut_shield_part" args "flapr3")
				("cut_shield_part" args "flapr4")
				("cut_shield_part" args "flapl1")
				("cut_shield_part" args "flapl2")
				("cut_shield_part" args "flapl3")
				("cut_shield_part" args "flapl4")



				("cut_shield_part" args "detail1")
				("cut_shield_part" args "detail2")
				("cut_shield_part" args "detail3")
				("cut_shield_part" args "detail4")
				("cut_shield_part" args "detail5")
				("cut_shield_part" args "detail6")
				("cut_shield_part" args "detail7")
				("cut_shield_part" args "detail8")
				("cut_shield_part" args "detail9")
				("cut_shield_part" args "detail10")
				("cut_shield_part" args "detail11")
				("cut_shield_part" args "detail12")
				("cut_shield_part" args "detail13")
				("cut_shield_part" args "detail14")
				("cut_shield_part" args "detail15")
				("cut_shield_part" args "detail16")
				("cut_shield_part" args "detail17")
				("cut_shield_part" args "detail18")
				("cut_shield_part" args "detail19")
				("cut_shield_part" args "detail20")

				("cut_shield_part" args "fenderr")
				("cut_shield_part" args "fenderl")
				("cut_shield_part" args "fenderr2")
				("cut_shield_part" args "fenderl2")
				("cut_shield_part" args "turret_armor1")
				("cut_shield_part" args "turret_armor2")
				("cut_shield_part" args "turret_armor3")
				("cut_shield_part" args "turret_armor4")
				("cut_shield_part" args "turret_armor5")

				("shed_shield_part" args "shieldw1")
				("shed_shield_part" args "shieldw2")
				("shed_shield_part" args "shieldw3")
				("shed_shield_part" args "shieldw4")
				("shed_shield_part" args "shieldw5")
				("shed_shield_part" args "shieldw6")
				("shed_shield_part" args "shieldw7")
				("shed_shield_part" args "shieldw8")
				("shed_shield_part" args "shieldw9")
				
				("era_shield_part" args "era01")
				("era_shield_part" args "era02")
				("era_shield_part" args "era03")
				("era_shield_part" args "era04")
				("era_shield_part" args "era05")
				("era_shield_part" args "era06")
				("era_shield_part" args "era07")
				("era_shield_part" args "era08")
				("era_shield_part" args "era09")
				("era_shield_part" args "era10")
				("era_shield_part" args "era11")
				("era_shield_part" args "era12")
				("era_shield_part" args "era13")
				("era_shield_part" args "era14")
				("era_shield_part" args "era15")
				("era_shield_part" args "era16")
				("era_shield_part" args "era17")
				("era_shield_part" args "era18")
				("era_shield_part" args "era19")
				("era_shield_part" args "era20")
				("era_shield_part" args "era21")
				("era_shield_part" args "era22")
				("era_shield_part" args "era23")
				("era_shield_part" args "era24")
				("era_shield_part" args "era25")
				("era_shield_part" args "era26")
				("era_shield_part" args "era27")
				("era_shield_part" args "era28")
				("era_shield_part" args "era29")
				("era_shield_part" args "era30")
				("era_shield_part" args "era31")
				("era_shield_part" args "era32")
				("era_shield_part" args "era33")
				("era_shield_part" args "era34")
				("era_shield_part" args "era35")
				("era_shield_part" args "era36")
				("era_shield_part" args "era37")
				("era_shield_part" args "era38")
				("era_shield_part" args "era39")
				("era_shield_part" args "era40")
				("era_shield_part" args "era41")
				("era_shield_part" args "era42")
				("era_shield_part" args "era43")
				("era_shield_part" args "era44")
				("era_shield_part" args "era45")
				("era_shield_part" args "era46")
				("era_shield_part" args "era47")
				("era_shield_part" args "era48")
				("era_shield_part" args "era49")
				("era_shield_part" args "era49")				
				("era_shield_part" args "era50")				
				("era_shield_part" args "era51")				
				("era_shield_part" args "era52")				
				("era_shield_part" args "era53")				
				("era_shield_part" args "era54")				
				("era_shield_part" args "era55")				
				("era_shield_part" args "era56")				
				("era_shield_part" args "era57")				
				("era_shield_part" args "era58")				
				("era_shield_part" args "era59")				
				("era_shield_part" args "era60")				
				("era_shield_part" args "era61")				
				("era_shield_part" args "era62")				
				("era_shield_part" args "era63")				
				("era_shield_part" args "era64")				
				("era_shield_part" args "era65")				
				("era_shield_part" args "era66")				
				("era_shield_part" args "era67")				
				("era_shield_part" args "era68")				
				("era_shield_part" args "era69")				
				("era_shield_part" args "era70")				
				("era_shield_part" args "era71")				
				("era_shield_part" args "era72")				
				("era_shield_part" args "era73")				
				("era_shield_part" args "era74")				
				("era_shield_part" args "era75")				
				("era_shield_part" args "era76")				
				("era_shield_part" args "era77")				
				("era_shield_part" args "era78")				
				("era_shield_part" args "era79")				
				("era_shield_part" args "era80")				
				("era_shield_part" args "era81")				
				("era_shield_part" args "era82")				
				("era_shield_part" args "era83")				
				("era_shield_part" args "era84")				
				("era_shield_part" args "era85")				
				("era_shield_part" args "era86")				
				("era_shield_part" args "era87")				
				("era_shield_part" args "era88")				
				("era_shield_part" args "era89")				
				("era_shield_part" args "era90")				
				("era_shield_part" args "era91")				
				("era_shield_part" args "era92")				
				("era_shield_part" args "era93")				
				("era_shield_part" args "era94")				
				("era_shield_part" args "era95")				
				("era_shield_part" args "era96")				
				("era_shield_part" args "era97")				
				("era_shield_part" args "era98")				
				("era_shield_part" args "era99")				
				("era_shield_part" args "era100")				
				("era_shield_part" args "era101")				
				("era_shield_part" args "era102")				
				("era_shield_part" args "era103")				
				("era_shield_part" args "era104")				
				("era_shield_part" args "era105")				
				("era_shield_part" args "era106")				
				("era_shield_part" args "era107")				
				("era_shield_part" args "era108")				
				("era_shield_part" args "era109")				
				("era_shield_part" args "era110")				
				("era_shield_part" args "era111")	
				("era_shield_part" args "era150")				
				("era_shield_part" args "era151")				
				("era_shield_part" args "era152")				
				("era_shield_part" args "era153")				
				("era_shield_part" args "era154")				
				("era_shield_part" args "era155")					

				("era_shield_part" args "hera01")
				("era_shield_part" args "hera02")
				("era_shield_part" args "hera03")
				("era_shield_part" args "hera04")
				("era_shield_part" args "hera05")
				("era_shield_part" args "hera06")
				("era_shield_part" args "hera07")
				("era_shield_part" args "hera08")
				("era_shield_part" args "hera09")
				("era_shield_part" args "hera10")
				("era_shield_part" args "hera11")
				("era_shield_part" args "hera12")
				("era_shield_part" args "hera13")
				("era_shield_part" args "hera14")
				("era_shield_part" args "hera15")
				("era_shield_part" args "hera16")
				("era_shield_part" args "hera17")
				("era_shield_part" args "hera18")
				("era_shield_part" args "hera19")
				("era_shield_part" args "hera20")
				("era_shield_part" args "hera21")
				("era_shield_part" args "hera22")
				("era_shield_part" args "hera23")
				("era_shield_part" args "hera24")
				("era_shield_part" args "hera25")
				("era_shield_part" args "hera26")
				("era_shield_part" args "hera27")
				("era_shield_part" args "hera28")
				("era_shield_part" args "hera29")
				("era_shield_part" args "hera30")
				("era_shield_part" args "hera31")
				("era_shield_part" args "hera32")
				("era_shield_part" args "hera33")
				("era_shield_part" args "hera34")
				("era_shield_part" args "hera35")
				("era_shield_part" args "hera36")
				("era_shield_part" args "hera37")
				("era_shield_part" args "hera38")
				("era_shield_part" args "hera39")
				("era_shield_part" args "hera40")
				("era_shield_part" args "hera41")
				("era_shield_part" args "hera42")
				("era_shield_part" args "hera43")
				("era_shield_part" args "hera44")
				("era_shield_part" args "hera45")
				("era_shield_part" args "hera46")
				("era_shield_part" args "hera47")
				("era_shield_part" args "hera48")
				("era_shield_part" args "hera49")
				("era_shield_part" args "hera50")
				("era_shield_part" args "hera51")
				("era_shield_part" args "hera52")
				("era_shield_part" args "hera53")
				("era_shield_part" args "hera54")
				("era_shield_part" args "hera55")
				("era_shield_part" args "hera56")
				("era_shield_part" args "hera57")
				("era_shield_part" args "hera58")
				("era_shield_part" args "hera59")
				("era_shield_part" args "hera60")
				("era_shield_part" args "hera61")
				("era_shield_part" args "hera62")
				("era_shield_part" args "hera63")
				("era_shield_part" args "hera64")

		("era_shield_part" args "hera65")
		("era_shield_part" args "hera66")
		("era_shield_part" args "hera67")
		("era_shield_part" args "hera68")
		("era_shield_part" args "hera69")
		("era_shield_part" args "hera70")
		("era_shield_part" args "hera71")
		("era_shield_part" args "hera72")
		("era_shield_part" args "hera73")
		("era_shield_part" args "hera74")
		("era_shield_part" args "hera75")
		("era_shield_part" args "hera76")
		("era_shield_part" args "hera77")
		("era_shield_part" args "hera78")
		("era_shield_part" args "hera79")
		("era_shield_part" args "hera80")
		("era_shield_part" args "hera81")
		("era_shield_part" args "hera82")
		("era_shield_part" args "hera83")
		("era_shield_part" args "hera84")
		("era_shield_part" args "hera85")
		("era_shield_part" args "hera86")
		("era_shield_part" args "hera87")
		("era_shield_part" args "hera88")
		("era_shield_part" args "hera89")
		("era_shield_part" args "hera90")
		("era_shield_part" args "hera91")
		("era_shield_part" args "hera92")
		("era_shield_part" args "hera93")
		("era_shield_part" args "hera94")
		("era_shield_part" args "hera95")
		("era_shield_part" args "hera96")
		("era_shield_part" args "hera96")
		("era_shield_part" args "hera97")
		("era_shield_part" args "hera98")
		("era_shield_part" args "hera99")
		("era_shield_part" args "hera100")
		("era_shield_part" args "hera101")
		("era_shield_part" args "hera102")
		("era_shield_part" args "hera103")
		("era_shield_part" args "hera104")
		("era_shield_part" args "hera105")
		("era_shield_part" args "hera106")
		("era_shield_part" args "hera107")
		("era_shield_part" args "hera108")
		("era_shield_part" args "hera109")
		("era_shield_part" args "hera110")
		("era_shield_part" args "hera111")
		("era_shield_part" args "hera112")
		("era_shield_part" args "hera113")
		("era_shield_part" args "hera114")
		("era_shield_part" args "hera115")
		("era_shield_part" args "hera116")
		("era_shield_part" args "hera117")
		("era_shield_part" args "hera118")
		("era_shield_part" args "hera119")
		("era_shield_part" args "hera120")
		("era_shield_part" args "hera121")
		("era_shield_part" args "hera122")
		("era_shield_part" args "hera123")
		("era_shield_part" args "hera124")
		("era_shield_part" args "hera124")
		("era_shield_part" args "hera125")
		("era_shield_part" args "hera126")
		("era_shield_part" args "hera127")
		("era_shield_part" args "hera128")
		("era_shield_part" args "hera129")
		("era_shield_part" args "hera130")
		("era_shield_part" args "hera131")
		("era_shield_part" args "hera132")
		("era_shield_part" args "hera133")
				


				("era_shield_part" args "d_a1")
				("era_shield_part" args "d_a2")
				("era_shield_part" args "d_a3")
				("era_shield_part" args "d_a4")
				("era_shield_part" args "d_a5")
				("era_shield_part" args "d_a6")
				("era_shield_part" args "d_a7")
				("era_shield_part" args "d_a8")
				("era_shield_part" args "d_a9")
				("era_shield_part" args "d_a10")
				("era_shield_part" args "d_a11")
				("era_shield_part" args "d_a12")
				("era_shield_part" args "d_a13")
				("era_shield_part" args "d_a14")
				("era_shield_part" args "d_a15")
				("era_shield_part" args "d_a16")
				("era_shield_part" args "d_a17")
				("era_shield_part" args "d_a18")
				("era_shield_part" args "d_a19")
				("era_shield_part" args "d_a20")
				("era_shield_part" args "d_a21")
				("era_shield_part" args "d_a22")
				("era_shield_part" args "d_a23")
				("era_shield_part" args "d_a24")
				("era_shield_part" args "d_a25")
				("era_shield_part" args "d_a26")
				("era_shield_part" args "d_a27")
				("era_shield_part" args "d_a28")
				("era_shield_part" args "d_a29")
				("era_shield_part" args "d_a30")
				("era_shield_part" args "d_a31")
				("era_shield_part" args "d_a32")
				("era_shield_part" args "d_a33")
				("era_shield_part" args "d_a34")
				("era_shield_part" args "d_a35")
				("era_shield_part" args "d_a36")
				("era_shield_part" args "d_a37")
				("era_shield_part" args "d_a38")
				("era_shield_part" args "d_a39")
				("era_shield_part" args "d_a40")
				("era_shield_part" args "d_a41")
				("era_shield_part" args "d_a42")
				("era_shield_part" args "d_a43")
				("era_shield_part" args "d_a44")
				("era_shield_part" args "d_a45")
				("era_shield_part" args "d_a46")
				("era_shield_part" args "d_a47")
				("era_shield_part" args "d_a48")
				("era_shield_part" args "d_a49")
				("era_shield_part" args "d_a50")
				("era_shield_part" args "d_a51")
				("era_shield_part" args "d_a52")
				("era_shield_part" args "d_a53")
				("era_shield_part" args "d_a54")
				("era_shield_part" args "d_a55")
				("era_shield_part" args "d_a56")
				("era_shield_part" args "d_a57")
				("era_shield_part" args "d_a58")
				("era_shield_part" args "d_a59")
				("era_shield_part" args "d_a60")
				("era_shield_part" args "d_a61")
				("era_shield_part" args "d_a62")
				("era_shield_part" args "d_a63")
("era_shield_part" args "d_a64")
("era_shield_part" args "d_a65")
("era_shield_part" args "d_a66")
("era_shield_part" args "d_a67")
("era_shield_part" args "d_a68")
("era_shield_part" args "d_a69")
("era_shield_part" args "d_a70")
("era_shield_part" args "d_a71")
("era_shield_part" args "d_a72")
("era_shield_part" args "d_a73")
("era_shield_part" args "d_a74")
("era_shield_part" args "d_a75")
("era_shield_part" args "d_a76")
("era_shield_part" args "d_a77")
("era_shield_part" args "d_a78")
("era_shield_part" args "d_a79")
("era_shield_part" args "d_a80")
("era_shield_part" args "d_a81")
("era_shield_part" args "d_a82")
("era_shield_part" args "d_a83")
("era_shield_part" args "d_a84")
("era_shield_part" args "d_a85")
("era_shield_part" args "d_a86")
("era_shield_part" args "d_a87")
("era_shield_part" args "d_a88")
("era_shield_part" args "d_a89")
("era_shield_part" args "d_a90")
("era_shield_part" args "d_a91")
("era_shield_part" args "d_a92")
("era_shield_part" args "d_a93")
("era_shield_part" args "d_a94")
("era_shield_part" args "d_a95")
("era_shield_part" args "d_a96")
("era_shield_part" args "d_a97")
("era_shield_part" args "d_a98")
("era_shield_part" args "d_a99")
("era_shield_part" args "d_a100")
("era_shield_part" args "d_a101")
("era_shield_part" args "d_a102")
("era_shield_part" args "d_a103")
("era_shield_part" args "d_a104")
("era_shield_part" args "d_a105")
("era_shield_part" args "d_a106")
("era_shield_part" args "d_a107")
("era_shield_part" args "d_a108")
("era_shield_part" args "d_a109")
("era_shield_part" args "d_a110")
("era_shield_part" args "d_a111")
("era_shield_part" args "d_a112")
("era_shield_part" args "d_a113")
("era_shield_part" args "d_a114")
("era_shield_part" args "d_a115")
("era_shield_part" args "d_a116")
("era_shield_part" args "d_a117")
("era_shield_part" args "d_a118")
("era_shield_part" args "d_a119")
("era_shield_part" args "d_a120")

				("shed_shield_part" args "shieldw1")
				("shed_shield_part" args "shieldw2")
				("shed_shield_part" args "shieldw3")
				("shed_shield_part" args "shieldw4")
				("shed_shield_part" args "shieldw5")
				("shed_shield_part" args "shieldw6")
				("shed_shield_part" args "shieldw7")
				("shed_shield_part" args "shieldw8")
				("shed_shield_part" args "shieldw9")
				
				("cut_shield_part" args "body6_mangal")
				("cut_shield_part" args "body_mangal")
				("cut_shield_part" args "body5_mangal")


				("era_shield_part" args "ex_era_hull_26_68_0")
				("era_shield_part" args "ex_era_hull_25_66_0")
				("era_shield_part" args "ex_era_hull_24_76_0")
				("era_shield_part" args "ex_era_hull_23_71_0")
				("era_shield_part" args "ex_era_hull_22_117_0")
				("era_shield_part" args "ex_era_hull_20_69_0")
				("era_shield_part" args "ex_era_hull_19_112_0")
				("era_shield_part" args "ex_era_hull_18_115_0")
				("era_shield_part" args "ex_era_hull_17_110_0")
				("era_shield_part" args "ex_era_hull_16_107_0")
				("era_shield_part" args "ex_era_hull_15_113_0")
				("era_shield_part" args "ex_era_hull_14_73_0")
				("era_shield_part" args "ex_era_hull_13_75_0")
				("era_shield_part" args "ex_era_hull_12_70_0")
				("era_shield_part" args "ex_era_hull_11_80_0")
				("era_shield_part" args "ex_era_hull_10_123_0")
				("era_shield_part" args "ex_era_hull_09_122_0")
				("era_shield_part" args "ex_era_hull_07_121_0")
				("era_shield_part" args "ex_era_hull_08_79_0")
				("era_shield_part" args "ex_era_hull_06_120_0")
				("era_shield_part" args "ex_era_hull_05_116_0")
				("era_shield_part" args "ex_era_hull_04_119_0")
				("era_shield_part" args "ex_era_hull_03_125_0")
				("era_shield_part" args "ex_era_hull_02_124_0")				
				("era_shield_part" args "ex_era_hull_01_78_0")	

				("era_shield_part" args "ex_era_hull_01")
				("era_shield_part" args "ex_era_hull_02")
				("era_shield_part" args "ex_era_hull_03")
				("era_shield_part" args "ex_era_hull_04")
				("era_shield_part" args "ex_era_hull_05")
				("era_shield_part" args "ex_era_hull_06")
				("era_shield_part" args "ex_era_hull_07")
				("era_shield_part" args "ex_era_hull_08")
				("era_shield_part" args "ex_era_hull_09")
				("era_shield_part" args "ex_era_hull_10")
				("era_shield_part" args "ex_era_hull_11")
				("era_shield_part" args "ex_era_hull_12")
				("era_shield_part" args "ex_era_hull_13")
				("era_shield_part" args "ex_era_hull_14")
				("era_shield_part" args "ex_era_hull_15")
				("era_shield_part" args "ex_era_hull_16")
				("era_shield_part" args "ex_era_hull_17")
				("era_shield_part" args "ex_era_hull_18")
				("era_shield_part" args "ex_era_hull_19")
				("era_shield_part" args "ex_era_hull_20")
				("era_shield_part" args "ex_era_hull_21")
				("era_shield_part" args "ex_era_hull_22")
				("era_shield_part" args "ex_era_hull_23")
				("era_shield_part" args "ex_era_hull_24")

				("era_shield_part" args "ex_era_turret_01")
				("era_shield_part" args "ex_era_turret_02")
				("era_shield_part" args "ex_era_turret_03")
				("era_shield_part" args "ex_era_turret_04")
				("era_shield_part" args "ex_era_turret_05")
				("era_shield_part" args "ex_era_turret_06")
				("era_shield_part" args "ex_era_turret_07")
				("era_shield_part" args "ex_era_turret_08")
				("era_shield_part" args "ex_era_turret_09")
				("era_shield_part" args "ex_era_turret_10")
				("era_shield_part" args "ex_era_turret_11")
				("era_shield_part" args "ex_era_turret_12")
				("era_shield_part" args "ex_era_turret_13")
				("era_shield_part" args "ex_era_turret_14")
				("era_shield_part" args "ex_era_turret_15")
				("era_shield_part" args "ex_era_turret_16")
				("era_shield_part" args "ex_era_turret_17")
				("era_shield_part" args "ex_era_turret_18")
				("era_shield_part" args "ex_era_turret_19")
				("era_shield_part" args "ex_era_turret_20")
				("era_shield_part" args "ex_era_turret_21")
				("era_shield_part" args "ex_era_turret_22")
				("era_shield_part" args "ex_era_turret_23")
				("era_shield_part" args "ex_era_turret_24")

				("era_shield_part" args "shieldl02")
				("era_shield_part" args "shieldl03")
				("era_shield_part" args "shieldl04")
				("era_shield_part" args "shieldl05")
				("era_shield_part" args "shieldl06")
				("era_shield_part" args "shieldl07")

				("era_shield_part" args "shieldr02")
				("era_shield_part" args "shieldr03")
				("era_shield_part" args "shieldr04")
				("era_shield_part" args "shieldr05")
				("era_shield_part" args "shieldr06")
				("era_shield_part" args "shieldr07")
				
				("era_shield_part" args "box01")
				("era_shield_part" args "box02")
				("era_shield_part" args "box03")
				("era_shield_part" args "box04")
				("era_shield_part" args "box05")
				("era_shield_part" args "box06")
				("era_shield_part" args "box07")
				("era_shield_part" args "box08")
				
				("era_shield_part" args "armor1")
				("era_shield_part" args "armor2")
				("era_shield_part" args "armor3")
				("era_shield_part" args "armor15")
				("era_shield_part" args "armor5")
				("era_shield_part" args "armor6")				
			 else component "d_a"
				("DPS_Effect" dps_apcr(0) dps_cm(1) dps_ap(0))
			 else component "mgun"	
			 	{if not tagged "destroyed"
			 		{damage_report "mgun" "component/armored/mgun_damaged"}
			 	}
			 	{spawn "metal_hit_bul"}
			 	{weapon_work "mgun" 0}	
			 	{tags add "mgun_damaged"}
			 else component "mgun1"	
			 	{if not tagged "destroyed"
			 	{damage_report "mgun1" "component/armored/mgun_damaged"}
			 	}	
			 	{spawn "metal_hit_bul"}	
			 	{weapon_work "mgun1" 0}	
			 	{tags add "mgun1_damaged"}	
			 else component "mgun2"		
			 	{if not tagged "destroyed"	
			 	{damage_report "mgun2" "component/armored/mgun_damaged"}	
			 	}			
			 	{spawn "metal_hit_bul"}	
			 	{weapon_work "mgun2" 0}	
			 	{tags add "mgun2_damaged"}	
			 else component "mgun3"		
			 	{if not tagged "destroyed"
			 	{damage_report "mgun3" "component/armored/mgun_damaged"}
			 	}		
			 	{tags add "mgun3_damaged"}	
			 	{spawn "metal_hit_bul"}		
			 	{weapon_work "mgun3" 0}		
			 else component "mgun4"		
			 	{if not tagged "destroyed"	
			 	{damage_report "mgun4" "component/armored/mgun_damaged"}
			 	}	
			 	{spawn "metal_hit_bul"}	
			 	{weapon_work "mgun4" 0}	
			 	{tags add "mgun4_damaged"}
			 else component "mgun5"	
			 	{if not tagged "destroyed"	
			 	{damage_report "mgun5" "component/armored/mgun_damaged"}
			 	}	
			 	{spawn "metal_hit_bul"}	
			 	{weapon_work "mgun5" 0}	
			 	{tags add "mgun5_damaged"}
			 else component "mgun6"	
			 	{if not tagged "destroyed"	
			 	{damage_report "mgun6" "component/armored/mgun_damaged"}
			 	}	
			 	{spawn "metal_hit_bul"}	
			 	{weapon_work "mgun6" 0}	
			 	{tags add "mgun6_damaged"}
			 	
			}


			{if component "apu"      ;ordos add
				{tags add "ordos_debug_apu_break!!!"}
				{if not tagged "destroyed"
					{damage_report "apu" "component/armored/apu_damaged"}
				}
					{spawn "piece_medium_steel"}
					{spawn "piece_apu" "Body"}
					{tags add "ordos_debug_apu_damaged"}
					{call "update_power"}
					{delay 0.1 {call "update_turret"}}

			}

			{if not user_control
				{if not stuff "bullet"
					{delay 3
						{if rand 0.5
							{call "west81_smokegun"}
						}
					}
				}
			}


		}
	}

	{on destroy overload
		{if not tagged "exploded"
			{if component "body"
				{if not tagged "ammo_cooked"
					{tags add "ammo_broken"}
				}
				{call "explosion"}
			else component "engine"
				{call "_burn"}
			}
		}
	}

	{on "hull_destroyed"
		{if not tagged "hull_destroyed"
			{delay 0.1
				{spawn "black_target_remover" "missile_aim_point_bone" x}
			}
			{tags add "hull_destroyed"}
			{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
			 			;// Conquest map persistence
			{for_each_link
			{delete}}			
			{if not tagged "body_break"
				{components "body" break}
			}
			{damage_report "body" "component/body_destroyed"}
			{able select 0}
			{able repaired 0}
			{able minimap 0}
			{delay 2
				{kick_entity_manager}
				{tags add "destroyed"}

			}
			{delay 10
				{call "hatch_fire"}
				{clear_inventory}
			}
			{delay 20 5
				{##/* if rand 0.5
					{call_synced "cookoff"}
					{view stop "smoke3"}
					{stop_sound "flame_1"}
				*/}
			}
			{delay 87
				{stop_sound "flame_1"}
			}
		}
	}

	{on "vehicle_destroyed"
		{if not tagged "vehicle_destroyed"
			{if not tagged "ammo_cooked"
				{tags add "vehicle_destroyed"}
				{delay 0.1
						{spawn "black_target_remover" "missile_aim_point_bone" x}
				}
				{ani_wind "open" end}
				{ani_wind "open1" end}
				{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
				 {for_each_link
			{delete}};// Conquest map persistence
				{if not tagged "body_break"
					{components "body" break}
				}
				;//{damage_report "body" "component/body_destroyed"}
				{able select 0}
				{able repaired 0}
				{able minimap 0}
				{delay 2
					{kick_entity_manager}
					{tags add "destroyed"}

				}
				{if not tagged "exploded"
					;//{view pause "cooking_presmoke_1"}
					{view start "fire_vehicle_death"}
					{play_sound "flame_1" 1}
					{clear_inventory}
					{delay 500 60
						{if not tagged "exploded"
							{view pause "fire_vehicle_death"}
							{view start "smoke_vehicle_death"}
							{stop_sound "flame_1"}
							{call_synced "tags_add_ammo_cooked"}
						}
					}
				}
				{delay 200 200
					{if rand 0.3
						{call_synced "rand_break_ammo"}
					}
				}
			}
		}
	}

	{on "hatch_fire"
		{if not tagged "exploded"
			{view start "smoke3"}
			{play_sound "flame_1" 1}
			{ani_wind "open" end}
			{ani_wind "open1" end}
		}
	}

	{on "death_counter_check"
		{if tagged "death_counter_final"
			;{call_synced "vehicle_destroyed"}
			{call "emit_crew"}
		}
		{if tagged "body_break"
			{if not tagged "death_counter_start"
				{tags add "death_counter_start"}
				{if stuff "size4"
					{tags add "death_counter_2"}
				else stuff "size3"
					{tags add "death_counter_2"}
				else
					{tags add "death_counter_1"}
				}
			}
		}
	}
	{on "death_counter"
		{if stuff "rocketlauncher"
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			}
			{if tagged "death_counter_3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
			}
		else stuff "small_arms"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			}
			{if tagged "death_counter_3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
			}
		}
	}

	{on "death_counter_blast"
		{if min_energy 3.5
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
		}
	}

	(define "hull_death_fx"			;// defines fx size and burn time in specific tank props (light, medium, heavy..)
		{add_view "fire_dead_%3" "deathfx" "basis"}
		{add_view "smoke_dead_%3" "deathfx_smoke" "basis"}
		{add_view "smoke_dead_turret" "deathfx2" "basis"}
		{if tagged "ammo_broken"
			{view start "deathfx"}
			{play_sound "flame_1" 1}
			{delay %0 %1
				{view stop "deathfx"}
				{view start "deathfx_smoke"}
				{play_sound "flame_1" 0}
				{delay %0 %2
					{view stop "deathfx_smoke"}
				}
			}
		else
			{view start "deathfx2"}
			{delay %0 %1
				{view stop "deathfx2"}
			}
		}
	)

	(include "tank-damage.inc")		;// inserts code from other file for pierce, blast and other damage events

	;/*=========== Damages End  ===========*/

	;/*=========== Crew Begin  ===========*/

	{on "mantlet_jam"			;// temporarily disables gun elevation (up/down movement)
		{delay 0.1				;// stops code from running if mantlet or gun breaks
			{if work "gun"
				{if work "mantlet"
					{ik_enable "gun_rot" 0}
					{tags add "mantlet_jammed"}
					{delay 0.2 {damage_report "gun" "component/gun_jammed"}}
					{if not "turret"
						{ik_enable "turret" 0}
					}
					{delay 12 3
						{tags remove "mantlet_jammed"}
						{if not "turret"
							{ik_enable "turret" 1}
						}
						{if work "mantlet"
							{ik_enable "gun_rot" 1}
						}
					}
				}
			}
		}
	}

	{on "shock_check"
		{delay 0.3
			{if operatable 		;// checks if there is any crew in vehicle
				{if work "body"
					{if tagged "turret_jammed"
						{damage_report "crew" "component/shock"}
					else tagged "stopped"
						{damage_report "crew" "component/shock"}
					else
						;//do nothing
					}
				}
			}
		}
	}

	(define "kill_crewman"			;// general code for killing crew on peirce and blast events
		{on "kill_%0"
			{if crew_in_place "%0"
				{kill_crew "%0"}
				{crew_enable place "%0" 0}			;// disables seat in vehicle from being recrewed instantly after crew death
				{delay 0.2
					{damage_report "%0" "component/%0_die"}
					{talk "crew_die"}
				}
				{delay 10
					{if not broken "body"
						{crew_enable place "%0" 1}		;// re enables seat after crew death, after delay
					}
				}
			}
		}
	)

	;// defines all crew positions/names used in game
	("kill_crewman" args gunner)
	("kill_crewman" args gunner2)
	("kill_crewman" args gunner3)
	("kill_crewman" args gunner4)
	("kill_crewman" args gunner5)
	("kill_crewman" args gunner6)
	("kill_crewman" args charger)
	("kill_crewman" args charger2)
	("kill_crewman" args charger3)
	("kill_crewman" args charger4)
	("kill_crewman" args charger5)
	("kill_crewman" args charger6)
	("kill_crewman" args commander)
	("kill_crewman" args driver)

	{on "crew_able"						;// called on spawn. re-enables seats for conquest on unit respawn
		{crew_enable place "gunner" 1}
		{crew_enable place "gunner1" 1}
		{crew_enable place "gunner2" 1}
		{crew_enable place "gunner3" 1}
		{crew_enable place "gunner4" 1}
		{crew_enable place "gunner5" 1}
		{crew_enable place "gunner6" 1}
		{crew_enable place "charger" 1}
		{crew_enable place "charger1" 1}
		{crew_enable place "charger2" 1}
		{crew_enable place "charger3" 1}
		{crew_enable place "charger4" 1}
		{crew_enable place "charger5" 1}
		{crew_enable place "charger6" 1}
		{crew_enable place "commander" 1}
		{crew_enable place "driver" 1}
	}

	;/*=========== Crew End  ===========*/

	;/*=========== Repairs Begin  ===========*/

	{on repair
		{if component "turret"
			{tags remove "turret_brake"}
			{if tagged "crit_system_destroyed2"
				{tags remove "crit_system_destroyed2"}
			else
				{if tagged "crit_system_destroyed"
					{tags remove "crit_system_destroyed"}
				}
			}
			{components "turret_ring" repair}
			{tags remove "turret_ring_broken"}
			{components "apu" repair}
			{call "update_turret"}
			{call "update_power"}
		else component "body"
			{view pause "smoke1"}
			{call "update_turret"}
			{tags remove "turret_stopped_by_body"}
			{tags remove "body_break"}
			{able "select" 1}
			{call "activate_vehicle"}
			{components "apu" repair}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
			{tags remove "death_counter_4"}
			{tags remove "death_counter_start"}
			{tags remove "death_counter_final"}
		else component "engine"
			{tags remove "engine_brake"}
			{view pause "smoke1_1"}
			{if tagged "crit_system_destroyed2"
					{tags remove "crit_system_destroyed2"}
				else
					{if tagged "crit_system_destroyed"
						{tags remove "crit_system_destroyed"}
					}
				}
		else component "mantlet"
			{tags remove "mantlet_brake"}
			{call "update_mantlet"}
		else component "ammo_storage_main"    ;ordos+++

			{if tagged "ammo_break_blow_pannel"
				{tags remove "ammo_break_blow_pannel"}
				{tags remove "blow_panel_active"}
				{tags remove "ammo_gate_break"}
				{tags remove "gun_brake"}
				{weapon_work "gun" 1}
			}
			{components "ammo_storage_main1" repair}
			{components "ammo_storage_main2" repair}
			{view show "part1"}
			{view show "part2"}
			{view show "plate1"}
			{view show "plate2"}
			{view show "plate3"}
			{ani_wind "knockout" begin}
		else component "ammo_storage_mgun"
			{tags remove "ammo_storage_mgun_break"}
			{components "ammo_storage_mgun" repair}
		else component "ammo_storage_autocannon"
			{tags remove "ammo_storage_autocannon_break"}
			{components "ammo_storage_autocannon" repair}
		else component "fuel_tank_internal"
			{tags remove "fuel_tank_damaged"}
			{components "fuel_tank_internal_a" repair}
			{components "fuel_tank_internal_b" repair}
			{components "fuel_tank_internal_c" repair}
			{components "fuel_tank_internal_d" repair}
			{damage_report "fuel_tank_internal" "component/armored/fuel_tank_repaired"}
		else component "fuel_tank_external"
			{tags remove "fuel_tank_damaged"}
			{components "fuel_tank_external_a" repair}
			{components "fuel_tank_external_b" repair}
			{components "fuel_tank_external_c" repair}
			{components "fuel_tank_external_d" repair}
			{damage_report "fuel_tank_external" "component/armored/fuel_tank_repaired"}
		else component "fuel"
			{tags remove "fuel_tank_damaged"}
			{components "fuel1" repair}
			{components "fuel2" repair}
			{damage_report "fuel" "component/armored/fuel_tank_repaired"}

		else component "driver_triplex"
			{damage_report "driver_triplex" "component/armored/driver_triplex_repaired"}
			{tags remove "driver_triplex_damaged"}
			{ani_play "visor2" -1}
			{ani_play "visor90deg_2" -1}
			;{components "driver_triplex" repair}

		else component "commander_triplex"
			{damage_report "commander_triplex" "component/armored/commander_triplex_repaired"}
			{tags remove "commander_triplex_damaged"}
			{ani_play "visor1" -1}{ani_play "visor90deg_1" -1}
			;{components "commander_triplex" repair}

		else component "additional_triplex"
			{damage_report "additional_triplex" "component/armored/additional_triplex_repaired"}
			{tags remove "additional_triplex_damaged"}
			{ani_play "visor3" -1}
			{ani_play "visor90deg_3" -1}
			;{components "additional_triplex" repair}

		else component "additional_triplex1"
			{damage_report "additional_triplex1" "component/armored/additional_triplex1_repaired"}
			{tags remove "additional_triplex1_damaged"}
			{ani_play "visor4" -1}
			{ani_play "visor90deg_4" -1}
			;{components "additional_triplex1" repair}
		else component "additional_triplex2"
			{damage_report "additional_triplex2" "component/armored/additional_triplex2_repaired"}
			{tags remove "additional_triplex2_damaged"}
			{ani_play "visor5" -1}
			{ani_play "visor90deg_5" -1}
			;{components "additional_triplex2" repair}
		else component "apploque_inter"
				{tags remove "ammo_gate_break"}
		else component "tank_crit_component"
				{tags remove "driver_panel_damaged"}
				{call "update_moveability"}
				{damage_report "tank_crit_component" "component/armored/driver_panel_repaired"}
				{if tagged "crit_system_destroyed2"
					{tags remove "crit_system_destroyed2"}
				else
					{if tagged "crit_system_destroyed"
						{tags remove "crit_system_destroyed"}
					}
				}
		else component "panel_engine_connector"
				{tags remove "panel_engine_connectors_damaged"}
				{call "update_moveability"}
				{damage_report "panel_engine_connector" "component/armored/panel_engine_connectors_repaired"}
				{if tagged "crit_system_destroyed2"
					{tags remove "crit_system_destroyed2"}
				else
					{if tagged "crit_system_destroyed"
						{tags remove "crit_system_destroyed"}
					}
				}
		else component "transmission"
				{tags remove "transmission_damaged"}
				{damage_report "transmission" "component/armored/transmission_repaired"}
				{if tagged "crit_system_destroyed2"
					{tags remove "crit_system_destroyed2"}
				else
					{if tagged "crit_system_destroyed"
						{tags remove "crit_system_destroyed"}
					}
				}
				{call "update_moveability"}
		else component "turret_move_engine"
				{damage_report "turret_move_engine" "component/armored/turret_move_engine_repaired"}
				{tags remove "turret_move_engine_damaged"}
				{call "update_turret"}
		else component "stabilizer"
				{damage_report "stabilizer" "component/armored/stabilizer_repaired"}
				{tags remove "stabilizer_damaged"}
				{call "update_gun"}
		else component "gunner_panel"
				{damage_report "gunner_panel" "component/armored/gunner_panel_repaired"}
				{tags remove "gunner_panel_damaged"}
				{call "update_gun"}
		else component "autoloader"
				{damage_report "autoloader" "component/armored/autoloader_repaired"}
		else component "mgun"
				{damage_report "mgun" "component/armored/mgun_repaired"}
				{weapon_work "mgun" 1}
				{tags remove "mgun_damaged"}
		else component "mgun1"
				{damage_report "mgun1" "component/armored/mgun_repaired"}
				{weapon_work "mgun1" 1}	
				{tags remove "mgun1_damaged"}
		else component "mgun2"		
				{damage_report "mgun2" "component/armored/mgun_repaired"}	
				{weapon_work "mgun2" 1}		
				{tags remove "mgun2_damaged"}	
		else component "mgun3"		
				{damage_report "mgun3" "component/armored/mgun_repaired"}
				{weapon_work "mgun3" 1}		
				{tags remove "mgun3_damaged"}	
		else component "mgun4"		
				{damage_report "mgun4" "component/armored/mgun_repaired"}
				{weapon_work "mgun4" 1}	
				{tags remove "mgun4_damaged"}
		else component "mgun5"		
				{damage_report "mgun5" "component/armored/mgun_repaired"}	
				{weapon_work "mgun5" 1}		
				{tags remove "mgun5_damaged"}
		else component "mgun6"	
				{damage_report "mgun6" "component/armored/mgun_repaired"}
				{weapon_work "mgun6" 1}	
				{tags remove "mgun6_damaged"}
		}
	}


	{on "update_moveability"
		{if work "body"
			{if work "transmission"
				{if work "tank_crit_component"
					{if work "panel_engine_connector"
						{if work "engine"
							{if work "trackright"
								{if work "trackleft"

										{if not tagged "stopped"
											{chassis_work 1}
											;{components "move_indicator" repair}
											;{tags remove "chassis_brake"}
										}
								 else
								{chassis_work 0}
								}
							else
							{chassis_work 0}
							}
						 else
						{chassis_work 0}
						}
					 else
						{chassis_work 0}
					}
				 else
					{chassis_work 0}
				}
			else
				{chassis_work 0}
			}
		}
	}



	(define "update_turret"
		;{if work "turret%n"
		;	{if work "body"
		;		{ik_enable "turret%n" 1}
		;	 else
		;		{ik_enable "turret%n" 1}
		;	}
		;else
		;	{ik_enable "turret%n" 0}
		;}

		{if not work "turret%n"
			{ik_enable "turret%n" 0}
		else not work "body"
			{ik_enable "turret%n" 0}
		else not work "turret_move_engine"
			{ik_enable "turret%n" 0}
		else
			{ik_enable "turret%n" 1}
		}
		{call "update_mantlet"}
	)

	{on "update_turret"
		("update_turret" n())
	}

	{on "update_mantlet"
		{if work "mantlet"
			{if work "body"
				{ik_enable "gun_rot" 1}
			else not "turret"
				{ik_enable "gun_rot" 0}
			}
		else not "turret"
			{ik_enable "gun_rot" 0}
		}
	}

	;/*=========== Repairs End  ===========*/

	;/*=========== Smoke Begin  ===========*/

	(define "smoke_shot"				;// spawns smoke grenade on vehicle and gives impulse instructions
		{delay %4
			{spawn %0 "%1" x
				{impulse forward %2 %3 rnd_dir %3 %3}
				{call "activate"}
			}
			{spawn "flash_grenade_launcher" "fx%1" x}	;// plays flash at grenade spawn/launch
			{bone hide "%1_cap"}
		}
		{delay %5
			{bone show "%1_cap"}
		}
	)

	{on "deploy_smoke"					;// UI button to deploy vehicle smoke screen
		{if operatable
			{if work "body"
				{call "smoke_screen"}
			}
		}
	}

	;/*=========== Smoke End  ===========*/

	{on "rand_break_body"
		{components "body" break}
	}
	{on "rand_break_engine"
		{components "engine" break}
	}
	{on "rand_break_trackleft"
		{components "trackleft" break}
	}
	{on "rand_break_trackright"
		{components "trackright" break}
	}
	{on "rand_break_ammo"
		{components "ammo" break}
	}


(define "spawn_volume"
			{spawn "smoke_volume_%0" offset %1 %2 0
				{delay %3 {hide 1}}
			}
		)

(define "hksmoke"
	{if bone "foresight%foresight"
		{spawn "startsmoke_cali" "foresight%foresight" x}
		{spawn "smoke_shell_fly" "foresight%foresight" x
			{impulse forward 60 rnd_dir 2.5 com}
			{gravity 3.0}
			;{impulse up 50 2 forward 100 rnd_dir 2.5 com}
			;{gravity 0.9}
			{delay 0.5
				{physics_work 0}
			}
			{delay 0.5
				{start_sound "detonation/explosion_small"}
				{spawn "ex_air_smoke"}


				{delay 2 0.2
					;{view start "smoke_cover"}
					{spawn "smoke_cover-up_big_w81" offset 0 0 -150}
					{spawn "smoke_volume_ground" offset 100 60 0}
					{spawn "smoke_volume_ground" offset 100 -60 0}
				}
				;{spawn "smoke_volume" offset -120 -160 0}
				;("spawn_volume" args sphere 160 0 84)
				;("spawn_volume" args sphere -160 0 84)
				;("spawn_volume" args sphere 0 160 84)
				;("spawn_volume" args sphere 0 -160 84)
				;("spawn_volume" args sphere 110 110 84)
				;("spawn_volume" args sphere -110 -110 84)
				;("spawn_volume" args sphere -110 110 84)
				;("spawn_volume" args sphere 110 -110 84)

				;("spawn_volume" args sphere 60 60 84)
				;("spawn_volume" args sphere -60 -60 84)
				;("spawn_volume" args sphere -60 60 84)
				;("spawn_volume" args sphere 60 -60 84)
				{delay 3
					{delete}
				}
			}
		}
		;("blind_in_smoke")
	}
)


	{on "west81_smokegun"

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
		 			{delay 120 {tags remove "smoke_reload"}
		 			{damage_report "basis" "component/smoke_reloaded"}
		 			}
		 		else {tags add "1smoke"}
		 		}
		 	else
		 		{damage_report "basis" "component/smoke_reloading"}
		 	}
		 }
	}
	{on "mp_destroy"
		{if not tagged "destroyed"
			{damage_report "body" "component/body_broken"}
			{if not tagged "body_break"
				{components "body" break}
				{call "stat_break"}
			}
			{call "check_burn_emit"}
			{reset_manual_control}
			{able select 0}
			{able repaired 0}
			{able minimap 0}
			{unlink_trailer}
			{for_each_link
			{delete}}
			{delay 2
				{tags add "destroyed"}
				{kick_entity_manager}
			}
			{delay 15
			    {call_synced "burn_ammo_break"}
			}
	   }
	}

	{on "burn_ammo_break"
	   {delay 0.1
		{call "stat_break"}
	   }
	   {delay 1
		{if rand 0.1
			{call_synced "ammo_explosion"}
		else
			{call_synced "burn_to_cookoff"}
		}
	   }
	}	
}

;/*=========== Tank End ===========*/

;/*=========== General Props Begin ===========*/


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
	{on "gunner4_hatch_open"}
	{on "gunner4_hatch_close"}
	{on "commander_hatch_open"}
	{on "commander_hatch_close"}
	{on "charger_hatch_open"}
	{on "charger_hatch_close"}
	{on "charger2_hatch_open"}
	{on "charger2_hatch_close"}

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
			("places" args gunner)
			("places" args gunner2)
			("places" args gunner4)
			("places" args commander)
			("places" args charger)
			("places" args charger2)
		}
	)
	{on "update_hatch_on_spawn"
		("update_hatch" wind(true))
	}
	(define "update_hatch_event"
		{on %event
			("update_hatch" wind(false))
		}
	)
	("update_hatch_event" event(operatable on))
	("update_hatch_event" event(operatable off))
	("update_hatch_event" event(crew in))
	("update_hatch_event" event(crew out))

	;/*=========== Hatch Animation End ===========*/
}

{"smoke nkav"						;// Nebelkerzenabwurfvorrichtung - German rear grenade dispenser
	{on "smoke_screen"
		{if tagged "smoke_launch1"
			("smoke_shot" args "nbk39" smoke_shot1 0.1 0.05 0)
			{tags remove "smoke_launch1"}
			{tags add "smoke_launch2"}
		else tagged "smoke_launch2"
			("smoke_shot" args "nbk39" smoke_shot2 0.1 0.05 0)
			{tags remove "smoke_launch2"}
			{tags add "smoke_launch3"}
		else tagged "smoke_launch3"
			("smoke_shot" args "nbk39" smoke_shot3 0.1 0.05 0)
			{tags remove "smoke_launch3"}
			{tags add "smoke_launch4"}
		else tagged "smoke_launch4"
			("smoke_shot" args "nbk39" smoke_shot4 0.1 0.05 0)
			{tags remove "smoke_launch4"}
			{tags add "smoke_launch5"}
		else tagged "smoke_launch5"
			("smoke_shot" args "nbk39" smoke_shot5 0.1 0.05 0)
			{tags remove "smoke_launch5"}
			{tags add "smoke_launch1"}
		else													;// first smoke launch
			("smoke_shot" args "nbk39" smoke_shot1 0.1 0.05 0)
			{tags add "smoke_launch2"}
		}
	}
}

{"smoke nwg"					;// Nebelwurfgerät - German smoke grenade launcher
	{on "smoke_screen"
		("smoke_shot" args "nbk39" smoke_shot1 -17 0.5 0 20)
		("smoke_shot" args "nbk39" smoke_shot4 -17 0.5 0.1 20)
		("smoke_shot" args "nbk39" smoke_shot2 -17 0.5 0.2 20)
		("smoke_shot" args "nbk39" smoke_shot5 -17 0.5 0.3 20)
		("smoke_shot" args "nbk39" smoke_shot3 -17 0.5 0.4 20)
		("smoke_shot" args "nbk39" smoke_shot6 -17 0.5 0.5 20)
	}
}

{"smoke nvw"					;// Nahverteidigungswaffe - German smoke grenade launcher
	{on "smoke_screen"
		("smoke_shot" args "nbk39" smoke_shot1 -17 0.5 0)
	}
}

{"smoke 2in"					;// Bomb Thrower 2in - British smoke launcher
	{on "smoke_screen"
		("smoke_shot" args "51mm_eng_mortar_sm" smoke_shot1 17 0.5 0)
	}
}

{"smoke 2in_wp"					;// Bomb Thrower 2in WP - British smoke launcher
	{on "smoke_screen"
		("smoke_shot" args "51mm_eng_mortar_wp" smoke_shot1 17 0.5 0)
	}
}

{"smoke 4in"					;// Bomb Thrower 4in - British smoke launcher
	{on "smoke_screen"
		("smoke_shot" args "no8_smoke" smoke_shot1 -17 0.5 0 20)
	}
}

{"smoke 4in_2x"					;// Double Bomb Thrower 4in - British smoke launcher
	{on "smoke_screen"
		;("smoke_shot" args "no8_smoke" smoke_shot1 -17 0.5 0 20)
		;("smoke_shot" args "no8_smoke" smoke_shot2 -17 0.5 0.5 20)
		{if tagged "smoke_launch1"
			("smoke_shot" args "no8_smoke" smoke_shot1 -17 0.05 0)
			{tags remove "smoke_launch1"}
			{tags add "smoke_launch2"}
		else tagged "smoke_launch2"
			("smoke_shot" args "no8_smoke" smoke_shot2 -17 0.05 0)
			{tags remove "smoke_launch2"}
			{tags add "smoke_launch1"}
		else													;// first smoke launch
			("smoke_shot" args "no8_smoke" smoke_shot1 -17 0.05 0)
			{tags add "smoke_launch2"}
		}
	}
}

{"mantlet"					;// for tanks with "out" turrets that can rotate 360°
	{on spawn
		{call "update_mantlet"}
		{set "turret" 0}
	}
	{on break
		{if not tagged "exploded"
			{if component "mantlet"
				{call "update_mantlet"}
			else component "body"
				{spawn "circledust_norm" "turret"}
				{call "update_mantlet"}
			}
		}
	}
}

{"turret"			;// for tanks with turrets that can rotate 360°
	{on spawn
		{call "update_turret"}
		{set "turret" 1}
		{volumes "gun_recoil" disable blast} ;//add by ordos
	}
	{on break
		{if not tagged "exploded"
			(define "turret_break_effects"
				{call "update_turret%n"}
				{spawn "tank_die_particle" "turret%n"}
				{spawn "circledust_norm" "turret%n"}
				{call "turret_break_effects"}
			)
			{if component "turret"
				("turret_break_effects" n())
				{talk "broken_turret"}
			else component "body"
				{call "update_turret"}
			else component "mantlet"
				{call "update_turret"}
			}
		}
	}
	{on "slice_load"
		{if name "turret"
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}

	{on "cut_parts"				;// called on "_explosion" in vehicle prop
		{if "turret_teared"
			{bone cut "turret"}
		else
			{if tagged "ammo_broken"
				{call "tear_turret"}
			}
		}
	}
	(define "turret_torn"
		{on "tear_turret"
			{if not "turret_teared"
				{clear_inventory}
				{set "turret_teared" 1}
				{components "turret" break}
				{call "hull_destroyed"}
				{delay_ex 0
					{tear "piece_large_steel" bone "turret" id "turret"
						{impulse up %0 2 dir %0 2 rnd_dir %0 4 cx 2 2 cy 2 2 cz 2 2 com}
						{add_view "fire_dead_%5" "fire" "basis"}
						{add_view "smoke_dead_turret" "smoke" "basis"}
						{view start "fire"}
						{delay %1 %2
							{view stop "fire"}
							{view start "smoke"}
						}
						{delay_effect %3 %4 "pause"}				;// calls {on "pause"} in dummy.inc
						{delay 0.1
							{volumes "gun" disable obstacle}
						}
					}
				}
			}
		}
	)
}

{"tank bunker"					;// for emplacement tanks and turrets without engines
	{on spawn {set "engine_on" 0}}
	{on "impulse" overload}
	{on "engine_toggle" overload}	;// disables engine toggle for cannons
	{on "engine_on"	overload}		;// disables engine fx and sound for cannons
	{on "engine_check" overload}	;// disables engine turned on if crewed on spawn
}

{"tank turret light"			;// light tanks with a turret
	{on bullet_hit
		{if component "turret"
			{if stuff "shell size3"			;// 105-149mm cannon shells
				{call "tear_turret"}
				{tags add "_turret_torn_ach"}
			else stuff "shell size4"		;// 150-169mm cannon shells
				{call "tear_turret"}
				{tags add "_turret_torn_ach"}
			else stuff "shell size5"		;// 170+mm cannon shells
				{call "tear_turret"}
				{tags add "_turret_torn_ach"}
			else stuff "shell size6"		;// 240+mm cannon shells
				{call "tear_turret"}
				{tags add "_turret_torn_ach"}
			}
		}
	}
	("turret_torn" args 6 90 30 400 50 turret_light)
}
{"turret medium"
	("turret_torn" args 7 180 45 500 75 turret)
}
{"turret heavy"
	("turret_torn" args 7 200 60 600 100 turret)
}

{"tank turret light_M"			;// light tanks with a turret
	("turret_torn" args 6 90 30 400 50 turret_light)
}
{"turret medium_M"
	("turret_torn" args 7 180 45 500 75 turret)
}
{"turret heavy_M"
	("turret_torn" args 7 200 60 600 100 turret)
}

{"tank turret multi_turret"
	{on spawn
		{call "update_multi_turret"}
	}
	{on break
		{if not tagged "exploded"
			{if component "aux_turret1"
				{call "update_multi_turret"}
				{damage_report "turret" "component/turret_broken"}
			else component "aux_turret2"
				{call "update_multi_turret"}
				{damage_report "turret" "component/turret_broken"}
			else component "aux_turret3"
				{call "update_multi_turret"}
				{damage_report "turret" "component/turret_broken"}
			else component "aux_turret4"
				{call "update_multi_turret"}
				{damage_report "turret" "component/turret_broken"}
			}
		}
	}
	{on "update_multi_turret"
		(define "multi_turret_work"
			{if work "%0"
				{if work "body"
					{ik_enable "%0" 1}
				 else
					{ik_enable "%0" 0}
				}
			else
				{ik_enable "%0" 0}
			}
		)
		("multi_turret_work" args aux_turret1)
		("multi_turret_work" args aux_turret2)
		("multi_turret_work" args aux_turret3)
		("multi_turret_work" args aux_turret4)
	}
	{on repair
		{if component "aux_turret1"
			{call "update_multi_turret"}
		else component "aux_turret2"
			{call "update_multi_turret"}
		else component "aux_turret3"
			{call "update_multi_turret"}
		else component "aux_turret4"
			{call "update_multi_turret"}
		}
	}
	(define "multi_turret_rotate"
		{on ik begin "%0"
			{kill_delay "rotate_turret"}
			{if not "rotate_turret"
				{play_sound "rotate_turret" 1}
				{set "rotate_turret" 1}
			}
		}
		{on ik end "%0"
			{delay 0.25 "rotate_turret"
				{stop_sound "rotate_turret"}
				{set "rotate_turret" 0}
			}
		}
	)
	("multi_turret_rotate" args aux_turret1)
	("multi_turret_rotate" args aux_turret2)
	("multi_turret_rotate" args aux_turret3)
	("multi_turret_rotate" args aux_turret4)

	(define "multi_gun_rotate"
		{on ik begin "%0"
			{kill_delay "rotate_gun"}
			{if not "rotate_gun"
				{play_sound "rotate_gun" 1}
				{set "rotate_gun" 1}
			}
		}
		{on ik end "%0"
			{delay 0.25 "rotate_gun"
				{stop_sound "rotate_gun"}
				{set "rotate_gun" 0}
			}
		}
	)
	("multi_gun_rotate" args gun1)
	("multi_gun_rotate" args gun2)
}
{"btr_large_ammo"	;// halftrack/armored car open top type vehicles with "big caliber" ammunition, +37mm
	{on spawn
		{add_view	"cooking_high_open"				"cooking_high_open"			"body"}
		{view hide  "cooking_high_open"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_high_open_2"			"cooking_high_open_2"		"body"}
		{view hide  "cooking_high_open_2"}	;// fx has a glow that will show unless hidden until later called
	}
	{on "pre_cookoff" overload
		{call "pre_cookoff_open_top"}
	}
	{on "light_tear_turret"
		{if not "turret_teared"
			{set "turret_teared" 1}
			{clear_inventory}
			{components "turret" break}
			{components "gun" break}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret" id "turret"
					{impulse up 7 2 cx 2 1 cy 2 1 cz 2 1 rnd_dir 3 1 com}
					{add_view "fire_dead_turret_light" "fire" "basis"}
					{add_view "smoke_dead_turret" "smoke" "basis"}
					{view start "fire"}
					{delay 25 5
						{view stop "fire"}
						{view start "smoke"}
					}
					{delay_effect 90 15 "pause"}				;// calls {on "pause"} in dummy.inc
					{delay 0.1
						{volumes "gun" disable obstacle}
					}
				}
			}
		}
	}
	{on "ammo_break" overload
		{call "stat_break"}
		{if rand 0.75
			{call_synced "ammo_break2"}
		else
			{call_synced "ammo_explosion_small"}
		}
	}
	{on "ammo_break2"
		{call "pre_cookoff"}
		{delay 10 10
			{call_synced "ammo_explosion_small"}
		}
	}
	{on "ammo_explosion_small"
		{if not able "exploded"
			{if tagged "one_ammo_broken"
				{call "ammo_explosion"}
			else
				{tags add "one_ammo_broken"}
				{if rand 0.5
					{call_synced "ammo_explosion_small_2"}
				else
					{call_synced "ammo_explosion"}
				}
			}
		}
	}
	{on "ammo_explosion_small_2"
		{tags add "death_counter_final"}
		{call "death_counter_check"}
		;{view pause "fire_vehicle_death"}
		{kill_crew}
		{spawn "vehicle_die" "body"}
		{components "gun" break}
		{components "body" break}
		{call_synced "light_tear_turret"}
		{delay 15 15
			{if not broken "ammo1"
				{call_synced "ammo_break"}
			else not broken "ammo2"
				{call_synced "ammo_break"}
			}
		}
	}
	{on "cut_parts"
		{if rand 1
			{call_synced "light_tear_turret"}
		}
	}
	{on "ammo_explosion" overload
		{if not tagged "ammo_cooked2"
			{tags add "ammo_broken"}
			{call "explosion"}
		}
	}
}
{"ammo_open_top"		;// tanks with open top hulls
	{on spawn
		{add_view	"cooking_high_open"				"cooking_high_open"			"FXfire5"}
		{view hide  "cooking_high_open"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_high_open_2"			"cooking_high_open_2"		"FXfire5"}
		{view hide  "cooking_high_open_2"}	;// fx has a glow that will show unless hidden until later called
	}
	{on "pre_cookoff" overload
		{call "pre_cookoff_open_top"}
	}
	{on "ammo_break" overload
		{call "stat_break"}
		{if rand 0.75
			{call_synced "ammo_break2"}
		else
			{call_synced "ammo_explosion_small"}
		}
	}
	{on "ammo_break2"
		{call "pre_cookoff"}
		{delay 10 10
			{if rand 0.5
				{call_synced "ammo_explosion_small"}
			}
		}
	}
	{on "ammo_explosion_small"
		{if not able "exploded"
			{if tagged "one_ammo_broken"
				{call "ammo_explosion"}
			else
				{tags add "one_ammo_broken"}
				{if rand 0.75
					{call_synced "ammo_explosion_small_2"}
				else
					{call_synced "ammo_explosion"}
				}
			}
		}
	}
	{on "ammo_explosion_small_2"
		{tags add "death_counter_final"}
		{call "death_counter_check"}
		;{view pause "fire_vehicle_death"}
		{kill_crew}
		{spawn "vehicle_die" "FXfire5"}
		{components "body" break}
		{delay 15 15
			{call_synced "ammo_break"}
		}
	}
}
{"ammo_open_top_turret"		;// tanks with open top turrets
	{on spawn
		{add_view	"cooking_high_open"				"cooking_high_open"			"turret"}
		{view hide  "cooking_high_open"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_high_open_2"			"cooking_high_open_2"		"turret"}
		{view hide  "cooking_high_open_2"}	;// fx has a glow that will show unless hidden until later called
	}
	{on "pre_cookoff" overload
		{call "pre_cookoff_open_top"}
	}
	{on "ammo_break" overload
		{call "stat_break"}
		{if rand 0.75
			{call_synced "ammo_break2"}
		else
			{call_synced "ammo_explosion_small"}
		}
	}
	{on "ammo_break2"
		{call "pre_cookoff"}
		{delay 10 10
			{if rand 0.5
				{call_synced "ammo_explosion_small"}
			}
		}
	}
	{on "ammo_explosion_small"
		{if not able "exploded"
			{if tagged "one_ammo_broken"
				{call "ammo_explosion"}
			else
				{tags add "one_ammo_broken"}
				{if rand 0.75
					{call_synced "ammo_explosion_small_2"}
				else
					{call_synced "ammo_explosion"}
				}
			}
		}
	}
	{on "ammo_explosion_small_2"
		{tags add "death_counter_final"}
		{call "death_counter_check"}
		;{view pause "fire_vehicle_death"}
		{kill_crew}
		{spawn "vehicle_die" "turret"}
		{components "turret" break}
		{components "body" break}
		{delay 15 15
			{call_synced "ammo_break"}
		}
	}
}
{"armored_car"
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 3 r0 2.5 r1 10}
			{spawn "tank_die_light" "basis"}
			("explosion_HE_s4")
		else
			{spawn "tank_die_peaceful_light" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
		}
	}
	{on "cut_parts"										;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 500 75 100 tank_light)	;// defined in "tank" prop
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else stuff "small_arms"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else stuff "pierce"
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
				}
			else stuff "size2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 6
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else min_energy 3
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
			}
		}
	}
	(define "heavy_blast_hit"

		{components "body" break}
		{call "vehicle_destroyed"}
		{if explosive_amount 800
			{spawn "ex_air_big2" "basis"}
			{blastwave c4 16 r0 7 r1 14 position}
			{delay_ex 0.2 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 14 r0 6 r1 12 position}}
			{delay_ex 0.3 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 12 r0 5 r1 10 position}}
			{delay_ex 0.4 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 10 r0 5 r1 10 position}}
		else explosive_amount 400
			{spawn "ex_air_big2" "basis"}
			{blastwave c4 12 r0 7 r1 14 position}
			{delay_ex 0.2 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 10 r0 6 r1 12 position}}
			{delay_ex 0.6 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 8 r0 5 r1 10 position}}
			{delay_ex 1 0.2 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 4 r1 8 position}}
			{delay_ex 1.3 0.5 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 4 r1 8 position}}
		}

	)
	{on blast_hit
		 {if volume "mrap"
		 else
			 {if min_energy 22
				("heavy_blast_hit")
			 else  min_energy 15
				("heavy_blast_hit")
		 	 else min_energy 8
				("heavy_blast_hit")
			}
	    	}

	}
	{on operatable on
		{delay 2
			{spawn "black_target_light" "missile_aim_point_bone" x}
		}
	}

	{on operatable off
		{delay 0.5
			{spawn "black_target_remover" "missile_aim_point_bone" x}
		}
	}
	(include "damage-armoredcar.inc")
}

{"armored_car_M"
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 3 r0 2.5 r1 10}
			{spawn "tank_die_light" "basis"}
			("explosion_HE_s4")
		else
			{spawn "tank_die_peaceful_light" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
		}
	}
	{on "cut_parts"										;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 500 75 100 tank_light)	;// defined in "tank" prop
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else stuff "small_arms"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else stuff "pierce"
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
				}
			else stuff "size2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 6
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else min_energy 3
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
			}
		}
	}
	(define "heavy_blast_hit"

		{components "body" break}
		{call "vehicle_destroyed"}
		{if explosive_amount 800
			{spawn "ex_air_big2" "basis"}
			{blastwave c4 16 r0 7 r1 14 position}
			{delay_ex 0.2 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 14 r0 6 r1 12 position}}
			{delay_ex 0.3 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 12 r0 5 r1 10 position}}
			{delay_ex 0.4 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 10 r0 5 r1 10 position}}
		else explosive_amount 400
			{spawn "ex_air_big2" "basis"}
			{blastwave c4 12 r0 7 r1 14 position}
			{delay_ex 0.2 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 10 r0 6 r1 12 position}}
			{delay_ex 0.6 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 8 r0 5 r1 10 position}}
			{delay_ex 1 0.2 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 4 r1 8 position}}
			{delay_ex 1.3 0.5 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 4 r1 8 position}}
		}

	)
	{on blast_hit
		 {if volume "mrap"
		 else
			 {if min_energy 22
				("heavy_blast_hit")
			 else  min_energy 15
				("heavy_blast_hit")
		 	 else min_energy 8
				("heavy_blast_hit")
			}
	    	}

	}
	{on operatable on
		{delay 2
				{spawn "black_target_light" "missile_aim_point_bone" x}
				{tags add "missile_aimpoint_light"}
		}
	}

	{on operatable off
		{delay 0.5
			{spawn "black_target_remover" "missile_aim_point_bone" x}
		}
	}
	(include "damage-armoredcar_m.inc")
}

{"light tank"
	{inflammation_time 25}
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 4 r0 2.5 r1 10 offset 0 0 60}
			{blastwave c4 2 r0 6 r1 12 offset 0 0 60}

			{spawn "tank_die_light" "basis"}
			("explosion_HE_s4")
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		else
			{spawn "tank_die_peaceful_light" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		}
	}
	{on "cut_parts"									;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 600 100 125 tank_light)	;// defined in "tank" prop
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else stuff "small_arms"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
				}
			else stuff "size2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 7
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else min_energy 3.4
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
			}
		}
	}
	(define "heavy_blast_hit"

		{components "body" break}
		;{call "vehicle_destroyed"}
		{if explosive_amount 800
			{spawn "ex_air_big2" "basis"}
			{blastwave c4 7 r0 7 r1 7 position}
			{delay_ex 0.2 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 6 r1 6 position}}
			{delay_ex 0.3 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 6 r0 5 r1 5 position}}
			{delay_ex 0.4 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 5 r0 5 r1 5 position}}
		else explosive_amount 400
			{spawn "ex_air_big2" "basis"}
			{blastwave c4 12 r0 7 r1 7 position}
			{delay_ex 0.2 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 5 r0 6 r1 6 position}}
			{delay_ex 0.6 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 4 r0 5 r1 5 position}}
			{delay_ex 1 0.2 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 4 r1 4 position}}
			{delay_ex 1.3 0.5 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 4 r1 4 position}}
		}

	)
	{on blast_hit
		 {if volume "mrap"
		 else
			 {if min_energy 22
				("heavy_blast_hit")
			 else  min_energy 15
				("heavy_blast_hit")
		 	 else min_energy 8
				("heavy_blast_hit")
			}
	    	}

	}
	{on operatable on
		{delay 2
				{spawn "black_target_light" "missile_aim_point_bone" x}
		}
	}

	{on operatable off
		{delay 0.5
			{spawn "black_target_remover" "missile_aim_point_bone" x}
		}
	}
	(include "damage-light.inc")
}

{"light_M tank"
	{inflammation_time 25}
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 4 r0 2.5 r1 10 offset 0 0 60}
			{blastwave c4 2 r0 6 r1 12 offset 0 0 60}

			{spawn "tank_die_light" "basis"}
			("explosion_HE_s4")
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		else
			{spawn "tank_die_peaceful_light" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		}
	}
	{on "cut_parts"									;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 600 100 125 tank_light)	;// defined in "tank" prop
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else stuff "small_arms"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
				}
			else stuff "size2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 7
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else min_energy 3.4
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
			}
		}
	}
	{on operatable on
		{delay 2
			{spawn "black_target_light" "missile_aim_point_bone" x}
		}
	}

	{on operatable off
		{delay 0.5
			{spawn "black_target_remover" "missile_aim_point_bone" x}
		}
	}

	(define "heavy_blast_hit"
		{components "body" break}
		;{call "vehicle_destroyed"}
		{if explosive_amount 800
			{spawn "ex_air_big2" "basis"}
			{blastwave c4 7 r0 7 r1 7 position}
			{delay_ex 0.2 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 6 r1 6 position}}
			{delay_ex 0.3 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 6 r0 5 r1 5 position}}
			{delay_ex 0.4 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 5 r0 5 r1 5 position}}
		else explosive_amount 400
			{spawn "ex_air_big2" "basis"}
			{blastwave c4 12 r0 7 r1 7 position}
			{delay_ex 0.2 0.1 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 5 r0 6 r1 6 position}}
			{delay_ex 0.6 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 4 r0 5 r1 5 position}}
			{delay_ex 1 0.2 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 4 r1 4 position}}
			{delay_ex 1.3 0.5 {spawn "ex_air_big2" "basis" inv_normal} {blastwave c4 7 r0 4 r1 4 position}}
		}

	)
	{on blast_hit
		 {if volume "mrap"
		 else
			 {if min_energy 22
				("heavy_blast_hit")
			 else  min_energy 15
				("heavy_blast_hit")
		 	 else min_energy 8
				("heavy_blast_hit")
			 }
	    }

	}
	(include "damage-light_m.inc")
}

{"medium tank"
	{inflammation_time 35}
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 5 r0 2.5 r1 10 offset 0 0 75}
			{blastwave c4 2 r0 10 r1 15 offset 0 0 75}
			{spawn "tank_die_medium" "basis"}
			("explosion_HE_s5")
			{if terrain_fx "snow"
				{spawn "tank_die_snow" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow" "basis"}
			else
				{spawn "tank_die_dust" "basis"}
			}
		else
			{spawn "tank_die_peaceful" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		}
	}
	{on "cut_parts"								;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 700 150 150 tank)	;// defined in "tank" prop
	}
	{on "check_water_level" overload
		{if water_level 1.6
			{able "sinking" 1}
			{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
			 {for_each_link
			{delete}};// Conquest map persistence
		else
			{able "sinking" 0}
		}
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			}
		else stuff "small_arms"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_3"}
					{tags remove "death_counter_2"}
				else tagged "death_counter_3"
					{tags add "death_counter_final"}
					{tags remove "death_counter_3"}
				}
			else stuff "size2"
				{if tagged "death_counter_1"
					{tags add "death_counter_3"}
					{tags remove "death_counter_1"}
				else
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
					{tags remove "death_counter_3"}
				}
			else stuff "size3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 11.5
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
		else min_energy 8
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			}
		else min_energy 4
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			else tagged "death_counter_3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
			}
		}
	}
	{on operatable on
		{delay 2

			{spawn "black_target_medium" "missile_aim_point_bone" x}
		}
	}

	{on operatable off
		{delay 0.5
			{spawn "black_target_remover" "missile_aim_point_bone" x}
		}
	}
	(include "damage-medium.inc")
}

{"medium_M tank"
	{inflammation_time 35}
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 5 r0 2.5 r1 10 offset 0 0 75}
			{blastwave c4 2 r0 10 r1 15 offset 0 0 75}
			{spawn "tank_die_medium" "basis"}
			("explosion_HE_s5")
			{if terrain_fx "snow"
				{spawn "tank_die_snow" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow" "basis"}
			else
				{spawn "tank_die_dust" "basis"}
			}
		else
			{spawn "tank_die_peaceful" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		}
	}
	{on "cut_parts"								;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 700 150 150 tank)	;// defined in "tank" prop
	}
	{on "check_water_level" overload
		{if water_level 1.6
			{able "sinking" 1}
			{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
			 			;// Conquest map persistence
		else
			{able "sinking" 0}
		}
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			}
		else stuff "small_arms"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_3"}
					{tags remove "death_counter_2"}
				else tagged "death_counter_3"
					{tags add "death_counter_final"}
					{tags remove "death_counter_3"}
				}
			else stuff "size2"
				{if tagged "death_counter_1"
					{tags add "death_counter_3"}
					{tags remove "death_counter_1"}
				else
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
					{tags remove "death_counter_3"}
				}
			else stuff "size3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 11.5
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
		else min_energy 8
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			}
		else min_energy 4
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			else tagged "death_counter_3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
			}
		}
	}
	{on operatable on
		{delay 2
			{spawn "black_target_medium" "missile_aim_point_bone" x}

		}
	}

	{on operatable off
		{delay 0.5
			{spawn "black_target_remover" "missile_aim_point_bone" x}
		}
	}
	(include "damage-medium_m.inc")
}

{"heavy tank"
	{inflammation_time 45}
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 5 r0 2.5 r1 10 offset 0 0 75}
			{blastwave c4 2 r0 10 r1 20 offset 0 0 75}
			{spawn "tank_die_heavy" "basis"}
			("explosion_HE_s6")
			{if terrain_fx "snow"
				{spawn "tank_die_snow" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow" "basis"}
			else
				{spawn "tank_die_dust" "basis"}
			}
		else
			{spawn "tank_die_peaceful" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		}
	}
	{on "cut_parts"								;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 800 200 200 tank)	;// defined in "tank" prop
	}
	{on "check_water_level" overload
		{if water_level 1.8
			{able "sinking" 1}
			{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
			 			;// Conquest map persistence
		else
			{able "sinking" 0}
		}
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_4"}
				{tags remove "death_counter_2"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
				{tags remove "death_counter_4"}
			}
		else stuff "small_arms"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_3"}
					{tags remove "death_counter_2"}
				else tagged "death_counter_3"
					{tags add "death_counter_4"}
					{tags remove "death_counter_3"}
				else tagged "death_counter_4"
					{tags add "death_counter_final"}
					{tags remove "death_counter_4"}
				}
			else stuff "size2"
				{if tagged "death_counter_1"
					{tags add "death_counter_3"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_4"}
					{tags remove "death_counter_2"}
				else
					{tags add "death_counter_final"}
					{tags remove "death_counter_3"}
					{tags remove "death_counter_4"}
				}
			else stuff "size3"
				{if tagged "death_counter_1"
					{tags add "death_counter_4"}
					{tags remove "death_counter_1"}
				else
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
					{tags remove "death_counter_3"}
					{tags remove "death_counter_4"}
				}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
				{tags remove "death_counter_4"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 13.9
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
		else min_energy 8
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_4"}
				{tags remove "death_counter_2"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
				{tags remove "death_counter_4"}
			}
		else min_energy 5
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			else tagged "death_counter_3"
				{tags add "death_counter_4"}
				{tags remove "death_counter_3"}
			else tagged "death_counter_4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_4"}
			}
		}
	}
	{on operatable on
		{delay 2

			{spawn "black_target_heavy" "missile_aim_point_bone" x}
		}
	}

	{on operatable off
		{delay 0.5
			{spawn "black_target_remover" "missile_aim_point_bone" x}
		}
	}
	(include "damage-heavy.inc")
}

{"heavy_M tank"
	{inflammation_time 45}
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 5 r0 2.5 r1 10 offset 0 0 75}
			{blastwave c4 2 r0 10 r1 20 offset 0 0 75}
			{spawn "tank_die_heavy" "basis"}
			("explosion_HE_s6")
			{if terrain_fx "snow"
				{spawn "tank_die_snow" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow" "basis"}
			else
				{spawn "tank_die_dust" "basis"}
			}
		else
			{spawn "tank_die_peaceful" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		}
	}
	{on "cut_parts"								;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 800 200 200 tank)	;// defined in "tank" prop
	}
	{on "check_water_level" overload
		{if water_level 1.8
			{able "sinking" 1}
			{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
			 			;// Conquest map persistence
		else
			{able "sinking" 0}
		}
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_4"}
				{tags remove "death_counter_2"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
				{tags remove "death_counter_4"}
			}
		else stuff "small_arms"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_3"}
					{tags remove "death_counter_2"}
				else tagged "death_counter_3"
					{tags add "death_counter_4"}
					{tags remove "death_counter_3"}
				else tagged "death_counter_4"
					{tags add "death_counter_final"}
					{tags remove "death_counter_4"}
				}
			else stuff "size2"
				{if tagged "death_counter_1"
					{tags add "death_counter_3"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_4"}
					{tags remove "death_counter_2"}
				else
					{tags add "death_counter_final"}
					{tags remove "death_counter_3"}
					{tags remove "death_counter_4"}
				}
			else stuff "size3"
				{if tagged "death_counter_1"
					{tags add "death_counter_4"}
					{tags remove "death_counter_1"}
				else
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
					{tags remove "death_counter_3"}
					{tags remove "death_counter_4"}
				}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
				{tags remove "death_counter_4"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 13.9
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
		else min_energy 8
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_4"}
				{tags remove "death_counter_2"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
				{tags remove "death_counter_4"}
			}
		else min_energy 5
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			else tagged "death_counter_3"
				{tags add "death_counter_4"}
				{tags remove "death_counter_3"}
			else tagged "death_counter_4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_4"}
			}
		}
	}
	{on operatable on
		{delay 2
			{spawn "black_target_heavy" "missile_aim_point_bone" x}
		}
	}

	{on operatable off
		{delay 0.5
			{spawn "black_target_remover" "missile_aim_point_bone" x}
		}
	}
	(include "damage-heavy_m.inc")
}

{"mine_exploder"
	{on blast overload			;// blast-wave hits specific volume
		{if not volume "wheel_work"
			{inherited}
		else
			{ani_play "explosion"}
		}
	}
}

{"mine_exploder roller"
	{on spawn
		{add_view	"dustrun_small"			"on_ground_slow"			"FXWheel_Work1"}
		{add_view	"dustrun_small"			"on_ground_slow"			"FXWheel_Work2"}
		{add_view	"tank_grit_small"		"on_grass_slow"				"FXWheel_Work1"}
		{add_view	"tank_grit_small"		"on_grass_slow"				"FXWheel_Work2"}
		{add_view	"dustrun_sand_small"	"on_sand_slow"				"FXWheel_Work1"}
		{add_view	"dustrun_sand_small"	"on_sand_slow"				"FXWheel_Work2"}
		{add_view	"dustrun_medium_grass2"	"on_snow_slow"				"FXWheel_Work1"}
		{add_view	"dustrun_medium_grass2"	"on_snow_slow"				"FXWheel_Work2"}
		{add_view	"dustrun_small"			"on_country_road_slow"		"FXWheel_Work1"}
		{add_view	"dustrun_small"			"on_country_road_slow"		"FXWheel_Work2"}

		{add_view	"tank_grit_small"		"on_ground"				"FXWheel_Work1"}
		{add_view	"tank_grit_small"		"on_ground"				"FXWheel_Work2"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXWheel_Work1"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXWheel_Work2"}
		{add_view	"tank_grit_small"		"on_grass"				"FXWheel_Work1"}
		{add_view	"tank_grit_small"		"on_grass"				"FXWheel_Work2"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXWheel_Work1"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXWheel_Work2"}
		{add_view	"drops_water"			"on_water"				"FXWheel_Work1"}
		{add_view	"drops_water"			"on_water"				"FXWheel_Work2"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXWheel_Work1"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXWheel_Work2"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXWheel_Work1"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXWheel_Work2"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXWheel_Work1"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXWheel_Work2"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXWheel_Work1"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXWheel_Work2"}
	}
}

{"mine_exploder flail"
	(define "terrain_fx_flail"
		{on terrain_fx %0 enter
			{if work "body"
				{if work "engine"
					{if not tagged "engine_turned_off"
						{if operatable
							{if "flail_running"
								{call "flail_fx_stop"}
								{view start "%1"}
							}
						}
					}
				}
			}
		}
	)
	("terrain_fx_flail" args "ground"			flail_ground)
	("terrain_fx_flail" args "sand"				flail_sand)
	("terrain_fx_flail" args "grass" 			flail_grass)
	("terrain_fx_flail" args "deep_water" 		flail_water)
	("terrain_fx_flail" args "water" 			flail_water)
	("terrain_fx_flail" args "shallow_water"	flail_water)
	("terrain_fx_flail" args "puddle"			flail_mud)
	("terrain_fx_flail" args "mud"				flail_mud)
	("terrain_fx_flail" args "swamp"			flail_mud)
	("terrain_fx_flail" args "country_road"		flail_ground)
	("terrain_fx_flail" args "snow"				flail_snow)
	("terrain_fx_flail" args "ice"				flail_snow)
	("terrain_fx_flail" args "road"				flail_rock)
	("terrain_fx_flail" args "rock"				flail_rock)
	("terrain_fx_flail" args "bridge"			flail_rock)
	("terrain_fx_flail" args "bridge_wood"		flail_rock)

	(define "flail_fx"
		{if terrain_fx "%0"
			{view start "flail_%1"}
		}
	)
	{on "flail_fx"
		("flail_fx" args ground ground)
		("flail_fx" args sand sand)
		("flail_fx" args grass grass)
		("flail_fx" args deep_water water)
		("flail_fx" args water water)
		("flail_fx" args shallow_water water)
		("flail_fx" args puddle mud)
		("flail_fx" args mud mud)
		("flail_fx" args swamp mud)
		("flail_fx" args country_road ground)
		("flail_fx" args snow snow)
		("flail_fx" args ice snow)
		("flail_fx" args road rock)
		("flail_fx" args bridge rock)
		("flail_fx" args bridge_wood rock)
	}
	{on "flail_fx_stop"
		{view pause "flail_ground"}
		{view pause "flail_sand"}
		{view pause "flail_grass"}
		{view pause "flail_water"}
		{view pause "flail_snow"}
		{view pause "flail_mud"}
		{view pause "flail_rock"}
	}
	{on spawn
		{add_view "flail_ground"	"flail_ground"	"FXWheel_Work1"}
		{add_view "flail_ground"	"flail_ground"	"FXWheel_Work2"}
		{add_view "flail_sand"		"flail_sand"	"FXWheel_Work1"}
		{add_view "flail_sand"		"flail_sand"	"FXWheel_Work2"}
		{add_view "flail_grass"		"flail_grass"	"FXWheel_Work1"}
		{add_view "flail_grass"		"flail_grass"	"FXWheel_Work2"}
		{add_view "flail_water"		"flail_water"	"FXWheel_Work1"}
		{add_view "flail_water"		"flail_water"	"FXWheel_Work2"}
		{add_view "flail_snow"		"flail_snow"	"FXWheel_Work1"}
		{add_view "flail_snow"		"flail_snow"	"FXWheel_Work2"}
		{add_view "flail_mud"		"flail_mud"		"FXWheel_Work1"}
		{add_view "flail_mud"		"flail_mud"		"FXWheel_Work2"}
		{add_view "flail_rock"		"flail_rock"	"FXWheel_Work1"}
		{add_view "flail_rock"		"flail_rock"	"FXWheel_Work2"}
		{add_view	"stop_signal"	"flail_light"	"flaillight1"}
		{add_view	"stop_signal"	"flail_light"	"flaillight2"}
		{add_view	"stop_signal"	"flail_light"	"flaillight3"}
		{add_view	"stop_signal"	"flail_light"	"flaillight4"}
		{view hide "flail_light"}
		{link_sound "flail"				"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{volumes "roller1" disable all}
		{volumes "roller5" disable all}
		{set "flail_running" 0}
		{tags remove "flail_starting"}
	}
	{on "engine_off"
		{call "flail_stop"}
	}
	{on "flail_stop"
		{kill_delay "flail1"}		;// stops flail startup sequence
		{kill_delay "flail2"}		;// stops flail startup sequence
		{kill_delay "flail_stop"}	;// stops flail stop timer
		{view hide "flail_light"}
		{volumes "roller1" disable all}
		{volumes "roller5" disable all}
		{play_sound "flail_end"}
		{if tagged "flail_starting"
			{tags remove "flail_starting"}
			{ani_stop "flail_work"}
			{ani_stop "flail_start"}
			{ani_play "flail_stop"}
			{stop_sound "flail_start"}
		}
		{if "flail_running"
			{set "flail_running" 0}
			{ani_stop "flail_work"}
			{ani_stop "flail_start"}
			{ani_play "flail_stop"}
			{call "flail_fx_stop"}
			{stop_sound "flail_loop"}
		}
	}
	{on "flail_start"
		{if not tagged "flail_stopped_by_speed"
			{if not tagged "flail_starting"
				{tags add "flail_starting"}
				{kill_delay "flail_stop"}	;// stops flail stop timer
				{ani_stop "flail_stop"}
				{ani_play "flail_start"}
				{play_sound "flail_start"}
				{view show "flail_light"}
				{view start "flail_light"}
				{volumes "roller1" enable contact}
				{volumes "roller5" enable contact}
				{delay 2 "flail2"
					{tags remove "flail_starting"}
					{call "flail_running"}
				}
			}
		}
	}
	{on "flail_running"
		{if not "flail_running"
			{set "flail_running" 1}
			{ani_play "flail_work" loop}
			{call "flail_fx"}
			{play_sound "flail_loop" 1}
		}
	}
	{on break
		{if component "engine"
			{call "flail_stop"}
		else component "body"
			{call "flail_stop"}
		}
	}
	{on engine off
		{delay 1 "flail_speed_stop"
			{tags remove "flail_stopped_by_speed"}
		}
		{delay 4 "flail_stop"
			{if "flail_running"
				{call "flail_stop"}
			}
		}
	}
	{on engine on
		{kill_delay "flail_speed_stop"}	;// stops flail speed stop timer
		{kill_delay "flail_stop"}		;// stops flail stop timer
	}
	{on operatable off
		{call "flail_stop"}
	}
	{on "check_speed"
		{if "flail_running"
			{if velocity 10
				{tags add "flail_stopped_by_speed"}
				;{damage_report "flail" "Flail stopped, speed too high"}
				{call "flail_stop"}
			}
		else
			{if not velocity 10
				{if work "body"
					{if work "engine"
						{if not tagged "engine_turned_off"
							{call "flail_start"}
						}
					}
				}
			}
		}
	}
}

{"tank shield"
	{on "shield_checker"
		(define "randomized_shield"
			{if rand %1
				{bone cut %0}
			}
		)

		("randomized_shield" args "shieldl1" 0.1)
		("randomized_shield" args "shieldl2" 0.1)
		("randomized_shield" args "shieldl3" 0.1)
		("randomized_shield" args "shieldl4" 0.1)
		("randomized_shield" args "shieldl5" 0.1)
		("randomized_shield" args "shieldl6" 0.1)
		("randomized_shield" args "shieldl7" 0.1)
		("randomized_shield" args "shieldl8" 0.1)
		("randomized_shield" args "shieldl9" 0.1)

		("randomized_shield" args "shieldr1" 0.1)
		("randomized_shield" args "shieldr2" 0.1)
		("randomized_shield" args "shieldr3" 0.1)
		("randomized_shield" args "shieldr4" 0.1)
		("randomized_shield" args "shieldr5" 0.1)
		("randomized_shield" args "shieldr6" 0.1)
		("randomized_shield" args "shieldr7" 0.1)
		("randomized_shield" args "shieldr8" 0.1)
		("randomized_shield" args "shieldr9" 0.1)

		("randomized_shield" args "shield1" 0.1)
		("randomized_shield" args "shield2" 0.1)
		("randomized_shield" args "shield3" 0.1)
		("randomized_shield" args "shield4" 0.1)
		("randomized_shield" args "shield5" 0.1)
		("randomized_shield" args "shield6" 0.1)
		("randomized_shield" args "shield7" 0.1)
		("randomized_shield" args "shield8" 0.1)
		("randomized_shield" args "shield9" 0.1)

		("randomized_shield" args "shieldw1" 0.1)
		("randomized_shield" args "shieldw2" 0.1)
		("randomized_shield" args "shieldw3" 0.1)
		("randomized_shield" args "shieldw4" 0.1)
		("randomized_shield" args "shieldw5" 0.1)
	}
}

{"shell_eject"
	{on fire "gun"
		{call "spawn_shell"}
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
					{spawn "shell_cannon" "fx_invers" x scale 0.014
						{impulse forward 4 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
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
		("shell_eject_delay" args 0 0)
	}

	{on "reload"
		{if name "gun"
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

;;---------------------------------------------------------------------------------
{"tank shell_eject_autoloader"
	{on fire "gun"
		{call "spawn_shell_autoloader"}
	}
	{on "spawn_shell_autoloader"
		{tags add "gun_fired"}
		{call "spawn_shell_delay_new"}
		(define "shell_eject_delay"
			{delay_ex %0
				{play_sound "breech_open"}
				{ani_play "shell_eject" 1}			;// door/hatch animation for tank to open and shell is thrown out
				{ani_play "shell_hatch" 1}
				{ani_play "eject_hatch"}
				{delay_ex %1
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view pause "smoke_shell"}
					}
					{spawn "poddon_cannon" "fx_invers" x scale 0.008
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

	{on "spawn_shell_delay_new"
		("shell_eject_delay" args 0 1)
	}

}
;;---------------------------------------------------------------------------------

{"open_death_fx"
	{on spawn
		{add_view	"fire_vehicle_death"			"fire_vehicle_death"	"body"}
		{add_view	"smoke_vehicle_death"			"smoke_vehicle_death"	"body"}
	}
}

{"open_death_fx_low"
	{on spawn
		{add_view	"fire_vehicle_death_low"		"fire_vehicle_death"	"body"}
		{add_view	"smoke_vehicle_death_low"		"smoke_vehicle_death"	"body"}
	}
}

{"goliath"
	{on fire "explosive"
		{components "body" destroy}
		{delay 0.1 {delete}}
	}
	{on "explosion"
		{delay 0.1 {delete}}
	}
}

;----------------------add by ordos  AMMO PANELS things---------------------

;(include "tank_modern.inc")

(define "pressure_plate"
	{on spawn
		{tags remove "on_firing"}
	}
	{on fire "gun" {tags add "on_firing"}
		{delay 5 {tags remove "on_firing"}}}

	{on "ammo_break" overload
		{if not tagged "on_firing"
				{if volume "%volume"
				  {if not tagged "ammo_gate_break"
					{call "blow_burnout"}
					{tags add "ammo_break_blow_pannel"}
					{tags add "gun_brake"}  ;main gun shouldn't work after ammo broken;
					{spawn "ex_air_big"}
				   else
						{if rand 0.9
							{inherited}
						else
						{call "blow_burnout"}
						{tags add "ammo_break_blow_pannel"}
						{tags add "gun_brake"}
						{spawn "ex_air_big"}
						}
				  }
				else {inherited}}

		else {inherited}
		}
	}
		{on "blow_burnout"
			{delay_ex 0
				;{fire radius 4 time 4 heating 0.5}
				{link_sound "cook_off" "detonation/cook_off/cook"}
				{link_sound "cook_off" "detonation/cook_off/transition"}
				{link_sound "burnup_ammo" "detonation/cook_off/burn_ammo"}
				{link_sound "ammo_exp" "detonation/cook_off/internal_explosions"}
				{ani_play "open" -3.0 resume}
				{ani_play "open2" -3.0 resume}
				{delay 0.1
				{burn volume "%volume" fx "cooking_presmoke_3" time 10 fake}
				{play_sound "ammo_exp"}
				}
				{delay 3.4 0.4 {burn volume "%volume" fx "cooking_high" time 10 fake} {play_sound "cook_off"} {play_sound "burnup_ammo"}}
				{delay 3 1 {burn volume "%volume" fx "cooking_high_2" time 10 fake}}
				{delay 7 1 {burn volume "%volume" fx "cooking_turret_smoke" time 15 fake}}
				{tags add "blow_panel_active"}
				{ik_enable "turret" 1}
				{call "%panels"}
			}
		}
		{on "%panels"

			;{view start "blow_burnout1"}
			{delay 3.4 0.4	{view start "blow_burnout2"}}
			{delay 4 1	{view start "blow_burnout3"}}
			{delay 6 1	{view start "blow_burnout4"}}

			{delay 5	{view pause "blow_burnout2"}}
		}
)




{"pressure_plates" ("pressure_plate" volume(ammo_storage_main) panels(blow_panels))}
{"pressure_plates1" ("pressure_plate" volume(ammo_storage_main1) panels(blow_panels1))}
{"pressure_plates2" ("pressure_plate" volume(ammo_storage_main2) panels(blow_panels2))}
{"pressure_plates3" ("pressure_plate" volume(ammo_storage_main3) panels(blow_panels3))}
{"pressure_plates4" ("pressure_plate" volume(ammo_storage_main4) panels(blow_panels4))}
{"pressure_plates5" ("pressure_plate" volume(ammo_storage_main5) panels(blow_panels5))}




{"flame_veh"

	{on "ammo_break" overload

		{spawn "ex_air_big"}
		{delay 3
			{spawn "piece_fueltank" "Body"}
			{damage_report "fuel" "component/armored/fuel_tank_damaged"}
			{able select 0}
			{tags add "burned"}
			{fire radius 4 time 4 heating 0.5}
			{play_sound "flame" 1}
			{spawn "fire_tank_fuel" "basis"}
			{call "burn_emit"}
			{tags add "no_scavenge"}
			{kick_entity_manager}
			{tags add "destroyed"}
			{stop_sound "engine_idle"}
			{delay 20
				{drop_orders}
				{reset_manual_control}
				{able repaired 0}
				{unlink_trailer}
				{clear_inventory}
				{spawn "burned_spot_round2" scale 1.4 random_orientation}
				{delay 0.1
					{spawn "black_target_remover" "missile_aim_point_bone" x}
				}
				{delay 1
					{set_skeleton "_xx" sync}
				}

			}
			{delay 49		{stop_sound "flame"}}
		}

	}
}
;//ordos_add//

{"Shtora"
	{on spawn
		{add_view	"shtora_work"	"shtora"	"shtora1"}
		{add_view	"shtora_work"	"shtora"	"shtora2"}
	}

	{on break
		{if component "Shtora"
			{spawn "glass_hit" "Shtora"}
			{spawn "glass_hit" "Shtora1"}
			{tags add "Shtora_damaged"}
			{if not tagged "destroyed"
				{damage_report "Shtora" "component/armored/Shtora_damaged"}
			}
		}
	}

	{on repair
		{if component "Shtora"
			{damage_report "Shtora" "component/armored/Shtora_repaired"}
			{tags remove "Shtora_damaged"}
		}
	}

	{on pierce
		{if component "Shtora"
			{components "Shtora" break}
			{burn fx "smoke_dead_tank2" fake}
		}
	}

	{on "_explosion"
		{view hide "shtora"}
	}
}

{"remote_turret"
	{on "update_turret"	overload
		{if not work "turret"
			{ik_enable "turret" 0}
			{tags add "no_missile_control"}
		else not work "body"
			{ik_enable "turret" 0}
			{tags add "no_missile_control"}
		else not work "turret_move_engine"
			{ik_enable "turret" 0}
			{tags add "no_missile_control"}
		else tagged "no_power"
			{ik_enable "turret" 0}
		else tagged "contusion"
			{ik_enable "turret" 0}
		else
			{ik_enable "turret" 1}
		}
	}

	{on "emit_by_turret" overload
		{if not work "turret"
			{if tagged "chassis_brake"
				{call "check_burn_emit"}
				{delay 1 {crew_emit}}
				{delay 2 {crew_emit}}
				{delay 3 {crew_emit}}
			}
		}
	}

	{on "update_moveability"
		{call "emit_by_turret"}
	}
}

{"sam"
	{on "update_gun" overload
		{if work "stabilizer"
			{if work "gunner_panel"
				{if not tagged "contusion"
					{weapon_work "gun" 1}
				else {weapon_work "gun" 0}}
				else {weapon_work "gun" 0}}
				else {weapon_work "gun" 0}}
		}
}

;*=============ADS system=====================*/
{"gl6"
	(define "kaz_shot"
		volume "kaz_hitzone_%0"
		{spawn "cw_cumulative_frestrict" {delay 0.1 {delete}}}
		{bullet_detonate}
		{spawn "ex_air_sm" "kaz_%0"}
		{spawn "startsmoke_cali" "kaz_shot_a_%0" x}
		{spawn "ex_air_norm" "kaz_shot_b_%0" x}
		{spawn "bazooka_shot" "kaz_shot_b_%0" x}
	
		{bone hide "kaz_%0"}
		{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
		{volumes "kaz_hitzone_%0" disable bullet contact}
		{volumes "kaz_hitzone_%0a" disable bullet contact}
		{volumes "kaz_%0" enable touch}
		{volumes "kaz_hitzone_%0" enable touch}
		{tags add "kaz_%0_empty"}
		else volume "kaz_hitzone_%0a"
		{spawn "cw_cumulative_frestrict" {delay 0.1 {delete}}}
		{bullet_detonate}
		{spawn "ex_air_sm" "kaz_%0"}
		{spawn "startsmoke_cali" "kaz_shot_a_%0" x}
		{spawn "ex_air_norm" "kaz_shot_b_%0" x}
		{spawn "bazooka_shot" "kaz_shot_b_%0" x}
		{bone hide "kaz_%0"}
		{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
		{volumes "kaz_hitzone_%0" disable bullet contact}
		{volumes "kaz_hitzone_%0a" disable bullet contact}
		{volumes "kaz_%0" enable touch}
		{volumes "kaz_hitzone_%0" enable touch}
		{tags add "kaz_%0_empty"}
	)
		(define "kaz_shot_apds"
			{tag add "拦截穿杆4"}
			volume "kaz_hitzone_%0a"
			{spawn "ex_air_sm" "kaz_%0"}
			{spawn "startsmoke_cali" "kaz_shot_a_%0" x}
			{spawn "ex_air_norm" "kaz_shot_b_%0" x}
			{spawn "tank_cannon_fire" "kaz_shot_b_%0" x}
			{bone hide "kaz_%0"}
			{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
			{volumes "kaz_hitzone_%0" disable bullet contact}
			{volumes "kaz_hitzone_%0a" disable bullet contact}
			{volumes "kaz_%0" enable touch}
			{volumes "kaz_hitzone_%0" enable touch}
			{tags add "kaz_%0_empty"}
		)
		(define "kaz_destroyed"
			volume "kaz_%0"
			{spawn "ex_air_norm"}
			{blastwave c4 0.5 r0 0.3 r1 0.4}
			{bone hide "kaz_%0"}
			{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
			{volumes "kaz_hitzone_%0" disable bullet contact}
			{volumes "kaz_%0" enable touch}
			{volumes "kaz_hitzone_%0" enable touch}
			{tags add "kaz_%0_empty"}
			{components "kaz%0" break}
		)
		{on "kaz_turn_on"
				{tags add "kaz_working"}
			{if operatable
				{if not tagged "no_power"
					{call "kaz_enable"}
				}
			}
		}
		{on "kaz_enable"
			(define "kaz_single_turn_on"{if work "kaz%0" {if not tagged "kaz_%0_empty" {volumes "kaz_hitzone_%0" enable bullet contact}}})
			{if work "kaz_radar"
				("kaz_single_turn_on" args 01)("kaz_single_turn_on" args 02)("kaz_single_turn_on" args 03)("kaz_single_turn_on" args 04)
				("kaz_single_turn_on" args 05)("kaz_single_turn_on" args 06)("kaz_single_turn_on" args 07)("kaz_single_turn_on" args 08)
				("kaz_single_turn_on" args 09)("kaz_single_turn_on" args 10)("kaz_single_turn_on" args 11)("kaz_single_turn_on" args 12)
				("kaz_single_turn_on" args 13)("kaz_single_turn_on" args 14)("kaz_single_turn_on" args 15)("kaz_single_turn_on" args 16)
				("kaz_single_turn_on" args 17)("kaz_single_turn_on" args 18)("kaz_single_turn_on" args 19)("kaz_single_turn_on" args 20)
				("kaz_single_turn_on" args 21)("kaz_single_turn_on" args 22)("kaz_single_turn_on" args 23)("kaz_single_turn_on" args 24)
				("kaz_single_turn_on" args 25)("kaz_single_turn_on" args 26)("kaz_single_turn_on" args 27)("kaz_single_turn_on" args 28)
				("kaz_single_turn_on" args 29)
			}
		}
			(define "kaz_single_turn_off"
				{volumes "kaz_hitzone_%0" disable bullet contact blast visible obstacle select}
				{volumes "kaz_hitzone_%0a" disable bullet contact blast visible obstacle select touch}
			)
			(define "kaz_turn_off"
				{if not "kaz_reloading"
					{tags remove "kaz_working"}
				}
				("kaz_single_turn_off" args 01)("kaz_single_turn_off" args 02)("kaz_single_turn_off" args 03)("kaz_single_turn_off" args 04)
				("kaz_single_turn_off" args 05)("kaz_single_turn_off" args 06)("kaz_single_turn_off" args 07)("kaz_single_turn_off" args 08)
				("kaz_single_turn_off" args 09)("kaz_single_turn_off" args 10)("kaz_single_turn_off" args 11)("kaz_single_turn_off" args 12)
				("kaz_single_turn_off" args 13)("kaz_single_turn_off" args 14)("kaz_single_turn_off" args 15)("kaz_single_turn_off" args 16)
				("kaz_single_turn_off" args 17)("kaz_single_turn_off" args 18)("kaz_single_turn_off" args 19)("kaz_single_turn_off" args 20)
				("kaz_single_turn_off" args 21)("kaz_single_turn_off" args 22)("kaz_single_turn_off" args 23)("kaz_single_turn_off" args 24)
				("kaz_single_turn_off" args 25)("kaz_single_turn_off" args 26)("kaz_single_turn_off" args 27)("kaz_single_turn_off" args 28)
				("kaz_single_turn_off" args 29)
			)
			{on spawn
				("kaz_turn_off")
				{delay 0.1 ("kaz_turn_off")}
				{set "kaz_reloading" 0}
				{tags remove "kaz_reloading"}{tags remove "kaz_blocked"}
			}
			{on "kaz_work"
				{if not tagged "kaz_blocked"
					{kill_delay "kaz_delay"}
					{if not "kaz_reloading"
						{call "kaz_turn_on"}
					else {delay 0.2 "kaz_reloading"  {set "kaz_reloading" 0} {call "kaz_turn_on"}}
					}
					{if stuff "proj_pointer"
						{delay 9 "kaz_delay"
							{kill_delay "kaz_contact"}
							{kill_delay "kaz_reloading"}
							("kaz_turn_off")
					}
					else
						{delay 3 "kaz_delay"
							{kill_delay "kaz_contact"}
							{kill_delay "kaz_reloading"}
							("kaz_turn_off")
						}
					}
				}
			}
			(define "kaz_shoot_apds"
				{tags add "拦截穿杆3"}
				{damage_report "basis" "component/aps_active"}
				{if ("kaz_shot" args 01)
				else ("kaz_shot" args 02) else ("kaz_shot" args 03) else ("kaz_shot" args 04) else ("kaz_shot" args 05)
				else ("kaz_shot" args 06) else ("kaz_shot" args 07) else ("kaz_shot" args 08) else ("kaz_shot" args 09)
				else ("kaz_shot" args 10) else ("kaz_shot" args 11) else ("kaz_shot" args 12) else ("kaz_shot" args 13)
				else ("kaz_shot" args 14) else ("kaz_shot" args 15) else ("kaz_shot" args 16) else ("kaz_shot" args 17)
				else ("kaz_shot" args 18) else ("kaz_shot" args 19) else ("kaz_shot" args 20) else ("kaz_shot" args 21)
				else ("kaz_shot" args 22) else ("kaz_shot" args 23) else ("kaz_shot" args 24) else ("kaz_shot" args 25)
				else ("kaz_shot" args 26) else ("kaz_shot" args 27) else ("kaz_shot" args 28) else ("kaz_shot" args 29)
				}
				{set "kaz_reloading" 1}
				("kaz_turn_off")
				{tags add "kaz_reloading"}
				{delay 0.2 {call "kaz_work"}
				{set "kaz_reloading" 0}
				{tags remove "kaz_reloading"}
				}
			)
			(define "kaz_shoot"
				{tags add "kaz_shoot_ordos_debug!!!!!!!"}
				{damage_report "basis" "component/aps_active"}
				{if ("kaz_shot" args 01)
				else ("kaz_shot" args 02)
				else ("kaz_shot" args 03)
				else ("kaz_shot" args 04)
				else ("kaz_shot" args 05)
				else ("kaz_shot" args 06)
				else ("kaz_shot" args 07)
				else ("kaz_shot" args 08)
				else ("kaz_shot" args 09)
				else ("kaz_shot" args 10)
				else ("kaz_shot" args 11)
				else ("kaz_shot" args 12)
				else ("kaz_shot" args 13)
				else ("kaz_shot" args 14)
				else ("kaz_shot" args 15)
				else ("kaz_shot" args 16)
				else ("kaz_shot" args 17)
				else ("kaz_shot" args 18)
				else ("kaz_shot" args 19)
				else ("kaz_shot" args 20)
				else ("kaz_shot" args 21)
				else ("kaz_shot" args 22)
				else ("kaz_shot" args 23)
				else ("kaz_shot" args 24)
				else ("kaz_shot" args 25)
				else ("kaz_shot" args 26)
				else ("kaz_shot" args 27)
				else ("kaz_shot" args 28)
				else ("kaz_shot" args 29)
				}
				{set "kaz_reloading" 1}
				("kaz_turn_off")
				{tags add "kaz_reloading"}
				{delay 0.2 {call "kaz_work"}
				{set "kaz_reloading" 0}
				{tags remove "kaz_reloading"}
				}
			)
			{on break
				{if component "kaz_radar"
					{spawn "tank_die_particle"}
					{tags add "kaz_radar_damaged"}
					{if not tagged "destroyed"
						{damage_report "kaz_radar" "component/kaz_radar_damaged"}
					}
					else  component "kaz_radar1"
						{spawn "tank_die_particle"}
						{tags add "kaz_radar1_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar1" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar2"
						{spawn "tank_die_particle"}
						{tags add "kaz_radar2_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar2" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar3"
						{spawn "tank_die_particle"}
						{tags add "kaz_radar3_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar3" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar4"
							{spawn "tank_die_particle"}
							{tags add "kaz_radar4_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar4" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar5"
							{spawn "tank_die_particle"}
							{tags add "kaz_radar5_damaged"}
							{if not tagged "destroyed"
								{damage_report "kaz_radar5" "component/kaz_radar_damaged"}
							}
						else component "kaz01"
						else component "kaz02"
						else component "kaz03"
						else component "kaz04"
						else component "kaz05"
						else component "kaz06"
						else component "kaz07"
						else component "kaz08"
						else component "kaz09"
						else component "kaz10"
						else component "kaz11"
						else component "kaz12"
						else component "kaz13"
						else component "kaz14"
						else component "kaz15"
						else component "kaz16"
						else component "kaz17"
						else component "kaz18"
						else component "kaz19"
						else component "kaz20"
						else component "kaz21"
						else component "kaz22"
						else component "kaz23"
						else component "kaz24"
						else component "kaz25"
						else component "kaz26"
						else component "kaz27"
						else component "kaz28"
						else component "kaz29"
					}
			}
				{on repair
					(define "repair_kaz")
					{if component "kaz_radar"
						{damage_report "kaz_radar" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar_damaged"}
					else component "kaz_radar1"
						{damage_report "kaz_radar1" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar1_damaged"}
					else component "kaz_radar2"
						{damage_report "kaz_radar2" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar2_damaged"}
					else component "kaz_radar3"
						{damage_report "kaz_radar3" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar3_damaged"}
					else component "kaz_radar4"
						{damage_report "kaz_radar4" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar4_damaged"}
					else component "kaz_radar5"
						{damage_report "kaz_radar5" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar5_damaged"}
					else component "kaz01"
						("repair_kaz" args 01)
					else component "kaz02"
						("repair_kaz" args 02)
					else component "kaz03"
						("repair_kaz" args 03)
					else component "kaz04"
						("repair_kaz" args 04)
					else component "kaz05"
						("repair_kaz" args 05)
					else component "kaz06"
						("repair_kaz" args 06)
					else component "kaz07"
						("repair_kaz" args 07)
					else component "kaz08"
						("repair_kaz" args 08)
					else component "kaz09"
						("repair_kaz" args 09)
					else component "kaz10"
						("repair_kaz" args 10)
					else component "kaz11"
						("repair_kaz" args 11)
					else component "kaz12"
						("repair_kaz" args 12)
					else component "kaz13"
						("repair_kaz" args 13)
					else component "kaz14"
						("repair_kaz" args 14)
					else component "kaz15"
						("repair_kaz" args 15)
					else component "kaz16"
						("repair_kaz" args 16)
					else component "kaz17"
						("repair_kaz" args 17)
					else component "kaz18"
						("repair_kaz" args 18)
					else component "kaz19"
						("repair_kaz" args 19)
					else component "kaz20"
						("repair_kaz" args 20)
					else component "kaz21"
						("repair_kaz" args 21)
					else component "kaz22"
						("repair_kaz" args 22)
					else component "kaz23"
						("repair_kaz" args 23)
					else component "kaz24"
						("repair_kaz" args 24)
					else component "kaz25"
						("repair_kaz" args 25)
					else component "kaz26"
						("repair_kaz" args 26)
					else component "kaz27"
						("repair_kaz" args 27)
					else component "kaz28"
						("repair_kaz" args 28)
					else component "kaz29"
						("repair_kaz" args 29)
					}
				}
					{on pierce
						{if component "kaz_radar"
							{components "kaz_radar" break}
							{burn fx "smoke_dead_tank2" fake}
						else  component "kaz_radar1"
							{components "kaz_radar1" break}
							{burn fx "smoke_dead_tank2" fake}
						else  component "kaz_radar2"
							{components "kaz_radar2" break}
							{burn fx "smoke_dead_tank2" fake}
							else  component "kaz_radar3"
							{components "kaz_radar3" break}
							{burn fx "smoke_dead_tank2" fake}
							else  component "kaz_radar4"
							{components "kaz_radar4" break}
							{burn fx "smoke_dead_tank2" fake}
							else  component "kaz_radar5"
							{components "kaz_radar5" break}
							{burn fx "smoke_dead_tank2" fake}
							}
							{if ("kaz_destroyed" args 01)
							else ("kaz_destroyed" args 02)
							else ("kaz_destroyed" args 03)
							else ("kaz_destroyed" args 04)
							else ("kaz_destroyed" args 05)
							else ("kaz_destroyed" args 06)
							else ("kaz_destroyed" args 07)
							else ("kaz_destroyed" args 08)
							else ("kaz_destroyed" args 09)
							else ("kaz_destroyed" args 10)
							else ("kaz_destroyed" args 11)
							else ("kaz_destroyed" args 12)
							else ("kaz_destroyed" args 13)
							else ("kaz_destroyed" args 14)
							else ("kaz_destroyed" args 15)
							else ("kaz_destroyed" args 16)
							else ("kaz_destroyed" args 17)
							else ("kaz_destroyed" args 18)
							else ("kaz_destroyed" args 19)
							else ("kaz_destroyed" args 20)
							else ("kaz_destroyed" args 21)
							else ("kaz_destroyed" args 22)
							else ("kaz_destroyed" args 23)
							else ("kaz_destroyed" args 24)
							else ("kaz_destroyed" args 25)
							else ("kaz_destroyed" args 26)
							else ("kaz_destroyed" args 27)
							else ("kaz_destroyed" args 28)
							else ("kaz_destroyed" args 29)
							}
							}
							
							{on "kaz_shell_hit"
								{if stuff "low_speed"
									{if not stuff "proj_pointer"
										{call "kaz_work_on_rpg"}
									}
								else stuff "aps_distoryable_apds"
										{tags add "拦截穿杆1"}
										{call "kaz_work_on_apds"}
								}
								{if stuff "proj_pointer"
									{tags add "kaz_work_on_ptur!!!ordos_debug222"}
									{call "kaz_work_on_ptur"}
								}
							}
							{on bullet_hit
								{call "kaz_shell_hit"}
							}
							{on "kaz_work_on_rpg"
								{tags add "kaz_work_on_rpg!!!ordos_debug111"}
								("kaz_shoot")
							}
							{on "kaz_work_on_apds"
								{tags add "拦截穿杆2"}
								("kaz_shoot_apds")
							}
							{on "kaz_work_on_ptur" {call "kaz_work"}}
							
							{on "kaz_work_on_shell"}
							
							{on "other_kaz_contact"
								{if volume "kaz_hitzone"
									{if tagged "kaz_working"
										("kaz_turn_off")
										{kill_delay "kaz_contact"}
										{delay 0.5 "kaz_contact"
											{tags add "kaz_contact_ordos_debug111"}
											{call "kaz_turn_on"}
										}
									}
								}
								{if tagged "kaz_working"
									{delay 9 "kaz_delay"
									{kill_delay "kaz_contact"}
									("kaz_turn_off")
									}
								}
							}
							{on contact sync
								
								{if effector "proj_dummy"
									
									{if volume "kaz_hitzone"
										("kaz_shoot")
										{tags add "kaz_shield_contact!!proj_dummy!_ordos_debug222"}
										{with_effector {call "destroyed_by_kaz"}}
									else	{with_effector {call "detonate"}}
									}
								else effector "cw_cumassist_spawner" {tags add "cw_cumassist_spawner!_ordos_debug111"}
								else effector "cw_cumulative_assistor" {tags add "cw_cumulative_assistor!_ordos_debug111"}
								else effector "cw_fgassist_spawner" 	{tags add "cw_fgassist_spawner!_ordos_debug111"}
								else effector "cw_fg_assistor" 	      {tags add "cw_fg_assistor!_ordos_debug111"}
								else effector "cw_apcrassist_spawner" 	{tags add "cw_apcrassist_spawner!_ordos_debug111"}
								else effector "cw_apcr_assistor" 	{tags add "cw_apcr_assistor!_ordos_debug111"}
								else
									{call "other_kaz_contact"}
								}
							}
							{on "kaz_reload"
							(define "kaz_reload_single"
							tagged "kaz_%0_empty"
							{delay 0.1
							{volumes "kaz_%0" disable touch}
							{volumes "kaz_hitzone_%0" disable touch}
							{tags remove "kaz_%0_empty"}
							{volumes "kaz_%0" enable contact bullet blast contact_ground visible select}
							{bone show "kaz_%0"}
							}
							)
							{if ("kaz_reload_single" args 01)
							else ("kaz_reload_single" args 02)
							else ("kaz_reload_single" args 03)
							else ("kaz_reload_single" args 04)
							else ("kaz_reload_single" args 05)
							else ("kaz_reload_single" args 06)
							else ("kaz_reload_single" args 07)
							else ("kaz_reload_single" args 08)
							else ("kaz_reload_single" args 09)
							else ("kaz_reload_single" args 10)
							else ("kaz_reload_single" args 11)
							else ("kaz_reload_single" args 12)
							else ("kaz_reload_single" args 13)
							else ("kaz_reload_single" args 14)
							else ("kaz_reload_single" args 15)
							else ("kaz_reload_single" args 16)
							else ("kaz_reload_single" args 17)
							else ("kaz_reload_single" args 18)
							else ("kaz_reload_single" args 19)
							else ("kaz_reload_single" args 20)
							else ("kaz_reload_single" args 21)
							else ("kaz_reload_single" args 22)
							else ("kaz_reload_single" args 23)
							else ("kaz_reload_single" args 24)
							else ("kaz_reload_single" args 25)
							else ("kaz_reload_single" args 26)
							}
							}
							}


{"kaz"
	(define "kaz_shot"
		volume "kaz_hitzone_%0"
		{spawn "cw_cumulative_frestrict" {delay 0.1 {delete}}}
		{tags add "kaz_shot_ordos_debug!!kaz_hitzone_%0"}
		{bullet_detonate}
		{ani_play "kaz_turn_%0"}	
		{spawn "ex_air_sm" "kaz_%0"}
		{spawn "startsmoke_cali" "kaz_shot_a_%0" x}
		{spawn "ex_air_norm" "kaz_shot_b_%0" x}
		;{spawn "tank_cannon_fire" "kaz_shot_b_%0" x}
		{spawn "bazooka_shot" "kaz_shot_b_%0" x}
		{bone hide "kaz_%0"}
		{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
		{volumes "kaz_hitzone_%0" disable bullet contact}
		{volumes "kaz_hitzone_%0a" disable bullet contact}
		{volumes "kaz_%0" enable touch}
		{volumes "kaz_hitzone_%0" enable touch}
		{tags add "kaz_%0_empty"}
		else volume "kaz_hitzone_%0a"
		{spawn "cw_cumulative_frestrict" {delay 0.1 {delete}}}
		{bullet_detonate}
		{spawn "ex_air_sm" "kaz_%0"}
		{spawn "startsmoke_cali" "kaz_shot_a_%0" x}
		{spawn "ex_air_norm" "kaz_shot_b_%0" x}
		{spawn "bazooka_shot" "kaz_shot_b_%0" x}
		{bone hide "kaz_%0"}
		{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
		{volumes "kaz_hitzone_%0" disable bullet contact}
		{volumes "kaz_hitzone_%0a" disable bullet contact}
		{volumes "kaz_%0" enable touch}
		{volumes "kaz_hitzone_%0" enable touch}
		{tags add "kaz_%0_empty"}
	)
		(define "kaz_destroyed"
			volume "kaz_%0"
			{spawn "ex_air_norm"}
			{blastwave c4 0.5 r0 0.3 r1 0.4}
			{bone hide "kaz_%0"}
			{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
			{volumes "kaz_hitzone_%0" disable bullet contact}
			{volumes "kaz_%0" enable touch}
			{volumes "kaz_hitzone_%0" enable touch}
			{tags add "kaz_%0_empty"}
			{components "kaz%0" break}
		)
		{on "kaz_turn_on"
				{tags add "kaz_working"}
				{tags add "kaz_turn_on_ordos_debug111"}
			{if operatable
				{if not tagged "no_power"
					{call "kaz_enable"}
				}
			}
		}
		{on "kaz_enable"
			(define "kaz_single_turn_on"
				{if work "kaz%0" {if not tagged "kaz_%0_empty" {volumes "kaz_hitzone_%0" enable bullet contact}}}
			)
			{if work "kaz_radar"
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
				("kaz_single_turn_on" args 25)
				("kaz_single_turn_on" args 26)
				("kaz_single_turn_on" args 27)
				("kaz_single_turn_on" args 28)
				("kaz_single_turn_on" args 29)
			}
		}
			(define "kaz_single_turn_off"
				{volumes "kaz_hitzone_%0" disable bullet contact blast visible obstacle select}
				{volumes "kaz_hitzone_%0a" disable bullet contact blast visible obstacle select touch}
			)
			(define "kaz_turn_off"
				{if not "kaz_reloading"
					{tags remove "kaz_working"}
				}
				("kaz_single_turn_off" args 01)
				("kaz_single_turn_off" args 02)
				("kaz_single_turn_off" args 03)
				("kaz_single_turn_off" args 04)
				("kaz_single_turn_off" args 05)
				("kaz_single_turn_off" args 06)
				("kaz_single_turn_off" args 07)
				("kaz_single_turn_off" args 08)
				("kaz_single_turn_off" args 09)
				("kaz_single_turn_off" args 10)
				("kaz_single_turn_off" args 11)
				("kaz_single_turn_off" args 12)
				("kaz_single_turn_off" args 13)
				("kaz_single_turn_off" args 14)
				("kaz_single_turn_off" args 15)
				("kaz_single_turn_off" args 16)
				("kaz_single_turn_off" args 17)
				("kaz_single_turn_off" args 18)
				("kaz_single_turn_off" args 19)
				("kaz_single_turn_off" args 20)
				("kaz_single_turn_off" args 21)
				("kaz_single_turn_off" args 22)
				("kaz_single_turn_off" args 23)
				("kaz_single_turn_off" args 24)
				("kaz_single_turn_off" args 25)
				("kaz_single_turn_off" args 26)
				("kaz_single_turn_off" args 27)
				("kaz_single_turn_off" args 28)
				("kaz_single_turn_off" args 29)
			)
			{on spawn
				("kaz_turn_off")
				{delay 0.1 ("kaz_turn_off")}
				{set "kaz_reloading" 0}
				{tags remove "kaz_reloading"}
				{tags remove "kaz_blocked"}
			}
			{on "kaz_work"
				{if not tagged "kaz_blocked"
					{kill_delay "kaz_delay"}
					{if not "kaz_reloading"
						{call "kaz_turn_on"}

					else {delay 0.2 "kaz_reloading"  {set "kaz_reloading" 0} {call "kaz_turn_on"}}
					}
					{if stuff "proj_pointer"
						{delay 9 "kaz_delay"
						{kill_delay "kaz_contact"}
						{kill_delay "kaz_reloading"}
						("kaz_turn_off")
					}
					else
						{delay 3 "kaz_delay"
							{kill_delay "kaz_contact"}
							{kill_delay "kaz_reloading"}
							("kaz_turn_off")
						}
					}
				}
			}
			(define "kaz_shoot"
				{tags add "kaz_shoot_ordos_debug!!!!!!!"}
				{if ("kaz_shot" args 01)
				else ("kaz_shot" args 02)
				else ("kaz_shot" args 03)
				else ("kaz_shot" args 04)
				else ("kaz_shot" args 05)
				else ("kaz_shot" args 06)
				else ("kaz_shot" args 07)
				else ("kaz_shot" args 08)
				else ("kaz_shot" args 09)
				else ("kaz_shot" args 10)
				else ("kaz_shot" args 11)
				else ("kaz_shot" args 12)
				else ("kaz_shot" args 13)
				else ("kaz_shot" args 14)
				else ("kaz_shot" args 15)
				else ("kaz_shot" args 16)
				else ("kaz_shot" args 17)
				else ("kaz_shot" args 18)
				else ("kaz_shot" args 19)
				else ("kaz_shot" args 20)
				else ("kaz_shot" args 21)
				else ("kaz_shot" args 22)
				else ("kaz_shot" args 23)
				else ("kaz_shot" args 24)
				else ("kaz_shot" args 25)
				else ("kaz_shot" args 26)
				else ("kaz_shot" args 27)
				else ("kaz_shot" args 28)
				else ("kaz_shot" args 29)
				}
				{set "kaz_reloading" 1}
				("kaz_turn_off")
				{tags add "kaz_reloading"}
				{delay 0.2 {call "kaz_work"}
				{set "kaz_reloading" 0}
				{tags remove "kaz_reloading"}
				}
			)
			{on break
				{if component "kaz_radar"
					{spawn "tank_die_particle"}
					{tags add "kaz_radar_damaged"}
					{if not tagged "destroyed"
						{damage_report "kaz_radar" "component/kaz_radar_damaged"}
					}
					else  component "kaz_radar1"
						{spawn "tank_die_particle"}
						{tags add "kaz_radar1_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar1" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar2"
						{spawn "tank_die_particle"}
						{tags add "kaz_radar2_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar2" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar3"
						{spawn "tank_die_particle"}
						{tags add "kaz_radar3_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar3" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar4"
							{spawn "tank_die_particle"}
							{tags add "kaz_radar4_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar4" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar5"
							{spawn "tank_die_particle"}
							{tags add "kaz_radar5_damaged"}
							{if not tagged "destroyed"
								{damage_report "kaz_radar5" "component/kaz_radar_damaged"}
							}
						else component "kaz01"
						else component "kaz02"
						else component "kaz03"
						else component "kaz04"
						else component "kaz05"
						else component "kaz06"
						else component "kaz07"
						else component "kaz08"
						else component "kaz09"
						else component "kaz10"
						else component "kaz11"
						else component "kaz12"
						else component "kaz13"
						else component "kaz14"
						else component "kaz15"
						else component "kaz16"
						else component "kaz17"
						else component "kaz18"
						else component "kaz19"
						else component "kaz20"
						else component "kaz21"
						else component "kaz22"
						else component "kaz23"
						else component "kaz24"
						else component "kaz25"
						else component "kaz26"
						else component "kaz27"
						else component "kaz28"
						else component "kaz29"
					}
			}
				{on repair
					(define "repair_kaz")
					{if component "kaz_radar"
						{damage_report "kaz_radar" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar_damaged"}
					else component "kaz_radar1"
						{damage_report "kaz_radar1" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar1_damaged"}
					else component "kaz_radar2"
						{damage_report "kaz_radar2" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar2_damaged"}
					else component "kaz_radar3"
						{damage_report "kaz_radar3" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar3_damaged"}
					else component "kaz_radar4"
						{damage_report "kaz_radar4" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar4_damaged"}
					else component "kaz_radar5"
						{damage_report "kaz_radar5" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar5_damaged"}
					else component "kaz01"
						("repair_kaz" args 01)
					else component "kaz02"
						("repair_kaz" args 02)
					else component "kaz03"
						("repair_kaz" args 03)
					else component "kaz04"
						("repair_kaz" args 04)
					else component "kaz05"
						("repair_kaz" args 05)
					else component "kaz06"
						("repair_kaz" args 06)
					else component "kaz07"
						("repair_kaz" args 07)
					else component "kaz08"
						("repair_kaz" args 08)
					else component "kaz09"
						("repair_kaz" args 09)
					else component "kaz10"
						("repair_kaz" args 10)
					else component "kaz11"
						("repair_kaz" args 11)
					else component "kaz12"
						("repair_kaz" args 12)
					else component "kaz13"
						("repair_kaz" args 13)
					else component "kaz14"
						("repair_kaz" args 14)
					else component "kaz15"
						("repair_kaz" args 15)
					else component "kaz16"
						("repair_kaz" args 16)
					else component "kaz17"
						("repair_kaz" args 17)
					else component "kaz18"
						("repair_kaz" args 18)
					else component "kaz19"
						("repair_kaz" args 19)
					else component "kaz20"
						("repair_kaz" args 20)
					else component "kaz21"
						("repair_kaz" args 21)
					else component "kaz22"
						("repair_kaz" args 22)
					else component "kaz23"
						("repair_kaz" args 23)
					else component "kaz24"
						("repair_kaz" args 24)
					else component "kaz25"
						("repair_kaz" args 25)
					else component "kaz26"
						("repair_kaz" args 26)
					else component "kaz27"
						("repair_kaz" args 27)
					else component "kaz28"
						("repair_kaz" args 28)
					else component "kaz29"
						("repair_kaz" args 29)
					}
				}
					{on pierce
						{if component "kaz_radar"
							{components "kaz_radar" break}
							{burn fx "smoke_dead_tank2" fake}
						else  component "kaz_radar1"
							{components "kaz_radar1" break}
							{burn fx "smoke_dead_tank2" fake}
						else  component "kaz_radar2"
							{components "kaz_radar2" break}
							{burn fx "smoke_dead_tank2" fake}
							else  component "kaz_radar3"
							{components "kaz_radar3" break}
							{burn fx "smoke_dead_tank2" fake}
							else  component "kaz_radar4"
							{components "kaz_radar4" break}
							{burn fx "smoke_dead_tank2" fake}
							else  component "kaz_radar5"
							{components "kaz_radar5" break}
							{burn fx "smoke_dead_tank2" fake}
							}
							{if ("kaz_destroyed" args 01)
							else ("kaz_destroyed" args 02)
							else ("kaz_destroyed" args 03)
							else ("kaz_destroyed" args 04)
							else ("kaz_destroyed" args 05)
							else ("kaz_destroyed" args 06)
							else ("kaz_destroyed" args 07)
							else ("kaz_destroyed" args 08)
							else ("kaz_destroyed" args 09)
							else ("kaz_destroyed" args 10)
							else ("kaz_destroyed" args 11)
							else ("kaz_destroyed" args 12)
							else ("kaz_destroyed" args 13)
							else ("kaz_destroyed" args 14)
							else ("kaz_destroyed" args 15)
							else ("kaz_destroyed" args 16)
							else ("kaz_destroyed" args 17)
							else ("kaz_destroyed" args 18)
							else ("kaz_destroyed" args 19)
							else ("kaz_destroyed" args 20)
							else ("kaz_destroyed" args 21)
							else ("kaz_destroyed" args 22)
							else ("kaz_destroyed" args 23)
							else ("kaz_destroyed" args 24)
							else ("kaz_destroyed" args 25)
							else ("kaz_destroyed" args 26)
							else ("kaz_destroyed" args 27)
							else ("kaz_destroyed" args 28)
							else ("kaz_destroyed" args 29)
							}
							}
							{on "kaz_shell_hit"

								{if stuff "low_speed"

									{if not stuff "proj_pointer"
										{call "kaz_work_on_rpg"}
									}
								}
								{if stuff "tandem"

									{if not stuff "proj_pointer"
										{call "kaz_work_on_rpg"}
									}
								}								
								{if stuff "proj_pointer"
									{tags add "kaz_work_on_ptur!!!ordos_debug222"}

									{call "kaz_work_on_ptur"}
								}
							}
							{on bullet_hit

							{call "kaz_shell_hit"}
							}
							{on "kaz_work_on_rpg"
								{tags add "kaz_work_on_rpg!!!ordos_debug111"}
								("kaz_shoot")
							}
							{on "kaz_work_on_ptur" {call "kaz_work"}}
							{on "kaz_work_on_shell"}
							{on "other_kaz_contact"
								{if volume "kaz_hitzone"
									{if tagged "kaz_working"
										("kaz_turn_off")
										{kill_delay "kaz_contact"}
										{delay 0.5 "kaz_contact"
											{tags add "kaz_contact_ordos_debug111"}
											{call "kaz_turn_on"}
										}
									}
								}
								{if tagged "kaz_working"
									{delay 9 "kaz_delay"
									{kill_delay "kaz_contact"}
									("kaz_turn_off")
									}
								}
							}
							{on contact sync

								{if effector "proj_dummy"

									{if volume "kaz_hitzone"
										("kaz_shoot")
										{tags add "kaz_shield_contact!!proj_dummy!_ordos_debug222"}
										{with_effector {call "destroyed_by_kaz"}}
									else	{with_effector {call "detonate"}}
									}
								else effector "cw_cumassist_spawner" {tags add "cw_cumassist_spawner!_ordos_debug111"}
								else effector "cw_cumulative_assistor" {tags add "cw_cumulative_assistor!_ordos_debug111"}
								else effector "cw_fgassist_spawner" 	{tags add "cw_fgassist_spawner!_ordos_debug111"}
								else effector "cw_fg_assistor" 	      {tags add "cw_fg_assistor!_ordos_debug111"}
								else effector "cw_apcrassist_spawner" 	{tags add "cw_apcrassist_spawner!_ordos_debug111"}
								else effector "cw_apcr_assistor" 	{tags add "cw_apcr_assistor!_ordos_debug111"}
								else
									{call "other_kaz_contact"}
								}
							}
							{on "kaz_reload"
							(define "kaz_reload_single"
							tagged "kaz_%0_empty"
							{delay 0.1
							{volumes "kaz_%0" disable touch}
							{volumes "kaz_hitzone_%0" disable touch}
							{tags remove "kaz_%0_empty"}
							{volumes "kaz_%0" enable contact bullet blast contact_ground visible select}
							{bone show "kaz_%0"}
							}
							)
							{if ("kaz_reload_single" args 01)
							else ("kaz_reload_single" args 02)
							else ("kaz_reload_single" args 03)
							else ("kaz_reload_single" args 04)
							else ("kaz_reload_single" args 05)
							else ("kaz_reload_single" args 06)
							else ("kaz_reload_single" args 07)
							else ("kaz_reload_single" args 08)
							else ("kaz_reload_single" args 09)
							else ("kaz_reload_single" args 10)
							else ("kaz_reload_single" args 11)
							else ("kaz_reload_single" args 12)
							else ("kaz_reload_single" args 13)
							else ("kaz_reload_single" args 14)
							else ("kaz_reload_single" args 15)
							else ("kaz_reload_single" args 16)
							else ("kaz_reload_single" args 17)
							else ("kaz_reload_single" args 18)
							else ("kaz_reload_single" args 19)
							else ("kaz_reload_single" args 20)
							else ("kaz_reload_single" args 21)
							else ("kaz_reload_single" args 22)
							else ("kaz_reload_single" args 23)
							else ("kaz_reload_single" args 24)
							else ("kaz_reload_single" args 25)
							else ("kaz_reload_single" args 26)
							}
							}
							}



{"kaz kaz_drozd"
	{on "kaz_enable" overload
		{tags add "kaz_enable_ordos_debug!!!"}
		(define "kaz_single_turn_on"
			{if work "kaz%0" {if not tagged "kaz_%0_empty" {volumes "kaz_hitzone_%0" enable bullet contact} }}
		)
		{if work "kaz_radar"
			{if work "kaz_radar1"
				("kaz_single_turn_on" args 01)
				("kaz_single_turn_on" args 02)
				("kaz_single_turn_on" args 03)
				("kaz_single_turn_on" args 04)
				("kaz_single_turn_on" args 05)
				("kaz_single_turn_on" args 06)						
			}
			{if work "kaz_radar2"
				("kaz_single_turn_on" args 07)
				("kaz_single_turn_on" args 08)
				("kaz_single_turn_on" args 09)
				("kaz_single_turn_on" args 10)
				("kaz_single_turn_on" args 11)
				("kaz_single_turn_on" args 12)	
			}
		}
	}
}
{"kaz kaz_arena"
	{on "kaz_enable" overload
		(define "kaz_single_turn_on"
			{if work "kaz%0"
				{if not tagged "kaz_%0_empty"
					{volumes "kaz_hitzone_%0" enable bullet contact}
					{volumes "kaz_hitzone_%0a" enable bullet contact}
				}
			}
		)
		{if work "kaz_radar"
			{if work "kaz_radar1"
				("kaz_single_turn_on" args 01)
				("kaz_single_turn_on" args 02)
				("kaz_single_turn_on" args 03)
				("kaz_single_turn_on" args 04)
				("kaz_single_turn_on" args 05)
				("kaz_single_turn_on" args 06)						
			}
			{if work "kaz_radar2"
				("kaz_single_turn_on" args 07)
				("kaz_single_turn_on" args 08)
				("kaz_single_turn_on" args 09)
				("kaz_single_turn_on" args 10)
				("kaz_single_turn_on" args 11)
				("kaz_single_turn_on" args 12)	
			}
		}
	}
		{on "kaz_work_on_shell" {call "kaz_work"}}
		{on "kaz_shell_hit" overload
			{if stuff "bullet"
			else stuff "hmgun"
			else stuff "autocannon"
			else stuff "cm"
			{if not stuff "proj_pointer"
				{call "kaz_work_on_rpg"}
			}
			else stuff "fg"
				{if not stuff "proj_pointer"
					{call "kaz_work_on_rpg"}
				}
			else stuff "apcr"
				{if not stuff "proj_pointer"
					{call "kaz_work_on_apcr"}
				}
			}
			{if stuff "proj_pointer" {call "kaz_work_on_ptur"}}
		}
		{on fire "gun2"
			{tags add "kaz_blocked"} ("kaz_turn_off")
			{delay 1 {tags remove "kaz_blocked"}}
		}
		{on fire "gun3"
			{tags add "kaz_blocked"}
			("kaz_turn_off")
			{delay 1 {tags remove "kaz_blocked"}}
		}
		(define "kaz_shot_apcr"
			volume "kaz_hitzone_%0a"
			{spawn "ex_air_sm" "kaz_%0"}
			{spawn "startsmoke_cali" "kaz_shot_a_%0" x}
			{spawn "ex_air_norm" "kaz_shot_b_%0" x}
			{spawn "tank_cannon_fire" "kaz_shot_b_%0" x}
			{bone hide "kaz_%0"}
			{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
			{volumes "kaz_hitzone_%0" disable bullet contact}
			{volumes "kaz_hitzone_%0a" disable bullet contact}
			{volumes "kaz_%0" enable touch}
			{volumes "kaz_hitzone_%0" enable touch}
			{tags add "kaz_%0_empty"}
		)
		(define "kaz_shoot_apcr"
			{if ("kaz_shot_apcr" args 01)
			else ("kaz_shot_apcr" args 02)
			else ("kaz_shot_apcr" args 03)
			else ("kaz_shot_apcr" args 04)
			else ("kaz_shot_apcr" args 05)
			else ("kaz_shot_apcr" args 06)
			else ("kaz_shot_apcr" args 07)
			else ("kaz_shot_apcr" args 08)
			else ("kaz_shot_apcr" args 09)
			else ("kaz_shot_apcr" args 10)
			else ("kaz_shot_apcr" args 11)
			else ("kaz_shot_apcr" args 12)			
			}
			{set "kaz_reloading" 1}
			("kaz_turn_off")
			{tags add "kaz_reloading"}
			{delay 0.2 {call "kaz_work"}
			{set "kaz_reloading" 0}
			{tags remove "kaz_reloading"}}
		)
			{on "kaz_work_on_apcr"	("kaz_shoot_apcr")		}
}


{"laser_spo"
	{on "shtora_warn"
		{if operatable
			{if not tagged "no_power"
				{if not work "electronics"
				else
					{tags add "laser_spo_warn!!ordos_debug"}
					{burn fx "spo_warn" time 5 fake}
					{play_sound "spo"}
					{if not user_control
						{delay 0.5
							{if rand 0.9
								{call "west81_smokegun"}
							}
						}
					}
				}
			}
		}
	}
}


{"has_autoloader"
		{on spawn
			{delay 15 {tags remove "autoloader_stuck"}{call "update_gun"}}		}
			{on "check_autoloader"
				{if not work "autoloader"
					{weapon_work "gun" 0}
					{damage_report "body" "component/autoloader_malfunction"}
					{tags add "autoloader_stuck"}
					{delay 15 {tags remove "autoloader_stuck"}{call "update_gun"}}
				else tagged "no_power"
					{weapon_work "gun" 0}
					{damage_report "body" "component/autoloader_malfunction2"}
					{tags add "autoloader_stuck"}
					{delay 15 {tags remove "autoloader_stuck"}{call "update_gun"}}
				else tagged "blinding_laser"
					{weapon_work "gun" 0}
					{damage_report "body" "component/aiming_via_gunbarrel"}
					{tags add "autoloader_stuck"}
					{delay 15 {tags remove "autoloader_stuck"}{call "update_gun"}}
			}
		}
}


{"ai_defence"
    {on spawn
	   {delay 0.5
		{chassis_work 0}
	   }

	   {delay 0.5

		{able select 0}

	   }

		{delay 15
			{spawn "tank_cover2" "root" x}
		}
		{if terrain_fx "ice"
			{tex_mod "winter"}
		else terrain_fx "snow"
			{tex_mod "winter"}
		else

		}
		{delay 25
			{call "standart_netting"}
		}
    }
	{on "engine_check" overload}
	{on "engine_idle" overload}
	{on "check_work_mover" overload}
}

{"mine_exploder"
	{on spawn
		{add_view	"tank_grit_big"			"on_ground_time_short"	"fxtracel5"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"fxtracel6"}

	}
}
(include "w81_post_penetration_fragment.inc")
;/*=========== General Props End ===========*/
