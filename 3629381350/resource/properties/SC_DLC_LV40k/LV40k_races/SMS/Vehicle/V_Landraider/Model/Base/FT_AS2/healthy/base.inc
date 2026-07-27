
(Define "FT_AS2"	
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
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/assault_cannons.ply"}
			{bone "as2_00"
				{parameters "ID=turret;"}
				{Matrix34
					0	0	-1
					-1	0	0
					0	1	0
					63.1335	16.8773	7.15161
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/as2_00.ply"}
			}
			{bone "as2_01"
				{parameters "ID=turret;"}
				{Matrix34
					0	0	-1
					-1	0	0
					0	1	0
					63.1335	16.8773	-6.71216
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/as2_01.ply"}
			}
			{bone "fxshell_t_as2_01"
				{Matrix34
					0	0	-1
					-1	0	0
					0	1	0
					37.0706	14.2581	-14.2954
				}
			}
			{bone "fxshell_t_as2_00"
				{Matrix34
					0	0	1
					1	0	0
					0	1	0
					37.0706	14.2581	14.3281
				}
			}
			{bone "barrel_t_as2_01"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					75.9835	17.2978	-6.71493
				}
			}
			{bone "barrel_t_as2_00"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					75.9835	17.2978	7.2708
				}
			}
			{bone "foresight_t_as2"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					94.4363	17.0836	0.391341
				}
				{bone "visor_main"}
			}
		}
	}
)