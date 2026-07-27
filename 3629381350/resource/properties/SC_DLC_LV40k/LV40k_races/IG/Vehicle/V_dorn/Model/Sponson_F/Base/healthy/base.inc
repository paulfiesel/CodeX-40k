
(Define "Base_Sponson_F"
	{bone Revolute "hull_coaxial_h"
		{Position 49.1524	14.2627	71.8339}
		{bone Revolute "hull_coaxial_v"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				0	0	3.05176e-05
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/hull_coaxial_v.ply"}
			
			(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_dorn/Model/Sponson_F/%args_sponson/Healthy/base.inc")
			("SF_%args_sponson")
	
			{bone "visor_sponson_f"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					13.3659	8.24291	-0.00610924
				}
			}
		}
	}
)