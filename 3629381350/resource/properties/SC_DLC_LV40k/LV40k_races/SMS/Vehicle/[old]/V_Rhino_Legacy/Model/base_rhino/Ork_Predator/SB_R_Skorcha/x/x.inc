
(Define "SB_R_Skorcha"
	{bone revolute "ork_predator_sponson_r"
		{parameters "ID=aux_turret1;"}
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			0	-0.010994	-4.54239
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_side_gun_r_burna.ply"}
		{bone "fx_shell_ork_predator_burna"
			{Matrix34
				0.00248571	0.999997	0
				0	0	-1
				-0.999997	0.00248571	0
				51.1713	-10.7445	4.29951
			}
		}
		{bone "foresight_ork_predator_side_gun_r_burna"
			{Matrix34
				0.999997	0	-0.0024854
				-0.0024854	0	-0.999997
				0	1	0
				50.4684	-8.63086	4.56269
			}
		}
	}
)