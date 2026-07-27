
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_emplacement/animations/anm.ext"}

		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "base"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/base.ply"}
				{bone "legs_back"
					{Position 1.9884	0	11.8584}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/legs_back.ply"}
				}
				{bone "legs_front"
					{Position 6.49517	-0.00094676	11.8489}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/legs_front.ply"}
				}
				{bone revolute "gun_rot"
					{Position 4.23706	0	14.8884}
					
					%args_role
					
					{bone "gunner_missile"
						{Position -20	-4	-13.5}
					}
					{bone "gunner"
						{Position -28.4327	-9.5	-13.5}
					}
					{bone "commander"
						{Position -23.2	-19.5	-14.5}
					}
				}
				{bone "visor"
					{Position 0	0	39.3701}
				}
				{bone "visor2"
					{Position 0	0	39.3701}
				}
			}
			{bone "driver1"
				{Position 10.5	4.0979	0}	{bone "emit1"}
			}
			{bone "driver2"
				{Position -1.45746	-6.8702	0}	{bone "emit2"}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_emplacement/Model/base/+base_vol.inc")
	
	%args_vol
)