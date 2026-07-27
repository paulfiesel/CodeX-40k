
;/*=========== Explosive Grenade Begin ===========*/

{"grenade"
	{on spawn
		{call "add_grenade_sound"}
	}
	{on "onThrow"
		{call "grenade_fx"}
		{volumes "body" disable contact}
	}
	{on "onThrowActivate"
		{volumes "body" enable contact}
	}
	{on contact
		{if stuff_activated
			{if effector "human"
				{call "fall_down"}
		 	else effector "cannon"
				;{link_grenade_to_nearest_human teleport}
			}
		}
	}
	{on "activate"
		{call "hide_marker"}
	}
	{on "in_hole"
		{break_window_in_hole}
		{link_grenade_to_nearest_human}
	}
	{on ground_hit
		{if not terrain_fx "water"
			{link_sound "grenadehit" "hit/ground/grenade/"}
			{play_sound "grenadehit"}
		}
	}
	{on "fall_down"
		{volumes disable contact}
		{fall_down}
	}

	{on "show_marker1"
		{view start "marker1"}
		{view start "marker3"}
	}

	{on "show_marker2"
		{view pause "marker1"}
		{view start "marker2"}
		{view pause "marker3"}
		{view start "marker4"}
	}

	{on "hide_marker"
		{view stop "marker1"}
		{view stop "marker2"}
		{view stop "marker3"}
		{view stop "marker4"}
	}

	{on bullet_hit
		{stuff_detonate}
	}
	{on blast_hit
		{if min_energy 0.8
			{stuff_detonate}
		}
	}
}

{"grenade fg"
	{on "onThrow"
		{delay 1.5
			{call "show_marker1"}
		}
		{delay 3.5
			{call "show_marker2"}
		}
	}
}

{"grenade dynamite"
	{on "undermine"
		{delay 7
			{call "show_marker1"}
		}
		{delay 9
			{call "show_marker2"}
		}
	}
	{on "onThrow"
		{call "undermine"}
	}
}

{"grenade contact"
	{on ground_hit
		{if stuff_activated
			{if not name "water"
				{call "ground_detonate"}
			}
		}
	}
	{on "in_hole" overload}
	{on contact
		{if stuff_activated
			{if not tagged "mine_planted"
				{if not tagged "grounded"
					{call "contact_detonate"}
				}
			}
		}
	}
	{on "ground_detonate"
		{call "detonate"}
	}
	{on "contact_detonate"
		{call "detonate"}
	}
	{on "detonate"
		{volumes disable all}
		{stuff_detonate}
	}
	{on "fall_down" overload}
}

{"grenade contact mine"
	{on "onThrow" overload
		{volumes "body" disable contact}
		{volumes "body1" disable contact}
	}
	{on "onThrowActivate" overload
		{volumes "body1" enable contact}
	}

	{on "ground_detonate" overload
		{volumes "body" enable contact}
		{tags add "grounded"}
	}
}

{"grenade fire"
	{on spawn
		{add_view "molotov_lit" "lit" "wick"}
		{view hide "lit"}
		{play_sound "equip"}
	}
	{on "grenade_fx"
		{view show "lit"}
		{view start "lit"}
		{play_sound "loop" 1}
	}
	{on "ground_detonate"
		{fire radius 2.5 time 7 heating 1.5}
		{fire radius 1.5 time 20 heating 0.5}
	}
	{on "contact_detonate" overload
		{volumes disable bullet contact blast}
		{fire radius 1.25 time 2 heating 15 effector follow}
		{fire radius 1 time 20 heating 0.5 effector follow}
		{delay 0
			{call "detonate"}
		}
	}
	{on "onThrow"
		{play_sound "throw"}
	}
}

{"grenade fire big"
	{on "ground_detonate" overload
		{call "detonate"}
		{fire radius 2.5 time 7 heating 2.5}
		{fire radius 2.5 time 20 heating 0.5}
	}
	{on "contact_detonate" overload
		{volumes disable bullet contact blast}
		{fire radius 2.00 time 2 heating 25 effector follow}
		{fire radius 1 time 20 heating 0.5 effector follow}
		{delay 0.01
			{call "detonate"}
		}
	}
}

{"grenade magnetic"
	{on contact
		{if material "steel"
			{physics_work 0}
			{volumes disable contact}
			{call "position_checker"}
		}
	}
	{on "position_checker"
		{volumes "body" enable contact}
		{delay 0 {physics_work 1}}
		{impulse up -0.01 com}
		{delay 0.25 "position_checker"
			{call "position_checker"}
		}
	}
}

