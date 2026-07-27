
(Define "auxturret2b"
	{bone revolute "aux_turret2"
		{parameters "ID=aux_turret2;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/aux_turret_4_b.anm"} {speed -0.6}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/aux_turret_4_b.anm"} {speed 0.6}}
		}
		{Position 0.635663	-31.2017	119.149}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_turret2_shoota/aux_turret2.ply"}
		
		{bone revolute "aux_turret2_mgun"
			{parameters "ID=aux_turret3;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				20.1768	-1.34086	21.0551
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_turret2_shoota/aux_turret2_mgun.ply"}
			{bone "foresight12"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					28.6678	1.52588e-05	-1.13991
				}
			}
		}
		{bone "fxfire8"}
	}
)