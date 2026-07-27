
;	<<<< ------------------------------------------------------------ >>>> 
;	<< [=============== IKs and Helper Bones Defines ===============] >>
;	<<<< ------------------------------------------------------------ >>>>

(define "SC_H_Request_Define_Animations_Enable_IKs"
	{ik_enable "ik_leftright" 1}
	{ik_enable "ik_socket" 1}
)

(define "SC_H_Request_Define_Animations_Block_IKs"
	{ik_enable "ik_leftright" 0}
	{ik_enable "ik_socket" 0}
)

;	<<<< ------------------------------------------------- >>>> 
;	<< [=============== Animation Defines ===============] >>
;	<<<< ------------------------------------------------- >>>>	

(Define "SC_H_Request_Define_Play_Animation_States"
)

(define "SC_H_Request_Define_Animation_State"	
	{if %chk
		{if   "sc_human_flag_anm_instance_pistol"		{ani_play "%pstol_anm"		%anm_args}		{ani_play "%pstol_anm1"		%anm_args}
		else  "sc_human_flag_anm_instance_rifle"		{ani_play "%rifle_anm"		%anm_args}		{ani_play "%rifle_anm1"		%anm_args}
		else  "sc_human_flag_anm_instance_mgun"			{ani_play "%mgun_anm"		%anm_args}		{ani_play "%mgun_anm1"		%anm_args}
		else  "sc_human_flag_anm_instance_bazooka"		{ani_play "%bazooka_anm"	%anm_args}		{ani_play "%bazooka_anm1"	%anm_args}
		
		else  "sc_human_flag_anm_instance_customA"		{ani_play "%custom_varA"	%anm_args}		{ani_play "%custom_varA1"	%anm_args}
		else  "sc_human_flag_anm_instance_customB"		{ani_play "%custom_varB"	%anm_args}		{ani_play "%custom_varB1"	%anm_args}
		else  "sc_human_flag_anm_instance_customC"		{ani_play "%custom_varC"	%anm_args}		{ani_play "%custom_varC1"	%anm_args}
		else  "sc_human_flag_anm_instance_customD"		{ani_play "%custom_varD"	%anm_args}		{ani_play "%custom_varD1"	%anm_args}
		
		else											{ani_play "%unrmd_anm"		%anm_args}		{ani_play "%unrmd_anm1"		%anm_args}					
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