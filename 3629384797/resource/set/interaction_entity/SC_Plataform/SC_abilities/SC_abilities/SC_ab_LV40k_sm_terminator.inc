
;	<<<< --------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Terminators] ===============] >>
;	<<<<---------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_SM_Terminator"
	{Tags remove "SC_AB_Tag_Aura_Chaplain"}
)

; <<<<	===================	Ability Event: Damage	===================	>>>>	

; // BUZZ: AI trigger.
	
(Define "SC_AB_Damage_SM_Terminator"
	{if prop "LV40k_DLC_prop_troopers_SM_Terminators"
		{if tagged "_SC_INF_Tag_Bot_Unit"	{if not tagged "SC_AB_Tag_Ability_Chek_Terminator_TP"	{if rand 0.1 {Call_synced "SC_AB_Call_Ability_SM_Terminator_TP"}}}}
	}
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_SM_terminator_tp"
	{if Prop "LV40k_DLC_prop_troopers_SM_Terminators"
		{if tagged "SC_AB_Tag_Ability_Chek_Terminator_TP"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else
			{Tags add "SC_AB_Tag_Ability_Chek_Terminator_TP"}	{Delay 180.0 "SC_AB_Delay_Ability_SM_Terminator_TP_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Terminator_TP"}}
			
			{drop_orders}
			{auto_operatable 0}
			{Delay 0.5 	{Ani_play "teleport_100m"} {if not dead {auto_operatable 1}}}
		}
	}
}
