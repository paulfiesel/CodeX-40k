
(Define "Base"
	{bone revolute "gun_rot1"
		{Orientation
			1	0	0
			0	0	1
			0	-1	0
		}
		{bone "heavybolter"	
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/heavybolter.ply"}
		}
		{bone "barrel_hb"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				15.734	2.2052	0.000950813
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/barrel_hb.ply"}
			{bone "foresight_hb"
				{Position 4.91601	0.000951767	0.0282555}
			}
		}
		{bone "fx_emp"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				-7.16316	7.39672	0
			}
		}
		{bone "chamber"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				4.03059	2.46031	-2.08237
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/chamber.ply"}
		}
		{bone "fxshell_hb"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				4.44991	2.51133	-2.61589
			}
		}
	}
)