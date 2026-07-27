
;	<<<< ------------------------------------------------------------ >>>> 
;	<< [=============== IKs and Helper Bones Defines ===============] >>
;	<<<< ------------------------------------------------------------ >>>>

(define "SC_H_Request_Define_Animations_Enable_IKs"
	{ik_enable "ik_leftright" 1}
	{ik_enable "ik_socket" 1}
	{ik_enable "aim_h" 1}
	{ik_enable "aim_v" 1}
)

(define "SC_H_Request_Define_Animations_Block_IKs"
	{ik_enable "ik_leftright" 0}
	{ik_enable "ik_socket" 0}
	{ik_enable "aim_v" 0}
	{ik_enable "aim_h" 0}
)

;	<<<< ------------------------------------------------- >>>> 
;	<< [=============== Animation Defines ===============] >>
;	<<<< ------------------------------------------------- >>>>	

(Define "SC_H_Request_Define_Play_Animation_States"
)

(define "SC_H_Request_Define_Animation_Single"	
	{if %chk
		{ani_play "%anm"		%anm_args}		{ani_play "%anm1"		%anm_args}
	}
)	

(define "SC_H_Request_Define_Animation_State"	
	{if %chk
		{if   "sc_human_flag_anm_instance_pistol"		{ani_play "%pstol_anm"		%anm_args}		{ani_play "%pstol_anm1"		%anm_args}
		else  "sc_human_flag_anm_instance_rifle"		{ani_play "%rifle_anm"		%anm_args}		{ani_play "%rifle_anm1"		%anm_args}
		else  "sc_human_flag_anm_instance_mgun"			{ani_play "%mgun_anm"		%anm_args}		{ani_play "%mgun_anm1"		%anm_args}
		else  "sc_human_flag_anm_instance_bazooka"		{ani_play "%bazooka_anm"	%anm_args}		{ani_play "%bazooka_anm1"	%anm_args}
		else											{ani_play "%unrmd_anm"		%anm_args}		{ani_play "%unrmd_anm1"		%anm_args}}
	}
)	

; // SPECIFIC FOR FSM_MOVE USAGE!

(define "SC_H_Request_Define_Animation_Single_MOVE"	
	{if %chk
		{ani_play "%anm"		%anm_args}
		
		{if not tagged "sc_request_tag_is_reloading" 
			{ani_play "%anm1"		%anm_args}
		}
	}
)	

(define "SC_H_Request_Define_Animation_State_MOVE"	
	{if %chk
		{if   "sc_human_flag_anm_instance_pistol"		{ani_play "%pstol_anm"		%anm_args}		
		else  "sc_human_flag_anm_instance_rifle"		{ani_play "%rifle_anm"		%anm_args}	
		else  "sc_human_flag_anm_instance_mgun"			{ani_play "%mgun_anm"		%anm_args}	
		else  "sc_human_flag_anm_instance_bazooka"		{ani_play "%bazooka_anm"	%anm_args}	
		else											{ani_play "%unrmd_anm"		%anm_args}}
		
		{if not tagged "sc_request_tag_is_reloading"
			{if   "sc_human_flag_anm_instance_pistol"		{ani_play "%pstol_anm1"		%anm_args}		
			else  "sc_human_flag_anm_instance_rifle"		{ani_play "%rifle_anm1"		%anm_args}	
			else  "sc_human_flag_anm_instance_mgun"			{ani_play "%mgun_anm1"		%anm_args}	
			else  "sc_human_flag_anm_instance_bazooka"		{ani_play "%bazooka_anm1"	%anm_args}	
			else											{ani_play "%unrmd_anm1"		%anm_args}}
		}
	}
)	
; // usage example:
;	("SC_H_Request_Define_Play_Animation_States"	
;		pstol_anm()	
;		rifle_anm() 	
;		mgun_anm()	
;		bazooka_anm() 	
;		melee_anm()
;		unrmd_anm()
;		anm_args(loop)
;	)

;	<<<< ------------------------------------------------- >>>> 
;	<< [=============== Animation Helpers ===============] >>
;	<<<< ------------------------------------------------- >>>>	

{On "SC_H_Request_Call_Callin_Exit"
	(define "lv40k_stormboy_arrival_ai_enable_attempt"	; // BUZZ: <- generalize this definite to be used within other call-in events later!
		{auto_operatable 1}
		{able select 1}
		{volumes enable bullet touch select visible}
		{able minimap 1}
		{drop_orders}
	)
	
	; // BUZZ: failsafe for framerate.
	("lv40k_stormboy_arrival_ai_enable_attempt")
	{delay 0.1 ("lv40k_stormboy_arrival_ai_enable_attempt")}
	{delay 0.5 ("lv40k_stormboy_arrival_ai_enable_attempt")}
	{delay 1.0 ("lv40k_stormboy_arrival_ai_enable_attempt")}
	
	{delay 1.5	{volumes enable blast contact}}		; // BUZZ: <- add delay to blast so the other boys that come alongside him doesn't blast the already landed units.
}