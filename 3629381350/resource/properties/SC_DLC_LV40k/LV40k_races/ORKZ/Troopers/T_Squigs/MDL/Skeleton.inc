
(Define "Skeleton"
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Troopers/T_Squigs/MDL/Volumes.inc")

	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Troopers/T_Squigs/MDL/Animations/Animations.inc")
		
		(Define "ik_speed" 	{speed2 600})
		
		{bone revolute "basis"
			{limits -10 10}
			("ik_speed") 
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Troopers/T_Squigs/MDL/Models/tex_%color/+models_%model.ext")
			
			("SC_Troopers_Aim_Ref_MDL")
	
			{bone revolute "m_aim_h"
				{limits -45 45} ("ik_speed")
				{Matrix34
					1	0	0
					0	1	0
					0	0	1
					8.74998	0	30
				}
				{bone revolute "m_aim_v"
					{limits -60 60} ("ik_speed") 
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
			{bone "visor2"
				{Position 2.5	0	37.5}
			}
			{bone "armature"
				{Orientation
					0	1	0
					-1	0	0
					0	0	1
				}
				{bone "squig_mainbone"
					{Matrix34
						1	0	0
						0	0	1
						0	-1	0
						0.0672655	-1.73797	14.9818
					}
					{bone "fx_aura"}
					{bone "fx_fire"}
					{bone "tp_camera_Head"}
					{bone "Sc_stance_fx"}
					{bone "fx_generic_body"}
					{bone "fx_generic_head"}
					
					{bone "squig_jaw"
						{Matrix34
							-0.998201	-0.0081698	-0.059404
							-0.0436936	-0.579373	0.81389
							-0.0410664	0.815022	0.577974
							0	-1.27657	-0.102113
						}
						{bone "squig_jaw_end"
							{Position 0	7.6877	0}
						}
						{bone "squig_bone_jaw"
							{Matrix34
								-0.0488354	0.989786	0.133938
								-0.0347943	-0.135703	0.990138
								0.998201	0.0436935	0.041066
								-0.33573	4.83545	6.37059
							}
						}
						{bone "fx_breath"
							{Matrix34
								-0.0473602	0.994537	0.0930287
								-0.998201	-0.0436934	-0.0410663
								-0.0367772	-0.0948064	0.994816
								-0.293805	5.73785	2.6746
							}
						}
					}
					{bone "squig_hip_l"
						{Orientation
							0.0300416	-0.198483	0.979644
							0.996577	-0.069567	-0.0446556
							0.0770143	0.977632	0.195714
						}
						{bone "squig_leg_l_1"
							{Matrix34
								-0.924166	0.331837	-0.189212
								0.176963	-0.067051	-0.981931
								-0.338528	-0.94095	0.00324315
								0	6.6359	0
							}
							{bone "squig_leg_l_2"
								{Matrix34
									0.231879	0.0673946	-0.970407
									0.830558	0.505585	0.233575
									0.506365	-0.86014	0.0612595
									0	5.90936	0
								}
								{bone "squig_leg_l_3"
									{Matrix34
										-0.414006	-0.907091	-0.0760601
										0.312514	-0.0631597	-0.947811
										0.854947	-0.416169	0.309627
										0	4.44451	0
									}
									{bone "FX_FOOTSTEP_L"}
									{bone "squig_leg_l_3_end"
										{Position 0	5.80914	0}
									}
								}
							}
						}
					}
					{bone "squig_tail"
						{Orientation
							0.992905	0.0944733	-0.0722109
							-0.0695145	-0.0315327	-0.997082
							-0.0964746	0.995028	-0.0247417
						}
						{bone "squig_tail_end"
							{Position 0	11.8632	0}
						}
					}
					{bone "squig_hip_r"
						{Orientation
							-0.122379	0.0555872	-0.990925
							-0.99246	-3.57619e-05	0.122567
							0.00677767	0.998454	0.0551725
						}
						{bone "squig_leg_r_1"
							{Matrix34
								-0.947233	-0.03794	-0.318293
								0.305913	0.189594	-0.93299
								0.095744	-0.981129	-0.167983
								0	7.26972	0
							}
							{bone "squig_leg_r_2"
								{Matrix34
									0.917541	-0.00301439	0.39763
									-0.269762	0.729948	0.628016
									-0.292143	-0.683495	0.668945
									0	5.76742	0
								}
								{bone "squig_leg_r_3"
									{Matrix34
										-0.488175	0.860423	-0.146142
										0.74502	0.323627	-0.583275
										-0.454567	-0.393621	-0.799019
										0	4.53126	0
									}
									{bone "FX_FOOTSTEP_R"}
									{bone "squig_leg_r_3_end"
										{Matrix34
											1	0	0
											0	1	0
											0	0	1
											0	5.64352	0
										}
									}
								}
							}
						}
					}
					{bone "squig_bomb_bones"
						{Matrix34
							0	0.50788	0.861428
							0	0.861428	-0.50788
							-1	0	0
							-0.137766	-1.82307	-0.486878
						}
					}
					{bone "visor_eyes"
						{Matrix34
							0	0	1
							1	0	0
							0	1	0
							0	1.99719	11.7707
						}
					}
				}
				{bone "ik_leg_l"
					{Matrix34
						1	0	0
						0	0.999822	-0.0188645
						0	0.0188645	0.999822
						6.3018	-0.594014	1.63296
					}
					{bone "squig_leg_l_4"
						{Orientation
							-0.914662	-0.398615	-0.0670772
							0.40422	-0.90198	-0.151782
							0	-0.165944	0.986135
						}
						{bone "squig_leg_l_4_end"
							{Position 0	5.94304	0}
						}
					}
				}
				{bone "ik_leg_r"
					{Matrix34
						1	0	0
						0	0.999239	-0.0389949
						0	0.0389949	0.999239
						-6.28325	-0.506629	1.70445
					}
					{bone "squig_leg_r_4"
						{Orientation
							-0.944962	0.320846	0.0640683
							-0.32718	-0.926667	-0.185044
							0	-0.195821	0.98064
						}
						{bone "squig_leg_r_4_end"
							{Position 0	5.87394	0}
						}
					}
				}
				{bone "ik_knee_l"
					{Matrix34
						1	0	0
						0	0.999977	0.00672775
						0	-0.00672775	0.999977
						5.10065	4.9709	6.98587
					}
					{bone "ik_knee_l_end"
						{Position 0	4.54081	0}
					}
				}
				{bone "ik_knee_r"
					{Matrix34
						1	0	0
						0	0.99958	0.0289734
						0	-0.0289734	0.99958
						-5.29024	4.90147	6.90784
					}
					{bone "ik_knee_r_end"
						{Position 0	4.19236	0}
					}
				}
			}
		}
	}
)