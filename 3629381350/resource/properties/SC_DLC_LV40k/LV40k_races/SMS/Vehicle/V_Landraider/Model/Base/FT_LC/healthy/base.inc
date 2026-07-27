
(Define "FT_LC"	
	{bone revolute "turret"
		{parameters "ID=turret;"}
		{Matrix34
			0	-1	0
			1	0	0
			0	0	1
			12.3223	-56.725	90.5507
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/turret.ply"}
		
		{bone revolute "gun_rot"
			{parameters "ID=turret;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				-23.5393	-0.0540571	7.39305
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lascannon.ply"}
			{bone "foresight_t_lc"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					105.956	17.0836	0.391326
				}
				{bone "visor_main"}
			}
			{bone "barrel_t_lc00"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					83.856	17.3904	7.51885
				}
			}
			{bone "barrel_t_lc01"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					83.856	17.3904	-7.5902
				}
			}
			{bone "fx_t_lc"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					37.1686	30.4266	3.86355
				}
			}
		}
	}
)