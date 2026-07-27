
(Define "Zzapgun_Gunwagon"
	{bone "zzap"
		{Position 0	0	4.92126}
		{bone "energy_box"
			{parameters "ID=turret;"}
			{Matrix34
				0	0.965926	0.258819
				0	-0.258819	0.965926
				1	0	0
				12.939	1.9685	40.9449
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_zzap/energy_box.ply"}
		}
		{bone "turret"
			{parameters "ID=turret;"}
			{Position 26.0736	0	36.0307}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_zzap/turret.ply"}
			{bone revolute "gun_rot"
				{parameters "ID=turret;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_zzap/gun_rot.ply"}
				{bone revolute "gun"
					{parameters "ID=gun;"}
					{animation
						{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/gun_zzap_b.anm"} {speed -0.6}}
					}
					{Matrix34
						1	0	0
						0	0	1
						0	-1	0
						4.14058	-0.871265	39.7053
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_zzap/gun.ply"}
					{bone "foresight3"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							55.4486	0	-0.871262
						}
					}
					{bone "fx_light1"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							47.1995	13.7105	-1.11554
						}
					}
					{bone "fx_light2"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							47.1995	-13.5659	-1.11549
						}
					}
					{bone "fx_light3"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							47.1995	0.0582199	12.9319
						}
					}
					{bone "fx_light4"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							47.1995	0.058197	-14.6706
						}
					}
					{bone "fx_light5"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							0.104998	16.1919	-0.344147
						}
					}
					{bone "fx_light6"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							-4.72259	13.5652	-0.34404
						}
					}
					{bone "fx_light7"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							4.8862	13.5652	-0.34404
						}
					}
					{bone "fx_light8"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							-33.064	10.2283	4.16672
						}
					}
					{bone "fx_light9"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							-32.6276	-5.30211	17.9297
						}
					}
					{bone "fx_light10"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							-31.7186	-0.466057	8.42187
						}
					}
					{bone "fx_light11"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							-34.8129	-0.112373	-3.39365
						}
					}
				}
			}
			{bone "gunner"
				{Position -41.8075	9.4977	-6}
			}
			{bone "commander"
				{Position -46.3423	-13.8116	-6}
			}
			{bone "fxfire3"
				{Position 3.54716	-0.000110149	21.3243}
			}
		}
	}
)