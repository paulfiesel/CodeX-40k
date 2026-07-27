
(Define "WR_HFF"
	{bone revolute "gun_rot2"
		{parameters "ID=aux_turret2;"}
		{Orientation
			1	0	0
			0	0	1
			0	-1	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hff_right.ply"}
		{bone "fx_wr_hff"
			{Matrix34
				0.80079	0.598945	0
				0	0	-1
				-0.598945	0.80079	0
				70.8341	-15.1936	8.04366
			}
		}
		{bone "foresight_wr_hff"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				72.2118	-2.51452	8.04366
			}
		}
		{bone "barrel_wr_hff01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.5909	-7.75578	8.04366
			}
		}
		{bone "barrel_wr_hff00"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				69.5909	2.72562	8.04366
			}
		}
	}
)