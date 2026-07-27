{"shed"
	{inflammation_time 4}
	{on spawn
		{link_sound "burn_large" "fire/loops/big"}
	}
	{on bullet_hit
		{if not stuff "proj_pointer"
			{if stuff "shell fg"
				{bullet_detonate}
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
	{on break_armor
		{if not volume "window"
			{if name "blast"
				{call "break"}
			}
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
	{on "detach_human"			;// detaches garrisoned humans from building before deleting structure
		(define "drop_human"
			{with_linked_entity "%0" {call "throw_off_from_ladder"}}
		)
		("drop_human" args 1)
		("drop_human" args 2)
		("drop_human" args 3)
		("drop_human" args 4)
		("drop_human" args 5)
		("drop_human" args 6)
		("drop_human" args 7)
		("drop_human" args 8)
		("drop_human" args 9)
		("drop_human" args 10)
		("drop_human" args 11)
		("drop_human" args 12)
		("drop_human" args 13)
		("drop_human" args 14)
		("drop_human" args 15)
		("drop_human" args 16)
		("drop_human" args 17)
		("drop_human" args 18)
		("drop_human" args 19)
		("drop_human" args 20)
	}
	{on "break"
		{call "disable_volumes"}
		{call "crush_fx"}
		{call "check_structure"}
		{call "detach_human"}
		{delay 0.05 {delete}}
		{stop_sound "burn_large"}
	}
	{on "burn_volume"
		{if not burned
			{if volume "body"
				{play_sound "burn_large" 1}
				{burn volume fx "smoke_dead_tree1" time 15 2 even_law}
				{fire radius 1.0 time 10 heating 0.4 follow}
				{delay 10 "break_delay" {call "break"}}
			}
		}
	}
	{on "disable_volumes"
		{volumes disable visible bullet contact blast touch}
	}
}
{"shed_with_x"
	{inflammation_time 4}
	{on bullet_hit
		{if not stuff "proj_pointer"
			{if stuff "shell fg"
				{bullet_detonate}
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
	{on break_armor
		{call "break"}
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
	{on "break"
		{call "disable_volumes"}
		{call "check_structure"}
		{call "crush_fx"}
		{call "change_model"}
	}
	{on "burn_volume"
		{if not burned
			{if volume "body"
				{burn volume fx "smoke_dead_tree1" time 15 2 even_law}
				{delay 8 "break_delay" {call "break"}}
			}
		}
	}
	{on "disable_volumes"
		{volumes disable visible bullet contact blast touch}
	}
	{on "change_model"
		{if not "sliced"
			{tags add "crushed"}
			{set "sliced" 1}
			{call "disable_volumes"}
			{call "check_structure"}
			{delay_ex 0.1
				{set_skeleton "_x"}
				{call "disable_volumes"}
				{call "update_fx"}
				{set "first_stage" 1}
				{set "last_stage" 1}
				{call "effects"}
				{ani_play "crush"}
				{delay 0.1
					{update_visibility_patch}
				}
			}
		}
	}
}
{"shed no_crush"
	{on contact overload
		{if can_crush
			; do nothing
		else effector "air_part"
			{call "break"}
		else effector "big part"
			{call "break"}
		}
	}
}

{"break_on_burn shed"
	{on "burn_end"
		{call "break"}
		{spawn "burned_spot01"	no_position random_orientation}	;// stamp
	}
}
{"wood shed"
	{on "crush_fx"
		{spawn "wood_crush_big" "root"}								;// dust fx
		{call "destroyed_stamp"}
	}
	{on "destroyed_stamp" overload
		{spawn "crash_wood"		no_position random_orientation}		;// stamp
	}
}

{"wood shed small"
	{on "crush_fx" overload
		{spawn "wood_crush_small" "root"}							;// dust fx
		{call "destroyed_stamp"}
	}
	{on "destroyed_stamp" overload
		{spawn "crash_wood"		no_position random_orientation}		;// stamp
	}
}

{"wood shed barrel"
	{on bullet_hit
		{if not stuff "proj_pointer"
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
	{on contact
		{if can_crush
			{call "break"}
		}
	}
}

{"concrete shed"
	{inflammation_time 10000}
	{on "crush_fx"
		{spawn "stone_crush_big" "root"}
		{spawn "debris" "root"}
	}
}

{"steel shed"
	{inflammation_time 10000}
	{on "crush_fx"
		{spawn "spheredust_norm" "root"}
	}
}

{"ice shed"
	{on "crush_fx"
		{spawn "ice_crush_big_snow" "root"}								;// dust fx
	}
}

{"shed cellar1"
	{on "crush_fx"
		{spawn "trash_1" "root"}
	}
}

{"wood shed_with_x"
	{on "crush_fx"
		{spawn "wood_crush_big" "root"}
	}
}

{"wood shed_with_x small"
	{on "crush_fx" overload
		{spawn "wood_crush_small" "root"}
	}
}

{"concrete shed_with_x"
	{inflammation_time 10000}
	{on "crush_fx"
		{spawn "stone_crush_big" "root"}
		{spawn "debris" "root"}
	}
	{on "effects"
		{start_sound "crush/medium/concrete"}
	}
}

{"steel shed_with_x"
	{inflammation_time 10000}
	{on "crush_fx"
		{spawn "spheredust_norm" "root"}
	}
}

{"shed shed_with_x"
	{on "crush_fx"
		{spawn "trash_1" "root"}
	}
}

{"misc shed"
	{inflammation_time 10000}
	{on "crush_fx"
		{spawn "spheredust_big" "root"}
	}
}

{"water_capacity shed"
	{inflammation_time 10000}
	{on "crush_fx"
		{spawn "drops_water_big" "root"}
	}
}

{"shed jettison_bricks"
	{on "break"
		{if not "brick_crush"
			{spawn "brick_crush" "root"}
			{set "brick_crush" 1}
		}
	}
}
