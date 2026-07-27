
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_hellhound/animations/anm.ext"}

		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "emit1"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					0	78.7401	0
				}
			}
			{bone "emit3"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-2.57492e-05	-78.7401	0
				}
			}
			{bone "emit2"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					19.685	78.7401	0
				}
			}
			{bone "emit4"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					19.685	-78.7401	0
				}
			}
			{bone "body_tracks"
				{parameters "ID=body;"}
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					0	0	0
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/body_tracks.ply"}
				{bone "trackr"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						0	0	0
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/trackr.ply"}
				}
				{bone "trackl"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						0	0	0
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/trackl.ply"}
				}
			}
			{bone "body"
				{parameters "ID=body;"}
				{Position 0	0	0}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/body.ply"}
				{bone "turret"
					{parameters "ID=turret;"}
					{Position 42.0136	-10.5732	60.7223}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/turret.ply"}
					{bone "gun_rot"
						{parameters "ID=gun;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							15.6778	0.0119286	5.1593
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/gun_rot.ply"}
						{bone "barrel"
							{parameters "ID=gun;"}
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								-57.6915	-65.8816	-10.5613
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/barrel.ply"}
							{bone "foresight3"
								{Position 93.5702	-10.7028	66.4358}
							}
						}
						{bone "visor_gunner"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								5.47169	8.43514	0.0125389
							}
						}
					}
					{bone "hatch"
						{parameters "ID=turret;"}
						{Position -18.6581	-0.000606537	15.3939}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/hatch.ply"}
					}
					{bone "commander"
						{Position -4.10152	0	8.07817}
					}
				}
				{bone "fxfire4"
					{Position 42.0136	-10.5732	51.0285}
				}
				{bone "fxfire1"
					{Position 9.84252	0	39.3701}
				}
				{bone "visor_around"
					{Position 19.685	0	98.4252}
				}
				{bone "visor_driver"
					{Position 73.5015	-12.3436	52.1288}
				}
				{bone "hw_gun_rot"
					{Position 69.8323	20.5528	39.5006}
					{bone "hw_bolter"
						{parameters "ID=body;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-1.52588e-05	0	0
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/hw_bolter.ply"}
						{bone "foresight_f_hb"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								11.5583	-0.444813	0.0300255
							}
						}
					}
					{bone "visor_gunner2"
						{Position 2.21302	-0.0300236	10.8035}
					}
				}
				{bone "fxlight1"
					{Position -58.0721	-23.3884	29.7258}
				}
				{bone "fxlight2"
					{Position -58.263	-27.2234	29.6478}
				}
				{bone "fxlight4"
					{Position -58.0721	23.6113	29.7258}
				}
				{bone "fxlight3"
					{Position -58.263	27.4681	29.6478}
				}
				{bone "hull_bolter_object"
					{parameters "ID=body;"}
					{Position 0	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/hull_bolter_object.ply"}
				}
				{bone "hellhound_tank"
					{parameters "ID=body;"}
					{Position 0	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hellhound/hellhound_tank.ply"}
					{bone "fxfire3"
						{Position -19.1963	0	61.4929}
					}
					{bone "fx_optic1"
						{Position -58.8232	2.14368	54.8312}
					}
				}
			}
		}
	}

	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_hellhound/Model/base/+base_vol.inc")
	
	%args_vol
)