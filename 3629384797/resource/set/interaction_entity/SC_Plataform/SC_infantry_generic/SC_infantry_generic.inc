
;	<<<< ---------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Infantry Generic ===============] >>
;	<<<<----------------------------------------------------------------------------------->>>>			 

; // BUZZ: this file contains shared scripts between Faunas and Humans.

{"SC_prop_infantry_generic"
	(Include "SC_inf_talk_trigger/SC_inf_talk_trigger.inc")	
	(Include "SC_inf_damage.inc")	
	
	{On spawn
		("SC_INF_Damage_Define_Spawn_Event")
		
		{tags remove "blasted"}	; // TEST!
		
		("SC_INF_Talk_Trigger_Define_Spawn_Event")
	}
	{on pierce sync
		{if dead 
			; [...]
		else "SC_SH_Main_Flag_Is_Online"		
			; [...]
		else volume "SC_volume_armored"			
			("SC_INF_Damage_Define_Pierced")		; {} // <- Applies piercing logic only to tagged volumes - avoids redundancy.
		}
	}
	{on bullet_hit
		{if "SC_SH_Main_Flag_Is_Online"
			; [...]
		else
			("SC_INF_Damage_Define_Bullet_Hit")
			("SC_INF_Talk_Trigger_Define_Bullet_Hit")
			
			{if not volume "SC_volume_armored"		; {} // <- Applies piercing logic only to tagged volumes 
				("SC_INF_Damage_Define_Pierced")
			else
				{if stuff "shell"			("SC_INF_Damage_Define_Pierced")}
				{if stuff "rocketlauncher"	("SC_INF_Damage_Define_Pierced")}
			}
		}
	}
	{##on blast overload sync 							;// blast-wave contacts a specific volume
		; [...]
	}
	{on blast_hit overload sync							;// blast-wave hits any part of entity
		{if not "SC_SH_Main_Flag_Is_Online"
			("SC_INF_Damage_Define_Blast_Energy")
			("SC_INF_Damage_Define_Blast_Hit")
			("SC_INF_Talk_Trigger_Define_Blast_Hit")
		else
			{Call "SC_SH_Main_Call_Blast"}
		}
	}
	{On contact
		("SC_INF_Damage_Define_Contact")
		("SC_INF_Talk_Trigger_Define_Contact")
	}
	{On "die"
		("SC_INF_Talk_Trigger_Define_Die")
	}
	
	; // Human Troops
	{on fire "hand_right"	
		("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")
	}
	
	; // Fauna troops
	{on fire "weapon"  ("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")}	
	{on fire "weapon1" ("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")}	
	{on fire "weapon2" ("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")}	
	{on fire "weapon3" ("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")}	
	{on fire "weapon4" ("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")}	
	{on fire "weapon5" ("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")}	
	{on fire "weapon6" ("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")}	
	{on fire "weapon7" ("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")}	
	{on fire "weapon8" ("SC_INF_Talk_Trigger_Define_Fire_Hand_Right")}	

}