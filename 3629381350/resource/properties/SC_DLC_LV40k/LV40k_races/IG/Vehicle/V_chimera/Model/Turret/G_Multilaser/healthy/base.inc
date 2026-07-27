
(Define "G_Multilaser"
	{bone revolute "gun_rot"
		{parameters "ID=gun;"}
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			17.1695	0.0121417	5.63082
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/gun_rot.ply"}
		
		{bone "w_multilas"
			{parameters "ID=gun;"}
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				-39.8184	-66.3117	-7.64257
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/w_multilas.ply"}
			{bone "foresight_multilaser"
				{Position 92.3952	-7.42439	66.8786}
			}
		}
	}
)