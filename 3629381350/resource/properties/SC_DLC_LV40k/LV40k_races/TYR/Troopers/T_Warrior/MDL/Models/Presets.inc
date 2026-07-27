
; // BUZZ: (IMPORTANT!) Ensure that all the bone models you are using here are also included in "../Models.ext", otherwise they will not show up in skin

; ======================================================================================================================================================;

(Define "Model_Path"
	{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/humanskin/Tyr_Warrior/%1.ply"} {visibility %0}	
)

(Define "models_warrior_prime"
	{bone "tyr_warrior_body"					("Model_Path" args 1 body_Prime)}
	{bone "tyr_warrior_head"					("Model_Path" args 1 head_Prime)}
	{bone "tyr_warrior_m_arms_bonesword"		("Model_Path" args 1 m_arms_bonesword)}
	{bone "tyr_warrior_m_arms_claws"			("Model_Path" args 1 m_arms_claws)}
;//	{bone "tyr_warrior_m_arms_talons"			("Model_Path" args 0 m_arms_talons)}
;//	{bone "tyr_warrior_w_barbed_strangler"		("Model_Path" args 0 w_barbed_strangler)}
;//	{bone "tyr_warrior_w_devourer"				("Model_Path" args 0 w_devourer)}
;//	{bone "tyr_warrior_w_venom_cannon"			("Model_Path" args 0 w_venom_cannon)}
)

(Define "models_warrior_bonesword"
	{bone "tyr_warrior_body"					("Model_Path" args 1 body)}
	{bone "tyr_warrior_head"					("Model_Path" args 1 head)}
	{bone "tyr_warrior_m_arms_bonesword"		("Model_Path" args 1 m_arms_bonesword)}
	{bone "tyr_warrior_m_arms_claws"			("Model_Path" args 1 m_arms_claws)}
;//	{bone "tyr_warrior_m_arms_talons"			("Model_Path" args 0 m_arms_talons)}
;//	{bone "tyr_warrior_w_barbed_strangler"		("Model_Path" args 0 w_barbed_strangler)}
;//	{bone "tyr_warrior_w_devourer"				("Model_Path" args 0 w_devourer)}
;//	{bone "tyr_warrior_w_venom_cannon"			("Model_Path" args 0 w_venom_cannon)}
)

(Define "models_warrior_talons"
	{bone "tyr_warrior_body"					("Model_Path" args 1 body)}
	{bone "tyr_warrior_head"					("Model_Path" args 1 head)}
;//	{bone "tyr_warrior_m_arms_bonesword"		("Model_Path" args 1 m_arms_bonesword)}
	{bone "tyr_warrior_m_arms_claws"			("Model_Path" args 1 m_arms_claws)}
	{bone "tyr_warrior_m_arms_talons"			("Model_Path" args 1 m_arms_talons)}
;//	{bone "tyr_warrior_w_barbed_strangler"		("Model_Path" args 0 w_barbed_strangler)}
;//	{bone "tyr_warrior_w_devourer"				("Model_Path" args 0 w_devourer)}
;//	{bone "tyr_warrior_w_venom_cannon"			("Model_Path" args 0 w_venom_cannon)}
)
