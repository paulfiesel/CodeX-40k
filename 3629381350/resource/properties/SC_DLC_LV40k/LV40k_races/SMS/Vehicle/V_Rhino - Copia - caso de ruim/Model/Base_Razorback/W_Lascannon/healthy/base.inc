
(Define "Razorback_W_Lascannon"
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
		{bone "razorback_lascannon"
			{parameters "ID=gun;"}
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				34.3389	-73.7824	-3.83831
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/razorback/razorback_lascannon.ply"}
			
			{bone "foresight_lascannon"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					0	-19.2325	90.4944
				}
				{bone "barrel_lsc01"
					{Position -0.994179	6.77165	0}
				}
				{bone "barrel_lsc00"
					{Position -0.994179	-6.76379	0}
				}
			}
		}
	}
)