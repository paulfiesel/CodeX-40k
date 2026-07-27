
(Define "Base_Razorback"
	{bone "razorback_base"
		{parameters "ID=body;"}
		{Orientation
			0	1	0
			-1	0	0
			0	0	1
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/razorback/razorback_base.ply"}
	
		{bone "rhino_door_r"
			{parameters "ID=body;"}
			{Position -59.7661	-2.20271	17.3228}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_door_r.ply"}
		}
		{bone "rhino_door_l"
			{parameters "ID=body;"}
			{Position 59.7567	-2.20276	17.2777}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_door_l.ply"}
		}
		{bone revolute "turret"
			{parameters "ID=turret;"}
			{animation
;}//			{sequence "break" {file "turret_b.anm"} {speed 0.7}}
			}
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				0.00530605	44.6226	73.2823
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/razorback/turret.ply"}
			
			(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Model/Base_Razorback/%args_turret/healthy/base.inc")
			("Razorback_%args_turret")
		}
	}
)