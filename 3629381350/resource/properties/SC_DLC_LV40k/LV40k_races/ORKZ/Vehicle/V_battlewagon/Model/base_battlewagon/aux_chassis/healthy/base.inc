
(Define "auxchassis"
	{bone "aux_turret4_l"
		{parameters "ID=aux_turret4;"}
		{Matrix34
			0	1	0
			-1	0	0
			0	0	1
			-78.8468	68.4046	73.0484
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_chassis/aux_turret4_l.ply"}
		{bone revolute "gun_rot_at4l_h"
			{Position 19.1172	-0.343018	28.0074}
			{bone revolute "gun_rot_at4l_v"
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					0	0	0
				}
				{bone "aux_shootas_at4l"
					{parameters "ID=aux_turret4;"}
					{Matrix34
						0	0	-1
						-1	0	0
						0	1	0
						4.28483	2.09084	0.314743
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_chassis/aux_shootas_at4l.ply"}
				}
				{bone "barrel_at4l_01"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						20.4802	1.9953	-3.55286
					}
				}
				{bone "barrel_at4l_00"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						20.4802	1.99531	4.32213
					}
				}
				{bone "foresight10"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						20.4802	1.99531	0.314735
					}
				}
				{bone "fxshell_at4l_00"
					{Matrix34
						0	0	1
						1	0	0
						0	1	0
						-6.32658	3.64903	6.28636
					}
				}
				{bone "fxshell_at4l_01"
					{Matrix34
						0	0	-1
						-1	0	0
						0	1	0
						-6.32658	3.64902	-5.73045
					}
				}
			}
			
			; // SCALED FROM 85% - restoring to 100%.
			
			{bone "gunner4"
				{Matrix34
					1.0	0	0
					0	1.0	0
					0	0	1.0
					-27.5	0.342987	-22
				}
			}
		}
	}
	{bone "aux_turret5_r"
		{parameters "ID=aux_turret4;"}
		{Matrix34
			0	-1	0
			1	0	0
			0	0	1
			-88.9054	-68.4062	73.0484
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_chassis/aux_turret5_r.ply"}
		{bone revolute "gun_rot_at5r_h"
			{Position 19.1172	-0.343018	28.0074}
			{bone revolute  "gun_rot_at5r_v"
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					0	0	0
				}
				{bone "aux_shootas_at5r"
					{parameters "ID=aux_turret4;"}
					{Matrix34
						0	0	-1
						-1	0	0
						0	1	0
						4.28483	2.09085	0.314743
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/t_aux_chassis/aux_shootas_at5r.ply"}
				}
				{bone "barrel_at5r_00"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						20.4802	1.99531	4.32214
					}
				}
				{bone "barrel_at5r_01"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						20.4802	1.9953	-3.55286
					}
				}
				{bone "foresight11"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						20.4802	1.99532	0.314743
					}
				}
				{bone "fxshell_at5r_00"
					{Matrix34
						0	0	1
						1	0	0
						0	1	0
						-6.32658	3.64903	6.28636
					}
				}
				{bone "fxshell_at5r_01"
					{Matrix34
						0	0	-1
						-1	0	0
						0	1	0
						-6.32658	3.64902	-5.73045
					}
				}
			}
			
			; // SCALED FROM 85% - restoring to 100%.
			
			{bone "gunner5"
				{Matrix34
					1.0	0	0
					0	1.0	0
					0	0	1.0
					-27.5	0.343002	-22
				}
			}
		}
	}
)