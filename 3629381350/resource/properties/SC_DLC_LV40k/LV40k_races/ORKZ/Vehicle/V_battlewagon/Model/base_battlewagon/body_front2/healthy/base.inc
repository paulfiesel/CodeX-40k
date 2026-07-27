
(Define "body_front2_roller"
	{bone "body_front1_shield"
		{parameters "ID=body;"}
		{Position -171.487	1.83037	-37.2805}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/body_front1_shield.ply"}
	}
	{bone "body_front2_roller"
		{parameters "ID=body;"}
		{Position -171.487	1.83037	-37.2805}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/body_front2_roller.ply"}
		
		{bone revolute "wheelfront1"
			{parameters "ID=body;Radius=1.7;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/battlewagon_chassis/body_front2_roller_wheel.ply"}
			{Matrix34
				-1	0	0
				0	0	1
				0	1	0
				171.487	-1.83038	37.2805
			}
		}
	}
)