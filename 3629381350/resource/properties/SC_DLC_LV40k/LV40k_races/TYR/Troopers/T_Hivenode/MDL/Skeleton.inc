
(Define "Skeleton"
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Hivenode/MDL/Volumes.inc")

	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Hivenode/MDL/Animations/Animations.inc")
		
		(Define "ik_speed" 	{speed 0.05})
		
		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Hivenode/MDL/Models/tex_%color/+models_%model.ext")
			
			("SC_Troopers_Aim_Ref_MDL")
	
			{bone revolute "placement"
			}
			{bone "visor_around"
				{Position 0	0	62.5}
			}
			{bone "skeleton_root"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					0	0	0
				}
				{bone "master"
					{bone "fx_aura"}
					{bone "fx_fire"}
					{bone "tp_camera_Head" {position 0 0 500}}
					{bone "Sc_stance_fx"}
					{bone "fx_generic_body"}
					{bone "fx_generic_head"}
					
					{bone "right1"
						{Matrix34
							-0.775437	0	0.631425
							-0.631425	0	-0.775437
							0	-1	0
							23.5699	1.86609	0.403625
						}
						{bone "right2"
							{Matrix34
								0.92604	0.377426	0
								-0.377426	0.92604	0
								0	0	1
								13.5963	0	0
							}
						}
					}
					{bone "front1"
						{Matrix34
							0	0.775437	0.631425
							0	0.631425	-0.775437
							-1	0	0
							0	-21.6983	0.26681
						}
						{bone "front2"
							{Matrix34
								0.846432	0.532497	0
								-0.532497	0.846432	0
								0	0	1
								13.5963	0	0
							}
						}
					}
					{bone "left1"
						{Matrix34
							0.775437	0	0.631425
							0.631425	0	-0.775437
							0	1	0
							-23.0614	1.70863	0.463597
						}
						{bone "left2"
							{Matrix34
								0.92604	0.377426	0
								-0.377426	0.92604	0
								0	0	1
								13.5963	0	0
							}
						}
					}
					{bone "fl1"
						{Matrix34
							0.548317	0.548316	0.631425
							0.446486	0.446485	-0.775437
							-0.707106	0.707107	0
							-16.1398	-14.9259	0.463597
						}
						{bone "fl2"
							{Matrix34
								0.92604	0.377426	0
								-0.377426	0.92604	0
								0	0	1
								13.5963	0	0
							}
						}
					}
					{bone "fr1"
						{Matrix34
							-0.548316	0.548317	0.631425
							-0.446485	0.446485	-0.775437
							-0.707107	-0.707106	0
							14.9095	-14.1061	0.463597
						}
						{bone "fr2"
							{Matrix34
								0.92604	0.377426	0
								-0.377426	0.92604	0
								0	0	1
								13.5963	0	0
							}
						}
					}
					{bone "bl1"
						{Matrix34
							0.594019	-0.498441	0.631426
							0.4837	-0.405873	-0.775437
							0.642788	0.766044	0
							-17.5129	17.9853	0.463597
						}
						{bone "bl2"
							{Matrix34
								0.92604	0.377426	0
								-0.377426	0.92604	0
								0	0	1
								13.5963	0	0
							}
						}
					}
					{bone "br1"
						{Matrix34
							-0.444772	-0.6352	0.631425
							-0.362171	-0.517233	-0.775437
							0.819152	-0.573577	0
							14.3286	20.0388	0.463597
						}
						{bone "br2"
							{Matrix34
								0.92604	0.377426	0
								-0.377426	0.92604	0
								0	0	1
								13.5963	0	0
							}
						}
					}
					{bone "back1"
						{Matrix34
							0	-0.496939	0.867786
							0	0.867786	0.496939
							-1	0	0
							0	14.3673	8.18951
						}
						{bone "back2"
							{Matrix34
								0.979572	-0.201096	0
								0.201096	0.979572	0
								0	0	1
								8.8522	0	0
							}
							{bone "back3"
								{Matrix34
									0.946755	-0.321954	0
									0.321954	0.946755	0
									0	0	1
									6.65207	0	0
								}
								{bone "back4"
									{Matrix34
										0.913589	-0.406638	0
										0.406638	0.913589	0
										0	0	1
										6.20551	0	0
									}
									{bone "back5"
										{Matrix34
											0.895144	-0.445778	0
											0.445778	0.895144	0
											0	0	1
											6.46774	-1.33514e-05	0
										}
									}
								}
							}
						}
						{bone revolute "aim_h"
							{limits 30 -30}
							("ik_speed")
							{Matrix34
								0.496939	-0.867786	0
								0	0	-1
								0.867786	0.496939	0
								1.38152	-16.5016	0
							}
							{bone revolute "foresight3"
								{limits -45 90}
								("ik_speed")
								{Orientation
									1	0	0
									0	0	1
									0	-1	0
								}
							}
						}
					}
				}
			}
		}
	}
)