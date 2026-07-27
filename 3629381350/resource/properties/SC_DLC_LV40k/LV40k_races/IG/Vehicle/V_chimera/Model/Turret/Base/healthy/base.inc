
(Define "Base_Turret"
	{bone revolute "turret"
		{parameters "ID=turret;"}
		{Position 22.6489	-7.65472	60.6809}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/turret_chimera.ply"}
		
		{bone "detail_radio"
			{Position -22.6489	7.65472	-60.6809}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/detail_radio.ply"}	
		}
		{bone "detail_bedroll"
			{parameters "ID=turret;"}
			{Position -22.6489	7.65472	-60.6809}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/detail_bedroll.ply"}	{visibility 0}
		}
		{bone "hatch_chm"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				-19.6212	-0.00101328	17.2185
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/hatch_chm.ply"}
		}
		{bone "gunner_hatch"
			{Position -2.65374	0	3.91549}
		}
		{bone "visor_gunner"
			{Position 9.83836	-0.00184298	16.9987}
		}
	
		(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_chimera/Model/Turret/G_%args_gun/Healthy/base.inc")
		("G_%args_gun")
	}
)