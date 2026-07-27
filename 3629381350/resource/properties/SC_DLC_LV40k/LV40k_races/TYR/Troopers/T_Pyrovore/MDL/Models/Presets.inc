
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Pyrovore/%0.ply"} 
)

(Define "models_pyrovore"
	{bone "Models"
		{bone "pyrovore_weapon"	("Model_Path" args pyrovore_weapon) {Visibility 1}}
		{bone "pyrovore_head"	("Model_Path" args pyrovore_head) {Visibility 1}}
		{bone "pyrovore_body"	("Model_Path" args pyrovore_body) {Visibility 1}}
	}
)
