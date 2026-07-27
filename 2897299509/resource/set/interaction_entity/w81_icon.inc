

(define "portable_atgm_icon"
	{on spawn
		{if difficulty "easy"
			{call "show"}
			{delay 1
				{view start "atgm_view"}
			}
		else difficulty "normal"
			{call "show"}
			{delay 1
				{view start "atgm_view"}
			}
		else difficulty "hard"
			{call "show"}
			{delay 1
				{view start "atgm_view"}
			}
		else difficulty "heroic"
			{call "show"}
			{delay 1
				{view start "atgm_view"}
			}
		else difficulty "multiplayer"
			{call "show"}
			{delay 1
				{view start "atgm_view"}
			}
		}
	}
	{on "link"					;// linked to vehicle
		{view hide "atgm_view"}
	}

	{on "show" overload
		{add_view "%icon" "atgm_view" "root" not_manual not_scenario}
	}
)



{"metis_hand"
	("portable_atgm_icon" icon(icon_metis))
}


