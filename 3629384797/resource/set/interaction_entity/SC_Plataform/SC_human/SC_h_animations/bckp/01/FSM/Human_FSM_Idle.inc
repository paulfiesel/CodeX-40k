
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

(define "SC_FSM_IDLE_Define_Play_Animations"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
		("SC_H_Request_Define_Play_Animation_States"	
			pstol_anm()										pstol_anm1()
			rifle_anm(lv40k_sms-bolter_aim) 				rifle_anm1()
			mgun_anm(lv40k_sms-h_Bolter_aim)				mgun_anm1()
			bazooka_anm() 									bazooka_anm1()
			melee_anm()										melee_anm1()
			unrmd_anm()										unrmd_anm1()
			anm_args()		
		)
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"		; <- temp!
		("SC_H_Request_Define_Play_Animation_States"	
			pstol_anm()										pstol_anm1(lv40k_Term_aim_stand)
			rifle_anm() 									rifle_anm1()
			mgun_anm()										mgun_anm1()
			bazooka_anm() 									bazooka_anm1()
			melee_anm()										melee_anm1()
			unrmd_anm()										unrmd_anm1()
			anm_args(loop)		
		)
	else tagged "lv40k_human_tag_weapon_deffgun"				; <- temp!
		("SC_H_Request_Define_Play_Animation_States"	
			pstol_anm()										pstol_anm1()
			rifle_anm() 									rifle_anm1(lv40k_orkboy_loota_pose)
			mgun_anm()										mgun_anm1(lv40k_orkboy_loota_pose)
			bazooka_anm() 									bazooka_anm1()
			melee_anm()										melee_anm1()
			unrmd_anm()										unrmd_anm1()
			anm_args()		
		)
	else
		("SC_H_Request_Define_Play_Animation_States"	
			pstol_anm()										pstol_anm1()
			rifle_anm(pose_stand_fire_mgun_down_mask) 		rifle_anm1(pose_stand_fire_mgun_up_mask)
			mgun_anm(pose_stand_fire_mgun_down_mask)		mgun_anm1(pose_stand_fire_mgun_up_mask)
			bazooka_anm()									bazooka_anm1()
			melee_anm()										melee_anm1()
			unrmd_anm()										unrmd_anm1()
			anm_args(3.0 loop)		
		)
	}
	{Delay 0.1 "Pose_fix"
		{Ani_Stop "pose_stand_fire_mgun_up_mask"}
		{Ani_Stop "pose_stand_fire_mgun_down_mask"}
		{Ani_Stop "lv40k_sms-bolter_aim"}
	}
)

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_IDLE_Define_Enter"
)

(define "SC_FSM_IDLE_Define_Event"
	("SC_FSM_IDLE_Define_Play_Animations")
)

(define "SC_FSM_IDLE_Define_Exit"
	{Kill_delay "Pose_fix"}
	
	{Ani_Stop "pose_stand_fire_mgun_up_mask"}
	{Ani_Stop "pose_stand_fire_mgun_down_mask"}
	{Ani_Stop "lv40k_sms-bolter_aim"}
	{Ani_stop "lv40k_sms-h_Bolter_aim"}
	
	{Ani_stop "lv40k_term_aim_stand"}
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

; // ...




