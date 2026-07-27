
(Define "Ork_Turret_Base"
	{bone "ork_predator_turret_ver_details"
		{parameters "id=body;"}
		{Position 4.52161	0.393701	98.6373}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_turret_ver_details.ply"}
	}
	{bone revolute "turret"
		{parameters "id=turret;"}
		{Position -20.3826	0	77.7051}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_turret.ply"}
		
		{bone "ork_predator_turret_details"
			{parameters "id=turret;"}
			{Position 0	-2.43862e-05	0.000144958}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_turret_details.ply"}
		}
		{bone "visor3"
			{Position 64.8917	9.22559	10.8776}
		}
		{bone "fx_ork_predator_smoke6"
			{Matrix34
				0	0	1
				0	1	0
				-1	0	0
				-12.5422	-34.4642	42.5011
			}
		}
		{bone "fx_ork_predator_smoke5"
			{Matrix34
				0	0	1
				0	1	0
				-1	0	0
				-6.63769	43.2216	28.7944
			}
		}
		{bone revolute "gun_rot"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				29.784	-11.4957	11.5808
			}
			{bone "ork_predator_barrel_details"
				{parameters "id=turret;"}
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					-29.784	-11.5807	-11.4957
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_barrel_details.ply"}
			}
			(include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/V_Rhino/Model/base_rhino/Ork_Predator/TB_%0/healthy/healthy.inc")
			("Ork_Main_Gun_%0")
		}
	}
)