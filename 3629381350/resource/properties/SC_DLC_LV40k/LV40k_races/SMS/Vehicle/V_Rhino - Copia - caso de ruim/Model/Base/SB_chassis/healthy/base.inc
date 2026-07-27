
(Define "Base_SB_Chassis"
	{bone revolute "gun_rot1"
		{parameters "ID=body;"}
		{Position 41.6296	-17.7203	77.6921}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/gun_rot1.ply"}
		
		{bone revolute "w_stormbolter_auto"
			{parameters "ID=body;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				0	0	0
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/w_stormbolter_auto.ply"}
			{bone "fxshell_rhino_sb2"
				{Matrix34
					0	0	1
					1	0	0
					0	1	0
					-1.56496	4.30645	-3.46623
				}
			}
			{bone "fxshell_rhino_sb1"
				{Matrix34
					0	0	-1
					-1	0	0
					0	1	0
					-1.56496	4.30644	3.62965
				}
			}
			{bone "foresight_rhino_sb"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					11.2315	3.62663	0
				}
			}
		}
		{bone "visor40"
			{Position -1.29509	-0.300503	12.012}
		}
	}
)