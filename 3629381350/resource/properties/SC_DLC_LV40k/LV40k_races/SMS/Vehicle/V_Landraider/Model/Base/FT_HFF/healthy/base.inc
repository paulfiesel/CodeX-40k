
(Define "FT_HFF"	
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
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/heavy_flamers.ply"}
			{bone "foresight_t_hff"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					105.956	17.0836	0.391326
				}
				{bone "visor_main"}
			}
			{bone "barrel_t_hff00"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					87.5033	16.8675	6.46191
				}
			}
			{bone "barrel_t_hff01"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					87.5033	16.8675	-6.71493
				}
			}
			{bone "fx_t_hff01"
				{Matrix34
					0.771575	0.636139	0
					0	0	-1
					-0.636139	0.771575	0
					88.8287	6.70562	-6.82983
				}
			}
			{bone "fx_t_hff00"
				{Matrix34
					0.771575	0.636139	0
					0	0	-1
					-0.636139	0.771575	0
					88.8287	6.70562	6.75682
				}
			}
		}
	}
)