

(Define "Skeleton"
	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_knight/Animations/Animations.inc")
		
		{bone revolute "basis"
			{limits 0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
				
			{bone "knight_upperbody"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/knight_chassis/knight_upperbody.ply"}
			}
			{bone "knight_lowerbody"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/knight_chassis/knight_lowerbody.ply"}
			}
			%args_role 

			{bone "dt_c_mainbone"
				{Matrix34
					0.0354341	-0.999371	-0.00164467
					-0.00410614	0.0015001	-0.999991
					0.999364	0.0354405	-0.0040504
					0.526731	0.175863	33.3976
				}
				{bone "kneeik_l"
					{Matrix34
						0.999371	-0.00150585	-0.0354404
						0.0354553	0.0113174	0.999307
						-0.00110371	-0.999935	0.0113637
						-38.0794	-42.694	51.1219
					}
				}
				{bone "kneeik_r"
					{Matrix34
						0.999371	-0.00146068	-0.0354406
						0.0354431	0.00176741	0.99937
						-0.00139712	-0.999997	0.00181807
						44.6538	-42.7979	48.2027
					}
				}
				{bone "legik_l"
					{Matrix34
						-0.999803	0.00208948	0.0197498
						-0.0198376	-0.0578612	-0.998128
						-0.000942824	-0.998322	0.0578913
						-39.8118	22.4075	1.56229
					}
					{bone "dt_c_lleg"
						{Matrix34
							-0.999877	0.015635	-0.00149215
							-0.0150806	-0.98226	-0.186919
							-0.00438815	-0.186873	0.982374
							-0.042408	-4.68106	-0.303028
						}
					}
				}
				{bone "legik_r"
					{Matrix34
						-0.999371	0.00150029	0.0354403
						-0.0354372	-0.0865087	-0.995621
						0.00157218	-0.99625	0.0865074
						40.6552	23.1527	-0.393651
					}
					{bone "dt_c_rleg"
						{Matrix34
							-1	0	0
							0	-0.987888	-0.15517
							0	-0.15517	0.987888
							0.0773506	-3.61364	0.557769
						}
					}
				}
				{bone "dt_c_hips"
					{Matrix34
						-0.999371	0.00150005	0.0354405
						0.00164462	0.999991	0.00405023
						-0.0354341	0.00410597	-0.999364
						-0.164112	-99.7832	-0.404161
					}
					{bone "dt_r_hip"
						{Matrix34
							0	0	1
							-0.998761	0.0497719	0
							-0.049772	-0.998761	0
							0	12.2071	0
						}
						{bone "fx_dmg_legR1"}
						
						{bone "dt_c_r_hip_upper"
							{Matrix34
								0.963858	0.0130179	-0.266099
								-0.266415	0.0513075	-0.962492
								0.00112316	0.998598	0.0529214
								0	40.6678	0
							}
							{bone "fx_dmg_legR2"}
						
							{bone "dt_c_r_hip_lower"
								{Matrix34
									-0.045315	0.0101592	-0.998921
									0.398838	0.91698	-0.00876701
									0.915901	-0.398805	-0.045605
									-1.14441e-05	43.7236	0
								}
								{bone "fx_dmg_legR3"}
							}
						}
					}
					{bone "dt_l_hip"
						{Matrix34
							-0.00481402	0.00513247	-0.999975
							0.999364	0.0353627	-0.00462953
							0.0353381	-0.999361	-0.00529944
							0	12.2071	0
						}
						{bone "fx_dmg_legL1"}
						
						{bone "dt_c_l_hip_upper"
							{Matrix34
								0.966242	-0.00704094	0.257538
								0.257511	0.0572996	-0.964575
								-0.00796536	0.998332	0.0571786
								0	37.8131	0
							}
							{bone "fx_dmg_legL2"}
							
							{bone "dt_c_l_hip_lower"
								{Matrix34
									0.0412499	0.0208559	0.998931
									-0.38314	0.923684	-0.0034635
									-0.922769	-0.382588	0.0460927
									1.14441e-05	44.099	0
								}
								{bone "fx_dmg_legL3"}
							}
						}
					}
					{bone "dt_chain_1"
						{Matrix34
							2.13171e-05	0	1
							-0.00628919	0.99998	0
							-0.99998	-0.00628917	2.12722e-05
							0	12.2071	0
						}
						{bone "dt_chain_2"
							{Matrix34
								2.13122e-05	-0.00628913	-0.99998
								0	0.99998	-0.00628912
								1	0	2.12679e-05
								0	18.9844	0
							}
							{bone "dt_chain_3"
								{Position 0	21.6633	0}
							}
						}
					}
					{bone "body_rot"
						{Matrix34
							0	0	-1
							1	0	0
							0	-1	0
							0	0.314346	0
						}
						{bone "fx_dmg_Body1"}
						
						{bone revolute "m_aim_h"
							{limits -25 25} {Speed 0.06}
							
							{Position 0	0	3.05176e-05}
							{bone revolute "m_aim_v"
								{limits -90 90} {Speed 0.06}
								
								{Orientation
									1	0	0
									0	0	1
									0	-1	0
								}
								{bone "foresight_melee"
									{Position 0	0	-1.52588e-05}
								}
							}
						}
						{bone "dt_c_body_aim"
							{Matrix34
								0	1	0
								0	0	1
								1	0	0
								0	0	1.52588e-05
							}
							{bone "fx_dmg_engine1"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-0.17585	48.1495	-37.4858
								}
								{bone "fxfire1"}
							}
							{bone "fx_dmg_engine2"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-0.175853	18.3154	-32.0032
								}
							}
							{bone "dt_c_lshoulder"
								{Matrix34
									0.0182798	0.0125602	0.999754
									0.980241	-0.197202	-0.0154456
									0.19696	0.980282	-0.0159169
									0	83.8626	0
								}
								{bone "dt_c_lhand_1"
									{Matrix34
										-0.309754	-0.93287	-0.183866
										-0.0354674	0.204578	-0.978207
										0.950155	-0.296483	-0.0964555
										-1.07288e-05	74.7874	3.05176e-05
									}
									{bone "dt_c_lhand_2"
										{Matrix34
											0.940058	-0.167399	0.2971
											-0.305397	-0.0256155	0.95188
											-0.151734	-0.985556	-0.0752033
											0	64.9899	0
										}
										{bone "melee_ctc"
											{Matrix34
												0.0130769	0.999903	-0.00482353
												-0.987027	0.0136802	0.159969
												0.160019	0.00266905	0.98711
												0.799908	61.1641	-0.295059
											}
										}
									}
								}
								{bone revolute "gun_rot1_h"
									{Matrix34
										0.999754	-0.0154453	-0.0159167
										0.0182796	0.980241	0.19696
										0.0125601	-0.197202	0.980282
										-1.09673e-05	74.7874	3.05176e-05
									}
									{Bone "fx_dmg_Aux11"}
									
									{bone revolute "gun_rot1_v"
										{Matrix34
											1	0	0
											0	0	1
											0	-1	0
											-1.49793	0.469246	-64.971
										}
										{Bone "fx_dmg_Aux12"}
									
										{bone "dt_c_lhand_gun_aim"
											{Matrix34
												0.0130766	0.160017	0.987028
												0.999903	0.00266835	-0.0136797
												-0.00482274	0.98711	-0.159967
												-2.24113e-05	0	0
											}
											{Bone "fx_dmg_Aux13"}
											
											{bone "foresight_wl_gatling"
												{Matrix34
													0.0130774	0.999903	-0.00482306
													-0.987027	0.0136806	0.159969
													0.160018	0.0026685	0.98711
													-0.445686	119.966	-10.2075
												}
												{bone "fxshell_wl_gatling"
													{Matrix34
														0	-1	0
														1	0	0
														0	0	1
														-117.23	-23.9463	4.57764e-05
													}
												}
											}
											{bone "foresight_wl_battlecannon"
												{Matrix34
													0.0130774	0.999903	-0.00482306
													-0.987027	0.0136806	0.159969
													0.160018	0.0026685	0.98711
													-0.113327	127.158	-9.50636
												}
												{bone "foresight_wl_battlecannon_stb"
													{Position -44.5148	-19.407	-14.9534}
												}
											}
										}
									}
									{bone "dt_c_lhand_aim"
										{Matrix34
											-0.292343	-0.956313	-0.000166857
											-0.023049	0.00722054	-0.999708
											0.956036	-0.292254	-0.0241529
											0	0	1.52588e-05
										}
									}
								}
							}
							{bone "dt_c_rshoulder"
								{Matrix34
									0	0	-1
									-0.984406	-0.175909	0
									-0.17591	0.984406	0
									0	83.8626	0
								}
								{bone revolute "gun_rot_h"
									{Matrix34
										-1	0	0
										0	-0.984406	-0.17591
										0	-0.175909	0.984406
										-1.12653e-05	75.8514	0
									}
									{Bone "fx_dmg_Aux21"}
											
									{bone "dr_c_rhand_aim"
										{Matrix34
											-0.0834435	-0.9964	0.0149524
											-0.140018	-0.00313266	-0.990144
											0.986627	-0.0847148	-0.139253
											0	-1.52588e-05	1.52588e-05
										}
										{bone revolute "gun_rot_v"
											{Matrix34
												-0.0834437	-0.140019	0.986626
												0.0149529	-0.990144	-0.139253
												0.9964	0.00313331	0.0847151
												0	57.0531	-2.09808e-05
											}
											{Bone "fx_dmg_Aux22"}
											
											{bone "dr_c_rhand_gun_aim"
												{Matrix34
													0.0353738	0.898726	0.437082
													0.998978	-0.0441053	0.00984
													0.0281211	0.436287	-0.899368
													0	1.52588e-05	0
												}
												{Bone "fx_dmg_Aux23"}
												
												{bone "gatling_R_spin"
													{Matrix34
														0.0353734	0.998978	0.0281202
														-0.437083	-0.00983925	0.899368
														0.898725	-0.0441046	0.436288
														-14.6001	95.6174	-5.73307
													}
												}
												{bone "foresight_wr_gatling"
													{Matrix34
														0.0353734	0.998978	0.0281203
														-0.437082	-0.00983947	0.899368
														0.898726	-0.0441046	0.436286
														-13.4002	126.071	-4.83437
													}
													{bone "fxshell_wr_gatling"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															-117.23	-23.9463	3.8147e-05
														}
													}
												}
												{bone "foresight_wr_plasma"
													{Matrix34
														0.0353734	0.998978	0.0281203
														-0.437082	-0.00983947	0.899368
														0.898726	-0.0441046	0.436286
														-6.43936	156.591	-2.19969
													}
													{bone "fx_wr_plasma2"
														{Position -67.5026	0	13.3368}
													}
													{bone "fx_wr_plasma1"
														{Position 9.70053	-3.05176e-05	-6.71119}
													}
												}
												{bone "foresight_wr_thermal"
													{Matrix34
														0.0353734	0.998978	0.0281203
														-0.437082	-0.00983947	0.899368
														0.898726	-0.0441046	0.436286
														-11.6751	110.317	-5.25046
													}
													{bone "barrel_wr_thermal01"
														{Position -9.26705	0	-7.36949}
													}
													{bone "barrel_wr_thermal00"
														{Position -9.26704	1.52588e-05	7.58459}
													}
												}
												{bone "foresight_wr_volcano"
													{Matrix34
														0.0353734	0.998978	0.0281203
														-0.437082	-0.00983947	0.899368
														0.898726	-0.0441046	0.436286
														-11.5995	200.145	-2.92709
													}
													{bone "fxshell_wr_volcano5"
														{Position -200.211	24.8133	8.41706}
													}
													{bone "fxshell_wr_volcano4"
														{Position -187.266	24.8133	8.41703}
													}
													{bone "fxshell_wr_volcano3"
														{Position -174.528	-25.2779	8.41709}
													}
													{bone "fxshell_wr_volcano2"
														{Position -200.211	-25.2779	8.41708}
													}
													{bone "fxshell_wr_volcano1"
														{Position -187.266	-25.2779	8.41709}
													}
													{bone "fxshell_wr_volcano6"
														{Position -174.528	24.8133	8.41703}
													}
												}
												{bone "foresight_wr_battlecannon"
													{Matrix34
														0.0353734	0.998978	0.0281203
														-0.437082	-0.00983947	0.899368
														0.898726	-0.0441046	0.436286
														-12.51	133.221	-4.19313
													}
													{bone "foresight_wr_battlecannon_stb"
														{Position -44.5148	19.4072	-14.9535}
													}
												}
											}
										}
									}
								}
							}
							{bone revolute "ml_h"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-0.444812	111.592	-10.5307
								}
								{bone revolute "ml_v"
									{Orientation
										1	0	0
										0	0	1
										0	-1	0
									}
									{bone "foresight_ml"
										{Matrix34
											0.996195	0.0871556	0
											0	0	-1
											-0.0871557	0.996195	0
											33.1245	17.6767	1.2517e-05
										}
										{bone "barrels_ml05"
											{Position -21.1196	10.0129	-4.69946}
										}
										{bone "barrels_ml04"
											{Position -21.1196	-9.63008	-4.6994}
										}
										{bone "barrels_ml03"
											{Position -20.204	-9.63008	5.76587}
										}
										{bone "barrels_ml02"
											{Position -20.204	10.0129	5.76581}
										}
										{bone "barrels_ml01"
											{Position -20.6477	18.5424	0.694916}
										}
										{bone "barrels_ml00"
											{Position -20.6477	-18.286	0.694946}
										}
									}
								}
							}
							{bone revolute "stubber_l_h"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									38.3312	57.0822	47.0176
								}
								{bone revolute "stubber_l_v"
									{Matrix34
										1	0	0
										0	0	1
										0	-1	0
										-1.56857	0	-10.5211
									}
									{bone "foresight_cxl_stubber"
										{Matrix34
											1	0	0
											0	0	-1
											0	1	0
											48.8648	0.0571442	0.0240173
										}
									}
								}
							}
							{bone revolute "stubber_r_h"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-36.7807	57.0822	48.4676
								}
								{bone revolute "stubber_r_v"
									{Matrix34
										1	0	0
										0	0	1
										0	-1	0
										-3.01857	-1.90266	-10.5212
									}
									{bone "foresight_cxr_stubber"
										{Matrix34
											1	0	0
											0	0	-1
											0	1	0
											48.8648	0.0571594	-0.0242157
										}
									}
								}
							}
							{bone "visor_eyes"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-0.175886	40.6863	84.4733
								}
							}
							{bone "visor_around"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-0.175854	167.133	-5.52669
								}
							}
							{bone "eyes_r"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									3.53212	40.6863	74.779
								}
								{bone "fx_dmg_Body2"}
							}
							{bone "eyes_l"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-3.88371	40.6863	74.779
								}
							}
							{bone "fxsmoke1"
								{Matrix34
									0	1	0
									1	0	0
									0	0	-1
									-34.2542	112.053	-52.7375
								}
							}
							{bone "fxsmoke3"
								{Matrix34
									0	1	0
									1	0	0
									0	0	-1
									-34.097	112.053	-38.6753
								}
							}
							{bone "fxsmoke2"
								{Matrix34
									0	1	0
									1	0	0
									0	0	-1
									33.4678	112.053	-38.6753
								}
							}
							{bone "fxsmoke4"
								{Matrix34
									0	1	0
									1	0	0
									0	0	-1
									33.7829	112.053	-52.7375
								}
							}
						}
					}
				}
			}
		}
	}

	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_knight/Model/Base/+base_vol.inc")
	
	%args_vol
)