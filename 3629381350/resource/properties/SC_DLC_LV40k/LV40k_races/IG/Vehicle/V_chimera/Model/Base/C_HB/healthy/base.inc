
(Define "C_HB"
	{bone "hull_w"
		{bone "hw_hb_base"
			{parameters "ID=body;"}
			{Position 69.7057	20.5507	40.7425}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hw_hb_base.ply"}
		}
		{bone "hw_gun_rot"
			{Position 69.7057	20.5507	40.7425}
			
			{bone revolute "hull_gun_rot_h"
				{bone revolute "hull_gun_rot_v"
					{parameters "ID=body;"}
					{Orientation
						1	0	0
						0	0	1
						0	-1	0
					}
					{bone "hw_hb"	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hw_hb.ply"}}
					
					{bone "foresight_f_hb"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							13.4835	-1.98806	-0.011692
						}
					}
				}
			}
		}
	}
)