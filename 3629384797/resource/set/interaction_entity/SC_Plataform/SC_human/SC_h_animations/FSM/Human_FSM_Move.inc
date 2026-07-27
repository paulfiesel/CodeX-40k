
(Include "Animation/GEM_Default/Move.inc")
(Include "Animation/LV40k_Space_Marines/Move.inc")
(Include "Animation/LV40k_Termagaunt/Move.inc")
(Include "Animation/LV40k_Zoanthrope/Move.inc")
(Include "Animation/LV40k_Venomthrope/Move.inc")
(Include "Animation/LV40k_Ravener/Move.inc")
(Include "Animation/LV40k_Warrior/Move.inc")
(Include "Animation/LV40k_Orks/Move.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; [...]

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_MOVE_Define_Enter"
	; [...]
)

(define "SC_FSM_MOVE_Define_Event"
	{if tagged "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";}
	
	else tagged "SC_FSM_MOVE_Tag_Strafe_Back"
		("SC_H_Request_Define_Animations_Block_IKs")
		("SC_FSM_MOVE_GEM_Default_Play_Strafe_Back")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Back")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Back")
		
	else tagged "SC_FSM_MOVE_Tag_Strafe_Left"
		("SC_H_Request_Define_Animations_Block_IKs")
		("SC_FSM_MOVE_GEM_Default_Play_Strafe_Left")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Left")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Left")
		
	else tagged "SC_FSM_MOVE_Tag_Strafe_Right"
		("SC_H_Request_Define_Animations_Block_IKs")
		("SC_FSM_MOVE_GEM_Default_Play_Strafe_Right")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Right")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Right")
		
	else tagged "SC_FSM_MOVE_Tag_Strafe_Slow"
		("SC_H_Request_Define_Animations_Block_IKs")
		("SC_FSM_MOVE_GEM_Default_Play_Strafe_Slow")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Slow")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Slow")
		
	else tagged "SC_FSM_MOVE_Tag_Strafe_Fast"
		("SC_H_Request_Define_Animations_Block_IKs")
		("SC_FSM_MOVE_GEM_Default_Play_Strafe_Fast")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_Strafe_Fast")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_Strafe_Fast")
		
	else tagged "SC_FSM_MOVE_Tag_S_Slow"
		("SC_H_Request_Define_Animations_Enable_IKs")
		("SC_FSM_MOVE_GEM_Default_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Warrior_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Venomthrope_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Zoanthrope_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Ravener_Play_S_Slow")
		
	else tagged "SC_FSM_MOVE_Tag_S_Fast"
		("SC_H_Request_Define_Animations_Block_IKs")
		(define "hfsm_m_speed_fast"
			("SC_FSM_MOVE_GEM_Default_Play_S_Fast" args %0)
			("SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Fast" args %0)
			("SC_FSM_MOVE_LV40k_Orkboy_Play_S_Fast" args %0)
			("SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Fast" args %0)
			("SC_FSM_MOVE_LV40k_Zoanthrope_Play_S_Fast" args %0)
			("SC_FSM_MOVE_LV40k_Venomthrope_Play_S_Fast" args %0)
			("SC_FSM_MOVE_LV40k_Ravener_Play_S_Fast" args %0)
			("SC_FSM_MOVE_LV40k_Warrior_Play_S_Fast" args %0)
		)
		{if tagged "f_vel_30"	("hfsm_m_speed_fast" args 4.0)}
		{if tagged "f_vel_27"	("hfsm_m_speed_fast" args 3.5)}
		{if tagged "f_vel_24"	("hfsm_m_speed_fast" args 3.25)}
		{if tagged "f_vel_21"	("hfsm_m_speed_fast" args 2.6)}
		{if tagged "f_vel_18"	("hfsm_m_speed_fast" args 2.25)}
		{if tagged "f_vel_15"	("hfsm_m_speed_fast" args 2.0)}
		{if tagged "f_vel_12"	("hfsm_m_speed_fast" args 1.65)}
		{if tagged "f_vel_9"	("hfsm_m_speed_fast" args 1.5)}
		{if tagged "f_vel_6"	("hfsm_m_speed_fast" args 1.0)}
		
	else tagged "SC_FSM_MOVE_Tag_S_Normal"
		("SC_H_Request_Define_Animations_Enable_IKs")
		("SC_FSM_MOVE_GEM_Default_Play_S_Normal")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Normal")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_S_Normal")
		("SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Normal")
		("SC_FSM_MOVE_LV40k_Zoanthrope_Play_S_Normal")
		("SC_FSM_MOVE_LV40k_Venomthrope_Play_S_Normal")
		("SC_FSM_MOVE_LV40k_Ravener_Play_S_Normal")
		("SC_FSM_MOVE_LV40k_Warrior_Play_S_Normal")
		
	else tagged "SC_FSM_MOVE_Tag_S_Spot"
