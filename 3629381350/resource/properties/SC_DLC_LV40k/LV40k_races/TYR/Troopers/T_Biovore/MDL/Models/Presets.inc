
(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/Tyr_Biovore/%0.ply"} 
)

(Define "models_biovore"
	{bone "Models"
;		{bone "arms"
;			{LODView
;				("Model_Path" args arms)	
;				("Model_Path" args arms_lod1)	
;				("Model_Path" args arms_lod2)	
;				("Model_Path" args arms_lod3)	
;			}
;			{Visibility 1}
;		}
		{bone "biovore_head"		("Model_Path" args biovore_head) {Visibility 1}}
		{bone "biovore_body"		("Model_Path" args biovore_body) {Visibility 1}}
		{bone "weapon_biovore"		("Model_Path" args weapon_biovore) {Visibility 1}}
		{bone "weapon_biovore_arms"	("Model_Path" args weapon_biovore_arms) {Visibility 1}}
	}
)
