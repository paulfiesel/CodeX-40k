
(Define "SC_FSM_POSING_GEM_Default_Stop_All"
	{Ani_Stop "stand_idle_1hand_mask"}
	{Ani_Stop "stand_idle_empty_1_mask"}
	{Ani_Stop "stand_look_around_gun_mask"}
	
	; // TEST
	{Ani_Stop "lv40k_scout-idle_looking_bolter"}
)

(Define "SC_FSM_POSING_GEM_Default_Events"
	{on animation_end "stand_idle_empty_1_mask" 			{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "stand_idle_1hand_mask" 				{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "stand_look_around_gun_mask" 			{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "lv40k_scout-idle_looking_bolter" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
)

; =============================================================================================================
; // POSING 
; =============================================================================================================

(Define "SC_FSM_POSING_GEM_Default_Play_Posing"

	; // 40k TEST
	{if tagged "sc_h_skin_tag_skeleton_lv40k_scout"
		("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(callback)				
			pstol_anm(stand_idle_1hand_mask)			pstol_anm1()					
			rifle_anm(lv40k_scout-idle_looking_bolter)	rifle_anm1() 	
			mgun_anm(lv40k_scout-idle_looking_bolter)	mgun_anm1()
			bazooka_anm(stand_idle_empty_1_mask)		bazooka_anm1()	
			unrmd_anm(stand_idle_empty_1_mask)			unrmd_anm1()			
		)
	
	else
		("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_fsm_anim_default")	anm_args(callback)				
			pstol_anm(stand_idle_1hand_mask)			pstol_anm1()					
			rifle_anm(stand_look_around_gun_mask) 		rifle_anm1() 	
			mgun_anm(stand_look_around_gun_mask)		mgun_anm1()
			bazooka_anm(stand_idle_empty_1_mask)		bazooka_anm1()	
			unrmd_anm(stand_idle_empty_1_mask)			unrmd_anm1()			
		)
	}
)