
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Ork Waaagh] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Ork_Waaagh"
	{Tags remove "SC_AB_Tag_Ability_Chek_Waaagh"}
	{Tags remove "SC_AB_Tag_Aura_Waaagh"}
	{Tags remove "SC_AB_Tag_Can_Use_AB_Ork_Waaagh"}

	; // BUZZ: who can use this ability:
	{Delay 1.0	{if tagged "SC_INF_Tag_Unit_Faction_Orks"	{tags add "SC_AB_Tag_Can_Use_AB_Ork_Waaagh"}}}
	
	{if prop "human"	{Add_view "fx_litany_defence" "SC_AB_FX_Ability_Waaagh" "Body"}
	else				{Add_view "fx_litany_defence" "SC_AB_FX_Ability_Waaagh" "fx_aura"}
	}
)
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Ork_Waaagh"
	{view stop "SC_AB_FX_Ability_Waaagh"}
)

; <<<<	===================	Ability Event: Fire Hand Right	===================	>>>>	

(Define "SC_AB_Fire_Hand_Right_Ork_Waaagh"

	; // BUZZ: AI trigger.
	{if tagged "SC_INF_Tag_Unit_Faction_Orks"
		{if tagged "_bot"	{if not tagged "SC_AB_Tag_Ability_Chek_Waaagh"	{if rand 0.03 {Call_synced "SC_AB_Call_Ability_Ork_Waaagh"}}}}
	}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_Ork_Waaagh"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_ork_waaagh) do({Call "SC_AB_Call_ability_Ork_Waaagh_Effects"}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_Ork_Waaagh"
	{if tagged "SC_AB_Tag_Can_Use_AB_Ork_Waaagh"
		{if not tagged "sc_h_skin_tag_skeleton_lv40k_orkgrot"	;} // BUZZ: <- prevents grots from triggering it.
			
			{if not tagged "SC_AB_Tag_Ability_Chek_Waaagh"
				{Tags add "SC_AB_Tag_Ability_Chek_Waaagh"}	{Delay 180 "SC_AB_Delay_Ability_Waaagh_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Waaagh"}}
				
				{Spawn "waagh" "basis" x}
				("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_ork_waaagh) where(basis) args())
			else
				{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
			}
		}
	}
}

{on "SC_AB_Call_ability_Ork_Waaagh_Effects" 
	{if not dead
		{if not tagged "start_personage"	;} // BUZZ: <- prevents personage state orks from triggering FX.
		
			{if tagged "SC_AB_Tag_Can_Use_AB_Ork_Waaagh"
				{if not tagged "SC_AB_Tag_Aura_Waaagh"
					{Tags add "SC_AB_Tag_Ability_Chek_Waaagh"}	{Delay 180 "SC_AB_Delay_Ability_Waaagh_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Waaagh"}}
					
					; // Buff visual feedback..
					{if rand 0.6	{talk "angry_brsrk"}} 
					("SC_M_Talk_Define_V_angry_brsrk")	; // <- fauna troops
					
					{Damage_Report "basis"	"<f(impact)><c(GREEN)>WAAAAGH!"}
					{view start "SC_AB_FX_Ability_Waaagh"}	
					
					; // Buff unit effects [Healing and Damage boost]	----	Heals "X" hp per use
					{Delay 0.1	
						{if not dead
							{if prop "human" 	
								{if tagged "sc_h_skin_tag_skeleton_lv40k_orkgrot"					
									{health_damage_count -50	{effects "" "" "" "" ""}}	
								else tagged "sc_h_skin_tag_skeleton_lv40k_orknob"		
									{health_damage_count -300	{effects "" "" "" "" ""}}	
								else		
									{health_damage_count -200	{effects "" "" "" "" ""}}	
								}
							else prop "SC_plataform_prop_troopers_size1"	{health_damage_count -600	{effects "" "" "" "" ""}}	{Call "SC_TP_EXP_Call_Clear_Tags_bullet_debug"}
							else prop "SC_plataform_prop_troopers_size2"	{health_damage_count -1200	{effects "" "" "" "" ""}}	{Call "SC_TP_EXP_Call_Clear_Tags_bullet_debug"}
							else prop "SC_plataform_prop_troopers_size3"	{health_damage_count -2400	{effects "" "" "" "" ""}}	{Call "SC_TP_EXP_Call_Clear_Tags_bullet_debug"}
							}
						}
					}
					{Tags add "SC_AB_Tag_Aura_Waaagh"}				
					{Tags add "SC_INF_Tag_Buff_Bul_tier2"}
					
					; // Duration of the buff...
					{Delay 30 "SC_AB_Delay_Ability_Waaagh_Duration"
						{Tags remove "SC_AB_Tag_Aura_Waaagh"}
						{view pause "SC_AB_FX_Ability_Waaagh"}
						{Tags remove "SC_INF_Tag_Buff_Bul_tier2"}
					}
				else
					; // Reset buffs timeout timer.
					
					{Kill_delay "SC_AB_Delay_Ability_Waaagh_Cooldown"}
					{Kill_delay "SC_AB_Delay_Ability_Waaagh_Duration"}
					
					; // Remember to also reset ability cooldown!
					
					{Tags add "SC_AB_Tag_Ability_Chek_Waaagh"}	{Delay 180 "SC_AB_Delay_Ability_Waaagh_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Waaagh"}}
					
					{Delay 30 "SC_AB_Delay_Ability_Waaagh_Duration"
						{view pause "SC_AB_FX_Ability_Waaagh"}
						{Tags remove "SC_AB_Tag_Aura_Waaagh"}
						{Tags remove "SC_INF_Tag_Buff_Bul_tier2"}
					}
				}
			}
		}
	}
}