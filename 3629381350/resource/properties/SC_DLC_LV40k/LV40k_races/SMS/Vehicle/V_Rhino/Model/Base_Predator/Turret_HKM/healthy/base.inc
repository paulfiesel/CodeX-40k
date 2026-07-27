
(Define "Predator_Turret_HKM"
	{bone revolute "hkm_predator"
		{parameters "ID=turret;"}
		{Position -8.77541	-17.1774	22.5805}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/hkm_predator.ply"}
		
		{bone revolute "gun_rot4" 
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				0	0	0
			}
			{bone "predator_hkm"
				{parameters "ID=turret;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/predator_hkm.ply"}
				{bone "foresight_predator_hkm"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						12.1925	3.49615	-1.22108
					}
				}
				{bone "fxshell_predator_hkm"
					{Matrix34
						-1	0	0
						0	0	1
						0	1	0
						-11.7271	3.49615	-1.22108
					}
				}
			}
		}
	}
)