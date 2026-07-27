
(Define "G_HB"
	{bone "gun_rot1"
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			17.8257	0.0121412	5.63081
		}
		{bone revolute "gun_rot"
			{bone "w_hb"
				{parameters "ID=gun;"}
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					-40.4746	-66.3117	-7.64258
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/w_hb.ply"}
				
				{bone "foresight_hb"
					{Position 62.1198	-7.65472	65.4781}
				}
				{bone "barrel_hb00"
					{Position 58.0203	-11.1397	65.4781}
				}
				{bone "barrel_hb01"
					{Position 58.0203	-3.6881	65.4781}
				}
			}
		}
	}
	{bone "gun_rot1_object"
		{parameters "ID=gun;"}
		{Position -22.6489	7.65472	-60.6809}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/gun_rot1_object.ply"}
	}
)