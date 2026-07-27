
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Tyr Ravener] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

(Define "SC_AB_Place_Small_Object_1_Tyr_Ravener"
	{if tagged "sc_h_skin_tag_lv40k_ravener_alpha"	
		{Tags add "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}	
		
		; // BUZZ: AI Bots MUST have a much longer cooldown.
		{if tagged "_SC_INF_Tag_Bot_Unit"	{Delay 900 "SC_AB_Delay_Ability_Ravener_Hivenode_Cooldown" {Tags remove "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}}
		else								{Delay 600 "SC_AB_Delay_Ability_Ravener_Hivenode_Cooldown" {Tags remove "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}}
		}
		
;//		{if tagged "sc_h_skin_tag_lv40k_tyr_leviathan"
			{Start_sound "SC_plataform/body_move/-halo/tank_form/tank_to_ranged"}
			{Delay 0.1 {Spawn "tyranids_mycetic_spore_small" "basis" x}}
			{Delay 0.8 {Spawn "hi_tyr_hivenode_leviathan_1" "basis" x}}
;//		}
;//		{if tagged "sc_h_skin_tag_lv40k_tyr_kraken"
;//		}
;//		{if tagged "sc_h_skin_tag_lv40k_tyr_behemoth"
;//		}
	}
)