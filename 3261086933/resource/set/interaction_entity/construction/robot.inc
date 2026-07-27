
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

{"ugv_mine"
	("sdkfz302_sound")
	{on "crew_stunned" overload}
	{on "crew_revive" overload}
	{on "driver_revive" overload}

	{on "explosion_blastwave" overload
		{start_sound "detonation/he_size5/bkg/"}
		{blastwave c4 11.25 r0 1.3 r1 2.6}
		{blastwave c4 3.30 	r0 3.29 r1 9.43}
		{blastwave c4 0.77	r0 10.36 r1 15.04}

		{spawn "shockwave_sphere"}
		{spawn "ex_he_size3"}

		{spawn "crater_medium" "basis" x terrain_texmod}

		{if terrain_fx "snow"
			{spawn "tank_die_snow_light"}
		else terrain_fx "ice"
			{spawn "tank_die_snow_light"}
		else
			{spawn "tank_die_dust_light"}
		}
	}
}

{"ugv_recon"
	("sdkfz302_sound")
	{on "crew_stunned" overload}
	{on "crew_revive" overload}
	{on "driver_revive" overload}
	
	{on spawn
		{delay 10 
			{if under_water 
				{call "ammo_explosion_small"}
			}
		}
	}
	
	{on "check_water_level" overload
		{if water_level 0.5
			{able "sinking" 1}
			{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
		else
			{able "sinking" 0}
		}
	}

	{on break	overload
		{if not tagged "exploded"
			{if component "body"
				{call "ammo_explosion_small"}
			}
		}
	}
	{on "ammo_explosion_small"
		{tags add "death_counter_final"}
		{call "death_counter_check"}
		{kill_crew}
		{spawn "aero_die" "body"}
		{spawn "aero_die_particle" "body"}
		{components "body" break}
		{delay 0.1 {delete}}
	}
}