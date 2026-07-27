
(Define "SC_FSM_POSING_LV40k_Space_Marine_Stop_All"
	{Ani_Stop "lv40k_sms-idle_looking_bolter"}
	{Ani_Stop "lv40k_sms-idle_looking_h_bolter"}
	{Ani_Stop "lv40k_sms-idle_looking_pistol"}
	{Ani_Stop "lv40k_sms-idle_looking_l_cannon"}
	{Ani_Stop "lv40k_sms-idle_looking_plasmacannon"}
	{Ani_Stop "lv40k_sms-idle_looking_librarian"}
	{Ani_Stop "lv40k_sms-idle_looking_melee"}
	{Ani_Stop "lv40k_sms-idle_looking_hammer"}
	{Ani_Stop "lv40k_sms-idle_looking_missile"}
)

(Define "SC_FSM_POSING_LV40k_Space_Marine_Events"
	{on animation_end "lv40k_sms-idle_looking_bolter" 			{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "lv40k_sms-idle_looking_h_bolter" 		{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "lv40k_sms-idle_looking_pistol" 			{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "lv40k_sms-idle_looking_l_cannon" 		{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "lv40k_sms-idle_looking_plasmacannon" 	{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "lv40k_sms-idle_looking_librarian" 		{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "lv40k_sms-idle_looking_melee" 			{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "lv40k_sms-idle_looking_hammer" 			{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
	{on animation_end "lv40k_sms-idle_looking_missile" 			{Delay 0.1 "SC_FSM_POSING_Delay" ("SC_FSM_Define_Reset_Callback" state(POSING))}}
)

; =============================================================================================================
; // POSING 
; =============================================================================================================

(Define "SC_FSM_POSING_LV40k_Space_Marine_Play_Posing"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-idle_looking_h_bolter) 
		)
	else tagged "lv40k_human_tag_weapon_librarian"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-idle_looking_librarian) 
		)
	else tagged "lv40k_human_tag_weapon_lascannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-idle_looking_plasmacannon) 	
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-idle_looking_plasmacannon) 
		)
	else tagged "sc_human_tag_has_melee_weapon"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-idle_looking_melee) 
		)
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(callback)				
			pstol_anm(lv40k_sms-idle_looking_pistol)		pstol_anm1()					
			rifle_anm(lv40k_sms-idle_looking_bolter) 		rifle_anm1() 	
			mgun_anm(lv40k_sms-idle_looking_bolter) 		mgun_anm1()
			bazooka_anm(lv40k_sms-idle_looking_missile)		bazooka_anm1()	
			unrmd_anm(lv40k_sms-idle_looking_melee)			unrmd_anm1()			
		)
	}
)