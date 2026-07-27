
(Define "lifta_drop_turret"
	{bone "lifta_droppa"
		{parameters "ID=turret;"}
		{Matrix34
			0	1	0
			-1	0	0
			0	0	1
			-84.5596	-0.787402	64.9271
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_lifta_drop/lifta_droppa.ply"}
		
		{bone "turret_cable"
			{parameters "ID=gun;"}
			{Position 0	-44.1896	71.578}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_lifta_drop/turret_cable.ply"}
		}
		{bone revolute "gun_rot"
			{parameters "ID=turret;"}
			{animation
				{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/turret_lifta_drop_b.anm"} {speed -0.6}}
				{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/turret_lifta_drop_b.anm"} {speed 0.6}}
			}
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0	-4.72648	11.1293
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_lifta_drop/gun_rot.ply"}
			{bone "turret"
				{parameters "ID=turret;"}
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					39.4631	2.70605e-05	60.4487
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_lifta_drop/turret.ply"}
				{bone revolute "gun_rot1"
					{parameters "ID=turret;"}
					{animation
						{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/gun_lifta_drop_b.anm"} {speed -0.6}}
						{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/gun_lifta_drop_b.anm"} {speed 0.6}}
					}
					{Matrix34
						0	-1	0
						0	0	1
						-1	0	0
						0.00153822	106.589	16.1015
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_lifta_drop/gun_rot1.ply"}
					{bone "gun"
						{parameters "ID=gun;"}
						{Matrix34
							0	0	-1
							-1	0	0
							0	1	0
							106.589	-16.1015	0.000985384
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_lifta_drop/gun.ply"}
						{bone "foresight_lifta_droppa"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								0.786895	-160.112	34.0999
							}
							{bone "visor_gunner"}
						}
						{bone "grav_spin"
							{parameters "ID=gun;"}
							{Position 0.00120163	-28.2861	33.9156}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_lifta_drop/grav_spin.ply"}
						}
						{bone "fxlight1"
							{Matrix34
								0	-0.943212	0.33219
								1	0	0
								0	0.33219	0.943212
								0.46474	139.11	35.6585
							}
						}
						{bone "fxlight2"
							{Matrix34
								0	-0.943212	0.33219
								1	0	0
								0	0.33219	0.943212
								-8.03154	139.11	35.6585
							}
						}
						{bone "fxlight3"
							{Matrix34
								0	-0.943212	0.33219
								1	0	0
								0	0.33219	0.943212
								8.35852	139.11	35.6584
							}
						}
						{bone "fxlight4"
							{Matrix34
								-0.0506039	-0.99667	0.0639462
								0.998713	-0.0507077	0
								0.00324304	0.0638639	0.997953
								-20.1828	92.1232	41.0308
							}
						}
					}
					{bone "turret1"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0	-4.57764e-05	-11.0158
						}
					}
					{bone "fxfire4"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							0	0	0
						}
					}
				}
			}
			{bone "fxfire2"}
		}
	}
)
	