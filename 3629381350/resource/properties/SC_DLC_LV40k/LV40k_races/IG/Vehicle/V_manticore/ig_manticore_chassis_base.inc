
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_Manticore/animations/anm.ext"}

		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}			
			{bone "emit1"
				{Position -88.5827	29.5276	0}
			}
			{bone "emit2"
				{Position -108.268	14.7638	0}
			}
			{bone "emit3"
				{Position -88.5827	0	0}
			}
			{bone "emit4"
				{Position -108.268	-14.7638	0}
			}
			{bone "emit5"
				{Position -88.5827	-29.5276	0}
			}
			{bone "emit6"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-1.02997e-05	78.7402	0
				}
			}
			{bone "emit7"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-1.02997e-05	-78.7402	0
				}
			}
			{bone "body_tracks"
				{parameters "ID=body;"}
				{Position 0	0	0}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/body_tracks.ply"}
				{bone "fxtracel1"
					{Position 31.1541	43.4811	0}
				}
				{bone "fxtracel2"
					{Position -28.6694	43.4811	0}
				}
				{bone "fxtracel3"
					{Position -45.2497	43.4811	0}
				}
				{bone "fxtracer1"
					{Position 31.1541	-42.7322	0}
				}
				{bone "fxtracer2"
					{Position -28.6694	-42.7322	0}
				}
				{bone "fxtracer3"
					{Position -45.2497	-42.7322	0}
				}
				{bone "trackl"
					{Position 0	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/trackl.ply"}
				}
				{bone "trackr"
					{Position 0	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/trackr.ply"}
				}
			}
			{bone "body"
				{parameters "ID=body;"}
				{Position 0	0	0}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/body.ply"}
				{bone "fxfire1"
					{Position 33.8241	17.7393	43.3593}
				}
				{bone "fxfire4"
					{Position 40.5372	-12.5854	60.6809}
				}
				{bone "fxfire3"
					{Position -24.6063	0	41.4649}
				}
				{bone "fxheadlight1"
					{Position -58.084	27.2047	29.5563}
				}
				{bone "fxheadlight2"
					{Position -58.0875	-27.2047	29.5563}
				}
				{bone "visor_around"
					{Position 0	0	118.11}
				}
				{bone "visor_driver"
					{Position 73.7243	-12.071	52.2278}
				}
				{bone "turret"
					{parameters "ID=turret;"}
					{Position -36.8677	0.0947867	52.6816}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/turret.ply"}
					{bone "t_wing_left"
						{parameters "ID=turret;"}
						{Matrix34
							1	0	0
							0	0.984808	0.173648
							0	-0.173648	0.984808
							17.1827	9.74774	9.32629
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/t_wing_left.ply"}
						{bone "rocket2"
							{parameters "ID=turret;"}
							{Matrix34
								1	0	0
								0	0.984808	-0.173648
								0	0.173648	0.984808
								-7.87587	6.52621	14.073
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/rocket2.ply"}
							{bone "fx_rocket2"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									-56.956	0	0
								}
							}
							{bone "barrel02"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									56.9943	0	0
								}
							}
						}
						{bone "rocket3"
							{parameters "ID=turret;"}
							{Matrix34
								1	0	0
								0	0.984808	-0.173648
								0	0.173648	0.984808
								-7.87587	30.56	6.05849
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/rocket3.ply"}
							{bone "fx_rocket3"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									-56.956	-1.52588e-05	0
								}
							}
							{bone "barrel03"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									56.9943	0	0
								}
							}
						}
					}
					{bone "t_wing_right"
						{parameters "ID=turret;"}
						{Matrix34
							1	0	0
							0	0.984808	-0.173648
							0	0.173648	0.984808
							17.1827	-9.93729	9.32629
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/t_wing_right.ply"}
						{bone "rocket1"
							{parameters "ID=turret;"}
							{Matrix34
								1	0	0
								0	0.984808	0.173648
								0	-0.173648	0.984808
								-7.87587	-6.6877	13.9158
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/rocket1.ply"}
							{bone "fx_rocket1"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									-56.956	0	0
								}
							}
							{bone "barrel01"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									56.9943	0	0
								}
							}
						}
						{bone "rocket0"
							{parameters "ID=turret;"}
							{Matrix34
								1	0	0
								0	0.984808	0.173648
								0	-0.173648	0.984808
								-7.87586	-30.6285	5.91956
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/rocket0.ply"}
							{bone "fx_rocket0"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									-56.956	0	0
								}
							}
							{bone "barrel00"
								{Matrix34
									-1	0	0
									0	-1	0
									0	0	1
									56.9943	0	0
								}
							}
						}
					}
					{bone "visor_turret2"
						{Position 36.8677	-0.0947861	26.1688}
					}
					{bone "fx_optic1"
						{Position 39.0185	-3.49439	23.0389}
					}
					{bone "fx_optic2"
						{Position 42.1062	5.16588	10.9798}
					}
					{bone "foresight3"
						{Position 69.2264	-0.0947822	22.648}
					}
				}
				{bone "hull_weapon"
					{Position 0	0	0}
					{bone "hw_hb_base"
						{parameters "ID=body;"}
						{Position 0	0	0}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/hw_hb_base.ply"}
					}
					{bone "hw_gun_rot"
						{Position 71.6626	20.0653	40.1455}
						{bone "hw_hb"
							{parameters "ID=body;"}
							{Orientation
								1	0	0
								0	0	1
								0	-1	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/manticore/hw_hb.ply"}
							{bone "foresight_f_hb"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									11.0318	-0.370319	-0.037405
								}
							}
						}
						{bone "visor_gunner2"
							{Position 3.52292	0.0716743	8.91319}
						}
					}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_Manticore/Model/base/+base_vol.inc")
	
	%args_vol
)