{selector
	{unit "human" "bullet"}	;// "unit tag" or "unit type" + "current main weapon tag"

	{group ;// humans
		{ignore	{class airborne}}
		
		;// prioritize vehicles instead of humans if both are within 10m
		{sort	{class SC_Target_Infantry_Suicide} {in_range 10}}
		{sort	{class tank_heavy} {in_range 10}}
		{sort	{class tank_medium} {in_range 10}}
		{sort	{class tank_light} {in_range 10}}
		{sort	{class armoredcar} {in_range 10}}
		{sort	{class armoredcar_l} {in_range 10}}
		{sort	{class SC_Target_Creature} {in_range 10}}
		{sort	{class car} {in_range 10}}

		{sort	{in_range 10}}
		{sort	{attacking}}
		{sort	{class human} {weapon "grenade"} {in_range 40}}
		{sort	{class human} {in_range 35}}		;// humans that are vehicle crew are in this category
		{sort	{class human} {weapon "bullet"}}
		{sort	{class human} {weapon}}
		{sort	{class human}}
		{sort	{threating}}
		{sort	distance}
	}
}