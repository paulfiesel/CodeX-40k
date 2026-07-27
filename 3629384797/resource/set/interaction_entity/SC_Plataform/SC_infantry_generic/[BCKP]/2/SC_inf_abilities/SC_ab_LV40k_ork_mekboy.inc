
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Ork Mekboy] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Ork_Mekboy"
	{Tags remove "SC_AB_Tag_Ability_Chek_Mekboy_Grot_Turret"}
	{Tags remove "SC_AB_Tag_Can_Use_AB_Ork_Mekboy_Grot_Turret"}

	; // BUZZ: who can use this ability // Add several check attempts
	{Delay 1.0	{if tagged "sc_h_skin_tag_lv40k_orkboy_mekboy"	{tags add "SC_AB_Tag_Can_Use_AB_Ork_Mekboy_Grot_Turret"}}}
	{Delay 3.0	{if tagged "sc_h_skin_tag_lv40k_orkboy_mekboy"	{tags add "SC_AB_Tag_Can_Use_AB_Ork_Mekboy_Grot_Turret"}}}
	{Delay 6.0	{if tagged "sc_h_skin_tag_lv40k_orkboy_mekboy"	{tags add "SC_AB_Tag_Can_Use_AB_Ork_Mekboy_Grot_Turret"}}}
)
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Ork_Mekboy"
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_Ork_Mekboy_Grot_Turret" sync
	{if tagged "SC_AB_Tag_Can_Use_AB_Ork_Mekboy_Grot_Turret"
		{if not terrain_pp "no_pass"
			{if not terrain_pp "water"
				{if not terrain_pp "swamp"
					{if not terrain_fx "shallow_water"
						{if not tagged "sc_h_request_tag_snipe_open"	; // BUZZ: <- snipe/cover check is to prevent AI from spawning turrets inside trenches.
						
							{if not tagged "SC_AB_Tag_Ability_Chek_Mekboy_Grot_Turret"
								{Tags add "SC_AB_Tag_Ability_Chek_Mekboy_Grot_Turret"}	
								
								; // BUZZ: AI Bots have a much longer cooldown.
								{if tagged "_bot"
									{Delay 600 "SC_AB_Delay_Ability_Mekboy_Grot_Turret_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Mekboy_Grot_Turret"}}
								else
									{Delay 240 "SC_AB_Delay_Ability_Mekboy_Grot_Turret_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Mekboy_Grot_Turret"}}
								}
								
								{Delay 0.5 {Spawn "ork_grot_sentry_turret" "basis" x}}
							else
								{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
							}
						}
					else
						{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE THIS HERE!"}
					}
				else
					{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE THIS HERE!"}
				}
			else
				{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE THIS HERE!"}
			}
		else
			{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE THIS HERE!"}
		}
	}
}
