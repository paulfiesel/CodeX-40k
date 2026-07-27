
(Define "Turret_Rokkit"
	{bone "w_rokkitlauncha"
		{parameters "ID=gun;"}
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			6.97693	-0.178799	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/w_rokkitlauncha.ply"}
		{bone "rocket_0"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				9.75368	4.78714e-05	1.52588e-05
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/rocket_0.ply"}
		}
		{bone "foresight_rokkit_launcha"
			{Position 10.4004	0	0}
			{bone "barrels_mlrs00"}
		}
	}
)
	