{"grenade timed"
	{on contact
		{if stuff_activated
			{if effector "vehicle"
				{volumes disable bullet contact blast} ;// keeps grenade from detonating multiple times (multiple blastwaves)
				{stuff_detonate}
			}
		}
	}
}

;/*=========== Explosive Grenade End ===========*/

;/*=========== Smoke Grenade Begin ===========*/

{"grenade smoke"
	{on spawn
		{call "add_smoke"}
	}
	{on "add_smoke"
		{add_view "smoke_cover-up_norm"		"smoke2" "root"}
		{add_view "smoke_cover-up_big"		"smoke3" "root"}
	}
	{on "onThrow"
		{volumes disable touch select}
	}
	{on ground_hit
		{if stuff_activated
			{if not name "water"
				{if not tagged "activated"
					{tags add "activated"}
					{delay 3
						{call "activate"}
					}
				}
			else
				{hide 1}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not tagged "activated"
				{tags add "activated"}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
	{on "activate"
		(define "spawn_volume"
			{spawn "smoke_volume_%0" offset %1 %2 0
				{delay %3 {hide 1}}
			}
		)
		{play_sound "smoke_loop" 1}
		{view start "smoke1"}
		{view start "smoke2"}
		{spawn "smoke_volume_cylinder" {delay 85 {hide 1}}}
		{delay 3
			{view start "smoke3"}
			("spawn_volume" args cylinder 110 0 84)
			("spawn_volume" args cylinder -110 0 84)
			("spawn_volume" args cylinder 0 110 84)
			("spawn_volume" args cylinder 0 -110 84)
			("spawn_volume" args cylinder 110 110 84)
			("spawn_volume" args cylinder -110 -110 84)
			("spawn_volume" args cylinder -110 110 84)
			("spawn_volume" args cylinder 110 -110 84)
			{delay 2
				{view stop "smoke1"}
				{view stop "smoke2"}
			}
		}
		{delay 5
			("spawn_volume" args cylinder_sm 220 0 82)
			("spawn_volume" args cylinder_sm -220 0 82)
			("spawn_volume" args cylinder_sm 0 220 82)
			("spawn_volume" args cylinder_sm 0 -220 82)
		}
		{delay 85
			{view stop "smoke3"}
			{stop_sound "smoke_loop"}
			{play_sound "smoke_end"}
		}
		{delay 90
			{hide 1}
		}
	}
	{on blast_hit overload}			;// keeps smoke grenades from deleting by blast damage after being thrown
	{on bullet_hit overload}		;// keeps smoke grenades from deleting by bullet hit after being thrown
}

{"grenade smoke detonate wp"
	{on "activate" overload
		{if not tagged "activate"
			{tags add "activate"}
			{fire radius 1.25 time 1 heating 10}
			{play_sound "explode"}
			{delay 1
				{play_sound "burn_down"}
				{play_sound "smoke_loop"}
			}
			{spawn "ex_wp_grenade"}
			{spawn "shell_smoke_wp_size2"}
			{delay 60
				{stop_sound "smoke_loop"}
				{play_sound "smoke_end"}
				{delete}
			}
		}
	}
}

{"grenade smoke detonate sm"
	{on "activate" overload
		{if not tagged "activate"
			{tags add "activate"}
			{start_sound "detonation/he_size1/bkg/" use_position}
			{spawn "mortar_smoke"}
			{spawn "shell_smoke"}
			{delay 1
				{delete}
			}
		}
	}
}

{"grenade smoke launcher"			;// Smoke grenades for vehicles
	{on "add_smoke" overload
		{add_view "spark_grenade"				"sparks" "fx_smoke"}
		{add_view "smoke_grenade_launcher_init"	"smoke0" "fx_smoke"}
		{add_view "smoke_grenade_launcher"		"smoke1" "fx_smoke"}
		{add_view "smoke_cover_norm"			"smoke2" "root"}
		{add_view "smoke_cover_big"				"smoke3" "root"}
	}
	{on "onThrow" overload
		{delay 0.2
			{if stuff_activated
				{if not tagged "activated"
					{tags add "activated"}
					{call "activate"}
				}
			}
		}
	}
	{on ground_hit
		{if tagged "activated"
			{if name "water"
				{hide 1}
				{kill_delay "smoke"}
			}
		}
	}
	(define "spawn_volume"
		{spawn "smoke_volume_%0" offset %1 %2 0
			{delay %3 {hide 1}}
		}
	)
	(define "smoke_time"
		{on "activate" overload
			{volumes disable touch select}
			{play_sound "smoke_pop"}
			{play_sound "smoke_loop" 1}
			{view start "smoke1"}
			{view start "sparks"}
			{delay 1.5 "smoke"
				{view stop "sparks"}
				{delay 1 "smoke"
					{view start "smoke2"}
					("spawn_volume" args cylinder 0 110 %0)		;4
					("spawn_volume" args cylinder 0 0 %0)		;5
					("spawn_volume" args cylinder 0 -110 %0)	;6
					("spawn_volume" args cylinder 110 110 %0)	;1
					("spawn_volume" args cylinder 110 0 %0)		;2
					("spawn_volume" args cylinder 110 -110 %0)	;3
					("spawn_volume" args cylinder -110 110 %0)	;7
					("spawn_volume" args cylinder -110 0 %0)	;8
					("spawn_volume" args cylinder -110 -110 %0)	;9
				}
			}
			{delay 6 "smoke"
				{view start "smoke3"}
				("spawn_volume" args cylinder_sm 220 0 %1)
				("spawn_volume" args cylinder_sm -220 0 %1)
				("spawn_volume" args cylinder_sm 0 220 %1)
				("spawn_volume" args cylinder_sm 0 -220 %1)
			}
			{delay %0 "smoke"
				{call "delete_grenade"}
			}
		}
	)
	("smoke_time" args 84 82)
	{on "delete_grenade"
		{delay 0 "smoke"
			{view stop "smoke3"}
		}
		{delay 5 "smoke"
			{view stop "smoke2"}
		}
		{delay 5 "smoke"
			{view stop "smoke1"}
			{view start "smoke0"}
			{stop_sound "smoke_loop"}
			{play_sound "smoke_end"}
		}
		{delay 10 "smoke"
			{view stop "smoke0"}
		}
		{delay 15 "smoke"
			{hide 1}
		}
	}
}

{"grenade smoke yellow"
	{on "add_smoke" overload
		{add_view "smoke_yellow_small"	"smoke1" "root"}
		{add_view "smoke_yellow_norm"	"smoke2" "root"}
		;{add_view "smoke_yellow_big"	"smoke3" "root"}
	}
}

{"grenade smoke paradrop_ammo"
	{on "activate" overload
		{volumes disable touch select}
		{play_sound "smoke_pop"}
		{play_sound "smoke_loop" 1}
		{view start "smoke1"}
		{delay 1.5 "smoke"
			{view start "smoke2"}
		}
		{delay 6 "smoke"
			;{view start "smoke3"}
		}
		{delay 9
			{start_sound "vehicle/airborne/cargo_plane_flyby.wav"}
		}
		{delay 17 "smoke"
			{call "spawn_ammo_crate"}
		}
		{delay 20 "smoke"
			;{view stop "smoke3"}
			{stop_sound "smoke_loop"}
			{play_sound "smoke_end"}
			{hide 1}
		}
	}
}

{"grenade smoke paradrop_ammo rus"
	{on "spawn_ammo_crate"
		{spawn "paradrop_ammo_rus" random_position 100 offset 0 0 1000}
	}
}
{"grenade smoke paradrop_ammo ger"
	{on "spawn_ammo_crate"
		{spawn "paradrop_ammo_ger" random_position 100 offset 0 0 1000}
	}
}
{"grenade smoke paradrop_ammo fin"
	{on "spawn_ammo_crate"
		{spawn "paradrop_ammo_fin" random_position 100 offset 0 0 1000}
	}
}

;/*=========== Smoke Grenade End ===========*/

;/*=========== Throw Sounds Begin ===========*/



{"m24"
}

{"m24_smoke"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
}
{"m24_smoke_supplies"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
}

{"m24_geballteladung"
}

{"molotov_cocktail"
	{on "add_grenade_sound" overload
		{link_sound "equip" "weapon/equip/grenade/molotov_equip"}
		{link_sound "throw" "weapon/shot/grenade/molotov_throw"}
		{link_sound "loop" "weapon/equip/grenade/molotov_loop"}
	}
}

{"molotov_cocktail_fin"
	{on "add_grenade_sound" overload
		{link_sound "equip" "weapon/equip/grenade/molotov_equip"}
		{link_sound "throw" "weapon/shot/grenade/molotov_throw"}
		{link_sound "loop" "weapon/equip/grenade/molotov_loop"}
	}
}

{"molotov_bundle_fin"
	{on "add_grenade_sound" overload
		{link_sound "equip" "weapon/equip/grenade/molotov_equip"}
		{link_sound "throw" "weapon/shot/grenade/molotov_throw"}
		{link_sound "loop" "weapon/equip/grenade/molotov_loop"}
	}
}

{"rdg1_smoke"
	{on "add_grenade_sound"
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
	("smoke_time" args 114 112)
}

{"rdg1_smoke_supplies"
	{on "add_grenade_sound"
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
}

{"51mm_eng_mortar_sm"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
}

{"nbk39"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
	("smoke_time" args 144 142)
}

{"no8_smoke"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
}

{"nbks"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
	("smoke_time" args 60 58)
}

{"svkkr_pm"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
	("smoke_time" args 60 58)
}

{"m42_wp"
	{on "add_grenade_sound"
		{link_sound "explode" 	"detonation/grenade_wp/explode/"}
		{link_sound "burn_down" "detonation/grenade_wp/burn_down/"}
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop" "detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
}

{"m43_smoke"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
}

{"pwm_l"
	{on bullet_hit overload} ;disables detonation except when thrown. Prevents cumulative crash
	{on blast_hit overload}	;disables detonation except when thrown. Prevents cumulative crash
}

{"rpg40"
	{on bullet_hit overload} ;disables detonation except when thrown. Prevents cumulative crash
	{on blast_hit overload}	;disables detonation except when thrown. Prevents cumulative crash
}

{"rpg43"
	{on bullet_hit overload} ;disables detonation except when thrown. Prevents cumulative crash
	{on blast_hit overload} ;disables detonation except when thrown. Prevents cumulative crash
}

{"anm8_smoke"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
}

{"m15_wp"
	{on "add_grenade_sound"
		{link_sound "explode" 	"detonation/grenade_wp/explode/"}
		{link_sound "burn_down" "detonation/grenade_wp/burn_down/"}
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop" "detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
}

{"no74"
	{on "grenade_fx"
		{tear "piece_tiny_steel" bone "casing1" {impulse forward 1.01 0.25 dir 1 1 rnd_dir 1}}
		{tear "piece_tiny_steel" bone "casing2" {impulse forward -1.01 0.25  dir -1 1 rnd_dir -1}}
	}
}

{"no82"
}

{"no77_wp"
	{on "add_grenade_sound"
		{link_sound "explode" 	"detonation/grenade_wp/explode/"}
		{link_sound "burn_down" "detonation/grenade_wp/burn_down/"}
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop" "detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}

	{on "detonate" overload
		{call "activate"}
	}
}

;=========== Throw Sounds End ===========*/

;//ordos+++++++++++++++++++++++++++

(define "cluster_spreader_1gen"
	{on spawn
		{volumes "body" disable contact blast}
		{impulse up 5 com}
		{delay 0.1 {spawn %0}}
		{delay 0.2 {spawn %0}}
		{delay 0.3 {spawn %0}}
		{delay 0.4 {spawn %0}}
		{delay 0.5 {spawn %0}}
		{delay 0.6 {spawn %0}}
		{delay 0.7 {spawn %0}}
		{delay 0.8 {spawn %0}}
		{delay 0.9 {spawn %0}
		{delete}}
		{delay 1 {delete}	}
	}
)

(define "cluster_spreader_2gen_big"
	{on spawn
		{volumes "body" disable contact blast}
		{impulse up 5 com}
		{delay 0.1 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.2 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.3 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.4 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.5 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.6 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.7 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.8 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.9 {spawn %0 {impulse up 2 rnd_dir 10}}
		{delete}}
		{delay 1 {delete}	}
	}
)

(define "cluster_spreader_2gen_small"
	{on spawn
		{volumes "body" disable contact blast}
		{impulse up 5 com}
		{delay 0.1 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.2 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.3 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.4 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.5 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.6 {spawn %0 {impulse up 3 rnd_dir 10}}
		{delete}}
		{delay 0.7 {delete}	}
	}
)

(define "cluster_shell_1up"
	{spawn %subm  no_position no_normal {impulse up 15 0.5 dir %forward rnd_dir %spread com}}
)

(define "cluster_shell_2up"
	{spawn %subm  no_position no_normal {impulse up 15 0.5 dir %forward rnd_dir %spread com}}
	{spawn %subm  no_position no_normal {impulse up 22 0.5 dir (+ %forward 15) rnd_dir %spread com}}
)

(define "cluster_shell_5"

		{spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 0.5 %spread)}}
		{spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 1.0 %spread)}}
		{spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 1.0 %spread)}}
		{spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 1.5 %spread)}}
		{spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 2 %spread)}}

)

