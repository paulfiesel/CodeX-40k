
(Define "SB_L_HB_AUC"
	{bone revolute "ork_predator_sponson_l"
		{parameters "id=aux_turret2;"}
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			-0.207505	0.0596619	-4.60026
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_side_gun_l_h_bolter.ply"}
		
		{bone "fx_shell_ork_predator_l_bolter"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				-10.6407	-7.48978	-9.92908
			}
		}
		{bone "fx_shell_ork_predator_l_autocannon"
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				-3.1632	-7.48978	-19.1068
			}
		}
		{bone "foresight_ork_predator_side_gun_l_bolter"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				29.7233	-11.5373	-4.46634
			}
		}
		{bone "foresight_ork_predator_side_gun_l_autocannon"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				39.2883	-8.60767	-13.7518
			}
		}
	}
)