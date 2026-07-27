
(Define "SC_FSM_IDLE_LV40k_Orkboy_Stop_All"
	{Ani_Stop "lv40k_ork-stand_loota_idle_up"}
	{Ani_Stop "lv40k_ork-stand_loota_idle_down"}
	
	{Ani_Stop "lv40k_ork-stand_loota_snipe_idle"}
	{Ani_Stop "lv40k_ork-stand_rifle_snipe_idle"}
	
	{Ani_Stop "lv40k_ork-stand_rifle_idle_down"}
	{Ani_Stop "lv40k_ork-stand_rifle_idle_up"}
)

(Define "SC_FSM_IDLE_LV40k_Orkboy_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_IDLE_LV40k_Orkboy_Play_Idle_Standing"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_idle_up) 
			anm1(lv40k_ork-stand_loota_idle_down)
		)
	else tagged "sc_h_skin_tag_skeleton_lv40k_orknob"
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		anm_args(1.0)	
			pstol_anm(pose_stand_fire_pistol_down_mask)		pstol_anm1(pose_stand_fire_pistol_up_mask)
			rifle_anm(pose_stand_fire_mgun_down_mask) 		rifle_anm1(pose_stand_fire_mgun_up_mask)	
			mgun_anm(pose_stand_fire_mgun_down_mask)		mgun_anm1(pose_stand_fire_mgun_up_mask)	
			bazooka_anm()									bazooka_anm1()
			unrmd_anm(stand_idle_empty_for_pose)			unrmd_anm1()
		)
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		anm_args(1.0)	
			pstol_anm(pose_stand_fire_pistol_down_mask)		pstol_anm1(pose_stand_fire_pistol_up_mask)
			rifle_anm(pose_stand_fire_mgun_down_mask) 		rifle_anm1(pose_stand_fire_mgun_up_mask)	
			mgun_anm(pose_stand_fire_mgun_down_mask)		mgun_anm1(pose_stand_fire_mgun_up_mask)	
			bazooka_anm()									bazooka_anm1()
			unrmd_anm(stand_idle_empty_for_pose)			unrmd_anm1()
		)
	}
)

(Define "SC_FSM_IDLE_LV40k_Orkboy_Play_Idle_Crouch"
	("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_fsm_anim_orkz")				anm_args(1.0)	
		pstol_anm(pose_squat_fire_pistol_mask)		pstol_anm1()
		rifle_anm(pose_squat_fire_gun_mask) 		rifle_anm1()
		mgun_anm(pose_squat_fire_gun_mask)			mgun_anm1()
		bazooka_anm(pose_squat_bazooka_mask)		bazooka_anm1()
		unrmd_anm(pose_squat_empty_mask)			unrmd_anm1()
	)
)

(Define "SC_FSM_IDLE_LV40k_Orkboy_Play_Idle_Lying"
	("SC_H_Request_Define_Animation_State"		chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		anm_args(1.0)	
		pstol_anm(pose_lie_pistol_mask)			pstol_anm1()
		rifle_anm(pose_lie_gun_mask)			rifle_anm1()
		mgun_anm(pose_lie_mgun_mask)			mgun_anm1()
		bazooka_anm(pose_lie_bazooka_mask)		bazooka_anm1()
		unrmd_anm(pose_lie_empty_mask)			unrmd_anm1()
	)
)

(Define "SC_FSM_IDLE_LV40k_Orkboy_Play_Idle_Snipe"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-stand_loota_snipe_idle) 
		)
	else
		("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1.0)	
			pstol_anm(pose_snipe_pistol_mask)			pstol_anm1()
			rifle_anm(lv40k_ork-stand_rifle_snipe_idle) rifle_anm1()
			mgun_anm(lv40k_ork-stand_rifle_snipe_idle)	mgun_anm1()
			bazooka_anm(pose_snipe_gun_mask)			bazooka_anm1()
			unrmd_anm(pose_snipe_pistol_mask)			unrmd_anm1()
		)
	}
)
