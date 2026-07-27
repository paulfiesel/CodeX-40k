
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Ork Mekboy] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

(Define "SC_AB_Place_Small_Object_1_Ork_Mekboy"
	{if tagged "sc_h_skin_tag_lv40k_orkboy_mekboy"	
		{Tags add "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}	
		
		; // BUZZ: AI Bots MUST have a much longer cooldown.
		{if tagged "_SC_INF_Tag_SC_INF_Tag_Bot_Unit_Unit"	{Delay 720 "SC_AB_Delay_Ability_Mekboy_Grot_Turret_Cooldown" {Tags remove "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}}
		else												{Delay 360 "SC_AB_Delay_Ability_Mekboy_Grot_Turret_Cooldown" {Tags remove "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}}
		}
		
;//		{if tagged "sc_h_skin_tag_lv40k_orkz_evilsunz"
			{Delay 0.5 {Spawn "evz_grot_sentry_turret" "basis" x}}
;//		}
;//		{if tagged "sc_h_skin_tag_lv40k_orkz_badmoons"
;//		}
;//		{if tagged "sc_h_skin_tag_lv40k_orkz_goffs"
;//		}
	}
)