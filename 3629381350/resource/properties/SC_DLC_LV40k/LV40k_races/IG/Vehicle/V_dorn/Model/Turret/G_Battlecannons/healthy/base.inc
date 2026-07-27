
(Define "G_Battlecannons"
	{bone "w_twin"
		{parameters "ID=gun;"}
		{Matrix34
			1	0	0
			0	-1	0
			0	0	-1
			0	0	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/w_twin.ply"}
		{bone "foresight_bc"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				94.615	0.983459	0
			}
		}
		{bone "barrel_bc00"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				86.7113	0.341255	-10.3621
			}
		}
		{bone "barrel_bc01"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				86.7113	0.341255	10.362
			}
		}
	}
)