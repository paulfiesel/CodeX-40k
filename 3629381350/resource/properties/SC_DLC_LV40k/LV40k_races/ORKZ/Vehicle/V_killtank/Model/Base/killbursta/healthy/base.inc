
(Define "base_killbursta"
	{bone revolute "mantlet"
		{parameters "ID=gun;"}
		{Position 64.7347	1.52001	65.9385}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/mantlet.ply"}
		
		{bone revolute "gun_rot"
			{parameters "ID=gun;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				0	0	-1.69196
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/gun_rot.ply"}
			
			{bone "barrel"
				{parameters "ID=gun;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/barrel.ply"}
				{animation
					{sequence "repair" {speed -0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/gun_killbursta_b"}}
					{sequence "break" {speed 0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/gun_killbursta_b"}}
				}
				{bone "foresight3"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						119.652	8.51834	0.13707
					}
				}
			}
		}
	}
)
	