
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Hormagaunt/%0.ply"} 
)

(Define "models_hormagaunts"
	{bone "Models"
		{bone "body"
			{LODView
				("Model_Path" args body)
				("Model_Path" args body_lod1)
				("Model_Path" args body_lod2)
				("Model_Path" args body_lod3)
			}
			{Visibility 1}
		}
	}
)

(Define "models_hormagaunts_slasher"
	{bone "Models"
		{bone "body"
			{LODView
				("Model_Path" args body)
				("Model_Path" args body_lod1)
				("Model_Path" args body_lod2)
				("Model_Path" args body_lod3)
			}
			{Visibility 1}
		}
		{bone "slasher_armor"	("Model_Path" args slasher_armor)	{Visibility 1}}
	}
)
