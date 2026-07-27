
;	<<<< -------------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / SM Chaplain Aura] ===============] >>
;	<<<<--------------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_SM_Chaplain"
	{Tags remove "SC_AB_Tag_Aura_Chaplain"}

	{if prop "human"	{Add_view "fx_sm_aura_chaplain" "SC_AB_FX_Ability_Chaplain" "body"}
	else				{Add_view "fx_sm_aura_chaplain" "SC_AB_FX_Ability_Chaplain" "fx_head"}
	}
	{if tagged "sc_h_skin_tag_lv40k_spacemarine_chaplain"	{Delay 4.0 {Call "SC_AB_Call_ability_SM_Chaplain_Spawn_Aura"}}}	
)
	
{On "SC_AB_Call_ability_SM_Chaplain_Spawn_Aura"
	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_SM_Chaplain) where(basis) args())
	{Delay 8.0 "LV40k_SM_Chaplain_Aura_Delay"	{If not dead	{Call "SC_AB_Call_ability_SM_Chaplain_Spawn_Aura"}}}
}

; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_SM_Chaplain"
	{Kill_Delay "LV40k_SM_Chaplain_Aura_Delay"}	; // <- Terminates aura on death...
	{view stop "SC_AB_FX_Ability_Chaplain"}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_SM_Chaplain"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_SM_Chaplain) do({Call "SC_AB_Call_ability_SM_Chaplain_Aura_Effects"}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_ability_SM_Chaplain_Aura_Effects" 
	{if tagged "SC_INF_Tag_Unit_Faction_Space_Marines"
		{if dead
			; [...]
		else tagged "start_personage"								;} // BUZZ: <- prevents personage state from triggering FX.
			; [...]
		else tagged "sc_h_skin_tag_lv40k_spacemarine_chaplain"		;} // BUZZ: <- prevents chaplain aura from buffing himself.
			; [...]
		else
			{if not tagged "SC_AB_Tag_Aura_Chaplain"	;{}
				
				; // Buff visual feedback..
				{view start "SC_AB_FX_Ability_Chaplain"}	
				{Tags add "SC_AB_Tag_Aura_Chaplain"}				
				{Tags add "SC_INF_Tag_Buff_Resistance_tier1"}
				
				; // Duration of the buff...
				{Delay 30 "SC_AB_Delay_Ability_Chaplain_Duration"
					{Tags remove "SC_AB_Tag_Aura_Chaplain"}
					{view pause "SC_AB_FX_Ability_Chaplain"}
					{Tags remove "SC_INF_Tag_Buff_Resistance_tier1"}
				}
			else
				
				; // Reset buff timeout timer.
				{Kill_Delay "SC_AB_Delay_Ability_Chaplain_Duration"}
				
				{Delay 30 "SC_AB_Delay_Ability_Chaplain_Duration"
					{Tags remove "SC_AB_Tag_Aura_Chaplain"}
					{view pause "SC_AB_FX_Ability_Chaplain"}
					{Tags remove "SC_INF_Tag_Buff_Resistance_tier1"}
				}
			}
		}
	}
}