
;	<<<< <<<<---------------------------------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Misc Talk for Non-Human/Auto-operatable Vehicles or Fauna ===============] >>
;	<<<<---------------------------------------------------------------------------------------------------------------------------->>>>			 

; %0 path name

(Define "SC_M_Talk_Define_Link_Vocalizations"
	{link_sound "alert_enemy" 								"%voice/alert_enemy/%v"}  		
	{link_sound "alert_enemy_grenade" 						"%voice/alert_enemy_grenade/%v"}  	
	{link_sound "angry_brsrk" 	  						   	"%voice/angry_brsrk/%v"}  
	{link_sound "in_combat_comms" 							"%voice/in_combat_comms/%v"}  	
	{link_sound "in_combat_enemy_has_upper_hand"			"%voice/in_combat_enemy_has_upper_hand/%v"}  		
	{link_sound "in_combat_group_has_upper_hand"			"%voice/in_combat_group_has_upper_hand/%v"}	
	{link_sound "executing_an_order"						"%voice/executing_an_order/%v"}
	{link_sound "death_scream"		 						"%voice/death_cry/%v"}  		
	{link_sound "enemy_is_destroyed"		 				"%voice/enemy_is_destroyed/%v"}  
	{link_sound "idle_look"		 							"%voice/idle_out_of_combat/%v"}  
	{link_sound "idle_wounded"		 						"%voice/wounded/%v"}  		
	{link_sound "melee_strike"		 						"%voice/melee_strike/%v"}  
	{link_sound "panicking"		 							"%voice/panicking/%v"}  	
	{link_sound "selection" 								"%voice/selection_of_units/%v"}	
	{link_sound "scream_of_pain_small" 						"%voice/scream_of_pain_small/%v"}	
	{link_sound "scream_of_pain_big" 						"%voice/scream_of_pain_big/%v"}			
	{link_sound "thrown_grenade" 							"%voice/throwing_a_grenade/%v"}	
	
	; // LV40k DLC
	{link_sound "alert_wpn_ork_mgun"						"%voice/DLC_40k/alert_wpn_ork_mgun/%v"}  
	{link_sound "alert_wpn_sm_loyalist_mgun" 				"%voice/DLC_40k/alert_wpn_sm_loyalist_mgun/%v"}  
	
	{link_sound "alert_enemy_igc" 							"%voice/DLC_40k/alert_enemy_igc/%v"}  
	{link_sound "alert_enemy_orks"							"%voice/DLC_40k/alert_enemy_orks/%v"}  		
	{link_sound "alert_enemy_xenos"							"%voice/DLC_40k/alert_enemy_xenos/%v"}  		
	{link_sound "alert_enemy_humans"						"%voice/DLC_40k/alert_enemy_humans/%v"}  		
	{link_sound "alert_enemy_sm_chaos" 						"%voice/DLC_40k/alert_enemy_sm_chaos/%v"}  	
	{link_sound "alert_enemy_sm_loyalist" 					"%voice/DLC_40k/alert_enemy_sm_loyalist/%v"}  	
	{link_sound "alert_enemy_tyr" 							"%voice/DLC_40k/alert_enemy_tyr/%v"}  	
	
	{link_sound "enemy_is_destroyed_igc" 					"%voice/DLC_40k/enemy_is_destroyed_igc/%v"}  
	{link_sound "enemy_is_destroyed_orks"					"%voice/DLC_40k/enemy_is_destroyed_orks/%v"}  		
	{link_sound "enemy_is_destroyed_xenos"					"%voice/DLC_40k/enemy_is_destroyed_xenos/%v"}  		
	{link_sound "enemy_is_destroyed_humans"					"%voice/DLC_40k/enemy_is_destroyed_humans/%v"}  		
	{link_sound "enemy_is_destroyed_sm_chaos" 				"%voice/DLC_40k/enemy_is_destroyed_sm_chaos/%v"}  	
	{link_sound "enemy_is_destroyed_sm_loyalist" 			"%voice/DLC_40k/enemy_is_destroyed_sm_loyalist/%v"}  	
	{link_sound "enemy_is_destroyed_tyr" 					"%voice/DLC_40k/enemy_is_destroyed_tyr/%v"}  	
)

