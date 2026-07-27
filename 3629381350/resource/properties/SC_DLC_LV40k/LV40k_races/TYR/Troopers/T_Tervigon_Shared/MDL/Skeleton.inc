
(Define "Skeleton"
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Tervigon_Shared/MDL/Volumes.inc")

	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Tervigon_Shared/MDL/Animations/Animations.inc")
		
		(Define "ik_speed" 	{speed 0.05})
		
		{bone revolute "basis"
			{limits -0 0}
			("ik_speed") 
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Tervigon_Shared/MDL/Models/tex_%color/+models_%model.ext")
					
			("SC_Troopers_Aim_Ref_MDL_Custom" speed(60) height(60))
	
			{bone revolute "m_aim_h"
				{limits -15 15} ("ik_speed")
				{Matrix34
					1	0	0
					0	1	0
					0	0	1
					8.74998	0	30
				}
				{bone revolute "m_aim_v"
					{limits -70 70} ("ik_speed") 
					{Matrix34
						1	0	0
						0	0	1
						0	-1	0
						0	0	0
					}
					{bone "foresight_melee"}
				}
			}
			{bone "spawn_melee_ctc"
				{Position 175	0	60}
			}
			{bone "visor_around"
				{Position 12.5	0	225}
			}
			{bone revolute "placement"
			}
			{bone "emit1"
				{Position 115	0	12.5}
			}
			{bone "emit2"
				{Position 160	0	12.5}
			}
			{bone "emit3"
				{Position 190	0	12.5}
			}
			{bone "emit4"
				{Position 135	-25	12.5}
			}
			{bone "emit5"
				{Position 160	-50	12.5}
			}
			{bone "emit6"
				{Position 200	-45	12.5}
			}
			{bone "emit7"
				{Position 135	25	12.5}
			}
			{bone "emit8"
				{Position 160	50	12.5}
			}
			{bone "emit9"
				{Position 200	45	12.5}
			}
			{bone "emit10"
				{Position 230	0	12.5}
			}
			{bone "terrvigon_rootshjnt"
				{Matrix34
					0.972529	0	0.23278
					-0.23278	0	0.972529
					0	-1	0
					-56.6	-4.28991e-05	144.3
				}
				{bone "fx_fire"}
				{bone "fx_generic_body"}
				
				{bone "terrvigon_spine_01_01shjnt"
					{Matrix34
						0.939276	-0.343163	0
						0.343164	0.939276	0
						0	0	1
						27.5727	1.58047	0
					}
					{bone "terrvigon_spine_01_02shjnt"
						{Matrix34
							0.909207	-0.416343	0
							0.416344	0.909208	0
							0	0	1
							29.4504	-7.30713	0
						}
						{bone "terrvigon_spine_01_03shjnt"
							{Matrix34
								0.970029	-0.242991	0
								0.242991	0.970029	0
								0	0	1
								35.594	-2.90993	0
							}
							{bone "terrvigon_leftarms_clavicleshjnt"
								{Matrix34
									-0.251153	0.357637	-0.899454
									0.754543	0.654381	0.0495022
									0.606289	-0.666244	-0.434202
									8.26123	-10.6763	-12.3871
								}
								{bone "terrvigon_leftarms_shouldershjnt"
									{Matrix34
										0.888484	0.189961	-0.417746
										-0.0287654	0.931567	0.36243
										0.458006	-0.309997	0.833146
										16.6645	-7.50604	16.7028
									}
									{bone "terrvigon_leftarms_elbowshjnt"
										{Matrix34
											-0.71128	0.333754	0.618619
											0.0591551	0.905384	-0.420453
											-0.700415	-0.262465	-0.663725
											100.901	1.90906	-6.57219
										}
										{bone "fx_stomp_hand1l"
											{Matrix34
												-0.0872424	0.970313	-0.225569
												0.0839063	-0.21847	-0.97223
												-0.992647	-0.103746	-0.0623556
												151.81	0.197336	2.727
											}
										}
									}
								}
							}
							{bone "terrvigon_rightarms_clavicleshjnt"
								{Matrix34
									0.251155	-0.357637	-0.899453
									-0.754542	-0.654383	0.0495021
									-0.60629	0.666243	-0.434204
									8.26136	-10.6763	12.3872
								}
								{bone "terrvigon_rightarms_shouldershjnt"
									{Matrix34
										0.888484	0.189963	-0.417745
										-0.0287665	0.931566	0.362432
										0.458006	-0.309998	0.833146
										-16.6657	7.48864	-16.7018
									}
									{bone "terrvigon_rightarms_elbowshjnt"
										{Matrix34
											-0.71128	0.333754	0.618618
											0.0591563	0.905384	-0.420452
											-0.700415	-0.262464	-0.663726
											-100.896	-1.89312	6.56672
										}
										{bone "fx_stomp_hand1r"
											{Matrix34
												0.0872415	-0.970314	0.225567
												0.0839057	-0.218469	-0.97223
												0.992647	0.103745	0.0623553
												-151.811	-0.196295	-2.72714
											}
										}
									}
								}
							}
							{bone revolute "gun_rot_thorns" {Limits -20 20} 	("ik_speed") 
								{Matrix34
									0.703692	0.710505	0
									0	0	-1
									-0.710505	0.703692	0
									40.4902	52.1036	0.0149942
								}
								{bone revolute "foresight_thorns" {Limits -18 18} 	("ik_speed") 
									{Matrix34
										1	0	0
										0	0	1
										0	-1	0
										0	0	3.05176e-05
									}
								}
								{bone "barrels15"
									{Position -6.55467	0.000449323	-6.73071}
								}
								{bone "barrels14"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-13.9495	-8.11527e-05	1.92622
									}
								}
								{bone "barrels13"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-20.7131	-8.23308e-05	9.5063
									}
								}
								{bone "barrels12"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-26.8399	-8.26307e-05	13.2686
									}
								}
								{bone "barrels11"
									{Position -6.60683	10.2775	-13.3476}
								}
								{bone "barrels10"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-14.0017	12.921	-4.6907
									}
								}
								{bone "barrels09"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-19.3762	13.811	1.19481
									}
								}
								{bone "barrels08"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-22.795	26.4825	-16.6532
									}
								}
								{bone "barrels07"
									{Position -14.474	23.8385	-23.7037}
								}
								{bone "barrels06"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-30.5376	-29.3245	-11.8148
									}
								}
								{bone "barrels05"
									{Position -6.60682	-10.2473	-13.3476}
								}
								{bone "barrels04"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-14.0017	-12.8911	-4.6907
									}
								}
								{bone "barrels03"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-19.3762	-13.7808	1.19482
									}
								}
								{bone "barrels02"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-22.795	-26.4523	-16.6532
									}
								}
								{bone "barrels01"
									{Position -14.474	-23.8085	-23.7037}
								}
								{bone "barrels00"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-30.5376	29.3545	-11.8148
									}
								}
							}							
							{bone revolute  "aim_h" {Limits -24 24} 	("ik_speed") 
								{Matrix34
									0.703692	0.710505	0
									0	0	-1
									-0.710505	0.703692	0
									0	0	0
								}
								{bone revolute  "aim_v"  {Limits -16 24}	("ik_speed") 
									{Matrix34
										1	0	0
										0	0	1
										0	-1	0
										0	0	0
									}
									{bone "terrvigon_spine_01_04shjnt"
										{Matrix34
											0.531379	-0.847134	0
											0.847134	0.531379	0
											0	0	1
											20.1907	-18.7472	-1.24897e-05
										}
										{bone "fx_aura"}
										{bone "acidspraygun_ammosack_clavicleshjnt"
											{Matrix34
												0	0	-1
												1	0	0
												0	-1	0
												15.1678	-5.31472	-23.8738
											}
											{bone "acidspraygun_ammosack_shouldershjnt"
												{Matrix34
													0.0830664	0.920095	0.382786
													-0.990263	0.0331516	0.135206
													0.111711	-0.39029	0.913889
													17.4704	5.27262	-3.31
												}
												{bone "acidspraygun_ammosack_elbowshjnt"
													{Matrix34
														0.0375886	0	-0.999293
														0	1	0
														0.999293	0	0.0375879
														40.9007	-1.14441e-05	-1.14441e-05
													}
													{bone "acidspraygun_ammosack_wristshjnt"
														{Matrix34
															0.951119	0.119516	0.284761
															-0.0876122	0.988618	-0.122302
															-0.296136	0.0913748	0.950765
															39.5941	0	1.52588e-05
														}
														{bone "joint2"
															{Matrix34
																0.889684	0.313822	0.33163
																0.323347	0.0797317	-0.942915
																-0.322349	0.946128	-0.0305378
																12.3404	0.342266	-3.59379
															}
															{bone "joint3"
																{Matrix34
																	0.91043	-0.412082	0.0361287
																	0.410977	0.910999	0.0343255
																	-0.0470582	-0.0164024	0.998757
																	24.0262	-2.28882e-05	0
																}
																{bone "joint4"
																	{Matrix34
																		0.830489	-0.390425	0.39731
																		0.0411706	0.754331	0.655202
																		-0.555511	-0.52778	0.642538
																		27.1712	-2.28882e-05	0
																	}
																	{bone "joint5"
																		{Matrix34
																			0.523168	0.771116	0.362871
																			-0.831152	0.555777	0.0172616
																			-0.188366	-0.310631	0.931679
																			23.8669	-0.628736	-0.757965
																		}
																		{bone "joint9"
																			{Position 16.4111	-9.17991	0.786774}
																			{bone "joint6"
																				{Matrix34
																					0.581144	0.804682	0.121489
																					-0.790716	0.593635	-0.149546
																					-0.192458	-0.00915423	0.981263
																					15.4152	7.25368	-0.794571
																				}
																				{bone "joint7"
																					{Matrix34
																						0.958401	0.261157	0.115171
																						-0.226397	0.941285	-0.250451
																						-0.173815	0.21396	0.961254
																						20.7385	0	-1.52588e-05
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
														{bone "fx_ammosack"
															{Matrix34
																0.977623	-0.194211	0.0808362
																-0.196742	-0.980148	0.0245487
																0.0744628	-0.0399031	-0.996425
																-9.09302	-2.66158	20.3224
															}
														}
													}
													{bone "pulse_sack"
														{Matrix34
															-0.108851	-0.990195	0.0875499
															0.310339	-0.117522	-0.943334
															0.944373	-0.0755131	0.320089
															36.0352	-1.05876	29.4002
														}
													}
												}
											}
										}
										{bone "fx_tervigon_uterus"
											{Matrix34
												0.531379	0.847134	0
												-0.847134	0.531379	0
												0	0	1
												65.3844	-27.8229	0.0150068
											}
										}
										{bone "acidspraygun_clavicleshjnt"
											{Matrix34
												0	0	-1
												-1	0	0
												0	1	0
												14.6895	-7.16005	23.6859
											}
											{bone "acidspraygun_shouldershjnt"
												{Matrix34
													0.124576	0.944193	0.304927
													-0.986112	0.0837991	0.143389
													0.109835	-0.318555	0.941519
													-15.5787	-5.10077	5.07293
												}
												{bone "acidspraygun_elbowshjnt"
													{Matrix34
														0.131467	0	-0.99132
														0	1	0
														0.991321	0	0.131467
														-42.3357	1.14441e-05	0
													}
													{bone "acidspraygun_wristshjnt"
														{Matrix34
															0.924198	0.0231018	0.381215
															-0.381798	0.0312774	0.923717
															0.0094148	-0.999244	0.0377273
															-39.1532	-2.67029e-05	0
														}
														{bone "foresight3"
															{Matrix34
																-0.99809	0.0192375	-0.0587088
																-0.0556738	0.131899	0.989699
																0.0267834	0.991077	-0.130575
																-83.6912	-1.05391	-0.092907
															}
														}
													}
												}
											}
										}
										{bone "terrvigon_leftchest_01_01shjnt"
											{Matrix34
												0.993169	-0.0556931	-0.102541
												0.055988	0.998431	0
												0.10238	-0.00574132	0.994729
												39.6869	-30.2719	-4.09413
											}
										}
										{bone "terrvigon_leftchest_bubbles_auxshjnt"
											{Matrix34
												0	0	-1
												-0.661342	0.750084	0
												0.750084	0.661342	0
												35.6212	-49.13	-38.0086
											}
										}
										{bone "terrvigon_leftcrushingclaws_clavicleshjnt"
											{Matrix34
												0	0	-1
												-0.443824	0.896114	0
												0.896114	0.443824	0
												17.0588	-4.39084	-24.3555
											}
											{bone "terrvigon_leftcrushingclaws_shouldershjnt"
												{Matrix34
													0.61178	-0.591861	0.52481
													-0.790842	-0.443279	0.421986
													-0.0171201	-0.673204	-0.739258
													7.27827	-1.59972	-0.884403
												}
												{bone "terrvigon_leftcrushingclaws_elbowshjnt"
													{Matrix34
														0.329901	0.31927	-0.888387
														-0.911459	0.352739	-0.211701
														0.245778	0.879569	0.407371
														34.3567	3.8147e-05	-3.8147e-05
													}
													{bone "terrvigon_leftcrushingclaws_wristshjnt"
														{Matrix34
															0.973845	0.0127241	-0.226858
															-0.204481	-0.386235	-0.89945
															-0.0990651	0.922313	-0.373531
															42.6544	6.86646e-05	0
														}
														{bone "terrvigon_leftcrushingfinger_01_01shjnt"
															{Matrix34
																0.918234	-0.38657	-0.0860893
																-0.0533568	0.094642	-0.99408
																0.392429	0.917391	0.0662774
																17.6028	10.8127	0.732698
															}
														}
														{bone "terrvigon_leftcrushingthumb_01_01shjnt"
															{Matrix34
																-0.0807612	-0.995355	-0.0524011
																-0.0994288	0.0603557	-0.993213
																0.991762	-0.075003	-0.103841
																6.83575	-7.39223	1.65878
															}
														}
													}
												}
											}
										}
										{bone "terrvigon_neck_01_01shjnt"
											{Matrix34
												0.632582	0.774494	0
												-0.774494	0.632582	0
												0	0	1
												25.2606	-3.06482	0.000123817
											}
											{bone "terrvigon_neck_01_02shjnt"
												{Position 29.8421	4.34313	-0.000138151}
												{bone "terrvigon_head_jawshjnt"
													{Matrix34
														0.856955	-0.515391	0
														0.51539	0.856955	0
														0	0	1
														6.20475	-2.93993	0
													}
												}
												{bone "terrvigon_head_topshjnt"
													{Matrix34
														0.354741	0.934964	0
														-0.934964	0.354741	0
														0	0	1
														15.5138	15.9691	0
													}
													{bone "terrvigon_leftmandilbes_01_01shjnt"
														{Matrix34
															0	-0.380322	-0.924854
															1	0	0
															0	-0.924854	0.380322
															-15.353	-1.16169	-10.7114
														}
														{bone "terrvigon_leftmandilbes_01_02shjnt"
															{Matrix34
																0.836771	0.138574	0.529728
																-0.0855155	0.988648	-0.123543
																-0.540835	0.0580773	0.839122
																13.7653	3.4912	-0.894058
															}
														}
													}
													{bone "terrvigon_rightmandilbes_01_01shjnt"
														{Matrix34
															0	0.380322	-0.924854
															-1	0	0
															0	0.924854	0.380322
															-15.353	-1.16167	10.7114
														}
														{bone "terrvigon_rightmandilbes_01_02shjnt"
															{Matrix34
																0.836771	0.138574	0.529728
																-0.0855154	0.988648	-0.123543
																-0.540835	0.0580773	0.839122
																-13.7653	-3.4912	0.894066
															}
														}
													}
													{bone "terrvigon_tongue_01_01shjnt"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															-20.7315	-2.71936	0
														}
														{bone "terrvigon_tongue_01_02shjnt"
															{Matrix34
																0.989088	-0.147329	0
																0.147328	0.989088	0
																0	0	1
																7.99628	-0.764091	0
															}
															{bone "terrvigon_tongue_01_03shjnt"
																{Position 7.59293	-0.599518	0}
																{bone "terrvigon_tongue_01_04shjnt"
																	{Matrix34
																		0.873067	0.4876	0
																		-0.4876	0.873067	0
																		0	0	1
																		7.38416	0.668457	0
																	}
																}
															}
														}
													}
													{bone "ik_chain001"
														{Matrix34
															0.468235	-0.883604	0
															0	0	-1
															0.883604	0.468235	0
															-23.6285	-25.5402	0
														}
													}
													{bone "fx_synapse"
														{Matrix34
															0.468235	-0.883604	0
															0	0	-1
															0.883604	0.468235	0
															2.39059	-7.25236	0
														}
													}
													{bone "fx_breath"
														{Matrix34
															-0.036299	-0.999341	0
															0	0	-1
															0.999341	-0.0362985	0
															-21.7262	-16.1205	1.17564e-05
														}
													}
													{bone "Sc_stance_fx"}
													{bone "tp_camera_Head"}
													{bone "fx_generic_head"}
													
													{bone "visor_eyes"
														{Matrix34
															0.468235	-0.883604	0
															0	0	-1
															0.883604	0.468235	0
															-8.6008	-19.9299	1.0587e-05
														}
													}
													{bone "eyes_l"
														{Matrix34
															0.468235	-0.883604	0
															0	0	-1
															0.883604	0.468235	0
															-11.1754	-10.4573	-7.55549
														}
													}
													{bone "eyes_r"
														{Matrix34
															0.468235	-0.883604	0
															0	0	-1
															0.883604	0.468235	0
															-11.1754	-10.4573	7.55536
														}
													}
												}
											}
										}
										{bone "terrvigon_rightchest_01_01shjnt"
											{Matrix34
												-0.993169	0.0556932	-0.10254
												-0.0559882	-0.998431	0
												-0.10238	0.00574081	0.994729
												39.6869	-30.2719	4.09413
											}
										}
										{bone "terrvigon_rightchest_bubbles_auxshjnt"
											{Matrix34
												0	0	-1
												0.661342	-0.750084	0
												-0.750084	-0.661342	0
												35.6212	-49.1306	38.0087
											}
										}
										{bone "terrvigon_rightcrushingclaws_clavicleshjnt"
											{Matrix34
												0	0	-1
												0.443823	-0.896114	0
												-0.896114	-0.443823	0
												17.0588	-4.39099	24.3557
											}
											{bone "terrvigon_rightcrushingclaws_shouldershjnt"
												{Matrix34
													0.54156	-0.634772	0.55116
													-0.840001	-0.382601	0.384727
													-0.0333385	-0.671328	-0.740411
													-7.27795	1.59956	0.884399
												}
												{bone "terrvigon_rightcrushingclaws_elbowshjnt"
													{Matrix34
														0.3299	0.31927	-0.888387
														-0.911459	0.352739	-0.2117
														0.245779	0.879569	0.40737
														-34.3568	-3.8147e-05	5.34058e-05
													}
													{bone "terrvigon_rightcrushingclaws_wristshjnt"
														{Matrix34
															0.973845	0.0127239	-0.226858
															-0.204481	-0.386235	-0.89945
															-0.0990649	0.922313	-0.373531
															-42.6544	-4.19617e-05	-1.52588e-05
														}
														{bone "terrvigon_rightcrushingfinger_01_01shjnt"
															{Matrix34
																0.918233	-0.38657	-0.0860893
																-0.0533568	0.0946423	-0.994081
																0.392429	0.917391	0.0662774
																-17.6027	-10.8127	-0.732695
															}
														}
														{bone "terrvigon_rightcrushingthumb_01_01shjnt"
															{Matrix34
																-0.0807613	-0.995355	-0.0524009
																-0.0994288	0.0603558	-0.993213
																0.991762	-0.0750029	-0.103841
																-6.83575	7.39224	-1.65879
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				{bone "terrvigon_tail_01_01shjnt"
					{Matrix34
						-0.602153	-0.798381	0
						-0.798381	0.602153	0
						0	0	-1
						-18.7061	-0.319702	2.41834e-05
					}
					{bone "terrvigon_tail_01_02shjnt"
						{Matrix34
							0.971251	0.045442	0.233678
							-0.0197154	0.993594	-0.111274
							-0.237238	0.103468	0.965926
							36.6387	0.484604	-0.398039
						}
						{bone "terrvigon_tail_01_03shjnt"
							{Matrix34
								0.987448	0.0311889	0.154837
								-0.0191556	0.996721	-0.0786092
								-0.156781	0.0746564	0.984807
								33.1016	1.14597	-0.496468
							}
							{bone "terrvigon_tail_01_04shjnt"
								{Matrix34
									0.856598	0.0782519	0.510016
									0.0683258	0.962527	-0.262438
									-0.51144	0.259651	0.819152
									42.4436	0.772774	-3.36438
								}
								{bone "terrvigon_tail_01_05shjnt"
									{Matrix34
										0.587639	-0.434904	0.682304
										0.615861	0.787337	-0.0285619
										-0.524782	0.436989	0.73051
										50.7033	1.31287	-2.54705
									}
									{bone "terrvigon_tail_01_06shjnt"
										{Matrix34
											0.821663	-0.106073	0.560016
											0.0642251	0.993503	0.0939493
											-0.566344	-0.0412294	0.823138
											36.4939	-0.850327	-1.90735e-05
										}
									}
								}
							}
						}
					}
				}
				{bone "terrvigon_leftlegs_hipshjnt"
					{Matrix34
						0.0824562	-0.951447	-0.296562
						0.0198699	0.299086	-0.954019
						0.996397	0.0727723	0.0435667
						-0.66003	0.517593	-23.7619
					}
					{bone "terrvigon_leftlegs_knee1shjnt"
						{Matrix34
							0.207905	0	-0.978149
							0	1	0
							0.978149	0	0.207905
							59.1145	-2.28882e-05	-1.14441e-05
						}
						{bone "terrvigon_leftlegs_knee2shjnt"
							{Matrix34
								0.384168	-0.0702704	0.920585
								0.0270623	0.997528	0.0648502
								-0.922867	0	0.38512
								47.1643	-7.62939e-05	-1.52588e-05
							}
							{bone "terrvigon_leftlegs_ankleshjnt"
								{Matrix34
									0.96488	-0.228249	-0.130036
									0.231718	0.972709	0.0119947
									0.123749	-0.0417051	0.991437
									45.0739	8.01086e-05	-6.86646e-05
								}
								{bone "terrvigon_leftlegs_ballshjnt"
									{Matrix34
										-2.03467e-05	0	1
										0	1	0
										-1	0	-2.07694e-05
										14.3213	1.62954	10.8593
									}
									{bone "fx_stomp_foot1l"
										{Matrix34
											1	0	0
											0	1	0
											0	0	1
											0	-5.34058e-05	-10.4222
										}
									}
								}
							}
						}
					}
				}
				{bone "terrvigon_rightlegs_hipshjnt"
					{Matrix34
						-0.0824569	0.951447	-0.296562
						-0.0198705	-0.299086	-0.954019
						-0.996397	-0.0727727	0.0435674
						-0.66008	0.517624	23.7618
					}
					{bone "terrvigon_rightlegs_knee1shjnt"
						{Matrix34
							0.207904	0	-0.978149
							0	1	0
							0.978149	0	0.207904
							-59.1145	-3.8147e-05	1.52588e-05
						}
						{bone "terrvigon_rightlegs_knee2shjnt"
							{Matrix34
								0.384168	-0.0702702	0.920585
								0.0270623	0.997528	0.0648501
								-0.922867	0	0.38512
								-47.1643	0	3.05176e-05
							}
							{bone "terrvigon_rightlegs_ankleshjnt"
								{Matrix34
									0.964878	-0.228258	-0.130037
									0.231726	0.972707	0.0119942
									0.12375	-0.0417059	0.991437
									-45.0738	0	9.15527e-05
								}
								{bone "terrvigon_rightlegs_ballshjnt"
									{Matrix34
										-2.13567e-05	0	1
										0	1	0
										-1	0	-2.16253e-05
										-14.3213	-1.62963	-10.8594
									}
									{bone "fx_stomp_foot1r"
										{Matrix34
											-1	0	0
											0	1	0
											0	0	-1
											-2.28882e-05	2.67029e-05	10.4223
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
)