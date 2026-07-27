
;	<<<< ------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Tyranid Ripperswarm ===============] >>
;	<<<<-------------------------------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_troopers_Tyr_Ripperswarm"
	{on spawn	
		("LV40k_Tyranids_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_tyr_small) v(v1))
		
		{link_sound "ripper_move_snd" "SC_Plataform/SC_fx/sc_bodymove_s1/halo_infection"}
		
		{if tagged "model_1_dead"	{bone hide "Ripper1_body"}	{Volumes "Body1" disable blast bullet contact overlap visible}}
		{if tagged "model_2_dead"	{bone hide "Ripper2_body"}	{Volumes "Body2" disable blast bullet contact overlap visible}}
		{if tagged "model_3_dead"	{bone hide "Ripper3_body"}	{Volumes "Body3" disable blast bullet contact overlap visible}}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "move_1"
		("SC_M_Stomp_Define_Add_Stomp_S0_no_gear" leg(basis) sound())
	}
	{on move on		
		{play_sound "ripper_move_snd" 1}
	}
	{on move off
		{stop_sound "ripper_move_snd"}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

	(Define "LV40k_Ripperswarm_Kill_Model"
		{if not tagged "model_%c_dead"
			{tags add "model_%c_dead"}
			
			{start_sound "SC_Plataform/SC_fx/sc_misc_s2/halo_infection_pop"}
			{spawn "bloodsparks_bigest" "Ripper%c_skeleton_root" x}
			
			{if rand 0.5 	{spawn "tyr_gibs_rippers_head" "Ripper%c_skeleton_root" x}}
			{if rand 0.35 	{spawn "tyr_gibs_rippers_tail" "Ripper%c_skeleton_root" x}}
			{if rand 0.2 	{spawn "tyr_gibs_rippers_leg1" "Ripper%c_skeleton_root" x}}
			{if rand 0.2 	{spawn "tyr_gibs_rippers_leg2" "Ripper%c_skeleton_root" x}}
		
			{bone hide "Ripper%c_body"}	{Volumes "Body%c" disable blast bullet contact visible}
		}
		{if tagged "model_1_dead"	{if tagged "model_2_dead"	{if tagged "model_3_dead"	{Call "die"}}}}
	)
	{On "LV40k_Ripperswarm_Kill_Model1"	("LV40k_Ripperswarm_Kill_Model" c(1))}
	{On "LV40k_Ripperswarm_Kill_Model2"	("LV40k_Ripperswarm_Kill_Model" c(2))}
	{On "LV40k_Ripperswarm_Kill_Model3"	("LV40k_Ripperswarm_Kill_Model" c(3))}
	
	{on blast
		{if volume "body1"	{Call "LV40k_Ripperswarm_Kill_Model1"}
		else volume "body2"	{Call "LV40k_Ripperswarm_Kill_Model2"}
		else volume "body3"	{Call "LV40k_Ripperswarm_Kill_Model3"}
		}
	}
	{on "process_bullet_hit"	
		{if volume "body1"	{Call "LV40k_Ripperswarm_Kill_Model1"}
		else volume "body2"	{Call "LV40k_Ripperswarm_Kill_Model2"}
		else volume "body3"	{Call "LV40k_Ripperswarm_Kill_Model3"}
		}
	}
 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
		{Call "LV40k_Ripperswarm_Kill_Model1"}
		{Call "LV40k_Ripperswarm_Kill_Model2"}
		{Call "LV40k_Ripperswarm_Kill_Model3"}
		{Call "Delete"}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
		{ani_play "Idle_Aiming2" Loop}
		{ani_play "Idle_Aiming3" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{ani_play "Idle_Lowready1" callback}
		{ani_play "Idle_Lowready2"}
		{ani_play "Idle_Lowready3"}
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload	
		{ani_play "Run_Aiming1" loop}	
		{ani_play "Run_Aiming2" loop}	
		{ani_play "Run_Aiming3" loop}	
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations" 
		;	[...]
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{ani_play "Melee1" callback}
		{ani_play "Melee2"}
		{ani_play "Melee3"}
		
		{Start_sound "SC_Plataform/SC_fx/sc_misc_s2/halo_infection_bite"}
		{Delay 0.2
			{Start_sound "SC_Plataform/SC_fx/sc_misc_s2/halo_infection_bite"}
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_ripperswarm) where(Spawn_Melee_CTC))
		}
		{Delay 0.5 {Start_sound "SC_Plataform/SC_fx/sc_misc_s2/halo_infection_bite"}}
	}
}
