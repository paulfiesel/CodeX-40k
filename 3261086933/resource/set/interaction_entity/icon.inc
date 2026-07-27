(include "uav.inc")

(define "at_weapon_icon"
	{on spawn
		{if difficulty "heroic"
			{call "show"}
			{delay 1
				{view start "wp_view"}
			}
		else difficulty "normal"
			{call "show"}
			{delay 1
				{view start "wp_view"}
			}
		}
	}
	{on "link"					;// linked to vehicle
		{view hide "wp_view"}
	}
	{on "show" overload
		{add_view "%icon" "wp_view" "root" not_manual not_scenario}
	}
)


{"at4cs_v1"
	("at_weapon_icon" icon(icon_at4-cs))
}

{"carl_gustaf_v1"
	("at_weapon_icon" icon(icon_carl_gustaf_m3))
}

{"m3_maaws"
	("at_weapon_icon" icon(icon_carl_gustaf_m3))
}

{"m72_law"
	("at_weapon_icon" icon(icon_m72law))
}

{"m72a7law"
	("at_weapon_icon" icon(icon_m72law))
}

{"m136"
	("at_weapon_icon" icon(icon_at4-cs))
}



{"javelin"
	("at_weapon_icon" icon(icon_fgm_148))
}

{"nlaw"
	("at_weapon_icon" icon(icon_at4-cs))
}

{"panzerfaust3"
	("at_weapon_icon" icon(icon_panzerfaust3))
}

{"rgw90_as_he"
	("at_weapon_icon" icon(icon_at4-cs))
}

{"rgw90_as"
	("at_weapon_icon" icon(icon_at4-cs))
}

{"SMAW"
	("at_weapon_icon" icon(icon_carl_gustaf_m3))
}



{"Shmel"
	("at_weapon_icon" icon(icon_rpoa))
}
{"RShG_2"
	("at_weapon_icon" icon(icon_rpg_26))
}
{"rpg26"
	("at_weapon_icon" icon(icon_rpg_26))
}
{"rpg27"
	("at_weapon_icon" icon(icon_rpg_26))
}
{"rpg28"
	("at_weapon_icon" icon(icon_rpg_26))
}
{"rpg29"
	("at_weapon_icon" icon(icon_rpg_29))
}
{"rpg29"
	("at_weapon_icon" icon(icon_rpg_29))
}
{"rpg22"
	("at_weapon_icon" icon(icon_rpg_22))
}
{"rpg22"
	("at_weapon_icon" icon(icon_rpg_22))
}
{"rpg-7v"
	("at_weapon_icon" icon(icon_rpg-7d))
}
{"rpg-7d"
	("at_weapon_icon" icon(icon_rpg-7d))
}
{"rpg7 weapon"
	("at_weapon_icon" icon(icon_rpg-7d))
}
{"rpg7"
	("at_weapon_icon" icon(icon_rpg-7d))
}
{"rpg-7v2"
	("at_weapon_icon" icon(icon_rpg-7d))
}
{"rpg-7vs"
	("at_weapon_icon" icon(icon_rpg-7d))
}
{"rpg-7vshe"
	("at_weapon_icon" icon(icon_rpg-7d))
}

{"pf98a"
	("at_weapon_icon" icon(icon_carl_gustaf_m3))
}

{"pf89b"
	("at_weapon_icon" icon(icon_at4-cs))
}

{"wpf89_1"
	("at_weapon_icon" icon(icon_at4-cs))
}

{"dza11"
	("at_weapon_icon" icon(icon_at4-cs))
}

{"hj12e"
	("at_weapon_icon" icon(icon_fgm_148))
}


