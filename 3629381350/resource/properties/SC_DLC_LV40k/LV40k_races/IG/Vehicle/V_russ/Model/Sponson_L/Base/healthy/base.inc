
(Define "Base_Sponson_L"
	{bone revolute "sponson_l"
		{parameters "ID=aux_turret3;"}
		{Matrix34
			0	1	0
			-1	0	0
			0	0	1
			7.80974	64.0811	51.0058
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/sponson_l.ply"}
		{bone revolute "gun_rot3"
			{Matrix34
				0	-1	0
				0	0	1
				-1	0	0
				-7.62939e-05	-8.78187	-1.6231
			}
			{bone "visor_sponson_l"
				{Matrix34
					0.998742	-0.0501399	0
					0	0	-1
					0.0501399	0.998742	0
					1.40839	13.1173	3.05176e-05
				}
			}
			(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_Russ/Model/Sponson_L/%args_sponson/Healthy/base.inc")
			("SL_%args_sponson")
		}
	}
)