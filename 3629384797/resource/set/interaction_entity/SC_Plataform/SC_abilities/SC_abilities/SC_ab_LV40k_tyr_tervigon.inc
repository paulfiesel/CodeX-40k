
;	<<<< --------------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Tervigon Spawn Bugs] ===============] >>
;	<<<<---------------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Tyr_Tervigon"
	{Tags remove "SC_AB_Tag_Ability_Chek_Tervigon"}
	{Tags remove "SC_AB_Tag_Ability_Tervigon_Cooldown"}
)
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Tyr_Tervigon"
)

; <<<<	===================	Ability Event: Trigger	===================	>>>>	

(Define "SC_AB_Damage_Tyr_Tervigon"
	{if prop "LV40k_dlc_prop_troopers_Tyr_Tervigon"
		{if tagged "_SC_INF_Tag_Bot_Unit"
		else tagged "SC_AB_Tag_Ability_Chek_Tervigon"	
		else
			{if rand 0.32 {Call_synced "SC_AB_Call_Ability_Tyr_Tervigon_Spawn"}}
		}
	}
)

(Define "SC_AB_Attack_Tyr_Tervigon"
	{if prop "LV40k_dlc_prop_troopers_Tyr_Tervigon"
		{if tagged "_SC_INF_Tag_Bot_Unit"
		else tagged "SC_AB_Tag_Ability_Chek_Tervigon"	
		else
			{if rand 0.04 {Call_synced "SC_AB_Call_Ability_Tyr_Tervigon_Spawn"}}
		}
	}
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_Tyr_Tervigon_Spawn"
	{if prop "LV40k_dlc_prop_troopers_Tyr_Tervigon"
		{if tagged "SC_AB_Tag_Ability_Tervigon_Cooldown"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else tagged "SC_AB_Tag_Ability_Chek_Tervigon"
			{Damage_Report "basis"	"<f(impact)><c(FFC0CB)>Ability Already Active!"}
		else dead
			; [...]
		else	
			{Tags add "SC_AB_Tag_Ability_Chek_Tervigon"}		
			{Call "SC_TP_Request_Call_Anm_LV40k_Tervigon_Spawn"}
			
			; // BUZZ: Cooldown tag is handled in the FSM animator handler.
			
			{Damage_Report "basis"	"<f(impact)><c(FFC0CB)>Ability Already Active!"}
		}
	}
}