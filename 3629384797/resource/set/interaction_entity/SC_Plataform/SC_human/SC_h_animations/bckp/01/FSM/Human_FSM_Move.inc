
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

(define "SC_FSM_MOVE_Define_Play_Animations"
	{if tagged "@@@"
	else tagged "SC_FSM_MOVE_Tag_Strafe_Back"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(lv40k_sms-bolter_strafe_back) 		rifle_anm1()
				mgun_anm()										mgun_anm1()
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(loop)		
			)
		else tagged "sc_h_skin_tag_skeleton_lv40k_orkboy"
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(walk_normal_mgun_up_mask)				rifle_anm1(run_back_spot_gun_down_mask)
				mgun_anm(walk_normal_mgun_up_mask)				mgun_anm1(run_back_spot_gun_down_mask)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(1 loop)		
			)
		else tagged "sc_h_skin_tag_skeleton_lv40k_orknob"
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(walk_normal_mgun_up_mask)				rifle_anm1(run_back_spot_gun_down_mask)
				mgun_anm(walk_normal_mgun_up_mask)				mgun_anm1(run_back_spot_gun_down_mask)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(1 loop)		
			)
		else
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(run_back_spot_gun_down_mask)			rifle_anm1(run_back_spot_gun_up_mask)
				mgun_anm(run_back_spot_gun_down_mask)			mgun_anm1(run_back_spot_gun_up_mask)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(1.8 loop)		
			)
		}
	else tagged "SC_FSM_MOVE_Tag_Strafe_Left"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(lv40k_sms-bolter_strafe_right) 		rifle_anm1()
				mgun_anm()										mgun_anm1()
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(loop)		
			)
		else
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(run_spot_left-strafe_gun_down_mask)	rifle_anm1(run_spot_left-strafe_gun_up_mask)
				mgun_anm(run_spot_left-strafe_gun_down_mask)	mgun_anm1(run_spot_left-strafe_gun_up_mask)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(1.2 loop)		
			)
		}
	else tagged "SC_FSM_MOVE_Tag_Strafe_Right"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(lv40k_sms-bolter_strafe_left) 		rifle_anm1()
				mgun_anm()										mgun_anm1()
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(loop)		
			)
		else
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(run_spot_back-strafe_gun_down_mask)	rifle_anm1(run_spot_back-strafe_gun_up_mask)
				mgun_anm(run_spot_back-strafe_gun_down_mask)	mgun_anm1(run_spot_back-strafe_gun_up_mask)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(1.2 loop)		
			)
		}
	else tagged "SC_FSM_MOVE_Tag_Strafe_Slow"
		("SC_H_Request_Define_Play_Animation_States"	
			pstol_anm()										pstol_anm1()
			rifle_anm(walk_spot_gun_down_mask)				rifle_anm1(walk_spot_gun_up_mask)
			mgun_anm(walk_spot_gun_down_mask)				mgun_anm1(walk_spot_gun_up_mask)
			bazooka_anm()									bazooka_anm1()
			melee_anm()										melee_anm1()
			unrmd_anm()										unrmd_anm1()
			anm_args(2.25 loop)		
		)
	else tagged "SC_FSM_MOVE_Tag_Strafe_Fast"
		("SC_H_Request_Define_Play_Animation_States"	
			pstol_anm()										pstol_anm1()
			rifle_anm(run_spot_gun_down_mask)				rifle_anm1(run_spot_gun_up_mask)
			mgun_anm(run_spot_gun_down_mask)				mgun_anm1(run_spot_gun_up_mask)
			bazooka_anm()									bazooka_anm1()
			melee_anm()										melee_anm1()
			unrmd_anm()										unrmd_anm1()
			anm_args(1.15 loop)		
		)
	else tagged "SC_FSM_MOVE_Tag_S_Slow"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(lv40k_sms-bolter_walk_slow) 			rifle_anm1(lv40k_sms-)
				mgun_anm(lv40k_sms-bolter_walk_slow)			mgun_anm1(lv40k_sms-)
				bazooka_anm() 									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(loop)		
			)
		else
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(run_slow_down_mask) 					rifle_anm1(run_slow_gun_up_mask)
				mgun_anm(run_slow_down_mask)					mgun_anm1(run_slow_gun_up_mask)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(3.0 loop)		
			)
		}
	else tagged "SC_FSM_MOVE_Tag_S_Fast"
		(define "hfsm_m_speed_fast"
			{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
				("SC_H_Request_Define_Play_Animation_States"	
					pstol_anm()										pstol_anm1()
					rifle_anm(lv40k_sms-bolter_sprint) 				rifle_anm1(lv40k_sms-)
					mgun_anm(lv40k_sms-h_bolter_sprint)				mgun_anm1(lv40k_sms-)
					bazooka_anm() 									bazooka_anm1()
					melee_anm()										melee_anm1()
					unrmd_anm()										unrmd_anm1()
					anm_args(%1 loop)		
				)
			else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"		; <- temp!
				("SC_H_Request_Define_Play_Animation_States"	
					pstol_anm()										pstol_anm1(lv40k_Term_run_sprint)
					rifle_anm() 									rifle_anm1()
					mgun_anm()										mgun_anm1()
					bazooka_anm() 									bazooka_anm1()
					melee_anm()										melee_anm1()
					unrmd_anm()										unrmd_anm1(lv40k_Term_run_sprint)
					anm_args(%1 loop)		
				)
			else tagged "lv40k_human_tag_weapon_deffgun"				; <- temp!
				("SC_H_Request_Define_Play_Animation_States"	
					pstol_anm()										pstol_anm1()
					rifle_anm() 									rifle_anm1(lv40k_lootaboy_run)
					mgun_anm()										mgun_anm1(lv40k_lootaboy_run)
					bazooka_anm() 									bazooka_anm1()
					melee_anm()										melee_anm1()
					unrmd_anm()										unrmd_anm1()
					anm_args(%1 loop)		
				)
			else
				("SC_H_Request_Define_Play_Animation_States"	
					pstol_anm(run_bow_tocover_down_mask)			pstol_anm1(run_bow_tocover_up_mask)
					rifle_anm(run_bow_gun_tocover_down_mask) 		rifle_anm1(run_bow_gun_tocover_up_mask)
					mgun_anm(run_bow_gun_tocover_down_mask)			mgun_anm1(run_bow_gun_tocover_up_mask)
					bazooka_anm()									bazooka_anm1()
					melee_anm()										melee_anm1()
					unrmd_anm(run_bow_tocover_down_mask)			unrmd_anm1(run_bow_tocover_up_mask)
					anm_args(%0 loop)		
				)
			}
		)
		{if tagged "f_vel_24" ("hfsm_m_speed_fast" args 3.0 1.0)}
		{if tagged "f_vel_21" ("hfsm_m_speed_fast" args 3.0 1.0)}
		{if tagged "f_vel_18" ("hfsm_m_speed_fast" args 3.0 1.0)}
		{if tagged "f_vel_15" ("hfsm_m_speed_fast" args 3.0 1.0)}
		{if tagged "f_vel_12" ("hfsm_m_speed_fast" args 3.0 1.0)}
		{if tagged "f_vel_9" ("hfsm_m_speed_fast" args 3.0 1.0)}
		{if tagged "f_vel_6" ("hfsm_m_speed_fast" args 3.0 1.0)}
		
	else tagged "SC_FSM_MOVE_Tag_S_Normal"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(lv40k_sms-bolter_walk_aim) 			rifle_anm1(lv40k_sms-)
				mgun_anm(lv40k_sms-h_bolter_walk)				mgun_anm1(lv40k_sms-)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(loop)		
			)
		else tagged "lv40k_human_tag_weapon_deffgun"				; <- temp!
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm() 									rifle_anm1(lv40k_lootaboy_walk)
				mgun_anm()										mgun_anm1(lv40k_lootaboy_walk)
				bazooka_anm() 									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(loop)		
			)
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"		; <- temp!
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1(lv40k_Term_run_2)
				rifle_anm() 									rifle_anm1()
				mgun_anm()										mgun_anm1()
				bazooka_anm() 									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(loop)		
			)
		else
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm(walk_normal_pistol_down_mask)			pstol_anm1(walk_normal_pistol_up_mask)
				rifle_anm(walk_normal_rifle_up_mask)			rifle_anm1(walk_normal_rifle_down_mask)
				mgun_anm(walk_normal_rifle_up_mask)				mgun_anm1(walk_normal_rifle_down_mask)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(2.0 loop)		
			)
		}
	else tagged "SC_FSM_MOVE_Tag_S_Jog"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm(lv40k_sms-bolter_walk) 				rifle_anm1(lv40k_sms)
				mgun_anm(lv40k_sms-h_bolter_walk)				mgun_anm1(lv40k_sms-)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(loop)		
			)
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"		; <- temp!
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1(lv40k_Term_aim_run_1)
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
				rifle_anm() 									rifle_anm1(lv40k_lootaboy_walk)
				mgun_anm()										mgun_anm1(lv40k_lootaboy_walk)
				bazooka_anm() 									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(loop)		
			)
		else
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm(run_down_mask)						pstol_anm1(run_empty_up)
				rifle_anm(run_down_mask)						rifle_anm1(run_gun_up_mask)
				mgun_anm(run_down_mask)							mgun_anm1(run_gun_up_mask)
				bazooka_anm()									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(1.8 loop)		
			)
		}
	}
)

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_MOVE_Define_Enter"
)