(define "cluster_shell_10"

		("cluster_shell_5" subm(%subm) spread(%spread))
		("cluster_shell_5" subm(%subm) spread(%spread))

)

(define "cluster_shell_20"
	("cluster_shell_10" subm(%subm) spread(%spread))
	("cluster_shell_10" subm(%subm) spread(%spread))
)

(define "cluster_shell_30"
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_10" subm(%subm) spread(%spread))
)

(define "cluster_shell_40"
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_20" subm(%subm) spread(%spread))
)

(define "cluster_shell_50"
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_30" subm(%subm) spread(%spread))
)

(define "cluster_shell_60"
	("cluster_shell_30" subm(%subm) spread(%spread))
	("cluster_shell_30" subm(%subm) spread(%spread))
)

(define "cluster_shell_70"
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_50" subm(%subm) spread(%spread))
)

(define "cluster_shell_100"
	("cluster_shell_50" subm(%subm) spread(%spread))
	("cluster_shell_50" subm(%subm) spread(%spread))
)



{"cw_shell_cl_detector"
	{on spawn {delay 0.3 {delete}}
		{if not altitude 15
			{volumes "body" enable bullet}
		}
	}

	{on bullet_hit
		{if stuff "shell rus152_cluster"
			{spawn "ex_air_big"}
			("cluster_shell_40" subm("cluster_subm_152") spread(10))
		else stuff "bullet155_USA cl"
			{spawn "ex_air_big"}
			("cluster_shell_60" subm("m42_submunition") spread(10))
		else stuff "bullet155_cn cl"
			{spawn "ex_air_big"}
			("cluster_shell_60" subm("m42_submunition") spread(10))
		else stuff "rbk_cn cl"
			{spawn "ex_air_big"}
			("cluster_shell_50" subm("250-3_submunition") spread(10))
		else stuff "cluster"
			{spawn "cluster_expl" no_normal no_position}
		}
	}
}


