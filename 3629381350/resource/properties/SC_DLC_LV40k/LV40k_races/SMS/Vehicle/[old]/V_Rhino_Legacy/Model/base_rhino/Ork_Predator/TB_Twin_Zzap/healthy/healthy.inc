
(Define "Ork_Main_Gun_Twin_Zzap"
	{bone "ork_predator_barrel_twin_zzap"
		{parameters "ID=gun;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/animations/o_zp_b.anm"} {speed -0.6}}
		}
		{Matrix34
			1	0	0
			0	0	1
			0	1	0
			-12.5484	-1.52588e-05	-6.68152
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_barrel_twin_zzap.ply"}
		{bone "foresight_ork_predator_gun_zzap"
			{Matrix34
				1	0	0
				0	-1	0
				0	0	1
				82.9456	0.172124	-0.236961
			}
			{bone "barrel01"
				{Position 0	-5.47545	0}
			}
			{bone "barrel00"
				{Position 0	5.84287	0}
			}
		}
	}
)