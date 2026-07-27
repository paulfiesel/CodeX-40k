
(Define "Landraider_Sponson_Default"
	{bone "landraider_weapons"
		{parameters "ID=body;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/landraider_weapons.ply"}
		
		{bone "door_r"
			{parameters "ID=body;"}
			{Position -97.9977	54.618	32.8808}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/door_r.ply"}
		}
		{bone "door_l"
			{parameters "ID=body;"}
			{Position 97.9977	54.618	32.8808}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/door_l.ply"}
		}
		{bone revolute "aux_turret1"
			{parameters "ID=aux_turret1;"}
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				129.263	-19.584	75.815
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/base_left.ply"}
			{bone "fxlightred1_w"
				{Position 9.84827	3.25438	32.7041}
			}
			{bone "fxlightred2_w"
				{Position 10.3685	-2.8127	32.7041}
				
				{bone "visor_aux1"}
			}
			(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Landraider/Model/Base/WL_%args_sponson_left/healthy/base.inc")
			("WL_%args_sponson_left")
		}
		{bone revolute "aux_turret2"
			{parameters "ID=aux_turret2;"}
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				-129.263	-19.584	75.815
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/base_right.ply"}
			{bone "fxlightred3_w"
				{Position 10.3685	2.69981	32.7041}
				
				{bone "visor_aux2"}
			}
			{bone "fxlightred4_w"
				{Position 9.84826	-3.35226	32.7041}
			}
			(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Landraider/Model/Base/WR_%args_sponson_right/healthy/base.inc")
			("WR_%args_sponson_right")
		}
	}
)
