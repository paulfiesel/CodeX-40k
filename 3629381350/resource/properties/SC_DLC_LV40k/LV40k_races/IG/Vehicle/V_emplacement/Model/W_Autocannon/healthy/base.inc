
(Define "Base"
	{bone revolute "gun_rot1"
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			-0.481864	-0.727932	0.0236187
		}
		{bone "autocannon"
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/autocannon.ply"}
		}
		{bone "ammo"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				-3.32885	4.67154	-3.12659
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/ammo.ply"}
		}
		{bone "barrel_ac"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				22.7675	3.52967	-0.786917
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/barrel_ac.ply"}
			{bone "foresight_ac"
				{Position 13.5666	0	0}
			}
		}
		{bone "fxshell_ac"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				4.07533	2.60283	-3.05461
			}
		}
		{bone "fx_emp"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				1.47501	8.86342	-0.727934
			}
		}
	}
)