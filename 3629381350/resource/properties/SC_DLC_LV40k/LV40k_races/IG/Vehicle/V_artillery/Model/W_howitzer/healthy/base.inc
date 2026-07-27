
(Define "Base"
	{bone "howitzer"
		{bone "shield_howitzer"
			{parameters "ID=body;"}
			{Position 8.29139	-0.0720769	22.3454}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/shield_howitzer.ply"}
			{bone "fx_hw1"
				{Position 1.41304	-9.00931	6.81205}
			}
		}
		{bone revolute "gun_rot"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				-0.620827	-3.09944e-05	23.0226
			}
			{bone "w_howitzer"
				{parameters "ID=gun;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/w_howitzer.ply"}
			}
			{bone "barrel"
				{parameters "ID=gun;"}
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					36.4569	3.72728	0.11337
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/barrel.ply"}
				{bone "chamber"
					{parameters "ID=gun;"}
					{Position -42.4058	-0.0189756	3.26585}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/chamber.ply"}
				}
				{bone "lever"
					{parameters "ID=gun;"}
					{Matrix34
						1	0	0
						0	1	0
						0	0	1
						-42.4006	3.08822	1.02593
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/lever.ply"}
				}
			}
			{bone "fxshell_hw"
				{Matrix34
					-1	0	0
					0	0	1
					0	1	0
					-11.1313	2.8639	0.11334
				}
			}
			{bone "foresight_hw"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					49.5206	3.72727	0.11339
				}
			}
		}
	}
)