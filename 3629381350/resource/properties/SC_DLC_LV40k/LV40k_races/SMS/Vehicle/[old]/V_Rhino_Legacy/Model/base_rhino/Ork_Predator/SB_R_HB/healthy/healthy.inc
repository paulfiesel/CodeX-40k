
(Define "SB_R_HB"
	{bone revolute "ork_predator_sponson_r"
		{parameters "id=aux_turret1;"}
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			0	-0.010994	-4.54239
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_side_gun_r_h_bolter.ply"}
		
		{bone "fx_shell_ork_predator_r_bolter"
			{Matrix34
				0	0	1
				1	0	0
				0	1	0
				-1.42646	-11.5951	13.8769
			}
		}
		{bone "foresight_ork_predator_side_gun_r_bolter"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				29.4824	-11.3499	4.3213
			}
		}
	}
)