{"cw_shell_cl_detector_lowalt"
	{on spawn {delay 0.3 {delete}}
		{if not altitude 10
			{volumes "body" enable bullet}
		}
	}

	{on bullet_hit
		{if stuff "rbk_cn tb"
		else stuff "cluster"
			{spawn "cluster_expl" no_normal no_position}
		}
	}
}

{"cw_shell_spbe_detector"
	{on spawn {delay 0.2 {delete}}
		{if not altitude 20
			{volumes "body" enable bullet}
		}
	}

	{on bullet_hit
		{if stuff "bullet155_USA spbe"
			{spawn "ex_air_big"}
			("cluster_shell_2up" subm("smart155") forward(30) spread(2 1))
		else stuff "cluster"
			{spawn "cluster_expl" no_normal no_position}
		}
	}
}

;;{"cw_rocket_cl_detector"
;	{on spawn
;		{tags add "cw_rocket_cl_detector spawned!!!!!!!!"}
;		{spawn "west81_rocket_cl_detector" "basis" x}
;		{delay 0.2 {delete}}
;		;{if not altitude 25
;		;	{spawn "west81_rocket_cl_detector" "basis" x}
;		;
;		;}
;	}
;
;}




{"cw_rocket_cl_detector"
	{on spawn
		;{tags add "ordos_rocket_cl_detector spawned!!!!!!!!"}

		{delay 0.2 {delete}}
		;{delay 1 {delete}}
		{if not altitude 25
			;{tags add "ordos_debug very low altitude!!!!!!!!"}
			;{volumes "body" enable bullet}
			{volumes "body" enable contact}
			;{spawn "ex_air_big"}
			;("cluster_shell_100" subm("m77_mlrs_submunition") spread(10))
			;{stuff_detonate}
		}
	}

	{ on "submunition_spawner"

		{spawn "ex_air_big"}
		("cluster_shell_100" subm("m77_mlrs_submunition") spread(10))



	}

	{on contact
		{tags add "ordos_debug volume contact!!!!!!!!"}

		;{call "submunition_spawner"}
		;{if volume "rocket_body"
			;{spawn "ex_air_big"}
			;("cluster_shell_100" subm("m77_mlrs_submunition") spread(10))
		;	{tags add "rocket_body volume contact!!!!!!!!"}
	}

	;}

	;{on overlap begin
	;	;{tags add "ordos_debug volume overlap!!!!!!!!"}
	;	{if stuff "m270 cl"
	;		{tags add "ordos_debug volume overlap m270 cl111!!!!!!!!"}
	;	else stuff "ammo m270 cl"
	;		{tags add "ordos_debug volume overlap m270 cl22222!!!!!!!!"}
;
	;	else stuff "mlrs_cl_ammo"
	;		{tags add "ordos_debug volume overlap m270 cl333333!!!!!!!!"}
	;	}
	;}

	;{on overlap end	     }


	{on bullet_hit
		{if stuff "m270 cl"
			{tags add "ordos_debug_m270cl!!!!!!!"}
			{spawn "ex_air_big"}
			("cluster_shell_100" subm("m77_mlrs_submunition") spread(10))
		else stuff "ATACMS cl"
			{spawn "ex_air_big"}
			("cluster_shell_100" subm("m74_mlrs_submunition") spread(20))
		else stuff "lars2 mine"
			{spawn "ex_air_big"}
			("cluster_shell_5" subm("at2_mine_in_fly") spread(12))
		else stuff "grad mine"
			{spawn "ex_air_big"}
			("cluster_shell_5" subm("pom_2") spread(12))
		else stuff "grad spbe"
			{spawn "ex_air_big"}
			("cluster_shell_2up" subm("spbe_9n282") forward(40) spread(2 1))
		else stuff "grad clcn"
			{spawn "ex_air_big"}
			("cluster_shell_30" subm("type90_submunition") spread(10))
		else stuff "grad cl"
			{spawn "ex_air_big"}
			("cluster_shell_30" subm("9m218_submunition") spread(10))
		else stuff "cluster"
			{spawn "cluster_expl" no_normal no_position}
		}
	}
}




