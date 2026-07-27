{selector
	{type "tank_medium"}	;// "unit tag" or "unit type" + "current main weapon tag"

	{group
		{ignore {class airborne}}
		{select {class tank_medium}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
	}
	{group
		{ignore {class airborne}}
		{select {class tank_light}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
	}
	{group
		{ignore {class airborne}}
		{select {class tank_heavy}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
	}
	
	{group
		{select {class armoredcar}}
		{select {class armoredcar_l}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{sort {class howitzer}}
		{sort {class cannon_big}}
		{sort {class cannon_small}}
		{sort distance}
	}
	{group
		{sort {weapon "rocketlauncher"} {attacking}}
		{sort {weapon "rocketlauncher"} {threating}}
		{sort distance}
	}
	{group
		{sort {class cannon_zenite}}
		{sort distance}
	}
	{group
		{sort {weapon "at_rifle"} {attacking}}
		{sort {weapon "at_rifle"} {threating}}
		{sort distance}
	}
	{group
		{sort {class cannon_bullet}}
		{sort {class human} {weapon}}
		{sort {class human}}
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