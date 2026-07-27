
(Define "Predator_Turret_Pintle"
	{bone revolute "pintle_predator"
		{parameters "ID=turret;"}
		{Matrix34
			0	1	0
			-1	0	0
			0	0	1
			-10.6815	15.0153	19.6744
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/pintle_predator.ply"}
		{bone "gunner1"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0.384676	3	-25
			}
		}
		{bone revolute "gun_rot3"
			{Matrix34
				0	-1	0
				0	0	1
				-1	0	0
				0.384666	-21.6688	8.69921
			}
			
			{bone "visor_predator_pintle"}
			
			{bone "predator_pintle"
				{parameters "ID=turret;"}
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					0	0	0
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/predator_pintle.ply"}
				
				{bone "fxshell_pintle1"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-0.909593	-3.47045	6.20444
					}
				}
				{bone "fxshell_pintle2"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-0.909593	3.70703	6.20445
					}
				}
				{bone "foresight_pintle"
					{Position 11.6221	0	5.28375}
				}
			}
		}
	}
)