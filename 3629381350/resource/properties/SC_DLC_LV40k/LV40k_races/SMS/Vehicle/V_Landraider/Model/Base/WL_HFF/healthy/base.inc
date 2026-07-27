
(Define "WL_HFF"
	{bone revolute "gun_rot1"
		{parameters "ID=aux_turret1;"}
		{Orientation
			1	0	0
			0	0	1
			0	-1	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hff_left.ply"}
		{bone "barrel_wl_hff00"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.5909	2.72562	-8.11238
			}
		}
		{bone "foresight_wl_hff"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				72.2119	-2.51452	-8.11237
			}
		}
		{bone "barrel_wl_hff01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.5909	-7.75578	-8.11238
			}
		}
		{bone "fx_wl_hff"
			{Matrix34
				0.80079	0.598945	0
				0	0	-1
				-0.598945	0.80079	0
				70.8341	-15.1936	-8.11237
			}
		}
	}
)