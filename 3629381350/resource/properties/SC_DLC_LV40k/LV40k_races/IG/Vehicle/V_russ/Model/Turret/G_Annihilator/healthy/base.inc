
(Define "G_Annihilator"
	{bone "g_lascannon"
		{parameters "ID=gun;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/g_lascannon.ply"}

		{bone "foresight_lascannon"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				74.8072	-0.251389	1.5572e-05
			}
		}
		{bone "barrel_las00"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				71.4217	-0.251389	-5.74999
			}
		}
		{bone "barrel_las01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				71.4217	-0.251389	5.75001
			}
		}
	}
)