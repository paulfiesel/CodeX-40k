
(Define "Predator_W_Ork_Kannons"
	{bone "predator_ork_barrel"
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			-26.459	-17.4966	-13.4383
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator_ork/predator_ork_barrel.ply"}
	}
	{bone "w_ork_kannon1"
		{parameters "ID=gun;"}

		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			9.32292	-3.67412	-3.55001
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator_ork/w_ork_kannon1.ply"}
		{bone "foresight_ork_k1"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				47.8391	11.4957	0.0705719
			}
		}
	}
	{bone "w_ork_kannon2"
		{parameters "ID=gun;"}

		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			-11.3498	-3.67413	-3.55
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator_ork/w_ork_kannon2.ply"}
		{bone "foresight_ork_k2"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				105.692	-0.475858	-1.02464
			}
		}
	}
)