
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_hydra/animations/anm.ext"}

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
				{Orientation
					0	1	0
					-1	0	0
					0	0	1
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hydra/body_tracks.ply"}
				{bone "trackr"
					{Orientation
						0	-1	0
						1	0	0
						0	0	1
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hydra/trackr.ply"}
				}
				{bone "trackl"
					{Orientation
						0	-1	0
						1	0	0
						0	0	1
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hydra/trackl.ply"}
				}
			}
			{bone "body"
				{parameters "ID=body;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hydra/body.ply"}
				{bone revolute "turret"
					{parameters "ID=turret;"}
					{Position -28.0109	-0.00784468	42.472}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hydra/turret.ply"}
					
					{bone revolute "gun_rot"
						{parameters "ID=turret;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-1.4944	0.00324213	32.4305
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hydra/gun_rot.ply"}
						
						%args_role
					}
					{bone "fx_optic1"
						{Position 18.0779	2.45124	38.742}
					}
					{bone "fx_optic2"
						{Position 29.0479	1.99856	42.9309}
					}
					{bone "fx_optic3"
						{Position 28.8294	-0.00188026	42.9309}
					}
					{bone "fx_optic4"
						{Position 20.0995	8.4492	30.8386}
					}
					{bone "fx_optic7"
						{Position 19.1266	-7.31426	49.4096}
					}
					{bone "gunner"
						{Position -13.8693	0	7.0}
					}
					{bone "fx_optic5"
						{Position 38.1897	2.92407	38.2602}
					}
					{bone "fx_optic6"
						{Position 39.6391	6.06613	34.9757}
					}
					{bone "visor_gunner"
						{Position 37.9654	-1.45969	33.0049}
					}
				}
				{bone "charger"
					{Position -80.1479	0.147937	25.5906}
				}
				{bone "commander"
					{Position -72.9125	-10.0942	25.5906}
				}
				{bone "fxfire1"
					{Position 43.0052	-11.164	54.3524}
				}
				{bone "fxfire3"
					{Position -28.0109	-0.00784718	40.8968}
				}
				{bone "fxfire4"
					{Position 10.4024	0	51.0285}
				}
				{bone "visor_around"
					{Position 0	0	118.11}
				}
				{bone "visor_driver"
					{Position 74.2857	-12.3436	52.4839}
				}
				{bone "hatch"
					{parameters "ID=body;"}
					{Position 28.6974	-11.164	58.7472}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hydra/hatch.ply"}
				}
				{bone revolute "hw_gun_rot"
					{Position 66.9226	20.0957	41.9646}
					{bone revolute "hw_flamer"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-1.52588e-05	1.14441e-05	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hydra/hw_flamer.ply"}
						{bone "foresight_f_FL"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								14.6277	0	0
							}
						}
					}
					{bone "visor_gunner2"
						{Position 11.7185	2.09808e-05	10.2282}
					}
				}
				{bone "fx_f_flamer"
					{Position 68.3138	20.5286	50.1875}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_hydra/Model/base/+base_vol.inc")
	
	%args_vol
)