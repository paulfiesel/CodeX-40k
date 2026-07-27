
(Define "auxturret1"
	{bone revolute "aux_turret1"
		{parameters "ID=aux_turret1;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/aux_turret_1_b.anm"} {speed -0.6}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/aux_turret_1_b.anm"} {speed 0.6}}
		}
		{Position 64.4581	21.6045	127.259}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_turret1/aux_turret1.ply"}
		
		{bone "fxfire5"}
		
		{bone revolute "aux_turret1_gun"
			{parameters "ID=aux_turret1;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				17.3249	-0.57723	11.8583
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_turret1/aux_turret1_zzap.ply"}
			{bone "foresight2"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					38.0054	-0.623474	-0.232502
				}
				{bone "visor_aux1"}
			}
		}
	}
)