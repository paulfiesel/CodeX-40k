
(Define "SC_FSM_POSING_LV40k_Orkboy_Stop_All"
	; // Same as GEM_Default
)

(Define "SC_FSM_POSING_LV40k_Orkboy_Events"
	; // Same as GEM_Default
)

; =============================================================================================================
; // POSING 
; =============================================================================================================

(Define "SC_FSM_POSING_LV40k_Orkboy_Play_Posing"
	("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_fsm_anim_orkz")	anm_args(callback)			
		pstol_anm(stand_idle_1hand_mask)			pstol_anm1()					
		rifle_anm(stand_look_around_gun_mask) 		rifle_anm1() 	
		mgun_anm(stand_look_around_gun_mask)		mgun_anm1()
		bazooka_anm(stand_idle_empty_1_mask)		bazooka_anm1()	
		unrmd_anm(stand_idle_empty_1_mask)			unrmd_anm1()			
	)
)