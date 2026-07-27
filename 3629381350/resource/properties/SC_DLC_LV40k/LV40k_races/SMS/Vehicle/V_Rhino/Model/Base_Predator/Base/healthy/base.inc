
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
		{animation
			{sequence "break"	{file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Predator/turret_b.anm"} {speed 0.8}}
			{sequence "repair"	{file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Predator/turret_b.anm"} {speed -0.8}}
		}
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
	
			{bone "fxpredator_smoke_shot1"	{bone "predator_smoke_shot1"}
				{Matrix34
					-0.422618	-0.906308	0
					0.906308	-0.422618	0
					0	0	1
					-36.2494	1.95624	96.652
				}
			}
			{bone "fxpredator_smoke_shot2"	{bone "predator_smoke_shot2"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-29.2659	3.69827	102.57
				}
			}
			{bone "fxpredator_smoke_shot3"	{bone "predator_smoke_shot3"}
				{Matrix34
					-0.573577	-0.819152	0
					0.819152	-0.573577	0
					0	0	1
					-41.0136	3.50689	89.3346
				}
			}
			{bone "fxpredator_smoke_shot4"	{bone "predator_smoke_shot4"}
				{Matrix34
					0.642788	-0.766045	0
					0.766045	0.642788	0
					0	0	1
					40.361	3.53658	89.3346
				}
			}
			{bone "fxpredator_smoke_shot5"	{bone "predator_smoke_shot5"}
				{Matrix34
					0.422618	-0.906308	0
					0.906308	0.422618	0
					0	0	1
					35.3525	1.86801	96.652
				}
			}
			{bone "fxpredator_smoke_shot6"	{bone "predator_smoke_shot6"}
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					28.4606	3.91626	102.57
				}
			}
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