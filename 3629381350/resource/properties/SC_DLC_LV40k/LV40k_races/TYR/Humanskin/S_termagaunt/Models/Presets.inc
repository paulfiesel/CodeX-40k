
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Tyr_Termagaunts/%1.ply"} {visibility %0}	
)

(Define "models_devourer"
	{bone "tyr_termagaunt_body"			("Model_Path" args 1 termagaunt_body)}
	{bone "tyr_termagaunt_arms"			("Model_Path" args 1 termagaunt_arms)}
	
	{bone "tyr_termagaunt_w_spinefists"	("Model_Path" args 0 termagaunt_spinefists)}
	{bone "tyr_termagaunt_w_devourer"	("Model_Path" args 0 termagaunt_devourer)}
	{bone "tyr_termagaunt_w_fleshborer"	("Model_Path" args 0 termagaunt_fleshborer)}
)

(Define "models_devourer_2"
	{bone "tyr_termagaunt_body"			("Model_Path" args 1 termagaunt_body)}
	{bone "tyr_termagaunt_arms"			("Model_Path" args 1 termagaunt_arms)}
	
	{bone "tyr_termagaunt_w_spinefists"	("Model_Path" args 0 termagaunt_spinefists)}
	{bone "tyr_termagaunt_w_devourer"	("Model_Path" args 0 termagaunt_devourer)}
	{bone "tyr_termagaunt_w_fleshborer"	("Model_Path" args 0 termagaunt_fleshborer)}
	
	{bone "tyr_Termagaunt_Toxin_Sack"	("Model_Path" args 1 Termagaunt_Toxin_Sack)}
)
