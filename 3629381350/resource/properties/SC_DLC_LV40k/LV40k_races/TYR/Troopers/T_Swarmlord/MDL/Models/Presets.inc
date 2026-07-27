
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Swarmlord/%0.ply"} 
)

(Define "models_swarmlord"
	{bone "Models"
		{bone "body"		("Model_Path" args body)		{Visibility 1}}
		{bone "head"		("Model_Path" args head)		{Visibility 1}}
		{bone "swarmlord"	("Model_Path" args swarmlord)	{Visibility 1}}
	}
)