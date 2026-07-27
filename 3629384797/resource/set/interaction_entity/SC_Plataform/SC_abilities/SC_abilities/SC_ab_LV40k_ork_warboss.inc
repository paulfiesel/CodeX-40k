
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Ork Warboss Aura] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Ork_Warboss"
	{Tags remove "SC_AB_Tag_Aura_Warboss"}

	{if prop "human"	{Add_view "fx_ork_aura_warboss" "SC_AB_FX_Ability_Warboss" "body"}
	else				{Add_view "fx_ork_aura_warboss" "SC_AB_FX_Ability_Warboss" "fx_aura"}
	}
	{if prop "LV40k_dlc_prop_troopers_ork_Warboss"	{Delay 4.0 {Call "SC_AB_Call_ability_Ork_Warboss_Spawn_Aura"}}}	
)
	
{On "SC_AB_Call_ability_Ork_Warboss_Spawn_Aura"
	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_ork_warboss) where(basis) args())
	{Delay 8.0 "LV40k_Orks_Warboss_Aura_Delay"	{If not dead	{Call "SC_AB_Call_ability_Ork_Warboss_Spawn_Aura"}}}
}

; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Ork_Warboss"
	{Kill_Delay "LV40k_Orks_Warboss_Aura_Delay"}	; // <- Terminates aura on death...
	{view stop "SC_AB_FX_Ability_Warboss"}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_Ork_Warboss"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_ork_warboss) do({Call "SC_AB_Call_ability_Ork_Warboss_Aura_Effects"}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_ability_Ork_Warboss_Aura_Effects" 
	{if tagged "SC_INF_Tag_Unit_Faction_Orks"
		{if dead
			; [...]
		else tagged "start_personage"						;} // BUZZ: <- prevents personage state orks from triggering FX.
			; [...]
		else prop "LV40k_dlc_prop_troopers_ork_Warboss"		;} // BUZZ: <- prevents warboss aura from buffing himself.
			; [...]
		else
			{if not tagged "SC_AB_Tag_Aura_Warboss"				;{}
				
				; // Buff visual feedback..
				{view start "SC_AB_FX_Ability_Warboss"}	
				{Tags add "SC_AB_Tag_Aura_Warboss"}				
				{Tags add "SC_INF_Tag_Buff_Bul_tier2"}
				
				; // Duration of the buff...
				{Delay 30 "SC_AB_Delay_Ability_Warboss_Duration"
					{Tags remove "SC_AB_Tag_Aura_Warboss"}
					{view pause "SC_AB_FX_Ability_Warboss"}
					{Tags remove "SC_INF_Tag_Buff_Bul_tier2"}
				}
			else
				
				; // Reset buff timeout timer.
				{Kill_Delay "SC_AB_Delay_Ability_Warboss_Duration"}
				
				{Delay 30 "SC_AB_Delay_Ability_Warboss_Duration"
					{Tags remove "SC_AB_Tag_Aura_Warboss"}
					{view pause "SC_AB_FX_Ability_Warboss"}
					{Tags remove "SC_INF_Tag_Buff_Bul_tier2"}
				}
			}
		}
	}
}