
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Ork Painboy] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Ork_Painboy"
	{Tags remove "SC_AB_Tag_Ability_Chek_Painboy"}
	{Tags remove "SC_AB_Tag_Ability_Painboy_Aura"}

	{if prop "human"	{Add_view "fx_ork_aura_dokk" "SC_AB_FX_Ability_Painboy" "head"}
	else				{Add_view "fx_ork_aura_dokk" "SC_AB_FX_Ability_Painboy" "fx_head"}
	}
)
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Ork_Painboy"
	{view stop "SC_AB_FX_Ability_Painboy"}
)

; <<<<	===================	Ability Event: Fire Hand Right	===================	>>>>	

(Define "SC_AB_Attack_Ork_Painboy"

	; // BUZZ: AI trigger.
	{if tagged "sc_h_skin_tag_lv40k_orkboy_painboy"
		{if tagged "_SC_INF_Tag_Bot_Unit"	{if not tagged "SC_AB_Tag_Ability_Chek_Painboy"	{if rand 0.5 {Call_synced "SC_AB_Call_Ability_Ork_Painboy_Da_Juice"}}}}
	}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_Ork_Painboy"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_Ork_Maddok) do({Call "SC_AB_Call_ability_Ork_Painboy_Effects"}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_Ork_Painboy_Da_Juice"
	{if tagged "sc_h_skin_tag_lv40k_orkboy_painboy"
		{if tagged "SC_AB_Tag_Ability_Chek_Painboy"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else
			{Tags add "SC_AB_Tag_Ability_Chek_Painboy"}	{Delay 90 "SC_AB_Delay_Ability_Painboy_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Painboy"}}
			
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_Ork_Maddok) where(basis) args())
			{Spawn "fx_ork_maddok_ability" "basis" x}
		}
	}
}

{on "SC_AB_Call_ability_Ork_Painboy_Effects" 
	{if tagged "SC_INF_Tag_Unit_Faction_Orks"
		{if dead
			; [...]
		else tagged "start_personage"		;} // BUZZ: <- prevents personage state orks from triggering FX.
			; [...]
		else tagged "SC_AB_Tag_Ability_Painboy_Aura"
			; [...]
		else
			{Tags add "SC_AB_Tag_Ability_Painboy_Aura"}
			{view start "SC_AB_FX_Ability_Painboy"}
			
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>Pain? Wot dat?"}
		
			{Tags add "SC_INF_Tag_Buff_Resistance_tier1"}

			; // Duration of the buff...
			{Delay 30 "SC_AB_Delay_Ability_Painboy_Duration"
				{Tags remove "SC_AB_Tag_Ability_Painboy_Aura"}
				{view pause "SC_AB_FX_Ability_Painboy"}
				{Tags remove "SC_INF_Tag_Buff_Resistance_tier1"}
			}
		else
			
			; // Reset buff timeout timer.
			{Kill_Delay "SC_AB_Delay_Ability_Painboy_Duration"}
			
			{Delay 30 "SC_AB_Delay_Ability_Painboy_Duration"
				{Tags remove "SC_AB_Tag_Ability_Painboy_Aura"}
				{view pause "SC_AB_FX_Ability_Painboy"}
				{Tags remove "SC_INF_Tag_Buff_Resistance_tier1"}
			}
		}
	}
}