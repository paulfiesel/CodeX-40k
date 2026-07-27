
(Define "FT_HB"	
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
				-23.5393	-0.0540571	7.39306
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/heavy_bolter.ply"}
			{bone "fxshell_t_hb01"
				{Matrix34
					0	0	-1
					-1	0	0
					0	1	0
					37.0706	14.2581	-14.2954
				}
			}
			{bone "fxshell_t_hb00"
				{Matrix34
					0	0	1
					1	0	0
					0	1	0
					37.0706	14.2581	14.3281
				}
			}
			{bone "barrel_t_hb01"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					62.7375	12.9549	-6.71492
				}
			}
			{bone "barrel_t_hb00"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					62.7375	12.9549	7.65583
				}
			}
			{bone "foresight_t_hb"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					81.1902	17.0836	0.391341
				}
				{bone "visor_main"}
			}
		}
	}
)