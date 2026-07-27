
(Define "SR_Ork_Shoota"
	{bone "r_ork_deffgun"
		{parameters "ID=aux_turret1;"}
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			-16.5916	-49.3828	-64.081
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/r_ork_deffgun.ply"}
		{bone "foresight_r_ork_deffgun"
			{Matrix34
				1	0	0
				0	1	0
				0	0	1
				34.0106	-64.0808	48.4985
			}
			{bone "barrel_r_ork_deffgun00"
				{Position -1.76805	0	2.79154}
			}
			{bone "barrel_r_ork_deffgun01"
				{Position -1.76805	1.52588e-05	-2.89189}
			}
		}
	}
)