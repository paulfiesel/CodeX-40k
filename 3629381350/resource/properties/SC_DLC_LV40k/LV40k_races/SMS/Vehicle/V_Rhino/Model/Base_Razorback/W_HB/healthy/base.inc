
(Define "Razorback_W_HB"
	{bone revolute "gun_rot"
		{parameters "ID=gun;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/razorback/gun_razorback_b.anm"} {speed -0.8}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/razorback/gun_razorback_b.anm"} {speed 0.8}}
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
		{bone "razorback_hb"
			{parameters "ID=gun;"}
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				34.3389	-73.7824	-3.83831
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/razorback/razorback_hb.ply"}
			{bone "foresight_hb"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					0	11.1697	88.7631
				}
				{bone "barrel_hb01"
					{Position -0.994178	-7.38189	0}
				}
				{bone "barrel_hb00"
					{Position -0.994178	7.38189	0}
				}
				{bone "fxshell_hb01"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-21.7239	-12.345	3.11586
					}
				}
				{bone "fxshell_hb00"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-21.7239	12.3425	3.11586
					}
				}
			}
		}
	}
)