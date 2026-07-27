{selector
	{unit "human"}	;// "unit tag" or "unit type" + "current main weapon tag"

	{group
		{sort {in_range 12}}
		{sort {attacking}}
		{sort {class human} {weapon "bullet"}}
		{sort {class human} {weapon}}
		{sort {class tank_heavy}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class tank_bullet}}
		{sort {class car_bullet}}
		{sort {class car}}
		{sort {weapon}}
		{sort {class human}}
		{sort distance}
	}
	{group
		{sort distance}
	}
}