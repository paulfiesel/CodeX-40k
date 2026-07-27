
(Define "Landraider_Sponson_Terminus"
	{bone "landraider_w_terminus"
	
		{bone "t_base_left1"
			{parameters "ID=aux_turret1;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/t_base_left1.ply"}
			
			{bone revolute "aux_turret1"
				{parameters "ID=aux_turret1;"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					120.6	-19.4035	92.3316
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_base_left1.ply"}
				{bone revolute "gun_rot1"
					{parameters "ID=aux_turret1;"}
					{Matrix34
						1	0	0
						0	0	1
						0	-1	0
						-0.0265884	0.461807	-10.5436
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_left1.ply"}
					{bone "foresight_wtl1_lc"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							65.6435	-8.23453	-0.058815
						}
					}
				}
				{bone "fxlightred2_wt"
					{Position 10.7677	0.137001	11.0642}
				}
			}
		}
		{bone "t_base_right1"
			{parameters "ID=aux_turret2;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/t_base_right1.ply"}
			
			{bone revolute "aux_turret2"
				{parameters "ID=aux_turret2;"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-120.492	-19.4035	92.3316
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_base_right1.ply"}
				
				{bone revolute "gun_rot2"
					{parameters "ID=aux_turret2;"}
					{Matrix34
						1	0	0
						0	0	1
						0	-1	0
						-0.0266266	-0.461853	-10.5436
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_right1.ply"}
					{bone "foresight_wtr1_lc"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							65.6436	-8.23454	-0.241844
						}
					}
				}
				{bone "fxlightred1_wt"
					{Position 10.7677	-0.109619	11.0642}
				}
			}
		}
		{bone "t_base_left2"
			{parameters "ID=aux_turret3;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/t_base_left2.ply"}
			
			{bone revolute "aux_turret3"
				{parameters "ID=aux_turret3;"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					129.263	53.3254	75.815
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_base_left2.ply"}
				
				{bone revolute "gun_rot3"
					{parameters "ID=aux_turret3;"}
					{Orientation
						1	0	0
						0	0	1
						0	-1	0
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_left2.ply"}
					{bone "barrel_wtl2_lc00"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							73.4867	4.84132	11.6109
						}
					}
					{bone "foresight_wtl2_lc"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							73.4867	4.84132	0
						}
					}
					{bone "barrel_wtl2_lc01"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							73.4867	4.84132	-12.3195
						}
					}
				}
				{bone "fxlightred3_wt"
					{Position 10.4341	-2.71317	32.7356}
				}
				{bone "fxlightred4_wt"
					{Position 10.4341	3.3739	32.7356}
				}
			}
		}
		{bone "t_base_right2"
			{parameters "ID=aux_turret4;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/t_base_right2.ply"}
			
			{bone revolute "aux_turret4"
				{parameters "ID=aux_turret4;"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-129.263	53.3254	75.815
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_base_right2.ply"}
				
				{bone revolute "gun_rot4"
					{parameters "ID=aux_turret4;"}
					{Orientation
						1	0	0
						0	0	1
						0	-1	0
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lc_right2.ply"}
					{bone "foresight_wtr2_lc"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							73.4867	4.8413	0.517792
						}
					}
					{bone "barrel_wtr2_lc01"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							73.4867	4.8413	-11.8018
						}
					}
					{bone "barrel_wtr2_lc00"
						{Matrix34
							1	0	0
							0	0	-1
							0	1	0
							73.4867	4.84132	12.2624
						}
					}
				}
				{bone "fxlightred5_wt"
					{Position 10.4341	-3.34387	32.7356}
				}
				{bone "fxlightred6_wt"
					{Position 10.4341	2.6932	32.7356}
				}
			}
		}
	}
)