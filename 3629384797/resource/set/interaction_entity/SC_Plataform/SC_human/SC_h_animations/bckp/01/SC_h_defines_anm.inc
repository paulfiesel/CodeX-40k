
;	<<<< ------------------------------------------------------------ >>>> 
;	<< [=============== IKs and Helper Bones Defines ===============] >>
;	<<<< ------------------------------------------------------------ >>>>

(define "SC_H_Request_Define_Animations_Enable_IKs"
;	{ik_enable "#hr_marine-aim_h" 1}
;	{ik_enable "#hr_marine-aim_v" 1}
)

(define "SC_H_Request_Define_Animations_Block_IKs"
;	{ik_enable "hr_marine_aim_ref_h" 0}
;	{ik_enable "hr_marine_aim_ref_v" 0}
)

;	<<<< ------------------------------------------------- >>>> 
;	<< [=============== Animation Defines ===============] >>
;	<<<< ------------------------------------------------- >>>>

(define "SC_H_Request_Define_Play_Animation"	
	{if tagged "@@@@@@@@@@@@"
;	else tagged "sc_h_skin_tag_skeleton_halo_marine"		{ani_play "hr_marine-%anm" %anm_args}	{ani_play "hr_marine-%anm1" %anm_args}
;	else tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"	{ani_play "lv40k_sms-%anm" %anm_args}	{ani_play "lv40k_sms-%anm1" %anm_args}

	else													{ani_play "%anm" %anm_args}				{ani_play "%anm1" %anm_args}
	}
)		

(define "SC_H_Request_Define_Play_Animation_States"
	{if   "sc_human_flag_anm_instance_pistol"		("SC_H_Request_Define_Play_Animation"	anm(%pstol_anm)		anm1(%pstol_anm1)		anm_args(%anm_args))
	else  "sc_human_flag_anm_instance_rifle"		("SC_H_Request_Define_Play_Animation"	anm(%rifle_anm)		anm1(%rifle_anm1)		anm_args(%anm_args))
	else  "sc_human_flag_anm_instance_mgun"			("SC_H_Request_Define_Play_Animation"	anm(%mgun_anm)		anm1(%mgun_anm1)		anm_args(%anm_args))
	else  "sc_human_flag_anm_instance_bazooka"		("SC_H_Request_Define_Play_Animation"	anm(%bazooka_anm)	anm1(%bazooka_anm1)		anm_args(%anm_args))
	else  "sc_human_flag_anm_instance_melee"		("SC_H_Request_Define_Play_Animation"	anm(%melee_anm)		anm1(%melee_anm1)		anm_args(%anm_args))
	else											("SC_H_Request_Define_Play_Animation"	anm(%unrmd_anm)		anm1(%unrmd_anm1)		anm_args(%anm_args))					
	}
)	

;	("SC_H_Request_Define_Play_Animation_States"	
;		pstol_anm(armed_pistol_squat_move_front_down)	
;		rifle_anm(armed_rifle_squat_move_front_down) 	
;		mgun_anm()	
;		bazooka_anm() 	
;		melee_anm()
;		unrmd_anm()
;		anm_args(loop)
;	)