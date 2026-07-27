
(Define "Base_Sponson_F"
	{bone revolute "sponson_f"
		{parameters "ID=aux_turret2;"}
		{Position 47.1879	12.2652	55.5361}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/sponson_f.ply"}
		
		{bone revolute "gun_rot2"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				8.29928	0	0
			}
			{bone "visor_sponson_f"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					2.87699	12.8788	0
				}
			}
			(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_Russ/Model/Sponson_F/%args_sponson/Healthy/base.inc")
			("SF_%args_sponson")
		}
	}
)