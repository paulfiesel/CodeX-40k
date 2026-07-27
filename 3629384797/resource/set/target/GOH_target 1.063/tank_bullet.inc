{selector
	{type "tank_bullet"}

	{group
		{sort {weapon "rocketlauncher"} {attacking}}
		{sort {weapon "rocketlauncher"} {threating}}
		{sort distance}
	}
	{group
		{sort {class howitzer}}
		{sort {class cannon_zenite}}
		{sort {class cannon_bullet}}
		{sort distance}
	}
	{group
		{sort {weapon "at_rifle"} {attacking}}
		{sort {weapon "at_rifle"} {threating}}
		{sort distance}
	}
	{group
		{sort {class human} {weapon}}
		{sort {class human}}
		{sort distance}
	}
	{group
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class cannon_big}}
		{sort {class car}}
		{sort {class airborne}}
		{sort {class airborne}}
		{sort distance}
	}
}
