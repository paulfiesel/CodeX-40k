
(Define "SF_Ork_Rokkit"
	{bone "f_ork_rokkitlauncha"
		{parameters "ID=aux_turret2;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/f_ork_rokkitlauncha.ply"}
		
		{bone "ork_ammo02"
			{parameters "ID=aux_turret2;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/ork_ammo2.ply"}
		}
		{bone "ork_ammo01"
			{parameters "ID=aux_turret2;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/ork_ammo1.ply"}
		}
		{bone "ork_ammo00"
			{parameters "ID=aux_turret2;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/ork_ammo0.ply"}
		}
		{bone "foresight_f_ork_rokkitlauncha"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				31.8817	-0.453773	0.0727015
			}
			{bone "barrel_f_ork_rokkitlauncha01"
				{Position -15.11	2.71097	3.9775}
			}
			{bone "barrel_f_ork_rokkitlauncha02"
				{Position -13.813	0.0800085	-4.28428}
			}
			{bone "barrel_f_ork_rokkitlauncha00"
				{Position -15.5868	-2.69162	4.01445}
			}
		}
	}
)