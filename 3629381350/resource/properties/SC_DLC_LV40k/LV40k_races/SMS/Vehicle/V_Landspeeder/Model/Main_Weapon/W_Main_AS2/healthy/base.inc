
(Define "W_Main_AS2"
	{bone "assault_cannon"
		{parameters "ID=gun;"}
		{Matrix34
			0	0	-1
			-1	0	0
			0	1	0
			0	0	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/assault_cannon.ply"}
		{bone "fxshell_as2"
			{Position 1.64964	3.23482	-6.46875}
		}
		{bone "foresight_as2"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0	-29.9084	-6.46875
			}
		}
		{bone "as2_rotor"
			{parameters "ID=gun;"}
			{Position 0.00346985	-22.2133	-6.54705}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/as2_rotor.ply"}
		}
	}
)