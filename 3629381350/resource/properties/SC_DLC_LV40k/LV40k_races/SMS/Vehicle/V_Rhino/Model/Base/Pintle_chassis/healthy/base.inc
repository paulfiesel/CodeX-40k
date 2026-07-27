
(Define "Base_Pintle_Chassis"
	{bone "rhino_pintle_mount_base"
		{Matrix34
			0	1	0
			-1	0	0
			0	0	1
			40.5449	19.4153	71.4763
		}
		{bone revolute "rhino_pintle"
			{speed 0.06}
			
			{parameters "ID=body;"}
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0	0	0
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_pintle.ply"}
			{bone "gunner"
				{Position
					-1.5	-0.165335	-17.1
				}
			}
			{bone revolute "gun_rot3"
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					21.5598	-0.165325	13.7024
				}
				{bone "rhino_pintle_stormbolter"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						0	0	0
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_pintle_stormbolter.ply"}	
					{bone "foresight_pintle"
						{Position 11.6735	-1.14441e-05	5.34273}
					}
					{bone "fxshell_pintle1"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-1.19194	3.17646	6.28307
						}
					}
					{bone "fxshell_pintle2"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-1.19194	-2.75064	6.28307
						}
					}
				}
				{bone "visor3"
					{Position
						-1.16053	12.1586	0
					}
				}
			}
		}
	}
)