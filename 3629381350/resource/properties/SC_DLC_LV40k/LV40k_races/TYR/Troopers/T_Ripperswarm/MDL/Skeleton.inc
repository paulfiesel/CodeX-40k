
(Define "Skeleton"
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Ripperswarm/MDL/Volumes.inc")

	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Ripperswarm/MDL/Animations/Animations.inc")
		
		(Define "ik_speed" 	{speed2 600})
		
		{bone revolute "basis"
			{limits -0 0}
			("ik_speed") 
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Ripperswarm/MDL/Models/tex_%color/+models_%model.ext")
			
			("SC_Troopers_Aim_Ref_MDL")
	
			{bone revolute "m_aim_h"
				{limits -25 25} ("ik_speed")
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
			{bone "visor_around"
				{Matrix34
					1	0	0
					0	1	0
					0	0	1
					0	0	37.5
				}
			}
			{bone "spawn_melee_ctc"
				{Matrix34
					1	0	0
					0	1	0
					0	0	1
					20	0	20
				}
			}
			{bone "fx_aura"}
			{bone "fx_fire"}
			{bone "tp_camera_Head"}
			{bone "Sc_stance_fx"}
			{bone "fx_generic_body"}
			{bone "fx_generic_head"}
			
			{bone "ripper1_skeleton_root"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					10	0	0
				}
				{bone "ripper1_bip01"
					{Matrix34
						0	-0.99984	-0.0179077
						0	0.0179076	-0.99984
						1	0	0
						1.43051e-05	3.57043	7.62794
					}
					{bone "ripper1_bip01_jaw"
						{Matrix34
							0.741124	0.671369	0
							-0.671368	0.741124	0
							0	0	1
							5.48904	1.18061	0
						}
					}
					{bone "ripper1_bip01_l_arms"
						{Matrix34
							0.478751	0.877951	0
							-0.877951	0.478751	0
							0	0	1
							3.67733	0.780582	2.42582
						}
					}
					{bone "ripper1_bip01_r_arms"
						{Matrix34
							0.478751	0.877951	0
							-0.877951	0.478751	0
							0	0	1
							3.67733	0.780584	-2.41855
						}
						{bone "ripper1_rb_mesh_body_02"
							{Matrix34
								0	0	1
								-0.462952	0.886383	0
								-0.886383	-0.462952	0
								-1.68819	4.687	2.41855
							}
						}
					}
					{bone "ripper1_bip01_tail1"
						{Matrix34
							-0.721063	0.692869	0
							-0.692869	-0.721063	0
							0	0	1
							-0.139429	1.43977	0
						}
						{bone "ripper1_bip01_tail2"
							{Matrix34
								0.982222	0.187722	0
								-0.187722	0.982222	0
								0	0	1
								5.28367	0	0
							}
							{bone "ripper1_bip01_tail3"
								{Matrix34
									0.818432	0.574603	0
									-0.574604	0.818432	0
									0	0	1
									3.34378	0	0
								}
								{bone "ripper1_bip01_tail4"
									{Matrix34
										0.827081	0.562083	0
										-0.562083	0.827081	0
										0	0	1
										2.65028	0	0
									}
								}
							}
							{bone "ripper1_rb_mesh_body_04"
								{Matrix34
									0	0	1
									0.843758	0.536723	0
									-0.536723	0.843759	0
									-4.20629	1.50909	0
								}
							}
						}
					}
					{bone "ripper1_rb_mesh_body_01"
						{Matrix34
							0	0	1
							-0.99984	0.0179075	0
							-0.0179075	-0.99984	0
							-1.24586	1.54234	0
						}
					}
					{bone "ripper1_rb_mesh_body_03"
						{Matrix34
							0	0	1
							-0.99984	0.0179075	0
							-0.0179075	-0.99984	0
							-1.24586	1.54234	0
						}
					}
				}
			}
			{bone "ripper2_skeleton_root"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-7.5	12.5	0
				}
				{bone "ripper2_bip01"
					{Matrix34
						0	-0.99984	-0.0179077
						0	0.0179076	-0.99984
						1	0	0
						1.43051e-05	3.57043	7.62794
					}
					{bone "ripper2_bip01_jaw"
						{Matrix34
							0.741124	0.671369	0
							-0.671368	0.741124	0
							0	0	1
							5.48904	1.18061	0
						}
					}
					{bone "ripper2_bip01_l_arms"
						{Matrix34
							0.478751	0.877951	0
							-0.877951	0.478751	0
							0	0	1
							3.67732	0.780582	2.42582
						}
					}
					{bone "ripper2_bip01_r_arms"
						{Matrix34
							0.478751	0.877951	0
							-0.877951	0.478751	0
							0	0	1
							3.67732	0.780584	-2.41855
						}
						{bone "ripper2_rb_mesh_body_02"
							{Matrix34
								0	0	1
								-0.462952	0.886383	0
								-0.886383	-0.462952	0
								-1.68819	4.68701	2.41855
							}
						}
					}
					{bone "ripper2_bip01_tail1"
						{Matrix34
							-0.721063	0.692869	0
							-0.692869	-0.721063	0
							0	0	1
							-0.139429	1.43977	0
						}
						{bone "ripper2_bip01_tail2"
							{Matrix34
								0.982222	0.187722	0
								-0.187722	0.982222	0
								0	0	1
								5.28367	0	0
							}
							{bone "ripper2_bip01_tail3"
								{Matrix34
									0.818432	0.574603	0
									-0.574604	0.818432	0
									0	0	1
									3.34378	0	0
								}
								{bone "ripper2_bip01_tail4"
									{Matrix34
										0.827081	0.562083	0
										-0.562083	0.827081	0
										0	0	1
										2.65028	0	0
									}
								}
							}
							{bone "ripper2_rb_mesh_body_04"
								{Matrix34
									0	0	1
									0.843758	0.536723	0
									-0.536723	0.843759	0
									-4.20629	1.50909	0
								}
							}
						}
					}
					{bone "ripper2_rb_mesh_body_01"
						{Matrix34
							0	0	1
							-0.99984	0.0179075	0
							-0.0179075	-0.99984	0
							-1.24586	1.54234	0
						}
					}
					{bone "ripper2_rb_mesh_body_03"
						{Matrix34
							0	0	1
							-0.99984	0.0179075	0
							-0.0179075	-0.99984	0
							-1.24586	1.54234	0
						}
					}
				}
			}
			{bone "ripper3_skeleton_root"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-10	-7.5	0
				}
				{bone "ripper3_bip01"
					{Matrix34
						0	-0.99984	-0.0179077
						0	0.0179076	-0.99984
						1	0	0
						1.4782e-05	3.57043	7.62794
					}
					{bone "ripper3_bip01_r_arms"
						{Matrix34
							0.478751	0.877951	0
							-0.877951	0.478751	0
							0	0	1
							3.67733	0.780584	-2.41855
						}
						{bone "ripper3_rb_mesh_body_02"
							{Matrix34
								0	0	1
								-0.462952	0.886383	0
								-0.886383	-0.462952	0
								-1.68819	4.68701	2.41855
							}
						}
					}
					{bone "ripper3_bip01_l_arms"
						{Matrix34
							0.478751	0.877951	0
							-0.877951	0.478751	0
							0	0	1
							3.67733	0.780582	2.42582
						}
					}
					{bone "ripper3_bip01_jaw"
						{Matrix34
							0.741124	0.671369	0
							-0.671368	0.741124	0
							0	0	1
							5.48904	1.18061	0
						}
					}
					{bone "ripper3_bip01_tail1"
						{Matrix34
							-0.721063	0.692869	0
							-0.692869	-0.721063	0
							0	0	1
							-0.139429	1.43977	0
						}
						{bone "ripper3_bip01_tail2"
							{Matrix34
								0.982222	0.187722	0
								-0.187722	0.982222	0
								0	0	1
								5.28367	0	0
							}
							{bone "ripper3_bip01_tail3"
								{Matrix34
									0.818432	0.574603	0
									-0.574604	0.818432	0
									0	0	1
									3.34378	0	0
								}
								{bone "ripper3_bip01_tail4"
									{Matrix34
										0.827081	0.562083	0
										-0.562083	0.827081	0
										0	0	1
										2.65028	0	0
									}
								}
							}
							{bone "ripper3_rb_mesh_body_04"
								{Matrix34
									0	0	1
									0.843758	0.536723	0
									-0.536723	0.843759	0
									-4.20629	1.50909	0
								}
							}
						}
					}
					{bone "ripper3_rb_mesh_body_01"
						{Matrix34
							0	0	1
							-0.99984	0.0179075	0
							-0.0179075	-0.99984	0
							-1.24586	1.54234	0
						}
					}
					{bone "ripper3_rb_mesh_body_03"
						{Matrix34
							0	0	1
							-0.99984	0.0179075	0
							-0.0179075	-0.99984	0
							-1.24586	1.54234	0
						}
					}
				}
			}
		}
	}
)