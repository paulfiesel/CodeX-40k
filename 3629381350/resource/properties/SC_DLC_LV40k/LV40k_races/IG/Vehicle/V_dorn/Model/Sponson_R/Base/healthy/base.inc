
(Define "Base_Sponson_R"
	{bone Revolute "aux_turret1"
		{parameters "ID=aux_turret1;"}
		{Position 30.729	-79.6009	54.451}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/aux_turret1.ply"}
		{bone Revolute "gun_rot1"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				6.93056	0	0
			}
			(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_dorn/Model/Sponson_R/%args_sponson/Healthy/base.inc")
			("SR_%args_sponson")
			
			{bone "visor_sponson_r"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					7.74783	10.4135	0.0267181
				}
			}
		}
	}
)
