
(Define "Skeleton"
	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_sentinel/Animations/Animations.inc")
		
		{bone revolute "basis"
			{limits 0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "pelvis"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/sentinel_chassis/pelvis.ply"}
			}
			{bone "head"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/sentinel_chassis/head.ply"}
			}
			{bone "legs_l"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/sentinel_chassis/legs_l.ply"}
			}
			{bone "legs_r"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/sentinel_chassis/legs_r.ply"}
			}
			%args_role 
			
			{bone "bip01_pelvis"
				{Matrix34
					-1	0	0
					0	0	1
					0	1	0
					0	-1.93119e-05	48.1064
				}
				{bone "bip01_l_thigh"
					{Matrix34
						0.80022	-0.599707	0
						-0.599707	-0.80022	0
						0	0	-1
						-0.00013133	0.000137329	18.9633
					}
					{bone "bip01_l_foot"
						{Matrix34
							0.80022	-0.599707	0
							0.599707	0.80022	0
							0	0	1
							15.907	41.8465	-5.91278e-05
						}
						{bone "bip01_l_toe3"
							{Matrix34
								0	1	-0.000418099
								1	0	0
								0	-0.000418099	-1
								7.69473	3.93863	0.121191
							}
						}
						{bone "bip01_l_toe1"
							{Matrix34
								-4.56134e-05	1	0
								-0.999985	-4.5611e-05	-0.00548828
								-0.00548828	0	0.999985
								-8.28336	3.90763	-0.0290966
							}
						}
						{bone "bip01_l_toe2"
							{Matrix34
								-0.000207889	1	0.000208855
								-9.65916e-05	-0.000208875	1
								1	0.000207869	9.6635e-05
								-0.182794	3.80095	6.8196
							}
						}
						{bone "bip01_l_toe0"
							{Matrix34
								0.000547095	0.999999	-0.000902804
								0.000114506	-0.000902867	-1
								-1	0.000546991	-0.000114983
								-0.183399	3.99471	-5.85616
							}
						}
						{bone "sentinel_l_leg_ankle"
							{Matrix34
								-0.830363	-0.557221	-0.00101413
								0.00621827	-0.00744649	-0.999953
								0.557187	-0.830331	0.00964824
								3.05176e-05	-4.1008e-05	0.000102997
							}
						}
					}
					{bone "sentinel_l_leg_calf"
						{Matrix34
							-0.998528	0.0542105	-0.0019213
							0.000946836	-0.0179957	-0.999838
							-0.0542364	-0.998367	0.0179179
							14.4819	15.616	0.470715
						}
					}
					{bone "bip01_l_middleleg"
						{Matrix34
							0	0	-1
							-0.984082	-0.177719	0
							-0.177719	0.984082	0
							-0.790558	17.8852	0.472218
						}
					}
				}
				{bone "bip01_r_thigh"
					{Matrix34
						0.80022	-0.599707	0
						-0.599707	-0.80022	0
						0	0	-1
						4.52012e-05	9.15527e-05	-18.9633
					}
					{bone "bip01_r_middleleg"
						{Matrix34
							0	0	-1
							-0.984082	-0.177718	0
							-0.177718	0.984081	0
							-0.790638	17.8852	-0.422871
						}
					}
					{bone "bip01_r_foot"
						{Matrix34
							0.80022	-0.599707	0
							0.599707	0.80022	0
							0	0	1
							15.9068	41.8465	0.000164032
						}
						{bone "bip01_r_toe0"
							{Matrix34
								0	1	0
								1	0	0
								0	0	-1
								7.69476	3.93862	-0.121138
							}
						}
						{bone "bip01_r_toe2"
							{Matrix34
								0	1	0
								0	0	-1
								-1	0	0
								-0.18278	3.80094	-6.81962
							}
						}
						{bone "bip01_r_toe3"
							{Matrix34
								0	1	0
								0	0	1
								1	0	0
								-0.18334	3.9947	5.85615
							}
						}
						{bone "bip01_r_toe1"
							{Matrix34
								0	1	0
								-1	0	0
								0	0	1
								-8.28328	3.90764	0.0291195
							}
						}
						{bone "sentinel_r_leg_ankle"
							{Matrix34
								-0.830363	-0.557222	0.00101438
								-0.00621973	0.0074482	-0.999953
								0.557188	-0.83033	-0.00965048
								3.52859e-05	-2.28882e-05	0
							}
						}
					}
					{bone "sentinel_r_leg_calf"
						{Matrix34
							-0.998528	0.0542108	0.00192076
							-0.000946212	0.0179969	-0.999838
							-0.0542365	-0.998367	-0.0179191
							14.4817	15.6158	-0.470764
						}
					}
				}
				{bone "bip01_spine"
					{Matrix34
						1	0.000797182	0
						-0.000797182	1	0
						0	0	1
						-16.5302	1.5767	-5.60846e-05
					}
					{bone "bip01_spine1"
						{Matrix34
							-1	0.000796707	0
							0	0	1
							0.000796707	1	0
							0.000484467	0.532558	0
						}
						{bone "bip01_spine2"
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								-0.0215282	0	0.602329
							}
							{bone "fxfire3"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									0	0	0
								}
							}
							{bone "fxfire4"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									0.888378	13.3997	0
								}
							}
							{bone "fxsmoke1"
								{Matrix34
									0	1	0
									0	0	-1
									-1	0	0
									-20.1758	44.5341	-4.44519
								}
							}
							{bone "fxsmoke2"
								{Matrix34
									0	1	0
									0	0	-1
									-1	0	0
									-20.1758	44.5341	3.94517
								}
							}
							{bone "gun_rot"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									19.9344	-3.22922	8.58208
								}
								{bone "bone_weapon_r"
									{Matrix34
										1	0	0
										0	0	1
										0	-1	0
										0	0	0
									}
									{bone "w_ac_barrel"
										{Matrix34
											1	0	0
											0	0	-1
											0	1	0
											26.7854	-0.960743	3.18557
										}
									}
									{bone "w_ac_ammo"
										{Matrix34
											1	0	0
											0	0	-1
											0	1	0
											-3.66349	-2.27751	5.88617
										}
									}
									{bone "foresight_multilaser"
										{Matrix34
											1	0	0
											0	0	-1
											0	1	0
											35.3745	-0.0464058	2.01856
										}
									}
									{bone "foresight_plasma"
										{Matrix34
											1	0	0
											0	0	-1
											0	1	0
											19.6134	1.2986	2.93991
										}
										{bone "fx_plasma1"
											{Position -7.98362	0	1.45416}
										}
									}
									{bone "foresight_lascannon"
										{Matrix34
											1	0	0
											0	0	-1
											0	1	0
											38.3257	1.78682	2.66149
										}
									}
									{bone "foresight_autocannon"
										{Matrix34
											1	0	0
											0	0	-1
											0	1	0
											42.7689	-0.966171	3.12078
										}
										{bone "fxshell_autocannon"
											{Matrix34
												0	-0.965926	0.258819
												1	0	0
												0	0.258819	0.965926
												-37.824	-2.08932	1.04696
											}
										}
									}
									{bone "foresight_flamer"
										{Matrix34
											1	0	0
											0	0	-1
											0	1	0
											29.7521	-0.209358	2.54316
										}
										{bone "fx_flamer"
											{Matrix34
												0.626203	0	0.77966
												0	1	0
												-0.77966	0	0.626203
												0.598137	0	-1.15091
											}
										}
									}
								}
							}
							{bone "headlight"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									11.9814	37.6484	-1.07434
								}
							}
							{bone revolute "driver"
								{Matrix34
									0.999938	-0.00927789	0.00615211
									0.00615246	0	-0.999981
									0.00927771	0.999957	5.70116e-05
									-6.4281	2.83591	0.908526
								}
							}
						}
					}
				}
				{bone "fxfire1"
					{Orientation
						-1	0	0
						0	0	1
						0	1	0
					}
				}
			}
			{bone "emit2"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					25	-50	0
				}
			}
			{bone "emit1"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					25	50	0
				}
			}
		}
	}

	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_sentinel/Model/Base/+base_vol.inc")
	
	%args_vol
)