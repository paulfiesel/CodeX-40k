
(Define "WR_HRC"
	{bone revolute "gun_rot2"
		{parameters "ID=aux_turret2;"}
		{Orientation
			1	0	0
			0	0	1
			0	-1	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hrc_right.ply"}
		{bone "fxshell_wr_hrc045"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				18.1212	-22.0357	15.4717
			}
		}
		{bone "fxshell_wr_hrc023"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				18.1212	-4.92867	15.4717
			}
		}
		{bone "fxshell_wr_hrc01"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				18.1212	12.3901	15.4717
			}
		}
		{bone "foresight_wr_hrc"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				45.5204	-6.27708	4.09389
			}
		}
		{bone "barrel_wr_hrc05"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	-23.3963	-1.87374
			}
		}
		{bone "barrel_wr_hrc04"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	-23.3963	10.2952
			}
		}
		{bone "barrel_wr_hrc03"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	-6.28929	-1.87374
			}
		}
		{bone "barrel_wr_hrc02"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	-6.28928	10.2952
			}
		}
		{bone "barrel_wr_hrc01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	11.0077	-1.87374
			}
		}
		{bone "barrel_wr_hrc00"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	11.0077	10.2952
			}
		}
	}
)