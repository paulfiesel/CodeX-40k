
(Define "SC_FSM_STANCE_LV40k_Space_Marine_Stop_All"
	; [...] // ONLY A FEW ARE shared with GEM_Default
	
	{Ani_Stop "lv40k_sms-stand_hammer_squat_from_stand"}
	{Ani_Stop "lv40k_sms-stand_bolter_squat_from_stand"}
	{Ani_Stop "lv40k_sms-stand_h_bolter_squat_from_stand"}
	{Ani_Stop "lv40k_sms-stand_pistol_squat_from_stand"}
)

(Define "SC_FSM_STANCE_LV40k_Space_Marine_Events"
	; [...] // ONLY A FEW ARE shared with GEM_Default
	
	{on animation_end "lv40k_sms-stand_hammer_squat_from_stand"		("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "lv40k_sms-stand_bolter_squat_from_stand"		("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "lv40k_sms-stand_h_bolter_squat_from_stand"	("SC_FSM_STANCE_Define_Animation_End")}
	{on animation_end "lv40k_sms-stand_pistol_squat_from_stand"		("SC_FSM_STANCE_Define_Animation_End")}
)


; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_STANCE_LV40k_Space_Marine_Stand_To_Crouch"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_h_bolter_squat_from_stand) 
		)
	else tagged "lv40k_human_tag_weapon_thunderhammer"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hammer_squat_from_stand) 
		)
	else
		("SC_H_Request_Define_Animation_State"						chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")			anm_args(1.0 callback)	
			pstol_anm(squat_from_stand_pistol_mask)					pstol_anm1()
			rifle_anm(squat_from_stand_gun_mask)					rifle_anm1()
			mgun_anm(squat_from_stand_gun_mask)						mgun_anm1()
			bazooka_anm(squat_from_stand_bazooka_mask)				bazooka_anm1()
			unrmd_anm(squat_from_stand_empty_mask)					unrmd_anm1()
		)
	}
)

(Define "SC_FSM_STANCE_LV40k_Space_Marine_Crouch_To_Stand"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(-1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_h_bolter_squat_from_stand) 
		)
	else tagged "lv40k_human_tag_weapon_thunderhammer"
		("SC_H_Request_Define_Animation_Single"	anm_args(-1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hammer_squat_from_stand) 
		)
	else
		("SC_H_Request_Define_Animation_State"						chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")			anm_args(-1.0 callback)	
			pstol_anm(squat_from_stand_pistol_mask)					pstol_anm1()
			rifle_anm(squat_from_stand_gun_mask)					rifle_anm1()
			mgun_anm(squat_from_stand_gun_mask)						mgun_anm1()
			bazooka_anm(squat_from_stand_bazooka_mask)				bazooka_anm1()
			unrmd_anm(squat_from_stand_empty_mask)					unrmd_anm1()
		)
	}
)

(Define "SC_FSM_STANCE_LV40k_Space_Marine_Crouch_To_Prone"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")			anm_args(1.0 callback)	
		pstol_anm(lie_from_squat_pistol_mask)			pstol_anm1()
		rifle_anm(lie_from_squat_gun_mask)				rifle_anm1()
		mgun_anm(lie_from_squat_mgun_mask)				mgun_anm1()
		bazooka_anm(lie_from_squat_bazooka_mask)		bazooka_anm1()
		unrmd_anm(lie_from_squat_gun_mask)				unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Space_Marine_Prone_To_Crouch"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")			anm_args(-1.0 callback)	
		pstol_anm(lie_from_squat_pistol_mask)			pstol_anm1()
		rifle_anm(lie_from_squat_gun_mask)				rifle_anm1()
		mgun_anm(lie_from_squat_mgun_mask)				mgun_anm1()
		bazooka_anm(lie_from_squat_bazooka_mask)		bazooka_anm1()
		unrmd_anm(lie_from_squat_gun_mask)				unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Space_Marine_Stand_To_Prone"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")			anm_args(1.0 callback)	
		pstol_anm(lie_from_stand_mask)					pstol_anm1()
		rifle_anm(lie_from_stand_mask)					rifle_anm1()
		mgun_anm(lie_from_stand_mask)					mgun_anm1()
		bazooka_anm(lie_from_stand_1_mask)				bazooka_anm1()
		unrmd_anm(lie_from_stand_mask)					unrmd_anm1()
	)
)

(Define "SC_FSM_STANCE_LV40k_Space_Marine_Prone_To_Stand"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")			anm_args(-1.0 callback)	
		pstol_anm(lie_from_stand_mask)					pstol_anm1()
		rifle_anm(lie_from_stand_mask)					rifle_anm1()
		mgun_anm(lie_from_stand_mask)					mgun_anm1()
		bazooka_anm(lie_from_stand_1_mask)				bazooka_anm1()
		unrmd_anm(lie_from_stand_mask)					unrmd_anm1()
	)
)
