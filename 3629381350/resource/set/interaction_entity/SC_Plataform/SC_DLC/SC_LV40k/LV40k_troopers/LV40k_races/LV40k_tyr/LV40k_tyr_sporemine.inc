
;	<<<< -------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Sporemine ===============] >>
;	<<<<--------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Sporemine"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		{Add_view "tyr_synapse_med"	"lv40k_sporemine_fx"	"master"}
		{Add_view "ava-light-g-m2"	"lv40k_sporemine_fx"	"master"}
		{View start "lv40k_sporemine_fx"}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload		
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{ani_play "Idle_Lowready1" callback}                         	                       	
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload			
		{ani_play "Run_Aiming1" loop}
	}
	{on "process_bullet_hit"	
		{call "die"}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	 
		{Delay 0.1 {If not tagged "Exploding" {Call "LV40k_tyr_sporemine_explode"}}}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on fire "melee" Sync
		{Reset_manual_control}
		{Tags add "exploding"}
		{Call "LV40k_tyr_sporemine_explode"}
	}
	{on "LV40k_tyr_sporemine_explode" 
		{spawn "tyr_sporemine_grenade" "basis" x {stuff_detonate}}
		{Call "Delete"}
	}
}