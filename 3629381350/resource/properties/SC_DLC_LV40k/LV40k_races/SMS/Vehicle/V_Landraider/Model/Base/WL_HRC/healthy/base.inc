
(Define "WL_HRC"
	{bone revolute "gun_rot1"
		{parameters "ID=aux_turret1;"}
		{Orientation
			1	0	0
			0	0	1
			0	-1	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hrc_left.ply"}
		{bone "foresight_wl_hrc"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				45.5204	-6.27708	-4.44141
			}
		}
		{bone "barrel_wl_hrc01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	11.0077	-10.409
			}
		}
		{bone "fxshell_wl_hrc01"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				18.1212	12.3901	-14.8413
			}
		}
		{bone "fxshell_wl_hrc23"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				18.1212	-4.92867	-14.8413
			}
		}
		{bone "barrel_wl_hrc03"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	-6.28929	-10.409
			}
		}
		{bone "fxshell_wl_hrc45"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				18.1212	-22.0357	-14.8413
			}
		}
		{bone "barrel_wl_hrc05"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	-23.3963	-10.409
			}
		}
		{bone "barrel_wl_hrc04"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	-23.3963	1.7599
			}
		}
		{bone "barrel_wl_hrc02"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	-6.28928	1.7599
			}
		}
		{bone "barrel_wl_hrc00"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				40.7084	11.0077	1.7599
			}
		}
	}
)