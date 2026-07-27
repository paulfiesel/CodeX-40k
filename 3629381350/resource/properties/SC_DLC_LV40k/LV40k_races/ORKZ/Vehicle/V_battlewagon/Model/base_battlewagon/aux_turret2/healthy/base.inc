
(Define "auxturret2"
	{bone revolute "aux_turret2"
		{parameters "ID=aux_turret2;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/aux_turret_2_b.anm"} {speed -0.6}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_battlewagon/Animations/aux_turret_2_b.anm"} {speed 0.6}}
		}
		{Matrix34
			0	-1	0
			1	0	-6.00815e-05
			6.00815e-05	0	1
			2.00591	-31.2017	131.068
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_turret2_saw/aux_turret2_base.ply"}
		{bone "fxfire7"
			{Matrix34
				0	1	0
				-1	0	6.00815e-05
				6.00815e-05	0	1
				0	0	0
			}
		}
		{bone revolute "aux_turret2_arm"
			{parameters "ID=aux_turret2;"}
			{Matrix34
				1	0	0
				0	-6.0006e-05	1
				0	-1	-6.0006e-05
				22.7336	0.0115008	20.366
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_turret2_saw/aux_turret2_arm.ply"}
			{bone "aux_turret2_saw"
				{parameters "ID=aux_turret2;"}
				{Matrix34
					0	0	-1
					-1	-6.00061e-05	0
					-6.00061e-05	1	0
					96.9009	-66.6557	0.662766
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_turret2_saw/aux_turret2_saw.ply"}
				{bone "melee_contact"
					{Matrix34
						0	-0.17353	-0.984829
						1	5.90519e-05	-1.0413e-05
						5.99628e-05	-0.984829	0.17353
						0	1.52588e-05	0
					}
				}
			}
			{bone "foresight_melee"
				{Matrix34
					0.642741	-0.766083	0
					4.53441e-05	3.7929e-05	-1
					0.766083	0.642741	5.91159e-05
					0	3.05176e-05	0
				}
			}		
		}
	}
)