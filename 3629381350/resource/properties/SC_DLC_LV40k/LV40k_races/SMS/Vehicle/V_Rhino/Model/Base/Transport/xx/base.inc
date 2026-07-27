
(Define "Base_Transport"
	{bone "rhino_transport_base"
		{parameters "ID=body;"}
		{Orientation
			0	1	0
			-1	0	0
			0	0	1
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_base.ply"}
			
		{bone "rhino_door_r"
			{parameters "ID=body;"}
			{Position -59.7661	-2.20271	17.3228}
;//			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_door_r.ply"}
		}
		{bone "rhino_door_l"
			{parameters "ID=body;"}
			{Position 59.7567	-2.20276	17.2777}
;//			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/transport/rhino_door_l.ply"}
		}
	}
)