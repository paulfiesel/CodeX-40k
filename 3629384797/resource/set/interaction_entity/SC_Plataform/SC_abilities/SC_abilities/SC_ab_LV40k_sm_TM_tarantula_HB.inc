
;	<<<< ----------------------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / SMS Techmarine Tarantulas] ===============] >>
;	<<<<------------------------------------------------------------------------------------>>>>			 

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

(Define "SC_AB_Place_Small_Object_1_SM_TM_Tarantula_HB"
	{if tagged "sc_h_skin_tag_lv40k_spacemarine_techmarine"	
		{Tags add "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}	
		
		; // BUZZ: AI Bots MUST have a much longer cooldown.
		{if tagged "_SC_INF_Tag_SC_INF_Tag_Bot_Unit_Unit"	{Delay 900 "SC_AB_Delay_Ability_Techmarine_Tarantula_Cooldown" {Tags remove "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}}
		else												{Delay 600 "SC_AB_Delay_Ability_Techmarine_Tarantula_Cooldown" {Tags remove "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}}
		}
		{Delay 0.5 {Spawn "ums_tarantula_hb" "basis" x}}
	}
)