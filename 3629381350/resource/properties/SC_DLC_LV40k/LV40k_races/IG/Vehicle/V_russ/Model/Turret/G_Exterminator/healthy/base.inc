
(Define "G_Exterminator"
	{bone "g_exterminator"
		{parameters "ID=gun;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/g_exterminator.ply"}

		{bone "foresight_exterminator"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				74.8072	0.468529	-0.500027
			}
		}
		{bone "barrel_ext00"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				71.4217	0.468529	5.65829
			}
		}
		{bone "barrel_ext01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				71.4217	0.468529	-6.28141
			}
		}
		{bone "g_ext_c1"
			{parameters "ID=gun;"}
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				42.5961	0.372765	5.61194
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/g_ext_c1.ply"}
		}
		{bone "g_ext_c2"
			{parameters "ID=gun;"}
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				42.596	0.374077	-6.29578
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/g_ext_c2.ply"}
		}
	}
)