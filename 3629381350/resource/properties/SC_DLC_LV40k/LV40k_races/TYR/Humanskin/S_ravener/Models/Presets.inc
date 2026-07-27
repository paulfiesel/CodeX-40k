
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Tyr_ravener/%1.ply"} {visibility %0}	
)

(Define "models_ravener"
	{bone "tyr_ravener_body"				("Model_Path" args 1 body)}
	{bone "tyr_ravener_head"				("Model_Path" args 1 head)}
	{bone "tyr_ravener_lower_arms"			("Model_Path" args 1 lower_arms)}
	{bone "tyr_ravener_talons"				("Model_Path" args 1 talons)}
)

(Define "models_ravener_alpha"
	{bone "tyr_ravener_body"				("Model_Path" args 1 body)}
	{bone "tyr_ravener_head"				("Model_Path" args 1 head_prime)}
	{bone "tyr_ravener_lower_arms"			("Model_Path" args 1 lower_arms)}
	{bone "tyr_ravener_back_spikes"			("Model_Path" args 1 back_spikes)}
	{bone "tyr_ravener_talons"				("Model_Path" args 1 talons)}
)
