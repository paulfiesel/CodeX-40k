
(Define "WL_LC"
	{bone revolute "gun_rot1"
		{parameters "ID=aux_turret1;"}
		{Orientation
			1	0	0
			0	0	1
			0	-1	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_left.ply"}
		{bone "barrel_wl_lc01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.062	4.69853	-12.1983
			}
		}
		{bone "foresight_wl_lc"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.062	4.69854	0
			}
		}
		{bone "barrel_wl_lc00"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.062	4.69854	11.537
			}
		}
	}
)