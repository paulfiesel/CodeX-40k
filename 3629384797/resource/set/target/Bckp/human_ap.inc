{selector
	{unit "human" "rocketlauncher"}	;// "unit tag" or "unit type" + "current main weapon tag"

	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
		{sort {class tank_heavy}}
		{sort {class SC_Target_Infantry_Big}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {class SC_Target_Infantry_Med}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class car}}
		
		{sort {class SC_Target_Infantry_Small}}
		{sort {class human}}
	}
}

{selector
	{unit "human" "at_rifle"}	;// (at_rifle = at rifles and rifle grenades)

	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class tank_light}}
		{sort {class tank_medium}}
		{sort {class tank_heavy}}
		{sort {class car}}
	}
}

{selector
	{unit "human" "ap"}	;// (ap = molotov grenades, AT grenade launchers, Rocketlaunchers, AT rifles)

	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
		{sort {class tank_heavy}}
		{sort {class SC_Target_Infantry_Big}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {class SC_Target_Infantry_Med}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class car}}
		
		{sort {class SC_Target_Infantry_Small}}
		{sort {class human}}
	}
}

{selector
	{unit "human" "grenadelauncher"}	;// SC PLATAFORM TEEST

	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
		{sort {class tank_heavy}	{weapon "rifle_grenade_at"}}
		{sort {class tank_medium}	{weapon "rifle_grenade_at"}}
		{sort {class tank_light}	{weapon "rifle_grenade_at"}}
		{sort {class armoredcar}	{weapon "rifle_grenade_at"}}
		{sort {class armoredcar_l}	{weapon "rifle_grenade_at"}}
		{sort {class car}			{weapon "rifle_grenade fg"}}
		
		{sort {class SC_Target_Infantry_Big}	{weapon "rifle_grenade fg"}}
		{sort {class SC_Target_Infantry_Med}	{weapon "rifle_grenade fg"}}
		{sort {class SC_Target_Infantry_Small}	{weapon "rifle_grenade fg"}}
		{sort {class human}						{weapon "rifle_grenade fg"}}
	}
}