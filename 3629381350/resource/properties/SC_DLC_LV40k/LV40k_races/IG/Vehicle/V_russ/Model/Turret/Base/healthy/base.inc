
(Define "Base_Turret"
	{bone revolute "turret"
		{parameters "ID=turret;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_russ/Animations/turret_b"} {speed -0.6}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_russ/Animations/turret_b"} {speed 0.6}}
		}
		{Position -0.577053	0	78.3599}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/turret.ply"}
		
		(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_Russ/Model/Turret/T_%args_turret/Healthy/base.inc")
		("T_%args_turret")
		
		{bone "commander"
			{Matrix34
				0.999962	0	-0.00872653
				0	1	0
				0.00872653	0	0.999962
				0.194793	0	18.6168
			}
		}
		{bone revolute "gun_rot"
			{parameters "ID=gun;"}
			{animation
				{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_russ/Animations/gun_b"} {speed -0.6}}
				{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_russ/Animations/gun_b"} {speed 0.6}}
			}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				40.2664	0	9.57255
			}
			{bone "visor_gun"
				{Matrix34
					1	0	0
					0	0	-1
					0	1	0
					-0.7104	14.1504	0
				}
			}
			(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_Russ/Model/Turret/G_%args_gun/Healthy/base.inc")
			("G_%args_gun")
		}
		{bone "fx_optics03"
			{Matrix34
				0.999962	0	-0.00872653
				0	1	0
				0.00872653	0	0.999962
				18.5544	-11.8204	23.1263
			}
		}
		{bone "fx_optics02"
			{Matrix34
				0.999962	0	-0.00872653
				0	1	0
				0.00872653	0	0.999962
				15.8805	34.4308	13.7262
			}
		}
		{bone "fx_optics04"
			{Matrix34
				0.999962	0	-0.00872653
				0	1	0
				0.00872653	0	0.999962
				19.1722	29.8661	12.3266
			}
		}
		{bone "fx_optics01"
			{Matrix34
				0.999962	0	-0.00872653
				0	1	0
				0.00872653	0	0.999962
				18.3097	25.901	13.5749
			}
		}
		{bone "t_executioner"
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				40.7199	0.00117556	11.045
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/executioner_turret.ply"}	{visibility 0}
		}
		{bone "hatch"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				-9.3521	0.0076211	25.2995
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/hatch.ply"}
		}
	}
)