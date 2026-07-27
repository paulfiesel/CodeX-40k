
(Define "Predator_W_Ork_Zzap"
	{bone "predator_ork_barrel"
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			-26.459	-17.4966	-13.4383
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator_ork/predator_ork_barrel.ply"}
	}
	{bone "w_ork_twinzzap"
		{parameters "ID=gun;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Predator/gun_ork_zzap_b.anm"} {speed -0.7}}
		}
		{Matrix34
			1	0	0
			0	0	1
			0	1	0
			-9.22337	-4.06145	-8.43393
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator_ork/w_ork_twinzzap.ply"}
		{bone "foresight_ork_zzzap"
			{Matrix34
				1	0	0
				0	-1	0
				0	0	1
				82.9456	0.172124	-0.236961
			}
			{bone "ork_zzap_barrel01"
				{Position 0	-5.47545	0}
			}
			{bone "ork_zzap_barrel00"
				{Position 0	5.84287	0}
			}
		}
	}
)