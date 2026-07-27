
(Define "Base_Main_Weapon"
	{bone revolute "gun_rot"
		{parameters "ID=gun;"}
		{limits 90 -90}
		{speed 0.02}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Landspeeder/animations/gun_b"} {speed -0.6}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Landspeeder/animations/gun_b"} {speed 0.6}}
		}
		{Matrix34
			0	-1	0
			1	0	0
			0	0	1
			-0.000100944	-25.0774	7.30502
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landspeeder_Chassis/gun_rot.ply"}
		
		{bone revolute "aim_v"
			{limits 12 -5}
			{speed 0.02}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				0	0	0
			}
			
			{bone "visor_gunner"}
			
			(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Landspeeder/Model/Main_Weapon/%args_main_weapon/healthy/base.inc")
			("%args_main_weapon")
		}
	}
)