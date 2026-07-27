
(Define "G_Punisher"
	{bone "mantlet_punisher"
		{parameters "ID=gun;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/mantlet_punisher.ply"}
		
		{bone "g_punisher"
			{parameters "ID=gun;"}
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				37.2901	-0.422729	-0.0391004
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/g_punisher.ply"}
		}
		{bone "foresight_punisher"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				62.0872	-0.228722	1.5572e-05
			}
		}
	}
)