
(Define "kannon_turret"
	{bone revolute "turret"
		{parameters "ID=turret;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/turret_kannon_b.anm"} {speed -0.6}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/turret_kannon_b.anm"} {speed 0.6}}
		}
		{Position -102.214	-1.57487	144.285}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_kannon/turret.ply"}
		{bone revolute "gun_rot"
			{parameters "ID=gun;"}
			{animation
				{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/gun_kannon_b.anm"} {speed -0.6}}
				{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/gun_kannon_b.anm"} {speed 0.6}}
			}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				36.2337	0.0216335	17.4619
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_kannon/gun_rot.ply"}
			{bone "barrel"
				{parameters "ID=gun;"}
				{animation
					{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/gun_kannon_b.anm"} {speed -0.6}}
					{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/gun_kannon_b.anm"} {speed 0.6}}
				}
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					7.11566	20.3095	0.0216422
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_kannon/barrel.ply"}
				{bone "foresight8"
					{Position 30.9823	0.214762	0.310684}
				}
				{bone "visor_gunner"}
			}
		}
		{bone revolute "aux_turret3"
			{parameters "ID=aux_turret3;"}
			{animation
				{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/aux_turret_3_b.anm"} {speed -0.6}}
				{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/aux_turret_3_b.anm"} {speed 0.6}}
			}
			{Position -11.07	-14.454	45.2479}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_kannon/aux_turret3.ply"}
			{bone revolute "aux_turret3_mgun"
				{parameters "ID=aux_turret3;"}
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					18.7356	-1.24509	19.5512
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_main_kannon/aux_turret3_mgun.ply"}
				{bone "foresight5"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						26.6201	1.52588e-05	-1.05849
					}
					{bone "visor_aux3"}
				}
			}
			{bone "fxfire6"
				{Position 0	0	0}
			}
		}
		{bone "fxfire8"
			{Position 0	0	6.44481}
		}
	}
)
	