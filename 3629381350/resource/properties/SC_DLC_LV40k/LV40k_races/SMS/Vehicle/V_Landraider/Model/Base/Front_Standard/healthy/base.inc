
(Define "Landraider_Front_Standard"
	{bone "landraider_front_default"
		{parameters "ID=body;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/landraider_front_default.ply"}

		(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Landraider/Model/Base/FT_%args_turret/healthy/base.inc")
		("FT_%args_turret")
		
		{bone "hatch2a"
			{parameters "ID=body;"}
			{Position -9.27922	-13.1627	129.267}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hatch2a.ply"}
		}
		{bone "hatch2b"
			{parameters "ID=body;"}
			{Position -38.226	-13.1627	129.267}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hatch2b.ply"}
		}
		{bone "visor_driver"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				-38.7545	-81.3743	102.598
			}
		}
	}
)
