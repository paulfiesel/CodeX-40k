
(Define "Base_Predator"
	{bone "predator_base"
		{parameters "ID=body;"}
		{Orientation
			0	1	0
			-1	0	0
			0	0	1
		}	
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/predator_base.ply"}
	}
	{bone revolute "turret"
		{parameters "ID=turret;"}

		{Position -20.3826	0	77.7051}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/turret.ply"}

		{bone "predator_hatch1"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				-10.679	1.42802	19.6744
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/predator_hatch1.ply"}
		}
		{bone "predator_hatch2"
			{parameters "ID=turret;"}
			{Matrix34
				0	1	0
				-1	0	0
				0	0	1
				-10.6815	28.5311	19.6744
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/predator_hatch2.ply"}
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
		
		(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Model/Base_Predator/%args_turret/healthy/base.inc")
		("Predator_%args_turret")
		
		{bone revolute "gun_rot"
			{parameters "ID=turret;"}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				29.784	-11.4957	11.5808
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/mantlet.ply"}
			
			(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Model/Base_Predator/%args_main_gun/healthy/base.inc")
			("Predator_%args_main_gun")
		}
		{bone "visor3"
			{Position 0.697578	0	79.7753}
		}
	}
)