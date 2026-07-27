{selector
	{type "tank_heavy"}

	{group
		{ignore  {class airborne}}
		{ignore  {class airborne_strike}}
		{ignore {class proj_usa_antirad}}
		{ignore {class proj_rus_antirad}}

		{select {class ir_fake_target}}
		{select {class missile_aim_point}}
		{select {weapon "ap"}}
		{select {weapon "fg"}}

		;{select {class car}}
		;{sort {class ir_fake_target}}
		;{sort {class missile_aim_point}}
		{sort {weapon "ap"} {attacking} {class tank_heavy}}
		{sort {weapon "ap"} {attacking} {class tank_medium}}
		{sort {weapon "ap"} {attacking} {class tank_light}}
		{sort {weapon "ap"} {attacking} {class armoredcar}}
		{sort {weapon "ap"} {attacking}}
		{sort {weapon "rocketlauncher"} {attacking}}
		{sort {weapon "rocketlauncher"} {threating}}
		;{sort {weapon "bullet"} {attacking}}
		;{sort {weapon "bullet"} {threating}}
		{sort {in_range 80}}
		{sort {class ir_fake_target}}
		{sort {class missile_aim_point}}
		{sort {weapon "ap"} {threating} {class tank_heavy}}
		{sort {weapon "ap"} {threating} {class tank_medium}}
		{sort {weapon "ap"} {threating} {class tank_light}}
		{sort {weapon "ap"} {threating} {class armoredcar}}
		{sort {weapon "ap"} {threating}}
		{sort {weapon "ap"} {class tank_heavy}}
		{sort {weapon "ap"} {class tank_medium}}
		{sort {weapon "ap"} {class tank_light}}
		{sort {weapon "ap"} {class armoredcar}}
		{sort {weapon "ap"}}
		{sort {weapon "fg"} {attacking}}
		{sort {weapon "fg"} {threating}}
		{sort {weapon "fg"}}

		{sort {in_range 200}}
		{sort time_to_aim}
	}

	{group
		;{sort {class ir_fake_target}}
		;{sort {class missile_aim_point}}
		{sort {class tank_heavy}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class human} {weapon}}
		{sort {class human}}
		{sort {class howitzer}}
		{sort {class cannon_big}}
		{sort {class cannon_small}}
		{sort {class cannon_zenite}}
		{sort {weapon "at_rifle"} {attacking}}
		{sort {weapon "at_rifle"} {threating}}
		{sort {class cannon_bullet}}
		{sort {class car}}
		{sort time_to_aim}

	}

}
