
(Define "Base_Rocket_Pod"
	{bone revolute "gun_rot1"
		{parameters "ID=gun1;"}
		{limits 10 -10}
		{speed 0.02}
		
		{Matrix34
			0	-1	0
			1	0	0
			0	0	1
			-27.5	30.8544	31.9506
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/gun_rot1.ply"}

		{bone revolute "ml_right"
			{parameters "ID=gun1;"}
			{limits 30 -10}
			{speed 0.02}
			
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				0	0	0
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/ml_right.ply"}
			{bone "barrel_ml_r05"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92774	-2.78115	8.43998
				}
			}
			{bone "barrel_ml_r03"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92774	4.02874	8.43997
				}
			}
			{bone "barrel_ml_r01"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92774	10.2548	8.43997
				}
			}
			{bone "barrel_ml_r00"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92773	8.89242	13.4438
				}
			}
			{bone "barrel_ml_r02"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92773	2.66638	13.4438
				}
			}
			{bone "barrel_ml_r04"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92773	-4.14351	13.4438
				}
			}
			{bone "fxlight_ml_r"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.17056	11.688	4.51059
				}
			}
			{bone "foresight_ml_r"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					34.5892	3.54227	10.8585
				}
			}
		}
	}
	{bone revolute "gun_rot2"
		{parameters "ID=gun2;"}
		{limits 10 -10}
		{speed 0.02}
		
		{Matrix34
			0	-1	0
			1	0	0
			0	0	1
			27.5	30.8544	31.9506
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/gun_rot2.ply"}
		
		{bone revolute "ml_left"
			{parameters "ID=gun2;"}
			{limits 30 -10}
			{speed 0.02}
			
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				0	0	0
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/ml_left.ply"}
			{bone "barrel_ml_l05"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92776	-4.14351	-13.429
				}
			}
			{bone "barrel_ml_l03"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92776	2.66638	-13.429
				}
			}
			{bone "barrel_ml_l01"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92776	8.89241	-13.429
				}
			}
			{bone "barrel_ml_l00"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92776	10.2548	-8.4701
				}
			}
			{bone "barrel_ml_l02"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92776	4.02875	-8.47011
				}
			}
			{bone "barrel_ml_l04"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.92776	-2.78114	-8.47009
				}
			}
			{bone "fxlight_ml_l"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					9.17057	11.688	-4.51055
				}
			}
			{bone "foresight_ml_l"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					34.5892	3.54226	-10.8585
				}
			}
		}
	}
)