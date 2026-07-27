
(Define "Shoota_Trukk"
	{bone revolute "turret"
		{parameters "ID=turret;"}
		{animation
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_wartrukk/Animations/turret_b.anm"} {speed 0.6}}
		}
		{Position 18.1453	6.82751	-5.46275}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/turret.ply"}
		{bone revolute "gun_rot"
			{parameters "ID=gun;"}
			{animation
				{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_wartrukk/Animations/gun_b.anm"} {speed 0.6}}
			}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				16.6871	-0.44583	13.4902
			}
			{bone "big_shoota"
				{parameters "ID=gun;"}
				{Orientation
					0	-0.087156	-0.996195
					-1	0	0
					0	0.996195	-0.087156
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/big_shoota.ply"}
				{bone "fxshell_big_shoota"
					{Matrix34
						-0.996195	0	-0.0871558
						0	-1	0
						-0.0871558	0	0.996195
						-3.41732	7.03674	5.99098
					}
				}
				{bone "foresight_big_shoota"
					{Matrix34
						0	-1	0
						0.996195	0	0.0871553
						-0.0871553	0	0.996195
						-0.443339	-25.6096	5.06904
					}
				}
				{bone "foresight_burna"
					{Matrix34
						0	-1	0
						0.996195	0	0.0871553
						-0.0871553	0	0.996195
						-1.86648	-28.6435	8.2427
					}
				}
			}
		}
		{bone "visor_gunner"
			{Position 16.2645	2.81056	24.7321}
		}
		{bone "fxfire4"
			{Matrix34
				0	0	1
				0	1	0
				-1	0	0
				0.580734	-0.0747318	-2.63371
			}
		}
		{bone revolute "commander"
			{Position -5.66802	0.421346	6.23001}
		}
	}
)