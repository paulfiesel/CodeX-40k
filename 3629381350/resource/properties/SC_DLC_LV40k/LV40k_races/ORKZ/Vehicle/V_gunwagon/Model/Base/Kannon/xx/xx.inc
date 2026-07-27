
(Define "Kannon_Gunwagon"
	{bone revolute "Kanon"
		{parameters "ID=gun;"}
		{Position 11.3221	-0.786	56.3361}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_kannon/kanon.ply"}
		{bone revolute "gun_rot"
			{parameters "ID=gun;"}
			{Orientation
				1	0	0
				0	0	1
				0	-1	0
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/gunwagon_chassis/t_kannon/gun.ply"}
			{bone "foresight3"
				{Position 57.3837	11.831	-0.372616}
			}
			{bone "visor2"
				{Matrix34
					0.996195	0.0871556	0
					0	0	-1
					-0.0871556	0.996195	0
					9.78439	24.2778	-5.63833
				}
			}
		}
		{bone "gunner"
			{Position -38.8595	17.2838	-21.8872}
		}
		{bone "commander"
			{Position -39.3942	-13.0256	-21.8872}
		}
		{bone "fxfire3"
			{Position 3.47393	0.785857	1.01896}
		}
	}
)