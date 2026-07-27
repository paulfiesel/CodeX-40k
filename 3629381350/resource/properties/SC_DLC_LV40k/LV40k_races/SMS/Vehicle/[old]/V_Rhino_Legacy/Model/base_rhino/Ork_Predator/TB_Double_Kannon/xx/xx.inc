
(Define "Ork_Main_Gun_Double_Kannon"
	{bone "ork_predator_barrel_kannon1"
		{parameters "id=gun;"}
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			11.5758	0	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_barrel_kannon1.ply"}
		
		{bone "foresight_ork_predator_gun_kannon_small"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				47.8391	11.4957	0.0705795
			}
		}
	}
	{bone "ork_predator_barrel_kannon2"
		{parameters "id=gun1;"}	
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			-12.5484	-1.52588e-05	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_barrel_kannon2.ply"}
		
		{bone "foresight_ork_predator_gun_kannon_eavy"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				105.692	-0.475859	-1.02464
			}
		}
	}
)