{"mlrs_cl_ammo_test"
	{on spawn
		{tags add "rocket_phase1"}
		{tags add "moving"}
		{impulse up 0 dir 0.1 forward 1000 com}
		{gravity 1.0}
		{constrain_velocity 100}
		{call "move"}
		{call "manage_effects"}
		{delay 3
			{if altitude 10
				{impulse fz 55 10}

			else
				{gravity 50}
				{impulse fz 90}
			}
		}
		{delay 3
			{call "check_altitude"}
		}
		{delay 10
			{tags remove "moving"}
			{gravity 50}
			{impulse fz 80.0}
		}
	}

	{on "check_altitude"

		{if not altitude 15
			{if tagged "rocket_phase1"
				{tags add "rocket_phase2"}
				{tags remove "rocket_phase1"}
			else tagged "rocket_phase2"
				{if not tagged "rocket_phase3"
					{tags add "rocket_phase3"}
					;{spawn "ex_air_big"}
					("cluster_shell_100" subm("m77_mlrs_submunition") spread(10))
					{delay 0.1
						{call "stuff_detonate"}
					}

				}
			}
		}
				{delay 0.1
					{call "check_altitude"}
				}


	}

	{on "manage_effects"
		{delay 0

			{add_view	"rocket_smoke_st"			"proj_jet"			"tail"}
			{view show "proj_jet"}
			{view start "proj_jet"}

		}
		{delay 5

			{view pause "proj_jet"}
			{view stop "proj_jet"}
			{view hide "proj_jet"}

		}
	}

	{on "move"
		{if tagged "moving"
			{spawn "proj_cont" "cont_vol" x {impulse up 0 dir 0.0 forward 1000 com}}
			{constrain_velocity 100}
			{impulse fz 0.3}
			{delay 0.033 {call "move"}}
		}
	}


	{on contact
		{if effector "proj_cont"
			{if volume "cont_vol"
				{impulse up 0 dir 1000.0 forward 0 com}
			}
		else effector "proj_probe_extra_big"
		else effector "proj_probe"
		else
			{call "stuff_detonate"}
		}
	}

	{on grounded on
		{call "stuff_detonate"}
	}
	{on ground_hit
		{call "stuff_detonate"}
	}
	{on blast overload}
	{on blast_hit overload}
	{on "stuff_detonate"
		{if not tagged "stuff_detonate"
			{tags add "stuff_detonate"}
				{volumes disable blast}
				{stuff_detonate}
			}
	}
}

				{"atacms_cl_ammo_test"
					{on spawn overload
						
						{tags add "rocket_phase1"}
						;{tags add "test"}
						{tags add "moving"}
						{impulse up 0 dir 0.1 forward 1000 com}
						{constrain_velocity 100}
						{call "manage_effects"}
						{call "move"}
						{call "up"}
						{delay 1
							{if altitude 10
								{impulse fz 75 10}
							else
								{gravity 50}
								{impulse fz 105}
							}
						}
						{delay 5
							{call "check_altitude"}
						}
						{delay 10
							{tags remove "moving"}
							{ik_enable "gun_rot" 0}
							{ik_enable "gun" 0}
							{gravity 50}
							{impulse fz 80.0}
						}
					}
					{on "manage_effects" overload
						{delay 0

							{add_view	"rocket_smoke_bm13"			"proj_jet"			"tail"}
							{view show "proj_jet"}
							{view start "proj_jet"}

						}
						{delay 5

							{view pause "proj_jet"}
							{view stop "proj_jet"}
							{view hide "proj_jet"}

						}
					}
					{on "check_altitude"
						{if not altitude 15
							{if tagged "rocket_phase1"
								{tags add "rocket_phase2"}
								{tags remove "rocket_phase1"}
							else tagged "rocket_phase2"
								{if not tagged "rocket_phase3"
									{tags add "rocket_phase3"}
									{if tagged "fg_cluster_shell"
										("cluster_shell_100" subm("m77_mlrs_submunition") spread(10))
									}
									{delay 0.2
										{call "stuff_detonate"}
									}

								}
							}
						}
						{delay 0.1
							{call "check_altitude"}
						}
					}
					{on ik begin "gun_rot"
						{if tagged "moving"
							{tags add "stop"}
						}
					}
					{on ik end "gun_rot"
						{tags remove "stop"}
					}
					{on fire "gun"
						{impulse up 0 dir 0.1 forward 0 com}
						{call "move"}
						{call "up"}
					}

					{on "move" overload
						{if tagged "moving"
							{spawn "proj_cont" "cont_vol" x {impulse up 0 dir 0.0 forward 1000 com}}
							{constrain_velocity 100}
							{impulse fz 0.3}
							{delay 0.033 {call "move"}}
						}
					}
					{on "up" overload}

					{on contact overload
						{if effector "proj_cont"
							{if volume "cont_vol"
								{impulse up 0 dir 1000.0 forward 0 com}
							}
						else effector "proj_probe_extra_big"
						else effector "proj_probe"
						else
							{call "stuff_detonate"}
						}
					}
					{on grounded on
						{call "stuff_detonate"}
					}
					{on ground_hit
						{call "stuff_detonate"}
					}
					{on blast overload}
					{on blast_hit overload}
					{on "stuff_detonate"
						{if not tagged "stuff_detonate"
							{tags add "stuff_detonate"}
							{volumes disable blast}
							{stuff_detonate}
						}
					}
				}