(define "SC_FSM_MOVE_Define_Event"
	("SC_FSM_MOVE_Define_Play_Animations")
)

(define "SC_FSM_MOVE_Define_Exit"
	{ani_stop "lv40k_Term_aim_run_1"}
	{Ani_stop "lv40k_Term_run_2"}
	{Ani_stop "lv40k_Term_run_3"}
	{Ani_stop "lv40k_Term_run_4"}
	{Ani_stop "lv40k_Term_run_sprint"}
	
	{Ani_Stop "walk_spot_gun_up_mask"}
	{Ani_Stop "walk_spot_gun_down_mask"}
	{Ani_Stop "run_spot_gun_up_mask"}
	{Ani_Stop "run_spot_gun_down_mask"}
	
	{Ani_Stop "lv40k_lootaboy_run"}
	{Ani_Stop "lv40k_lootaboy_walk"}
	
	{Ani_Stop "lv40k_sms-h_bolter_sprint"}
	{Ani_Stop "lv40k_sms-h_bolter_walk"}
	
	{Ani_Stop "lv40k_sms-bolter_sprint"}
	{Ani_Stop "lv40k_sms-bolter_walk_aim"}
	{Ani_Stop "lv40k_sms-bolter_walk"}
	
	{Ani_Stop "lv40k_sms-bolter_strafe_back"}
	{Ani_Stop "lv40k_sms-bolter_strafe_left"}
	{Ani_Stop "lv40k_sms-bolter_strafe_right"}
	{Ani_Stop "lv40k_sms-bolter_walk_slow"}
	
	{Ani_Stop "run_slow_gun_up_mask"}
	{Ani_Stop "run_slow_down_mask"}

	{Ani_Stop "run_back_spot_gun_down_mask"}
	{Ani_Stop "run_back_spot_gun_up_mask"}
	{Ani_Stop "run_spot_back-strafe_gun_down_mask"}
	{Ani_Stop "run_spot_back-strafe_gun_up_mask"}
	{Ani_Stop "run_spot_left-strafe_gun_down_mask"}
	{Ani_Stop "run_spot_left-strafe_gun_up_mask"}

	{Ani_Stop "walk_normal_rifle_down_mask"}
	{Ani_Stop "walk_normal_rifle_up_mask"}
	{Ani_Stop "run_bow_gun_tocover_down_mask"}
	{Ani_Stop "run_bow_gun_tocover_up_mask"}
	{Ani_Stop "run_down_mask"}
	{Ani_Stop "run_gun_up_mask"}
	
	{Ani_Stop "run_bow_tocover_down_mask"}
	{Ani_Stop "run_bow_tocover_up_mask"}
	
	{Ani_Stop "run_empty_up"}
	{Ani_Stop "walk_normal_pistol_down_mask"}
	{Ani_Stop "walk_normal_pistol_up_mask"}
	
	{Ani_Stop "walk_normal_mgun_up_mask"}
	
	{Ani_Play "lv40k_sms-shldr_fix"}	; // <- TEMP!
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================
