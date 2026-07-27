
(Define "WL_HB"
	{bone revolute "gun_rot1"
		{parameters "ID=aux_turret1;"}
		{Orientation
			1	0	0
			0	0	1
			0	-1	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hbs_left.ply"}
		{bone "barrel_wl_hb00"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				31.4884	5.56567	7.36459
			}
		}
		{bone "barrel_wl_hb01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				31.4884	5.56569	-7.08205
			}
		}
		{bone "barrel_wl_hb02"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				38.0223	-5.44671	7.36459
			}
		}
		{bone "barrel_wl_hb03"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				38.0223	-5.44673	-7.08205
			}
		}
		{bone "fxshell_wl_hb01"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				12.3596	4.11792	-11.5144
			}
		}
		{bone "fxshell_wl_hb03"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				18.1212	-6.91623	-11.5144
			}
		}
		{bone "foresight_wl_hb"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				45.5204	1.43396	0.276108
			}
		}
		{bone "fxshell_wl_hb00"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				12.3596	4.11792	3.23375
			}
		}
		{bone "fxshell_wl_hb04"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				18.1212	-6.91623	3.23375
			}
		}
	}
)