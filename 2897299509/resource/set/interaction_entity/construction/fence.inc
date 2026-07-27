{"fence"
	{inflammation_time 4}
	{on bullet_hit
		{if not stuff "proj_pointer"
			{if stuff "shell fg"
				{bullet_detonate}
			else stuff "ic hmgun"
				{fire radius 0.5 time 0.3 heating 3}
			else stuff "ic autocannon_small"
				{fire radius 0.5 time 0.3 heating 6}
			}
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
		{if stuff "hesh_type_dmg"
			{spawn "cw_cumulative_frestrict" inv_normal}
		else stuff "cm_type_dmg cm"
			{spawn "rpg_restrictor" inv_normal}
		else stuff "heat_shell"
			{bullet_detonate}
		}
		{if stuff "auto he"
			{call "break"}
		else stuff "auto size2"
			{call "break"}
		}
	}
	{on break_armor
		{if name "blast"
			{call "break"}
		}
	}
	{on contact
		{if can_crush
			{call "break"}
		else effector "air_part"
			{call "break"}
		else effector "big part"
			{call "break"}
		}
	}
	{on "burn_volume"
		{if not burned
			{if volume "body"
				{burn volume fx "smoke_dead_tree1" time 15 2 even_law}
				{fire radius 1.5 time 10 heating 0.14 follow}
				{delay 10 "break_delay" {call "break"}}
				{if not tagged "burning"
					{play_sound "burn_small" 1}
				}
				{tags add "burning"}
			}
		}
	}
	{on "disable_volumes"
		{volumes disable visible bullet contact blast touch}
	}
}

{"wood fence"
	{on bullet_hit
		{if not stuff "proj_pointer"
			{if stuff "shell fg"
				{bullet_detonate}
			else stuff "ic hmgun"
				{fire radius 0.5 time 0.3 heating 3}
			else stuff "ic autocannon_small"
				{fire radius 0.5 time 0.3 heating 6}
			}
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
		{if stuff "hesh_type_dmg"
			{spawn "cw_cumulative_frestrict" inv_normal}
		else stuff "cm_type_dmg cm"
			{spawn "rpg_restrictor" inv_normal}
		}
		{if stuff "auto size1 zenite"
			; do nothing
		else stuff "shell"
			{call "break"}
		}
	}
	{on spawn
		{link_sound "burn_small" "fire/loops/medium"}
	}
	{on "break"
		{call "disable_volumes"}
		{spawn "wood_crush_small" "root"}
		{delay 0.1 {delete}}
	}
	{on contact
		{if effector "moto"
			{call "break_at_speed"}
		}
	}
	{on "break_at_speed"
		{if effector_velocity 15
			{call_synced "break"}
		}
	}
}

{"wood fence parts"
	{on "break" overload
		{call "change_model"}
		{spawn "wood_crush_small" "root"}
	}
}

{"medic_rally"
	{on "break_at_speed" overload}
}

{"wood fence big"
	{on spawn
		{link_sound "burn_small" "fire/loops/medium"}
	}
	{on "break" overload
		{stop_sound "burn_small"}
		{call "disable_volumes"}
		{spawn "wood_crush_big" "root"}
		{delay 0.2 {delete}}
	}
}

{"concrete fence"
	{inflammation_time 10000}
	{on "break"
		{call "disable_volumes"}
		{spawn "stone_hit_small" "root"}
		{spawn "concrete_fence_destroy" "root" x} ;//doesn't exist
		{delay 0.2 {delete}}
	}
}

{"steel fence"
	{inflammation_time 10000}
	{on bullet_hit
		{if not stuff "proj_pointer"
			{if stuff "shell fg"
				{bullet_detonate}
			else stuff "ic hmgun"
				{fire radius 0.5 time 0.3 heating 3}
			else stuff "ic autocannon_small"
				{fire radius 0.5 time 0.3 heating 6}
			}
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
		{if stuff "hesh_type_dmg"
			{spawn "cw_cumulative_frestrict" inv_normal}
		else stuff "cm_type_dmg cm"
			{spawn "rpg_restrictor" inv_normal}
		}
		{if stuff "auto size1 zenite"
			; do nothing
		else stuff "auto size2 zenite"
			; do nothing
		else stuff "shell"
			{call "break"}
		}
	}
	{on "break"
		{call "disable_volumes"}
		{spawn "car_die_particle" "root"}
		{delay 0.2 {delete}}
	}
}

{"animated_crush"
	{on "break" overload
		{kill_delay "break_delay"}
		{burn stop}
		{call "disable_volumes"}
		{area disable}
		{tex_mod "x"}
		{ani_play "crush" callback}
	}
	{on animation_end "crush"
		{update_shadow}
		{update_visibility_patch}
	}
}

{"animated_crush_gate"
	{on break_armor
		{if name "pierce"
			{call "break"}
		}
	}
	{on "break" overload
		{kill_delay "break_delay"}
		{burn stop}
		{call "disable_volumes"}
		{area disable}
		{ani_play "crush" callback}
	}
	{on animation_end "crush"
		{update_shadow}
		{update_visibility_patch}
	}
}
