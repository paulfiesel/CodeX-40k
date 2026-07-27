
(Define "Razorback_W_Whirlwind"
	{bone revolute "gun_rot"
		{parameters "ID=gun;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Whirlwind/gun_whirlwind_b.anm"} {speed -0.8}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Whirlwind/gun_whirlwind_b.anm"} {speed 0.8}}
		}
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			0.80299	0.163846	22.9134
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/razorback/whirlwind.ply"}
		{bone "visor6"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				-1.24621	25.2983	0.169146
			}
		}
		{bone "fx_whirlwind1"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				32.7716	9.72228	1.64822
			}
		}
		{bone "fx_whirlwind2"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				32.7716	12.5577	4.25462
			}
		}
		{bone "fx_whirlwind3"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				33.1331	12.1598	-2.55623
			}
		}
		{bone "foresight_whirlwind"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				43.8196	2.29784	1.64822
			}
			{bone "barrel_ww05"
				{Position -17.0636	21.9338	-6.83572}
			}
			{bone "barrel_ww04"
				{Position -17.0636	9.7019	-6.83572}
			}
			{bone "barrel_ww03"
				{Position -17.0636	-6.74929	-6.83572}
			}
			{bone "barrel_ww02"
				{Position -17.0636	-18.9737	-6.83572}
			}
			{bone "barrel_ww01"
				{Position -17.0636	16.0854	3.5214}
			}
			{bone "barrel_ww00"
				{Position -17.0636	-13.1303	3.5214}
			}
		}
		{bone "fxshell_wwr"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				-34.8838	0.152786	11.9802
			}
		}
		{bone "fxshell_wwl"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				-34.8838	0.152779	-11.6419
			}
		}
	}
)