
(Define "Skeleton"
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Sporemine/MDL/Volumes.inc")

	{Skeleton
		(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Sporemine/MDL/Animations/Animations.inc")
		
		(Define "ik_speed" 	{speed2 600})
		
		{bone revolute "basis"
			{limits -0 0}
			("ik_speed") 
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			(Include "/properties/SC_DLC_LV40k/LV40k_races/Tyr/Troopers/T_Sporemine/MDL/Models/tex_%color/+models_%model.ext")
			
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
				{Position 0	0	50}
			}
			{bone "skeleton_root"
				{Orientation
					0	1	0
					-1	0	0
					0	0	1
				}
				{bone "master"
					{Position 0.0169046	0.0137232	32.4595}
					
					{bone "fx_aura"}
					{bone "fx_fire"}
					{bone "tp_camera_Head"}
					{bone "Sc_stance_fx"}
					{bone "fx_generic_body"}
					{bone "fx_generic_head"}

					{bone "bone01"
						{Matrix34
							-0.0142846	0.0672588	-0.997633
							0.999898	0.000960841	-0.0142523
							0	-0.997735	-0.0672657
							-0.0642401	-0.279393	-11.3305
						}
						{bone "bone02"
							{Matrix34
								0.998232	0.0142615	-0.0576998
								-0.0142854	0.999898	0
								0.057694	0.000826636	0.998334
								7.2835	0	0
							}
							{bone "bone03"
								{Matrix34
									0.98779	0	-0.15579
									0	1	0
									0.15579	0	0.98779
									6.2419	0	0
								}
							}
						}
					}
					{bone "bone05"
						{Matrix34
							0.0344623	0.16707	-0.985343
							0.999406	-0.00576003	0.0339775
							0	-0.985928	-0.167169
							0.0857991	2.04917	-7.51525
						}
						{bone "bone06"
							{Matrix34
								0.999165	0.0408483	0
								-0.0408483	0.999165	0
								0	0	1
								6.03766	0	0
							}
							{bone "bone07"
								{Matrix34
									0.999928	0.0115973	0.00312302
									-0.0116598	0.999716	0.0207983
									-0.00288086	-0.0208332	0.999779
									5.52943	0	0
								}
							}
						}
					}
					{bone "bone09"
						{Matrix34
							-0.0123448	-0.0767774	-0.996972
							0.999924	-0.000937373	-0.0123092
							1.05202e-05	-0.997048	0.0767831
							-0.239416	-2.05873	-6.71934
						}
						{bone "bone10"
							{Matrix34
								0.998483	-0.0384581	-0.0393956
								0.0384093	0.99926	-0.00199355
								0.0394431	0.000477339	0.999222
								8.42753	0	0
							}
							{bone "bone11"
								{Matrix34
									0.986745	-0.162278	0
									0.162278	0.986745	0
									0	0	1
									6.14605	-1.46627e-05	0
								}
							}
						}
					}
					{bone "body"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-0.0169046	-0.0137232	-20.9594
						}
					}
				}
			}
		}
	}
)