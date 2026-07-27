
(Define "Base_HKM_Chassis"
	{bone revolute "gun_rot2"
		{parameters "ID=body;"}
		{Position 40.3345	-18.0208	78.3244}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/gun_rot2.ply"}
		
		{bone revolute "w_hkm"
			{parameters "ID=body;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				0	0	0
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/w_hkm.ply"}
			{bone "foresight_rhino_hkm"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					12.1663	4.05133	-1.40902
				}
			}
			{bone "fxshell_hkm"
				{Matrix34
					-1	0	0
					0	0	1
					0	1	0
					-11.407	4.05133	-1.40902
				}
			}
		}
		{bone "visor40"
			{Position 0	0	11.3796}
		}
	}
)