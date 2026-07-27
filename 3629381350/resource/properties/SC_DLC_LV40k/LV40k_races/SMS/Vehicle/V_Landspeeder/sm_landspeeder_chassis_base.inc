
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Landspeeder/animations/anm.ext"}

		{bone revolute "basis"
			{limits 0 -0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			
			{Bone "displace"
				{Position 0 0 5}
				
				{bone "body"
					{parameters "ID=body;"}
					{Orientation
						0	1	0
						-1	0	0
						0	0	1
					}
					{bone "Role"		;{}			
						%args_role
					}				
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/body.ply"}
					{bone "landspeeder_fins_folded"
						{parameters "ID=body;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/landspeeder_fins_folded.ply"}
					}
					{bone "landspeeder_fins_unfolded"
						{parameters "ID=body;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/landspeeder_fins_unfolded.ply"}
					}
					{bone "details_antenna"
						{parameters "ID=body;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/details_antenna.ply"}
						{bone "headlight1"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								12.7523	-32.0785	29.7539
							}
						}
					}
					{bone "pilot_shield"
						{parameters "ID=body;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/pilot_shield.ply"}
					}
					{bone "commander"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-12	12	19.9563
						}
					}
					{bone "driver"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							14.5455	12	19.9563
						}
					}
					{bone "fxfire4"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0	8.72252	23.3895
						}
					}
					{bone "fxfire3"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0	-20.0437	20.0662
						}
					}
					{bone "fxfire1"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0	36.406	41.4841
						}
					}
					{bone "fxsmoke1"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-12.0195	61.8857	28.574
						}
					}
					{bone "fxsmoke2"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							12.0196	61.8857	28.574
						}
					}
					{bone "visor_Driver"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							11.5033	-9.01274	39.4451
						}
					}
				}
				{bone "emit2"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-5	-60	0
					}
				}
				{bone "emit1"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-5	60	0
					}
				}
				{bone "visor_around"
					{Position -12.5	0	100}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/V_landspeeder/Model/base/+base_vol.inc")
	
	%args_vol
)