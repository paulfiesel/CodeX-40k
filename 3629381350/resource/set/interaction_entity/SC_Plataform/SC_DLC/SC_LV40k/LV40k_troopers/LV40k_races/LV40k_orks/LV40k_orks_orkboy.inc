
;	<<<< -------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Trooper - Ork Boy ===============] >>
;	<<<<--------------------------------------------------------------------------------->>>>			 

{"LV40k_dlc_prop_troopers_Ork_Boy"
	{on spawn	
		("LV40k_Ork_Spawn")
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/human/lv40k_ork_boy) v(v1))
		
		; {} // RANDOMIZATION // {} ;
		
		{If tagged "ardboy"	
			{bone cut "ik_updown_vol"}
			{bone cut "head_vol"}
		else
			{bone cut "ik_updown_ard_vol"}
			{bone cut "head_ard_vol"}
			{bone cut "ardboy_shield_vol"}
			
			 ; // Body
			{if rand 0.8
				{bone show "armor_3"}
				{if rand 0.5 {bone show "armor_3_pad_left1"}}
				{if rand 0.5 {bone show "armor_3_pad_right1"}}
			}
			
			 ; // Helmet
			 {If rand 0.15	{bone show "helmet_plume"}
			 else rand 0.3	{bone hide "ork_head"}	{bone show "ork_head_no_ear"}	{bone show "helmet_shoota_1"}
			 else rand 0.15	{bone hide "ork_head"}	{bone show "ork_head_no_ear"}	{bone show "helmet_shoota_2"}
			 else rand 0.2	{bone hide "ork_head"}	{bone show "ork_head_no_ear"}	{bone show "helmet_shoota_3"}
			 else rand 0.2	{bone hide "ork_head"}	{bone show "ork_head_no_ear"}	{bone show "helmet_shoota_4"}
			 else
			 }
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(foot3L) sound(SC_fx/sc_stomp_s1/halo/grunt/dirt/run))}
	{on animation_event "leg_right"	("SC_M_Stomp_Define_Add_Stomp_S0" leg(foot3R) sound(SC_fx/sc_stomp_s1/halo/grunt/dirt/run))}

	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>
	
	{on "link_weapon"
		{if effector "stuff weapon"		;// see interaction_entity/stuff.inc
			{with_effector
				{call "link_human"}
			}
		}
	}
	{on fire "weapon"
		{if effector "stuff weapon"		;// see interaction_entity/stuff.inc
			{with_effector
				{call "fire"}
			}
		}
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" Loop}
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.2	{ani_play "Idle_Lowready1" callback}       		           
		else rand 0.2	{ani_play "Idle_Lowready2" callback}                       	
		else rand 0.2	{ani_play "Idle_Lowready3" callback}                      	
		else rand 0.2	{ani_play "Idle_Lowready4" callback}                         	                       	
		else 			{ani_play "Idle_Lowready5" callback}                          	
		}		
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload
		{if tagged "sc_tp_Request_tag_is_aiming"
			{ani_play "Run_Aiming1" loop}	
		else						
			{ani_play "Run_Lowready1" loop}
       	}		
	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Die 	===================	>>>>

 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
    	{if rand 0.3	{ani_play "death1"}
      	else rand 0.2	{ani_play "death2"}
      	else rand 0.3 	{ani_play "death3"}
      	else			{ani_play "death4"}
		}
  	}
	
	; <<<<	===================	LV40k Trooper Behaviour: Weaponry 	===================	>>>>

	{on "SC_FSM_RECOIL_Call_Play_Animations" 
		{Ani_play "Recoil1" callback}
	}
	{on "SC_FSM_MELEE_Call_Play_Animations" 
		{if tagged "ardboy" 	{Delay 0.125 {start_sound "weapon/shot/SC_DLC_LV40k/melee/Chainsword/d1/swing" use_position}}}
		{if rand 0.5	{Call_Synced "Lv40k_Orks_Orkboy_Call_Melee_Anm_1"}
		else			{Call_Synced "Lv40k_Orks_Orkboy_Call_Melee_Anm_3"}
		}
	}
	
	; // Ardboy melee is FASTA
	
	{On "Lv40k_Orks_Orkboy_Call_Melee_Anm_1"	
		{if tagged "ardboy"	{ani_play "melee1" 1.35 callback}
		else				{ani_play "melee1" callback}
		}
		{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}
	}
	{On "Lv40k_Orks_Orkboy_Call_Melee_Anm_3"	
		{if tagged "ardboy"	{ani_play "melee1" 1.35 callback}
		else				{ani_play "melee1" callback}
		}
		{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"}
	}
	
	{on animation_event "sc_spawn_melee_ctc" sync
		
		{if tagged "ardboy"
			{start_sound "weapon/shot/SC_DLC_LV40k/melee/Chainsword/d1/buzz" use_position}
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_choppa_ard) where(Melee_Spawn_CTC))
			{spawn "ex_autocan_air" "Melee_Spawn_CTC" x}
		else
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_choppa) where(Melee_Spawn_CTC))
		}
	}
}