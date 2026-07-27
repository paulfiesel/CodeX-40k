
(Define "FT_MLRS"	
	{bone "mlrs"
		{parameters "ID=body;"}
		{Position -1.10149e-05	0	0}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/mlrs.ply"}
		
		{bone revolute "Turret"
			{parameters "ID=turret;"}
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				-28.6663	50.781	147.652
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/mlrs_turret.ply"}
			
			{bone revolute "gun_rot"
				{parameters "ID=turret;"}
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					-11.0655	-0.124193	-3.10454
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/mlrs_barrel.ply"}
				{bone "foresight_mlrs"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						57.0823	19.5153	0
					}
					{bone "visor_main"}
				}
				{bone "barrels_mlrs00"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						45.2519	25.1461	19.3371
					}
				}
				{bone "barrels_mlrs01"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						45.2519	25.1461	-18.9543
					}
				}
				{bone "barrels_mlrs02"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						45.2519	11.8495	27.0495
					}
				}
				{bone "barrels_mlrs03"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						45.2519	11.8495	11.0489
					}
				}
				{bone "barrels_mlrs04"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						45.2519	11.8495	-10.8472
					}
				}
				{bone "barrels_mlrs05"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						45.2519	11.8495	-26.4656
					}
				}
				{bone "fx_mlrs_l"
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						-32.4014	16.7811	-16.4469
					}
				}
				{bone "fx_mlrs_r"
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						-32.4014	16.7811	16.0717
					}
				}
			}
		}
		{bone "fxlightgreen2_mlrs"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				24.0067	-75.5518	102.013
			}
		}
		{bone "fxlightgreen1_mlrs"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				12.3838	-75.5518	106.938
			}
		}
		{bone "fxlightred1_mlrs"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0.693832	-75.2265	101.765
			}
		}
	}
)