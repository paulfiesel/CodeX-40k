
(Define "G_Lascannon"	
	{bone revolute "gun_rot"
		{parameters "ID=gun;"}
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			17.1695	0.0121417	5.63082
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/gun_rot.ply"}
		
		{bone "w_lascannon"
			{parameters "ID=gun;"}
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				-39.8184	-66.3117	-7.64257
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/w_lascannon.ply"}
			{bone "foresight_lascannon"
				{Position 97.8285	-11.537	67.1737}
			}
		}
	}
)