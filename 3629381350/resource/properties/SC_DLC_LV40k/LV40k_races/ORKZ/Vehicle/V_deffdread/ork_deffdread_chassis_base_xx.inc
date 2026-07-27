
(Define "Skeleton"
	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_deffdread/Animations/Animations.inc")
		
		{bone revolute "basis"
			{limits 0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			
			%args_role 
			
			{bone "bone_master"
				{Orientation
					0	1	0
					-1	0	0
					0	0	1
				}
				{bone "bone_dread_root"
					{Position 0	0	26.66}
					{bone "bone_dread_leg_top_r"
						{Position -27.1828	0	7.33328}
					}
					{bone "bone_dread_leg_top_l"
						{Position 27.0625	0	7.33328}
					}
					
					{bone "aim_bone_spine_h"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0	0	2.51755
						}
						{bone "fx_dmg_Body1"}
						{bone "aim_bone_spine_v"
							{Orientation
								1	0	0
								0	0	1
								0	-1	0
							}
							{bone "bone_dread_pelvis_rotator"
								{Matrix34
									0	0	-1
									-1	0	0
									0	1	0
									0	0	0
								}
								{bone "bone_dread_leg_cable_r01"
									{Position -10.3764	0	-6.76844}
								}
								{bone "bone_dread_leg_cable_l01"
									{Position 10.3432	0	-6.76844}
								}
								{bone "bone_dread_leg_inner_l"
									{Matrix34
										0.866026	0	0.5
										0	1	0
										-0.5	0	0.866026
										12.0743	0	-0.379139
									}
								}
								{bone "bone_dread_leg_inner_r"
									{Matrix34
										-0.866025	0	0.5
										0	-1	0
										0.5	0	0.866026
										-12.0743	0	-0.379139
									}
								}
								{bone "bone_dread_spine"
									{Position 0	0	9.17983}
									{bone "bone_dread_torso"
										{Position 0	0	2.36543}
										{bone "Sc_stance_fx"}
										{bone "bone_dread_arm_r01"
											{Matrix34
												-1	0	0
												0	-1	0
												0	0	1
												-14.9316	-0.943704	19.2394
											}
											{bone "bone_dread_piston_r01"
												{Matrix34
													0.953286	0.30207	0
													-0.30207	0.953286	0
													0	0	1
													6.52951	5.55693	-0.067627
												}
											}
											{bone "bone_dread_arm_r02"
												{Matrix34
													0.258819	0.965926	0
													-0.965926	0.258819	0
													0	0	1
													20.8211	-0.255714	0
												}
												{bone "bone_dread_arm_r03"
													{Matrix34
														0.717388	0.696674	0
														-0.696674	0.717388	0
														0	0	1
														16.0548	-0.868488	0
													}
													{bone "bone_dread_claw_base"
														{Position 24.5931	0	0}
														
														{Bone "fx_dmg_Gun2"}
														
														{bone "bone_dread_claw_r"
															{Matrix34
																0.882038	-0.471179	0
																-0.471179	-0.882038	0
																0	0	-1
																2.49028	0	0.90847
															}
														}
														{bone "bone_dread_claw_l"
															{Matrix34
																0.866026	0.5	0
																-0.5	0.866026	0
																0	0	1
																2.49028	0	0.90847
															}
														}
														{bone "marker_synckill_03_attach"
															
															{Matrix34
																0.625082	0.686947	0.370642
																-0.494062	-0.0194141	0.86921
																0.604297	-0.726448	0.327259
																13.7887	0.138077	1.00717
															}
														}
														{bone "melee_contact_r1"
															
															{Matrix34
																0.625082	0.686947	0.370642
																-0.494062	-0.0194141	0.86921
																0.604297	-0.726448	0.327259
																13.7887	0.138077	1.00717
															}
														}
													}
												}
												{bone "bone_dread_piston_r02"
													{Matrix34
														0.538506	-0.842622	0
														0.842622	0.538506	0
														0	0	1
														9.99632	2.66487	-0.067627
													}
												}
											}
										}
										{bone "bone_dread_arm_l01"
											{Position 14.9316	-0.943704	19.2394}
											{bone "bone_dread_arm_l02"
												{Matrix34
													0.258819	-0.965926	0
													0.965926	0.258819	0
													0	0	1
													20.6383	0.25571	0
												}
												{bone "bone_dread_arm_l03"
													{Matrix34
														0.718229	-0.695807	0
														0.695807	0.718229	0
														0	0	1
														16.0397	0.812202	0
													}
													{bone "bone_dread_saw_base"
														{Position 24.9026	0	0}
														{bone "bone_dread_saw_blade"
															{Position 15.9534	-0.0919724	-0.206371}
					
															{bone "fx_dmg_Gun1"}
															
															{bone "melee_contact_l1"
																{Matrix34
																	-0.486206	0.873844	0
																	-0.873844	-0.486206	0
																	0	0	1
																	0.121819	0.0949135	0.627594
																}
															}
														}
													}
												}
												{bone "bone_dread_piston_l02"
													{Matrix34
														0.537341	0.843365	0
														-0.843365	0.537341	0
														0	0	1
														10.0466	-2.64813	-0.0964203
													}
												}
											}
											{bone "bone_dread_piston_l01"
												{Matrix34
													0.953702	-0.300752	0
													0.300752	0.953702	0
													0	0	1
													6.16665	-5.55693	-0.0964203
												}
											}
										}
										{bone "bone_dread_valve01"
											{Position -6.45221	22.6789	12.8813}
										}
										{bone "bone_dread_valve02"
											{Matrix34
												1	0	0
												0	0.992184	0.124787
												0	-0.124787	0.992184
												2.06499	24.0384	1.43186
											}
										}
										{bone "bone_dread_bosspole"
											{Position -12.9095	18.5863	27.8471}
											{bone "bone_dread_bosspole_bit02"
												{Position -6.43952	-2.73979	22.0549}
											}
											{bone "bone_dread_bosspole_bit01"
												{Position 4.44272	-2.73979	23.3139}
											}
										}
										{bone "fxsmoke1"
											{Matrix34
												0	0	1
												1	0	0
												0	1	0
												11.923	15.0176	41.2311
											}
										}
										{bone "fxsmoke2"
											{Matrix34
												0	0.368022	0.929817
												1	0	0
												0	0.929817	-0.368022
												17.7011	32.9544	52.1598
											}
										}
										{bone "fxsmoke3"
											{Matrix34
												0	0.368022	0.929817
												1	0	0
												0	0.929817	-0.368022
												-11.9835	34.6648	51.3028
											}
										}
										{bone "fxsmoke4"
											{Matrix34
												0	0.368022	0.929817
												1	0	0
												0	0.929817	-0.368022
												-20.9686	32.2174	50.6301
											}
										}
										{bone "fxsmoke5"
											{Matrix34
												0	0.368022	0.929817
												1	0	0
												0	0.929817	-0.368022
												5.88455	34.4453	48.3695
											}
										}
										{bone "fx_dmg_Engine1"
											{Matrix34
												0	-1	0
												1	0	0
												0	0	1
												0	19.1778	11.9238
											}
										}
										{bone "fxfire3"
											{Position 0	0	28.1749}
										}
										{bone "fxfire4"
											{Position 0	0	-11.1952}
										}
										{bone "fxfire1"
											{Position 0	0	-1.35269}
										}
										{bone "fx_eye_mad_dread"
											{Matrix34
												0	-1	0
												1	0	0
												0	0	1
												4.0725	-23.9601	18.9861
											}
										}
										{bone "fx_laser_mad_dread"
											{Matrix34
												0	-1	0
												1	0	0
												0	0	1
												5.97321	-21.9914	23.3731
											}
										}
										{bone "fx_eye"
											{Matrix34
												0	-1	0
												1	0	0
												0	0	1
												-4.60328	-20.4183	20.31
											}
										}
										{bone "visor_eyes"
											{Matrix34
												0	-1	0
												1	0	0
												0	0	1
												-0.00261901	-19.1166	19.8701
											}
										}
										{bone "visor1"
											{Matrix34
												0	-1	0
												1	0	0
												0	0	1
												0	0	38.0174
											}
										}
										{bone revolute "aim_bone_gun_left_h"
											{speed 0.07}
											{limits -12 12}
											{Matrix34
												0	-1	0
												1	0	0
												0	0	1
												15.2607	-4.67927	7.29238
											}
											{bone revolute "aim_bone_gun_left_v"
												{speed 0.07}
												{limits -20 20}
												{Orientation
													1	0	0
													0	0	1
													0	-1	0
												}
												{bone "bone_dread_gun_l_vert"
													{Matrix34
														0	0	-1
														-1	0	0
														0	1	0
														5.76973e-05	-0.000175476	2.47955e-05
													}
													{bone "foresight_l_zzap"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															3.79378	-22.9712	0.0348549
														}
													}
													{bone "foresight_l_shoota"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															2.45397	-24.5989	-2.15445
														}
														{bone "fxshell_l_shoota00"
															{Matrix34
																0	1	0
																-1	0	0
																0	0	1
																-28.2746	2.70315	-1.0135
															}
														}
														{bone "fxshell_l_shoota01"
															{Matrix34
																0	1	0
																-1	0	0
																0	0	1
																-28.2746	3.33594	2.13092
															}
														}
														{bone "barrel_l_shoota01"
															{Position -1.81976	0	2.17222}
														}
														{bone "barrel_l_shoota00"
															{Position -1.81976	0	-2.14986}
														}
													}
													{bone "foresight_l_rokkits"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															3.50011	-16.9194	0.506321
														}
														{bone "barrel_l_rokkits02"
															{Position -3.21772	0.541155	-3.48043}
														}
														{bone "barrel_l_rokkits01"
															{Position -4.17847	2.49003	2.63939}
														}
														{bone "barrel_l_rokkits00"
															{Position -4.46037	-1.51189	2.6668}
														}
													}
													{bone "foresight_l_megablasta"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															3.96195	-20.7338	2.40949
														}
														{bone "fx_l_megablasta00"
															{Position 1.47577	-0.109869	-1.39017}
														}
														{bone "fx_l_megablasta03"
															{Position -10.9113	-1.68633	-0.623482}
														}
														{bone "fx_l_megablasta01"
															{Position -11.937	0.0936413	3.39613}
														}
														{bone "fx_l_megablasta02"
															{Position -17.6867	0.0936413	3.39613}
														}
														{bone "fx_l_megablasta04"
															{Position -10.9113	1.85622	-0.623486}
														}
													}
													{bone "foresight_l_kannon"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															3.81055	-24.4985	0.506321
														}
													}
													{bone "foresight_l_burna"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															4.41533	-25.0018	-0.479767
														}
														{bone "fx_l_burna"
															{Matrix34
																0.642787	0	0.766045
																0	1	0
																-0.766044	0	0.642788
																0.61783	0	-5.7777
															}
														}
													}
													{bone "foresight_l_autocannon"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															4.00347	-37.7148	1.06083
														}
														{bone "fxshell_l_autocannon"
															{Matrix34
																0	1	0
																-1	0	0
																0	0	1
																-31.1701	3.75554	0
															}
														}
													}
												}
											}
										}
										{bone revolute "aim_bone_gun_right_h"
											{speed 0.07}
											{limits -12 12}
											{Matrix34
												0	-1	0
												1	0	0
												0	0	1
												-15.2607	-4.67927	7.29238
											}
											{bone revolute "aim_bone_gun_right_v"
												{speed 0.07}
												{limits -20 20}
												{Orientation
													1	0	0
													0	0	1
													0	-1	0
												}
												{bone "bone_dread_gun_r_vert"
													{Matrix34
														0	0	-1
														-1	0	0
														0	1	0
														-6.1512e-05	-0.000175476	3.14713e-05
													}
													{bone "foresight_r_zzap"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															-3.76921	-22.9714	0.034832
														}
													}
													{bone "foresight_r_shoota"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															-2.44448	-24.599	-2.15446
														}
														{bone "barrel_r_shoota01"
															{Position -1.81975	0	2.17222}
														}
														{bone "barrel_r_shoota00"
															{Position -1.81975	0	-2.14986}
														}
														{bone "fxshell_r_shoota00"
															{Matrix34
																0	-1	0
																1	0	0
																0	0	1
																-28.2746	-2.2135	-1.0135
															}
														}
														{bone "fxshell_r_shoota01"
															{Matrix34
																0	-1	0
																1	0	0
																0	0	1
																-28.2746	-3.14417	2.13092
															}
														}
													}
													{bone "foresight_r_rokkits"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															-4.46934	-16.9195	0.506321
														}
														{bone "barrel_r_rokkits00"
															{Position -4.46037	-1.51189	2.66679}
														}
														{bone "barrel_r_rokkits01"
															{Position -4.17848	2.49004	2.6394}
														}
														{bone "barrel_r_rokkits02"
															{Position -3.21772	0.541153	-3.48043}
														}
													}
													{bone "foresight_r_megablasta"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															-4.00744	-20.7339	2.40948
														}
														{bone "fx_r_megablasta00"
															{Position 1.47577	0.150089	-1.39017}
														}
														{bone "fx_r_megablasta01"
															{Position -11.937	0.150087	3.39613}
														}
														{bone "fx_r_megablasta02"
															{Position -17.6867	0.150089	3.39613}
														}
														{bone "fx_r_megablasta03"
															{Position -10.9113	-1.80135	-0.623478}
														}
														{bone "fx_r_megablasta04"
															{Position -10.9113	1.74119	-0.623478}
														}
													}
													{bone "foresight_r_kannon"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															-4.1589	-24.4987	0.50629
														}
													}
													{bone "foresight_r_burna"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															-4.44104	-25.0019	-0.479782
														}
														{bone "fx_r_burna"
															{Matrix34
																0.642787	0	0.766044
																0	1	0
																-0.766044	0	0.642788
																0.61783	0	-5.7777
															}
														}
													}
													{bone "foresight_r_autocannon"
														{Matrix34
															0	-1	0
															1	0	0
															0	0	1
															-3.96586	-37.7149	1.06082
														}
														{bone "fxshell_r_autocannon"
															{Matrix34
																0	-1	0
																1	0	0
																0	0	1
																-31.1701	-3.4121	0
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
				{bone "bone_dread_foot_r"
					{Position -27.1828	0	7.23688}
					
					{bone "fx_dmg_legR1"}
					
					{bone "bone_dread_toe_r04"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							4.77041	-0.0942636	-5.26476
						}
					}
					{bone "bone_dread_toe_r01"
						{Position 0	-4.14823	-4.80928}
					}
					{bone "bone_dread_toe_r03"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							0	4.17045	-4.80928
						}
						{bone "fx_stomp_r"
							{Matrix34
								0	1	0
								-1	0	0
								0	0	1
								-0.410858	4.41123	-2.4276
							}
						}
					}
					{bone "bone_dread_toe_r02"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-4.55695	-0.0942636	-5.26476
						}
					}
					{bone "bone_dread_leg_bott_r"
						{bone "bone_dread_leg_cable_r02"
							{Matrix34
								0	0	1
								0	1	0
								-1	0	0
								3.66962	0	2.14982
							}
						}
					}
				}
				{bone "bone_dread_foot_l"
					{Position 27.0625	0	7.23688}
					
					{bone "fx_dmg_legL1"}
					
					{bone "bone_dread_toe_l04"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-4.80085	-0.0942638	-5.26476
						}
					}
					{bone "bone_dread_toe_l01"
						{Position 0	-4.14823	-4.80927}
					}
					{bone "bone_dread_toe_l02"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							4.50695	-0.0942636	-5.26476
						}
					}
					{bone "bone_dread_toe_l03"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							0	4.17045	-4.80927
						}
						{bone "fx_stomp_l"
							{Matrix34
								0	1	0
								-1	0	0
								0	0	1
								0.0746632	4.41123	-2.4276
							}
						}
					}
					{bone "bone_dread_leg_bott_l"
						{bone "bone_dread_leg_cable_l02"
							{Matrix34
								0	0	-1
								0	1	0
								1	0	0
								-4.21629	0	2.14982
							}
						}
					}
				}
				{bone revolute "melee_rot"
					{limits -10 10} {speed 0.1}
					{Matrix34
						0	-1	0
						1	0	7.30005e-05
						-7.30004e-05	0	1
						0	-17.7165	49.2126
					}
					{bone revolute "foresight_melee"
						{limits -90 90} {speed 0.1}
						{Matrix34
							1	0	0
							0	7.30316e-05	1
							0	-1	7.30315e-05
							0	0	0
						}
					}
				}
			}
		}
	}

	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_deffdread/Model/Base/+base_vol.inc")
	
	%args_vol
)