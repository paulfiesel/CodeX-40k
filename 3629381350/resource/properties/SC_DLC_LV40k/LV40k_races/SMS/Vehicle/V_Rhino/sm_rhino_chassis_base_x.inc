
(Define "Skeleton"
	{Skeleton
		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "body"
				{parameters "ID=body;"}
				{animation
					{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/animations/base/body_b.anm"} {speed 0.6}}
				}
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					0	0.000114441	0
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/body.ply"}

				{bone "camera_artillery"
					{Position 0	0	600}
				}
				{bone "Role"	
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-0.000114441	0	0
					}
					
					%args_role
					
					{bone "Rhino_Shared"
						{bone "rhino_smokelaunchers"
							{parameters "ID=body;"}
							{Orientation
								0	1	0
								-1	0	0
								0	0	1
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_smokelaunchers.ply"}	{Visibility 0}		; // <- add in interaction entity
						}
						{bone "rhino_hatch"
							{parameters "ID=body;"}
							{Matrix34
								0	1	0
								-1	0	0
								0	0	1
								40.5449	19.4153	71.4763
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_hatch.ply"}
							
							{bone "rhino_hatch1"
								{parameters "ID=body;"}
								{Position 13.5727	0.0173759	4.63647}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_hatch1.ply"}
							}
							{bone "rhino_hatch2"
								{parameters "ID=body;"}
								{Position -13.6898	0.0147972	4.63647}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_hatch2.ply"}
							}
						}						
					}
				}
				{bone "back_door"
					{parameters "ID=body;"}
					{Position -0.000113633	74.3119	17.6768}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/back_door.ply"}
				}
				{bone revolute "wheell7"
					{parameters "ID=trackleft;Radius=0.27;"}
					{Matrix34
						0	1	0
						0	0	1
						1	0	0
						45.3109	-92.192	22.5869
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheell7.ply"}
				}
				{bone revolute "wheelr4"
					{parameters "ID=trackright;Radius=0.27;"}
					{Matrix34
						0	1	0
						0	0	1
						1	0	0
						-45.7031	-92.1919	22.5869
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheelr4.ply"}
				}
				{bone revolute "wheell6"
					{parameters "ID=trackleft;Radius=0.27;"}
					{Matrix34
						0	1	0
						0	0	1
						1	0	0
						45.3124	84.1619	23.4043
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheell6.ply"}
				}
				{bone revolute "wheelr6"
					{parameters "ID=trackright;Radius=0.27;"}
					{Matrix34
						0	1	0
						0	0	1
						1	0	0
						-45.7046	84.1619	23.4043
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheelr6.ply"}
				}
				{bone "fx_predator_headlight_l"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						49.2126	-70.8661	64.9606
					}
				}
				{bone "fx_predator_headlight_r"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-49.2126	-70.8661	64.9606
					}
				}
				{bone "fxfire1"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						0	0	68.8976
					}
				}
				{bone "fxfire3"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						0	54.1339	39.3701
					}
				}
				{bone "fxfire4"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						0	-39.3701	39.3701
					}
				}
				{bone "fxsmoke1"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						-61.1039	40.7609	78.1842
					}
				}
				{bone "fxsmoke2"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						60.8955	-42.0085	78.1842
					}
				}
				{bone "fxsmoke3"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						-61.1039	-42.0085	78.1842
					}
				}
				{bone "fxsmoke4"
					{Matrix34
						0	0	1
						0	1	0
						-1	0	0
						60.6404	40.6155	78.1842
					}
				}
				{bone "visor1"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						17.0196	-66.7034	62.4301
					}
				}
				{bone "visor2"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-17.0277	-66.7034	62.4301
					}
				}
				{bone "visor4"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-0.000180244	0	157.48
					}
				}
			}
			{bone "wheelsl"
				{parameters "wheelsL;"}
				{Position 0	0	39.3701}
				{bone prizmatic "suspension_l1"
					{limits -0.3 0.5}
					{Position 72.3665	45.3111	-29.5276}
					{bone revolute "wheell1"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-1.52588e-05	0.000102997	1.49433
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheell1.ply"}
					}
				}
				{bone prizmatic "suspension_l2"
					{limits -0.3 0.5}
					{Position 37.297	45.3114	-29.5276}
					{bone revolute "wheell2"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-3.8147e-05	0.000106812	1.81683
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheell2.ply"}
					}
				}
				{bone prizmatic "suspension_l3"
					{limits -0.3 0.5}
					{Position 2.67099	45.3117	-29.5276}
					{bone revolute "wheell3"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-1.04904e-05	8.01086e-05	1.90338
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheell3.ply"}
					}
				}
				{bone prizmatic "suspension_l4"
					{limits -0.3 0.5}
					{Position -31.4672	45.312	-29.5276}
					{bone revolute "wheell4"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	6.48499e-05	1.98997
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheell4.ply"}
					}
				}
				{bone prizmatic "suspension_l5"
					{limits -0.3 0.5}
					{Position -64.1377	45.3123	-29.5276}
					{bone revolute "wheell5"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							1.52588e-05	0.000110626	2.08661
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheell5.ply"}
					}
				}
				{bone "trackl"
					{parameters "ID=trackLeft;"}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						0	0.000110758	-39.3701
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/trackl.ply"}
				}
				{bone "fxtracel2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-78.7402	45.2756	-27.5591
					}
				}
				{bone "fxtracel1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						86.6142	45.2756	-27.5591
					}
				}
				{bone "fxtracel3"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						0	45.2756	-27.5591
					}
				}
			}
			{bone "wheelsr"
				{parameters "wheelsR;"}
				{Position 0	0	39.3701}
				{bone prizmatic "suspension_r1"
					{limits -0.3 0.5}
					{Position 72.3664	-45.7033	-29.5276}
					{bone revolute "wheelr3"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-3.8147e-05	-1.90735e-05	1.49426
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheelr3.ply"}
					}
				}
				{bone prizmatic "suspension_r2"
					{limits -0.3 0.5}
					{Position 37.2969	-45.7036	-29.5276}
					{bone revolute "wheelr2"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	4.19617e-05	1.81677
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheelr2.ply"}
					}
				}
				{bone prizmatic "suspension_r3"
					{limits -0.3 0.5}
					{Position 2.67092	-45.7039	-29.5276}
					{bone revolute "wheelr1"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							1.04904e-05	0	1.90333
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheelr1.ply"}
					}
				}
				{bone prizmatic "suspension_r4"
					{limits -0.3 0.5}
					{Position -31.4673	-45.7042	-29.5276}
					{bone revolute "wheelr7"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							2.09808e-05	-4.57764e-05	1.98992
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheelr7.ply"}
					}
				}
				{bone prizmatic "suspension_r5"
					{limits -0.3 0.5}
					{Position -64.1377	-45.7045	-29.5276}
					{bone revolute "wheelr5"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	-0.000179291	2.08962
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/wheelr5.ply"}
					}
				}
				{bone "trackr"
					{parameters "ID=trackRight;"}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						0	0.000110758	-39.3701
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/base_rhino/trackr.ply"}
				}
				{bone "fxtracer2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-78.7402	-45.2756	-27.5591
					}
				}
				{bone "fxtracer1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						86.6142	-45.2756	-27.5591
					}
				}
				{bone "fxtracer3"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						0	-45.2756	-27.5591
					}
				}
			}
			{bone "emit1"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					16	98.4252	0.599798
				}
			}
			{bone "emit2"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					16	-98.4252	0.599798
				}
			}
			{bone "emit3"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-38.3124	-98.4252	0.599798
				}
			}
			{bone "emit4"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-52.471	-98.4252	0.599798
				}
			}
			{bone "emit5"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-38.0459	98.4252	0.599798
				}
			}
			{bone "emit6"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-52.806	98.4252	0.599798
				}
			}
			{bone "emit8"
				{Position -118.11	0	0.599798}
			}
			{bone "emit9"
				{Position -118.11	-22.5276	0.599798}
			}
			{bone "emit10"
				{Position -118.11	22.5276	0.599798}
			}
			{bone "emit12"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-7.15012	114.878	0.599798
				}
			}
			{bone "emit13"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					10.1232	114.878	0.599798
				}
			}
			{bone "emit14"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					10.1232	-116.416	0.599798
				}
			}
			{bone "emit15"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-7.15012	-116.416	0.599798
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/V_Rhino/Model/base/+base_vol.inc")
	
	%args_vol
)