{"shell_cl_ammo_test"
	{on spawn
		{add_view	"shell_tracer_100-152_he"			"shell_tail"			"tail"}
		{tags add "shell_phase1"}
		{tags add "moving"}
		{impulse up 0 dir 0.1 forward 1000 com}
		{constrain_velocity 100}
		{view show "shell_tail"}
		{view start "shell_tail"}
		{call "move"}
		{delay 1
			{if altitude 10
				{impulse fz 55 10}

			else
				{gravity 50}
				{impulse fz 90}
				{constrain_velocity 50}
			}
		}
		{delay 2
			{call "check_altitude"}
		}
		{delay 7
			{tags remove "moving"}
			{gravity 50}
			{impulse fz 80.0}
			{constrain_velocity 50}
		}
	}

	{on "check_altitude"

		{if not altitude 10
			{if tagged "shell_phase1"
				{tags add "shell_phase2"}
				{tags remove "shell_phase1"}
			else tagged "shell_phase2"
				{if not tagged "shell_phase3"
					{tags add "shell_phase3"}
					{if tagged "rus_cluster_shell"
						("cluster_shell_40" subm("cluster_subm_152") spread(10))
					else tagged "usa_cluster_shell"
						("cluster_shell_60" subm("m42_submunition") spread(10))
					}
					{delay 0.1
						{call "stuff_detonate"}
					}

				}
			}
		}
				{delay 0.1
					{call "check_altitude"}
				}


	}

	{on "move"
		{if tagged "moving"
			{spawn "proj_cont" "cont_vol" x {impulse up 0 dir 0.0 forward 1000 com}}
			{constrain_velocity 100}
			{if tagged "rus_cluster_shell"
				{impulse fz 1.8}
			else tagged "usa_cluster_shell"
				{impulse fz 1.7}
			}

			{delay 0.033 {call "move"}}
		}
	}


	{on contact
		{if effector "proj_cont"
			{if volume "cont_vol"
				{impulse up 0 dir 1000.0 forward 0 com}
			}
		else effector "proj_probe_extra_big"
		else effector "proj_probe"
		else
			{call "stuff_detonate"}
		}
	}

	{on grounded on
		{call "stuff_detonate"}
	}
	{on ground_hit
		{call "stuff_detonate"}
	}
	{on blast overload}
	{on blast_hit overload}
	{on "stuff_detonate"
		{if not tagged "stuff_detonate"
			{tags add "stuff_detonate"}
				{volumes disable blast}
				{stuff_detonate}
			}
	}
}
;//ordos---------------------------
;//ordos+++++++++++++++++++++++++++++


