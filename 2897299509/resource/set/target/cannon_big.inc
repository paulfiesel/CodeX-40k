{selector
	{type "cannon_big"}
	{group
		{ignore {class proj_rus_antirad}}
		{ignore {class proj_usa_antirad}}
		{ignore {class airborne}}
		{select {class ir_fake_target}}
		{select {class missile_aim_point}}
		{select {class car}}
		{select {class human}}
		{sort {weapon "fg"}}
		{sort {weapon "ap"}}
		{sort {weapon}}
		{sort distance}
	}

	{group
		{sort {attacking}}
		{sort distance}
	}
}
