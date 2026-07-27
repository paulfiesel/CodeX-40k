
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Hiveguard/%0.ply"} 
)

(Define "models_hiveguard"
	{bone "Models"
		{bone "body"		("Model_Path" args body)		{Visibility 1}}
		{bone "head"		("Model_Path" args head)		{Visibility 1}}
		{bone "talons_r"	("Model_Path" args talons_r)	{Visibility 1}}
		{bone "talons_l"	("Model_Path" args talons_l)	{Visibility 1}}
	}
)

(Define "models_hiveguard_impaler"
	{bone "Models"
		{bone "body"		("Model_Path" args body)		{Visibility 1}}
		{bone "head"		("Model_Path" args head)		{Visibility 1}}
		{bone "w_impaler"	("Model_Path" args w_impaler)	{Visibility 1}}
		{bone "talons_l"	("Model_Path" args talons_l)	{Visibility 1}}
	}
)

(Define "models_hiveguard_shock"
	{bone "Models"
		{bone "body"		("Model_Path" args body)		{Visibility 1}}
		{bone "head"		("Model_Path" args head)		{Visibility 1}}
		{bone "w_shockgun"	("Model_Path" args w_shockgun)	{Visibility 1}}
		{bone "talons_l"	("Model_Path" args talons_l)	{Visibility 1}}
	}
)
