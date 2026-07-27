
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_tarantula/animations/anm.ext"}
		
		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{Bone "Role"			; {}
				%args_role
			}
			{bone "skeleton_root"
				{Orientation
					0	1	0
					-1	0	0
					0	0	1
				}
				{bone "bone_master"
					{Position 0	0	0.649999}
					{bone "bone_main_base"
						{Matrix34
							0	-1	0
							-1	0	-0.000674876
							0.000674876	0	-1
							0.177015	0.328577	6.46356
						}
						{bone "bone_upper_leg_a"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								9.75271	-0.0803624	-0.0073514
							}
							{bone "bone_lower_leg_a"
								{Matrix34
									0.999997	-0.00225067	0.000297546
									0.0022556	0.999839	-0.0177703
									-0.000257504	0.0177709	0.999842
									-0.828772	-0.360463	-0.0575889
								}
							}
						}
						{bone "bone_upper_leg_d"
							{Matrix34
								0	1	0
								0	0	-1
								-1	0	0
								-0.113912	9.81757	-0.00736666
							}
							{bone "bone_lower_leg_d"
								{Matrix34
									0.999877	8.00114e-05	-0.0156948
									-0.000358933	0.999842	-0.0177696
									0.0156909	0.0177731	0.999719
									-1.0344	-0.355902	-0.000546068
								}
							}
						}
						{bone "bone_upper_leg_b"
							{Matrix34
								-3.44952e-05	-1	0
								0	0	-1
								1	-3.44952e-05	0
								-0.038675	-9.8552	-0.00736141
							}
							{bone "bone_lower_leg_b"
								{Matrix34
									0.999847	8.00088e-05	-0.0175184
									-0.000391344	0.999842	-0.0177692
									0.0175142	0.0177733	0.999689
									-0.909318	-0.353559	-0.0246716
								}
							}
						}
						{bone "bone_upper_leg_c"
							{Matrix34
								-1	-1.68403e-05	0
								0	-0.00134929	-0.999999
								1.68409e-05	-0.999999	0.00134929
								-9.76016	-0.142753	-0.00734806
							}
							{bone "bone_lower_leg_c"
								{Matrix34
									0.999886	-0.00103804	-0.0150909
									0.000769588	0.999842	-0.0177841
									0.015107	0.0177705	0.999728
									-0.379284	-0.379738	-0.0573764
								}
							}
						}
						{bone "bone_turret"
							{Position -0.0124065	-0.0651786	-9.29691}
						}
						{bone revolute "aim_h"
							{Matrix34
								1	0	0
								0	-1	0.000674876
								0	-0.000674876	-1
								-0.0124063	-0.0651793	-9.29694
							}
							{bone "bone_turret_aim"
								{Matrix34
									1	0	0
									0	-1	-0.00067544
									0	0.00067544	-1
									0	0	-2.67029e-05
								}
								{bone "bone_turret_for_idle"
									{Position 0	0	0}
									
									{bone "fx_beacon1"
										{Matrix34
											1	0	0
											0	-1	0.000675353
											0	-0.000675352	-1
											8.53958	3.24752	0.74544
										}
									}
									{bone "fx_beacon2"
										{Matrix34
											1	0	0
											0	-1	0.000675353
											0	-0.000675352	-1
											8.53961	-4.17303	0.369652
										}
									}
									{bone "fx_beacon3"
										{Matrix34
											1	0	0
											0	-1	0.000675353
											0	-0.000675352	-1
											8.29574	-4.17223	1.54495
										}
									}
									{bone "fx_beacon4"
										{Matrix34
											1	0	0
											0	-1	0.000675353
											0	-0.000675352	-1
											8.29587	3.25175	1.98981
										}
									}
									{bone "fx_beacon5"
										{Matrix34
											1	0	0
											0	-1	0.000675353
											0	-0.000675352	-1
											1.81963	-1.90257	1.21147
										}
									}
									{bone "fx_beacon6"
										{Matrix34
											0.559193	-0.000559958	-0.829038
											0	-1	0.000675774
											-0.829038	-0.000378296	-0.559192
											9.60165	0.0045611	-35.4425
										}
									}
									{bone "fx_beacon7"
										{Matrix34
											0.498693	-0.000585449	-0.866778
											0	-1	0.000675892
											-0.866779	-0.00033775	-0.498693
											1.17787	0.0168606	-17.3001
										}
									}
									{bone "fx_tarantula"
										{Matrix34
											1	0	0
											0	-1	0.000675353
											0	-0.000675352	-1
											6.62847	0.235005	-1.37404
										}
									}
									{bone "fx_tarantula_hb1"
										{Matrix34
											1	0	0
											0	-1	0.000675352
											0	-0.000675352	-1
											7.59128	2.56145	-0.190802
										}
									}
									{bone "fx_tarantula_ml1"
										{Matrix34
											1	0	0
											0	-1	0.000675352
											0	-0.000675352	-1
											8.24626	-3.93454	3.47865
										}
									}
									{bone "fx_tarantula_ml2"
										{Matrix34
											1	0	0
											0	-1	0.000675352
											0	-0.000675352	-1
											8.24625	-7.39187	-3.33535
										}
									}
									{bone "fx_tarantula_ml3"
										{Matrix34
											1	0	0
											0	-1	0.000675352
											0	-0.000675352	-1
											8.2463	7.3111	-3.42575
										}
									}
									
									{bone revolute "aim_v"
										{Matrix34
											1	0	0
											0	-0.000675666	-1
											0	1	-0.000675666
											-2.99519	-0.000194371	-0.285654
										}
										{bone "bone_turret_gun_l_aim"
											{Matrix34
												1	0	0
												0	1	0.000676958
												0	-0.000676958	1
												7.48278	-0.0507641	-13.2103
											}
										}
										{bone "bone_turret_gun_r_aim_b"
											{Matrix34
												1	0	0
												0	1	0.000677109
												0	-0.000677109	1
												7.50711	-0.113596	12.6533
											}
											{bone "bone_turret_gun_r"
												{Position 0	0	0}
											}
										}
										{bone "bone_turret_gun_r_aim"
											{Matrix34
												1	0	0
												0	1	0.000676958
												0	-0.000676958	1
												7.50711	-0.113594	12.6533
											}
										}
										{bone "bone_turret_gun_l_aim_b"
											{Matrix34
												1	0	0
												0	1	0.000677109
												0	-0.000677109	1
												7.48278	-0.0507889	-13.2104
											}
											{bone "bone_turret_gun_l"
												{Position 0	0	0}
											}
										}
										{bone "visor_eyes"
											{Matrix34
												1	0	0
												0	0	-1
												0	1	0
												13.1787	7.91014	0.235921
											}
										}
										{bone "foresight_hb"
											{Matrix34
												1	0	0
												0	0	-1
												0	1	0
												16.9962	0.128263	0.235918
											}
											{bone "barrel_hb01"
												{Position 0	-11.0315	0}
											}
											{bone "barrel_hb00"
												{Position 0	11.28	0}
											}
											{bone "fxshell_hb01"
												{Matrix34
													0	-1	0
													1	0	0
													0	0	1
													-9.3896	-12.7262	1.81835
												}
											}
											{bone "fxshell_hb00"
												{Matrix34
													0	1	0
													-1	0	0
													0	0	1
													-9.3896	13.1711	1.4101
												}
											}
										}
										{bone "foresight_ml"
											{Matrix34
												1	0	0
												0	0	-1
												0	1	0
												16.9962	0.128263	0.235918
											}
											{bone "barrel_ml00"
												{Position -6.17566	-12.1288	1.26976}
											}
											{bone "barrel_ml01"
												{Position -6.17566	-9.84122	1.26976}
											}
											{bone "barrel_ml02"
												{Position -6.17566	12.6444	1.48051}
											}
											{bone "barrel_ml03"
												{Position -6.17566	10.3393	1.41867}
											}
											{bone "barrel_ml04"
												{Position -6.17566	-12.0961	-1.52157}
											}
											{bone "barrel_ml05"
												{Position -6.17566	-9.80652	-1.52157}
											}
											{bone "barrel_ml06"
												{Position -6.17566	12.6444	-1.42147}
											}
											{bone "barrel_ml07"
												{Position -6.17566	10.3393	-1.41122}
											}
											{bone "barrel_ml10"
												{Position -6.17566	12.6444	-4.25889}
											}
											{bone "barrel_ml11"
												{Position -6.17566	10.3597	-4.25889}
											}
											{bone "barrel_ml09"
												{Position -6.17566	-9.80652	-4.46503}
											}
											{bone "barrel_ml08"
												{Position -6.17566	-12.0996	-4.46503}
											}
										}
									}
								}
								{bone "bone_sattelite_lower_hinge"
									{Matrix34
										1	0	0
										0	0	-1
										0	1	0
										-3.55962	-0.0105123	-0.873047
									}
									{bone "bone_sattelite_upper_hinge"
										{Matrix34
											0.980004	-0.198979	0
											0.198979	0.980004	0
											0	0	1
											0.00430751	8.04948	-0.00543737
										}
										{bone "bone_sattelite_mid_panel"
											{Matrix34
												0	0	-1
												-0.958308	0.285737	0
												0.285737	0.958308	0
												1.88102	10.236	0.116198
											}
											{bone "bone_sattelite_rpanel_big"
												{Matrix34
													0.880596	0.0317566	-0.472804
													-0.0436429	0.998946	-0.0141892
													0.471855	0.0331293	0.881054
													-8.23436	-0.138437	-0.454447
												}
											}
											{bone "bone_sattelite_lpanel_big"
												{Position 8.09752	-0.21014	-0.57069}
											}
										}
										{bone "bone_sattelite_pole_lower"
											{Matrix34
												0.946068	-0.323968	0.000341566
												0.323968	0.946068	-0.000582608
												-0.000134399	0.000661843	1
												8.09609	5.85196	0.0655237
											}
											{bone "bone_sattelite_pole_upper"
												{Position 0.0682268	12.4967	-0.541879}
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
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/V_tarantula/Model/+base_vol.inc")
	
	%args_vol
)