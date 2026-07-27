
(Define "WR_LC"
	{bone revolute "gun_rot2"
		{parameters "ID=aux_turret1;"}
		{Orientation
			1	0	0
			0	0	1
			0	-1	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_right.ply"}
		{bone "barrel_wr_lc00"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.062	4.69854	12.0747
			}
		}
		{bone "barrel_wr_lc01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.062	4.69853	-11.6606
			}
		}
		{bone "foresight_wr_lc"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.062	4.69854	0.537704
			}
		}
	}
)