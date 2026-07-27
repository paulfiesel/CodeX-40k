
(Define "Base_Hunter"
	{bone "stalkerhunter_armor"
		{parameters "ID=body;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/hunter/stalkerhunter_armor.ply"}
	}
	{bone "armor_hunter"
		{parameters "ID=turret;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/hunter/armor_hunter.ply"}
	}
	{bone revolute "turret"
		{parameters "ID=turret;"}
		{Position -28.325	0	75.625}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/hunter/turret.ply"}
		{bone revolute "gun_rot"
			{parameters "ID=gun;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				3.29403	-19.6136	3.50766
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/hunter/gun_rot.ply"}
			{bone "barrel_hunter"
				{parameters "ID=gun;"}
				{Position 41.466	18.5043	0.0100231}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/hunter/barrel_hunter.ply"}
				{bone "foresight_hunter"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						8.50852	0	0
					}
				}
			}
			{bone "fx_hunter4"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					20.3375	35.4607	6.84881
				}
			}
			{bone "fx_hunter5"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					20.3375	33.6679	12.6292
				}
			}
			{bone "fx_hunter6"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					20.3375	30.2698	12.6292
				}
			}
		}
		{bone "fx_hunter3"
			{Position 11.616	13.6765	20.8579}
		}
		{bone "fx_hunter2"
			{Position 11.616	8.38547	20.8579}
		}
		{bone "fx_hunter1"
			{Position 11.616	11.0782	27.2605}
		}
	}
)