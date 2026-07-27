
;	<<<< -------------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / SM Commander Aura] ===============] >>
;	<<<<--------------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_SM_Commander"
	{Tags remove "SC_AB_Tag_Aura_Commander"}
	{Tags remove "SC_AB_Tag_Ability_Chek_SM_Commander"}

	{if prop "human"	{Add_view "fx_litany_defence" "SC_AB_FX_Ability_Commander" "body"}
	else				{Add_view "fx_litany_defence" "SC_AB_FX_Ability_Commander" "fx_aura"}
	}
)

; <<<<	===================	Ability Event: Fire Hand Right	===================	>>>>	

; // BUZZ: AI trigger.
	
(Define "SC_AB_Attack_SM_Commander"
	{if tagged "sc_h_skin_tag_lv40k_spacemarine_Commander"
		{if tagged "_SC_INF_Tag_Bot_Unit"	{if not tagged "SC_AB_Tag_Ability_Chek_SM_Commander"	{if rand 0.03 {Call_synced "SC_AB_Call_Ability_SM_commander_warcry"}}}}
	}
)

; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_SM_Commander"
	{view stop "SC_AB_FX_Ability_Commander"}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_SM_Commander"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_SM_Commander) do({Call "SC_AB_Call_ability_SM_Commander_Aura_Effects"}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_SM_commander_warcry"
	{if tagged "sc_h_skin_tag_lv40k_spacemarine_Commander"
		{if tagged "SC_AB_Tag_Ability_Chek_SM_Commander"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else
			{Tags add "SC_AB_Tag_Ability_Chek_SM_Commander"}	{Delay 300 "SC_AB_Delay_Ability_SM_Commander" {Tags remove "SC_AB_Tag_Ability_Chek_SM_Commander"}}
			
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_sm_commander) where(basis) args())
			{Spawn "fx_sm_warcry_ability" "basis" x}
		}
	}
}

{on "SC_AB_Call_ability_SM_Commander_Aura_Effects" 
	{if tagged "SC_INF_Tag_Unit_Faction_Space_Marines"
		{if dead
			; [...]
		else tagged "start_personage"								;} // BUZZ: <- prevents personage state from triggering FX.
			; [...]
		else
			{if not tagged "SC_AB_Tag_Aura_Commander"	;{}
				
				; // Buff visual feedback..
				{view start "SC_AB_FX_Ability_Commander"}	
				{Tags add "SC_AB_Tag_Aura_Commander"}				
				{Tags add "SC_INF_Tag_Buff_Bul_tier3"}

				{talk "angry_brsrk"} ("SC_M_Talk_Define_V_angry_brsrk")	; // <- define for fauna troops
			
				{if tagged "sc_h_skin_tag_lv40k_spacemarine_Commander"
					{Tags add "SC_AB_Tag_Ability_Chek_SM_Commander"}	{Delay 300 "SC_AB_Delay_Ability_SM_Commander" {Tags remove "SC_AB_Tag_Ability_Chek_SM_Commander"}}
				}
				
				; // Duration of the buff...
				{Delay 30 "SC_AB_Delay_Ability_Commander_Duration"
					{Tags remove "SC_AB_Tag_Aura_Commander"}
					{view pause "SC_AB_FX_Ability_Commander"}
					{Tags remove "SC_INF_Tag_Buff_Bul_tier3"}
				}
			}
		}
	}
}