
(Define "Base_Damocles"
	{bone "damocles_base"
		{parameters "ID=body;"}
		{Orientation
			0	1	0
			-1	0	0
			0	0	1
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/damocles/damocles_base.ply"}
		
		{bone revolute "turret"
			{parameters "ID=turret;"}
			{Position 0.00530605	44.6226	73.2823}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/damocles/turret.ply"}
			{bone "antena"
				{parameters "ID=turret;"}
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					3.47809	12.3248	31.6617
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/damocles/antena.ply"}
				{bone "fx_damocles0"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						0	12.5062	40.5776
					}
				}
			}
			{bone "fx_damocles2"
				{Matrix34
					0	-1	0
					0	0	1
					-1	0	0
					18.0518	-14.447	14.3403
				}
			}
			{bone "fx_damocles3"
				{Matrix34
					0	-1	0
					0	0	1
					-1	0	0
					16.2984	-14.4725	9.86665
				}
			}
			{bone "fx_damocles5"
				{Matrix34
					0	-1	0
					0	0	1
					-1	0	0
					-10.3371	-24.4472	11.5303
				}
			}
			{bone "fx_damocles4"
				{Matrix34
					0	-1	0
					0	0	1
					-1	0	0
					-14.3622	3.60574	19.9556
				}
			}
			{bone "fx_damocles1"
				{Matrix34
					0	-1	0
					0	0	1
					-1	0	0
					-18.7223	-23.8957	10.4254
				}
			}	
			{bone revolute "foresight_damocles"
				{Matrix34
					0	-1	0
					0	0	1
					-1	0	0
					3.47808	-28.2528	44.1679
				}
			}
		}
	}
)