(Define "SC_M_Talk_Define_Stop_All_Talk_Sounds"
	{stop_sound "alert_enemy"}				
	{stop_sound "alert_enemy_grenade"}	
	
	{stop_sound "angry_brsrk"}	  					 
	{stop_sound "in_combat_comms"}							
	{stop_sound "in_combat_enemy_has_upper_hand"}				
	{stop_sound "in_combat_group_has_upper_hand"}							 
	{stop_sound "executing_an_order"}		 									 
	{stop_sound "death_scream"}		 						
	{stop_sound "enemy_is_destroyed"}		 			
	{stop_sound "idle_look"}		 						 
	{stop_sound "idle_wounded"}		 						
	{stop_sound "melee_strike"}		 						
	{stop_sound "panicking"}		 							
	{stop_sound "scream_of_pain_small"}						
	{stop_sound "scream_of_pain_big"}									
	{stop_sound "thrown_grenade"}			

	; // LV40k DLC	
	{stop_sound "alert_wpn_ork_mgun"}	
	{stop_sound "alert_wpn_sm_loyalist_mgun"}	
	
	{stop_sound "alert_enemy_igc"}	
	{stop_sound "alert_enemy_orks"}		
	{stop_sound "alert_enemy_xenos"}	
	{stop_sound "alert_enemy_humans"}					
	{stop_sound "alert_enemy_sm_chaos"}				
	{stop_sound "alert_enemy_sm_loyalist"}					
	{stop_sound "alert_enemy_tyr"}		

	{stop_sound "enemy_is_destroyed_igc"}	
	{stop_sound "enemy_is_destroyed_orks"}		
	{stop_sound "enemy_is_destroyed_xenos"}	
	{stop_sound "enemy_is_destroyed_humans"}					
	{stop_sound "enemy_is_destroyed_sm_chaos"}				
	{stop_sound "enemy_is_destroyed_sm_loyalist"}					
	{stop_sound "enemy_is_destroyed_tyr"}				
)

; <<<<	===================	SC Trooper: Talk/Dialogue Sounds Section	===================	>>>>

; // PERIOD: Rarity/Frequency of given talk charts.
; // DELAY: Timeout between talks with same category. (talks with higher priorities will completely ignore and overlap)
; // PRIORITY: Talk overlap priority.
; // CHK: Adds a conditional checker.

; tag SC_tc_talk_tag_priority1 - only death.
; tag SC_tc_talk_tag_priority2 - shouting for valuable targets.
; tag SC_tc_talk_tag_priority3 - enemy is killed or reporting ally casualties.
; tag SC_tc_talk_tag_priority4 - pain sounds, war cries and slightly more important shatter.
; tag SC_tc_talk_tag_priority5 - battle shatter and trash-talk comms.

(define "SC_M_Talk_Define_Clear_All_Variables"
	{tags remove "SC_M_Talk_Tag_Priority1"}
	{tags remove "SC_M_Talk_Tag_Priority2"}
	{tags remove "SC_M_Talk_Tag_Priority3"}
	{tags remove "SC_M_Talk_Tag_Priority4"}
	{tags remove "SC_M_Talk_Tag_Priority5"}
)

(define "SC_M_Talk_Define_Voice"
	{if rand %period
		{if not tagged "SC_M_Talk_Tag_Priority%pn"
		{if not tagged "SC_M_Talk_Tag_Priority%p1" 
		{if not tagged "SC_M_Talk_Tag_Priority%p2"
		{if not tagged "SC_M_Talk_Tag_Priority%p3" 
		{if not tagged "SC_M_Talk_Tag_Priority%p4" 
			{tags add "SC_M_Talk_Tag_Priority%pn"}
			{tags remove "SC_M_Talk_Tag_Priority%r1"}
			{tags remove "SC_M_Talk_Tag_Priority%r2"}
			{tags remove "SC_M_Talk_Tag_Priority%r3"}
			{tags remove "SC_M_Talk_Tag_Priority%r4"}
			{if %chk 
				{play_sound "%talk"}		
				{delay %delay	{tags remove "SC_M_Talk_Tag_Priority%pn"}}
			}
		}}}}}
	}
)

