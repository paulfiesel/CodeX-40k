
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Genestealer_SH/%0.ply"} 
)

(Define "models_genestealer"
	{bone "Models"
		{bone "arms"
			{LODView
				("Model_Path" args arms)	
				("Model_Path" args arms_lod1)	
				("Model_Path" args arms_lod2)	
				("Model_Path" args arms_lod3)	
			}
			{Visibility 1}
		}
		{bone "head"
			{LODView
				("Model_Path" args head)	
				("Model_Path" args head_lod1)	
				("Model_Path" args head_lod2)	
				("Model_Path" args head_lod3)	
			}
			{Visibility 1}
		}
		{bone "torso"
			{LODView
				("Model_Path" args torso)	
				("Model_Path" args torso_lod1)	
				("Model_Path" args torso_lod2)	
				("Model_Path" args torso_lod3)	
			}
			{Visibility 1}
		}
		{bone "legs"
			{LODView
				("Model_Path" args legs)	
				("Model_Path" args legs_lod1)	
				("Model_Path" args legs_lod2)	
				("Model_Path" args legs_lod3)	
			}
			{Visibility 1}
		}
	}
)
