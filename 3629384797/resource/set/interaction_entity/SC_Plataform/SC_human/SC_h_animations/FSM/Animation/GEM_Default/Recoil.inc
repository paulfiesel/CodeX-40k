
(Define "SC_FSM_RECOIL_GEM_Default_Stop_All"
	{Ani_Stop "stand_fire_pistol_down_mask"}
	{Ani_Stop "stand_fire_pistol_up_mask"}
	{Ani_Stop "stand_fire_rifle_down_mask"}
	{Ani_Stop "stand_fire_rifle_up_mask"}
	{Ani_Stop "stand_fire_mgun_down_mask"}
	{Ani_Stop "stand_fire_mgun_up_mask"}
	
	{Ani_Stop "squat_fire_pistol_down_mask"}
	{Ani_Stop "squat_fire_pistol_up_mask"}
	{Ani_Stop "squat_fire_rifle_down_mask"}
	{Ani_Stop "squat_fire_rifle_up_mask"}
	{Ani_Stop "squat_fire_mgun_down_mask"}
	{Ani_Stop "squat_fire_mgun_up_mask"}
	
	{Ani_Stop "lie_fire_pistol_mask"}
	{Ani_Stop "lie_fire_rifle_mask"}
	{Ani_Stop "lie_fire_bazooka_mask"}
	{Ani_Stop "lie_fire_gun_mask"}
	
	{Ani_Stop "SC_no_recoil"}
)

(Define "SC_FSM_RECOIL_GEM_Default_Events"
	{on animation_end "stand_fire_pistol_down_mask"	("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "stand_fire_pistol_up_mask"	("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "stand_fire_rifle_down_mask"	("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "stand_fire_rifle_up_mask"	("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "stand_fire_mgun_down_mask"	("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "stand_fire_mgun_up_mask"		("SC_FSM_RECOIL_Define_Animation_End")}
	
	{on animation_end "squat_fire_pistol_mask"		("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "squat_fire_mgun_mask"		("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "squat_fire_rifle_mask"		("SC_FSM_RECOIL_Define_Animation_End")}
	
	{on animation_end "lie_fire_pistol_mask"		("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "lie_fire_rifle_mask"			("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "lie_fire_bazooka_mask"		("SC_FSM_RECOIL_Define_Animation_End")}
	{on animation_end "lie_fire_gun_mask"			("SC_FSM_RECOIL_Define_Animation_End")}
	
	{on animation_end "SC_no_recoil"				("SC_FSM_RECOIL_Define_Animation_End")}
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_RECOIL_GEM_Default_Play_Standing"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(2.0 callback)	
		pstol_anm(stand_fire_pistol_down_mask)			pstol_anm1(stand_fire_pistol_up_mask)
		rifle_anm(stand_fire_rifle_down_mask) 			rifle_anm1(stand_fire_rifle_up_mask)
		mgun_anm(SC_no_recoil)							mgun_anm1()
		bazooka_anm(SC_no_recoil)						bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_RECOIL_GEM_Default_Play_Squatting"
	("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_fsm_anim_default")			anm_args(2.0 callback)	
		pstol_anm(squat_fire_pistol_mask)			pstol_anm1()
		rifle_anm(SC_no_recoil)						rifle_anm1()
		mgun_anm(SC_no_recoil)						mgun_anm1()
		bazooka_anm(SC_no_recoil)					bazooka_anm1()
		unrmd_anm()									unrmd_anm1()
	)
)

(Define "SC_FSM_RECOIL_GEM_Default_Play_Lying"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(1.5 callback)	
		pstol_anm(lie_fire_pistol_mask)					pstol_anm1()
		rifle_anm(lie_fire_rifle_mask)					rifle_anm1()
		mgun_anm(lie_fire_gun_mask)						mgun_anm1()
		bazooka_anm(SC_no_recoil)						bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)