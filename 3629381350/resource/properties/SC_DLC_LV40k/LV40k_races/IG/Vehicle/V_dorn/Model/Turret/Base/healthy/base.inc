
(Define "Base_Turret"
	{bone Revolute "turret"
		{parameters "ID=turret;"}
		{Position -3.45189	0	87.6633}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/turret.ply"}
		{bone "hatch1"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				-22.793	-28.4501	34.9916
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/hatch1.ply"}
		}
		{bone "hatch2"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				-6.94452	27.3626	34.0578
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/hatch2.ply"}
		}
		{bone Revolute "gun_rot"
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				32.3793	0	15.0366
			}
			(include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_dorn/Model/Turret/G_%args_gun/Healthy/base.inc")
			("G_%args_gun")
		}
		{bone "visor_gunner"
			{Position 24.7553	-16.5434	36.6236}
		}
		{bone "headlight5"
			{Position 16.7787	43.2921	18.5587}
		}
		{bone "headlight6"
			{Position 26.7736	11.769	38.7698}
		}
	}
)