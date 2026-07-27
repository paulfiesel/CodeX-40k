

(Define "Skeleton"
	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gorkanaut/Animations/Animations.inc")
		
		{bone revolute "basis"
			{limits 0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "emit5"
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					200	-25	0
				}
			}
			{bone "emit4"
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					200	25	0
				}
			}
			{bone "emit3"
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					240	0	0
				}
			}
			{bone "emit2"
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					180	62.5	0
				}
			}
			{bone "emit1"
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					180	-62.5	0
				}
			}
			{bone "emit6"
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					150	-95	0
				}
			}
			{bone "emit7"
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					150	95	0
				}
			}
			{bone "melee_propa_stompin"
				{Position 130	0	0}
			}
			{bone "melee_ctc"
				{Position 275	0	100}
			}
			
			%args_role 
			
			{bone revolute "m_aim_h"
				{limits -25 25} {Speed2 180}
				{Matrix34
					1	0	0
					0	1	0
					0	0	1
					8.74998	0	30
				}
				{bone revolute "m_aim_v"
					{limits -70 70} {Speed2 180}
					{Matrix34
						1	0	0
						0	0	1
						0	-1	0
						0	0	0
					}
					{bone "foresight_melee"}
				}
			}
			{bone "master"
				{Orientation
					0	1	0
					0	0	1
					1	0	0
				}
				{bone "gk_root"
					{bone "pelvis"
						{Position 0	108.052	0}
						
						{Bone "Kustom_Force_Field" {Position -0 50 -20}}
						
						{bone "leg_l"
							{Matrix34
								-0.0592563	-0.780717	-0.622069
								0.174464	-0.621673	0.7636
								-0.982879	-0.0632806	0.173045
								69.0186	-1.66977	-37.3217
							}
							{bone "lowerleg_l"
								{Matrix34
									0.334381	-0.921974	-0.195329
									0.939236	0.343081	-0.0115156
									0.0776307	-0.179609	0.98067
									-2.67029e-05	56.2424	2.28882e-05
								}
								{Bone "fx_dmg_legL1"}
								{bone "foot_l"
									{Matrix34
										-0.32447	0.945832	0.0110068
										-0.945828	-0.324286	-0.0157414
										-0.0113194	-0.0155182	0.999816
										-4.00543e-05	53.1309	-4.57764e-05
									}
									{Bone "fx_dmg_legL2"}
								}
							}
						}
						{bone "leg_r"
							{Matrix34
								-0.0592547	0.780717	0.622069
								-0.174463	-0.621673	0.7636
								0.982879	-0.0632814	0.173044
								-69.0186	-1.66977	-37.3217
							}
							{bone "lowerleg_r"
								{Matrix34
									0.334381	0.921974	0.195327
									-0.939235	0.343081	-0.0115156
									-0.0776301	-0.179608	0.980671
									1.52588e-05	56.2425	-3.05176e-05
								}
								{Bone "fx_dmg_legR1"}
								{bone "foot_r"
									{Matrix34
										-0.324471	-0.945832	-0.0110078
										0.945828	-0.324286	-0.0157414
										0.011319	-0.0155191	0.999816
										3.43323e-05	53.1309	0
									}
									{Bone "fx_dmg_legR2"}
								}
							}
						}
						{bone "pauldron_l"
							{Position 84.0689	91.6634	-42.1687}
						}
						{bone "pauldron_r"
							{Position -84.0689	91.6634	-42.1687}
						}
						{bone "head"
							{Position 0	78.0595	14.3736}
							{bone "visor_eyes"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									3.12308	19.7035	21.6264
								}
							}
							{bone "fx_eye_mork_l"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-8.4604	17.8066	20.1197
								}
							}
							{bone "fx_eye_mork_r"
								{Matrix34
									-0.00249164	0.139151	0.990268
									0.99984	0.0179036	0
									-0.0177294	0.990109	-0.139173
									20.391	25.1619	37.8519
								}
							}
							{bone "fx_eye_l"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-4.56857	19.6615	14.0841
								}
							}
							{bone "fx_eye_r"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									11.2586	20.4963	12.894
								}
							}
						}
						{bone "arm_l"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								75.5245	89.0747	-42.1685
							}
							{Bone "fx_dmg_Gun1"}
						
							{bone "lowerarm_l"
								{Matrix34
									1	0	0
									0	0	1
									0	-1	0
									78.2309	45.0904	11.6839
								}
								{Bone "fx_dmg_Gun2"}
							
								{bone "finger1_l"
									{Position -1.37708	108.139	-16.7085}
								}
								{bone "finger2_l"
									{Position -1.37709	108.139	16.027}
								}
								{bone "finger3_l"
									{Position 27.6899	77.3784	-0.613708}
								}
								{bone "fxlightmork2"
									{Matrix34
										0	1	0
										0	0	-1
										-1	0	0
										-46.3071	94.0927	28.6947
									}
								}
								{bone "fxlightmork3"
									{Matrix34
										0	1	0
										0	0	-1
										-1	0	0
										-46.3071	94.0927	-28.6356
									}
								}
								{bone "fxlightmork4"
									{Matrix34
										0	1	0
										0	0	-1
										-1	0	0
										28.452	79.5453	-44.6228
									}
								}
								{bone "fxlightmork5"
									{Matrix34
										0	1	0
										0	0	-1
										-1	0	0
										28.452	79.5453	45.4292
									}
								}
							}
						}
						{bone "fxlightmork1"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								-45.3327	182.22	-34.613
							}
						}
						{bone "fxlightkustomfield1"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								-93.5496	179.971	-47.2154
							}
						}
						{bone "fxlightkustomfield2"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								-81.8751	244.395	-47.2154
							}
						}
						{bone "fxlightkustomfield3"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								-15.3747	300.838	-47.2154
							}
						}
						{bone "arm_r"
							{Matrix34
								0	1	0
								-1	0	0
								0	0	1
								-72.2192	87.611	-44.0309
							}
							{bone "lowerarm_r"
								{Position -0.0979919	31.2989	0.0199318}
								{Bone "fx_dmg_Gun11"}
							}
							{bone revolute "arm_rot_h" {limits 20 -65} {Speed2 35}
								{Matrix34
									0	0	1
									0	-1	0
									1	0	0
									-0.0979919	31.2989	0.0201187
								}
								{bone revolute "arm_rot_h" {limits 32 -40} {Speed2 35}
									{Matrix34
										1	0	0
										0	0	1
										0	-1	0
										0	0	0
									}
									{bone "fixed_lowerarm_r"
										{Matrix34
											0	1	0
											0	0	1
											1	0	0
											0	0	2.28882e-05
										}
										{Bone "fx_dmg_Gun12"}
										
										{bone "gun_r"
											{Matrix34
												1	0	0
												0	0	1
												0	-1	0
												-29.707	8.48779	27.8295
											}
										}
										{bone "barrel00"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-23.1585	20.7121	67.8012
											}
										}
										{bone "barrel01"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-23.1585	-3.30722	67.8012
											}
										}
										{bone "barrel02"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-35.7164	-3.30723	67.8012
											}
										}
										{bone "barrel03"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-35.7164	20.4297	67.8012
											}
										}
										{bone "foresight3"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-29.707	8.48778	74.667
											}
										}
										{bone "barrel04"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-42.7624	8.48779	67.8012
											}
										}
										{bone "barrel05"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-15.6092	8.48778	67.8012
											}
										}
										{bone "fxshell_dfs00"
											{Matrix34
												0	1	0
												0	0	1
												1	0	0
												-17.5669	29.73	32.5624
											}
										}
										{bone "fxshell_dfs01"
											{Matrix34
												0	1	0
												0	0	1
												1	0	0
												-41.6972	28.4728	32.5624
											}
										}
										{bone "fxshell_dfs02"
											{Matrix34
												0	1	0
												0	0	1
												1	0	0
												-4.36136	18.5783	32.5624
											}
										}
										
										; ---------------------------------------------------------------------- ;
										
										{bone "foresight5"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-29.1396	10.7716	126.56
											}
										}
										{bone "fxlightmork6"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-13.841	10.7716	73.5301
											}
										}
										{bone "fxlightmork7"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-15.8987	10.0173	-47.3217
											}
										}
										{bone "fxlightmork8"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-56.7788	10.0173	-47.3217
											}
										}
										{bone "fxlightmork9"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-36.7072	10.0173	-59.9697
											}
										}
										{bone "fxlightmegablasta3"
											{Matrix34
												0	0	1
												0	-1	0
												1	0	0
												-37.4149	10.7716	138.478
											}
										}										
									}
								}
							}
						}
						{bone "headlight2"
							{Matrix34
								-0.0246278	0.527335	0.8493
								0.999407	0.0334216	0.00822888
								-0.0240456	0.849	-0.527846
								58.1874	21.0149	42.943
							}
						}
						{bone "headlight1"
							{Matrix34
								0.00845541	0.462349	0.886658
								0.997847	-0.0615751	0.0225927
								0.0650417	0.884558	-0.461874
								-57.972	21.4441	42.8494
							}
						}
						{bone "fxsmoke6"
							{Matrix34
								0	-0.333993	-0.942576
								-1	0	0
								0	0.942576	-0.333993
								41.1382	50.5149	-114.458
							}
						}
						{bone "fxsmoke5"
							{Matrix34
								0	-0.0538191	-0.998551
								-1	0	0
								0	0.998551	-0.0538191
								41.7268	60.3305	-118.313
							}
						}
						{bone "fxsmoke4"
							{Matrix34
								0	0.09639	-0.995344
								-1	0	0
								0	0.995344	0.0963901
								41.9039	70.0189	-123.424
							}
						}
						{bone "fxsmoke3"
							{Matrix34
								0	0.108783	-0.994065
								-1	0	0
								0	0.994065	0.108784
								43.1188	81.3243	-126.495
							}
						}
						{bone "fxsmoke2"
							{Matrix34
								0	0.325407	-0.945574
								-1	0	0
								0	0.945574	0.325407
								44.3975	95.6183	-129.63
							}
						}
						{bone "fxsmoke1"
							{Matrix34
								0	0.285308	-0.958436
								-1	0	0
								0	0.958436	0.285308
								48.1168	110.613	-132.55
							}
						}
						{bone "fxfire1"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								2.57182	71.9869	-91.4107
							}
							{Bone "fx_dmg_Engine1"}
						}
						{bone "fxfire3"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								26.2251	120.357	-42.8253
							}
						}
						{bone "fxfire4"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								2.57182	-11.3409	-46.7441
							}
						}
						{bone "fxfire5"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								2.57181	-11.3409	75.1197
							}
						}
						{bone "fxfire6"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								2.57181	72.1125	30.7135
							}
						}
						{bone "fxlightbody1"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								20.739	48.1649	89.8503
							}
						}
						{bone "fxlightbody2"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								33.8469	119.39	30.7608
							}
						}
						{bone "fxlightbody3"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								-22.3568	119.39	30.7608
							}
						}
						{bone "fxlightbody4"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								-32.5742	119.39	30.7608
							}
						}
						{bone "fxlightbody5"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								25.7597	129.132	-13.6422
							}
						}
						{bone "torsogun"
							{Matrix34
								1	0	0
								0	0.161652	0.986848
								0	-0.986848	0.161652
								0	41.1442	87.2124
							}
						}
						{bone revolute "torsogun_rot_h" {limits -50 50} {Speed2 75}
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								0.000274658	41.144	87.2126
							}
							{bone revolute "torsogun_rot_v" {limits -40 35} {Speed2 75}
								{Matrix34
									1	0	0
									0	0	1
									0	-1	0
									0	0	-1.52588e-05
								}
								{bone "fixed_torsogun"
									{Matrix34
										0	0	-1
										0.986848	0.161652	0
										0.161652	-0.986848	0
										-0.000244141	1.52588e-05	0
									}
									{bone "foresight2"
										{Matrix34
											0	0.999535	0.03048
											1	0	0
											0	0.0304799	-0.999535
											0.0301821	53.2915	3.07373
										}
									}
									{bone "foresight1"
										{Matrix34
											0	0.999535	0.03048
											1	0	0
											0	0.0304799	-0.999535
											0.0301553	41.9576	-3.87579
										}
									}
									{bone "fxshell_torso"
										{Matrix34
											-1	0	0
											0	0.986848	0.161653
											0	0.161653	-0.986848
											-8.91692	5.5322	-0.464417
										}
									}
									
									; ---------------------------------------------------------------------- ;
									
									{bone "foresight6"
										{Matrix34
											0	0.999535	0.03048
											1	0	0
											0	0.03048	-0.999535
											0.0376993	49.4045	-3.09792
										}
									}
									{bone "fxlightmegablasta1"
										{Matrix34
											0	0.986848	0.161652
											1	0	0
											0	0.161652	-0.986848
											0.0377145	55.334	1.11586
										}
									}
									{bone "fxlightmegablasta2"
										{Matrix34
											0	0.999741	0.0227361
											1	0	0
											0	0.0227361	-0.999741
											0.0377199	23.1916	7.96848
										}
									}
								}
							}
						}
						{bone revolute "rockets_h" {limits -120 120} {Speed2 80}
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								47.4461	136.457	-63.6145
							}
							{bone revolute "rockets_v" {limits -12 45} {Speed2 80}
								{Matrix34
									1	0	0
									0	0	1
									0	-1	0
									0.0221024	-0.0785217	15.8651
								}
								{bone "foresight4"
									{Matrix34
										1	0	0
										0	0	-1
										0	1	0
										33.3526	0	0
									}
								}
							}
						}
					}
					{bone "visor_around"
						{Matrix34
							0	0	1
							1	0	0
							0	1	0
							0	280	0.000366211
						}
					}
				}
			}
		}
	}

	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_gorkanaut/Model/Base/+base_vol.inc")
	
	%args_vol
)