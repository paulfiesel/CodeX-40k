
;	<<<< ----------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Infantry Generic: Panel Control Abilities ===============] >>
;	<<<<------------------------------------------------------------------------------>>>>			 

{"SC_prop_abilities_generic"			; {}

	(Include "SC_abilities/SC_ab_LV40k_ork_Painboy.inc")
	(Include "SC_abilities/SC_ab_LV40k_Ork_Weirdboy.inc")
	(Include "SC_abilities/SC_ab_LV40k_ork_mekboy.inc")
	(Include "SC_abilities/SC_ab_LV40k_ork_waaagh.inc")
	(Include "SC_abilities/SC_ab_LV40k_ork_warboss.inc")
	(Include "SC_abilities/SC_ab_LV40k_tyr_ravener.inc")
	(Include "SC_abilities/SC_ab_LV40k_tyr_synapse_1.inc")
	(Include "SC_abilities/SC_ab_LV40k_tyr_lictor.inc")
	(Include "SC_abilities/SC_ab_LV40k_tyr_hiveguard.inc")
	(Include "SC_abilities/SC_ab_LV40k_tyr_tervigon.inc")
	(Include "SC_abilities/SC_ab_LV40k_tyr_venomthrope.inc")
	(Include "SC_abilities/SC_ab_LV40k_sm_Knight_warhorn.inc")
	(Include "SC_abilities/SC_ab_LV40k_sm_TM_tarantula_HB.inc")
	(Include "SC_abilities/SC_ab_LV40k_sm_Terminator.inc")
	(Include "SC_abilities/SC_ab_LV40k_sm_Landraider.inc")
	(Include "SC_abilities/SC_ab_LV40k_sm_Librarian.inc")
	(Include "SC_abilities/SC_ab_LV40k_sm_Apothecary.inc")
	(Include "SC_abilities/SC_ab_LV40k_sm_Chaplain.inc")
	(Include "SC_abilities/SC_ab_LV40k_sm_Commander.inc")
		
	; // BUZZ: this define is also being used under human skin define checker.
	(Define "SC_Abilities_Define_Spawn_Event"
		{Tags remove "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"}
		
		{Delay 0.5
			("SC_AB_Spawn_Ork_Waaagh")
			("SC_AB_Spawn_Ork_Weirdboy")
			("SC_AB_Spawn_Ork_Painboy")
			("SC_AB_Spawn_Ork_Warboss")
			("SC_AB_Spawn_Tyr_Synapse_1")
			("SC_AB_Spawn_Tyr_Lictor")
			("SC_AB_Spawn_Tyr_Hiveguard")
			("SC_AB_Spawn_Tyr_Tervigon")
			("SC_AB_Spawn_Tyr_Venomthrope")
			("SC_AB_Spawn_SM_Landraider")
			("SC_AB_Spawn_SM_Knight_Warhorn")
			("SC_AB_Spawn_SM_Terminator")
			("SC_AB_Spawn_SM_Librarian")
			("SC_AB_Spawn_SM_Apothecary")
			("SC_AB_Spawn_SM_Chaplain")
			("SC_AB_Spawn_SM_Commander")
		}
		
		; // BUZZ: To test BOT Abilities in editor remove this here tag...
		; // BUZZ: Controls AI BOT ability triggers		
;//		(Mod "mp"
			{Tags remove "_SC_inf_tag_bot_unit"} 
			{Delay 0.01 
				{If not user_control
					{if prop "SC_plataform_prop_vehicle_Auto"
						{if work "body" {Tags add "_SC_inf_tag_bot_unit"}}
						
					else prop "GEM_vehicle"
						{if operatable {Tags add "_SC_inf_tag_bot_unit"}}
						
					else
						{Tags add "_SC_inf_tag_bot_unit"}
					}
				}
			}	
;//		)
	)
	{on Spawn
		{if not prop "human"	
			("SC_Abilities_Define_Spawn_Event")		; {} // <- BUZZ: This event is called elsewhere for humans, it must be loaded after skin tags are properly defined.
		}
		{Call "SC_Abilities_Call_Check_Team_Tag"}
	}

	; <<<<	===================	SC Abilities: Place Objects Event ===================	>>>>
	
	; // BUZZ: this is called by "interface/action" for all place object type abilities.
	
	{on "SC_AB_Call_Ability_Place_Small_Object_1" sync
		{if tagged "SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else terrain_pp "no_pass"
			{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE THIS HERE!"}
		else terrain_pp "water"
			{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE THIS HERE!"}
		else terrain_pp "swamp"
			{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE THIS HERE!"}
		else terrain_fx "shallow_water"
			{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE THIS HERE!"}
		else in_cover
			{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE WHILE IN COVER!"}
		else
			("SC_AB_Place_Small_Object_1_Ork_Mekboy")
			("SC_AB_Place_Small_Object_1_Tyr_Ravener")
			("SC_AB_Place_Small_Object_1_SM_TM_Tarantula_HB")
		}
	}
	
	; <<<<	===================	SC Abilities: Attack Triggers ===================	>>>>
	
	{on "SC_Abilities_Call_Attack"
		("SC_AB_Attack_Ork_Waaagh")
		("SC_AB_Attack_Ork_Weirdboy")
		("SC_AB_Attack_Ork_Painboy")
		("SC_AB_Attack_Tyr_Hiveguard")
		("SC_AB_Attack_Tyr_Tervigon")
		("SC_AB_Attack_SM_Knight_Warhorn")
		("SC_AB_Attack_SM_Commander")
	}
	{on "SC_Abilities_Call_Attack_Melee"
		("SC_AB_Attack_Melee_Tyr_Lictor")
		("SC_AB_Attack_Melee_Tyr_Hiveguard")
	}
	
	; // Humans
	{on fire "hand_right"	{call "SC_Abilities_Call_Attack"}}
	
	; // Vehicles
	{on fire "gun"			{call "SC_Abilities_Call_Attack"}}	
	{on fire "gun1"			{call "SC_Abilities_Call_Attack"}}	
	{on fire "gun2"			{call "SC_Abilities_Call_Attack"}}
	
	; // Fauna troops
	{on fire "weapon"		{call "SC_Abilities_Call_Attack"}}	
	{on fire "weapon1"		{call "SC_Abilities_Call_Attack"}}	
	{on fire "weapon2"		{call "SC_Abilities_Call_Attack"}}	
	{on fire "weapon3"		{call "SC_Abilities_Call_Attack"}}	
	{on fire "weapon4"		{call "SC_Abilities_Call_Attack"}}	
	{on fire "weapon5"		{call "SC_Abilities_Call_Attack"}}	
	{on fire "weapon6"		{call "SC_Abilities_Call_Attack"}}	
	{on fire "weapon7"		{call "SC_Abilities_Call_Attack"}}	
	{on fire "weapon8"		{call "SC_Abilities_Call_Attack"}}	
	{on fire "melee"		{call "SC_Abilities_Call_Attack_Melee"}}
	{on fire "melee1"		{call "SC_Abilities_Call_Attack_Melee"}}

	; <<<<	===================	SC Abilities: Damage Triggers ===================	>>>>
	
	(Define "SC_Abilities_Damage"
		("SC_AB_Damage_Tyr_Lictor")
		("SC_AB_Damage_Tyr_Hiveguard")
		("SC_AB_Damage_Tyr_Tervigon")
		("SC_AB_Damage_SM_Terminator")
	)
	
	{on blast_hit
		("SC_Abilities_Damage")
	}
	{on bullet_hit
		("SC_Abilities_Damage")
	}
	{on contact
		("SC_AB_Contact_Ork_Waaagh")
		("SC_AB_Contact_Ork_Painboy")
		("SC_AB_Contact_Ork_Weirdboy")
		("SC_AB_Contact_Ork_Painboy")
		("SC_AB_Contact_Ork_Warboss")
		("SC_AB_Contact_Tyr_Synapse_1")
		("SC_AB_Contact_SM_Librarian")
		("SC_AB_Contact_SM_Chaplain")
		("SC_AB_Contact_SM_Commander")
		("SC_AB_Contact_SM_Apothecary")
	}
	
	; // For infantry
	{on "die"
		("SC_AB_Die_Ork_Waaagh")
		("SC_AB_Die_Ork_Weirdboy")
		("SC_AB_Die_Ork_Warboss")
		("SC_AB_Die_Ork_Painboy")
		("SC_AB_Die_Tyr_Synapse_1")
		("SC_AB_Die_Tyr_Lictor")
		("SC_AB_Die_Tyr_Hiveguard")
		("SC_AB_Die_Tyr_Tervigon")
		("SC_AB_Die_SM_Chaplain")
		("SC_AB_Die_SM_Commander")
	}
	
	; // For Vehicles
	{on break
		("SC_AB_Break_SM_Landraider")
	}
	{on destroy
		("SC_AB_Destroy_SM_Landraider")
	}
	{on repair
		("SC_AB_Repair_SM_Landraider")
	}
	
	; <<<<	===================	SC Abilities: Team Tag Checker ===================	>>>>
	
	{On "SC_Abilities_Call_Check_Team_Tag"
		{if prop "GEM_vehicle"
			; [...]
		else 
			{Delay 5.0 
				{If tagged "team0"
				else tagged "team1"
				else tagged "team2"
				else tagged "team3"
				else tagged "team4"
				else tagged "team5"
				else tagged "team6"
				else tagged "team7"
				else tagged "team8"
				else tagged "team9"
				else tagged "team10"
				else tagged "team11"
				else tagged "team12"
				else tagged "team13"
				else tagged "team14"
				else tagged "team15"
				else tagged "team16"
				else tagged "team17"
				else
					{if not linked 
						(mod not "mp"
							{Damage_Report "basis"	"<f(impact)><c(RED)>NO TEAM TAG DETECTED! ADDING DEFAULT TAG: <c(white)>TEAM0"}
							{tags add "team0"}
							{delay 0.5 
								{If tagged "team0"
									{Damage_Report "basis" "<f(impact)><c(GREEN)>FOR MELEE: SWAP THE TAG 'TEAM%' LAST NUMBER!"}
								}
							}
						)
						(mod "mp"
							{if not linked "vehicle" {Damage_Report "basis"	"<f(impact)><c(RED)>NO TEAM TAG DETECTED! REPORT TO THE [SC] DEV TEAM!"}}
							{Call "SC_Abilities_Call_Check_Team_Tag"}
						)
						(mod "gametype:campaign_capture_the_flag"		
							{if not linked "vehicle" {Damage_Report "basis"	"<f(impact)><c(RED)>NO TEAM TAG DETECTED! REPORT TO THE [SC] DEV TEAM!"}}
							{Call "SC_Abilities_Call_Check_Team_Tag"}
						)
					}
				}
			}
		}
	}
}