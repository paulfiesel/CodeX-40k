
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Tervigon/%0.ply"} 
)

(Define "models_tervigon"
	{bone "Models"	
		{bone "tervigon_arms"				("Model_Path" args tervigon_arms)				{Visibility 1}}
		{bone "tervigon_body"				("Model_Path" args tervigon_body)				{Visibility 1}}
		{bone "tervigon_legs_shared"		("Model_Path" args tervigon_legs_shared)		{Visibility 1}}
	}
)
(Define "models_tyrannofex"
	{bone "Models"
		{bone "tyrannofex_body"				("Model_Path" args tyrannofex_body)				{Visibility 1}}
		{bone "tyrannofex_gun"				("Model_Path" args tyrannofex_gun)				{Visibility 1}}
		{bone "tyrannofex_head"				("Model_Path" args tyrannofex_head)				{Visibility 1}}
		{bone "tervigon_legs_shared"		("Model_Path" args tervigon_legs_shared)		{Visibility 1}}
	}
)
