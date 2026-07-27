
(Define "Base_Sponson_R"
	{bone revolute "sponson_r"
		{parameters "ID=aux_turret1;"}
		{Matrix34
			0	1	0
			-1	0	0
			0	0	1
			7.80973	-64.0811	51.0058
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/sponson_r.ply"}
		{bone revolute "gun_rot1"
			{Matrix34
				0	-1	0
				0	0	1
				-1	0	0
				0	-8.78188	-1.6231
			}
			{bone "visor_sponson_r"
				{Matrix34
					0.998742	-0.0501398	0
					0	0	-1
					0.0501398	0.998742	0
					1.40839	13.1173	1.52588e-05
				}
			}
			(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_Russ/Model/Sponson_R/%args_sponson/Healthy/base.inc")
			("SR_%args_sponson")
		}
	}
)