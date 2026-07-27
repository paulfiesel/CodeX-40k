
(Define "Base"
	{bone revolute "gun_rot1"
		{Matrix34
			1	0	0
			0	0	1
			0	-1	0
			0.232394	0	-0.121208
		}
		{bone "missile_launcher"
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_emplacement/missile_launcher.ply"}
		}
		{bone "foresight_ml"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				8.74194	3.42783	0.0511969
			}
		}
	}
)