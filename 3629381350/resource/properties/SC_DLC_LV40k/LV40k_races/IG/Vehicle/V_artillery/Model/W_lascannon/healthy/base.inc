
(Define "Base"
	{bone "heavy_lascannon"
		{bone "las_cables"
			{parameters "ID=gun;"}
			{Position -0.620827	-3.09944e-05	23.0226}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/las_cables.ply"}
		}
		{bone "las_battery"
			{parameters "ID=gun;"}
			{Position 1.35697	9.50019	19.3731}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/las_battery.ply"}
		}
		{bone "shield_lascannon"
			{parameters "ID=body;"}
			{Position 5.82291	-9.97452	27.2367}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/shield_lascannon.ply"}
		}
		{bone revolute "gun_rot"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				-0.620827	-3.09944e-05	23.0226
			}
			{bone "w_heavy_lascannon"
				{parameters "ID=gun;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/w_heavy_lascannon.ply"}
			}
			{bone "foresight_lc"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					38.429	3.72727	0.113382
				}
			}
		}
	}
)