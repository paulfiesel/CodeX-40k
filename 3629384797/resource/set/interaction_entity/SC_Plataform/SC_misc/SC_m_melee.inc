
;	<<<< -------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Misc Melee Behaviour ===============] >>
;	<<<<--------------------------------------------------------------------------------------->>>>			 

(Define "SC_Misc_Melee_Define_Spawn_1_CTC"
	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(%c) where(%where) args(%args))
	
	; // BUZZ: SPAWN TWICE IN MP MATCHES TO PREVENT HIT NOT REGISTERING.
	(mod "mp"
		{delay 0.01
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(%c) where(%where) args(%args))
		}
	)
)
(Define "SC_Misc_Melee_Define_Spawn_CTC"
	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(%c) where(%where) args())
	
	; // BUZZ: SPAWN TWICE IN MP MATCHES TO PREVENT HIT NOT REGISTERING.
	(mod "mp"
		{delay 0.01
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(%c) where(%where) args())
		}
	)
)

; // BUZZ: Shared prop between troopers and a few vehicles.

{"SC_plataform_prop_misc_melee"
	{on spawn
		{tags remove "SC_M_Melee_Tag_ranged_stance"}
		{tags remove "SC_M_Melee_Tag_melee_stance"}
		
		{add_view "fx_sc_plataform_fauna_trooper_melee_stance"		"melee_stance"		"Sc_stance_fx" not_manual}
		{add_view "fx_sc_plataform_fauna_trooper_ranged_stance"		"ranged_stance"		"Sc_stance_fx" not_manual}
		
		{view pause "melee_stance"}
		{view pause "ranged_stance"}
		
		{Delay 0.01 {call "SC_M_Melee_Melee_Stance"}}
		
		{Call "SC_M_Melee_Priority_Test"}
	}
	
	; <<<<	===================	SC Misc Melee: Switch Stances	===================	>>>>

	{on "SC_M_Melee_Ranged_Stance"
		{tags add "SC_M_Melee_Tag_ranged_stance"}
		{tags remove "SC_M_Melee_Tag_melee_stance"}
		
		{view start ally "ranged_stance"}
		{view pause "melee_stance"}
	}
	{on "SC_M_Melee_Melee_Stance"
		{tags add "SC_M_Melee_Tag_melee_stance"}
		{tags remove "SC_M_Melee_Tag_ranged_stance"}
		
		{view start ally "melee_stance"}
		{view pause "ranged_stance"}
	}
	{on "SC_M_Melee_Toggle_Stance"
		{if tagged "SC_M_Melee_Tag_melee_stance"
			{call "SC_M_Melee_Ranged_Stance"}
		else
			{call "SC_M_Melee_Melee_Stance"}
		}
	}
	
	; <<<<	===================	SC Misc Melee: Stop VFX	===================	>>>>

	{on "die"	;{} // FOR FAUNAS AND HUMANS.
		{view pause "melee_stance"}
		{view pause "ranged_stance"}
	}
	{on break	;{} // FOR VEHICLES.
		{view pause "melee_stance"}
		{view pause "ranged_stance"}
	}
}

