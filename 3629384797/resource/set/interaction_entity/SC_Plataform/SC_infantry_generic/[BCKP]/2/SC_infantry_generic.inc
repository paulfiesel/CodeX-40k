
;	<<<< ---------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Infantry Generic ===============] >>
;	<<<<----------------------------------------------------------------------------------->>>>			 

; // BUZZ: this file contains shared scripts between Faunas and Humans.

{"SC_prop_infantry_generic"
	(Include "SC_inf_talk_trigger/SC_inf_talk_trigger.inc")	
	
	(Include "SC_inf_abilities.inc")	
	(Include "SC_inf_damage.inc")	
	
	{On spawn
		("SC_INF_Damage_Define_Spawn_Event")
		("SC_INF_Abilities_Define_Spawn_Event")
		("SC_INF_Talk_Trigger_Define_Spawn_Event")
		
		{Call "SC_Infantry_Generic_Call_Check_Team_Tag"}
	}
	{on bullet_hit
		{if not "SC_SH_Main_Flag_Is_Online"
			("SC_INF_Damage_Define_Bullet_Hit")
			("SC_INF_Talk_Trigger_Define_Bullet_Hit")
		}
	}
	{on blast_hit sync ;{}// overload
		{if not "SC_SH_Main_Flag_Is_Online"
			("SC_INF_Damage_Define_Blast_Hit")
			("SC_INF_Talk_Trigger_Define_Blast_Hit")
		}
	}
	{On contact
		("SC_INF_Damage_Define_Contact")
		("SC_INF_Abilities_Define_Contact")
		("SC_INF_Talk_Trigger_Define_Contact")
	}
	{On "die"
		("SC_INF_Abilities_Define_Die")
		("SC_INF_Talk_Trigger_Define_Die")
		
		;{} // BUZZ: Opitimization test!
		{Delay 5.0 
			{Volumes disable blast bullet contact}
		}
	}
	{on fire "hand_right"	
		("SC_INF_Abilities_Define_Fire_Hand_Right")
		("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")
	}
	
	; // Weapon fire event for Fauna troops
	{on fire "weapon"	
		("SC_INF_Abilities_Define_Fire_Hand_Right")
		("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")
	}	
	{on fire "weapon1"	
		("SC_INF_Abilities_Define_Fire_Hand_Right")
		("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")
	}	
	{on fire "weapon2"	
		("SC_INF_Abilities_Define_Fire_Hand_Right")
		("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")
	}	
	{on fire "weapon3"	
		("SC_INF_Abilities_Define_Fire_Hand_Right")
		("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")
	}	
	{on fire "weapon4"	
		("SC_INF_Abilities_Define_Fire_Hand_Right")
		("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")
	}	
	{on fire "weapon5"	
		("SC_INF_Abilities_Define_Fire_Hand_Right")
		("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")
	}	
	
	; <<<<	===================	SC Infantry Generic: Script Tag Checker ===================	>>>>
	
	{On "SC_Infantry_Generic_Call_Check_Team_Tag"
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
				(mod not "mp"
					{Damage_Report "basis"	"<f(impact)><c(RED)>NO TEAM TAG DETECTED! ADDING DEFAULT TAG: <c(white)>TEAM0"}
					{tags add "team0"}
				)
				(mod "mp"
					{if not linked "vehicle" {Damage_Report "basis"	"<f(impact)><c(RED)>NO TEAM TAG DETECTED! ADD A TEAM TAG OR THIS MAY RESULT IN A CRASH!"}}
					{Call "SC_Infantry_Generic_Call_Check_Team_Tag"}
				)
			}
		}
	}
}