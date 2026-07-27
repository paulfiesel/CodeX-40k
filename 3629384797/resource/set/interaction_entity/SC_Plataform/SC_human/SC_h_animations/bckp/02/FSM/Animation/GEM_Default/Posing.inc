
(Define "SC_FSM_POSING_GEM_Default_Stop_All"
	{Ani_Stop "stand_look_around_gun_mask"}
)

(Define "SC_FSM_POSING_GEM_Default_Events"
	{on animation_end "stand_look_around_gun_mask" 
		("SC_FSM_Define_Reset_Callback" state(POSING))
	}
)

; =============================================================================================================
; // POSING 
; =============================================================================================================

(Define "SC_FSM_POSING_GEM_Default_Play_Posing"
	("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_skeleton_gem_default")	anm_args(callback)				
		pstol_anm()									pstol_anm1()					
		rifle_anm(stand_look_around_gun_mask) 		rifle_anm1() 	
		mgun_anm(stand_look_around_gun_mask)		mgun_anm1()
		bazooka_anm()								bazooka_anm1()	
		unrmd_anm()									unrmd_anm1()			
	)
)