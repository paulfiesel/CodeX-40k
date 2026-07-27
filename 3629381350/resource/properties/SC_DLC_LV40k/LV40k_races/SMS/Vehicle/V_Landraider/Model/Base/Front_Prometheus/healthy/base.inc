
(Define "Landraider_Front_Prometheus"
	{bone "landraider_front_prometheus"
		{parameters "ID=body;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/landraider_front_prometheus.ply"}

		{bone revolute "Turret"
			{parameters "ID=turret;"}
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				23.7892	-12.0314	136.874
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/prometheus_designator.ply"}
			{bone revolute "gun_rot"
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					15.6611	-0.0720139	4.44702
				}
				{bone "foresight_prometheus"}
			}
			{bone "fxlightred3_p"
				{Position 16.4817	-9.9994	0.665405}
			}
			{bone "fxlightgreen1_p"
				{Position 15.6611	-0.0720139	4.44702}
			}
			{bone "fxlightgreen2_p"
				{Position 15.6611	9.47256	0.365875}
			}
		}
		{bone "visor_driver_prometheus"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				-37.2718	-80.2772	102.302
			}
		}
		{bone "fxlightred1_p"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				-37.2718	-80.2772	102.302
			}
		}
		{bone "fxlightred2_p"
			{Matrix34
				0	-1	0
				1	0	0
				0	0	1
				20.7445	-77.0207	110.064
			}
		}
	}
)