
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Tyr_Zoanthrope/%1.ply"} {visibility %0}	
)

(Define "models_zoanthrope"
	{bone "tyr_Zoanthrope_body"			("Model_Path" args 1 body)}
	{bone "tyr_Zoanthrope_head"			("Model_Path" args 1 head)}
)
