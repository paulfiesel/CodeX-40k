
(Define "Skeleton"
	{Skeleton
		{animation
			{sequence "start"			{speed 0.7} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/start"}}
			{sequence "stop"			{speed 0.7} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/stop"}}
			{sequence "hit"				{speed 0.4} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/hit"}}
			{sequence "fire"			{speed 0.5} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/fire_killbursta"}}
		}
		{bone revolute "basis"
			{Limits -0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "body"
				{parameters "ID=body;"}
				{animation
					{sequence "repair" {speed -0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/body_b"}}
					{sequence "break" {speed 0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/body_b"}}
				}
				{Position 0	0	-4}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/body.ply"}
				{bone "shield"
					{Position -13.75	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/shield.ply"}
				}
				
				{Bone "Role"	;{}
					%args_role
				}

				{bone "engine"
					{parameters "ID=engine;"}
					{animation
						{sequence "repair" {speed -0.5} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/engine_b"}}
						{sequence "break" {speed 0.5} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/engine_b"}}
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/engine.ply"}
					{bone "fxsmoke07"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-87.3606	-74.6374	83.7467
						}
					}
					{bone "fxsmoke06"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-119.387	75.7584	148.95
						}
					}
					{bone "fxsmoke05"
						{Matrix34
							0	0	1
							0	1	0
							-1	0	0
							-113.313	65.3693	165.444
						}
					}
					{bone "fxsmoke04"
						{Matrix34
							0	0	1
							0	1	0
							-1	0	0
							-116.959	-18.2545	178.206
						}
					}
					{bone "fxsmoke03"
						{Matrix34
							-0.614492	0	0.788923
							0	1	0
							-0.788923	0	-0.614492
							-169.285	-8.23056	159.569
						}
					}
					{bone "fxsmoke02"
						{Matrix34
							0	0	1
							0	1	0
							-1	0	0
							-124.068	-37.5449	163.56
						}
					}
					{bone "fxsmoke01"
						{Matrix34
							0	0	1
							0	1	0
							-1	0	0
							-137.322	-28.1035	81.2789
						}
					}
					{bone "fxsmoke00"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-181.026	-8.20953	81.7652
						}
					}
					{bone "fxfire1"
						{Position -116.671	11.5936	94.5174}
					}
					{bone "engine_e1"
						{parameters "ID=engine;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/engine_e1.ply"}
					}
					{bone "engine_e3"
						{parameters "ID=engine;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/engine_e3.ply"}
					}
					{bone "engine_e2"
						{parameters "ID=engine;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/engine_e2.ply"}
					}
				}
				{bone revolute "aux_turret1"
					{parameters "ID=aux_turret1;"}
					{Matrix34
						0.707107	0.707107	0
						-0.707107	0.707107	0
						0	0	1
						-41.0313	40.6336	142.206
					}
					{animation
						{sequence "repair" {speed -0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/aux1_b"}}
						{sequence "break" {speed 0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/aux1_b"}}
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/aux_turret1.ply"}
					{bone revolute "aux_mgun1"
						{parameters "ID=aux_turret1;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							11.2445	0.067276	-4.80956
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/aux_mgun1.ply"}
						{bone "foresight1"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								45.9089	0	0
							}
						}
						{bone "barrel1_00"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								40.3155	3.83359	0
							}
						}
						{bone "barrel1_01"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								40.3155	-3.35599	0
							}
						}
					}
					{bone "fxshell1"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							14.6198	9.19569	-4.80954
						}
					}
				}
				{bone revolute "aux_turret2"
					{parameters "ID=aux_turret2;"}
					{Matrix34
						0.707107	-0.707107	0
						0.707107	0.707107	0
						0	0	1
						-14.8309	-37.0657	141.329
					}
					{animation
						{sequence "repair" {speed -0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/aux2_b"}}
						{sequence "break" {speed 0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Animations/aux2_b"}}
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/aux_turret2.ply"}
					{bone revolute "aux_mgun2"
						{parameters "ID=aux_turret2;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							16.3334	-0.245872	-6.16641
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/aux_mgun2.ply"}
						{bone "foresight2"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								45.4055	-0.906067	-1.90735e-05
							}
						}
						{bone "barrel2_00"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								40.1157	-0.906067	-3.1752
							}
						}
						{bone "barrel2_01"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								40.1157	-0.906067	3.52002
							}
						}
					}
					{bone "fxshell2"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							17.5101	-10.2951	-6.08127
						}
					}
				}
				{bone "visor_driver"
					{Position 30	-9.30636	134.495}
				}
				{bone "visor_around"
					{Position -25	0	204}
				}
				{bone "fxfire3"
					{Position 85.9177	0	78.0497}
				}
				{bone "fxfire4"
					{Position 11.0296	0	129.057}
				}
			}
			{bone "wheelsr"
				{Position -7.5	-5.5	23.5}
				{bone "fxtracer3"
					{Matrix34
						-0.957599	-0.168851	0.23344
						0.173649	-0.984808	0
						0.229893	0.0405368	0.972371
						-84.8376	-48.6746	-20
					}
				}
				{bone "fxtracer2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-16.3248	-47.903	-20
					}
				}
				{bone "fxtracer1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						90.9271	-48.6165	-20
					}
				}
				{bone prizmatic "suspension_r1"
					{limits -0.3 0.4}
					{Position 90.9271	-48.6165	3.66854}
					{bone revolute "wheelr1"
						{parameters "ID=trackright;Radius=0.8;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheelr1.ply"}
					}
				}
				{bone prizmatic "suspension_r2"
					{limits -0.3 0.4}
					{Position 49.7635	-47.904	-4.98424}
					{bone revolute "wheelr2"
						{parameters "ID=trackright;Radius=0.8;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheelr2.ply"}
					}
				}
				{bone prizmatic "suspension_r3"
					{limits -0.3 0.4}
					{Position 16.2295	-48.3147	-4.98424}
					{bone revolute "wheelr3"
						{parameters "ID=trackright;Radius=0.8;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheelr3.ply"}
					}
				}
				{bone prizmatic "suspension_r4"
					{limits -0.3 0.4}
					{Position -16.3248	-47.903	-5.44861}
					{bone revolute "wheelr4"
						{parameters "ID=trackright;Radius=0.8;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheelr4.ply"}
					}
				}
				{bone prizmatic "suspension_r5"
					{limits -0.3 0.4}
					{Position -49.2248	-47.903	-5.4486}
					{bone revolute "wheelr5"
						{parameters "ID=trackright;Radius=0.8;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheelr5.ply"}
					}
				}
				{bone prizmatic "suspension_r6"
					{limits -0.3 0.4}
					{Position -84.8376	-48.6746	-2.64951}
					{bone revolute "wheelr6"
						{parameters "ID=trackright;Radius=0.8;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheelr6.ply"}
					}
				}
				{bone "trackr"
					{parameters "ID=trackRight;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						4.76286	60.558	8.04561
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/trackr.ply"}
				}
			}
			{bone "wheelsl"
				{Position -7.5	-5.5	23.5}
				{bone "trackl"
					{parameters "ID=trackLeft;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						4.76286	60.558	8.04561
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/trackl.ply"}
				}
				{bone "fxtracel1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						90.9271	62.6257	-20
					}
				}
				{bone "fxtracel2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-16.3248	63.3393	-20
					}
				}
				{bone "fxtracel3"
					{Matrix34
						-0.967045	0.101641	0.233439
						-0.104529	-0.994522	0
						0.23216	-0.0244009	0.972371
						-84.8376	62.5677	-20
					}
				}
				{bone prizmatic "suspension_l1"
					{limits -0.3 0.4}
					{Position 90.9271	62.6257	3.66854}
					{bone revolute "wheell1"
						{parameters "ID=trackleft;Radius=0.8;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheell1.ply"}
					}
				}
				{bone prizmatic "suspension_l2"
					{limits -0.3 0.4}
					{Position 49.7635	63.3382	-4.98424}
					{bone revolute "wheell2"
						{parameters "ID=trackleft;Radius=0.8;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheell2.ply"}
					}
				}
				{bone prizmatic "suspension_l3"
					{limits -0.3 0.4}
					{Position 16.2295	62.9276	-4.98424}
					{bone revolute "wheell3"
						{parameters "ID=trackleft;Radius=0.8;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheell3.ply"}
					}
				}
				{bone prizmatic "suspension_l4"
					{limits -0.3 0.4}
					{Position -16.3248	63.3393	-5.44861}
					{bone revolute "wheell4"
						{parameters "ID=trackleft;Radius=0.8;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheell4.ply"}
					}
				}
				{bone prizmatic "suspension_l5"
					{limits -0.3 0.4}
					{Position -49.2248	63.3393	-5.44861}
					{bone revolute "wheell5"
						{parameters "ID=trackleft;Radius=0.8;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheell5.ply"}
					}
				}
				{bone prizmatic "suspension_l6"
					{limits -0.3 0.4}
					{Position -84.8376	62.5677	-2.64951}
					{bone revolute "wheell6"
						{parameters "ID=trackleft;Radius=0.8;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Killtank_Chassis/wheell6.ply"}
					}
				}
			}
			{bone "emit6"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					17.2186	95	0
				}
			}
			{bone "emit5"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					67.2186	95	0
				}
			}
			{bone "emit4"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-32.7814	95	0
				}
			}
			{bone "emit3"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-32.7814	-95	0
				}
			}
			{bone "emit2"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					67.2186	-95	0
				}
			}
			{bone "emit1"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					17.2186	-95	0
				}
			}
			{bone "emit7"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-82.7814	95	0
				}
			}
			{bone "emit8"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-82.7814	-95	0
				}
			}
		}
	}

	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Killtank/Model/Base/+base_vol.inc")
	
	%args_vol
)