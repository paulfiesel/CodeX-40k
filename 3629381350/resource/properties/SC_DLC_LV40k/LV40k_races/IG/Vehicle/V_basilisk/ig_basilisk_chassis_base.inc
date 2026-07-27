
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_basilisk/animations/anm.ext"}

		{bone revolute "basis"
			{limits -0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "emit3"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-1.02997e-05	-78.7402	0
				}
			}
			{bone "emit1"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-1.02997e-05	78.7402	0
				}
			}
			{bone "emit4"
				{Position -108.268	-14.7638	0}
			}
			{bone "emit2"
				{Position -108.268	14.7638	0}
			}		
			{bone "body_tracks"
				{parameters "ID=body;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/body_tracks.ply"}
				{bone "trackr"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/trackr.ply"}
				}
				{bone "trackl"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/trackl.ply"}
				}
			}
			{bone "body"
				{parameters "ID=body;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/body.ply"}
				
				{bone "earthshaker"
					{parameters "ID=gun;"}
					{Position 0	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/earthshaker.ply"}
					{bone "gunner"
						{Position -84.2904	2.12288	27.0272}
					}
					{bone "charger"
						{Position -73.6812	-10.721	27.0272}
					}
					{bone "commander"
						{Position -73.6812	12.5025	27.0272}
					}
					{bone revolute "gun_rot"
						{parameters "ID=gun;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-30.8386	0.0239019	65.6762
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/gun_rot.ply"}
						{bone "cannon_eject"
							{parameters "ID=gun;"}
							{Matrix34
								0.987688	0.156434	0
								-0.156434	0.987688	0
								0	0	1
								-21.9221	-1.67673	-10.7896
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/cannon_eject.ply"}
						}
						{bone "fx_shell_eject"
							{Matrix34
								-0.98245	-0.186524	0
								0	0	1
								-0.186524	0.98245	0
								-25.1322	-6.66251	0.0238969
							}
						}
						{bone "foresight3"
							{Matrix34
								0.990268	0.139173	0
								0	0	-1
								-0.139173	0.990268	0
								160.908	20.499	0
							}
						}
						{bone "gun12"
							{Matrix34
								0	0	-1
								-0.173648	0.984808	0
								0.984808	0.173648	0
								-10.7177	-2.37323	-1.50148e-05
							}
						}
						{bone "barrel"
							{parameters "ID=gun;"}
							{Matrix34
								0.989016	0.147809	0
								-0.147809	0.989016	0
								0	0	1
								126.861	14.7192	-0.0415781
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/barrel.ply"}
						}
					}
				}
				{bone "hull_w"
					{Position -1.79863	-0.248146	1.40856}
					{bone "hw_hb_base"
						{parameters "ID=body;"}
						{Position 69.7057	20.5507	40.7425}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/hw_hb_base.ply"}
					}
					{bone revolute "hw_gun_rot"
						{Position 69.7057	20.5507	40.7425}
						{bone revolute "hw_hb"
							{parameters "ID=body;"}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/hw_hb.ply"}
							{bone "foresight_f_hb"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									13.4835	-1.98806	-0.0116901
								}
							}
							{bone "visor_gunner2"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									2.66325	8.55426	-0.0116901
								}
							}
						}
					}
				}
				{bone "visor_driver"
					{Position 74.2857	-12.3436	52.4839}
				}
				{bone "visor_around"
					{Position -73.8189	0	127.953}
				}
				{bone "visor_gunner"
					{Position 3.97358	0	103.203}
				}
				{bone "fxfire4"
					{Position 10.4024	0	51.0285}
				}
				{bone "fxfire1"
					{Position 44.6594	-11.8584	51.648}
				}
				{bone "fxfire3"
					{Position -19.1963	0	61.4929}
				}
				{bone "hatch"
					{parameters "ID=body;"}
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						28.6654	-11.1642	58.7617
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/basilisk/hatch.ply"}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_basilisk/Model/base/+base_vol.inc")
	
	%args_vol
)