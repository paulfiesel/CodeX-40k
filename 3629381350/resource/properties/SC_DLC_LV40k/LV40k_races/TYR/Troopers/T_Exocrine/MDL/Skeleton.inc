
(Define "Skeleton"
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Exocrine/MDL/Volumes.inc")

	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Exocrine/MDL/Animations/Animations.inc")
		
		(Define "ik_speed" 	{speed 0.03})
		
		{bone revolute "basis"
			{limits -0 0}
			("ik_speed") 
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Exocrine/MDL/Models/tex_%color/+models_%model.ext")
			
			("SC_Troopers_Aim_Ref_MDL")
	
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
			{bone revolute "placement"
			}
			{bone "tp_camera_head"
				{Position 0	0	500}
			}
			{bone "visor_around"
				{Position 0	7.99298e-05	125}
			}
			{bone "spawn_melee_ctc"
				{Position 72.5	7.99298e-05	30}
			}
			{bone "z_exocrine_pelvisshjnt"
				{Matrix34
					0.617371	0	0.786672
					-0.786672	0	0.617371
					0	-1	0
					-40.1319	0	54.9537
				}
				{bone "fx_aura"}
				{bone "fx_fire"}
				{bone "Sc_stance_fx"}
				{bone "fx_generic_body"}
				
				{bone "exocrine_l_legs_hipshjnt"
					{Matrix34
						-0.336239	-0.907838	-0.250545
						0.105022	0.228231	-0.967926
						0.935903	-0.351767	0.0186026
						-6.87142	1.15242	-13.8176
					}
					{bone "exocrine_l_legs_knee1shjnt"
						{Matrix34
							0.305514	0	-0.952188
							0	1	0
							0.952188	0	0.305514
							22.1917	0.000225067	6.10352e-05
						}
						{bone "exocrine_l_legs_knee2shjnt"
							{Matrix34
								0.171067	-0.179095	0.968845
								0.0311409	0.983832	0.176367
								-0.984767	0	0.173879
								14.5633	1.33514e-05	-0.000198364
							}
							{bone "exocrine_l_legs_ankleshjnt"
								{Matrix34
									0.775079	-0.0859947	-0.625986
									-0.047133	0.980067	-0.192995
									0.630104	0.179091	0.755576
									15.5243	5.34058e-05	0.000217438
								}
								{bone "exocrine_l_legs_ballshjnt"
									{Matrix34
										0	0	1
										0	1	0
										-1	0	0
										9.04991	0.645235	8.41258
									}
								}
								{bone "exocrine_l_legs_toeshjnt"
									{Matrix34
										0	0	1
										0	1	0
										-1	0	0
										9.05006	0.844383	14.6908
									}
								}
							}
						}
					}
				}
				{bone "exocrine_r_legs_hipshjnt"
					{Matrix34
						0.336238	0.907816	-0.250627
						-0.104737	-0.228425	-0.967911
						-0.935935	0.351699	0.0182762
						-6.87212	1.15284	13.8172
					}
					{bone "exocrine_r_legs_knee1shjnt"
						{Matrix34
							0.305514	0	-0.952188
							0	1	0
							0.952188	0	0.305514
							-22.1917	0.000225067	2.67029e-05
						}
						{bone "exocrine_r_legs_knee2shjnt"
							{Matrix34
								0.171067	-0.179094	0.968845
								0.0311399	0.983832	0.176366
								-0.984767	0	0.173879
								-14.5629	-0.000154495	0
							}
							{bone "exocrine_r_legs_ankleshjnt"
								{Matrix34
									0.775077	-0.0859946	-0.625987
									-0.047133	0.980067	-0.192995
									0.630106	0.17909	0.755575
									-15.5242	5.14984e-05	0
								}
								{bone "exocrine_r_legs_toeshjnt"
									{Matrix34
										0	0	1
										0	1	0
										-1	0	0
										-9.05015	-0.844301	-14.6908
									}
								}
								{bone "exocrine_r_legs_ballshjnt"
									{Matrix34
										0	0	1
										0	1	0
										-1	0	0
										-9.05015	-0.645159	-8.41258
									}
								}
							}
						}
					}
				}
				{bone "exocrine_spine_01_01shjnt"
					{Matrix34
						0.93257	-0.360989	0
						0.360988	0.93257	0
						0	0	1
						4.59636	-2.83117	0.00036793
					}
					{bone "exocrine_spine_01_02shjnt"
						{Matrix34
							0.94334	-0.331829	0
							0.331828	0.94334	0
							0	0	1
							8.55039	-1.48136	0
						}
						{bone "exocrine_spine_01_03shjnt"
							{Matrix34
								0.968892	-0.247484	0
								0.247484	0.968892	0
								0	0	1
								25.5581	-4.6389	-0.000276977
							}
							{bone revolute "aim_v"
								("ik_speed")
								{limits -15 45}
								{bone "exocrine_weapon1_auxshjnt"
									{Matrix34
										0	0	-1
										0.997265	0.0739115	0
										0.0739115	-0.997265	0
										24.0766	6.38682	0
									}
									{bone "exocrine_muzzle_auxshjnt"
										{Position 0	56.4908	-0.516953}
									}
									{bone revolute "foresight3"
										("ik_speed")
										{limits -6 6}
										{Matrix34
											0	0.999764	0.0217263
											1	0	0
											0	0.0217263	-0.999764
											0.000107252	58.7199	-1.81946
										}
									}
								}
								{bone "exocrine_neck_01_01shjnt"
									{Position 13.7524	-14.4823	-0.00015749}
									{bone "exocrine_neck_01_02shjnt"
										{Position 15.5003	6.28326	1.13648e-05}
										
									;//	{bone "tp_camera_Head"}
										{bone "fx_generic_head"}
										
										{bone "exocrine_head_topshjnt"
											{Matrix34
												0.974913	0.222586	0
												-0.222586	0.974913	0
												0	0	1
												13.3509	3.69894	0
											}
										}
										{bone "exocrine_head_jawshjnt"
											{Matrix34
												0.846138	-0.532965	0
												0.532965	0.846137	0
												0	0	1
												2.81875	-2.16491	-0.00015749
											}
											{bone "exocrine_head_jawendshjnt"
												{Position 10.4064	-2.80648	0}
											}
										}
										{bone "visor_eyes"
											{Matrix34
												0.998635	0.0522273	0
												0	0	-1
												-0.0522273	0.998635	0
												13.2074	-1.10627	0
											}
										}
									}
								}
								{bone "exocrine_r_toparms_clavicleshjnt"
									{Matrix34
										0	0	-1
										-1	0	0
										0	1	0
										6.74729	-5.91028	17.7387
									}
									{bone "exocrine_r_toparms_shouldershjnt"
										{Matrix34
											0.512384	0.54477	0.663843
											0.858678	-0.335427	-0.387505
											0.0115703	0.768579	-0.63965
											-2.76917	0.308989	0.791634
										}
										{bone "exocrine_r_toparms_elbowshjnt"
											{Matrix34
												0.567354	0	0.823474
												0	1	0
												-0.823474	0	0.567353
												-11.8739	-0.000236511	9.15527e-05
											}
											{bone "exocrine_r_toparms_wristshjnt"
												{Matrix34
													0.987258	-0.121677	0.102546
													-0.100446	0.0232857	0.99467
													-0.123416	-0.992297	0.0107667
													-14.9662	-0.000152588	7.24792e-05
												}
												{bone "exocrine_r_smallarmthumbs_01_01shjnt"
													{Position -6.29221	-3.12616	0.574966}
													{bone "exocrine_r_smallarmthumbs_01_02shjnt"
														{Matrix34
															0.822336	-0.569002	0
															0.569002	0.822336	0
															0	0	1
															-3.59245	-1.87991	0.219006
														}
													}
												}
											}
										}
									}
								}
								{bone "exocrine_l_toparms_clavicleshjnt"
									{Matrix34
										0	0	-1
										1	0	0
										0	-1	0
										6.74705	-5.91003	-17.7389
									}
									{bone "exocrine_l_toparms_shouldershjnt"
										{Matrix34
											0.512385	0.54477	0.663843
											0.858678	-0.335428	-0.387505
											0.011571	0.768579	-0.63965
											2.76914	-0.308853	-0.791489
										}
										{bone "exocrine_l_toparms_elbowshjnt"
											{Matrix34
												0.567353	0	0.823475
												0	1	0
												-0.823474	0	0.567354
												11.8741	-2.28882e-05	-0.000247955
											}
											{bone "exocrine_l_toparms_wristshjnt"
												{Matrix34
													0.987258	-0.121677	0.102546
													-0.100445	0.0232854	0.99467
													-0.123417	-0.992297	0.0107664
													14.9663	0.000114441	5.53131e-05
												}
												{bone "exocrine_l_smallarmthumbs_01_01shjnt"
													{Position 6.2922	3.12615	-0.57497}
													{bone "exocrine_l_smallarmthumbs_01_02shjnt"
														{Matrix34
															0.822336	-0.569002	0
															0.569002	0.822336	0
															0	0	1
															3.59245	1.87991	-0.219006
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
				{bone "exocrine_tail_01_01shjnt"
					{Matrix34
						-0.949352	0.314216	0
						0.314216	0.949351	0
						0	0	-1
						-13.6926	2.50752	0
					}
					{bone "exocrine_tail_01_02shjnt"
						{Matrix34
							0.975327	0.219659	0.022054
							-0.218976	0.975277	-0.0297357
							-0.0280405	0.0241728	0.999314
							13.411	2.4386	0
						}
						{bone "exocrine_tail_01_03shjnt"
							{Matrix34
								0.962738	0.270434	0
								-0.270434	0.962738	0
								0	0	1
								14.2954	2.72955	0
							}
						}
					}
				}
				{bone "exocrine_l_bigarms_clavicleshjnt"
					{Matrix34
						0	0	-1
						0.575442	-0.817842	0
						-0.817842	-0.575442	0
						19.0808	-22.1586	-16.2272
					}
					{bone "exocrine_l_bigarms_shouldershjnt"
						{Matrix34
							0.390422	-0.451234	0.80247
							-0.892178	0.0296005	0.450713
							-0.227131	-0.891915	-0.391024
							6.88849	1.0018	-0.118187
						}
						{bone "exocrine_l_bigarms_elbowshjnt"
							{Matrix34
								0.374133	0	-0.927375
								0	1	0
								0.927375	0	0.374134
								23.7077	0.000572205	0.000307083
							}
							{bone "exocrine_l_bigarms_wristshjnt"
								{Matrix34
									0.948332	0.304657	-0.0886026
									-0.316832	0.894486	-0.315456
									-0.0168535	0.32723	0.944795
									40.3493	-0.000106812	-0.000648022
								}
								{bone "exocrine_l_backclaw_01_01shjnt"
									{Matrix34
										-0.500001	0	0.866025
										-0.866025	0	-0.5
										0	-1	0
										5.67789	0.153854	6.15363
									}
									{bone "exocrine_l_backclaw_01_02shjnt"
										{Matrix34
											0.952208	0.30545	0
											-0.305449	0.952208	0
											0	0	1
											7.3658	1.23799	0
										}
									}
								}
								{bone "exocrine_l_bigclaws_01_01shjnt"
									{Matrix34
										0.966945	0.247912	-0.0596496
										-0.0844541	0.0906511	-0.992295
										-0.240595	0.964532	0.108593
										13.8062	6.96677	-1.70975
									}
									{bone "exocrine_l_bigclaws_01_02shjnt"
										{Matrix34
											0.640499	-0.767959	0
											0.767959	0.640499	0
											0	0	1
											10.6861	-1.64502	0.164425
										}
									}
								}
								{bone "exocrine_l_bigclaws_02_01shjnt"
									{Matrix34
										0.981743	-0.188353	0.0265464
										0.00983939	-0.0890948	-0.995975
										0.18996	0.978052	-0.0856144
										12.5738	-7.20799	-1.27606
									}
									{bone "exocrine_l_bigclaws_02_02shjnt"
										{Matrix34
											0.819869	-0.572551	0
											0.572551	0.819869	0
											0	0	1
											12.0645	-1.03956	-0.0548553
										}
									}
								}
								{bone "exocrine_l_frontclaw_01_01shjnt"
									{Matrix34
										1	0	0
										0	0.0600699	-0.998194
										0	0.998194	0.0600709
										11.6574	-0.323479	-6.39792
									}
									{bone "exocrine_l_frontclaw_01_02shjnt"
										{Matrix34
											0.7787	0.627396	0
											-0.627396	0.7787	0
											0	0	1
											0.708703	6.56754	0
										}
									}
								}
							}
						}
					}
				}
				{bone "exocrine_r_bigarms_clavicleshjnt"
					{Matrix34
						0	0	-1
						-0.575443	0.817842	0
						0.817842	0.575443	0
						19.081	-22.1588	16.2274
					}
					{bone "exocrine_r_bigarms_shouldershjnt"
						{Matrix34
							0.390422	-0.451235	0.80247
							-0.892178	0.0296012	0.450713
							-0.227131	-0.891914	-0.391025
							-6.88773	-1.00165	0.117943
						}
						{bone "exocrine_r_bigarms_elbowshjnt"
							{Matrix34
								0.374132	0	-0.927375
								0	1	0
								0.927375	0	0.374133
								-23.7074	3.05176e-05	-0.000127792
							}
							{bone "exocrine_r_bigarms_wristshjnt"
								{Matrix34
									0.948332	0.304658	-0.0886025
									-0.316832	0.894486	-0.315457
									-0.0168536	0.327229	0.944795
									-40.3494	0.000461578	-7.15256e-05
								}
								{bone "exocrine_r_backclaw_01_01shjnt"
									{Matrix34
										-0.500001	0	0.866025
										-0.866026	0	-0.499999
										0	-1	0
										-5.67789	-0.153858	-6.15362
									}
									{bone "exocrine_r_backclaw_01_02shjnt"
										{Matrix34
											0.952208	0.305451	0
											-0.305448	0.952208	0
											0	0	1
											-7.36579	-1.238	0
										}
									}
								}
								{bone "exocrine_r_bigclaws_01_01shjnt"
									{Matrix34
										0.966945	0.247912	-0.0596497
										-0.0844544	0.0906518	-0.992295
										-0.240595	0.964532	0.108592
										-13.8062	-6.96677	1.70975
									}
									{bone "exocrine_r_bigclaws_01_02shjnt"
										{Matrix34
											0.6405	-0.767958	0
											0.767959	0.640499	0
											0	0	1
											-10.6862	1.64502	-0.164425
										}
									}
								}
								{bone "exocrine_r_bigclaws_02_01shjnt"
									{Matrix34
										0.981743	-0.188353	0.0265465
										0.00983933	-0.0890943	-0.995975
										0.189961	0.978052	-0.085615
										-12.5738	7.20798	1.27605
									}
									{bone "exocrine_r_bigclaws_02_02shjnt"
										{Matrix34
											0.819869	-0.57255	0
											0.572552	0.819869	0
											0	0	1
											-12.0645	1.03956	0.0548592
										}
									}
								}
								{bone "exocrine_r_frontclaw_01_01shjnt"
									{Matrix34
										1	0	0
										0	0.0600706	-0.998194
										0	0.998194	0.0600702
										-11.6574	0.323471	6.39791
									}
									{bone "exocrine_r_frontclaw_01_02shjnt"
										{Matrix34
											0.778701	0.627396	0
											-0.627397	0.7787	0
											0	0	1
											-0.7087	-6.56754	0
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