
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Ripperswarm/%0.ply"} 
)

(Define "models_ripperswarm"
	{bone "Models"
		{bone "ripper1_body"	("Model_Path" args ripper1_body)	{Visibility 1}}
		{bone "ripper2_body"	("Model_Path" args ripper2_body)	{Visibility 1}}
		{bone "ripper3_body"	("Model_Path" args ripper3_body)	{Visibility 1}}
	}
)
