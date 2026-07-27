{selector
	{unit "human"}	;// "unit tag" or "unit type" + "current main weapon tag"

	{group
		{ignore {class proj_rus_antirad}}
		{ignore {class proj_usa_antirad}}
		{sort {class helicopter}}

		{sort {class human}}
		{sort {class tank_heavy}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		;{sort {class tank_bullet}}
		;{sort {class car_bullet}}
		{sort {class car}}
		
		{sort 	{class cannon_small}}
		{sort  	{class cannon_big}}
		{sort  	{class cannon_zenite}}
		{sort  	{class cannon_bullet}}
		{sort  	{class howitzer}}		
		{sort distance}
	}
	
}
