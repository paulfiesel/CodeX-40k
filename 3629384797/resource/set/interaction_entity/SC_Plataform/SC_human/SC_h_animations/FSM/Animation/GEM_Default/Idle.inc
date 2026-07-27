
(Define "SC_FSM_IDLE_GEM_Default_Stop_All"
	{Ani_Stop "pose_stand_fire_mgun_up_mask"}
	{Ani_Stop "pose_stand_fire_mgun_down_mask"}
	
	{Ani_Stop "pose_stand_fire_mgun_up_1_mask"}
	{Ani_Stop "pose_stand_fire_mgun_down_1_mask"}
	
	{Ani_Stop "pose_stand_fire_pistol_up_mask"}
	{Ani_Stop "pose_stand_fire_pistol_down_mask"}
	{Ani_Stop "pose_stand_fire_rifle_up_mask"}
	{Ani_Stop "pose_stand_fire_rifle_down_mask"}
	
	{Ani_Stop "pose_stand_bazooka_Mask"}
	
	{Ani_Stop "pose_snipe_gun_mask"}
	{Ani_Stop "pose_snipe_pistol_mask"}	
	
	{Ani_Stop "stand_idle_empty_for_pose"}
	
	; // 40k TEST
	{Ani_Stop "lv40k_scout-stand_bolter_idle_down_aim"}
	{Ani_Stop "lv40k_scout-stand_bolter_idle_up_aim"}
	{Ani_Stop "lv40k_scout-crouch_bolter_idle_aim"}
)

(Define "SC_FSM_IDLE_GEM_Default_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_IDLE_GEM_Default_Play_Idle_Standing"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_servitor"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_skeleton_lv40k_servitor")		
			anm(stand_idle_empty_for_pose) 
		)
	else tagged "sc_h_skin_tag_skeleton_lv40k_scout"
		("SC_H_Request_Define_Animation_State_MOVE"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(1.0)	
			pstol_anm(pose_stand_fire_pistol_down_mask)			pstol_anm1(pose_stand_fire_pistol_up_mask)
			rifle_anm(pose_stand_fire_rifle_down_mask) 			rifle_anm1(pose_stand_fire_rifle_up_mask)
			mgun_anm(lv40k_scout-stand_bolter_idle_down_aim)	mgun_anm1(lv40k_scout-stand_bolter_idle_up_aim)
			bazooka_anm(pose_stand_bazooka_Mask)				bazooka_anm1()
			unrmd_anm(stand_idle_empty_for_pose)				unrmd_anm1()
		)
	else
		("SC_H_Request_Define_Animation_State_MOVE"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(1.0)	
			pstol_anm(pose_stand_fire_pistol_down_mask)			pstol_anm1(pose_stand_fire_pistol_up_mask)
			rifle_anm(pose_stand_fire_rifle_down_mask) 			rifle_anm1(pose_stand_fire_rifle_up_mask)
			mgun_anm(pose_stand_fire_mgun_down_mask)			mgun_anm1(pose_stand_fire_mgun_up_mask)
			bazooka_anm(pose_stand_bazooka_Mask)				bazooka_anm1()
			unrmd_anm(stand_idle_empty_for_pose)				unrmd_anm1()
		)
	}
)

(Define "SC_FSM_IDLE_GEM_Default_Play_Idle_Crouch"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_servitor"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_skeleton_lv40k_servitor")		
			anm(pose_squat_empty_mask) 
		)
	else
		{if in_cover
			("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(1.0)	
				pstol_anm(pose_squat_fire_pistol_mask)			pstol_anm1()
				rifle_anm(pose_squat_fire_gun_mask) 			rifle_anm1()
				mgun_anm(pose_squat_fire_gun_mask)				mgun_anm1()
				bazooka_anm(pose_squat_bazooka_mask)			bazooka_anm1()
				unrmd_anm(pose_squat_empty_mask)				unrmd_anm1()
			)
		else
			("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(1.0)	
				pstol_anm(pose_squat_fire_pistol_mask)			pstol_anm1()
				rifle_anm(pose_squat_fire_gun_mask) 			rifle_anm1()
				mgun_anm(lv40k_scout-crouch_bolter_idle_aim)	mgun_anm1()
				bazooka_anm(pose_squat_bazooka_mask)			bazooka_anm1()
				unrmd_anm(pose_squat_empty_mask)				unrmd_anm1()
			)	
		}
	}
)

(Define "SC_FSM_IDLE_GEM_Default_Play_Idle_Lying"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(1.0)	
		pstol_anm(pose_lie_pistol_mask)					pstol_anm1()
		rifle_anm(pose_lie_gun_mask)					rifle_anm1()
		mgun_anm(pose_lie_mgun_mask)					mgun_anm1()
		bazooka_anm(pose_lie_bazooka_mask)				bazooka_anm1()
		unrmd_anm(pose_lie_empty_mask)					unrmd_anm1()
	)
)

(Define "SC_FSM_IDLE_GEM_Default_Play_Idle_Snipe"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_servitor"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_skeleton_lv40k_servitor")		
			anm(stand_idle_empty_for_pose) 
		)
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(1.0)	
			pstol_anm(pose_stand_fire_pistol_down_mask)		pstol_anm1(pose_stand_fire_pistol_up_mask)
			rifle_anm(pose_snipe_gun_mask) 					rifle_anm1()
			mgun_anm(pose_snipe_gun_mask)					mgun_anm1()
			bazooka_anm(pose_snipe_gun_mask)				bazooka_anm1()
			unrmd_anm(stand_idle_empty_for_pose)			unrmd_anm1()
		)
	}
)
