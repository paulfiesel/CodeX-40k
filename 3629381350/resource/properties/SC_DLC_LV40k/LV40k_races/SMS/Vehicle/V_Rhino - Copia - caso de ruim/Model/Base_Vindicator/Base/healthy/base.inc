
(Define "Base_Vindicator"
	{bone "vindicator_base"
		{parameters "ID=body;"}
		{Orientation
			0	1	0
			-1	0	0
			0	0	1
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/vindicator/vindicator_base.ply"}
		{bone "vindicator_dozer"
			{parameters "ID=body;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/vindicator/vindicator_dozer.ply"}
		}
		{bone "fx_vindicator_headlight_r"
			{Position -49.2126	-76.9664	64.9606}
		}
		{bone "fx_vindicator_headlight_l"
			{Position 49.2126	-76.9664	64.9606}
		}
		{bone "fx_vindicator"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				12.5829	-40.9807	83.5743
			}
		}
		{bone revolute "gun_rot"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				12.2577	-78.9228	45.9969
			}
			{bone revolute "barrel"
				{parameters "ID=gun;"}
		;//		{animation
		;//			{sequence "break" {file "gun_b.anm"} {speed 0.7}}
		;//		}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/vindicator/gun.ply"}
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					-1.52588e-05	-1.23978e-05	0
				}
				{bone "foresight_demolisher"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						49.6023	0	0
					}
				}
			}
		}
		{bone revolute "gun_rot3"
			{parameters "ID=body;"}
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				-11.3582	8.79356	86.6513
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/vindicator/sb_gun_rot.ply"}
			{bone revolute "vindicator_stormbolter"
				{parameters "ID=body;"}
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					-0.0897951	0.0931492	3.27261
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/vindicator/vindicator_stormbolter.ply"}
				{bone "foresight_sb_vindicator"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						13.0105	3.36732	0
					}
				}
				{bone "fxshell_vindicator_sb2"
					{Matrix34
						0	0	1
						1	0	0
						0	1	0
						0.361071	4.07263	3.1369
					}
				}
				{bone "fxshell_vindicator_sb1"
					{Matrix34
						0	0	-1
						-1	0	0
						0	1	0
						0.361071	4.07263	-2.9633
					}
				}
			}
		}
	}
)