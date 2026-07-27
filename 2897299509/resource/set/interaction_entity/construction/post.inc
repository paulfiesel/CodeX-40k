{"post"
	{inflammation_time 4}
	{on break_armor
		{if volume "body"
			{if name "blast"
				{call "break"}
			}
		}
	}
	{on contact
		{if can_crush
			{call "break"}
			{call "contact_fx"}
		}
	}
	{on bullet_hit
		{if not stuff "proj_pointer"
			{if volume "lamp1"
				{call "light_break"}
			}
			{if stuff "shell fg"
				{bullet_detonate}
			}
			{if stuff "auto size1 zenite"
				; do nothing
			else stuff "shell"
				{call "break"}
			}
		else stuff "ic hmgun"
			{fire radius 0.5 time 0.3 heating 3}
		else stuff "ic autocannon_small"
			{fire radius 0.5 time 0.3 heating 6}
		else stuff "usa_laser ammo"
			{spawn "proj_point_usa_laser_des" offset 0 0 5
			{tags add "laser_target"}
			{tags add "cwps_ground_attack"}

			(mod not "mp"{player 16})
			{delay 1 {delete}}}
		else stuff "rus_laser ammo"
			{spawn "proj_point_rus_laser_des" offset 0 0 5
			{tags add "laser_target"}
			{tags add "cwps_ground_attack"}

			(mod not "mp"{player 16})
			{delay 1 {delete}}}
		}
	}
	{on "break"
		{volumes "body" disable contact blast}
		{volumes "lamp" disable contact blast}
		{call "light_break"}
		{if not fallen
			{pillar_fall}
		}
		{delay 0.5
			{call "fall_sound"}
		}
	}
	{on "light_break"} ; handled in extender
	{on "fall_sound"
		{if not tagged "obliterate"
			{start_sound "crush/medium/tree"}
		}
	}
}

{"post wood"
	{on spawn
		{link_sound "burn_medium" "fire/loops/medium"}
	}
	{on "burn_volume"
		{if not burned
			{if volume "body"
				{burn volume fx "smoke_dead_tree1" time 20 2 even_law}
				{tex_morph "burned" 10}
				{play_sound "burn_medium" 1}
				{delay 20
					{stop_sound "burn_medium"}
				}
			}
		}
	}
}

{"post wood linked"
	{on ground_hit overload
		{delay_ex 0.5
			{tear "piece_big_wood" bone "post"}
			{volumes enable contact blast}
		}
	}
}

{"post wood destructable"
	{on bullet_hit overload
		{inherited}
		{if volume "body"
			{if stuff "fg"
				{if stuff "auto"
					; do nothing
				else stuff "size1"
					;{call "start_fall"}
				else stuff "size2"
					{call "obliterate"}
				else stuff "size3"
					{call "obliterate"}
				else stuff "size4"
					{call "obliterate"}
				else stuff "size5"
					{call "obliterate"}
				else stuff "big" ; //rockets / big mortar
					{call "obliterate"}
				}
			else stuff "all_ap"
				{if stuff "size2"

				else stuff "size3"
					{call "obliterate"}
				else stuff "size4"
					{call "obliterate"}
				}
			}
		}
	}
	{on blast overload
		{if min_energy 9
			{call "obliterate"}
		}
	}
	{on "obliterate" overload
		{tags add "obliterate"}
		{call "disable_volumes"}
		{delay_ex 0
			{call_synced "set_skeleton_local"}
		}
	}
	{on "set_skeleton_local"
		(define "cut_part_delete"
			{delay_ex 0
				{tear "piece_medium_wood" bone %0
					{hide %1}
				}
			}
		)
		("cut_part_delete" args "post" 0.05)

		{burn volume "body" fx "tree_obliterate_bole" time 0.1 fake even_law}
		{burn volume "body" fx "tree_obliterate_bole" time 0.1 fake even_law}
		{burn volume "body" fx "tree_obliterate_bole" time 0.1 fake even_law}

		{spawn "tree_obliterate_bole_base2" "root" x}

		{delay 0.5
			{spawn "burned_spot_round2"		scale 0.5 no_position random_orientation}
			{spawn "pleten_wood"			no_position random_orientation}
		}
		{delay 1
			{delete}
		}
	}
	{on "disable_volumes"
		{volumes disable visible bullet contact blast touch}
	}
}

{"post concrete"
	{inflammation_time 10000}
	{on "fall_sound" overload}
	{on "contact_fx" overload
		{spawn "piece_crush"}
	}
}

{"post steel"
	{inflammation_time 10000}
	{on "fall_sound" overload}
	{on "contact_fx" overload
		{spawn "metal_crush"}
	}
}

{"disable_area post"
	{on "break"
		{area disable}
		{volumes disable obstacle contact}
	}
}

{"ring_post"
	{on "ring"
		{delay 0.5
			{ani_play "gong"}
			{start_sound "push/ring"}
			{tags add "gong"}
		}
	}
}
{"traffic_light_blinking"
	{on spawn
		{set "light_on" 0}
		{call "update_blinking"}
	}
	{on "break"
		{set "light_on" 0}
		{call "update_blinking"}
	}
	{on "update_blinking"
		{if not fallen
			{if "light_on"
				{view hide "lights_glow"}
				{set "light_on" 0}
			else
				{view show "lights_glow"}
				{set "light_on" 1}
			}
			{delay_effect 0.5 "update_blinking"}
		else
			{kill_delay "update_blinking"}
			{view hide "lights_glow"}
		}
	}
}
{"traffic_light_on"
	{on spawn
		{if fallen
			{set "light_on" 0}
		else
			{set "light_on" 1}
		}
		{call "update_lights"}
	}
	{on "break"
		{set "light_on" 0}
		{call "update_lights"}
	}
	{on "update_lights"
		{if not "light_on"
			{view hide "lights_glow"}
		}
	}
}