{"smoke_probe"
	{on spawn
		{delay 0.5 {delete}}
	}

	{on bullet_hit overload
		{impulse up 0.01 com}
		{gravity 0.01}
		{volumes "body" disable all}
		{if
			(define "check_dir"
				tagged "%dir"
					{if stuff "tanksmoke_airburst"
						{spawn "smoke_shell_fly" "smoke%dir" x
							{impulse up 50 2 forward 100 rnd_dir 2.5 com}
							{gravity 0.9}
							{delay 0.2
								;{spawn "ex_smokeshell"}
								{spawn "smoke_wp_size4"}
								{spawn "smoke_volume"}
								{delete}
							}
						}
					else stuff "tanksmoke"
						{spawn "smoke_shell_fly" "smoke%dir" x
							{impulse up 0.1 forward 30 rnd_dir 2.5}
							{add_view	"wp_smoke"	"grenade_tail"	"root"}
							{view start "grenade_tail"}
							{view show		"grenade_tail"}
						}
					}
			)

					("check_dir" dir(0_0))
				else ("check_dir" dir(0_m10))
				else ("check_dir" dir(0_m20))
				else ("check_dir" dir(0_m30))
				else ("check_dir" dir(0_m40))
				else ("check_dir" dir(0_10))
				else ("check_dir" dir(0_20))
				else ("check_dir" dir(0_30))
				else ("check_dir" dir(0_40))
				else ("check_dir" dir(15_0))
				else ("check_dir" dir(15_m10))
				else ("check_dir" dir(15_m20))
				else ("check_dir" dir(15_m30))
				else ("check_dir" dir(15_m40))
				else ("check_dir" dir(15_10))
				else ("check_dir" dir(15_20))
				else ("check_dir" dir(15_30))
				else ("check_dir" dir(15_40))
				else ("check_dir" dir(30_0))
				else ("check_dir" dir(30_m10))
				else ("check_dir" dir(30_m20))
				else ("check_dir" dir(30_m30))
				else ("check_dir" dir(30_m40))
				else ("check_dir" dir(30_10))
				else ("check_dir" dir(30_20))
				else ("check_dir" dir(30_30))
				else ("check_dir" dir(30_40))
				else
		}
		{delete}
	}
}

