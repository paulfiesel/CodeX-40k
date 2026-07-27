{selector
	{unit "human" "fg"} ;// "unit tag" or "unit type" + "current main weapon tag"

	{group
		{ignore {class proj_rus_antirad}}
		{ignore {class proj_usa_antirad}}

		{sort {class tank_heavy}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class howitzer}}
		{sort {class tank_bullet}}
		{sort {class cannon_big}}
		{sort {class cannon_small}}
		{sort {class cannon_zenite}}
		{sort {in_range 60}}
		{sort distance}
	}
}
