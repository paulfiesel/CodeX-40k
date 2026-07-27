
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Ork Waaagh] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Ork_Waaagh"
	{Tags remove "SC_AB_Tag_Ability_Chek_Waaagh"}
	{Tags remove "SC_AB_Tag_Aura_Waaagh"}

	{if prop "human"	{Add_view "fx_litany_defence" "SC_AB_FX_Ability_Waaagh" "Body"}
	else				{Add_view "fx_litany_defence" "SC_AB_FX_Ability_Waaagh" "fx_aura"}
	}
)
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Ork_Waaagh"
	{view stop "SC_AB_FX_Ability_Waaagh"}
)

; <<<<	===================	Ability Event: Fire Hand Right	===================	>>>>	

(Define "SC_AB_Attack_Ork_Waaagh"

	; // BUZZ: AI trigger.
	{if tagged "SC_INF_Tag_Unit_Faction_Orks"
		{if not prop "GEM_vehicle"
			{if tagged "_SC_INF_Tag_Bot_Unit"	{if not tagged "SC_AB_Tag_Ability_Chek_Waaagh"	{if rand 0.01 {Call_synced "SC_AB_Call_Ability_Ork_Waaagh"}}}}
		}
	}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_Ork_Waaagh"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_ork_waaagh) do({Call "SC_AB_Call_ability_Ork_Waaagh_Effects"}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_Ork_Waaagh"
	{if tagged "SC_INF_Tag_Unit_Faction_Orks"
	
		{if tagged "sc_h_skin_tag_skeleton_lv40k_orkgrot"		;} // BUZZ: <- prevents grots from triggering it (in case some weirdo picks up the hotbar object with a random grot lol).
			; [...]
		else tagged "SC_AB_Tag_Ability_Chek_Waaagh"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else
			{Tags add "SC_AB_Tag_Ability_Chek_Waaagh"}	{Delay 180 "SC_AB_Delay_Ability_Waaagh_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Waaagh"}}
			
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_ork_waaagh) where(basis) args())
			{Spawn "fx_ork_waaagh_ability" "basis" x}
		}
	}
}

{on "SC_AB_Call_ability_Ork_Waaagh_Effects" 
	{if tagged "SC_INF_Tag_Unit_Faction_Orks"
		{if dead
			; [...]
		else tagged "start_personage"			;} // BUZZ: <- prevents "bleeding" state orks from triggering FX.
			; [...]
		else tagged "SC_AB_Tag_Aura_Waaagh"
			; [...]
		else
			{Tags add "SC_AB_Tag_Ability_Chek_Waaagh"}	{Delay 180 "SC_AB_Delay_Ability_Waaagh_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Waaagh"}}
			
			; // Buff visual feedback..
			{talk "angry_brsrk"} ("SC_M_Talk_Define_V_angry_brsrk")	; // <- define for fauna troops
			
			{Damage_Report "basis"	"<f(impact)><c(GREEN)>WAAAAGH!"}
			{view start "SC_AB_FX_Ability_Waaagh"}	
			
			; // Buff unit effects [Healing and Damage boost]	----	Heals "X" hp per use
			{Delay 0.1	
				{if not dead
					{if prop "human" 	
						{if tagged "sc_h_skin_tag_skeleton_lv40k_orkgrot"					
							("SC_INF_Define_Heal" c(100))
						else tagged "sc_h_skin_tag_skeleton_lv40k_orknob"		
							("SC_INF_Define_Heal" c(500))
						else		
							("SC_INF_Define_Heal" c(250))
						}
					else prop "SC_plataform_prop_troopers_size1"	("SC_INF_Define_Heal" c(500))	{Call "SC_TP_EXP_Call_Clear_Tags_bullet_debug"}
					else prop "SC_plataform_prop_troopers_size2"	("SC_INF_Define_Heal" c(1000))	{Call "SC_TP_EXP_Call_Clear_Tags_bullet_debug"}
					else prop "SC_plataform_prop_troopers_size3"	("SC_INF_Define_Heal" c(2000))	{Call "SC_TP_EXP_Call_Clear_Tags_bullet_debug"}
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