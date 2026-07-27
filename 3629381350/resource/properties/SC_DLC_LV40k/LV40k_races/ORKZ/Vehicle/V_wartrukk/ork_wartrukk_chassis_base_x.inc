;Exported by: GUSTAVO
;Date:        Tue Dec  2 16:58:56 2025
;File:        E:\GEM Projects\40k Last Victim\+Vehicles\+GOH\Trukk DOW2\Wartrukk.max

(Define "Skeleton"
	{Skeleton
		{bone "basis"
			{parameters "SteerMax=30;WheelRadius=0.4;"}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "emit7"
				{parameters "Group=commander;"}
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-39.3701	-59.0551	0
				}
			}
			{bone "emit3"
				{parameters "Group=driver;"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-39.3701	59.0551	0
				}
			}
			{bone "emit1"
				{parameters "Group=commander;"}
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					0	-59.0551	0
				}
			}
			{bone "emit2"
				{parameters "Group=driver;"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					0	59.0551	0
				}
			}
			{bone "pivot_front"
				{Position 53.6614	0	11.3189}
				{bone "steer_fork"
					{Position 0.746056	-11.1696	5.41322}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/steer_fork.ply"}
				}
				{bone revolute "steer_l"
					{Matrix34
						-1	0	0
						0	1	0
						0	0	-1
						0	27.0669	-0.0319796
					}
					{bone prizmatic "suspension_l1"
						{parameters "speed2=2;"}
						{limits -0.05 0.1}
						{Orientation
							-1	0	0
							0	1	0
							0	0	-1
						}
						{bone revolute "wheel1l"
							{parameters "ID=wheelleft1;"}
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/wheel1l.ply"}
						}
					}
					{bone "fxtracel1"
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							0	-1.90735e-05	11.2869
						}
					}
				}
				{bone revolute "steer_r"
					{Matrix34
						-1	0	0
						0	1	0
						0	0	-1
						-0.00780487	-24.7294	-0.0319786
					}
					{bone prizmatic "suspension_r1"
						{parameters "speed2=2;"}
						{limits -0.05 0.1}
						{Orientation
							-1	0	0
							0	1	0
							0	0	-1
						}
						{bone revolute "wheel1r"
							{parameters "ID=wheelright1;"}
							{Orientation
								1	0	0
								0	0	-1
								0	1	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/wheel1r.ply"}
						}
					}
					{bone "fxtracer1"
						{Matrix34
							1	0	0
							0	1	0
							0	0	1
							0	0	11.2869
						}
					}
				}
			}
			{bone "pivot_back"
				{Position -27.0497	0	11.3189}
				{bone "fxtracel2"
					{Position 16.488	29.4404	-11.3189}
				}
				{bone "fxtracel3"
					{Position -17.8279	30.719	-11.3189}
				}
				{bone "fxtracer2"
					{Position 16.2259	-27.4863	-11.3189}
				}
				{bone "fxtracer3"
					{Position -17.8173	-26.892	-11.3189}
				}
				{bone prizmatic "suspension_l2"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position 16.488	29.4404	3.42137}
					{bone revolute "wheel2l"
						{parameters "ID=wheelleft2;"}
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/wheel2l.ply"}
					}
				}
				{bone prizmatic "suspension_l3"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position -17.8279	30.719	3.09777}
					{bone revolute "wheel3l"
						{parameters "ID=wheelleft3;"}
						{Orientation
							1	0	0
							0	0	-1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/wheel3l.ply"}
					}
				}
				{bone prizmatic "suspension_r2"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position 16.2259	-27.4863	3.15987}
					{bone revolute "wheel2r"
						{parameters "ID=wheelright2;"}
						{Orientation
							1	0	0
							0	0	-1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/wheel2r.ply"}
					}
				}
				{bone prizmatic "suspension_r3"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position -17.8173	-26.892	2.96269}
					{bone revolute "wheel3r"
						{parameters "ID=wheelright3;"}
						{Orientation
							1	0	0
							0	0	-1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/wheel3r.ply"}
					}
				}
			}
			{bone "body"
				{parameters "ID=body;"}
				{animation
					{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_wartrukk/Animations/body_b.anm"} {speed 0.6}}
				}
				{Position 4.64875	5.21654	43.5241}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/body.ply"}
				{bone "backcargo"
					{parameters "ID=body;"}
					{Position 0	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/backcargo.ply"}
					{bone "parts11"
						{parameters "ID=body;"}
						{Position -4.64875	-5.21654	-43.5241}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts11.ply"}
					}
					{bone "parts4"
						{parameters "ID=body;"}
						{Position -4.64875	-5.21654	-43.5241}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts4.ply"}
					}
					{bone "parts5"
						{parameters "ID=body;"}
						{Position -4.64875	-5.21654	-43.5241}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts5.ply"}
					}
					{bone "parts6"
						{parameters "ID=body;"}
						{Position -4.64875	-5.21654	-43.5241}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts6.ply"}
					}
					{bone "parts7"
						{parameters "ID=body;"}
						{Position -4.64875	-5.21654	-43.5241}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts7.ply"}
					}
					{bone "parts8"
						{parameters "ID=body;"}
						{Position -4.64875	-5.21654	-43.5241}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts8.ply"}
					}
					{bone "parts9"
						{parameters "ID=body;"}
						{Position -4.64875	-5.21654	-43.5241}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts9.ply"}
					}
					{bone "parts10"
						{parameters "ID=body;"}
						{Position -4.64875	-5.21654	-43.5241}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts10.ply"}
					}
					{bone "backdoor"
						{parameters "ID=body;"}
						{Position -64.0106	-6.57298	-7.85786}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/backdoor.ply"}
					}
					{bone "passenger07"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-5.79281	4.25936	-5.51859
						}
					}
					{bone "passenger06"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-23.2049	4.25936	-5.51859
						}
					}
					{bone "passenger05"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-38.7336	4.25936	-5.51859
						}
					}
					{bone "passenger04"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-57.3608	4.25936	-5.51859
						}
					}
					{bone "passenger03"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-57.3608	-15.1648	-5.51859
						}
					}
					{bone "passenger02"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-38.7336	-15.1648	-5.51859
						}
					}
					{bone "passenger01"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-23.2049	-15.1648	-5.51859
						}
					}
					{bone "passenger00"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-5.79281	-15.1648	-5.51859
						}
					}
				}
				{bone "fxsmoke1"
					{Matrix34
						0	0	1
						0.34202	0.939693	0
						-0.939693	0.34202	0
						6.77645	38.8506	25.8347
					}
				}
				{bone "fxfire1"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						44.5639	-5.21654	-13.9965
					}
				}
				{bone "visor_driver"
					{Position 28.3929	-23.5021	7.84847}
				}
				{bone "visor_main"
					{Position -4.64875	-5.21654	54.9011}
				}
				{bone "driver"
					{Position 12.0835	-21.7018	-9.07527}
				}
				
				%args_role
				
				{bone "fxsmoke2"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						50.1383	-24.2299	3.46582
					}
				}
				{bone "fxsmoke3"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						37.337	-24.2299	-1.64088
					}
				}
				{bone "fxsmoke4"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						42.7489	-24.2299	7.32507
					}
				}
				{bone "fxfire3"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						-30.3824	-5.21654	-8.09647
					}
				}
				{bone "parts1"
					{parameters "ID=body;"}
					{Position -4.64875	-5.21654	-43.5241}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts1.ply"}
				}
				{bone "parts2"
					{parameters "ID=body;"}
					{Position -4.64875	-5.21654	-43.5241}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts2.ply"}
				}
				{bone "parts3"
					{parameters "ID=body;"}
					{Position -4.64875	-5.21654	-43.5241}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/parts3.ply"}
				}
			}
			{bone "emit4"
				{Position -83.6614	0	0}
			}
			{bone "emit5"
				{Position -83.6614	19.685	0}
			}
			{bone "emit6"
				{Position -83.6614	-19.685	0}
			}
		}
	}

	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_wartrukk/Model/base_wartrukk/+base_vol.inc")
	
	%args_vol
)