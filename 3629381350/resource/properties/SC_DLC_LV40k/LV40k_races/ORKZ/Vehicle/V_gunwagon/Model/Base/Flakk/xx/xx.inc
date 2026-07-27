
(Define "Flakk_Gunwagon"
	{bone "flakkgun"
		{parameters "ID=turret;"}
		{Matrix34
			0	1	0
			0	0	1
			1	0	0
			-1.59646	0	38.7353
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_flakk/flakkgun.ply"}
		{bone revolute "turret"
			{parameters "ID=turret;"}
			{Matrix34
				0	0	1
				1	0	0
				0	1	0
				0.0025928	23.3557	0.337449
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_flakk/turret.ply"}
			{bone "ammo_boxes"
				{parameters "ID=turret;"}
				{Position -1.69379	-1.75908e-05	-1.49926}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_flakk/ammo_boxes.ply"}
			}
			{bone revolute "gun_rot"
				{parameters "ID=turret;"}
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					-2.26408	-0.00260913	14.5489
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_flakk/gun_rot.ply"}
				{bone "gun1"
					{parameters "ID=gun;"}
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						-2.85323	2.68527	0
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_flakk/gun1.ply"}
					{bone "barrel3"
						{parameters "ID=gun;"}
						{Position 39.0354	-6.13686	-8.45486}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_flakk/barrel3.ply"}
					}
					{bone "barrel1"
						{parameters "ID=gun;"}
						{Position 39.0624	-6.13735	2.98138}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_flakk/barrel1.ply"}
					}
					{bone "barrel2"
						{parameters "ID=gun;"}
						{Position 39.0624	6.138	2.98138}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_flakk/barrel2.ply"}
					}
					{bone "barrel4"
						{parameters "ID=gun;"}
						{Position 39.0354	6.13751	-8.45486}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_flakk/barrel4.ply"}
					}
					{bone "foresight3"
						{Position 57.5574	-2.90916e-05	-2.6148}
					}
					{bone "fxshell00"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							14.9198	-11.2347	2.98136
						}
					}
					{bone "fxshell01"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							14.9198	11.2402	2.98136
						}
					}
					{bone "fxshell02"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							14.9198	-11.4269	-7.76411
						}
					}
					{bone "fxshell03"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							14.9198	11.4173	-7.76411
						}
					}
					{bone "shooter00"
						{Position 56.3353	-6.13736	2.98139}
					}
					{bone "shooter01"
						{Position 56.3353	6.14173	2.97802}
					}
					{bone "shooter02"
						{Position 56.3083	-6.13687	-8.45485}
					}
					{bone "shooter03"
						{Position 56.3083	6.1375	-8.45484}
					}
				}
				{bone "fxfire3"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						-0.258929	-22.506	0.000190507
					}
				}
				{bone "visor2"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						45.4974	0.13179	0
					}
				}
			}
			{bone "gunner"
				{Position -31.2213	11.8084	-22.72}
			}
			{bone "commander"
				{Position -25.3158	-13.7821	-22.7211}
			}
		}
	}
)