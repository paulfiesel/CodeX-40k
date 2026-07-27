{"offmap_paradrop"			;// Helper that spawns stuff
	(define "offmap"
		{on spawn
			{delay 5
				{delay 1
					{spawn %0 offset -250 0 1000}
					{hide 1}
				}
			}
		}
	)
}

{"flare_paradrop_ammo"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_ammo_pallet"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_bmd2"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_bmd2"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_2s25m"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_2s25m"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_rpu14"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_rpu14"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"parachute_paradrop"
	{on spawn
		{start_sound "vehicle/deploy/tent"}
		{ani_play "flight" callback}
	}
	{on animation_end "flight"
		{ani_play "landing" callback}
		{with_linked_entity "attach"
			{unlink}
			{impulse up 0.1 com}
		}
	}
	{on animation_end "landing"
		{with_linked_entity "attach"
			{unlink}
			{impulse up 5 com}
		}
		{delay 1 {delete}}
	}
}

{"paratrooper_attach"			;// Parachute
	{on spawn
		{ani_play "flight" callback}
		;{ani_play "landing"}
	}
	{on animation_end "flight"
		{ani_play "landing" callback}	
		{delay 5 {delete}}
	}
}

