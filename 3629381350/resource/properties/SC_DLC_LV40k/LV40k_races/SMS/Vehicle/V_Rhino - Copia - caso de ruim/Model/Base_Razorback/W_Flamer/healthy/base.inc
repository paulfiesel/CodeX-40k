
(Define "Razorback_W_Flamer"
	{bone revolute "gun_rot"
		{parameters "ID=gun;"}
		{animation
;}//			{sequence "break" {file "gun_b.anm"} {speed 0.7}}
		}
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			10.2837	-3.84363	0.500175
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/razorback/gun_rot.ply"}

		{bone "fx_razorback1"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				8.04422	29.9577	-3.11727
			}
		}
		{bone "visor5"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				8.04422	28.9579	1.67836
			}
		}
		{bone "razorback_flamers"
			{parameters "ID=gun;"}
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				34.3389	-73.7824	-3.83831
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/razorback/razorback_flamers.ply"}
			
			{bone "foresight_flamer"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					0	-7.87117	93.8137
				}
				{bone "barrel_flamer00"
					{Position -0.994179	6.59449	0}
				}
				{bone "barrel_flamer01"
					{Position -0.994179	-6.59449	0}
				}
				{bone "fx_flamer00"
					{Matrix34
						0.748459	0	0.663181
						0	1	0
						-0.663181	0	0.748459
						-0.30879	-6.59449	-7.64635
					}
				}
				{bone "fx_flamer01"
					{Matrix34
						0.748459	0	0.663181
						0	1	0
						-0.663181	0	0.748459
						-0.30879	6.59449	-7.64635
					}
				}
			}
		}
	}
)