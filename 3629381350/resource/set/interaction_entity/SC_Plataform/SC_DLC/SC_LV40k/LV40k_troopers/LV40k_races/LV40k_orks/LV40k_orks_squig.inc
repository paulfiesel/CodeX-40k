
;	<<<< -------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Ork Squig ===============] >>
;	<<<<--------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Ork_Squig"
	{on spawn	
		("LV40k_Ork_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_ork_squig) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{Add_view "orchatina"	"lv40k_squigs_fx"	"fx_breath"}
		{View start "lv40k_squigs_fx"}
	}

	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(FX_FOOTSTEP_L) sound(SC_fx/sc_stomp_s1/halo/grunt/dirt/run))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(FX_FOOTSTEP_R) sound(SC_fx/sc_stomp_s1/halo/grunt/dirt/run))}

	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload		
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.5	{ani_play "Idle_Lowready1" callback}                         	                       	
		else 			{ani_play "Idle_Lowready2" callback}                          	
		}		
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload			
		{ani_play "Run_Lowready1" loop}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	 
		{ani_play "death"}
		{Delay 0.1 {If not tagged "exploding" {Call "LV40k_orks_squig_explode"}}}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on fire "melee" Sync
		{Reset_manual_control}
		{Call "LV40k_orks_squig_explode"}
		{Tags add "exploding"}
	}
	{on "LV40k_orks_squig_explode" 
		{spawn "ork_stikkbomb_squig" "basis" x {stuff_detonate}}
		
		{spawn "bloodexp_big" "squig_mainbone" x}
		{spawn "bloodsparks_energo_death" "squig_mainbone" x}
		
		{Call "delete"}
	}
}














