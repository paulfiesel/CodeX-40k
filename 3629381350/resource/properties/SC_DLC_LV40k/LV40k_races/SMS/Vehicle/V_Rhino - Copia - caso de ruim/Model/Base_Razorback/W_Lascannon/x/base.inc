
(Define "Base_Predator"
	{bone "turret"
		{parameters "ID=turret;"}
		{animation
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/b_predator_t.anm"} {speed 0.8}}
		}
		{Position -20.3826	0	77.7051}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/turret.ply"}

		{bone "predator_hatch"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				-10.6815	15.0153	19.6744
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/predator_hatch.ply"}	{Visibility 0}
		}
		{bone "predator_light"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				20.3826	0	-77.7051
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/predator_light.ply"}	{Visibility 0}
		}
		{bone "predator_smokelaunchers"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				20.3826	0	-77.7051
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/predator_smokelaunchers.ply"}	{Visibility 0}
		}
		{bone revolute "mantlet"
			{parameters "ID=turret;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				29.784	-11.4957	11.5808
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/mantlet.ply"}
			
			(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Model/%args_main_gun")
		}
	}
)