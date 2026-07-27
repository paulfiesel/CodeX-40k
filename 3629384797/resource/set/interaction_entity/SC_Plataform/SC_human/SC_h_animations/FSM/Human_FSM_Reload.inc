
(Include "Animation/GEM_Default/Reload.inc")

;//(Include "Animation/LV40k_Termagaunt/Takegun.inc")
;//(Include "Animation/LV40k_Zoanthrope/Takegun.inc")
;//(Include "Animation/LV40k_Ravener/Takegun.inc")
;//(Include "Animation/LV40k_Warrior/Takegun.inc")
;//(Include "Animation/LV40k_Termagaunt/Takegun.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

(Define "SC_FSM_RELOAD_Define_Animation_End"	
			
	{tags remove "sc_request_tag_is_reloading"}
	
;//	{If tagged "SC_FSM_TAG_FSM_STATE_RELOAD"
		{Kill_Delay "SC_FSM_RELOAD_Delay"}
		{delay 0.1 "SC_FSM_RELOAD_Delay"				
		
			("SC_FSM_Define_Update_FSM" do(remove) state(MOVE))
			
			{if tagged "sc_request_tag_is_moving"
				("SC_FSM_Define_Update_FSM" do(remove) state(RELOAD))
				("SC_H_Request_Define_Animations_Enable_IKs")
				
				("SC_FSM_Define_Update_FSM" do(add) state(MOVE))
			
			else
				("SC_FSM_Define_Update_FSM" do(remove) state(RELOAD))
				
				("SC_FSM_Define_Reset_Callback" state(IDLE))
				
				("SC_H_Request_Define_Animations_Enable_IKs")
			
			}
		}
;//	}
)

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_RELOAD_Define_Enter"
	; [...]
)

(define "SC_FSM_RELOAD_Define_Event"	
	("SC_H_Request_Define_Animations_Block_IKs")
	
	; // BUZZ: everyone uses same default animations - organize this sheiße later.
	
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"		("SC_FSM_RELOAD_Define_Animation_End")
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"	("SC_FSM_RELOAD_Define_Animation_End")
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope"	("SC_FSM_RELOAD_Define_Animation_End")
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener"		("SC_FSM_RELOAD_Define_Animation_End")
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"			("SC_FSM_RELOAD_Define_Animation_End")
	else
		{if lying
			("SC_FSM_RELOAD_GEM_Default_Play_Lying")
		else squatting
			("SC_FSM_RELOAD_GEM_Default_Play_Squatting")
		else standing
			("SC_FSM_RELOAD_GEM_Default_Play_Standing")
		}
	}
	{if tagged "sc_request_tag_is_moving"
		("SC_FSM_Define_Update_FSM" do(add) state(MOVE))
	}
)

(define "SC_FSM_RELOAD_Define_Exit"
	{if standing
		{if tagged "sc_request_tag_is_moving"
			; [...]
		else tagged "sc_request_tag_is_reloading"
			; [...]
		else
			("SC_FSM_RELOAD_GEM_Default_Stop_All")
			("SC_H_Request_Define_Animations_Enable_IKs")
		}
	else
		("SC_FSM_RELOAD_GEM_Default_Stop_All")
		("SC_H_Request_Define_Animations_Enable_IKs")
	}
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_RELOAD_GEM_Default_Events")
