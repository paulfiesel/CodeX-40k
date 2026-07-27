
; // AUX1 = left
; // AUX2 = right

(Define "Predator_Sponson_R_HB"
	{bone "r_heavybolter"
		{parameters "ID=aux_turret2;"}	
		{Matrix34
			0	0	-1
			-1	0	0
			0	1	0
			0	2.13532	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/r_heavybolter.ply"}		
	}
	{bone "foresight_r_hb"
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			35.9855	-11.3423	4.61181
		}
	}
	{bone "fxshell_r_hb"
		{Matrix34
			0	0	1
			1	0	0
			0	1	0
			11.3792	-10.3581	11.6984
		}
	}
)

(Define "Predator_Sponson_R_Lascannon"
	{bone "r_lascannon"
		{parameters "ID=aux_turret2;"}	
		{Matrix34
			0	0	-1
			-1	0	0
			0	1	0
			0	2.13532	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/r_lascannon.ply"}		
	}
	{bone "foresight_r_las"
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			49.4244	-7.01896	-0.309357
		}
	}
)

(Define "Predator_Sponson_L_Lascannon"
	{bone "l_lascannon"
		{parameters "ID=aux_turret1;"}	
		{Matrix34
			0	0	-1
			-1	0	0
			0	1	0
			0	2.13532	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/l_lascannon.ply"}
	}
	{bone "foresight_l_las"
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			49.4244	-7.01896	0.309441
		}
	}
)

(Define "Predator_Sponson_L_HB"
	{bone "l_heavybolter"
		{parameters "ID=aux_turret1;"}	
		{Matrix34
			0	0	-1
			-1	0	0
			0	1	0
			0	2.13532	0
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/l_heavybolter.ply"}
	}
	{bone "fxshell_l_hb"
		{Matrix34
			0	0	-1
			-1	0	0
			0	1	0
			11.3792	-10.3581	-11.6984
		}
	}
	{bone "foresight_l_hb"
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			35.9855	-11.3423	-4.61181
		}
	}
)

(Define "Predator_Sponson_Base"
	{bone "predator_sponsons"
		{bone revolute "aux_turret1"
			{parameters "ID=aux_turret1;"}
			{Position 3.3846	75.9	59.7375}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/left_sponson.ply"}	
			{bone revolute "gun_rot_aux1"
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					0	0	-2.13532
				}
				{bone "l_ss_ork_detail1"
					{parameters "ID=aux_turret1;"}
					{Position -0.979483	-0.0286789	2.149}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator_ork/l_ss_ork_detail1.ply"}	{visibility 0}	; // ORK PREDATOR - SHOW IN INTERACTION ENTITY
				}
				("Predator_Sponson_L_%left_sponson")
			}
			{bone "visor_ss_l"
				{Position 5.5653	-0.0751648	11.0937}
			}
		}
		{bone revolute "aux_turret2"
			{parameters "ID=aux_turret2;"}	
			{Position 3.38463	-75.9	59.7375}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/right_sponson.ply"}
			{bone revolute "gun_rot_aux2"
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					0	0	-2.13532
				}
				{bone "r_ss_ork_detail2"
					{parameters "ID=aux_turret2;"}		
					{Position -1.12084	-0.258163	0.48658}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator_ork/r_ss_ork_detail2.ply"} {visibility 0}	; // ORK PREDATOR - SHOW IN INTERACTION ENTITY		
				}
				("Predator_Sponson_R_%right_sponson")
			}
			{bone "r_ss_ork_detail1"
				{parameters "ID=aux_turret2;"}		
				{Position -1.12084	-0.475609	2.14891}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator_ork/r_ss_ork_detail1.ply"}	{visibility 0}		; // ORK PREDATOR - SHOW IN INTERACTION ENTITY
			}
			{bone "visor_ss_r"
				{Position 5.5653	-0.033493	11.0937}
			}
		}
	}
)