
game_entity
	{simulation {able 1} {state 1}}
	{constrain none}
	{obstacleID "construction"}
	{collider "particle.small"}
	{props "small part stuff SC_prop_gibs_metal"}

	{mass 25}
	{volume "body"
		{able {obstacle 0}}
		{thickness 5}
	}
	{volume defaultmaterial "steel"}
	
	{lodclass "part_small"}