
(Define "SC_FSM_POSING_LV40k_Warrior_Stop_All"
	{Ani_Stop "lv40k_wrr_stand_idle"}
)

(Define "SC_FSM_POSING_LV40k_Warrior_Events"
	{on animation_end "lv40k_wrr_stand_idle" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
)

; =============================================================================================================
; // POSING 
; =============================================================================================================

(Define "SC_FSM_POSING_LV40k_Warrior_Play_Posing"
	("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior")	anm_args(callback)				
		pstol_anm(lv40k_wrr_stand_idle)				pstol_anm1()					
		rifle_anm() 								rifle_anm1() 	
		mgun_anm()									mgun_anm1()
		bazooka_anm()								bazooka_anm1()	
		unrmd_anm(lv40k_wrr_stand_idle)				unrmd_anm1()			
	)
)