{"k98_antitank"
	("at_weapon_icon" icon(icon_k98at))
}
{"boys_mk1"
	("at_weapon_icon" icon(icon_boys))
}
{"panzershreck_54"
	("at_weapon_icon" icon(icon_panzerschreck))
}
{"panzershreck_43"
	("at_weapon_icon" icon(icon_panzerschreck))
}
{"k98_grenade_launcher"
	("at_weapon_icon" icon(icon_k98at))
}
{"mosin_grenade_launcher"
	("at_weapon_icon" icon(icon_k98at))
}
{"mosin_antitank"
	("at_weapon_icon" icon(icon_k98at))
}
{"ptrd"
	("at_weapon_icon" icon(icon_ptrd))
}
{"ptrs"
	("at_weapon_icon" icon(icon_ptrs))
}
{"pzb_39"
	("at_weapon_icon" icon(icon_pzb_39))
}
{"faustpatrone_30"
	("at_weapon_icon" icon(icon_panzerfaust))
	{on "fire"
		{delay 1
			{view stop "wp_view"}
		}
	}
}
{"panzerfaust_100"
	("at_weapon_icon" icon(icon_panzerfaust))
	{on "fire"
		{delay 1
			{view stop "wp_view"}
		}
	}
}
{"panzerfaust_30"
	("at_weapon_icon" icon(icon_panzerfaust))
	{on "fire"
		{delay 1
			{view stop "wp_view"}
		}
	}
}
{"panzerfaust_60"
	("at_weapon_icon" icon(icon_panzerfaust))
	{on "fire"
		{delay 1
			{view stop "wp_view"}
		}
	}
}
{"bazooka_m1"
	("at_weapon_icon" icon(icon_m1bazooka))
}
{"bazooka_m1a1"
	("at_weapon_icon" icon(icon_m1bazooka))
}
{"bazooka_m9"
	("at_weapon_icon" icon(icon_m1bazooka))
}
{"bazooka_m9a1"
	("at_weapon_icon" icon(icon_m1bazooka))
}
{"recoilless_m18"
	("at_weapon_icon" icon(icon_m1bazooka))
}
{"garand_grenade_launcher"
	("at_weapon_icon" icon(icon_k98at))
}
{"m1_carbine_grenade_launcher"
	("at_weapon_icon" icon(icon_k98at))
}
{"m1a1_carbine_grenade_launcher"
	("at_weapon_icon" icon(icon_k98at))
}
{"m1903_grenade_launcher"
	("at_weapon_icon" icon(icon_k98at))
}

{"gunbag_9m113"
	("at_weapon_icon" icon(icon_9m113))
}

{"gunbag_sov_9m113"
	("at_weapon_icon" icon(icon_9m113))
}

{"gunbag_nsvt"
	("at_weapon_icon" icon(icon_nsv))
}

{"gunbag_nsvt_ukr"
	("at_weapon_icon" icon(icon_nsv))
}

{"gunbag_stgn_ukr"
	("at_weapon_icon" icon(icon_stgn))
}

{"gunbag_metis"
	("at_weapon_icon" icon(icon_metis))
}

{"gunbag_metis_rus"
	("at_weapon_icon" icon(icon_metis))
}

{"gunbag_metis_rus_tbg"
	("at_weapon_icon" icon(icon_metis))
}

{"backpack_eagleaiii"
	("at_weapon_icon" icon(icon_ammobag))
}

{"rus_fsb_abody_12"
	("at_weapon_icon" icon(icon_ammobag))
}


{"gunbag_kord"
	("at_weapon_icon" icon(icon_kord))
}

{"gunbag_2b11"
	("at_weapon_icon" icon(icon_2b11))
}

{"gunbag_pbp172"
	("at_weapon_icon" icon(icon_2b11))
}

{"gunbag_2b11_ukr"
	("at_weapon_icon" icon(icon_2b11))
}

{"gunbag_2b14"
	("at_weapon_icon" icon(icon_2b14))
}

{"gunbag_qjz89"
	("at_weapon_icon" icon(icon_qjz))
}

{"gunbag_qjz171"
	("at_weapon_icon" icon(icon_qjz))
}

{"gunbag_hj8"
	("at_weapon_icon" icon(icon_hj8))
}

{"gunbag_2b14_ukr"
	("at_weapon_icon" icon(icon_2b14))
}

{"gunbag_9m133"
	("at_weapon_icon" icon(icon_9m133))
}

{"gunbag_ags30"
	("at_weapon_icon" icon(icon_ags30))
}

{"gunbag_mk19_ukr"
	("at_weapon_icon" icon(icon_mk19))
}


{"gunbag_usa_bgm71_tow"
	("at_weapon_icon" icon(icon_tow))
}

{"gunbag_m120"
	("at_weapon_icon" icon(icon_m120))
}

{"gunbag_m224"
	("at_weapon_icon" icon(icon_m224))
}

{"gunbag_m252"
	("at_weapon_icon" icon(icon_m252))
}

{"gunbag_milan"
	("at_weapon_icon" icon(icon_milan))
}

{"gunbag_m2"
	("at_weapon_icon" icon(icon_m2))
}

{"gunbag_sov_spg9"
	("at_weapon_icon" icon(icon_spg9))
}

{"gunbag_spg9_ukr"
	("at_weapon_icon" icon(icon_spg9))
}


{"gunbag_spg9"
	("at_weapon_icon" icon(icon_spg9))
}