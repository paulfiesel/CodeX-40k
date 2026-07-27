
(Define "G_Opressor"
	{bone "w_opressor"
		{parameters "ID=gun;"}
		{Position 0	0	0}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/w_opressor.ply"}
		{bone "o_barrel"
			{parameters "ID=gun;"}
			{Matrix34
				0	0	-1
				-1	0	0
				0	1	0
				80.0268	-0.983459	10.6802
			}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/dorn_chassis/o_barrel.ply"}
		}
		{bone "foresight_oppressor"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				114.951	-0.983459	10.6802
			}
		}
		{bone "fx_optic1"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				14.8002	3.2313	-2.36692
			}
		}
		{bone "foresight_AC"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				46.0302	0.14064	-11.7849
			}
		}
	}
)