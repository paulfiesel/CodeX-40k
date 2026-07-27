
(Define "Skeleton"
	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Dreadnought/Animations/Anm.inc")
		
		{bone revolute "basis"
			{limits 0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{Bone "Role"	;{}
				%args_role 
				
				{bone "smoke_launchers"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dreadnought_Chassis/SM/smoke_launchers.ply"}
				}
				{bone "dreadnought_body"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dreadnought_Chassis/SM/dreadnought_body.ply"}
				}
				{bone "exhaust"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dreadnought_Chassis/SM/exhaust1.ply"}
				}
				{bone "leg_armor1"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dreadnought_Chassis/SM/leg_armor1.ply"}	{Visibility 0}
				}
				{bone "leg_armor2"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dreadnought_Chassis/SM/leg_armor2.ply"}	{Visibility 0}
				}
				{bone "leg_armor3"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dreadnought_Chassis/SM/leg_armor3.ply"}	{Visibility 0}
				}
			}
			{bone "visor1"
				{Position 0	0	100}
			}
			{bone "bip01_pelvis"
				{Matrix34
					0	1	0
					0	0	1
					1	0	0
					-2.25515	0	29.9289
				}
				{bone "fx_dmg_Body1"}
						
				{bone "bip01_l_thigh"
					{Matrix34
						-0.956027	-0.291505	0.032192
						0.168504	-0.635811	-0.753227
						0.240037	-0.714681	0.656973
						18.8098	3.24249e-05	8.13007e-05
					}
					{bone "bip01_l_calf"
						{bone "fx_dmg_legL1"}
						
						{Matrix34
							-1	0	0
							0	-0.369269	0.929323
							0	0.929323	0.369268
							-4.76837e-05	9.44138e-05	15.3901
						}
						{bone "bip01_l_foot"
							{Matrix34
								0.956848	0.130454	0.25966
								-0.00010085	0.893716	-0.448634
								-0.290589	0.429249	0.855163
								0	0	16.1219
							}
							{bone "joint32"
								{Position -1.14441e-05	-8.66652e-05	2.84995}
								{bone "toes_l_outer"
									{Position 7.98001	-0.00105929	0.0074358}
								}
								{bone "toes_l_inner"
									{Position -8.5499	0.00113642	-0.00809336}
								}
								{bone "toes_l_forward"
									{Position 0.00115204	8.5498	-0.0024426}
								}
								{bone "toes_l_back"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-0.0012188	-9.12024	0.00291085
									}
								}
							}
						}
					}
				}
				{bone "bip01_r_thigh"
					{Matrix34
						-0.163854	-0.640605	-0.750185
						-0.231596	-0.714228	0.660486
						-0.958914	0.281962	-0.0313326
						-18.8101	-0.00293159	-0.00349236
					}
					{bone "bip01_r_calf"
						{Matrix34
							0.00155778	-0.000912189	-0.999998
							-0.36181	0.932251	-0.00141401
							0.932251	0.361811	0.00112253
							-0.000113487	15.3899	0.0038147
						}
						{bone "fx_dmg_legR1"}
						
						{bone "bip01_r_foot"
							{Matrix34
								-0.959545	0.127986	0.250783
								6.8274e-05	-0.890605	0.454777
								0.281554	0.436396	0.854567
								-5.14984e-05	-8.60691e-05	16.1219
							}
							{bone "joint31"
								{Matrix34
									1	0	0
									0	1	0
									0	0	1
									0	-8.45194e-05	2.84969
								}
								{bone "toes_r_back"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										-0.0126133	9.11985	0.00142741
									}
								}
								{bone "toes_r_forward"
									{Matrix34
										1	0	0
										0	1	0
										0	0	1
										0.0118198	-8.54992	-0.00141835
									}
								}
								{bone "toes_r_inner"
									{Position -7.9794	-0.01103	-0.00256371}
								}
								{bone "toes_r_outer"
									{Position 9.12047	0.0126066	0.0029223}
								}
							}
						}
					}
				}
				{bone "fxfire2"
					{Matrix34
						0	0	1
						1	0	0
						0	1	0
						-1.15443e-05	5.75583	-1.46185
					}
				}
				{bone revolute "aim_h"
					{speed 0.025}
					{Matrix34
						0	0	1
						1	0	0
						0	1	0
						0	13.395	-0.285001
					}
					{bone "spawn_melee_ctc"
						{Position 77.5401	-6.10149e-05	-13.3239}
					}
					{bone revolute "m_aim_h"
						{limits -26 26} {Speed 0.025}
						{bone revolute "m_aim_v"
							{limits -48 36} {Speed 0.025}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{bone "foresight_melee"}
						}
					}
					{bone revolute "aim_v"
						{limits -18 24}
						{speed 0.025}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							0	0	0
						}
						{bone "bip01_spine"
							{Matrix34
								0	0	-1
								0	1	0
								1	0	0
								0	0	0
							}
							{bone "fxsmoke_shot1"	{bone "smoke_shot1"}
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									0.0141127	41.7266	-0.869875
								}
							}
							{bone "fxsmoke_shot2"	{bone "smoke_shot2"}
								{Matrix34
									-0.573576	0	0.819153
									0.819152	0	0.573576
									0	1	0
									-6.75477	40.7962	-2.38715
								}
							}
							{bone "fxsmoke_shot3"	{bone "smoke_shot3"}
								{Matrix34
									0.573577	0	0.819151
									0.819151	0	-0.573578
									0	1	0
									6.75504	40.7962	-2.38715
								}
							}
							{bone "Sc_stance_fx"}
							
							{Bone "vol_venerable_head"}
							{Bone "vol_venerable"}
							{Bone "vol_ironclad"}
							
							{bone revolute "hff_aim_h"
								{limits -20 20} {speed 0.025}
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									34.4729	-17.4096	28.2151
								}
								{bone revolute "foresight_hff"
									{limits -18 12} {speed 0.025}
									{Orientation
										1	0	0
										0	0	1
										0	-1	0
									}
								}
							}
							{bone revolute "hkm_aim_h"
								{limits -4 4} {speed 0.025}
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									4.80651e-05	38.2142	10.2463
								}
								{bone revolute "foresight_hkm"
									{limits -8 8} {speed 0.025}
									{Matrix34
										1	0	0
										0	0	1
										0	-1	0
										0	0	0
									}
								}
							}
							{bone "barrel_hkm00"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									-16.357	38.2142	10.2463
								}
							}
							{bone "barrel_hkm01"
								{Matrix34
									0	0	1
									1	0	0
									0	1	0
									16.4372	38.2142	10.2463
								}
							}
							{bone "bip01_r_clavicle"
								{Matrix34
									1	0	0
									0	1	0
									0	0	1
									-25.65	13.9656	-4.84507
								}
								{Bone "fx_dmg_Aux11"}
								
								{Bone "voL_WR_verA"}
								{Bone "voL_WR_verB"}
								
								{bone "assaultcannon_barrel"
									{Position -6.36452	-2.79729	19.38}
								}
								{bone "bip01_r_upperarm"
									{Position -6.26994	0.854416	1.70992}
									{bone "bip01_r_forearm"
										{Position -0.569693	-15.1051	1.70956}
										{bone "bip01_r_hand"
											{Position 1.90735e-05	-1.70992	21.6603}
										}
									}
								}
								{bone "fxlaser_as2"
									{Matrix34
										0	0.0151753	0.999885
										1	0	0
										0	0.999885	-0.0151754
										-3.12064	11.2029	14.5926
									}
								}
								{bone "foresight_ac"
									{Matrix34
										0	0	1
										0.999697	-0.0246277	0
										0.0246277	0.999697	0
										-6.96576	-6.03306	47.9691
									}
									{bone "barrel_ac00"
										{Position -4.09885	0	3.34832}
									}
									{bone "barrel_ac01"
										{Position -4.09883	0	-4.21923}
									}
								}
								{bone "foresight_as2"
									{Matrix34
										0	0	1
										0.999697	-0.0246277	0
										0.0246277	0.999697	0
										-6.33381	-2.81177	39.8348
									}
								}
								{bone "foresight_hb"
									{Matrix34
										0	0	1
										0.999697	-0.0246277	0
										0.0246277	0.999697	0
										-9.45439	-5.5698	37.0603
									}
									{bone "barrel_hb01"
										{Position 0	-3.2369	0}
									}
									{bone "barrel_hb00"
										{Position 0	3.56084	0}
									}
									{bone "fxshell_hb01"
										{Matrix34
											0	-0.999697	-0.0246317
											0.999697	0.000607386	-0.0246192
											0.0246266	-0.0246242	0.999393
											-11.6382	-5.8828	0.568832
										}
									}
									{bone "fxshell_hb00"
										{Matrix34
											0	0.999697	0.0246267
											-0.999697	0.000605841	-0.0246244
											-0.0246318	-0.0246191	0.999393
											-11.6382	5.85473	0.858006
										}
									}
								}
								{bone "foresight_hrc"
									{Matrix34
										0	0	1
										0.999697	-0.0246277	0
										0.0246277	0.999697	0
										-6.11985	-3.61818	34.105
									}
									{bone "barrel_hrc00"
										{Position -2.08828	-2.41077	7.0037}
									}
									{bone "barrel_hrc01"
										{Position -2.08826	-2.41077	-0.0259094}
									}
									{bone "barrel_hrc02"
										{Position -2.08824	-2.41077	-6.98341}
									}
									{bone "barrel_hrc03"
										{Position -2.08828	2.51293	7.0037}
									}
									{bone "barrel_hrc04"
										{Position -2.08827	2.51293	-0.0259132}
									}
									{bone "barrel_hrc05"
										{Position -2.08825	2.51293	-6.98341}
									}
								}
								{bone "foresight_inf"
									{Matrix34
										0	0	1
										0.999697	-0.0246277	0
										0.0246277	0.999697	0
										-6.9853	-0.396782	59.565
									}
									{bone "fx_inf"
										{Matrix34
											0.499998	0	0.866027
											0	1	0
											-0.866027	0	0.499998
											3.12667	0.0162621	-2.0745
										}
									}
								}
								{bone "foresight_lc"
									{Matrix34
										0	0	1
										0.999697	-0.0246277	0
										0.0246277	0.999697	0
										-5.67698	-5.5184	60.8734
									}
									{bone "barrel_lc01"
										{Position -4.09884	0	-5.12059}
									}
									{bone "barrel_lc00"
										{Position -4.09886	0	4.0909}
									}
								}
								{bone "foresight_mm"
									{Matrix34
										0	0	1
										0.999697	-0.0246277	0
										0.0246277	0.999697	0
										-5.67704	-5.51841	43.8461
									}
									{bone "barrel_mm00"
										{Position -4.18266	0	4.0909}
									}
									{bone "barrel_mm01"
										{Position -4.18264	0	-4.83601}
									}
								}
								{bone "foresight_pc"
									{Matrix34
										0	0	1
										1	0	0
										0	1	0
										-5.48725	-2.81177	52.9197
									}
									{bone "fx_pc2"
										{Position -23.8661	4.71795	2.11458}
									}
									{bone "fx_pc1"
										{Position -23.8662	0.040369	7.63132}
									}
									{bone "fx_pc3"
										{Position -23.8661	-5.31335	2.11458}
									}
								}
							}
							{bone "bip01_l_clavicle"
								{Matrix34
									1	0	0
									0	1	0
									0	0	1
									25.65	13.9649	-4.84494
								}
								{Bone "voL_WL_verA"}
								{Bone "voL_WL_verB"}
								
								{Bone "fx_dmg_Aux21"}
								
								{bone "barrel_mll07"
									{Matrix34
										0	0	1
										0.999749	0.022406	0
										-0.022406	0.999749	0
										8.92177	-10.6009	24.2049
									}
								}
								{bone "barrel_mll06"
									{Matrix34
										0	0	1
										0.999749	0.022406	0
										-0.022406	0.999749	0
										4.65911	-10.6009	24.2049
									}
								}
								{bone "barrel_mll05"
									{Matrix34
										0	0	1
										0.999749	0.022406	0
										-0.022406	0.999749	0
										7.36375	-5.95187	24.2049
									}
								}
								{bone "barrel_mll04"
									{Matrix34
										0	0	1
										0.999749	0.022406	0
										-0.022406	0.999749	0
										2.9551	-5.9519	24.2049
									}
								}
								{bone "barrel_mll03"
									{Matrix34
										0	0	1
										0.999749	0.022406	0
										-0.022406	0.999749	0
										8.95402	-1.51435	24.2049
									}
								}
								{bone "barrel_mll02"
									{Matrix34
										0	0	1
										0.999749	0.022406	0
										-0.022406	0.999749	0
										4.54536	-1.51435	24.2049
									}
								}
								{bone "barrel_mll01"
									{Matrix34
										0	0	1
										0.999749	0.022406	0
										-0.022406	0.999749	0
										7.36104	3.11957	24.2049
									}
								}
								{bone "barrel_mll00"
									{Matrix34
										0	0	1
										0.999749	0.022406	0
										-0.022406	0.999749	0
										3.03893	3.11956	24.2049
									}
								}
								{bone revolute "foresight_mll"
									{limits -15 05} {speed 0.025}
									{Matrix34
										0	0	1
										0.998686	-0.0512487	0
										0.0512487	0.998686	0
										6.12532	-3.61752	26.9903
									}
								}
								{bone "bip01_l_upperarm"
									{Position 6.26999	0.85498	1.7099}
									{bone "l_arm_flap"
										{Position 3.99001	2.565	0}
									}
									{bone "bip01_l_forearm"
										{Matrix34
											0.99848	0.00336397	-0.0550029
											0	0.998135	0.0610488
											0.0551057	-0.060956	0.996618
											0.569975	-15.105	1.7101
										}
										{bone "foresight_hff_spawn"
											{Matrix34
												-0.0115482	-0.0176042	0.999778
												0.999933	-0.00145635	0.0115242
												0.00125313	0.999844	0.01762
												0.292133	-15.283	30.6929
											}
											{bone "fx_hff"
												{Matrix34
													0.466498	0.00645049	0.884499
													-0.0310272	0.999477	0.00907515
													-0.883978	-0.0316771	0.466455
													2.09064	-0.0536804	-1.05831
												}
											}
										}
										{bone "bip01_l_hand"
											{Position 5.34058e-05	-1.70993	21.6602}
											{Bone "fx_dmg_Gun1"}
								
											{bone "bip01_l_finger1"
												{Matrix34
													0.000796281	1	0
													-1	0.000796289	0
													0	0	1
													-6.86646e-05	5.69992	2.27983
												}
												{bone "bip01_l_finger1drill"
													{Matrix34
														0.540302	0	-0.841471
														0	1	0
														0.841471	0	0.540303
														2.90699	0	8.23651
													}
												}
											}
											{bone "bip01_l_finger2"
												{Matrix34
													1	0	0
													0	1	0
													0	0	1
													5.41504	8.01086e-05	2.27978
												}
												{bone "bip01_l_finger2drill"
													{Matrix34
														0.540302	0	-0.841471
														0	1	0
														0.841471	0	0.540302
														2.907	0	8.23651
													}
												}
											}
											{bone "bip01_l_finger3"
												{Matrix34
													0.000796495	1	0
													-1	0.000796503	0
													0	0	1
													-5.72205e-05	-5.69983	2.2798
												}
												{bone "bip01_l_finger3drill"
													{Matrix34
														0.540302	0	0.841471
														0	1	0
														-0.841471	0	0.540303
														-2.907	0	8.2365
													}
												}
											}
											{bone "bip01_l_finger4"
												{Position -5.69992	4.19617e-05	2.27978}
												{bone "bip01_l_finger4drill"
													{Matrix34
														0.540302	0	0.841471
														0	1	0
														-0.841471	0	0.540303
														-2.907	0	8.2365
													}
												}
											}
											{bone "fx_l_claw"
												{Matrix34
													0.998481	0	0.0551025
													0.00340678	0.998086	-0.0617495
													-0.0549972	0.0618435	0.99657
													-0.130035	-0.706261	4.82695
												}
											}
										}
									}
								}
							}
							{bone "Visor"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									3.66211e-05	23.9728	19.3679
								}
							}
							{bone "fxlights1"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									16.7999	5.13634	25.3126
								}
							}
							{bone "fxlights2"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									19.9679	5.89206	25.3278
								}
							}
							{bone "fxlights3"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									-16.3316	4.18288	25.0943
								}
							}
							{bone "fxlights4"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									19.7954	31.3007	10.6271
								}
							}
							{bone "fxlights5"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									13.1866	32.5733	10.2957
								}
							}
							{bone "fxfire1"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									0	18.4495	-20.1261
								}
							}
							{bone "fxfire3"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									3.61996e-05	32.6641	-1.67272
								}
							}
							{bone "fx_dmg_Engine1"
								{Matrix34
									-5.49929e-05	-0.999885	0.0151751
									1	-5.41923e-05	5.31612e-05
									-5.23327e-05	0.0151747	0.999885
									0	17.4993	-24.8365
								}
							}
							{bone "fxsmoke1"
								{Matrix34
									5.49993e-05	1	0
									1	-5.49991e-05	-5.31674e-05
									-5.31673e-05	0	-1
									12.25	39.4624	-24.8366
								}
							}
							{bone "fxsmoke2"
								{Matrix34
									5.49993e-05	1	0
									1	-5.49991e-05	-5.31674e-05
									-5.31673e-05	0	-1
									-12.4147	39.4624	-24.8365
								}
							}
							{bone "Visor_Eyes"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									3.8806e-05	21.6984	29.6377
								}
							}
							{bone "fx_venerable_eye_l"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									2.93051	21.9055	28.4372
								}
							}
							{bone "fx_venerable_eye_r"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									-2.93047	21.9055	28.4372
								}
							}
							{bone "fx_venerable_gold_halo3"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									2.09549e-05	7.68021	34.3102
								}
							}
							{bone "fx_venerable_gold_halo1"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									-16	26.3208	22.2158
								}
							}
							{bone "fx_venerable_gold_halo2"
								{Matrix34
									0	0.0151748	0.999885
									1	0	0
									0	0.999885	-0.015175
									16	26.3208	22.2158
								}
							}
						}
					}
				}
			}
		}
	}
			
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Dreadnought/Model/Base/+base_vol.inc")
	
	%args_vol
)