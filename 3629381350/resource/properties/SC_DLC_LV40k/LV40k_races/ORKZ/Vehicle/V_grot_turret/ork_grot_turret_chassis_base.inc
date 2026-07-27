
(Define "Skeleton"
	{Skeleton
		{animation
			{sequence "idle" 			{speed 0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grot_turret/Animations/idle"}}
		}
		{bone revolute "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "bone_main_base"
				{parameters "ID=body;"}
				{Position -0.539709	0.276187	4.81567}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grot_turret_Chassis/bone_main_base.ply"}
				{bone "bone_05"
					{parameters "ID=body;"}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-6.58025	-2.2027	12.666
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grot_turret_Chassis/bone_05.ply"}
				}
				{bone "bone_03"
					{parameters "ID=body;"}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						1.04157	0.236768	13.9395
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grot_turret_Chassis/bone_03.ply"}
				}
				{bone "bone_02"
					{parameters "ID=body;"}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						6.60882	-9.40564	4.92346
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grot_turret_Chassis/bone_02.ply"}
				}
				{bone "fx_eyes1"
					{Position 7.16223	-3.13038	4.84861}
				}
				{bone "fx_eyes2"
					{Position 6.07678	-6.00885	4.72922}
				}
				{bone "fx_eyes3"
					{Position 5.19617	3.44066	6.21975}
				}
				{bone "fx_eyes4"
					{Position 3.86841	6.31913	6.33914}
				}
				{bone "bone_01"
					{parameters "ID=body;"}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						6.77352	9.91594	4.42027
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grot_turret_Chassis/bone_01.ply"}
				}
				{bone "fxfire3"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						0.276186	0.540921	8.26118
					}
				}
				{bone "fxsmoke1"
					{Matrix34
						-0.0542842	0	0.998526
						0	1	0
						-0.998526	0	-0.0542842
						-7.37307	-2.37494	27.4076
					}
				}
				{bone "visor1"
					{Position 0.276185	0.539711	24.7119}
				}
				{bone "gun_rot"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						5.29052	0.18013	5.98953
					}
					{bone "gun_shootas"
						{parameters "ID=body;"}
						{Position 0	-5.80162	0}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grot_turret_Chassis/gun_shootas.ply"}
						{bone revolute "foresight3"
							{Matrix34
								0	-1	0
								0	0	1
								-1	0	0
								1.24298	-21.9188	-0.0639753
							}
						}
						{bone "fxshell"
							{Matrix34
								-1	0	0
								0	-1	0
								0	0	1
								-2.71089	-2.12673	1.35933
							}
						}
					}
					{bone "visor2"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0.123186	-8.95782	4.53979
						}
					}
				}
			}
		}
	}
	
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grot_turret/Model/Base/+base_vol.inc")
	
	%args_vol
)