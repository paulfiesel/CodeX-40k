
(Define "Skeleton"
	{Skeleton
		(include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grottank/animations/Animations.inc")
		
		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "repos"
				{position 10 0 0}
				{bone "wheelsr"
					{parameters "wheelsR;"}
					{bone "trackr"
						{parameters "ID=trackright;Radius=0.8;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-6.57857	-18.7678	11.2053
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/trackr.ply"}
					}
					{bone "suspensionr3"
						{Position -9.48985	-15.209	5.35612}
						{bone revolute "wheelr3"
							{parameters "ID=trackright;Radius=0.8;"}
							{Matrix34
								-1	0	0
								0	0	1
								0	1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheelr3.ply"}
						}
					}
					{bone "suspensionr5"
						{Position -22.9012	-15.209	8.39134}
						{bone revolute "wheelr5"
							{parameters "ID=trackright;Radius=1.3;"}
							{Orientation
								-1	0	0
								0	0	1
								0	1	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheelr5.ply"}
						}
					}
					{bone "suspensionr1"
						{Position 5.33457	-15.209	11.0427}
						{bone revolute "wheelr1"
							{parameters "ID=trackright;Radius=3.0;"}
							{Orientation
								-1	0	0
								0	0	1
								0	1	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheelr1.ply"}
						}
					}
					{bone "fxtracer3"
						{Matrix34
							-0.957599	-0.168851	0.23344
							0.173649	-0.984808	0
							0.229893	0.0405368	0.972371
							-22.9013	-18.768	0
						}
					}
					{bone "fxtracer2"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-9.48985	-18.768	0
						}
					}
					{bone "fxtracer1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							5.33457	-18.768	0
						}
					}
				}
				{bone "wheelsl"
					{parameters "wheelsL;"}
					{Position 0	0	0}
					{bone "trackl"
						{parameters "ID=trackleft;Radius=0.8;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-6.57857	18.7678	11.2053
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/trackl.ply"}
					}
					{bone "suspensionl5"
						{Position -22.9014	15.209	8.39132}
						{bone revolute "wheell5"
							{parameters "ID=trackleft;Radius=1.3;"}
							{Matrix34
								-1	0	0
								0	0	1
								0	1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheell5.ply"}
						}
					}
					{bone "suspensionl1"
						{Position 5.3346	15.209	11.0427}
						{bone revolute "wheell1"
							{parameters "ID=trackleft;Radius=3.0;"}
							{Matrix34
								-1	0	0
								0	0	1
								0	1	0
								0	-1.52588e-05	-3.05176e-05
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheell1.ply"}
						}
					}
					{bone "suspensionl3"
						{Position -9.48985	15.209	5.35611}
						{bone revolute "wheell3"
							{parameters "ID=trackleft;Radius=0.8;"}
							{Matrix34
								-1	0	0
								0	0	1
								0	1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheell3.ply"}
						}
					}
					{bone "fxtracel3"
						{Matrix34
							-0.967044	0.101641	0.23344
							-0.104529	-0.994522	0
							0.232161	-0.0244009	0.972371
							-22.9014	18.768	0
						}
					}
					{bone "fxtracel2"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-9.48985	18.768	0
						}
					}
					{bone "fxtracel1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							5.3346	18.768	0
						}
					}
				}
				{bone "emit1"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						0	35	0.599799
					}
				}
				{bone "emit2"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						0	-35	0.599799
					}
				}
				{bone "body"
					{parameters "ID=body;"}
					{animation
						{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grottank/Animations/body_b.anm"} {speed -0.6}}
						{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grottank/Animations/body_b.anm"} {speed 0.6}}
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/body.ply"}
					
					{bone revolute "turret"
						{parameters "ID=turret;"}
						{animation
							{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grottank/Animations/turret_b.anm"} {speed -0.6}}
							{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grottank/Animations/turret_b.anm"} {speed 0.6}}
						}
						{Position -1.47126	0.0020722	43.8692}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/turret.ply"}
						{bone "hatch"
							{parameters "ID=turret;"}
							{Position -8.62055	-0.00207256	8.42646}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/hatch.ply"}
						}
						{bone revolute "gun_rot"
							{parameters "ID=gun;"}
							{animation
								{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grottank/Animations/gun_b.anm"} {speed -0.6}}
								{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grottank/Animations/gun_b.anm"} {speed 0.6}}
							}
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								15.3311	-0.00207256	-2.54293
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/gun_rot.ply"}
							
							%args_role
						}
						{bone "rokkitlauncha_platform"
							{parameters "ID=turret;"}
							{Position 5.97255	-0.0691575	-43.751}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/rokkitlauncha_platform.ply"}	{visibility 0}
							{bone "rocket_1"
								{Matrix34
									1	0	0
									0	-0.824876	-0.565314
									0	0.565314	-0.824876
									-15.7925	-18.9516	49.4588
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/rocket_1.ply"}	{visibility 0}
							}
							{bone "rocket_2"
								{Matrix34
									1	0	0
									0	0.625941	0.779871
									0	-0.779871	0.625941
									-15.7925	-21.3107	41.0239
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/rocket_2.ply"}	{visibility 0}
							}
							{bone "rocket_3"
								{Matrix34
									1	0	0
									0	0.987563	0.157225
									0	-0.157225	0.987563
									-15.7925	21.3107	41.0239
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/rocket_3.ply"}	{visibility 0}
							}
							{bone "rocket_4"
								{Matrix34
									1	0	0
									0	0	1
									0	-1	0
									-15.7925	18.9516	49.4588
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/rocket_4.ply"}	{visibility 0}
							}
							{bone "barrels_mlrs04"
								{Position 2.46972	21.3107	41.0239}
							}
							{bone "barrels_mlrs01"
								{Position 2.46972	-18.9516	49.4588}
							}
							{bone "barrels_mlrs02"
								{Position 2.46972	18.9516	49.4588}
							}
							{bone "barrels_mlrs03"
								{Position 2.46972	-21.3107	41.0239}
							}
							{bone "foresight_mlrs"
								{Matrix34
									1	0	0
									0	0	1
									0	-1	0
									25.4987	0.0670846	42.3818
								}
							}
						}
						{bone "commander"
							{Position 0.408107	-0.159383	-12}
						}
						{bone "visor_gunner"
							{Position 19.6236	-0.00207256	3.63076}
						}
						{bone "fxfire3"
							{Matrix34
								0	0	1
								0	1	0
								-1	0	0
								0	0	0
							}
						}
					}
					{bone revolute "wheell4"
						{parameters "ID=trackleft;Radius=0.8;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-12.7628	15.209	14.2358
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheell4.ply"}
					}
					{bone revolute "wheelr4"
						{parameters "ID=trackright;Radius=0.8;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-12.7628	-15.209	14.2358
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheelr4.ply"}
					}
					{bone revolute "wheell2"
						{parameters "ID=trackleft;Radius=0.8;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-1.87238	15.209	22.5577
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheell2.ply"}
					}
					{bone revolute "wheelr2"
						{parameters "ID=trackright;Radius=0.8;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-1.87238	-15.209	22.5577
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/grottank_Chassis/wheelr2.ply"}
					}
					{bone "visor_around"
						{Position 1.64812	-0.0299735	75.0001}
					}
					{bone "visor_driver"
						{Position 16.0705	-0.0299735	25.1509}
					}
					{bone "fxfire1"
						{Matrix34
							0	0	1
							0	1	0
							-1	0	0
							-20.867	0	15.6083
						}
					}
					{bone "fxsmoke1"
						{Matrix34
							-0.939693	0	0.34202
							0	-1	0
							0.34202	0	0.939693
							-36.1458	-0.0601071	27.8479
						}
					}
					{bone "fxsmoke2"
						{Matrix34
							-0.925417	0.163176	0.34202
							-0.143631	-0.986237	0.0819015
							0.350677	0.0266685	0.936117
							-37.9632	10.2471	32.7788
						}
					}
					{bone "fxsmoke3"
						{Matrix34
							-0.806707	-0.564863	0.173648
							0.558997	-0.824715	-0.0858296
							0.191692	0.0278296	0.98106
							-38.6791	-11.0117	31.3546
						}
					}
				}	
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_grottank/Model/base/+base_vol.inc")
	%args_vol
)