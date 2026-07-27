
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Exocrine/%0.ply"} 
)

(Define "models_exocrine"
	{bone "Models"
		{bone "body"			("Model_Path" args body)			{Visibility 1}}
		{bone "Exocrine_Gun"	("Model_Path" args Exocrine_Gun)	{Visibility 1}}
		{bone "Melee_Talons"	("Model_Path" args Melee_Talons)	{Visibility 1}}
	}
)
