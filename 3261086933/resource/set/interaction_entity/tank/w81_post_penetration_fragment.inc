

;/*=========== add by ordos Begin ===========*/
{"w81_post_penetration_effect_apfsds_short"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
	  {if tagged "big_veh"
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}
	   else tagged "light_veh"
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}
	  }
	}
}

{"w81_post_penetration_effect_apfsds_long"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
	  {if tagged "big_veh"
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}

		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}

	   else tagged "light_veh"
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}
	  }
	}
}

{"w81_post_penetration_effect_atgm_tandem"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
	  {if tagged "big_veh"
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}

		{spawn "w81_fgassist_medium" "sp_point2" x}

		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}



	   else tagged "light_veh"
		{spawn "w81_fgassist_medium" "sp_point1" x}


		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}
	  }
	}
}

{"w81_post_penetration_effect_heat"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
	  {if tagged "big_veh"
		{spawn "w81_fgassist_medium" "sp_point3" x}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}



	   else tagged "light_veh"
		{spawn "w81_fgassist_medium" "sp_point3" x}

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}
	  }
	}
}

{"w81_post_penetration_effect_atgm"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
	  {if tagged "big_veh"

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}

		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}


	   else tagged "light_veh"
		{spawn "w81_fgassist_medium" "sp_point3" x}

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}
	  }
	}
}

{"w81_post_penetration_effect_sub-caliber_apcr"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
	  {if tagged "big_veh"

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}


		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}



	   else tagged "light_veh"

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}

	  }
	}
}

{"w81_post_penetration_effect_sub-caliber_apds"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
	  {if tagged "big_veh"

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}


		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point1" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}


	   else tagged "light_veh"

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 100.25} {gravity 1.8}}
	  }
	}
}

{"w81_post_penetration_effect_full-caliber_aphe"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
	  {if tagged "big_veh"

		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}


		{spawn "w81_fgassist_extra" "sp_point2" x {tags add "fragment_small"}}



	   else tagged "light_veh"

		{spawn "w81_fgassist_extra" "sp_point2" x {tags add "fragment_small"}}
	  }
	}
}

{"w81_post_penetration_effect_full-caliber_ap"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
	  {if tagged "big_veh"

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}

		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -60} {gravity 1.8}}
		{spawn "fragment_small" "sp_point3" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}


	   else tagged "light_veh"

		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 110 30 rnd_dir -61.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -100.6 25 rnd_dir -50.45} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 150.8550 rnd_dir 50.65} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir -67.95} {gravity 1.8}}
		{spawn "fragment_small" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up rnd_dir 70} {gravity 1.8}}
	  }
	}
}

{"w81_post_penetration_effect_autocannon"

	{on spawn
		{volumes disable bullet touch}
		{volumes disable contact blast}
		{delay 0.5
			{call "spawn_fragment"}
		}
		{delay 1.5
			{delete}
		}
	}

	{on "spawn_fragment"
		{spawn "fragment_small_autocannon" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -80 24 rnd_dir -65.25} {gravity 1.8}}
		{spawn "fragment_small_autocannon" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 95 25 rnd_dir 40.35} {gravity 1.8}}
		{spawn "fragment_small_autocannon" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up -75 34 rnd_dir -50.15} {gravity 1.8}}
		{spawn "fragment_small_autocannon" "sp_point2" x {tags add "fragment_small"} {impulse  dir 100 com up 100.5 25} {gravity 1.8}}
	}
}
;/*=========== add by ordos End ===========*/