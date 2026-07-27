{selector
	{type "tank_light"}	;// "unit tag" or "unit type" + "current main weapon tag"

	{group
		{select {class armoredcar}}
		{select {class armoredcar_l}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{select {class tank_light}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
	}
	{group
		{ignore {class airborne}}
		{sort {class howitzer}}
		{sort {class cannon_big}}
		{sort {class cannon_small}}
		{sort {class cannon_zenite}}
		{sort distance}
	}
	{group
		{select {class tank_medium}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
	}
	{group
		{select {class tank_heavy}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
	}
	{group
		{sort {weapon "rocketlauncher"} {attacking}}
		{sort {weapon "rocketlauncher"} {threating}}
		{sort distance}
	}
	{group
		{sort {weapon "at_rifle"} {attacking}}
		{sort {weapon "at_rifle"} {threating}}
		{sort distance}
	}
	{group
		{select {class car}}
		{sort distance}
	}
	{group
		{sort {attacking}}
		{sort distance}
	}
}