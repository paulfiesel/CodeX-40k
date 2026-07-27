	
;	<<<< ---------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== Humanskin Gore System - Part of Script "SC_Infantry_Damage_Generic" ===============] >>
;	<<<<----------------------------------------------------------------------------------------------------->>>>			 

(Define "SC_H_Gore_Define_Die"
	{delay 0.1 {tags add "SC_human_tag_is_dead"}}	; // BUZZ: <- prevents dead corpses from being teared up.
)

; // BUZZ: everything here is called from "SC_Infantry_Damage_Generic.inc"

(Define "SC_Human_Define_Skin_Gore"
	{if not tagged "SC_human_tag_is_dead"
		{if tagged "%tag"
			{if tagged "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
			
			else tagged "SC_Infantry_Generic_Tag_Gore_Tear_Head"
				{spawn "%skin_head" "basis" x}
				{clear_inventory}
				{delete}
				
			else tagged "SC_Infantry_Generic_Tag_Gore_Tear_foot_l"
				{spawn "%skin_foot_l" "basis" x}
				{spawn "sc_gibs_foot_l" "foot2l" x}
				{clear_inventory}
				{delete}
			
			else tagged "SC_Infantry_Generic_Tag_Gore_Tear_foot_r"
				{spawn "%skin_foot_r" "basis" x}
				{spawn "sc_gibs_foot_r" "foot2r" x}
				{clear_inventory}
				{delete}
			
			else tagged "SC_Infantry_Generic_Tag_Gore_Tear_hand_l"
				{spawn "%skin_arm_l" "basis" x}
				{spawn "sc_gibs_hand_l" "hand2l" x}
				{clear_inventory}
				{delete}
			
			else tagged "SC_Infantry_Generic_Tag_Gore_Tear_hand_r"
				{spawn "%skin_arm_r" "basis" x}
				{spawn "sc_gibs_hand_r" "hand2l" x}
				{clear_inventory}
				{delete}
			
			else tagged "SC_Infantry_Generic_Tag_Gore_Tear_Body"
				{if rand 0.25
					{spawn "%skin_lower" "basis" x}
					{spawn "%skin_body" "basis" x}
					{clear_inventory}
					{delete}
				else 
					{spawn "sc_gibs_hand_l" "hand2l" x}
					{spawn "sc_gibs_hand_r" "hand2r" x}
					{spawn "%skin_body" "basis" x}
					{clear_inventory}
					{delete}
				}
			}
		}
	}
)
