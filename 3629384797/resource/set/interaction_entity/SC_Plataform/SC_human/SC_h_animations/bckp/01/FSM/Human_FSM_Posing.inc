
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

(Define "SC_FSM_POSING_Define_Play_Animations"
	{if not tagged "SC_H_Request_Tag_idle_animation"
		{tags add "SC_H_Request_Tag_idle_animation"}
		
		{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()									
				rifle_anm(lv40k_sms-bolter_idle) 			
				mgun_anm(lv40k_sms-h_bolter_idle)			
				bazooka_anm() 								
				melee_anm()									
				unrmd_anm()									
				anm_args(callback)		
			)
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"			
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1(lv40k_Term_idle_stand)
				rifle_anm() 									rifle_anm1()
				mgun_anm()										mgun_anm1()
				bazooka_anm() 									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(callback)		
			)
		else tagged "lv40k_human_tag_weapon_deffgun"				; <- temp!
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										pstol_anm1()
				rifle_anm() 									rifle_anm1(lv40k_lootaboy_idle)
				mgun_anm()										mgun_anm1(lv40k_lootaboy_idle)
				bazooka_anm() 									bazooka_anm1()
				melee_anm()										melee_anm1()
				unrmd_anm()										unrmd_anm1()
				anm_args(callback)		
			)
		else
			("SC_H_Request_Define_Play_Animation_States"	
				pstol_anm()										
				rifle_anm(stand_look_around_gun_mask) 	
				mgun_anm(stand_look_around_gun_mask)	
				bazooka_anm()							
				melee_anm()								
				unrmd_anm()									
				anm_args(callback)		
			)
		}
	}
)

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_POSING_Define_Enter"
)

(define "SC_FSM_POSING_Define_Event"
	("SC_FSM_POSING_Define_Play_Animations")
)

(define "SC_FSM_POSING_Define_Exit"
	{Tags remove "SC_H_Request_Tag_idle_animation"}
	
	{Ani_Stop "lv40k_sms-h_bolter_idle"}
	{Ani_Stop "lv40k_sms-bolter_idle"}
	{Ani_Stop "stand_look_around_gun_mask"}
	{Ani_Stop "lv40k_lootaboy_idle"}
	
	{Ani_stop "lv40k_Term_idle_stand"}
	
	
	{Ani_Play "lv40k_sms-shldr_fix"}	; // <- TEMP!
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

{on animation_end "lv40k_lootaboy_idle" 		("SC_FSM_Define_Reset_Callback" state(POSING))}
{on animation_end "stand_look_around_gun_mask" 	("SC_FSM_Define_Reset_Callback" state(POSING))}
{on animation_end "lv40k_sms-bolter_idle"		("SC_FSM_Define_Reset_Callback" state(POSING))}
{on animation_end "lv40k_sms-h_bolter_idle"		("SC_FSM_Define_Reset_Callback" state(POSING))}

{on animation_end "lv40k_Term_idle_stand"		("SC_FSM_Define_Reset_Callback" state(POSING))}
