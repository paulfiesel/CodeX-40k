
(Define "G_Executioner"
	{bone "g_executioner"
		{parameters "ID=gun;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/g_executioner.ply"}
		
		{bone "foresight_executioner"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				50.8383	0.399818	0
			}
		}
		{bone "fx_executioner_01"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				22.444	0.399811	9.2841
			}
		}
		{bone "fx_executioner_02"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				22.444	0.399811	-9.284
			}
		}
		{bone "fx_executioner_03"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				22.4439	9.5676	-1.48414e-05
			}
		}
		{bone "fx_executioner_04"
			{Matrix34
				1	0	0
				0	0	-1
				0	1	0
				22.444	-7.9324	0
			}
		}
	}
)