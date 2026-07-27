
(Define "Carrier_Gunwagon"
	{bone "carrier"
		{parameters "ID=body;"}
		{Matrix34
			0	1	0
			-1	0	0
			0	0	1
			-13.3858	0	57.0276
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_carrier/carrier.ply"}
		{bone revolute "gun_rot"
			{parameters "ID=gun;"}
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0.0184214	-47.9091	-2.42734
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_carrier/gun_rot.ply"}
			{bone revolute "gun"
				{parameters "ID=gun;"}
				{animation
					{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/gun_carrier_b.anm"} {speed -0.6}}
				}
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					0.329784	-0.096302	4.69253
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_carrier/gun.ply"}
				{bone "foresight3"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						25.1185	4.66394	-0.0778802
					}
				}
				{bone "shooter00"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						25.1185	4.66394	2.25326
					}
				}
				{bone "shooter01"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						25.1185	4.66394	-2.3138
					}
				}
				{bone "fxshell00"
					{Matrix34
						0	0	1
						1	0	0
						0	1	0
						-6.34568	5.13191	6.54517
					}
				}
				{bone "fxshell01"
					{Matrix34
						0	0	-1
						-1	0	0
						0	1	0
						-6.34568	5.13191	-6.69205
					}
				}
			}
			{bone "gunner"
				{Position -29.602	-0.0184229	-18.5727}
			}
			{bone "visor2"
				{Position -6.40401	-0.0184228	15.8637}
			}
		}
		{bone "fxfire3"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0.0184217	-40.3229	-11.5163
			}
		}
		{bone "seat01"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0.946426	21.3756	-27.5
			}
		}
		{bone "seat02"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				-19.5641	21.3756	-27.5
			}
		}
		{bone "seat03"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				20.23	21.3756	-27.5
			}
		}
		{bone "seat05"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				20.23	2.11233	-27.5
			}
		}
		{bone "seat04"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				-19.5641	2.11234	-27.5
			}
		}
		{bone "seat06"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0.946425	2.11233	-27.5
			}
		}
		{bone "seat07"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				-19.5641	-18.2559	-27.5
			}
		}
		{bone "seat08"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				20.23	-17.9428	-27.5
			}
		}
	}
)