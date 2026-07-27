
(Define "Skeleton"
	{Skeleton
		{animation
			{sequence "start"			{speed 0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Warbike/Animations/start"}}
			{sequence "stop"			{speed 0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Warbike/Animations/stop"}}
			{sequence "hit"				{speed 0.6} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Warbike/Animations/hit"}}
		}		
		{bone revolute "basis"
			{limits -0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "emit2"
				{parameters "Voxels=0;"}
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					0	-29.5276	0
				}
			}
			{bone "emit1"
				{parameters "Voxels=0;"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					0	29.5276	0
				}
			}
			{bone "pivot_front"
				{Position 14.4411	-1.80904e-05	8.89988}
				{bone "steer"
					{parameters "ID=body;Steer;"}
					{Matrix34
						-1	0	0
						0	1	0
						0	0	-1
						-12.0059	2.28647e-05	10.9345
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbike_Chassis/steer.ply"}
					{bone prizmatic "suspension_l1"
						{limits -0.1 0.1}
						{Matrix34
							1	0	0
							0	-1	0
							0	0	-1
							-12.0059	-1.90742e-05	10.9345
						}
						{bone revolute "wheelfront"
							{parameters "ID=wheelrightt;Radius=0.41;"}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbike_Chassis/wheelfront.ply"}
						}
					}
					{bone "visor1"
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							0.290356	-1.22232e-05	-9.35923
						}
					}
					{bone "fxtracel1"
						{Matrix34
							1	0	0
							0	-1	0
							0	0	-1
							-12.0059	-2.83398e-05	19.8344
						}
					}
				}
			}
			{bone "pivot_back"
				{Position -23.7816	0.932084	8.89965}
				{bone prizmatic "suspension_l2"
					{limits -0.1 0.1}
					{Orientation
						-1	0	0
						0	-1	0
						0	0	1
					}
					{bone revolute "wheelback"
						{parameters "ID=wheelleft1;Radius=0.41;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbike_Chassis/wheelback.ply"}
					}
				}
				{bone "fxtracel2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						0	0	-8.89965
					}
				}
			}
			{bone "visor2"
				{Position -4.92126	-2.17155e-05	49.2126}
			}
			{bone "body"
				{parameters "ID=body;"}
				{Matrix34
					-1	0	0
					0	1	0
					0	0	-1
					-11.8398	0	12.0505
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbike_Chassis/body.ply"}
				{bone "fxsmoke1"
					{Matrix34
						1	0	0
						0	-1	0
						0	0	-1
						17.7313	-4.92717	-23.4849
					}
				}
				{bone "fxfire1"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						-4.66189	0	3.74363
					}
				}
				{bone "fxfire3"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						-12.3403	0	-5.73972
					}
				}
				{bone "fxfire4"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						11.3563	0	-2.87816
					}
				}
				{bone "shootas"
					{Matrix34
						-1	0	0
						0	1	0
						0	0	-1
						10.6127	0	-4.38788
					}
					{bone revolute "gun_rot_l" {Speed2 80} {Limits -8 32}
						{Position 0	12.0706	1.52588e-05}
						{bone revolute "shoota_l" {Speed2 80} {Limits -10 16}
							{parameters "ID=gun;"}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbike_Chassis/shoota_l.ply"}
							{bone "barrel_l01"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									12.4196	-8.50228	-0.0115042
								}
							}
							{bone "barrel_l00"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									18.8934	-4.43054	-0.0115128
								}
							}
							{bone "foresight_l"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									18.8934	-4.43054	-0.0115128
								}
							}
							{bone "fxshell_l"
								{Matrix34
									0	0	-1
									-1	0	0
									0	1	0
									-0.227072	-2.89273	-1.43331
								}
							}
						}
					}
					{bone revolute "gun_rot_r" {Speed2 80} {Limits -32 8}
						{Position 3.24249e-05	-12.0669	1.52588e-05}
						{bone revolute "shoota_r" {Speed2 80} {Limits -10 16}
							{parameters "ID=gun;"}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/warbike_Chassis/shoota_r.ply"}
							{bone "barrel_r01"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									18.8934	-4.43053	-0.354337
								}
							}
							{bone "fxshell_r"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-0.227098	-2.89273	1.44555
								}
							}
							{bone "barrel_r00"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									12.4196	-8.50227	-0.354325
								}
							}
							{bone "foresight_r"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									18.8934	-4.43053	-0.354337
								}
							}
						}
					}
				}
				{bone "driver"
					{Matrix34
						-1	0	0
						0	1	0
						0	0	-1
						-1.41936	0	0.0826931
					}
				}
				{bone "fxsmoke2"
					{Matrix34
						0.642788	0	-0.766045
						0	-1	0
						-0.766045	0	-0.642788
						11.1258	-4.80776	-24.2889
					}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Warbike/Model/Base/+base_vol.inc")
	
	%args_vol
)