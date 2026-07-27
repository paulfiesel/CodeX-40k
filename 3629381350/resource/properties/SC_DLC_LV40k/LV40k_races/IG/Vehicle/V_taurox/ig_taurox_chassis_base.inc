
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_Taurox/animations/anm.ext"}

		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}			
			{bone "body"
				{parameters "ID=body;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/body.ply"}
				{bone "backdoor"
					{parameters "ID=body;"}
					{Position -69.9568	2.14577e-05	22.0701}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/backdoor.ply"}
				}
				{bone "door_l"
					{parameters "ID=body;"}
					{Position 10.0992	30.5887	44.8453}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/door_l.ply"}
				}
				{bone "door_r"
					{parameters "ID=body;"}
					{Position 10.0992	-30.5888	44.8453}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/door_r.ply"}
				}
				{bone "transmission"
					{parameters "ID=body;"}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/transmission.ply"}
				}
				{bone "turret"
					{parameters "ID=turret;"}
					{Position 6.31286	11.3222	55.3386}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/turret.ply"}
					{bone "gunner"
						{Orientation
							0.998135	0	0.0610487
							0	1	0
							-0.0610487	0	0.998135
						}
					}
					{Bone "Role"
						%args_role
					}
				}
				{bone "fxsmoke1"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						-18.763	30.0712	59.9301
					}
				}
				{bone "fxsmoke2"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						-21.5764	30.0712	59.9301
					}
				}
				{bone "fxsmoke4"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						-21.5764	-30.1232	59.9301
					}
				}
				{bone "fxsmoke3"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						-18.763	-30.1232	59.9301
					}
				}
				{bone "visor_driver"
					{Position 29.5953	10.0921	58.3086}
				}
				{bone "visor_main"
					{Position 0	0	87.5}
				}
				{bone "headlight1"
					{Position 57.7891	32.3968	37.0873}
				}
				{bone "headlight2"
					{Position 57.7891	28.5632	37.0873}
				}
				{bone "headlight3"
					{Position 57.7891	-32.3618	37.0873}
				}
				{bone "headlight4"
					{Position 57.7891	-28.5326	37.0873}
				}
				{bone "fxfire1"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						37.5104	0	42.4636
					}
				}
				{bone "fxfire3"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						6.31286	11.3222	55.3386
					}
				}
				{bone "fxfire4"
					{Matrix34
						0	0	-1
						0	1	0
						1	0	0
						-46.0303	0	45
					}
				}
			}
			{bone "emit4"
				{parameters "Group=commander;"}
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					-109.375	-15.625	0
				}
			}
			{bone "emit3"
				{parameters "Group=driver;"}
				{Matrix34
					-1	0	0
					0	-1	0
					0	0	1
					-109.375	15.625	0
				}
			}
			{bone "emit2"
				{parameters "Group=commander;"}
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					1.25	-59.375	0
				}
			}
			{bone "emit1"
				{parameters "Group=driver;"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					0	59.375	0
				}
			}
			{bone "pivot_back"
				{Position -43.4691	0	18.792}
				{bone "steers_back"
					{parameters "ID=body;"}
					{Position -3.05176e-05	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/steers_back.ply"}
					{bone "tracksright2"
						{parameters "ID=wheelright2;"}
						{Position 0	-33.8503	-6.95563}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/tracksright2.ply"}
					}
					{bone "tracksleft2"
						{parameters "ID=wheelleft2;"}
						{Position 3.05176e-05	33.8503	-6.95563}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/tracksleft2.ply"}
					}
				}
				{bone prizmatic "suspension_l3"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position 18.3401	34.6722	-9.96517}
					{bone "wheell3"
						{parameters "ID=wheelleft2;"}
						{Position 0	0	0}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheell3.ply"}
					}
				}
				{bone prizmatic "suspension_l4"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position -0.030983	34.6722	-9.96517}
					{bone "wheell4"
						{parameters "ID=wheelleft2;"}
						{Position 0	0	0}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheell4.ply"}
					}
				}
				{bone prizmatic "suspension_l5"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position -18.2979	34.6722	-9.96517}
					{bone "wheell5"
						{parameters "ID=wheelleft2;"}
						{Position 0	0	0}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheell5.ply"}
					}
				}
				{bone prizmatic "suspension_r3"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position 18.3401	-34.6722	-9.96517}
					{bone "wheelr3"
						{parameters "ID=wheelright2;"}
						{Position 0	0	0}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheelr3.ply"}
					}
				}
				{bone prizmatic "suspension_r4"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position -0.0310059	-34.6722	-9.96517}
					{bone "wheelr4"
						{parameters "ID=wheelright2;"}
						{Position 0	0	0}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheelr4.ply"}
					}
				}
				{bone prizmatic "suspension_r5"
					{parameters "speed2=2;"}
					{limits -0.05 0.1}
					{Position -18.2979	-34.6722	-9.96517}
					{bone "wheelr5"
						{parameters "ID=wheelright2;"}
						{Position 0	0	0}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheelr5.ply"}
					}
				}
				{bone "fxtracel2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-0.030983	34.6722	-18.792
					}
				}
				{bone "fxtracer2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						-0.0310059	-34.6722	-18.792
					}
				}
			}
			{bone "pivot_front"
				{Position 40.0992	0	18.792}
				{bone "steer_l"
					{parameters "ID=body;"}
					{Position 0.341293	22.8085	-1.21774}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/steer_l.ply"}
					{bone "tracksleft1"
						{parameters "ID=wheelrleft1;"}
						{Position -0.135704	11.0418	-5.74618}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/tracksleft1.ply"}
					}
					{bone prizmatic "suspension_l1"
						{parameters "speed2=2;"}
						{limits -0.05 0.1}
						{Position 8.94521	11.8637	-8.74743}
						{bone "wheell1"
							{parameters "ID=wheelrleft1;"}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheell1.ply"}
						}
					}
					{bone prizmatic "suspension_l2"
						{parameters "speed2=2;"}
						{limits -0.05 0.1}
						{Position -9.139	11.8637	-8.74743}
						{bone "wheell2"
							{parameters "ID=wheelrleft1;"}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheell2.ply"}
						}
					}
					{bone "fxtracel1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							8.94521	11.8637	-17.5743
						}
					}
				}
				{bone "steer_r"
					{parameters "ID=body;"}
					{Position 0.34127	-22.8085	-1.21774}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/steer_r.ply"}
					{bone "tracksright1"
						{parameters "ID=wheelright1;"}
						{Position -0.135708	-11.0418	-5.74618}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/tracksright1.ply"}
					}
					{bone prizmatic "suspension_r2"
						{parameters "speed2=2;"}
						{limits -0.05 0.1}
						{Position -9.13901	-11.8637	-8.74743}
						{bone "wheelr2"
							{parameters "ID=wheelright1;"}
							{Position 0	0	0}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheelr2.ply"}
						}
					}
					{bone prizmatic "suspension_r1"
						{parameters "speed2=2;"}
						{limits -0.05 0.1}
						{Position 8.94521	-11.8637	-8.74743}
						{bone "wheelr1"
							{parameters "ID=wheelright1;"}
							{Position 0	0	0}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/wheelr1.ply"}
						}
					}
					{bone "fxtracer1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							8.94521	-11.8637	-17.5743
						}
					}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_Taurox/Model/base/+base_vol.inc")
	
	%args_vol
)