{"cluster_mine"
	{on spawn
		{volumes "body" disable contact blast}
		{delay 0.1
			{set "activated" 1}
			{volumes "body" enable contact}
		}
		{delay 20 3 {call "deploy"}}
	}
		{on ground_hit
			{if "activated"
				{if not effector "cluster_shell"
					{delay 7 2 {call "deploy"}}
				}
				else 	{impulse up 0.2}}
			}
			{on "deploy" {delay 0.1 {delete}}}
}

{"cluster_mine_ground"
	{on spawn
		{player -1}
		{tags add "mine_planted"}
		{volumes "detector1" disable all}
		{volumes "detector2" disable all}
		{volumes "detector3" disable all}
		{volumes "detector4" disable all}
		{bone hide "detector1"}
		{bone hide "detector2"}
		{bone hide "detector3"}
		{bone hide "detector4"}
		{delay 3
			{spawn "ex_bul_zenit"}
			{volumes "detector1" enable all}
			{volumes "detector2" enable all}
			{volumes "detector3" enable all}
			{volumes "detector4" enable all}
			{bone show "detector1"}
			{bone show "detector2"}
			{bone show "detector3"}
			{bone show "detector4"}
		}
	}

	{on "detonate" {stuff_detonate}}
	{on contact {call "detonate"}}
	{on blast_hit
		{if min_energy 3
			{if not stuff "mine"
				{call "detonate"}
			}
		}
	}
}

{"pom_2"
	{on "deploy"
		{spawn "ex_bul_zenit"}
			{spawn "pom_2_installed"}
			{delete}
		}
}

{"blu-97_submunition"
	{on spawn overload	
		{volumes "body" disable contact blast}	
		{impulse up 2 rnd_dir 10}
		{delay 0.1	
			{set "activated" 1}
			{volumes "body" enable contact}	
		}
	}
	{on ground_hit overload	   
		{if not effector "cluster_shell"
			{if terrain_fx "sand"	
				{if rand 0.6 {stuff_detonate}}	
			else terrain_fx "snow"		
				{if rand 0.6 {stuff_detonate}}	
			else terrain_fx "water"		
				{if rand 0.6 {stuff_detonate}}	
			else terrain_fx "grass"		
				{if rand 0.8 {stuff_detonate}}	
			else	
				{stuff_detonate}
			}
		}	
	}
}

{"submunition"
    {on spawn
		{volumes "body" disable contact blast}
		{delay 0.1
			{set "activated" 1}
			{volumes "body" enable contact}
		}
		{delay 7 {stuff_detonate}}
	}
	{on ground_hit
		{stuff_detonate}
	}
	{on contact
		{if effector "cluster_shell"
		else  effector "submunition"
		else	{stuff_detonate}}
	}
}

;//ordos---------------------------