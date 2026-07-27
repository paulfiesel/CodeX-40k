
(Define "SC_FSM_POSING_LV40k_Termagaunt_Stop_All"
	{Ani_Stop "lv40k_Term_idle_stand"}
)

(Define "SC_FSM_POSING_LV40k_Termagaunt_Events"
	{on animation_end "lv40k_Term_idle_stand" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
)

; =============================================================================================================
; // POSING 
; =============================================================================================================

(Define "SC_FSM_POSING_LV40k_Termagaunt_Play_Posing"
	("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt")	anm_args(callback)				
		pstol_anm(lv40k_Term_idle_stand)			pstol_anm1()					
		rifle_anm() 								rifle_anm1() 	
		mgun_anm()									mgun_anm1()
		bazooka_anm()								bazooka_anm1()	
		unrmd_anm(lv40k_Term_idle_stand)			unrmd_anm1()			
	)
)