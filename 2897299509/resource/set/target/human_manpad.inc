{selector
	{unit "human" "AA_missile"}

	{group
	    	{ignore {class proj_rus_antirad}}
		{ignore {class proj_usa_antirad}}
	   	{sort {in_range 200} {class airborne}}
		{sort {in_range 200} {class helicopter}}
		{sort {in_range 200} {class small_UAV}}
		;{sort  {class airborne}}
		;{sort  {class Helicopter}}
		{ignore {class human}}
		{ignore {class tank}}
		{ignore {class armoredcar}}
		{ignore {class car}}
		{ignore {class light_tank}}
		{ignore {class cannon}}
		{ignore {class cannon_bullet}}
		{ignore {class cannon_zenite}}
		{ignore {class cannon_small}}
		{ignore {class cannon_big}}
		{ignore {class howitzer}}
		{ignore {class tank_light}}
		{ignore {class tank_medium}}
		{ignore {class tank_heavy}}
		;{sort distance}


	}
}
