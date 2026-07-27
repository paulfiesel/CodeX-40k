
(Define "Base_Turret_U"
	{bone "turret_trojan"
		{parameters "ID=turret;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/turret_trojan.ply"}
		
		{bone "hatch_trj"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				4.41983	-7.49013	63.7674
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hatch_trj.ply"}
		}
	}
)