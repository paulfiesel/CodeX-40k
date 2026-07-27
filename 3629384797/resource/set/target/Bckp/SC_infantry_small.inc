{selector
	{type "SC_Target_Infantry_Small"}	;// "unit tag" or "unit type" + "current main weapon tag"

	{group
		{sort {in_range 8}}
		{sort {attacking}}
		{sort {class human} {weapon}}
		{sort {class SC_infantry_small}} 
		{sort {class SC_infantry_med}}
		{sort {class SC_infantry_big}}
		{sort {class human_ignore_melee}}
		{sort {class human}}
		{sort distance}
	}
	{group
		{select {class car}}
		{sort distance}
	}
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
		{ignore {class airborne}}
		{sort {class howitzer}}
		{sort {class cannon_big}}
		{sort {class cannon_small}}
		{sort {class cannon_zenite}}
		{sort distance}
	}
	{group
		{sort {attacking}}
		{sort distance}
	}
}