
;	<<<< --------------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Hiveguard Healing] ===============] >>
;	<<<<---------------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Tyr_Hiveguard"
	{Tags remove "SC_AB_Tag_Ability_Chek_Shieldwall"}
	{Tags remove "SC_AB_Tag_Ability_Shieldwall_Cooldown"}
	{Tags remove "SC_AB_Tag_Ability_Tyr_Guard_Bot_Heal_Signal"}
)
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Tyr_Hiveguard"
)

; <<<<	===================	Ability Event: Damage	===================	>>>>	

; // Bot Usage of ability.

{On "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"
	{Tags add "SC_AB_Tag_Ability_Tyr_Guard_Bot_Heal_Signal"}	
}

(Define "SC_AB_Define_Ability_Tyr_Hiveguard_Bot_Unit_Heal_Process"
	{If tagged "SC_AB_Tag_Ability_Tyr_Guard_Bot_Heal_Signal"
		{Delay 20.0 "SC_AB_Tag_Ability_Tyr_Guard_Bot_Heal_Signal_Delay"
			{Call "SC_AB_Call_Ability_Tyr_Hiveguard_Heal"}
		}
	}
)

(Define "SC_AB_Define_Ability_Tyr_Hiveguard_Bot_Reset_Process"		
	{if prop "LV40k_dlc_prop_troopers_Tyr_Hiveguard"
		{if tagged "_SC_INF_Tag_Bot_Unit"						; {}
			{if tagged "SC_AB_Tag_Ability_Tyr_Guard_Bot_Heal_Signal" 
				{KilL_Delay "SC_AB_Tag_Ability_Tyr_Guard_Bot_Heal_Signal_Delay"}	
				("SC_AB_Define_Ability_Tyr_Hiveguard_Bot_Unit_Heal_Process")
			}
		}
	}
)

; // Bot unit firing melee or ranged will reset timer!
(Define "SC_AB_Attack_Melee_Tyr_Hiveguard"		("SC_AB_Define_Ability_Tyr_Hiveguard_Bot_Reset_Process"))
(Define "SC_AB_Attack_Tyr_Hiveguard"	("SC_AB_Define_Ability_Tyr_Hiveguard_Bot_Reset_Process"))

(Define "SC_AB_Damage_Tyr_Hiveguard"
	{if prop "LV40k_dlc_prop_troopers_Tyr_Hiveguard"
	
		{if tagged "_SC_INF_Tag_Bot_Unit"	; {}
			
			{If not tagged "SC_AB_Tag_Ability_Tyr_Guard_Bot_Heal_Signal"
					
				; // Bullet hit
				{if stuff "shell size1"							{If rand 0.1 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}	
				else stuff "shell size2"						{If rand 0.4 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				else stuff "shell"								{If rand 0.7 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				else stuff "rocketlauncher"						{If rand 0.2 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				else stuff "SC_veryhigh_human_armor_piercing"	{If rand 0.03 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				else stuff "SC_bullet_plasma"					{If rand 0.02 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				else stuff "SC_high_human_armor_piercing"		{If rand 0.01 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				}
				
				; // Blast hit
				{if min_energy 15								{Call "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}
				else min_energy 10								{If rand 0.5 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				else min_energy 5								{If rand 0.25 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				}
				
				; // Melee Combat
				{if tagged "SC_contact_melee_t4_cooldown" 		{If rand 0.2 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}	
				else tagged "SC_contact_melee_t5_cooldown" 		{If rand 0.4 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				else tagged "SC_contact_melee_t6_cooldown" 		{If rand 0.8 {Call_Synced "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}}
				else tagged "SC_contact_melee_t7_cooldown" 		{Call "SC_AB_Call_Ability_Tyr_Hiveguard_SC_INF_Tag_Bot_Unit_Signal"}
				}
				
				("SC_AB_Define_Ability_Tyr_Hiveguard_Bot_Unit_Heal_Process")
			}
		}
	}
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_Tyr_Hiveguard_Heal"
	{if prop "LV40k_dlc_prop_troopers_Tyr_Hiveguard"
		{if tagged "SC_AB_Tag_Ability_Shieldwall_Cooldown"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else tagged "SC_AB_Tag_Ability_Chek_Shieldwall"
				{Damage_Report "basis"	"<f(impact)><c(FF7F00)>Ability already active!"}
		else dead
			; [...]
		else
			{Tags add "SC_AB_Tag_Ability_Chek_Shieldwall"}
			{Call "SC_TP_Request_Call_Anm_LV40k_Hiveguard_Shieldwall"}
			
			; // BUZZ: Cooldown tag is handled in the FSM animator handler.
			
			{Damage_Report "basis"	"<f(impact)><c(FFC0CB)>SHIELDWALL ON!"}
		}
	}
}