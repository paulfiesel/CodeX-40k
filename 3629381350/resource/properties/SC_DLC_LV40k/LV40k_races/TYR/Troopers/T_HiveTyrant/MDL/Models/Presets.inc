
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_HiveTyrant/%0.ply"} 
)

(Define "models_hivetyrant_melee"
	{bone "Models"
		{bone "body"				("Model_Path" args body)			{Visibility 1}}
		{bone "head"				("Model_Path" args head)			{Visibility 1}}
		{bone "talons"				("Model_Path" args talons)			{Visibility 1}}
		{bone "w_lower_talons"		("Model_Path" args w_lower_talons)	{Visibility 1}}
	}
)

(Define "models_hivetyrant_venom_cannon"
	{bone "Models"
		{bone "body"				("Model_Path" args body)			{Visibility 1}}
		{bone "head"				("Model_Path" args head)			{Visibility 1}}
		{bone "talons"				("Model_Path" args talons)			{Visibility 1}}
		{bone "w_venom_cannon"		("Model_Path" args w_venom_cannon)	{Visibility 1}}
	}
)
