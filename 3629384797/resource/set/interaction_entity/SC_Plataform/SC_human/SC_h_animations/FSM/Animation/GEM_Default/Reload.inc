
(Define "SC_FSM_RELOAD_GEM_Default_Stop_All"
	{Ani_Stop "stand_reload_gun_mask"}
	{Ani_Stop "stand_reload_pistol_mask"}
	{Ani_Stop "stand_reload_rifle_mask"}
	{Ani_Stop "stand_reload_mgun_mask"}
	{Ani_Stop "stand_reload_bazooka_mask"}
	
	{Ani_Stop "squat_reload_gun_mask"}
	{Ani_Stop "squat_reload_pistol_mask"}
	{Ani_Stop "squat_reload_rifle_mask"}
	{Ani_Stop "squat_reload_mgun_mask"}
	{Ani_Stop "squat_reload_bazooka_mask"}
	
	{Ani_Stop "lie_reload_gun_mask"}
	{Ani_Stop "lie_reload_pistol_mask"}
	{Ani_Stop "lie_reload_rifle_mask"}
	{Ani_Stop "lie_reload_mgun_mask"}
	{Ani_Stop "lie_reload_bazooka_mask"}
)

(Define "SC_FSM_RELOAD_GEM_Default_Events"
	{on animation_end "stand_reload_gun_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "stand_reload_pistol_mask"	("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "stand_reload_rifle_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "stand_reload_mgun_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "stand_reload_bazooka_mask"	("SC_FSM_RELOAD_Define_Animation_End")}
	
	{on animation_end "squat_reload_gun_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "squat_reload_pistol_mask"	("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "squat_reload_rifle_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "squat_reload_mgun_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "squat_reload_bazooka_mask"	("SC_FSM_RELOAD_Define_Animation_End")}
	
	{on animation_end "lie_reload_gun_mask"			("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "lie_reload_pistol_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "lie_reload_rifle_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "lie_reload_mgun_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
	{on animation_end "lie_reload_bazooka_mask"		("SC_FSM_RELOAD_Define_Animation_End")}
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_RELOAD_GEM_Default_Play_Standing"
	("SC_H_Request_Define_Animation_State"				chk(not tagged "scscsignore")		anm_args(0.8 callback)	
		pstol_anm(stand_reload_pistol_mask)				pstol_anm1()
		rifle_anm(stand_reload_rifle_mask) 				rifle_anm1()
		mgun_anm(stand_reload_mgun_mask)				mgun_anm1()
		bazooka_anm(stand_reload_bazooka_mask)			bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_RELOAD_GEM_Default_Play_Squatting"
	("SC_H_Request_Define_Animation_State"				chk(not tagged "scscignore")		anm_args(0.8 callback)	
		pstol_anm(squat_reload_pistol_mask)				pstol_anm1()
		rifle_anm(squat_reload_rifle_mask)				rifle_anm1()
		mgun_anm(squat_reload_mgun_mask)				mgun_anm1()
		bazooka_anm(squat_reload_bazooka_mask)			bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_RELOAD_GEM_Default_Play_Lying"
	("SC_H_Request_Define_Animation_State"				chk(not tagged "scscignore")		anm_args(0.8 callback)	
		pstol_anm(lie_reload_pistol_mask)				pstol_anm1()
		rifle_anm(lie_reload_rifle_mask)				rifle_anm1()
		mgun_anm(lie_reload_mgun_mask)					mgun_anm1()
		bazooka_anm(lie_reload_bazooka_mask)			bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)