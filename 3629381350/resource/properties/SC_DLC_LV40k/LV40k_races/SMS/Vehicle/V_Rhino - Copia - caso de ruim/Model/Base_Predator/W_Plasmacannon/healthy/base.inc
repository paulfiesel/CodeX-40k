
(Define "Predator_W_Plasmacannon"
	{bone "w_plasmacannon"
		{parameters "ID=gun;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Predator/gun_plasma_b.anm"} {speed -0.7}}
		}
		{Matrix34
			0	0	-1
			-1	0	0
			0	1	0
			29.6269	-1.10676	-10.5278
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/w_plasmacannon.ply"}

		{bone "foresight_sm_plasma"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0.0691711	-39.807	-1.62046
			}
			{bone "fx_pc_03"
				{Position -33.0942	0.898776	9.89803}
			}
			{bone "fx_pc_01"
				{Position -33.0942	-12.8807	-1.12543}
			}
			{bone "fx_pc_02"
				{Position -33.0942	14.6783	-1.12544}
			}
			{bone "barrel_pc00"
				{Position -5.71619	-6.24703	0}
			}
			{bone "barrel_pc01"
				{Position -5.71619	6.18611	2.28882e-05}
			}
			{bone "fx_laser_PC"
				{Position -5.09566	0	-1.12544}
			}
		}
	}
)