
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_thunderfire/animations/anm.ext"}
		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}			
			{bone "body"
				{parameters "ID=body;"}
				{Position 0	1.59686e-05	12.0667}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/body.ply"}
				
				{bone revolute "turret"
					{parameters "ID=body;"}
					
					{Position -4.68885	0	-1.42078}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/turret.ply"}
					
					{bone revolute "gun_rot"
						{parameters "ID=body;"}
						
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							3.57628e-05	0	13.437
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/gun_rot.ply"}
						{bone "barrel_rot"
							{parameters "ID=gun;"}
							
							{Position 38.9524	9.1403	9.11459e-05}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/barrel_rot.ply"}
						}
						{bone "visor"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								28.5951	17.7921	0
							}
						}
						{bone "foresight3"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								41.2684	9.60363	9.14569e-05
							}
						}
						{bone "fxshell"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								8.90852	1.43872	8.86991
							}
						}
						{bone "fx_optic1"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								-3.19435	23.1535	2.20338
							}
						}
					}
					{bone "fxfire3"
						{Position 3.57628e-05	0	21.3805}
					}
				}
				{bone "visor_around"
					{Position 0	-1.46224e-05	50.4335}
				}
				{bone "fxfire1"
					{Position -4.68885	0	-1.42078}
				}
			}						
			{bone "trackleft"
				{bone "trackl"
					{parameters "ID=trackleft;"}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						0	1.44541e-05	3.57628e-05
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/trackl.ply"}
				}
				{bone revolute "wheell7"
					{parameters "ID=trackleft;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						-18.9792	19.4279	7.30804
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheell7.ply"}
				}
				{bone revolute "wheell6"
					{parameters "ID=trackleft;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						-9.36775	19.4279	14.7005
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheell6.ply"}
				}
				{bone revolute "wheell5"
					{parameters "ID=trackleft;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						-4.95486	19.4279	5.75977
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheell5.ply"}
				}
				{bone revolute "wheell4"
					{parameters "ID=trackleft;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						2.8143	19.4279	17.6262
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheell4.ply"}
				}
				{bone revolute "wheell3"
					{parameters "ID=trackleft;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						6.98874	19.4279	5.75976
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheell3.ply"}
				}
				{bone revolute "wheell2"
					{parameters "ID=trackleft;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						13.3105	19.4278	19.847
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheell2.ply"}
				}
				{bone revolute "wheell1"
					{parameters "ID=trackleft;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						21.7667	19.4279	7.30803
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheell1.ply"}
				}
				{bone "fxtracel3"
					{Position -18.9791	19.1403	0}
				}
				{bone "fxtracel2"
					{Position -4.95485	19.1403	0}
				}
				{bone "fxtracel1"
					{Position 21.7666	19.1403	0}
				}
			}
			{bone "trackright"
				{bone "trackr"
					{parameters "ID=trackright;"}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						0	1.44541e-05	3.57629e-05
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/trackr.ply"}
				}
				{bone revolute "wheelr1"
					{parameters "ID=trackright;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						21.7666	-19.4279	7.308
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheelr1.ply"}
				}
				{bone revolute "wheelr2"
					{parameters "ID=trackright;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						13.3105	-19.4279	19.8469
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheelr2.ply"}
				}
				{bone revolute "wheelr3"
					{parameters "ID=trackright;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						6.98873	-19.4279	5.75973
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheelr3.ply"}
				}
				{bone revolute "wheelr4"
					{parameters "ID=trackright;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						2.81429	-19.4279	17.6262
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheelr4.ply"}
				}
				{bone revolute "wheelr5"
					{parameters "ID=trackright;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						-4.95485	-19.4279	5.75973
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheelr5.ply"}
				}
				{bone revolute "wheelr6"
					{parameters "ID=trackright;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						-9.36777	-19.4279	14.7005
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheelr6.ply"}
				}
				{bone revolute "wheelr7"
					{parameters "ID=trackright;Radius=0.56;"}
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						-18.9791	-19.4279	7.308
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderfire_chassis/wheelr7.ply"}
				}
				{bone "fxtracer3"
					{Position -18.9791	-19.4279	0}
				}
				{bone "fxtracer2"
					{Position -4.95485	-19.4279	0}
				}
				{bone "fxtracer1"
					{Position 21.7666	-19.4279	0}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/V_thunderfire/Model/+base_vol.inc")
	
	%args_vol
)