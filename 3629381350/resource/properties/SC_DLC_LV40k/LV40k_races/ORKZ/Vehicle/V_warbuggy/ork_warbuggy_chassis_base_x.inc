
(Define "Skeleton"
	{Skeleton
		{bone "basis"
			{parameters "SteerMax=30;WheelRadius=0.4;"}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "emit2"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-1.9685	-49.2126	0
				}
			}
			{bone "emit1"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-1.9685	49.2126	0
				}
			}
			{bone "pivot_front"
				{Position 23.2087	0	12.0058}
				{bone revolute "steer_l"
					{Matrix34
						-1	0	0
						0	1	0
						0	0	-1
						0.00128555	22.4565	0
					}
					{bone prizmatic "suspension_l1"
						{parameters "speed2=2;"}
						{limits -0.05 0.1}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							0	1.14441e-05	0
						}
						{bone revolute "wheelleft1"
							{parameters "ID=wheelleft1;Radius=0.5;"}
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbuggy_chassis/wheelleft1.ply"}
						}
					}
					{bone "fxtracel1"
						{Matrix34
							1	0	0
							0	-1	0
							0	0	-1
							0	0	12.0058
						}
					}
				}
				{bone revolute "steer_r"
					{Matrix34
						-1	0	0
						0	1	0
						0	0	-1
						0	-22.4565	0
					}
					{bone prizmatic "suspension_r1"
						{parameters "speed2=2;"}
						{limits -0.05 0.1}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							0	0	0
						}
						{bone revolute "wheelright1"
							{parameters "ID=wheelright1;Radius=0.5;"}
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbuggy_chassis/wheelright1.ply"}
						}
					}
					{bone "fxtracer1"
						{Matrix34
							1	0	0
							0	-1	0
							0	0	-1
							0	0	12.0058
						}
					}
				}
			}
			{bone "pivot_back"
				{Position -23.3679	0	0}
				{bone prizmatic "suspension_r2"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position 0	-25.3872	14.6547}
					{bone revolute "wheelright2"
						{parameters "ID=wheelright2;Radius=0.6;"}
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbuggy_chassis/wheelright2.ply"}
					}
				}
				{bone prizmatic "suspension_l2"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position 0	25.3872	14.6547}
					{bone revolute "wheelleft2"
						{parameters "ID=wheelleft2;Radius=0.6;"}
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbuggy_chassis/wheelleft2.ply"}
					}
				}
				{bone "fxtracer2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						0	-25.3872	0
					}
				}
				{bone "fxtracel2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						0	25.3872	0
					}
				}
			}

			{bone "body"
				{parameters "ID=body;"}
				{animation
					{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_warbuggy/Animations/body_b.anm"} {speed 0.6}}
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbuggy_chassis/body.ply"}
				{bone "shields"
					{parameters "ID=body;"}
					{Position 0	0	-1.9685}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbuggy_chassis/shields.ply"}
				}
				{bone "driver"
					{Position 13.0967	0	18.685}
				}
				{bone "fxfire1"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						-26.8665	-0.122147	24.8453
					}
				}
				{bone "fxfire4"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						19.9382	-0.122147	21.5596
					}
				}
				{bone "fxsmoke1"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						-47.6626	-16.2695	78.7893
					}
				}
				{bone "engine"
					{parameters "ID=engine;"}
					{animation
						{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_warbuggy/Animations/engine_b.anm"} {speed 0.6}}
					}
					{Matrix34
						0	0	1
						-1	0	0
						0	-1	0
						-28.9214	-4.71937	19.685
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbuggy_chassis/engine.ply"}
				}
				{bone revolute "turret"
					{parameters "ID=turret;"}
					{animation
						{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_warbuggy/Animations/turret_b.anm"} {speed 0.6}}
					}
					{Position -4.658	-0.117548	19.2736}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbuggy_chassis/turret.ply"}
					{bone revolute "gun_rot"
						{parameters "ID=turret;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							18.134	0.0338789	27.2431
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbuggy_chassis/gun_rot.ply"}
						
						%args_role
					}
					{bone "commander"
						{Position -8.802	0.117547	0.411388}
					}
					{bone "fxfire3"
						{Matrix34
							0	0	1
							0	1	0
							-1	0	0
							1.4958	-0.00459965	8.71547
						}
					}
					{bone "visor1"
						{Position 22.1404	0.11755	39.1505}
					}
				}
			}
		}
	}

	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_warbuggy/Model/base_Warbuggy/+base_vol.inc")
	
	%args_vol
)