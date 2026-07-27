
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_dorn/animations/anm.ext"}

		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "emit3"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					1.43051e-05	120	0
				}
			}
			{bone "emit1"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-60	120	0
				}
			}
			{bone "emit2"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-60	-120	0
				}
			}
			{bone "emit4"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-1.43195e-05	-120.121	0
				}
			}
			{bone "body"
				{parameters "ID=body;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/body.ply"}
				
				{bone "Role"	
					%args_role
				}
				{bone "sponsons"
					{parameters "ID=body;"}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/sponsons.ply"}
				}
				{bone "fuel_barrels"
					{Orientation
						0	1	0
						-1	0	0
						0	0	1
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/fuel_barrels.ply"}
				}
				{bone "shields_tracks"
					{parameters "ID=body;"}
					{Orientation
						0	1	0
						-1	0	0
						0	0	1
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/shields_tracks.ply"}
				}
				{bone "engine"
					{parameters "ID=engine;"}
					{Orientation
						0	1	0
						-1	0	0
						0	0	1
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/engine.ply"}
				}
				{bone "visor_driver"
					{Position 59.9821	-12.9783	75.2637}
				}
				{bone "visor_around"
					{Position 0	2.76566e-05	153.788}
				}
				{bone "fxsmoke2"
					{Matrix34
						-0.987688	0	0.156435
						0	-1	0
						0.156435	0	0.987688
						-127.859	21.3784	46.8621
					}
				}
				{bone "fxsmoke1"
					{Matrix34
						-0.987688	0	0.156435
						0	-1	0
						0.156435	0	0.987688
						-127.859	31.8576	46.8621
					}
				}
				{bone "fxsmoke3"
					{Matrix34
						-0.987688	0	0.156435
						0	-1	0
						0.156435	0	0.987688
						-127.859	-21.261	46.8621
					}
				}
				{bone "fxsmoke4"
					{Matrix34
						-0.987688	0	0.156435
						0	-1	0
						0.156435	0	0.987688
						-127.859	-31.7402	46.8621
					}
				}
				{bone "backlight1"
					{Position -115.657	21.0907	29.9883}
				}
				{bone "backlight2"
					{Position -115.657	-21.0909	29.9883}
				}
				{bone "fxfire3"
					{Matrix34
						-0.987688	0	0.156435
						0	-1	0
						0.156435	0	0.987688
						-3.45189	0	87.6633
					}
				}
				{bone "fxfire1"
					{Matrix34
						-0.987688	0	0.156435
						0	-1	0
						0.156435	0	0.987688
						-70.0691	0	73.0308
					}
				}
				{bone "fxfire4"
					{Matrix34
						-0.987688	0	0.156435
						0	-1	0
						0.156435	0	0.987688
						-32.7132	0	65.7439
					}
				}
				{bone "headlight1"
					{Position 84.4569	-28.0471	55.5244}
				}
				{bone "headlight2"
					{Position 84.4569	28.2482	55.5244}
				}
				{bone "headlight4"
					{Position 59.1242	-31.4239	76.1963}
				}
				{bone "headlight3"
					{Position 59.1242	31.4647	76.1963}
				}
			}
			{bone "trackleft"
				{bone prizmatic "suspension_l5"
					{limits -0.1 0.1}
					{Position -102.28	57.6467	16.1543}
					{bone revolute "wheell5"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheell5.ply"}
					}
				}
				{bone prizmatic "suspension_l4"
					{limits -0.1 0.1}
					{Position -67.79	58.1109	16.1543}
					{bone revolute "wheell4"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheell4.ply"}
					}
				}
				{bone prizmatic "suspension_l3"
					{limits -0.1 0.1}
					{Position -30.8435	58.111	16.1543}
					{bone revolute "wheell3"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheell3.ply"}
					}
				}
				{bone prizmatic "suspension_l2"
					{limits -0.1 0.1}
					{Position 4.42898	58.111	16.1543}
					{bone revolute "wheell2"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheell2.ply"}
					}
				}
				{bone prizmatic "suspension_l1"
					{limits -0.1 0.1}
					{Position 38.1859	57.6467	16.1543}
					{bone revolute "wheell1"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	1.90735e-05	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheell1.ply"}
					}
				}
				{bone "trackl"
					{parameters "ID=trackleft;"}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/trackl.ply"}
				}
				{bone "fxtracel2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-30.8435	58.1109	0
					}
				}
				{bone "fxtracel1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						38.1859	57.6467	0
					}
				}
				{bone "fxtracel3"
					{Matrix34
						-0.967044	0.101641	0.23344
						-0.104529	-0.994522	0
						0.232161	-0.0244009	0.972371
						-102.28	57.6463	0
					}
				}
			}
			{bone "trackright"
				{bone "trackr"
					{parameters "ID=trackright;"}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/trackr.ply"}
				}
				{bone prizmatic "suspension_r3"
					{limits -0.1 0.1}
					{Position -30.8435	-58.1109	16.1543}
					{bone revolute "wheelr3"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheelr3.ply"}
					}
				}
				{bone prizmatic "suspension_r4"
					{limits -0.1 0.1}
					{Position -67.79	-58.111	16.1543}
					{bone revolute "wheelr4"
						{parameters "ID=trackright;Radius=0.41;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheelr4.ply"}
					}
				}
				{bone prizmatic "suspension_r5"
					{limits -0.1 0.1}
					{Position -102.28	-57.6467	16.1543}
					{bone revolute "wheelr5"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	-1.52588e-05	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheelr5.ply"}
					}
				}
				{bone prizmatic "suspension_r1"
					{limits -0.1 0.1}
					{Position 38.1859	-57.6467	16.1543}
					{bone revolute "wheelr1"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheelr1.ply"}
					}
				}
				{bone prizmatic "suspension_r2"
					{limits -0.1 0.1}
					{Position 4.42898	-58.111	16.1543}
					{bone revolute "wheelr2"
						{parameters "ID=trackright;Radius=0.41;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/wheelr2.ply"}
					}
				}
				{bone "fxtracer1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						38.1859	-57.6467	0
					}
				}
				{bone "fxtracer2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-30.8435	-58.111	0
					}
				}
				{bone "fxtracer3"
					{Matrix34
						-0.957599	-0.168851	0.23344
						0.173649	-0.984808	0
						0.229893	0.0405368	0.972371
						-102.28	-57.6467	0
					}
				}
			}
		}			
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_Dorn/Model/base/+base_vol.inc")
	
	%args_vol
)