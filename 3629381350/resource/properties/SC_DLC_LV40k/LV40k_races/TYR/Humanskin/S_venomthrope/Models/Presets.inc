
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Tyr_Venomthrope/%1.ply"} {visibility %0}	
)

(Define "models_venomthrope"
	{bone "tyr_Venomthrope_body"			("Model_Path" args 1 body)}
	{bone "tyr_Venomthrope_Arms"			("Model_Path" args 1 arms)}
	{bone "tyr_Venomthrope_Head"			("Model_Path" args 1 head)}
)
