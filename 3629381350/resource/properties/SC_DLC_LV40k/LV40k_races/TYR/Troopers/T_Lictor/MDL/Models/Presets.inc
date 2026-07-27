
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Lictor/%0.ply"} 
)

(Define "models_lictor"
	{bone "Models"
		{Bone "visible"
			{bone "arms"		("Model_Path" args arms)			{Visibility 1}}
			{bone "body"		("Model_Path" args body)			{Visibility 1}}
			{bone "head"		("Model_Path" args head)			{Visibility 1}}
			{bone "talons"		("Model_Path" args talons)			{Visibility 1}}
		}
		{bone "cloaked"
			{bone "arms_c"		("Model_Path" args arms_cloaked)	{Visibility 0}}
			{bone "body_c"		("Model_Path" args Body_cloaked)	{Visibility 0}}
			{bone "head_c"		("Model_Path" args Head_cloaked)	{Visibility 0}}
			{bone "talons_c"	("Model_Path" args talons_cloaked)	{Visibility 0}}
		}
	}
)
