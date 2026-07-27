
;	<<<< --------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: [MP] Human Crew ===============] >>
;	<<<<---------------------------------------------------------------------------------->>>>			 

; <<<<	===================	Human Crew: Defines	===================	>>>>	

(Define "SC_H_Crew_Define_Skin_T_Crew_Bailout"
	else effector "%v";
		{if not tagged "sc_h_skin_tag_skeleton_defined"
			{tags add "%t"}
			{tags add "sc_h_skin_tag_skeleton_defined"}
			
			("SC_H_Skin_Define_Spawn_Event")
		}
)

(Define "SC_H_Crew_Define_Skin_T_Crew"
	{if not tagged "sc_h_skin_tag_skeleton_defined"
		{if linked "%v"
			{if place "%p"
				{tags add "%t"}
				{tags add "sc_h_skin_tag_skeleton_defined"}
				
				("SC_H_Skin_Define_Spawn_Event")
				{delay 0.2 {ani_play "%a"}}
			}
		}
	}
)

(Define "SC_H_Crew_Define_Link_Human_To_Callin"
	{auto_operatable 0} {able select 0}	{able minimap 0} {bone hide "basis"}
	{volumes disable bullet blast touch select visible}

	{Delay 0.1 
		{player -1}		; // <- delay is necessary to give triggers enough time to correctly assign Player tags.
		{if user_control
			{tags add "player"}
		else
			{tags add "_bot"}
			{tags add "_ai"}
		}
	}
)

; <<<<	===================	Human Crew: Spawn	===================	>>>>	

; // ATENTION: THE CREW TAGS AND ANIMATIONS MUST BE ASSIGNED ACCORDING TO THE CORRECT CREW PLACE THEY ARE SPAWNED (EX: spawned as gunner -> tag)
; // ATENTION: IN CASE YOU ASSIGN A CREW TAG TO A VEHICLE THAT DOES NOT HAVE SAID CREW IN MARKED PLACE THE UNIT WILL BE SPAWNED INVISIBLE AND MAY LEAD TO CRASH.

{On "SC_H_Crew_Call_Spawn_Event" 
	{delay 0.1
		{if linked "SC_prop_veh_crew_disable_blast"
			{volumes disable blast}
		}
	}
	{if not tagged "sc_h_skin_tag_skeleton_defined"
		{if linked "sc_plataform_prop_mp_callin_spawn_troops" ;{}
		
			("SC_H_Crew_Define_Link_Human_To_Callin")

			(mod "mp"
				(include "/set/interaction_entity/SC_plataform/SC_DLC/SC_LV40k/LV40k_human/LV40k_crew_callin.inc")
				(include "/set/interaction_entity/SC_plataform/SC_DLC/SC_HALO/HALO_human/HALO_crew_callin.inc")
				
			)			
		else
			(mod "mp"
				(include "/set/interaction_entity/SC_plataform/SC_DLC/SC_LV40k/LV40k_human/LV40k_crew_spawn.inc")
				(include "/set/interaction_entity/SC_plataform/SC_DLC/SC_HALO/HALO_human/HALO_crew_spawn.inc")
			)
		}
	}
}

; <<<<	===================	Human Crew: Board	===================	>>>>	

; // BUZZ: when using effector calls with "Board" ensure that you are handling an actor effector - otherwise will crash (actor.bup).
; // BUZZ: board is also called for soldiers when they enter buildings.
; // BUZZ: it appears that "Board" also is called for soldiers when vaulting.

; // BUZZ: vehicles that can only be crewed by a certain type.
(Define "SC_H_Crew_Define_Vehicle_Restriction_Only_Crew"
	{if effector "%v"
		{if not tagged "%tag" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
	}
)

; // BUZZ: vehicles that cannot be crewed by a certain type.
(Define "SC_H_Crew_Define_Vehicle_Restriction"
	{if tagged "%tag"
		{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
	}
)

(Define "SC_H_Crew_Define_Vehicle_Restriction_Allow_Passenger"
	{if tagged "%tag"
		{if place "driver"		{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "gunner"		{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "gunner1"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "gunner2"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "gunner3"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "gunner4"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "gunner5"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "gunner6"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "charger"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "charger1"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "charger2"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "charger3"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else place "commander"	{if effector "%v" {with_effector {delay 0.1 {damage_report "basis" "INVALID CREW MEMBERS!"} {crew_emit}}}}
		else
		}
	}
)

{On board in
	{if effector "SC_prop_veh_crew_disable_blast"
		{volumes disable blast}
	}
	{if effector "sc_plataform_prop_mp_callin_spawn_troops" 
		("SC_H_Crew_Define_Link_Human_To_Callin")
	else
		{if effector "vehicle"
			("SC_H_Request_Define_Crew_In")
			("SC_Allegiance_Define_Change_Effector_To_Same_Tag" effector(vehicle) check(not able "any_crew"))	
			
			(include "/set/interaction_entity/SC_plataform/SC_DLC/SC_LV40k/LV40k_human/LV40k_crew_restrictions.inc")
			(include "/set/interaction_entity/SC_plataform/SC_DLC/SC_HALO/HALO_human/HALO_crew_restrictions.inc")
		}
	}
}

; // BUZZ: 

{On board out 
	{if effector "SC_prop_veh_crew_disable_blast"
		{if not dead {volumes enable blast}}	; // <- i believe this is causing .ebf crashes, revisit later
	}
	{if effector "sc_plataform_prop_mp_callin_spawn_troops"	
		{if not tagged "SC_H_Crew_CLL_Tag_Deploy"	{delete}	{with_effector	{drop_orders}}}	; // BUZZ: <- this deletes the soldier if you forcefully try to emit him from a call-in.
	}
	{If effector "vehicle" ("SC_H_Request_Define_Crew_Out")
	
		(mod "mp"
			{if effector "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" ;{}
				(include "/set/interaction_entity/SC_plataform/SC_DLC/SC_LV40k/LV40k_human/LV40k_crew_bail.inc")
				(include "/set/interaction_entity/SC_plataform/SC_DLC/SC_HALO/HALO_human/HALO_crew_bail.inc")
			}
		)
	}
}

