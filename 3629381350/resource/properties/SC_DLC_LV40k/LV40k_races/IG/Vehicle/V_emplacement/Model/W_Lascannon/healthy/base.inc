
(Define "Base"
	{bone revolute "gun_rot1"
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			-0.481863	-0.000884295	0.0236168
		}
		{bone "lascannon"
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/lascannon.ply"}
		}
		{bone "foresight_las"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				28.9938	2.51649	0
			}
		}
		{bone "fx_emp"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				0.726262	7.81058	-0.00088548
			}
		}
	}
)