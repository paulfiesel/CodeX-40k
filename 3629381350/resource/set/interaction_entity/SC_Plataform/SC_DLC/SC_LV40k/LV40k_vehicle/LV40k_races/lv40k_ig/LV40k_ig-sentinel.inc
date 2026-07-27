
;	<<<< ------------------------------------------------------------------------------------>>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - IG Sentinel ===============] >>
;	<<<<------------------------------------------------------------------------------------->>>>			 

{"ig_Sentinel"
	{on spawn	;{}

		{if tagged "ork_russ"
		else
			{add_view "fx_glow_red_small"		"fx_vehicle_light"	"fx_optics01"}
			{add_view "fx_glow_green_small"		"fx_vehicle_light"	"fx_optics02"}
			{add_view "fx_glow_red_small"		"fx_vehicle_light"	"fx_optics03"}
			{add_view "fx_mark_red_03"			"fx_vehicle_light"	"fx_optics04"}
		}	
		
		; ################# // MAIN WEAPON
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		
		; [...]
	}	
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/exhaust"}
		{link_sound "move"				""}
		{link_sound "brake"				""}
	}
	{on crew in 	
		{view start "fx_vehicle_light"}
	}
	{on crew out	
		{if not crew_in_place "gunner"
			{if not crew_in_place "driver"
				{if not crew_in_place "commander"
					{view pause "fx_vehicle_light"}
				}
			}
		}
	}
	
	; <<<<	===================	Sentinel : Main Weaponry 	===================	>>>>

	{on fire "gun"
		; [...]
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(sentinel_l_leg_ankle) sound(SC_fx/sc_stomp_s2/IH_isegrim))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S1" leg(sentinel_r_leg_ankle) sound(SC_fx/sc_stomp_s2/IH_isegrim))}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Idle 	===================	>>>>
	
	{on ik begin "bip01 spine1"	{Call "SC_Request_Call_Is_Aiming_Checker"}}
	{on ik begin "bip01 spine2"	{Call "SC_Request_Call_Is_Aiming_Checker"}}

	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" loop}  
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.25	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.25	{ani_play "Idle_Lowready2" callback}      		           
		else rand 0.25	{ani_play "Idle_Lowready3" callback}     		           
		else 			{ani_play "Idle_Lowready4" callback}                      
		}
	}
	{on "SC_FSM_TURN_Call_Play_Animations" overload
		{if turn_right
			{ani_play "Turn_Right1" -1 loop}	
		else
			{ani_play "Turn_Left1" loop}	
		}
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload
		{If tagged "fwd"
			{ani_play "Run_Aiming1" loop}	
		else
			{ani_play "Run_Aiming2" -1 loop}	
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
    	{ani_play "death" callback}
  	}
	
	{On "SC_FSM_DEATH_Call_Post_Death_Animation" sync
		; [...]
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Melee Attack 	===================	>>>>

	{on "SC_FSM_MELEE_Call_Play_Animations"  
		; [...]
	}
}