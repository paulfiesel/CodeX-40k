
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Ork_Grot_Skin/%1.ply"}
	{Visibility %0}
)

(Define "models_grots"
	{bone "orkgrot_body"				("Model_Path" args 1 grot_body)}
	{bone "orkgrot_body_no_ears"		("Model_Path" args 0 grot_no_ear)}
	
	{bone "orkgrot_detail_1"			("Model_Path" args 1 Armor)}
	{bone "orkgrot_detail_2"			("Model_Path" args 0 detail_choppa)}
	{bone "orkgrot_detail_3"			("Model_Path" args 0 detail_wrists)}
	
	{bone "orkgrot_helmet_1"			("Model_Path" args 0 helmet_shoota_1c)}
	{bone "orkgrot_helmet_2"			("Model_Path" args 0 helmet_shoota_1b)}
	{bone "orkgrot_helmet_3"			("Model_Path" args 0 helmet_shoota_1c)}
	
	{bone "orkgrot_helmet_4"			("Model_Path" args 0 helmet_cap1)}
	{bone "orkgrot_helmet_5"			("Model_Path" args 0 helmet_cap2)}
	{bone "orkgrot_helmet_6"			("Model_Path" args 0 helmet_mask1)}
	{bone "orkgrot_helmet_7"			("Model_Path" args 0 helmet_plume)}
	{bone "orkgrot_helmet_8"			("Model_Path" args 0 detail_goggles1)}
)

