
;	<<<< ----------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / SM Apothecary] ===============] >>
;	<<<<------------------------------------------------------------------------>>>>			 

; <<<<	===================	Ability Event: Spawn	===================	>>>>	

(Define "SC_AB_Spawn_SM_Apothecary"
	{tags remove "SC_AB_Tag_Ability_SM_Apothecary"}
	{tags remove "SC_AB_Tag_Ability_Chek_SM_Apothecary"}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_SM_Apothecary"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_sm_apothecary) do({Call "SC_AB_Call_ability_SM_Apothecary_Effects"}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_SM_apothecary_heal"
	{if tagged "sc_h_skin_tag_lv40k_spacemarine_apothecary"
		{if tagged "SC_AB_Tag_Ability_Chek_SM_Apothecary"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else
			{Tags add "SC_AB_Tag_Ability_Chek_SM_Apothecary"}	{Delay 600 "SC_AB_Delay_Ability_SM_Apothecary_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_SM_Apothecary"}}
			
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_sm_apothecary) where(basis) args())
			{Spawn "fx_sm_techmarine_ability" "basis" x}
		}
	}
}

{on "SC_AB_Call_ability_SM_Apothecary_Effects" 
	{if tagged "SC_INF_Tag_Unit_Faction_Space_Marines"
		{if dead
			; [...]
		else tagged "start_personage"		;} // BUZZ: <- prevents personage state orks from triggering FX.
			; [...]
		else tagged "SC_AB_Tag_Ability_SM_Apothecary"
			; [...]
		else
			{Tags add "SC_AB_Tag_Ability_SM_Apothecary"}
			{Delay 0.5	{Tags remove "SC_AB_Tag_Ability_SM_Apothecary"}}
			
			{if tagged "sc_h_skin_tag_lv40k_spacemarine_apothecary"
				{Tags add "SC_AB_Tag_Ability_Chek_SM_Apothecary"}	{Delay 600 "SC_AB_Delay_Ability_SM_Apothecary_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_SM_Apothecary"}}
			}
			
			{Delay 0.1	
				{if not dead
					{Spawn "heal" "basis" x}
					("SC_INF_Define_Heal" c(600))
				}
			}
		}
	}
}