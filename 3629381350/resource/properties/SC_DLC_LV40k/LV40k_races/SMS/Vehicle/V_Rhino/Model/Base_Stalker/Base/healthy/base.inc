
(Define "Base_Stalker"
	{bone "stalkerhunter_armor"
		{parameters "ID=body;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/hunter/stalkerhunter_armor.ply"}
	}
	{bone "armor_stalker"
		{parameters "ID=body;"}
		{Position -30.409	0	84.8277}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/stalker/armor_stalker.ply"}
		{bone "radar"
			{parameters "ID=body;"}
			{Position 19.373	0	2.17561}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/stalker/radar.ply"}
			{bone "fx_radar"
				{Matrix34
					0.819152	0	0.573577
					0	1	0
					-0.573577	0	0.819152
					18.6037	0	13.909
				}
			}
		}
	}
	{bone revolute "aux_turret1"
		{parameters "ID=aux_turret1;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/stalker/aux_turret1_b.anm"} {speed -0.8}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/stalker/aux_turret1_b.anm"} {speed 0.8}}
		}
		{Position -26.675	37.675	86.4875}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/stalker/aux_turret1.ply"}
		{bone revolute "l_rot"
			{parameters "ID=aux_turret1;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				-5.90544	0.565224	23.2638
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/stalker/l_rot.ply"}
			{bone "l_barrel"
				{parameters "ID=aux_turret1;"}
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					39.0409	-0.713837	0.565216
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/stalker/l_barrel.ply"}
			}
			{bone "fx_stalker8"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					23.972	10.8352	-0.952698
				}
			}
			{bone "fx_stalker7"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					23.972	10.8352	1.941
				}
			}
			{bone "fx_stalker6"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					30.8965	-1.245	-11.2086
				}
			}
			{bone "fx_stalker5"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					30.8965	3.32394	-11.2086
				}
			}
			{bone "foresight_l"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					75.7938	-0.713837	0.563046
				}
			}
		}
	}
	{bone revolute "aux_turret2"
		{parameters "ID=aux_turret2;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/stalker/aux_turret2_b.anm"} {speed -0.8}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/stalker/aux_turret2_b.anm"} {speed 0.8}}
		}
		{Position -26.675	-37.675	86.4875}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/stalker/aux_turret2.ply"}
		{bone revolute "r_rot"
			{parameters "ID=aux_turret2;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				-5.90544	-0.56522	23.2638
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/stalker/r_rot.ply"}
			{bone "r_barrel"
				{parameters "ID=aux_turret2;"}
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					39.0409	-0.713837	-0.565216
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/stalker/r_barrel.ply"}
			}
			{bone "fx_stalker4"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					23.972	10.8352	0.950756
				}
			}
			{bone "fx_stalker3"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					23.972	10.8352	-1.93724
				}
			}
			{bone "fx_stalker2"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					30.8965	-1.245	11.2019
				}
			}
			{bone "fx_stalker1"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					30.8965	3.32394	11.2019
				}
			}
			{bone "foresight_r"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					75.7938	-0.713837	-0.56522
				}
			}
		}
	}
)