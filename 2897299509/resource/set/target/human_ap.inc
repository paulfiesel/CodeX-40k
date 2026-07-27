;{selector
;	{unit "human" "rocketlauncher"}	;// "unit tag" or "unit type" + "current main weapon tag"
;
;	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
;		{sort {class tank_heavy}}
;		{sort {class tank_medium}}
;		{sort {class tank_light}}
;		{sort {class armoredcar}}
;		{sort {class armoredcar_l}}
;		{sort {class car}}
;	}
;}

;{selector
;	{unit "human" "at_rifle"}	;// (at_rifle = at rifles and rifle grenades)
;
;	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
;		{sort {class armoredcar}}
;		{sort {class armoredcar_l}}
;		{sort {class tank_light}}
;		{sort {class tank_medium}}
;		{sort {class tank_heavy}}
;		{sort {class car}}
;	}
;}

{selector
	{unit "human" "ap"}	;// (ap = molotov grenades, AT grenade launchers, Rocketlaunchers, AT rifles)

	{group	;// priority of vehicles to attack assuming more than one is in weapon's range
		{ignore {class proj_rus_antirad}}
		{ignore {class proj_usa_antirad}}

		{sort {class tank_heavy}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {class armoredcar}}
		{sort {class armoredcar_l}}
		{sort {class car}}
		{sort {attacking}}
		{sort distance}
	}
}
