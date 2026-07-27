;Exported by: GUSTAVO
;Date:        Thu Dec 11 12:55:55 2025
;File:        E:\GEM Projects\40k Last Victim\+Vehicles\+GOH\Gun Waggon Bashed\bckp\Gunwagon10.max

(Define "Skeleton"
	{Skeleton
		{animation
			{sequence "start"	{speed 0.7} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/start"}}
			{sequence "stop"	{speed 0.7} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/stop"}}
			{sequence "hit"		{speed 0.5} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/hit"}}
		
			{smooth 0.03}
			{sequence "fire_flakk_00"		{speed 0.5} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/fire_flakk_00"}}
			{sequence "fire_flakk_01"		{speed 0.5} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/fire_flakk_01"}}
			{sequence "fire_flakk_02"		{speed 0.5} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/fire_flakk_02"}}
			{sequence "fire_flakk_03"		{speed 0.5} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/fire_flakk_03"}}
		}
		{bone revolute "basis"
			{limits 0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "pivot_front"
				{bone "steer_l"
					{Position 70.1864	42.1663	19.685}
					{bone prizmatic "suspension_l1"
						{limits -0.5 0.7}
						{bone revolute "wheell1"
							{parameters "ID=wheelleft1;Radius=1.4;"}
							{Orientation
								-1	0	0
								0	0	1
								0	1	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheell1.ply"}
						}
					}
					{bone "fxtracel1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							0	0	-17.7165
						}
					}
				}
				{bone "steer_r"
					{Position 70.187	-42.1655	19.685}
					{bone prizmatic "suspension_r1"
						{limits -0.5 0.7}
						{Position 0	0	0}
						{bone revolute "wheelr1"
							{parameters "ID=wheelright1;Radius=1.4;"}
							{Orientation
								-1	0	0
								0	0	1
								0	1	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheelr1.ply"}
						}
					}
					{bone "fxtracer1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							0	0	-17.7165
						}
					}
				}
			}
			{bone "emit1"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-48.7726	78.7402	0
				}
			}
			{bone "emit2"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-48.7726	-78.7402	0
				}
			}
			{bone "emit4"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					29.9675	-78.7402	0
				}
			}
			{bone "emit3"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					29.9675	78.7402	0
				}
			}
			{bone "body"
				{parameters "ID=body;"}
				{animation
					{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/body_b"} {speed -0.6}}
				}
				{Position 0	0	-4.92126}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/body.ply"}
				{bone "Role"
					{Position 0	0	4.92126}
					
					%args_role
				}
				{bone "seat20"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						0.429423	-51.7323	56.4958
					}
				}
				{bone "seat21"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-29.1346	51.7251	56.4958
					}
				}
				{bone "seat22"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-55.8352	-51.7323	56.4958
					}
				}
				{bone "seat23"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						0.429423	51.7251	56.4958
					}
				}
				{bone "seat24"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-29.1346	-51.7323	56.4958
					}
				}
				{bone "seat25"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-55.8352	51.7251	56.4958
					}
				}
				{bone "engine"
					{parameters "ID=engine;"}
					{animation
						{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Animations/engine_b"} {speed -0.6}}
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/engine.ply"}
					{bone "fxfire5"
						{Position -75.2966	15.074	66.5204}
					}
					{bone "fxfire1"
						{Position -67.3261	-13.9935	70.8661}
					}
					{bone "engine_parts5"
						{parameters "ID=Engine;"}
						{Position -45.7608	-23.7376	43.6187}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/engine_parts5.ply"}
					}
					{bone "engine_parts1"
						{parameters "ID=Engine;"}
						{Position -75.1104	14.6404	70.4945}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/engine_parts1.ply"}
					}
					{bone "engine_parts2"
						{parameters "ID=Engine;"}
						{Position -45.7608	4.81528	43.6187}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/engine_parts2.ply"}
					}
					{bone "engine_parts3"
						{parameters "ID=Engine;"}
						{Position -67.5136	-0.858936	74.9137}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/engine_parts3.ply"}
					}
					{bone "engine_parts4"
						{parameters "ID=Engine;"}
						{Position -67.5136	-27.0009	74.9031}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/engine_parts4.ply"}
					}
				}
				{bone "fxfire4"
					{Position 54.0221	0	47.7081}
				}
				{bone "fxsmoke1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-89.1831	-7.79426	95.2102
					}
				}
				{bone "fxsmoke2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-89.1831	-20.0845	95.2102
					}
				}
				{bone "visor1"
					{Position -19.685	0	123.031}
				}
				{bone "visor3"
					{Position 72.7837	0.62746	50.7406}
				}
			}
			{bone "wheelsl"
				{parameters "wheelsL;"}
				{bone "trackl"
					{parameters "ID=trackLeft;"}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/trackl.ply"}
				}
				{bone prizmatic "suspension_l7"
					{limits -0.4 0.6}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-70.1169	43.7201	14.7008
					}
					{bone revolute "wheell7"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheell7.ply"}
					}
				}
				{bone prizmatic "suspension_l6"
					{limits -0.3 0.5}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-49.3475	43.0513	9.9323
					}
					{bone revolute "wheell6"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							0	1.90735e-05	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheell6.ply"}
					}
				}
				{bone prizmatic "suspension_l5"
					{limits -0.3 0.5}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-33.0221	43.051	9.9323
					}
					{bone revolute "wheell5"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheell5.ply"}
					}
				}
				{bone prizmatic "suspension_l4"
					{limits -0.3 0.5}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-16.8749	43.0511	9.93229
					}
					{bone revolute "wheell4"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							-1.14441e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheell4.ply"}
					}
				}
				{bone prizmatic "suspension_l3"
					{limits -0.3 0.5}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-0.549238	43.0513	9.93228
					}
					{bone revolute "wheell3"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							-1.14441e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheell3.ply"}
					}
				}
				{bone prizmatic "suspension_l2"
					{limits -0.4 0.7}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						11.6171	43.0599	23.0688
					}
					{bone "wheell2"
						{parameters "ID=trackleft;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							-2.67029e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheell2.ply"}
					}
				}
				{bone "fxtracel3"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-70.1169	43.7201	14.7008
					}
				}
				{bone "fxtracel2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-33.0221	43.051	9.93229
					}
				}
			}
			{bone "wheelsr"
				{parameters "wheelsR;"}
				{bone "trackr"
					{parameters "ID=trackRight;"}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/trackr.ply"}
				}
				{bone prizmatic "suspension_r7"
					{limits -0.4 0.6}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-70.1169	-43.6682	14.7008
					}
					{bone revolute "wheelr7"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheelr7.ply"}
					}
				}
				{bone prizmatic "suspension_r6"
					{limits -0.3 0.5}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-49.3475	-44.337	9.9323
					}
					{bone revolute "wheelr6"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							0	1.90735e-05	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheelr6.ply"}
					}
				}
				{bone prizmatic "suspension_r5"
					{limits -0.3 0.5}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-33.0221	-44.3372	9.9323
					}
					{bone revolute "wheelr5"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheelr5.ply"}
					}
				}
				{bone prizmatic "suspension_r4"
					{limits -0.3 0.5}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-16.8749	-44.3372	9.93229
					}
					{bone revolute "wheelr4"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							-1.14441e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheelr4.ply"}
					}
				}
				{bone prizmatic "suspension_r3"
					{limits -0.3 0.5}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-0.549238	-44.337	9.93228
					}
					{bone revolute "wheelr3"
						{parameters "ID=trackleft;Radius=0.71;"}
						{Matrix34
							0	1	0
							0	0	1
							1	0	0
							-1.14441e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheelr3.ply"}
					}
				}
				{bone prizmatic "suspension_r2"
					{limits -0.4 0.7}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						11.6171	-44.3284	23.0688
					}
					{bone "wheelr2"
						{parameters "ID=trackright;"}
						{Matrix34
							0	-0.984808	-0.173648
							1	0	0
							0	-0.173648	0.984808
							-2.67029e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/wheelr2.ply"}
					}
				}
				{bone "fxtracer3"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-70.1169	-43.6682	14.7008
					}
				}
				{bone "fxtracer2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-33.0221	-44.3372	9.93229
					}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gunwagon/Model/base/+base_vol.inc")
	
	%args_vol
)