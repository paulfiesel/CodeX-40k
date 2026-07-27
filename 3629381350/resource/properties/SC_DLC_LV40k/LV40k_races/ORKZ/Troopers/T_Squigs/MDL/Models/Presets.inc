
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Ork_Squig_Trooper/%0.ply"} 
)

(Define "models_squigs"
	{bone "Models"
		{bone "squig_body"
			{LODView
				("Model_Path" args squig_body)
				("Model_Path" args squig_body_lod1)
				("Model_Path" args squig_body_lod2)
				("Model_Path" args squig_body_lod3)
			}
			{Visibility 1}
		}
		{bone "squig_bombs"
			{LODView
				("Model_Path" args squig_bombs)
				("Model_Path" args squig_bombs_lod1)
				("Model_Path" args squig_bombs_lod2)
				("Model_Path" args squig_bombs_lod3)
			}
			{Visibility 1}
		}
	}
)
