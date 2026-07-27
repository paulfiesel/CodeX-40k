
(Define "Predator_W_Lascannon"
	{bone "w_lascannon"
		{parameters "ID=gun;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Predator/gun_lascannon_b.anm"} {speed -0.7}}
		}
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			11.5758	0	-1.43051e-05
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/w_lascannon.ply"}
		{bone "foresight_sm_las"
			{Position 65.9027	10.8059	-4.96796}
			{bone "pred_las_barrel01"
				{Position -1.51098	7.68358	1.52588e-05}
			}
			{bone "pred_las_barrel00"
				{Position -1.51096	-7.62842	0}
			}
		}
	}
)