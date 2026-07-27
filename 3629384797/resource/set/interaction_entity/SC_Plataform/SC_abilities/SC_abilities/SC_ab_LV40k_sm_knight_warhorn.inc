
;	<<<< ------------------------------------------------------------------------>>>>			 
;	<< [=============== Ability: [DLC - LV40k / Knight Warhorn] ===============] >>
;	<<<<------------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_SM_Knight_Warhorn"
	{Tags remove "SC_AB_Tag_Ability_Chek_Knight_Warhorn"}
)

; <<<<	===================	Ability Event: Fire Hand Right	===================	>>>>	

; // BUZZ: AI trigger.
	
(Define "SC_AB_Attack_SM_Knight_Warhorn"
	{if prop "IG_knight"
		{if tagged "_SC_inf_tag_bot_unit"	{if not tagged "SC_AB_Tag_Ability_Chek_Knight_Warhorn"	{if rand 0.1 {Call_synced "SC_AB_Call_Ability_SM_Knight_Warhorn"}}}}
	}
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_SM_Knight_Warhorn"
	{if prop "IG_knight"
		{if tagged "SC_AB_Tag_Ability_Chek_Knight_Warhorn"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else
			{Tags add "SC_AB_Tag_Ability_Chek_Knight_Warhorn"}	{Delay 180.0 "SC_AB_Delay_Ability_SM_Knight_Warhorn_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Knight_Warhorn"}}
			
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_effects_sm_knight_warhorn) where(basis) args())
			{Spawn "fx_knight_warhorn" "DT_C_Body_aim" x}
		}
	}
}
