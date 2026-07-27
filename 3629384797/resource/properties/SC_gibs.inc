
game_entity
	{simulation {able 1} {state 1}}
	{constrain none}
	{obstacleID "human"}
	{collider "human.part"}
	
;//	{props "flesh dest_corps"}
	{props "small part stuff SC_prop_gore_bits"}

	{mass 10}
	{volume "body"
		{able {obstacle 0}}
		{thickness 1}
	}
	{volume defaultmaterial "flesh"}
	
	{lodclass "decor_small"}