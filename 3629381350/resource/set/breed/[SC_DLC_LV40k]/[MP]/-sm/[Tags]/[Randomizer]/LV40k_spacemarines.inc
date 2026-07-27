
(Define "SMs_005_Randomized_Bits"
	{bone show "sm_armleft1"}
	{bone show "sm_armright1"}
	{bone show "sm_legleft1"}
	{bone show "sm_legright1"}
	{bone show "sm_backpack1"}
	{bone show "sm_torso1"}
	{bone show "sm_legleft1_d1"}
	{bone show "sm_legright1_d1"}
	
	; // Helmet
	{if rand 0.33	{bone show "sm_helmet1"}
	else rand 0.33	{bone show "sm_helmet2"}
	else			{bone show "sm_helmet2"}
	}
	
	; // Helmet Details
	{if rand 0.33	{bone show "sm_helmet1_d1a"}
	else rand 0.33	{bone show "sm_helmet1_d1b"}
;//	else 			{bone show "sm_helmet1_d1c"}
	}
	
	; // Belt
	{if rand 0.25	{bone show "sm_torso1_d2a"}
	else rand 0.25	{bone show "sm_torso1_d2b"}
	else rand 0.25	{bone show "sm_torso1_d2c"}
	}
	
	; // Chestplate
	{if rand 0.33	{bone show "sm_torso1_d1a"}
	else rand 0.33	{bone show "sm_torso1_d1b"}
	else 			{bone show "sm_torso1_d1c"}
	}
	
	; // Code Tags
	{tags add "sc_h_skin_tag_lv40k_can_use_sm_hb"}
)

(Define "Randomizer_LV40k_SMs_005"
	("SMs_005_Randomized_Bits")
)

(Define "Randomizer_LV40k_SMs_006"
	("SMs_005_Randomized_Bits")
)

