
;	<<<< ---------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: FSM Script ===============] >>
;	<<<<----------------------------------------------------------------------------->>>>			 

; // BUZZ: Reminder, To add a new FSM, you only need to create a tag by this script name convention such as "FSM_STATE_%nameofstate"
; // BUZZ: Reminder, As how the code is working right now, you will also need to create a second tag just like the first one, such as "FSM_STATE_%name_ON". This prevents the states from overlapping.
; // BUZZ: Reminder, Finally just register your FSM tag "FSM_Motion_List" define on "animations".

; // BUZZ: Reminder, As it is now, register a new prop with the same name of the FSM tag and add it to the FSM folder, just ensure to inherit its necessary methods on that file.
; // BUZZ: Reminder, NEVER NEVER NEVER directly call a FSM event method or definition from other scripts, everything must be within the scope of this file.

; // BUZZ: Reminder, You can create tag to block an specific FSM from playing on FSM_conditional_list!
; // BUZZ: Reminder, By removing the "_ON" tag during the FSM execution will make it CALLBACK itself.

; // BUZZ: Reminder, And by removing the FSM tag during the FSM execution will terminate that FSM.	
; // BUZZ: Reminder, The tick list is organized by priority (The most important events are placed at the top of the list, they will interrupt other FSMs on execution).


; ============================================================================================================================================ ;


; // BUZZ: FSM EVENT ORDER: Enter (...) -> Event (...) -> Exit (...)
; // BUZZ: DO NOT USE THESE DEFINES OUTSIDE THE SCOPE OF THIS FILE! 

(define "SC_FSM_Add_State"	{tags add "sc_fsm_tag_FSM_STATE_%state"})
(define "SC_FSM_add_State"	{tags add "sc_fsm_tag_FSM_STATE_%state"})

(define "SC_FSM_Remove_State"	{tags remove "sc_fsm_tag_FSM_STATE_%state"}	{tags remove "sc_fsm_tag_FSM_STATE_%state_on"})
(define "SC_FSM_remove_State"	{tags remove "sc_fsm_tag_FSM_STATE_%state"}	{tags remove "sc_fsm_tag_FSM_STATE_%state_on"})

; // Args is Case sensitive
(define "SC_FSM_Define_Update_FSM"
	("SC_FSM_%do_State" state(%state))
	{Call "SC_FSM_Call_Update_States"}		; // BUZZ: <- [FSM] Update
)

(define "SC_FSM_Define_Clear_Entity_Tags"		; // BUZZ: <- Always use on start
	{tags remove "sc_fsm_tag_state_callback"}
	{Call "SC_FSM_Call_Clear_Request_Tags"}
	{Call "SC_FSM_Call_Exit_All_States"}
)

(define "SC_FSM_Define_FSM_Enter"
	{if not tagged "sc_fsm_tag_FSM_STATE_%state_ON"; {}
		{Call "SC_FSM_Call_Exit_All_States"}			; // <- Exits all previous states before entering the new one.
		
		{tags add "sc_fsm_tag_FSM_STATE_%state"}		; // <- 'Exit_All_States' will remove all tags, this adds it again.
		{tags add "sc_fsm_tag_FSM_STATE_%state_ON"	}	; // <- This is the overlap safety tag.
		
		{if not tagged "sc_fsm_tag_state_callback"
			("SC_FSM_%state_Define_Enter")				; // <- Inheritance overload argument. Called ONCE upon transitioning into the state.
		else
			{tags remove "sc_fsm_tag_state_callback"}
		}		
		("SC_FSM_%state_Define_Event")					; // <- Inheritance overload argument. It's the main FSM event call.
	}		
)

(define "SC_FSM_Define_FSM_Exit"
	{tags remove "sc_fsm_tag_FSM_STATE_%state"}	
	{tags remove "sc_fsm_tag_FSM_STATE_%state_ON"}
	
	{tags remove "sc_fsm_tag_state_callback"} ; <- // TEST!
	
	("SC_FSM_%state_Define_Exit")				; // <- Inheritance overload argument. Called upon exit.
)

; // BUZZ: recalls the current FSM state main event.
(define "SC_FSM_Define_Reset_Callback"
	{if tagged "sc_fsm_tag_FSM_STATE_%state" 		;}
	
		; ~~~~~~~| OLD METHOD |
	;//	("SC_FSM_Define_FSM_Exit" state(%state))
	;//	{tags add "sc_fsm_tag_state_callback"} 	
	;//	("SC_FSM_Define_FSM_Enter" state(%state))
	
		("SC_FSM_Remove_State" state(%state))
		{tags add "sc_fsm_tag_state_callback"} 	
		("SC_FSM_Add_State" state(%state))
		{Call "SC_FSM_Call_Update_States"}		; // BUZZ: <- [FSM] Update
	}
)


; ============================================================================================================================================ ;


; EXAMPLE FILE AND USAGE

;////////////////////////////////////////////////////////////////////////////////////////////////
;////////////////////////////////////////////////////////////////////////////////////////////////	

; // =======================> Call This on: %prop_Animations.inc file

{on "SC_FSM_Call_Start_FSM"
	("SC_FSM_Define_Clear_Entity_Tags")
	{Call "SC_FSM_Call_Update_States"}
}

; use OVERLOAD
; place in "%file_name" Requests.inc 

;{on "SC_FSM_Call_Clear_Request_Tags"}
;{on "SC_FSM_Call_Update_States"}
;{on "SC_FSM_Call_Exit_All_States"}
;{on "SC_Request_Call_State_Default"}

;////////////////////////////////////////////////////////////////////////////////////////////////
;////////////////////////////////////////////////////////////////////////////////////////////////

; // =======================> This on: %prop_FSM_%state.inc file

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; // Defines go in here...

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

;(define "SC_FSM_EXAMPLE_Define_Enter"
;
;)

;(define "SC_FSM_EXAMPLE_Define_Event"
;
;)

;(define "SC_FSM_EXAMPLE_Define_Exit"
;
;)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

; // Calls going in here...

