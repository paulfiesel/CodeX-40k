
(Define "CT_stubber"
	{bone "w_stubber"
		{parameters "ID=gun;"}
		{Position -6.31286	-11.3222	-55.3386}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/w_stubber.ply"}
		{bone "stubber_model"
			{parameters "ID=gun;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				19.5171	11.3511	68.3782
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/stubber_model.ply"}
			{bone "stubber_barrel"
				{parameters "ID=gun;"}
				{Position 0	0	0}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/stubber_barrel.ply"}
			}
			{bone "foresight_stubber"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					36.8027	1.59425	0
				}
				{bone "barrel_stubber01"
					{Position -4.10583	-2.77281	0}
				}
				{bone "barrel_stubber00"
					{Position -4.10583	2.82349	0}
				}
				{bone "fxshell_stubber00"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-37.2348	4.37834	0
					}
				}
				{bone "fxshell_stubber01"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-37.2348	-4.27911	0
					}
				}
			}
		}
	}
)