
;	<<<< -------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Hivenode ===============] >>
;	<<<<--------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Hivenode"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		{Add_view "fx_tyr_hivenode"	"lv40k_Hivenode_fx"	"master"}
		{View start "lv40k_Hivenode_fx"}
		
		{Delay 0.1 {Tags add "SC_tp_main_tag_chassis_perma_disabled"} {Chassis_Work 0}}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload		
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{ani_play "Idle_Lowready1" callback}                         	                       	
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload			
		; [...]
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	 
		{Spawn "bloodsparks_energo_death" "basis" x}
		
		{add_view "fx_sc_long_bleed" "dying_fx_tyr" "foresight3"}
		{View start "dying_fx_tyr"}	{Delay 8.0 {view stop "dying_fx_tyr"}}

		{View pause "lv40k_Hivenode_fx"}
		{Tex_Mod "xx"}
		
		{delay 1.0 {Spawn "tyr_biomass_exp_big" "basis" x}}
		{delay 6.0 {Spawn "tyr_biomass_exp_big" "basis" x}}
		
		{Ani_play "Death1" callback}
		
		{add_view "tyr_spore_sparkles_02" "dead_tyr_fx" "bip01_pelvis"}
		{view start "dead_tyr_fx"} {delay 20 {view stop "dead_tyr_fx"}}
  	}
	{On animation_end "Death1"
		{Delay 1.0 {Call "delete"}}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations"
		{Ani_play "Recoil1" callback}	
		{spawn "flash_tyr_cannon_big" "foresight3" x} 
	}
}