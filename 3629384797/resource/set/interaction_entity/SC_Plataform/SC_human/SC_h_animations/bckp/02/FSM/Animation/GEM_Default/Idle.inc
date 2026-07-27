
(Define "SC_FSM_IDLE_GEM_Default_Stop_All"
	{Kill_delay "Pose_fix"}
	
	{Ani_Stop "pose_stand_fire_mgun_up_mask"}
	{Ani_Stop "pose_stand_fire_mgun_down_mask"}
	{Ani_Stop "pose_stand_fire_pistol_up_mask"}
	{Ani_Stop "pose_stand_fire_pistol_down_mask"}
	{Ani_Stop "pose_stand_fire_rifle_up_mask"}
	{Ani_Stop "pose_stand_fire_rifle_down_mask"}
)

(Define "SC_FSM_IDLE_GEM_Default_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_IDLE_GEM_Default_Play_Idle"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_gem_default")			anm_args(-1)	
		pstol_anm(pose_stand_fire_pistol_down_mask)		pstol_anm1(pose_stand_fire_pistol_up_mask)
		rifle_anm(pose_stand_fire_rifle_down_mask) 		rifle_anm1(pose_stand_fire_rifle_up_mask)
		mgun_anm(pose_stand_fire_mgun_down_mask)		mgun_anm1(pose_stand_fire_mgun_up_mask)
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
	{Delay 0.1 "Pose_fix"
		{Ani_Stop "pose_stand_fire_mgun_up_mask"}
		{Ani_Stop "pose_stand_fire_mgun_down_mask"}
		{Ani_Stop "pose_stand_fire_pistol_up_mask"}
		{Ani_Stop "pose_stand_fire_pistol_down_mask"}
		{Ani_Stop "pose_stand_fire_rifle_up_mask"}
		{Ani_Stop "pose_stand_fire_rifle_down_mask"}
	}
)