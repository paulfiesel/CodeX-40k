
(Define "Base_Sponson_L"	
	{bone Revolute "aux_turret2"
		{parameters "ID=aux_turret2;"}
		{Position 30.729	79.6009	54.451}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/aux_turret2.ply"}
		{bone Revolute "gun_rot2"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				6.93059	0.000221252	0
			}
			(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_dorn/Model/Sponson_L/%args_sponson/Healthy/base.inc")
			("SL_%args_sponson")
			
			{bone "visor_sponson_l"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					7.74784	10.4135	-0.0714417
				}
			}
		}
	}
)