;//		("SC_H_Request_Define_Animations_Enable_IKs")
		("SC_H_Request_Define_Animations_Block_IKs")
		("SC_FSM_MOVE_GEM_Default_Play_S_Spot")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_S_Spot")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Spot")
		
		("SC_FSM_MOVE_LV40k_Warrior_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Venomthrope_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Zoanthrope_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Ravener_Play_S_Slow")
		
	else tagged "SC_FSM_MOVE_Tag_S_Jog"
		("SC_H_Request_Define_Animations_Block_IKs")
		("SC_FSM_MOVE_GEM_Default_Play_S_Jog")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Jog")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_S_Jog")
		("SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Jog")
		("SC_FSM_MOVE_LV40k_Zoanthrope_Play_S_Jog")
		("SC_FSM_MOVE_LV40k_Venomthrope_Play_S_Jog")
		("SC_FSM_MOVE_LV40k_Ravener_Play_S_Jog")
		("SC_FSM_MOVE_LV40k_Warrior_Play_S_Jog")
	
	else tagged "SC_FSM_MOVE_Tag_S_Crawl"
		("SC_H_Request_Define_Animations_Block_IKs")
		
		("SC_FSM_MOVE_GEM_Default_Play_S_Crawl")
		("SC_FSM_MOVE_LV40k_Space_Marine_Play_S_Crawl")
		("SC_FSM_MOVE_LV40k_Orkboy_Play_S_Crawl")
		
		; // Temp
		("SC_FSM_MOVE_LV40k_Warrior_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Termagaunt_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Venomthrope_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Zoanthrope_Play_S_Slow")
		("SC_FSM_MOVE_LV40k_Ravener_Play_S_Slow")
	}
)

(define "SC_FSM_MOVE_Define_Exit"
	("SC_FSM_MOVE_GEM_Default_Stop_All")
	("SC_FSM_MOVE_LV40k_Space_Marine_Stop_All")
	("SC_FSM_MOVE_LV40k_Orkboy_Stop_All")
	("SC_FSM_MOVE_LV40k_Termagaunt_Stop_All")
	("SC_FSM_MOVE_LV40k_Zoanthrope_Stop_All")
	("SC_FSM_MOVE_LV40k_Venomthrope_Stop_All")
	("SC_FSM_MOVE_LV40k_Ravener_Stop_All")
	("SC_FSM_MOVE_LV40k_Warrior_Stop_All")
	
	{if tagged "sc_request_tag_is_reloading"	
		{tags remove "sc_request_tag_is_reloading"}
		("SC_FSM_Define_Update_FSM" do(remove)	state(RELOAD))
	}
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_MOVE_GEM_Default_Events")
("SC_FSM_MOVE_LV40k_Space_Marine_Events")
("SC_FSM_MOVE_LV40k_Orkboy_Events")
("SC_FSM_MOVE_LV40k_Termagaunt_Events")
("SC_FSM_MOVE_LV40k_Zoanthrope_Events")
("SC_FSM_MOVE_LV40k_Venomthrope_Events")
("SC_FSM_MOVE_LV40k_Ravener_Events")
("SC_FSM_MOVE_LV40k_Warrior_Events")