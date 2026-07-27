
(Define "Predator_W_Plasmacannon"
	{bone "w_plasmacannon"
		{parameters "ID=gun;"}
		{animation
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Predator/gun_plasma_b.anm"} {speed 0.7}}
		}
		{Matrix34
			0	0	-1
			-1	0	0
			0	1	0
			29.6269	-1.10676	-10.5278
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/w_plasmacannon.ply"}
		{bone "fxlight_pc"
			{Matrix34
				0	0	-1
				1	0	0
				0	-1	0
				0.0691693	-34.7113	-2.7459
			}
		}
		{bone "foresight_sm_plasma"
			{Matrix34
				0	0	-1
				1	0	0
				0	-1	0
				0.0691711	-39.807	-1.62046
			}
			{bone "barrel_pc01"
				{Position 0	6.18611	-5.71619}
			}
			{bone "barrel_pc00"
				{Position 0	-6.24702	-5.71617}
			}
		}
		{bone "visor_pc"
			{Matrix34
				0	0	-1
				1	0	0
				0	-1	0
				0.0691546	8.95977	6.39246
			}
		}
	}
)