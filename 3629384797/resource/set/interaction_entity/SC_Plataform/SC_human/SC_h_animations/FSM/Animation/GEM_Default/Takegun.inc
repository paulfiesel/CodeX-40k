
(Define "SC_FSM_TAKEGUN_GEM_Default_Stop_All"
	{Ani_Stop "stand_take_pistol_up_begin_mask"}
	{Ani_Stop "stand_take_pistol_up_end_mask"}
	{Ani_Stop "stand_take_gun_down_mask"}
	{Ani_Stop "stand_take_gun_up_mask"}
	{Ani_Stop "stand_take_mgun_down_mask"}
	{Ani_Stop "stand_take_mgun_up_mask"}
	{Ani_Stop "stand_take_bazooka_mask"}
	
	{Ani_Stop "squat_take_pistol_mask"}
	{Ani_Stop "squat_take_gun_mask"}
	{Ani_Stop "squat_take_bazooka_mask"}
	
	{Ani_Stop "squat_take_pistol_mask"}
	{Ani_Stop "squat_take_gun_mask"}
	{Ani_Stop "squat_take_bazooka_mask"}
)

(Define "SC_FSM_TAKEGUN_GEM_Default_Events"
)

; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_TAKEGUN_GEM_Default_Play_Take_Standing"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(%in)	
		pstol_anm(stand_take_pistol_up_end_mask)		pstol_anm1()
		rifle_anm(stand_take_gun_down_mask)				rifle_anm1(stand_take_gun_up_mask)
		mgun_anm(stand_take_mgun_down_mask)				mgun_anm1(stand_take_mgun_up_mask)
		bazooka_anm(stand_take_bazooka_mask)			bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_TAKEGUN_GEM_Default_Play_Take_Squatting"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(%in)	
		pstol_anm(squat_take_pistol_mask)				pstol_anm1()
		rifle_anm(squat_take_gun_mask)					rifle_anm1()
		mgun_anm(squat_take_gun_mask)					mgun_anm1()
		bazooka_anm(squat_take_bazooka_mask)			bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_TAKEGUN_GEM_Default_Play_Take_Lying"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(%in)	
		pstol_anm(lie_take_pistol_mask)					pstol_anm1()
		rifle_anm(lie_take_gun_mask)					rifle_anm1()
		mgun_anm(lie_take_gun_mask)						mgun_anm1()
		bazooka_anm(lie_take_gun_mask)					bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)
