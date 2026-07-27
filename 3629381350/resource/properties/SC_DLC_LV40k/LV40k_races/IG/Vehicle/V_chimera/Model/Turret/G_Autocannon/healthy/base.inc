
(Define "G_Autocannon"
	{bone "gun_rot1"
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			17.8257	0.0121412	5.63081
		}
		{bone revolute "gun_rot"
			{bone "w_autocannon"
				{parameters "ID=gun;"}
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					-40.4746	-66.3117	-7.64258
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/w_autocannon.ply"}
				
				{bone "barrel_ac00"
					{Position 111.697	-3.45467	66.4365}
				}
				{bone "barrel_ac01"
					{Position 111.697	-11.4508	66.4365}
				}
				{bone "foresight_ac"
					{Position 115.329	-7.65472	66.4365}
				}
				{bone "ac_can2"
					{parameters "ID=gun;"}
					{Position 82.5903	-3.40992	66.3219}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/ac_can2.ply"}
				}
				{bone "ac_can1"
					{parameters "ID=gun;"}
					{Position 82.5903	-11.45	66.3211}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/ac_can1.ply"}
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