
(Define "supa_kannon_turret"
	{bone "supa_kannon_base"
		{parameters "ID=body;"}
		{Matrix34
			0	-1	0
			0	0	1
			-1	0	0
			-81.9437	-15.675	70.1247
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_supakannon/supa_kannon_base.ply"}
		{bone Revolute "Turret"
			{parameters "ID=turret;"}
			{animation
				{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/turret_supa_b.anm"} {speed -0.6}}
			}
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				-15.675	25.3477	0.453178
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_supakannon/sr_turret.ply"}
			{bone Revolute "gun_rot"
				{parameters "ID=gun;"}
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					-21.1008	-0.0950666	56.766
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_supakannon/gun_rot.ply"}
				{bone "foresight3"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						216.145	2.54518	-0.0952442
					}
					{bone "visor_gunner"}
				}
				{bone "barrel"
					{parameters "ID=gun;"}
					{Position 168.031	2.61147	0.343284}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_supakannon/barrel.ply"}
				}
			}
		}
	}
)
	