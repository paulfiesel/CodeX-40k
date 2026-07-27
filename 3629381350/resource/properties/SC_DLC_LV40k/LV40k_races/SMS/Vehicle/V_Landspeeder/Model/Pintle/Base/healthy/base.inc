
(Define "Base_Pintle"
	{bone revolute  "pintle_gun_rot_h"
		{limits -45 8}
		{speed 0.03}
		
		{Matrix34
			0	-1	0
			1	0	0
			0	0	1
			-9.78736	10.885	35.3342
		}
		{bone revolute "pintle_gun_rot_v"
			{limits 11 -12}
			{speed 0.03}
			
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				20.7405	-0.773688	0
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/pintle_gun_rot_v.ply"}
			{Bone "visor_pintle"}
			(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Landspeeder/Model/Pintle/%args_pintle/healthy/base.inc")
			("%args_pintle")
		}
	}
)
