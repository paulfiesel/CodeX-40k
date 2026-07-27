
(Define "Skeleton"
	{Skeleton
		{animation
			{sequence "start"			{speed 0.7} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/start"}}
			{sequence "stop"			{speed 0.7} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/stop"}}
			{sequence "hit"				{speed 0.4} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/hit"}}
			
			{sequence "veh_idle_crew"	
				{Smooth 0.2} {speed 0.5} 
				{file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/lifta_drop"}	
				{events {0 "spark_2"} {4 "spark_2"} {12 "spark_2"}}
			} 
			{sequence "fire_supakannon"		
				{speed 0.35}
				{file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/fire_supakannon"}
			}
			{sequence "fire_kannon"		
				{speed 0.35}
				{file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/fire_kannon"}
			}
			{sequence "buzzsaw_spin"	
				{speed 0.5}
				{file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/buzzsaw_spin"} 
				{events {0 "spark"} {5 "spark"} {10 "spark"}}
			}
		}
		{bone "basis"
			{parameters "wheelradius=1.1;steermax=30;"}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			
			{bone "repos"
				{position -28 0 0}
				{bone "emit3"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						33.4646	-95.6299	0
					}
				}
				{bone "emit7"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						33.4646	95.6299	0
					}
				}
				{bone "emit12"
					{Position -167.323	0	0}
				}
				{bone "emit13"
					{Position -167.323	19.685	0}
				}
				{bone "emit14"
					{Position -167.323	39.3701	0}
				}
				{bone "emit17"
					{Position -167.323	-39.3701	0}
				}
				{bone "emit18"
					{Position -167.323	-19.685	0}
				}
				{bone "emit19"
					{Position -187.008	-19.685	0}
				}
				{bone "emit20"
					{Position -187.008	-39.3701	0}
				}
				{bone "emit21"
					{Position -187.008	39.3701	0}
				}
				{bone "emit22"
					{Position -187.008	19.685	0}
				}
				{bone "emit23"
					{Position -187.008	0	0}
				}
				
				; // SCALED TO 85%.
				
				{bone "body"
					{Matrix34
						0.85	0	0
						0	0.85	0
						0	0	0.85
						0	0	0
					}
					{parameters "ID=body;"}
					{animation
						{sequence "repair"  {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/body_b.anm"} {speed -0.6}}
					}
					{Matrix34
						1	0	0
						0	0	1
						0	-1	0
						0	-1.70898e-05	-1.70898e-05
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/body.ply"}
					{bone "frontal_radiator"
						{parameters "ID=body;"}
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							117.557	74.2631	2.00197
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/details1.ply"}
					}
					{bone revolute "wheell6"
						{parameters "ID=trackleft;Radius=1.0;"}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							-4.50531	44.1365	-50.7708
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheell6.ply"}
					}
					{bone revolute "wheell7"
						{parameters "ID=trackleft;Radius=1.0;"}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							-38.9796	45.6621	-50.7708
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheell7.ply"}
					}
					{bone revolute "wheell8"
						{parameters "ID=trackleft;Radius=1.0;"}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							-82.7732	45.662	-50.7708
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheell8.ply"}
					}
					{bone revolute "wheell9"
						{parameters "ID=trackleft;Radius=1.0;"}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							-116.99	44.1366	-50.7709
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheell9.ply"}
					}
					{bone revolute "wheelr6"
						{parameters "ID=trackright;Radius=1.0;"}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							-4.50537	44.1367	53.9228
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelr6.ply"}
					}
					{bone revolute "wheelr7"
						{parameters "ID=trackright;Radius=1.0;"}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							-38.9794	45.6621	53.9227
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelr7.ply"}
					}
					{bone revolute "wheelr8"
						{parameters "ID=trackright;Radius=1.0;"}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							-82.773	45.6621	53.9227
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelr8.ply"}
					}
					{bone revolute "wheelr9"
						{parameters "ID=trackright;Radius=1.0;"}
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							-116.989	44.1366	53.9227
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelr9.ply"}
					}
					{bone revolute "driver_shoota"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							83.4561	99.1044	15.9991
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/driver_shoota.ply"}
						{bone revolute "foresight1"
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								24.9666	0.653198	-0.752083
							}
						}
					}
					{bone "visor_around"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							-47.2441	236.221	-0.000434943
						}
					}
					{bone "visor_driver"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							84.3563	104.825	-32.1006
						}
					}
					{bone "fxfire3"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							84.5974	98.9788	16.1623
						}
					}
					{bone "fxfire1"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							0.611497	117.168	31.6443
						}
					}
					{bone "fxsmoke1"
						{Matrix34
							-0.216439	0.976296	0
							0	0	1
							0.976296	0.21644	0
							-158.941	120.294	-32.6655
						}
					}
					{bone "fxsmoke2"
						{Matrix34
							-0.167731	0.964977	-0.201706
							0.0449435	-0.196907	-0.979391
							-0.984808	-0.17334	-0.010342
							-7.491	154.762	-73.9978
						}
					}
					{bone "fxsmoke3"
						{Matrix34
							-0.0548318	0.993651	0.0982395
							0	0.0983875	-0.995148
							-0.998496	-0.0545658	-0.0053946
							64.4121	134.226	59.59
						}
					}
					{bone "Role"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							0	1.70898e-05	-1.709e-05
						}
						
						%args_role
					}
				}
				
				; // front tread wheels
				(Define "Tread_Wheels_Suspension_A"		{limits -0.22 0.28})
				(Define "Tread_Wheels_Radius_A"			{parameters "Radius=2.0;ID=track%0;"})
				
				; // Bigger middle tread wheels
				(Define "Tread_Wheels_Suspension_B"		{limits -0.18 0.24})
				(Define "Tread_Wheels_Radius_B"			{parameters "Radius=1.6;ID=track%0;"})
				
				; // back tread wheels
				(Define "Tread_Wheels_Suspension_C"		{limits -0.22 0.28})
				(Define "Tread_Wheels_Radius_C"			{parameters "Radius=2.4;ID=track%0;"})
				
				; // frontal wheels
				(Define "Frontal_Wheels_Suspension"		{limits -0.32 0.44})
				(Define "Frontal_Wheels_Radius"			{parameters "Radius=1.25;ID=wheel%0;"})
				
				; ========================================================== ;
				
				{bone "pivot_front"
					{parameters "wheelsR;"}
					{Matrix34
						-1	0	0
						0	1	0
						0	0	-1
						92.4803	0	25.2277
					}
					
					{bone prizmatic "suspension_l7"
						("Frontal_Wheels_Suspension")
						
						{Matrix34
							-1	0	0
							0	1	0
							0	0	-1
							-79.0069	-1.83032	-12.0528
						}
						{bone "body_front1"
							{parameters "ID=body;"}
							{Position -171.487	1.83037	-37.2805}
							
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/body_front1_shield.ply"}
						}
						{bone "body_front2"
							{parameters "ID=body;"}
							{Position -171.487	1.83037	-37.2805}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/body_front2_roller.ply"}
							
							{bone revolute "wheelfront1"
								{parameters "ID=body;Radius=1.0;"}
								
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/body_front2_roller_wheel.ply"}
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									171.487	-1.83038	37.2805
								}
							}
						}
					}
					
					{bone revolute "steer_l1"
						{limits -18 18}
						{Matrix34
							1	0	0
							0	1	0
							0	0	1
							2.28882e-05	50.5231	0.000120163
						}
						{bone prizmatic "suspension_l1"
							("Frontal_Wheels_Suspension")
							
							{Matrix34
								-1	0	0
								0	1	0
								0	0	-1
								0	0	0
							}
							{bone revolute "wheelleft1"
								("Frontal_Wheels_Radius" args left1)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									-2.51437	8.23988	2.51546
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelleft1.ply"}
							}
						}
					}
					{bone revolute "steer_l2"
						{limits -15 15}
						{Matrix34
							1	0	0
							0	1	0
							0	0	1
							59.2007	50.5231	0.000118256
						}
						{bone prizmatic "suspension_l2"
							("Frontal_Wheels_Suspension")
							
							{Orientation
								-1	0	0
								0	1	0
								0	0	-1
							}
							{bone revolute "wheelleft2"
								("Frontal_Wheels_Radius" args left2)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									-0.397934	8.23998	2.5154
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelleft2.ply"}
							}
						}
					}
					{bone revolute "steer_r1"
						{limits -25 25}
						{Matrix34
							1	0	0
							0	1	0
							0	0	1
							0.00330353	-53.6642	-0.000112534
						}
						{bone prizmatic "suspension_r1"
							("Frontal_Wheels_Suspension")
							
							{Orientation
								-1	0	0
								0	1	0
								0	0	-1
							}
							{bone revolute "wheelright1"
								("Frontal_Wheels_Radius" args right1)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									-2.5085	-5.0988	2.51546
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelright1.ply"}
							}
						}
					}
					{bone revolute "steer_r2"
						{limits -15 15}
						{Matrix34
							1	0	0
							0	1	0
							0	0	1
							59.2009	-53.6642	-0.000335693
						}
						{bone prizmatic "suspension_r2"
							("Frontal_Wheels_Suspension")
							
							{Orientation
								-1	0	0
								0	1	0
								0	0	-1
							}
							{bone revolute "wheelright2"
								("Frontal_Wheels_Radius" args right2)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									-0.397495	-5.09881	2.51518
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelright2.ply"}
							}
						}
					}
				}
				{bone "pivot_back"
					{parameters "wheelsR;"}
					{Matrix34
						1	0	0
						0	1	0
						0	0	1
						-20.3937	0	19.8819
					}
					{bone "wheelsl"
						{parameters "wheelsL;"}
						{Matrix34
							1	0	0
							0	1	0
							0	0	1
							20.3937	4.74021e-05	-19.8819
						}
						{bone "fxtracel1"
							{Matrix34
								-1	0	0
								0	-1	0
								0	0	1
								92.4768	50.5231	7.87402
							}
						}
						{bone "fxtracel2"
							{Matrix34
								-1	0	0
								0	-1	0
								0	0	1
								-20.3997	53.3612	7.87402
							}
						}
						{bone "fxtracel3"
							{Matrix34
								-0.967044	0.101641	0.23344
								-0.104529	-0.994522	0
								0.232161	-0.0244008	0.972371
								-100.936	53.3166	7.87402
							}
						}
						{bone "trackl"
							{parameters "ID=trackLeft;"}
							{Position 0	0	0}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/trackl.ply"}
						}
						{bone prizmatic "suspension_l3"
							("Tread_Wheels_Suspension_A")
							
							{Position -20.3937	53.3612	19.8819}
							{bone revolute "wheell3"
								("Tread_Wheels_Radius_A" args left)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									0	0	0
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheell3.ply"}
							}
						}
						{bone prizmatic "suspension_l4"
							("Tread_Wheels_Suspension_B")
							
							{Position -60.1171	51.7688	22.2782}
							{bone revolute "wheell4"
								("Tread_Wheels_Radius_B" args left)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									0	0	0
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheell4.ply"}
							}
						}
						{bone prizmatic "suspension_l5"
							("Tread_Wheels_Suspension_C")
							
							{Position -100.935	53.3166	19.2034}
							{bone revolute "wheell5"
								("Tread_Wheels_Radius_C" args left)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									0	0	0
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheell5.ply"}
							}
						}
					}
					{bone "wheelsr"
						{parameters "wheelsR;"}
						{Matrix34
							1	0	0
							0	1	0
							0	0	1
							20.3937	4.74021e-05	-19.8819
						}
						{bone "fxtracer3"
							{Matrix34
								-0.957599	-0.168851	0.23344
								0.173649	-0.984808	0
								0.229893	0.0405368	0.972371
								-100.936	-56.4702	7.87402
							}
						}
						{bone "fxtracer2"
							{Matrix34
								-1	0	0
								0	-1	0
								0	0	1
								-20.3998	-56.4769	7.87402
							}
						}
						{bone "fxtracer1"
							{Matrix34
								-1	0	0
								0	-1	0
								0	0	1
								92.477	-53.6642	7.87402
							}
						}
						{bone "trackr"
							{parameters "ID=trackRight;"}
							{Position 0	0	0}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/trackr.ply"}
						}
						{bone prizmatic "suspension_r3"
							("Tread_Wheels_Suspension_A")
							
							{Position -20.3998	-56.4769	19.8912}
							{bone revolute "wheelr3"
								("Tread_Wheels_Radius_A" args right)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									0	0	0
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelr3.ply"}
							}
						}
						{bone prizmatic "suspension_r4"
							("Tread_Wheels_Suspension_B")
							
							{Position -60.1171	-54.9209	22.2783}
							{bone revolute "wheelr4"
								("Tread_Wheels_Radius_B" args right)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									0	0	0
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelr4.ply"}
							}
						}
						{bone prizmatic "suspension_r5"
							("Tread_Wheels_Suspension_C")
							
							{Position -100.936	-56.4702	19.2036}
							{bone revolute "wheelr5"
								("Tread_Wheels_Radius_C" args right)
								
								{Matrix34
									-1	0	0
									0	0	1
									0	1	0
									0	0	0
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/wheelr5.ply"}
							}
						}
					}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Model/base_battlewagon/+base_vol.inc")
	
	%args_vol
)