(define "SC_M_Talk_Define_V_Priority1" ("SC_M_Talk_Define_Voice" 	chk(%chk)	period(%period) talk(%talk) delay(%delay)	pn(1) r1(2) r2(3) r3(4) r4(5)))
(define "SC_M_Talk_Define_V_Priority2" ("SC_M_Talk_Define_Voice" 	chk(%chk)	period(%period) talk(%talk) delay(%delay)	pn(2) p1(1) r1(3) r2(4) r3(5)))
(define "SC_M_Talk_Define_V_Priority3" ("SC_M_Talk_Define_Voice" 	chk(%chk)	period(%period) talk(%talk) delay(%delay)	pn(3) p1(1) p2(2) r1(4) r2(5)))
(define "SC_M_Talk_Define_V_Priority4" ("SC_M_Talk_Define_Voice"	chk(%chk)	period(%period) talk(%talk) delay(%delay)	pn(4) p1(1) p2(2) p3(3) r1(5)))
(define "SC_M_Talk_Define_V_Priority5" ("SC_M_Talk_Define_Voice"	chk(%chk)	period(%period) talk(%talk) delay(%delay)	pn(5) p1(1) p2(2) p3(3) p4(4)))


; ===================================================================================================================================================================================== ;

(define "SC_M_Talk_Define_V_alert_enemy"						("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)		talk(alert_enemy)		delay(5.0)))
(define "SC_M_Talk_Define_V_alert_enemy_grenade"				("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(0.125)	talk(alert_enemy_grenade)	delay(5.0)))

(define "SC_M_Talk_Define_V_angry_brsrk"						("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(0.30)	talk(angry_brsrk)			delay(5.0)))

(define "SC_M_Talk_Define_V_in_combat_comms"					("SC_M_Talk_Define_V_Priority4" chk(not dead)	period(0.2)		talk(cmbt_comms)						delay(10.0)))
(define "SC_M_Talk_Define_V_in_combat_comms_50"					("SC_M_Talk_Define_V_Priority4" chk(not dead)	period(0.5)		talk(cmbt_comms)						delay(10.0)))
(define "SC_M_Talk_Define_V_in_combat_comms_100"				("SC_M_Talk_Define_V_Priority4" chk(not dead)	period(1.0)		talk(cmbt_comms)						delay(10.0)))

(define "SC_M_Talk_Define_V_in_combat_enemy_has_upper_hand"		("SC_M_Talk_Define_V_Priority4" chk(not dead)	period(1)		talk(in_combat_enemy_has_upper_hand)	delay(5.0)))
(define "SC_M_Talk_Define_V_in_combat_group_has_upper_hand"		("SC_M_Talk_Define_V_Priority4" chk(not dead)	period(1)		talk(in_combat_group_has_upper_hand)	delay(5.0)))

(define "SC_M_Talk_Define_V_move_cmbt"							("SC_M_Talk_Define_V_Priority5" chk(not dead)	period(0.03)	talk(executing_an_order)				delay(12.5)))
(define "SC_M_Talk_Define_V_move_cmbt_50"						("SC_M_Talk_Define_V_Priority5" chk(not dead)	period(0.5)		talk(executing_an_order)				delay(9.0)))
(define "SC_M_Talk_Define_V_move_cmbt_100"						("SC_M_Talk_Define_V_Priority5" chk(not dead)	period(1.0)		talk(executing_an_order)				delay(6.0)))

(define "SC_M_Talk_Define_V_enemy_is_destroyed"					("SC_M_Talk_Define_V_Priority1" chk(not dead)	period(1)		talk(enemy_is_destroyed)	delay(5.0)))

(define "SC_M_Talk_Define_V_death_scream"						("SC_M_Talk_Define_V_Priority1" chk(not "no_chek")	period(1)	talk(death_scream)			delay(0.0)))

(define "SC_M_Talk_Define_V_idle_look"							("SC_M_Talk_Define_V_Priority5" chk(not dead)	period(0.03)	talk(idle_look)				delay(15.0)))
(define "SC_M_Talk_Define_V_idle_wounded"						("SC_M_Talk_Define_V_Priority4" chk(not dead)	period(1)		talk(idle_wounded)			delay(8.0)))
(define "SC_M_Talk_Define_V_melee_strike"						("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(0.75)	talk(melee_strike)			delay(1.8)))
(define "SC_M_Talk_Define_V_panicking"							("SC_M_Talk_Define_V_Priority4" chk(not dead)	period(1)		talk(panicking)				delay(5.0)))

(define "SC_M_Talk_Define_V_selection"							("SC_M_Talk_Define_V_Priority2" chk(not dead)	period(1)		talk(selection)	delay(5.0)))

(define "SC_M_Talk_Define_V_scream_of_pain_big"					("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)		talk(scream_of_pain_big)	delay(5.0)))
(define "SC_M_Talk_Define_V_scream_of_pain_small"				("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)		talk(scream_of_pain_small)	delay(5.0)))
(define "SC_M_Talk_Define_V_thrown_grenade"						("SC_M_Talk_Define_V_Priority2" chk(not dead)	period(1)		talk(thrown_grenade)		delay(5.0)))


; // LV40k DLC 
(define "SC_M_Talk_Define_V_alert_wpn_ork_mgun"					("SC_M_Talk_Define_V_Priority2" chk(not dead)	period(0.5)	talk(alert_wpn_ork_mgun)			delay(5.0)))
(define "SC_M_Talk_Define_V_alert_wpn_sm_loyalist_mgun"			("SC_M_Talk_Define_V_Priority2" chk(not dead)	period(0.5)	talk(alert_wpn_sm_loyalist_mgun)	delay(5.0)))

(define "SC_M_Talk_Define_V_alert_enemy_igc"					("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(alert_enemy_igc)			delay(5.0)))
(define "SC_M_Talk_Define_V_alert_enemy_orks"					("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(alert_enemy_orks)			delay(5.0)))
(define "SC_M_Talk_Define_V_alert_enemy_humans"					("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(alert_enemy_humans)		delay(5.0)))
(define "SC_M_Talk_Define_V_alert_enemy_xenos"					("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(alert_enemy_xenos)			delay(5.0)))
(define "SC_M_Talk_Define_V_alert_enemy_sm_chaos"				("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(alert_enemy_sm_chaos)		delay(5.0)))
(define "SC_M_Talk_Define_V_alert_enemy_sm_loyalist"			("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(alert_enemy_sm_loyalist)	delay(5.0)))
(define "SC_M_Talk_Define_V_alert_enemy_tyr"					("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(alert_enemy_tyr)			delay(5.0)))

(define "SC_M_Talk_Define_V_enemy_is_destroyed_igc"				("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(enemy_is_destroyed_igc)			delay(5.0)))
(define "SC_M_Talk_Define_V_enemy_is_destroyed_orks"			("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(enemy_is_destroyed_orks)			delay(5.0)))
(define "SC_M_Talk_Define_V_enemy_is_destroyed_humans"			("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(enemy_is_destroyed_humans)			delay(5.0)))
(define "SC_M_Talk_Define_V_enemy_is_destroyed_xenos"			("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(enemy_is_destroyed_xenos)			delay(5.0)))
(define "SC_M_Talk_Define_V_enemy_is_destroyed_sm_chaos"		("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(enemy_is_destroyed_sm_chaos)		delay(5.0)))
(define "SC_M_Talk_Define_V_enemy_is_destroyed_sm_loyalist"		("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(enemy_is_destroyed_sm_loyalist)	delay(5.0)))
(define "SC_M_Talk_Define_V_enemy_is_destroyed_tyr"				("SC_M_Talk_Define_V_Priority3" chk(not dead)	period(1)	talk(enemy_is_destroyed_tyr)			delay(5.0)))
