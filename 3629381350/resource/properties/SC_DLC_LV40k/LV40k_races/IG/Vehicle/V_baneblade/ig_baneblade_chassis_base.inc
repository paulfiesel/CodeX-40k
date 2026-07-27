
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_baneblade/animations/anm.ext"}

		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "body"
				{Position 0	-0.00126839	0}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/body.ply"}
				{bone "decals"
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						3.51753	-3.34812	0.000292997
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/decals.ply"}
				}
				{bone "aux_turret1"
					{Position 8.0683	131.444	82.0739}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/aux_turret1.ply"}
					{bone "hb_left"
						{Matrix34
							0.707107	0.707107	0
							0	0	1
							0.707107	-0.707107	0
							-0.895521	-0.915466	6.49384
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/hb_left.ply"}
						{bone "foresight_aux1"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								33.3131	-1.56233	0.0202179
							}
							{bone "barrels_aux1_01"
								{Position 0	-4.81468	0}
							}
							{bone "barrels_aux1_00"
								{Position 0	4.88477	0}
							}
						}
					}
				}
				{bone "aux_turret4"
					{Position -3.47795	120.65	103.392}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/aux_turret4.ply"}
					{bone "las_left"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							16.5147	-0.0134277	8.39989
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/las_left.ply"}
						{bone "foresight_aux4"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								57.2909	0.327431	0
							}
						}
					}
				}
				{bone "aux_turret2"
					{Position 8.06834	-131.444	82.074}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/aux_turret2.ply"}
					{bone "hb_right"
						{Matrix34
							0.707107	-0.707107	0
							0	0	1
							-0.707107	-0.707107	0
							-0.895523	0.915466	6.49384
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/hb_right.ply"}
					}
					{bone "foresight_aux2"
						{Matrix34
							0.707107	-0.707107	0
							0.707107	0.707107	0
							0	0	1
							22.6747	-22.6295	4.93147
						}
						{bone "barrels_aux2_01"
							{Position 1.52588e-05	4.88477	0}
						}
						{bone "barrels_aux2_00"
							{Position 0	-4.81468	0}
						}
					}
				}
				{bone "aux_turret5"
					{Position -3.47792	-120.764	103.392}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/aux_turret5.ply"}
					{bone "las_right"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							16.5147	0.0134354	8.39989
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/las_right.ply"}
						{bone "foresight_aux5"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								57.2909	0.327385	-0.0182343
							}
						}
					}
				}
				{bone "turret_main"
					{Matrix34
						1	0	0
						0	0	1
						0	-1	0
						-35.2629	-23.0358	130.568
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/turret_main.ply"}
					{bone "mantlet"
						{Position 41.5264	15.1048	0}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/mantlet.ply"}
						{bone "baneblade_barrel"
							{Matrix34
								-1	0	0
								0	0	1
								0	1	0
								116.512	-0.00360107	-8.91983
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/baneblade_barrel.ply"}
							{bone "foresight_baneblade"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									-45.4177	0	-4.57764e-05
								}
							}
						}
						{bone "ac_barrel"
							{Matrix34
								-1	0	0
								0	0	1
								0	1	0
								51.3385	0.163727	13.0515
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/ac_barrel.ply"}
							{bone "foresight_autocannon"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									-18.4498	0	0
								}
							}
						}
						{bone "fx_optic1"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								17.9595	8.6749	12.827
							}
						}
					}
					{bone "hatch1"
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-24.6212	43.4128	-21.182
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/hatch1.ply"}
					}
					{bone "hatch2"
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-25.7102	48.593	36.192
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/hatch2.ply"}
					}
					{bone "visor_gunner1"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							33.354	37.5249	-9.98174
						}
					}
					{bone "gun_rot_stubber"
						{Matrix34
							0.87462	0	-0.48481
							0	1	0
							0.48481	0	0.87462
							6.60694	42.1349	-28.8978
						}
						{bone "stubber_aa"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								0	1.52588e-05	1.52588e-05
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/stubber_aa.ply"}
							{bone "fxshell_stubber"
								{Matrix34
									-0.0145351	-0.999894	0
									0.999894	-0.0145351	0
									0	0	1
									5.86503	-1.75263	10.1544
								}
							}
							{bone "foresight_stubber"
								{Matrix34
									0.999962	-0.00872648	0
									0.00872648	0.999962	0
									0	0	1
									28.8444	-0.228136	9.56923
								}
							}
						}
					}
					{bone "commander"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							-11.2887	41.5257	36.4435
						}
					}
					{bone "gunner_aa"
						{Matrix34
							0.87462	0	-0.48481
							-0.48481	0	-0.87462
							0	1	0
							-7.11734	36.3454	-21.2108
						}
					}
				}
				{bone "aux_turret3"
					{Position 70.4632	-27.9101	94.1383}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/aux_turret3.ply"}
					{bone "hb_main"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							16.5121	-0.0111828	8.40029
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/hb_main.ply"}
						{bone "foresight_aux3"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								29.2576	-0.206459	-0.285364
							}
							{bone "barrels_aux3_01"
								{Position 0	4.57303	0}
							}
							{bone "barrels_aux3_00"
								{Position -1.52588e-05	-4.75677	0}
							}
						}
					}
				}
				{bone "body_2"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/body_2.ply"}
				}
				{bone "body_3"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/body_3.ply"}
				}
				{bone "gun_rot_demolisher"
					{Position 91.4977	28.9783	91.9159}
					{bone "cannon_demolisher"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-2.28882e-05	0	3.05176e-05
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/cannon_demolisher.ply"}
						{bone "foresight_demolisher"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								44.3893	-0.495224	0.0317097
							}
						}
					}
				}
				{bone "visor_driver"
					{Position 112.984	-28.2992	84.0411}
				}
				{bone "visor_around"
					{Position -1.90882	-13.0541	246.833}
				}
				{bone "fxsmoke1"
					{Matrix34
						-0.917132	0	0.398584
						0	-1	0
						0.398584	0	0.917132
						-179.515	-4.20118	133.866
					}
				}
				{bone "fxsmoke2"
					{Matrix34
						-0.926919	0	0.375261
						0	-1	0
						0.375261	0	0.926919
						-179.254	8.30735	137.367
					}
				}
				{bone "fxsmoke3"
					{Matrix34
						-0.926919	0	0.375261
						0	-1	0
						0.375261	0	0.926919
						-179.254	20.5685	137.367
					}
				}
				{bone "fxsmoke4"
					{Matrix34
						-0.917132	0	0.398584
						0	-1	0
						0.398584	0	0.917132
						-179.515	33.075	133.866
					}
				}
				{bone "fxfire1"
					{Position -131.049	-4.20118	113.242}
				}
				{bone "fxfire3"
					{Position -35.2629	-23.0358	104.994}
				}
				{bone "fxfire4"
					{Position 60.4738	32.3114	104.994}
				}
				{bone "headlight1"
					{Position 135.675	82.0594	94.1647}
				}
				{bone "headlight2"
					{Position 135.675	92.8801	94.1647}
				}
				{bone "headlight3"
					{Position 135.675	-93.0129	94.1645}
				}
				{bone "headlight4"
					{Position 135.675	-82.1922	94.1645}
				}
			}
			{bone "trackleft"
				{parameters "ID=trackLeft;"}
				{Position 0	0	0}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/trackleft.ply"}
				{bone prizmatic "suspension_l8"
					{limits -0.1 0.1}
					{Position -96.6302	90.5714	18.0724}
					{bone revolute "wheell8"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell8.ply"}
					}
				}
				{bone prizmatic "suspension_l7"
					{limits -0.1 0.1}
					{Position -60.7533	90.5714	18.0724}
					{bone revolute "wheell7"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell7.ply"}
					}
				}
				{bone prizmatic "suspension_l6"
					{limits -0.1 0.1}
					{Position -28.0294	90.5714	18.0724}
					{bone revolute "wheell6"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell6.ply"}
					}
				}
				{bone prizmatic "suspension_l5"
					{limits -0.1 0.1}
					{Position 4.04482	90.5714	18.0724}
					{bone revolute "wheell5"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							1.62125e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell5.ply"}
					}
				}
				{bone prizmatic "suspension_l4"
					{limits -0.1 0.1}
					{Position 37.0306	90.5714	18.0724}
					{bone revolute "wheell4"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell4.ply"}
					}
				}
				{bone prizmatic "suspension_l3"
					{limits -0.1 0.1}
					{Position 68.8879	90.5714	18.0724}
					{bone revolute "wheell3"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell3.ply"}
					}
				}
				{bone prizmatic "suspension_l2"
					{limits -0.1 0.1}
					{Position 101.211	90.5714	20.0588}
					{bone revolute "wheell2"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell2.ply"}
					}
				}
				{bone "fxtracel3"
					{Matrix34
						-0.967044	0.101641	0.23344
						-0.104529	-0.994522	0
						0.232161	-0.0244009	0.972371
						-96.6302	90.5714	0
					}
				}
				{bone "fxtracel2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-28.0294	90.5714	0
					}
				}
				{bone "fxtracel1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						101.211	90.5714	0
					}
				}
				{bone "suspension_l1_np"
					{Position 137.382	90.5714	29.2001}
					{bone revolute "wheell1"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-1.52588e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell1.ply"}
					}
				}
				{bone "suspension_l10_np"
					{Position 171.148	90.5714	42.9113}
					{bone revolute "wheell10"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell10.ply"}
					}
				}
				{bone "suspension_l9_np"
					{Position -139.397	90.5714	45.8718}
					{bone revolute "wheell9"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-1.52588e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheell9.ply"}
					}
				}
			}
			{bone "trackright"
				{parameters "ID=trackRight;"}
				{Position 0	0	0}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/trackright.ply"}
				{bone prizmatic "suspension_r2"
					{limits -0.1 0.1}
					{Position 101.211	-90.0626	20.0588}
					{bone revolute "wheelr2"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr2.ply"}
					}
				}
				{bone prizmatic "suspension_r3"
					{limits -0.1 0.1}
					{Position 68.8879	-90.0626	18.0724}
					{bone revolute "wheelr3"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr3.ply"}
					}
				}
				{bone prizmatic "suspension_r4"
					{limits -0.1 0.1}
					{Position 37.0306	-90.0626	18.0724}
					{bone revolute "wheelr4"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr4.ply"}
					}
				}
				{bone prizmatic "suspension_r5"
					{limits -0.1 0.1}
					{Position 4.04487	-90.0627	18.0724}
					{bone revolute "wheelr5"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr5.ply"}
					}
				}
				{bone prizmatic "suspension_r6"
					{limits -0.1 0.1}
					{Position -28.0293	-90.0627	18.0724}
					{bone revolute "wheelr6"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr6.ply"}
					}
				}
				{bone prizmatic "suspension_r7"
					{limits -0.1 0.1}
					{Position -60.7532	-90.0627	18.0724}
					{bone revolute "wheelr7"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr7.ply"}
					}
				}
				{bone prizmatic "suspension_r8"
					{limits -0.1 0.1}
					{Position -96.6301	-90.0626	18.0725}
					{bone revolute "wheelr8"
						{parameters "ID=trackright;Radius=0.41;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr8.ply"}
					}
				}
				{bone "fxtracer3"
					{Matrix34
						-0.957599	-0.168851	0.23344
						0.173649	-0.984808	0
						0.229893	0.0405368	0.972371
						-96.6301	-90.0626	0
					}
				}
				{bone "fxtracer2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-28.0294	-90.0627	0
					}
				}
				{bone "fxtracer1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						101.211	-90.0626	0
					}
				}
				{bone "suspension_r1_np"
					{Position 137.381	-90.0626	29.2001}
					{bone revolute "wheelr1"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							0	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr1.ply"}
					}
				}
				{bone "suspension_r10_np"
					{Position 171.148	-90.0626	42.9113}
					{bone revolute "wheelr10"
						{parameters "ID=trackright;Radius=0.41;"}
						{Orientation
							-1	0	0
							0	0	1
							0	1	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr10.ply"}
					}
				}
				{bone "suspension_r9_np"
					{Position -139.397	-90.0625	45.8718}
					{bone revolute "wheelr9"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							1.52588e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/baneblade_chassis/wheelr9.ply"}
					}
				}
			}
			{bone "emit2"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-148.562	-153.198	0
				}
			}
			{bone "emit1"
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					211.767	-22.493	0
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_baneblade/Model/base/+base_vol.inc")
	
	%args_vol
)