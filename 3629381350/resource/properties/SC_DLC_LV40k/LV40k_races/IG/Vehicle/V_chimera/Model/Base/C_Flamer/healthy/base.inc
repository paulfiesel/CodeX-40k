
(Define "C_Flamer"
	{bone "hull_w"
		{bone "hw_flamer_base"
			{parameters "ID=body;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				0	0	0
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hw_flamer_base.ply"}
			{bone "fx_f_flamer"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					21.0192	-67.6447	49.8848
				}
			}
		}
		{bone "hw_gun_rot1"
			{Position 67.4135	20.5575	41.4885}
			
			{bone revolute "hull_gun_rot_h"
				{bone revolute "hull_gun_rot_v"
					{parameters "ID=body;"}
					{Orientation
						1	0	0
						0	0	1
						0	-1	0
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hw_flamer.ply"}
						
					{bone "hw_flamer"
						{bone "foresight_f_fl"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								13.1052	0.122105	-0.00490189
							}
						}
					}
				}
			}
		}
	}
)