{"vaisefode"

	; <<<<	===================	SC Misc Melee: Melee/Ranged Switch Priority	===================	>>>>
	
	; // this is experimental
	
	; // AI Switch logic - If has prop "SC_plataform_prop_misc_melee_prioritize_ranged" then:
	
	; //	* Spawns with melee disabled - If player takes control over it, then enable.
	
	; //	* If the unit is hit by a melee effector, then enable melee for AI.
	
	; //	* After melee is enabled for AI, it will check a rand to force disable it again upon the following events: move or fire (ranged)
	; // 		* Melee will shut down anyways after 16s it mentioned triggers arent sucesseful.
	
	{On "SC_M_Melee_Priority_Test"
		{tags remove "do_not_disable_melee"}
		{tags remove "AI_force_ranged"}
		{weapon_work "melee" 1}
		
		{Delay 0.1
			{if prop "SC_plataform_prop_misc_melee_prioritize_ranged"
				{tags add "AI_force_ranged"}	
				{weapon_work "melee" 0}		
			}
		}
	}
	(Define "SC_M_Melee_Enable_for_AI"
		{if not tagged "sc_fsm_tag_FSM_STATE_MELEE"	
			{if not tagged "do_not_disable_melee"
				{tags add "do_not_disable_melee"}	{delay 3.0 {tags remove "do_not_disable_melee"}}
				{tags remove "AI_force_ranged"}
				
				{weapon_work "melee" 1}	; <- problem is here somehow
			
				;// {if prop "SC_prop_infantry_generic"	{if not dead	{auto_operatable 1}}
				;// else								{if work "body"	{auto_operatable 1}}
				;//}
			else
				{Kill_delay "dkok"} {delay 3.0 "dkok" {tags remove "do_not_disable_melee"}}
			}
		}
	)
	{On contact 
		{if effector "SC_prop_contactor_melee"	
			("SC_M_Melee_Enable_for_AI")
		}
	}
	{on turn on
		{if prop "SC_plataform_prop_misc_melee_prioritize_ranged" 
			{if active	("SC_M_Melee_Enable_for_AI")}
		}
	}
	{on move on 
		{if prop "SC_plataform_prop_misc_melee_prioritize_ranged" 
			{if active	("SC_M_Melee_Enable_for_AI")}
		}
	}
	{On "Aiming_Request" 
		(Mod not "mp"
			{if active	("SC_M_Melee_Enable_for_AI")}
		)
	}
	{On "Aiming_End" 
		(Mod not "mp"
			{if active	{tags remove "do_not_disable_melee"}}
		)
	}
	
	{on fire "weapon"	{if prop "SC_plataform_prop_misc_melee_prioritize_ranged" {If rand 0.32 {Call_synced "SC_M_Melee_Ranged_Switch"}}}}
	{on fire "weapon1"	{if prop "SC_plataform_prop_misc_melee_prioritize_ranged" {If rand 0.16 {Call_synced "SC_M_Melee_Ranged_Switch"}}}}
	{on fire "weapon2"	{if prop "SC_plataform_prop_misc_melee_prioritize_ranged" {If rand 0.16 {Call_synced "SC_M_Melee_Ranged_Switch"}}}}
	{on fire "weapon3"	{if prop "SC_plataform_prop_misc_melee_prioritize_ranged" {If rand 0.16 {Call_synced "SC_M_Melee_Ranged_Switch"}}}}
	{on fire "weapon4"	{if prop "SC_plataform_prop_misc_melee_prioritize_ranged" {If rand 0.16 {Call_synced "SC_M_Melee_Ranged_Switch"}}}}
	{on fire "weapon5"	{if prop "SC_plataform_prop_misc_melee_prioritize_ranged" {If rand 0.16 {Call_synced "SC_M_Melee_Ranged_Switch"}}}}
	
	{On "SC_M_Melee_Ranged_Switch" 
		{if not active
			{if not tagged "do_not_disable_melee"
				{if not tagged "AI_force_ranged"
					{tags add "AI_force_ranged"}
					{weapon_work "melee" 0}

					{auto_operatable 0}
					{delay 0.1 "SC_M_Melee_Ranged_Switch_delay"	
						{if prop "SC_prop_infantry_generic"	{if not dead	{auto_operatable 1}}
						else								{if work "body"	{auto_operatable 1}}}
					}
					{delay 16.0 "SC_M_Melee_Ranged_Switch_delay"
						{weapon_work "melee" 1}
						{tags remove "AI_force_ranged"}
					}
				}
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	; // Scrapped scripts 
	
	
;//	{on spawn 
	;//	(mod "mp"	; // test to auto dissmiss AI squads
	;//		{Delay 0.1 
	;//			{auto_operatable 0}
	;//			{able select 0}
	;//			{delay 0.1
	;//				{auto_operatable 1}
	;//				{able select 1}
	;//			}
	;//		}
	;//	)
	;//	{tags remove "SC_M_Melee_Tag_Forced_Update_Attempted"}
	;//	{call "SC_M_Melee_Pathfinding_Update"}

;//	}
	
	; <<<<	===================	SC FSM Request: Pathfiding Improvements	===================	>>>>

;//	{on bullet_hit;}
;//		{if hit_side back	{if rand 0.33 {Call_synced "SC_M_Melee_Force_Path_Update"}}}
;//	}
;//	{on blast_hit;}
;//		{if hit_side back	{if rand 0.66 {Call_synced "SC_M_Melee_Force_Path_Update"}}}
;//	}
	{##on "SC_M_Melee_Force_Path_Update"
		{if not tagged "SC_M_Melee_Tag_Forced_Update_Attempted"
			{tags add "SC_M_Melee_Tag_Forced_Update_Attempted"}	{Delay 2.0 {tags remove "SC_M_Melee_Tag_Forced_Update_Attempted"}}
			{Kill_delay "SC_M_Melee_Delay_Pathfinding"} {call "SC_M_Melee_Force_Pathfinding_Update"}
		}
	}
	{##on "SC_M_Melee_Pathfinding_Update"
		{if not dead 
			{if not tagged "exploded"
				{delay 1 4 "SC_M_Melee_Delay_Pathfinding" {Call_synced "SC_M_Melee_Pathfinding_Update"}}	;	// BUZZ: <- might not be a good idea!
				{if not active
					{if tagged "sc_m_melee_tag_melee_stance"
						{auto_operatable 0}	{delay 0.01 {auto_operatable 1}}
					}
				}
			}
		}
	}
}